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

#ifndef __SHADOW_H__
#define __SHADOW_H__

#include "RenderSystem.h"

/*
===============================================================================

  The stencil shadow pass of the engine backend

  Ported from src/renderer/tr_shadows.c of this code base, with the GL
  state function it uses from src/renderer/tr_backend.c. The shadow
  volumes are planar projections: the silhouette edges of the
  tesselated surface project away from the entity light direction and
  write to the stencil buffer, front facing triangles increment it and
  back facing triangles decrement it, and RB_ShadowFinish darkens every
  pixel the volumes cover once the whole view has been drawn.

  Like the image upload, nothing calls this yet: the module has no live
  GL context until the backend phase, which wires RB_ShadowTessEnd into
  RB_EndSurface for the shadow shader, RB_ShadowFinish into the view
  draw loop after the world, RB_ProjectionShadowDeform into the
  DEFORM_PROJECTION_SHADOW stage of a material and the stencil clear
  bit into the frame buffer clear.

  The structures below are dormant slices of the engine's tr_local.h
  backend globals with the fields the shadow code reads; the backend
  phase grows them into the full structures. The spelling differs
  where C++ reserves the engine name: backEnd.or is orientation here.

===============================================================================
*/

// surface geometry limits of the engine, src/qcommon/qfiles.h
#define SHADER_MAX_VERTEXES 4000
#define SHADER_MAX_INDEXES  ( 6 * SHADER_MAX_VERTEXES )

// GL state bits of the engine, src/renderer/tr_local.h; GL_State
// consumes them and the backend reuses them
#define GLS_SRCBLEND_ZERO                       0x00000001
#define GLS_SRCBLEND_ONE                        0x00000002
#define GLS_SRCBLEND_DST_COLOR                  0x00000003
#define GLS_SRCBLEND_ONE_MINUS_DST_COLOR        0x00000004
#define GLS_SRCBLEND_SRC_ALPHA                  0x00000005
#define GLS_SRCBLEND_ONE_MINUS_SRC_ALPHA        0x00000006
#define GLS_SRCBLEND_DST_ALPHA                  0x00000007
#define GLS_SRCBLEND_ONE_MINUS_DST_ALPHA        0x00000008
#define GLS_SRCBLEND_ALPHA_SATURATE             0x00000009
#define     GLS_SRCBLEND_BITS                   0x0000000f

#define GLS_DSTBLEND_ZERO                       0x00000010
#define GLS_DSTBLEND_ONE                        0x00000020
#define GLS_DSTBLEND_SRC_COLOR                  0x00000030
#define GLS_DSTBLEND_ONE_MINUS_SRC_COLOR        0x00000040
#define GLS_DSTBLEND_SRC_ALPHA                  0x00000050
#define GLS_DSTBLEND_ONE_MINUS_SRC_ALPHA        0x00000060
#define GLS_DSTBLEND_DST_ALPHA                  0x00000070
#define GLS_DSTBLEND_ONE_MINUS_DST_ALPHA        0x00000080
#define     GLS_DSTBLEND_BITS                   0x000000f0

#define GLS_DEPTHMASK_TRUE                      0x00000100

#define GLS_POLYMODE_LINE                       0x00001000

#define GLS_DEPTHTEST_DISABLE                   0x00010000
#define GLS_DEPTHFUNC_EQUAL                     0x00020000

#define GLS_ATEST_GT_0                          0x10000000
#define GLS_ATEST_LT_80                         0x20000000
#define GLS_ATEST_GE_80                         0x40000000
#define     GLS_ATEST_BITS                      0x70000000

#define GLS_DEFAULT         GLS_DEPTHMASK_TRUE

// plain float vectors, the engine's vec_t types of q_shared.h
typedef float vec3_t[3];
typedef float vec4_t[4];

// slice of the engine's orientationr_t
typedef struct {
	vec3_t origin;              // in world coordinates
	vec3_t axis[3];            // orientation in world
} orientationr_t;

// slice of the engine's trRefEntity_t and its refEntity_t: the light
// direction and the projection shadow plane; the full entity lands
// with the entity lighting phase
typedef struct {
	vec3_t lightDir;            // normalized direction towards light
	float shadowPlane;          // projection shadows go here, stencils go slightly lower
} shadowRefEntity_t;

// slice of the engine's viewParms_t
typedef struct {
	bool isMirror;              // the portal is a mirror, invert the face culling
} shadowViewParms_t;

// slice of the engine's backEndState_t; the engine spells the
// orientation member "or", which is a reserved word in C++
typedef struct {
	shadowViewParms_t viewParms;
	orientationr_t orientation;
	shadowRefEntity_t *currentEntity;
} shadowBackEndState_t;

// slice of the engine's glstate_t
typedef struct {
	unsigned long glStateBits;  // GLS_xxxx mask
} shadowGlState_t;

// slice of the engine's shaderCommands_t (tess): the shadow pass
// projects the tesselated geometry away from the light
typedef struct {
	int indexes[SHADER_MAX_INDEXES];
	vec4_t xyz[SHADER_MAX_VERTEXES];
	int numIndexes;
	int numVertexes;
} shadowTess_t;

// the dormant backend globals, zero until the backend phase; glConfig
// is the glconfig_t of RenderSystem.h, its stencilBits gate the pass
extern shadowTess_t tess;
extern shadowBackEndState_t backEnd;
extern shadowGlState_t glState;
extern glconfig_t glConfig;

// sets the GL state from the GLS_ bits, the engine's GL_State in
// src/renderer/tr_backend.c
void GL_State( unsigned long stateBits );

// the stencil shadow volume pass over the tesselated surface of the
// current entity, the engine's RB_ShadowTessEnd
void RB_ShadowTessEnd( void );

// darkens everything inside the shadow volumes once per view, the
// engine's RB_ShadowFinish
void RB_ShadowFinish( void );

// the deform of a projection shadow material, the engine's
// RB_ProjectionShadowDeform
void RB_ProjectionShadowDeform( void );

#endif /* !__SHADOW_H__ */
