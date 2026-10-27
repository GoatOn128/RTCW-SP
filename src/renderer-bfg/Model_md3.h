/*
===========================================================================

Doom 3 BFG Edition GPL Source Code
Copyright (C) 1993-2012 id Software LLC, a ZeniMax Media company.

This file is part of the Doom 3 BFG Edition GPL Source Code ("Doom 3 BFG Edition Source Code").

Doom 3 BFG Edition Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Doom 3 BFG Edition Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Doom 3 BFG Edition Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the Doom 3 BFG Edition Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the Doom 3 BFG Edition Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#ifndef __MODEL_MD3_H__
#define __MODEL_MD3_H__

#include "Model_local.h"

/*
========================================================================

.MD3 triangle model file format

The on-disk structures are redeclared from this engine's own
src/qcommon/qfiles.h, which carries the same format the BFG code base
loaded with its Model_md3.cpp, so the layouts match byte for byte.

========================================================================
*/

const int MD3_VERSION       = 15;
const int MD3_MAX_LODS      = 3;
const int MD3_MAX_TRIANGLES = 8192;     // per surface
const int MD3_MAX_VERTS     = 4096;     // per surface
const int MD3_MAX_FRAMES    = 1024;     // per model
const int MD3_MAX_SURFACES  = 32;       // per model
const int MD3_MAX_TAGS      = 16;       // per frame
const int MD3_MAX_SHADERS   = 256;      // per surface

// vertex scale
#define MD3_XYZ_SCALE       ( 1.0f / 64.0f )

// the on-disk structures assume little-endian data, like the engine
// loaders they replace; all supported platforms are little-endian
typedef struct {
	float bounds[2][3];
	float localOrigin[3];
	float radius;
	char name[16];
} md3Frame_t;

typedef struct {
	char name[64];                  // tag name
	float origin[3];
	float axis[3][3];
} md3Tag_t;

typedef struct {
	int ident;

	char name[64];                  // polyset name

	int flags;
	int numFrames;                  // all surfaces in a model should have the same

	int numShaders;             // all surfaces in a model should have the same
	int numVerts;

	int numTriangles;
	int ofsTriangles;

	int ofsShaders;             // offset from start of md3Surface_t
	int ofsSt;                      // texture coords are common for all frames
	int ofsXyzNormals;          // numVerts * numFrames

	int ofsEnd;                 // next surface follows
} md3Surface_t;

typedef struct {
	char name[64];
	int shaderIndex;                // for in-game use
} md3Shader_t;

typedef struct {
	int indexes[3];
} md3Triangle_t;

typedef struct {
	float st[2];
} md3St_t;

typedef struct {
	short xyz[3];
	short normal;                   // lat/long encoded
} md3XyzNormal_t;

typedef struct {
	int ident;
	int version;

	char name[64];                  // model name

	int flags;

	int numFrames;
	int numTags;
	int numSurfaces;

	int numSkins;

	int ofsFrames;                  // offset for first frame
	int ofsTags;                    // numFrames * numTags
	int ofsSurfaces;                // first surface, others follow

	int ofsEnd;                     // end of file
} md3Header_t;

// the sizes must match the on-disk layout exactly or the whole file reads wrong
static_assert( sizeof( md3Frame_t ) == 56, "unexpected md3 frame size" );
static_assert( sizeof( md3Tag_t ) == 112, "unexpected md3 tag size" );
static_assert( sizeof( md3Surface_t ) == 108, "unexpected md3 surface size" );
static_assert( sizeof( md3Shader_t ) == 68, "unexpected md3 shader size" );
static_assert( sizeof( md3Triangle_t ) == 12, "unexpected md3 triangle size" );
static_assert( sizeof( md3St_t ) == 8, "unexpected md3 st size" );
static_assert( sizeof( md3XyzNormal_t ) == 8, "unexpected md3 xyz normal size" );
static_assert( sizeof( md3Header_t ) == 112, "unexpected md3 header size" );

/*

idRenderModelMD3

Adapted from the BFG Model_md3.cpp: the raw file is kept in memory and
the frame lerping runs on it, the shader names stay in the raw data
until the material phase resolves them. The lat/long normal decode and
the frame validation come from this engine's own src/renderer code.

The engine drives the animation through the shader parms
(SHADERPARM_MD3_FRAME, SHADERPARM_MD3_LASTFRAME and
SHADERPARM_MD3_BACKLERP), like the BFG frontend does.

*/

class idRenderModelMD3 : public idRenderModelStatic {
public:
idRenderModelMD3();
virtual ~idRenderModelMD3();

virtual void            InitFromFile( const char *fileName );
virtual dynamicModel_t  IsDynamicModel() const;
virtual idRenderModel * InstantiateDynamicModel( const struct renderEntity_s *ent, const struct viewDef_t *view, idRenderModel *cachedModel );
virtual idBounds        Bounds( const struct renderEntity_s *ent ) const;

private:
void                    LerpMeshVertexes( srfTriangles_t *tri, const md3Surface_t *surf, const float backlerp, const int frame, const int oldframe ) const;

md3Header_t *           md3;
};

#endif /* !__MODEL_MD3_H__ */
