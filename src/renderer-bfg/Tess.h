/*
===========================================================================

Return to Castle Wolfenstein single player GPL Source Code
Copyright (C) 1999-2010 id Software LLC, a ZeniMax Media company.

This file is part of the Return to Castle Wolfenstein single player GPL Source Code ("RTCW SP Source Code").

RTCW SP Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

RTCW SP Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with RTCW SP Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the RTCW SP Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the RTCW SP Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#ifndef __TESS_H__
#define __TESS_H__

#include "Backend.h"
#include "Material.h"

/*
===============================================================================

  The tesselator and the stage iterator

  The shaderCommands_t of src/renderer/tr_local.h and the back end of
  src/renderer/tr_shade.c and tr_shade_calc.c of this code base: the
  surface functions fill the tesselator with vertexes and indexes,
  RB_BeginSurface/RB_EndSurface frame a batch, and the stage
  iterator computes the colors and texture coordinates of every pass
  and issues the GL drawing calls.

  Like the image upload, nothing drives this yet: the module has no
  live GL context and no surface functions until the backend draw
  phase wires the draw loop. The dynamic light projection, the fog
  pass and the fog texture coordinate calculation land with their
  own phases, as documented at their call sites.

  The vector math is the engine's q_shared.h helpers as inline
  functions; VectorMA comes from idlib's math/Vector.h, which carries
  the same macro.

===============================================================================
*/

// engine src/renderer/tr_local.h
#define NUM_TEXTURE_BUNDLES  2
#define GL_INDEX_TYPE        GL_UNSIGNED_INT

// engine q_shared.h float conversion, the id386 assembly variant is
// not carried over
#define myftol( x )  ( ( int )( x ) )

typedef byte color4ub_t[4];

// stageVars_t of src/renderer/tr_local.h, verbatim
typedef struct stageVars {
	color4ub_t colors[SHADER_MAX_VERTEXES];
	vec2_t texcoords[NUM_TEXTURE_BUNDLES][SHADER_MAX_VERTEXES];
} stageVars_t;

// shaderCommands_t of src/renderer/tr_local.h: the stages are the
// parsed stages of the material instead of the engine's dynamically
// allocated stage pointers, so the stage list is an array of const
// stage pointers; the ATI_tess flag of the pn_triangles extension is
// not carried over
typedef struct {
	glIndex_t indexes[SHADER_MAX_INDEXES];
	vec4_t xyz[SHADER_MAX_VERTEXES];
	vec4_t normal[SHADER_MAX_VERTEXES];
	vec2_t texCoords[SHADER_MAX_VERTEXES][2];
	color4ub_t vertexColors[SHADER_MAX_VERTEXES];
	int vertexDlightBits[SHADER_MAX_VERTEXES];

	stageVars_t svars;

	color4ub_t constantColor255[SHADER_MAX_VERTEXES];

	const idMaterial *shader;
	float shaderTime;
	int fogNum;

	int dlightBits;         // or together of all vertexDlightBits

	int numIndexes;
	int numVertexes;

	// info extracted from current shader
	int numPasses;
	void ( *currentStageIteratorFunc )( void );
	const shaderStage_t *xstages[MAX_SHADER_STAGES];
} shaderCommands_t;

extern shaderCommands_t tess;

// clears the tesselator and fills the constant white color the
// lightmapped multitexture path reads its vertex colors from, the
// memset of R_Init in src/renderer/tr_init.c
void R_InitTess( void );

void RB_CheckOverflow( int verts, int indexes );
#define RB_CHECKOVERFLOW( v,i ) if ( tess.numVertexes + ( v ) >= SHADER_MAX_VERTEXES || tess.numIndexes + ( i ) >= SHADER_MAX_INDEXES ) {RB_CheckOverflow( v,i );}

void RB_BeginSurface( const idMaterial *shader, int fogNum );
void RB_EndSurface( void );

// the stage iterators, the fast paths and the generic path of
// src/renderer/tr_shade.c
void RB_StageIteratorGeneric( void );
void RB_StageIteratorVertexLitTexture( void );
void RB_StageIteratorLightmappedMultitexture( void );

// picks the fastest iterator a material can draw with, the
// ComputeStageIteratorFunc of src/renderer/tr_shader.c, called at the
// end of idMaterial::Finish like the engine calls it in FinishShader;
// the sky iterator of the engine lands with the sky phase, sky
// materials draw through the generic iterator until then
void R_ComputeStageIteratorFunc( class idMaterial *shader );

// the deformations of src/renderer/tr_shade_calc.c; the deform
// calculators flip the wave frequency of the deform in place and
// back like the engine does, so they take a non-const deform
void RB_DeformTessGeometry( void );
void GlobalVectorToLocal( const vec3_t in, vec3_t out );

void RB_CalcDeformVertexes( deformStage_t *ds );
void RB_CalcDeformNormals( deformStage_t *ds );
void RB_CalcBulgeVertexes( deformStage_t *ds );
void RB_CalcMoveVertexes( deformStage_t *ds );

void RB_CalcStretchTexCoords( const waveForm_t *wf, float *st );
void RB_CalcSwapTexCoords( float *st );
void RB_CalcTurbulentTexCoords( const waveForm_t *wf, float *st );
void RB_CalcScaleTexCoords( const float scale[2], float *st );
void RB_CalcScrollTexCoords( const float scrollSpeed[2], float *st );
void RB_CalcTransformTexCoords( const texModInfo_t *tmi, float *st );
void RB_CalcRotateTexCoords( float degsPerSecond, float *st );

void RB_CalcEnvironmentTexCoords( float *st );
void RB_CalcFireRiseEnvTexCoords( float *st );

void RB_CalcColorFromEntity( unsigned char *dstColors );
void RB_CalcColorFromOneMinusEntity( unsigned char *dstColors );
void RB_CalcAlphaFromEntity( unsigned char *dstColors );
void RB_CalcAlphaFromOneMinusEntity( unsigned char *dstColors );
void RB_CalcWaveColor( const waveForm_t *wf, unsigned char *dstColors );
void RB_CalcWaveAlpha( const waveForm_t *wf, unsigned char *dstColors );
void RB_CalcSpecularAlpha( unsigned char *alphas );
void RB_CalcDiffuseColor( unsigned char *colors );

// the quad stamp helpers of src/renderer/tr_surface.c the text and
// sprite deformations build their geometry with
void RB_AddQuadStamp( vec3_t origin, vec3_t left, vec3_t up, byte *color );
void RB_AddQuadStampExt( vec3_t origin, vec3_t left, vec3_t up, byte *color, float s1, float t1, float s2, float t2 );

//
// the vector math of the engine's q_shared.h, as inline functions
//

// the origin vector the engine reads for "no offset" vector math,
// the engine's vec3_origin of q_shared.h; idlib already owns that
// name for its idVec3, so the array spells it differently
static float originVec3[3] = { 0, 0, 0 };

static ID_INLINE float DotProduct( const vec3_t x, const vec3_t y ) {
	return x[0] * y[0] + x[1] * y[1] + x[2] * y[2];
}

static ID_INLINE void VectorSubtract( const vec3_t a, const vec3_t b, vec3_t c ) {
	c[0] = a[0] - b[0];
	c[1] = a[1] - b[1];
	c[2] = a[2] - b[2];
}

static ID_INLINE void VectorAdd( const vec3_t a, const vec3_t b, vec3_t c ) {
	c[0] = a[0] + b[0];
	c[1] = a[1] + b[1];
	c[2] = a[2] + b[2];
}

static ID_INLINE void VectorCopy( const vec3_t a, vec3_t b ) {
	b[0] = a[0];
	b[1] = a[1];
	b[2] = a[2];
}

static ID_INLINE void VectorScale( const vec3_t a, float s, vec3_t b ) {
	b[0] = a[0] * s;
	b[1] = a[1] * s;
	b[2] = a[2] * s;
}

static ID_INLINE void VectorNegate( const vec3_t a, vec3_t b ) {
	b[0] = -a[0];
	b[1] = -a[1];
	b[2] = -a[2];
}

static ID_INLINE void VectorSet( vec3_t a, float x, float y, float z ) {
	a[0] = x;
	a[1] = y;
	a[2] = z;
}

static ID_INLINE void VectorClear( vec3_t a ) {
	a[0] = a[1] = a[2] = 0.0f;
}

static ID_INLINE bool VectorCompare( const vec3_t a, const vec3_t b ) {
	return ( a[0] == b[0] && a[1] == b[1] && a[2] == b[2] );
}

static ID_INLINE void CrossProduct( const vec3_t v1, const vec3_t v2, vec3_t cross ) {
	cross[0] = v1[1] * v2[2] - v1[2] * v2[1];
	cross[1] = v1[2] * v2[0] - v1[0] * v2[2];
	cross[2] = v1[0] * v2[1] - v1[1] * v2[0];
}

static ID_INLINE float VectorLength( const vec3_t v ) {
	return ( float )sqrt( v[0] * v[0] + v[1] * v[1] + v[2] * v[2] );
}

static ID_INLINE float VectorLengthSquared( const vec3_t v ) {
	return v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
}

// rotates the vector by the transposed rotation matrix, the engine
// macro of q_shared.h
static ID_INLINE void VectorRotate( const vec3_t in, vec3_t matrix[3], vec3_t out ) {
	out[0] = DotProduct( in, matrix[0] );
	out[1] = DotProduct( in, matrix[1] );
	out[2] = DotProduct( in, matrix[2] );
}

// the reciprocal square root the engine approximates in assembly
static ID_INLINE float Q_rsqrt( float f ) {
	return 1.0f / ( float )sqrt( f );
}

static ID_INLINE float VectorNormalize( vec3_t v ) {
	float length = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];

	length = ( float )sqrt( length );
	if ( length ) {
		float ilength = 1.0f / length;
		v[0] *= ilength;
		v[1] *= ilength;
		v[2] *= ilength;
	}
	return length;
}

static ID_INLINE void VectorNormalizeFast( vec3_t v ) {
	VectorNormalize( v );
}

#endif /* !__TESS_H__ */
