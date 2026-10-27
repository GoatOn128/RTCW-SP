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

#ifndef __BACKEND_H__
#define __BACKEND_H__

#include "RenderSystem.h"

/*
===============================================================================

  The backend state and the GL helpers

  This grows the backend slices of Shadow.h into the engine structures:
  the full reference entity of src/renderer/tr_types.h, the full
  orientation and GL state of src/renderer/tr_local.h, and the GL
  helper functions of src/renderer/tr_backend.c and the function
  tables and noise of src/renderer/tr_init.c and tr_noise.c.

  Like the image upload, nothing calls the GL helpers yet: the module
  has no live GL context until the backend draw phase wires the
  tesselator and the view draw loop into the frame commands. The
  front end fields arrive with the scene phase; the refdef and the
  view parameters below are the slices the backend reads.

  The spelling differs from the engine where C++ reserves the engine
  name: the orientation members spelled "or" are "orientation" here.

===============================================================================
*/

// engine type shims of src/qcommon/q_shared.h
typedef int qhandle_t;
typedef int qboolean;
typedef unsigned int glIndex_t;

// plain float vectors of the engine's q_shared.h
typedef float vec2_t[2];
typedef float vec3_t[3];
typedef float vec4_t[4];

// surface geometry limits of the engine, src/qcommon/qfiles.h
#define SHADER_MAX_VERTEXES 4000
#define SHADER_MAX_INDEXES  ( 6 * SHADER_MAX_VERTEXES )

// GL state bits of the engine, src/renderer/tr_local.h
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

// function tables of the engine's trGlobals_t, src/renderer/tr_local.h;
// they are module globals here until the front end tr globals land
#define FUNCTABLE_SIZE      1024
#define FUNCTABLE_SIZE2     10
#define FUNCTABLE_MASK      ( FUNCTABLE_SIZE - 1 )

// render string limits of src/renderer/tr_types.h
#define MAX_RENDER_STRINGS          8
#define MAX_RENDER_STRING_LENGTH    32

// renderfx flags of src/renderer/tr_types.h
#define RF_MINLIGHT         1
#define RF_THIRD_PERSON     2
#define RF_FIRST_PERSON     4
#define RF_DEPTHHACK        8
#define RF_NOSHADOW         64

#define RF_LIGHTING_ORIGIN  128
#define RF_SHADOW_PLANE     256
#define RF_WRAP_FRAMES      512

#define RF_HILIGHT          ( 1 << 8 )
#define RF_BLINK            ( 1 << 9 )

// refdef flags of src/renderer/tr_types.h
#define RDF_NOWORLDMODEL    1
#define RDF_HYPERSPACE      4
#define RDF_SKYBOXPORTAL    8
#define RDF_DRAWSKYBOX      16
#define RDF_UNDERWATER      ( 1 << 4 )
#define RDF_DRAWINGSKY      ( 1 << 5 )
#define RDF_SNOOPERVIEW     ( 1 << 6 )

typedef enum {
	RT_MODEL,
	RT_POLY,
	RT_SPRITE,
	RT_SPLASH,      // ripple effect
	RT_BEAM,
	RT_RAIL_CORE,
	RT_RAIL_CORE_TAPER,    // a modified core that creates a properly texture mapped core that's wider at one end
	RT_RAIL_RINGS,
	RT_LIGHTNING,
	RT_PORTALSURFACE,      // doesn't draw anything, just info for portals

	RT_MAX_REF_ENTITY_TYPE
} refEntityType_t;

// refEntity_t of src/renderer/tr_types.h, verbatim; the game passes
// this per entity each frame
typedef struct {
	refEntityType_t reType;
	int renderfx;

	qhandle_t hModel;               // opaque type outside refresh

	// most recent data
	vec3_t lightingOrigin;          // so multi-part models can be lit identically (RF_LIGHTING_ORIGIN)
	float shadowPlane;              // projection shadows go here, stencils go slightly lower

	vec3_t axis[3];                 // rotation vectors
	vec3_t torsoAxis[3];             // rotation vectors for torso section of skeletal animation
	qboolean nonNormalizedAxes;     // axis are not normalized, i.e. they have scale
	float origin[3];                // also used as MODEL_BEAM's "from"
	int frame;                      // also used as MODEL_BEAM's diameter
	int torsoFrame;                 // skeletal torso can have frame independant of legs frame

	vec3_t scale;

	// previous data for frame interpolation
	float oldorigin[3];             // also used as MODEL_BEAM's "to"
	int oldframe;
	int oldTorsoFrame;
	float backlerp;                 // 0.0 = current, 1.0 = old
	float torsoBacklerp;

	// texturing
	int skinNum;                    // inline skin index
	qhandle_t customSkin;           // NULL for default skin
	qhandle_t customShader;         // use one image for the entire thing

	// misc
	byte shaderRGBA[4];             // colors used by rgbgen entity shaders
	float shaderTexCoord[2];        // texture coordinates used by tcMod entity modifiers
	float shaderTime;              // subtracted from refdef time to control effect start times

	// extra sprite information
	float radius;
	float rotation;

	vec3_t fireRiseDir;

	// entity fading (gibs, debris, etc)
	int fadeStartTime, fadeEndTime;

	float hilightIntensity;

	int reFlags;

	int entityNum;                  // currentState.number, so we can attach rendering effects to specific entities (Zombie)
} refEntity_t;

// trRefEntity_t of src/renderer/tr_local.h, verbatim: a trRefEntity_t
// has all the information passed in by the client game, as well as
// some locally derived info
typedef struct {
	refEntity_t e;

	float axisLength;               // compensate for non-normalized axis

	qboolean needDlights;          // true for bmodels that touch a dlight
	qboolean lightingCalculated;
	vec3_t lightDir;               // normalized direction towards light
	vec3_t ambientLight;           // color normalized to 0-255
	int ambientLightInt;            // 32 bit rgba packed
	vec3_t directedLight;
	float brightness;
} trRefEntity_t;

// orientationr_t of src/renderer/tr_local.h, verbatim
typedef struct {
	vec3_t origin;              // in world coordinates
	vec3_t axis[3];             // orientation in world
	vec3_t viewOrigin;          // viewParms->or.origin in local coordinates
	float modelMatrix[16];
} orientationr_t;

// slice of the engine's viewParms_t; the front end grows it with the
// projection, the frustum and the portal plane when the scene phase
// culls and fills the views; the orientation member is spelled
// "orientation" because the engine name is a C++ keyword
typedef struct {
	orientationr_t orientation;     // engine name: or
	orientationr_t world;
	qboolean isPortal;              // true if this view is through a portal
	qboolean isMirror;             // the portal is a mirror, invert the face culling
} viewParms_t;

// slice of the engine's trRefdef_t; the dlights, coronas and polys of
// the scene arrive with their own phases, the portalsky fog with the
// fog phase
typedef struct {
	int time;                       // time in milliseconds for shader effects and other time dependent rendering issues
	int rdflags;                    // RDF_NOWORLDMODEL, etc

	float floatTime;                // tr.refdef.time / 1000.0

	// text messages for deform text shaders
	char text[MAX_RENDER_STRINGS][MAX_RENDER_STRING_LENGTH];

	int num_entities;
	trRefEntity_t *entities;
} trRefdef_t;

// backEndCounters_t of src/renderer/tr_local.h, verbatim
typedef struct {
	int c_surfaces, c_shaders, c_vertexes, c_indexes, c_totalIndexes;
	float c_overDraw;

	int c_dlightVertexes;
	int c_dlightIndexes;

	int c_flareAdds;
	int c_flareTests;
	int c_flareRenders;

	int msec;               // total msec for backend run
} backEndCounters_t;

// glstate_t of src/renderer/tr_local.h, verbatim; the renderer front
// end should never modify it
typedef struct {
	int currenttextures[2];
	int currenttmu;
	qboolean finishCalled;
	int texEnv[2];
	int faceCulling;
	unsigned long glStateBits;
} glstate_t;

// backEndState_t of src/renderer/tr_local.h: all state modified by
// the back end is separated from the front end state. The smpFrame
// member drops out, this renderer runs single threaded; the
// orientation member is spelled "orientation" because the engine
// name is a C++ keyword
typedef struct {
	trRefdef_t refdef;
	viewParms_t viewParms;
	orientationr_t orientation;     // engine name: or
	backEndCounters_t pc;
	qboolean isHyperspace;
	trRefEntity_t *currentEntity;
	qboolean skyRenderedThisView;   // flag for drawing sun

	qboolean projection2D;          // if qtrue, drawstretchpic doesn't need to change modes
	byte color2D[4];
	qboolean vertexes2D;             // shader needs to be finished
	trRefEntity_t entity2D;         // currentEntity will point at this when doing 2D rendering
} backEndState_t;

// slice of the engine's shaderCommands_t (tess) of src/renderer/tr_local.h
// until the tesselator phase lands: the shadow pass projects the
// tesselated geometry away from the light
typedef struct {
	glIndex_t indexes[SHADER_MAX_INDEXES];
	vec4_t xyz[SHADER_MAX_VERTEXES];
	int numIndexes;
	int numVertexes;
} shadowTess_t;

// the dormant backend globals; glConfig is the glconfig_t of
// RenderSystem.h, its stencilBits gate the shadow pass
extern shadowTess_t tess;
extern backEndState_t backEnd;
extern glstate_t glState;
extern glconfig_t glConfig;

// the wave form tables of the engine's trGlobals_t; the front end
// global tr lands with the scene phase, until then they live here
extern float sinTable[FUNCTABLE_SIZE];
extern float triangleTable[FUNCTABLE_SIZE];
extern float squareTable[FUNCTABLE_SIZE];
extern float sawToothTable[FUNCTABLE_SIZE];
extern float inverseSawToothTable[FUNCTABLE_SIZE];

// fills the wave form tables, the table loop of R_Init in
// src/renderer/tr_init.c
void R_InitTables( void );

// the noise of src/renderer/tr_noise.c, verbatim
void R_NoiseInit( void );
float R_NoiseGet4f( float x, float y, float z, float t );

// sets the GL state from the GLS_ bits, the engine's GL_State in
// src/renderer/tr_backend.c
void GL_State( unsigned long stateBits );

// binds an image on the current texture unit, tracking the bind
// cache of glstate_t, the engine's GL_Bind in
// src/renderer/tr_backend.c
void GL_Bind( class idImage *image );

// selects the texture unit for the multitexture paths, the engine's
// GL_SelectTexture
void GL_SelectTexture( int unit );

// sets the texture environment of the current unit, the engine's
// GL_TexEnv
void GL_TexEnv( int env );

// sets the face culling, flipping front and back for mirrored
// views, the engine's GL_Cull
void GL_Cull( int cullType );

// the GL state a fresh GL context starts with, the engine's
// GL_SetDefaultState in src/renderer/tr_init.c
void GL_SetDefaultState( void );

#endif /* !__BACKEND_H__ */
