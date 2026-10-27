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
but WITHOUT ANY WARRANTY; without the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with RTCW SP Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the RTCW SP Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied RTCW SP Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#ifndef __MATERIAL_H__
#define __MATERIAL_H__

#include "../idlib/Str.h"

class idImage;

/*
===============================================================================

	The material system of the BFG based renderer.

	The stage model, the GL state bits, the sort order, the surface and
	content flags and the keyword set are the Q3/RTCW shader system of
	this code base (src/renderer/tr_local.h, src/renderer/tr_shader.c),
	kept verbatim so the existing .shader scripts parse with their
	original behavior. The class shape (idMaterial with stage accessors,
	the coverage enum) follows the BFG renderer's idMaterial.

	The BFG expression-register stages are not ported: the register model
	drives the Doom3 interaction lighting, which this renderer replaces
	with the Q3 lightmap pipeline, so the Q3 rgbGen, alphaGen, tcGen and
	tcMod semantics are kept instead.

	The texture stages hold idImage pointers; the image manager creates
	them from the shader image names when the definition parses, the
	same point the engine loads its stage images. The videoMap stages
	keep the video file name instead, the cinematic playback is
	deferred to the client integration. The names "_white" and
	"_dlight" are the internal image markers for $whiteimage and $dlight.

===============================================================================
*/

// GL state bits, from src/renderer/tr_local.h of this code base
#define GLS_SRCBLEND_ZERO                       0x00000001
#define GLS_SRCBLEND_ONE                        0x00000002
#define GLS_SRCBLEND_DST_COLOR                  0x00000003
#define GLS_SRCBLEND_ONE_MINUS_DST_COLOR        0x00000004
#define GLS_SRCBLEND_SRC_ALPHA                  0x00000005
#define GLS_SRCBLEND_ONE_MINUS_SRC_ALPHA        0x00000006
#define GLS_SRCBLEND_DST_ALPHA                  0x00000007
#define GLS_SRCBLEND_ONE_MINUS_DST_ALPHA        0x00000008
#define GLS_SRCBLEND_ALPHA_SATURATE             0x00000009
#define GLS_SRCBLEND_BITS                       0x0000000f

#define GLS_DSTBLEND_ZERO                       0x00000010
#define GLS_DSTBLEND_ONE                       0x00000020
#define GLS_DSTBLEND_SRC_COLOR                  0x00000030
#define GLS_DSTBLEND_ONE_MINUS_SRC_COLOR        0x00000040
#define GLS_DSTBLEND_SRC_ALPHA                 0x00000050
#define GLS_DSTBLEND_ONE_MINUS_SRC_ALPHA        0x00000060
#define GLS_DSTBLEND_DST_ALPHA                  0x00000070
#define GLS_DSTBLEND_ONE_MINUS_DST_ALPHA        0x00000080
#define GLS_DSTBLEND_BITS                       0x000000f0

#define GLS_DEPTHMASK_TRUE                      0x00000100

#define GLS_POLYMODE_LINE                       0x00001000

#define GLS_DEPTHTEST_DISABLE                   0x00010000
#define GLS_DEPTHFUNC_EQUAL                     0x00020000

#define GLS_ATEST_GT_0                          0x10000000
#define GLS_ATEST_LT_80                         0x20000000
#define GLS_ATEST_GE_80                         0x40000000
#define GLS_ATEST_BITS                          0x70000000

#define GLS_DEFAULT                             GLS_DEPTHMASK_TRUE

// lightmap index values passed to the material manager, from tr_shader.c
#define LIGHTMAP_2D                             -4
#define LIGHTMAP_BY_VERTEX                      -3
#define LIGHTMAP_WHITEIMAGE                     -2
#define LIGHTMAP_NONE                           -1

// surface and content flags a shader can set with surfaceparm, values
// from src/qcommon/surfaceflags.h of this code base
#define CONTENTS_SOLID                          0x00000001  // should literally be used for the simplest of worlds
#define CONTENTS_LAVA                           0x00000008  // very lethal
#define CONTENTS_SLIME                          0x00000010  // mildly damaging
#define CONTENTS_WATER                         0x00000020  // liquids, generally swimmable
#define CONTENTS_FOG                            0x00000040  // hla kaerva
#define CONTENTS_MISSILECLIP                   0x00000080  // missiles (movement sensitive objects) can hit this
#define CONTENTS_AI_NOSIGHT                    0x00001000  // ai cannot see through this
#define CONTENTS_CLIPSHOT                      0x00002000  // bullets can pass through
#define CONTENTS_AREAPORTAL                    0x00008000
#define CONTENTS_PLAYERCLIP                    0x00010000
#define CONTENTS_MONSTERCLIP                   0x00020000
#define CONTENTS_CLUSTERPORTAL                 0x00100000
#define CONTENTS_DONOTENTER                    0x00200000  // ai should not enter this
#define CONTENTS_DONOTENTER_LARGE              0x00400000  // larger characters should not enter this
#define CONTENTS_ORIGIN                        0x01000000  // removed before bsping
#define CONTENTS_BODY                          0x02000000
#define CONTENTS_CORPSE                        0x04000000
#define CONTENTS_DETAIL                        0x08000000  // not used for bsp generation, added in the BSP process
#define CONTENTS_STRUCTURAL                    0x10000000
#define CONTENTS_TRANSLUCENT                   0x20000000  // legacy, todo: remove
#define CONTENTS_NODROP                        0x80000000

#define SURF_NODAMAGE                           0x00000001  // no falling damage when hitting this surface
#define SURF_SLICK                              0x00000002  // effects game physics
#define SURF_SKY                               0x00000004  // don't draw, but add to skybox
#define SURF_LADDER                            0x00000008
#define SURF_NOIMPACT                          0x00000010  // no impact
#define SURF_NOMARKS                           0x00000020  // no decals
#define SURF_CERAMIC                           0x00000040  //----(SA) added
#define SURF_NODRAW                             0x00000080  // don't bother referencing the texture
#define SURF_HINT                               0x00000100  // make a primary bsp splitter
#define SURF_NOLIGHTMAP                        0x00000400  // never dlight this surface
#define SURF_POINTLIGHT                        0x00000800  // compile a point light at each vertex
#define SURF_METAL                             0x00001000  // Clan Khan wants a SHINY CHROME EDITION
#define SURF_NOSTEPS                           0x00002000
#define SURF_NONSOLID                          0x00004000  // don't collide against curves with this set
#define SURF_LIGHTFILTER                       0x00008000  // act as a light filter during lighting
#define SURF_ALPHASHADOW                       0x00010000  // cast alpha shadows
#define SURF_NODLIGHT                          0x00020000  // don't dlight this surface
#define SURF_WOOD                              0x00040000  //----(SA) added for bullet impact
#define SURF_GRASS                             0x00080000
#define SURF_GRAVEL                            0x00100000
#define SURF_GLASS                             0x00200000  //----(SA) added for bullet impact
#define SURF_SNOW                              0x00400000  //----(SA) added for snow
#define SURF_ROOF                              0x00800000  //----(SA) so we can walk on roofs
#define SURF_RUBBLE                            0x01000000  //----(SA) added for bullet impact
#define SURF_CARPET                            0x02000000  //----(SA) added
#define SURF_MONSTERSLICK                      0x04000000  //----(SA) added
#define SURF_MONSLICK_W                        0x08000000  //----(SA) added
#define SURF_MONSLICK_N                        0x10000000  //----(SA) added
#define SURF_MONSLICK_E                        0x20000000  //----(SA) added
#define SURF_MONSLICK_S                        0x40000000  //----(SA) added

// stage limits, from src/renderer/tr_local.h of this code base
const int MAX_SHADER_STAGES      = 8;
const int TR_MAX_TEXMODS         = 4;
const int MAX_IMAGE_ANIMATIONS   = 16;
const int MAX_SHADER_DEFORMS     = 3;

typedef enum {
	SS_BAD,
	SS_PORTAL,          // mirrors, portals, viewscreens
	SS_ENVIRONMENT,     // sky box
	SS_OPAQUE,          // opaque

	SS_DECAL,           // scorch marks, etc.
	SS_SEE_THROUGH,     // ladders, grates, grills that may have small blended edges
	                    // in addition to alpha test
	SS_BANNER,

	SS_FOG,

	SS_UNDERWATER,      // for items that should be drawn in front of the water plane

	SS_BLEND0,          // regular transparency and filters
	SS_BLEND1,          // generally only used for additive type effects
	SS_BLEND2,
	SS_BLEND3,

	SS_BLEND6,
	SS_STENCIL_SHADOW,
	SS_ALMOST_NEAREST,  // gun smoke puffs

	SS_NEAREST          // blood blobs
} shaderSort_t;

typedef enum {
	GF_NONE,

	GF_SIN,
	GF_SQUARE,
	GF_TRIANGLE,
	GF_SAWTOOTH,
	GF_INVERSE_SAWTOOTH,

	GF_NOISE

} genFunc_t;

typedef enum {
	DEFORM_NONE,
	DEFORM_WAVE,
	DEFORM_NORMALS,
	DEFORM_BULGE,
	DEFORM_MOVE,
	DEFORM_PROJECTION_SHADOW,
	DEFORM_AUTOSPRITE,
	DEFORM_AUTOSPRITE2,
	DEFORM_TEXT0,
	DEFORM_TEXT1,
	DEFORM_TEXT2,
	DEFORM_TEXT3,
	DEFORM_TEXT4,
	DEFORM_TEXT5,
	DEFORM_TEXT6,
	DEFORM_TEXT7
} deform_t;

typedef enum {
	AGEN_IDENTITY,
	AGEN_SKIP,
	AGEN_ENTITY,
	AGEN_ONE_MINUS_ENTITY,
	AGEN_NORMALZFADE,   // Ridah
	AGEN_VERTEX,
	AGEN_ONE_MINUS_VERTEX,
	AGEN_LIGHTING_SPECULAR,
	AGEN_WAVEFORM,
	AGEN_PORTAL,
	AGEN_CONST
} alphaGen_t;

typedef enum {
	CGEN_BAD,
	CGEN_IDENTITY_LIGHTING, // tr.identityLight
	CGEN_IDENTITY,          // always (1,1,1,1)
	CGEN_ENTITY,            // grabbed from entity's modulate field
	CGEN_ONE_MINUS_ENTITY,  // grabbed from 1 - entity.modulate
	CGEN_EXACT_VERTEX,      // tess.vertexColors
	CGEN_VERTEX,            // tess.vertexColors * tr.identityLight
	CGEN_ONE_MINUS_VERTEX,
	CGEN_WAVEFORM,          // programmatically generated
	CGEN_LIGHTING_DIFFUSE,
	CGEN_FOG,               // standard fog
	CGEN_CONST              // fixed color
} colorGen_t;

typedef enum {
	TCGEN_BAD,
	TCGEN_IDENTITY,         // clear to 0,0
	TCGEN_LIGHTMAP,
	TCGEN_TEXTURE,
	TCGEN_ENVIRONMENT_MAPPED,
	TCGEN_FIRERISEENV_MAPPED,
	TCGEN_FOG,
	TCGEN_VECTOR            // S and T from world coordinates
} texCoordGen_t;

typedef enum {
	ACFF_NONE,
	ACFF_MODULATE_RGB,
	ACFF_MODULATE_RGBA,
	ACFF_MODULATE_ALPHA
} acff_t;

typedef enum {
	TMOD_NONE,
	TMOD_TRANSFORM,
	TMOD_TURBULENT,
	TMOD_SCROLL,
	TMOD_SCALE,
	TMOD_STRETCH,
	TMOD_ROTATE,
	TMOD_ENTITY_TRANSLATE,
	TMOD_SWAP
} texMod_t;

typedef enum {
	CT_FRONT_SIDED,
	CT_BACK_SIDED,
	CT_TWO_SIDED
} cullType_t;

typedef enum {
	MC_BAD,
	MC_OPAQUE,      // completely fills the triangle, will have black drawn on fillDepthBuffer
	MC_PERFORATED,  // may have alpha tested holes
	MC_TRANSLUCENT  // blended with background
} materialCoverage_t;

typedef struct {
	genFunc_t func;

	float base;
	float amplitude;
	float phase;
	float frequency;
} waveForm_t;

typedef struct {
	texMod_t type;

	// used for TMOD_TURBULENT and TMOD_STRETCH
	waveForm_t wave;

	// used for TMOD_TRANSFORM
	float matrix[2][2];             // s' = s * m[0][0] + t * m[1][0] + trans[0]
	float translate[2];             // t' = s * m[0][1] + t * m[0][1] + trans[1]

	// used for TMOD_SCALE
	float scale[2];                 // s *= scale[0]
	// t *= scale[1]

	// used for TMOD_SCROLL
	float scroll[2];                // s' = s + scroll[0] * time
	// t' = t + scroll[1] * time

	// + = clockwise
	// - = counterclockwise
	float rotateSpeed;

} texModInfo_t;

typedef struct {
	deform_t deformation;               // vertex coordinate modification type

	float moveVector[3];
	waveForm_t deformationWave;
	float deformationSpread;

	float bulgeWidth;
	float bulgeHeight;
	float bulgeSpeed;
} deformStage_t;

typedef struct {
	float cloudHeight;
	idImage *outerbox[6];       // the six sides of the outer box, the parser appends _rt.._dn
	idImage *innerbox[6];       // the six sides of the inner box, the parser appends _rt.._dn
} skyParms_t;

typedef struct {
	float color[3];
	float depthForOpaque;
} fogParms_t;

typedef struct {
	// the stage images, created by the image manager at parse time like
	// the engine loads them in ParseStage; a lightmap bundle carries no
	// image, the surface lightmap binds at draw time
	idImage *images[MAX_IMAGE_ANIMATIONS];
	int numImages;
	float imageAnimationSpeed;

	// the videoMap file name; the cinematic playback is deferred to
	// the client integration
	idStr videoMapName;

	texCoordGen_t tcGen;
	float tcGenVectors[2][3];

	int numTexMods;
	texModInfo_t texMods[TR_MAX_TEXMODS];

	bool isLightmap;
	bool isVideoMap;
} textureBundle_t;

// the engine keeps two bundles per stage; the multitexture collapse
// in Finish fills bundle 1 when it merges two stages into one pass
typedef struct {
	bool active;

	textureBundle_t bundle[2];

	waveForm_t rgbWave;
	colorGen_t rgbGen;

	waveForm_t alphaWave;
	alphaGen_t alphaGen;

	byte constantColor[4];                      // for CGEN_CONST and AGEN_CONST

	unsigned stateBits;                         // GLS_xxxx mask

	acff_t adjustColorsForFog;

	// Ridah
	float zFadeBounds[2];

	bool isDetail;
	bool isFogged;              // used only for shaders that have fog disabled, so we can enable it for individual stages
} shaderStage_t;

class idMaterial {
public:
idMaterial();

// clears everything back to an inactive material
void                    Reset();

// builds the not-drawn default material
void                    InitDefault();

// builds the texture-only material for a name without an explicit
// shader definition, following the fallback flavors of R_FindShader
// in src/renderer/tr_shader.c of this code base
void                    InitTextureOnly( const char *name, int lightmapIndex );

// applies the stage defaulting and the sort order of FinishShader
// in src/renderer/tr_shader.c, and computes the coverage; must be
// called after the parser filled the stages
void                    Finish();

private:
// with r_vertexLight on, only a single pass renders; the best stage
// of the opaque shaders wins. Ported from VertexLightingCollapse in
// src/renderer/tr_shader.c
void                    VertexLightingCollapse();

// attempts to combine the two first stages into a single
// multitexture pass. Ported from CollapseMultitexture in
// src/renderer/tr_shader.c; the hardware checks of the engine drop
// out, this renderer always has the modern GL feature set
bool                    CollapseMultitexture();

public:

// accessors
const char *            GetName() const { return name.c_str(); }
int                     Sort() const { return sort; }
cullType_t              GetCullType() const { return cullType; }
bool                    ShouldCreateBackSides() const { return cullType == CT_BACK_SIDED; }
bool                    EntityMergable() const { return entityMergable; }
bool                    IsSky() const { return isSky; }
const skyParms_t &      GetSkyParms() const { return sky; }
const fogParms_t &      GetFogParms() const { return fogParms; }
int                     GetContentFlags() const { return contentFlags; }
int                     GetSurfaceFlags() const { return surfaceFlags; }
int                     GetNumDeforms() const { return numDeforms; }
const deformStage_t *   GetDeform( int index ) const { return &deforms[index]; }
int                     GetNumStages() const { return numStages; }
const shaderStage_t *   GetStage( int index ) const { return &stages[index]; }

// the coverage is computed in Finish
materialCoverage_t      Coverage() const { return coverage; }
bool                    IsFullyOpaque() const { return coverage == MC_OPAQUE; }

// materials with no stages are never drawn, like the engine's
// default shader
bool                    IsDrawn() const { return numStages > 0 || isSky; }

public:
// the script parser fills these directly, like the engine's parser
// fills the shader_t
idStr name;
bool defaulted;                                  // set when no valid shader definition or texture is behind it
bool explicitlyDefined;                          // set when a shader script defined it

int sort;                                         // shaderSort_t values, the engine also accepts arbitrary numeric sorts

int surfaceFlags;
int contentFlags;
bool entityMergable;
bool isSky;
skyParms_t sky;
fogParms_t fogParms;
float portalRange;

cullType_t cullType;
bool polygonOffset;
bool noMipMaps;
bool noPicMip;
bool characterMip;                    // picmip2: reduced mipping for the in-game character textures
bool noFog;
float clampTime;                      // state shaders can clamp their time, 0 means no clamp

int numDeforms;
deformStage_t deforms[MAX_SHADER_DEFORMS];

int numStages;
int multitextureEnv;                 // GL_MODULATE or GL_ADD when Finish merged two stages into one multitexture pass, 0 otherwise

// engine tr_local.h: the fastest stage iterator of the shader, picked
// once by R_ComputeStageIteratorFunc when the material is finished
void ( *optimalStageIteratorFunc )( void );

shaderStage_t stages[MAX_SHADER_STAGES];

int lightmapIndex;
materialCoverage_t coverage;
};

#endif /* !__MATERIAL_H__ */
