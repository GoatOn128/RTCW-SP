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

#ifndef __MODEL_MDC_H__
#define __MODEL_MDC_H__

#include "Model_md3.h"

/*
========================================================================

.MDC compressed triangle model file format

The on-disk structures are redeclared from this engine's own
src/qcommon/qfiles.h. The mdc format stores a set of base frames and
delta-compresses the remaining frames against them, which is why the
adapter decompresses every frame once at load instead of keeping the
file around for the frame lerping.

========================================================================
*/

const int MDC_VERSION       = 2;

// version history:
// 1 - original
// 2 - changed tag structure so it only lists the names once

const int MDC_MAX_OFS       = 127;      // to be safe
#define MDC_DIST_SCALE      0.05f       // lower for more accuracy, but less range

const int NUMMDCVERTEXNORMALS = 256;

typedef struct {
	unsigned int ofsVec;                    // offset direction from the last base frame
} mdcXyzCompressed_t;

typedef struct {
	char name[64];                      // tag name
} mdcTagName_t;

typedef struct {
	short xyz[3];
	short angles[3];
} mdcTag_t;

/*
** mdcSurface_t
**
** CHUNK				SIZE
** header				sizeof( mdcSurface_t )
** shaders				sizeof( md3Shader_t ) * numShaders
** triangles[0]			sizeof( md3Triangle_t ) * numTriangles
** st					sizeof( md3St_t ) * numVerts
** XyzNormals			sizeof( md3XyzNormal_t ) * numVerts * numBaseFrames
** XyzCompressed		sizeof( mdcXyzCompressed_t ) * numVerts * numCompFrames
** frameBaseFrames		sizeof( short ) * numFrames
** frameCompFrames		sizeof( short ) * numFrames (-1 if frame is a baseFrame)
*/
typedef struct {
	int ident;

	char name[64];                      // polyset name

	int flags;
	int numCompFrames;              // all surfaces in a model should have the same
	int numBaseFrames;              // ditto

	int numShaders;                 // all surfaces in a model should have the same
	int numVerts;

	int numTriangles;
	int ofsTriangles;

	int ofsShaders;                 // offset from start of mdcSurface_t
	int ofsSt;                          // texture coords are common for all frames
	int ofsXyzNormals;              // numVerts * numBaseFrames
	int ofsXyzCompressed;           // numVerts * numCompFrames

	int ofsFrameBaseFrames;         // numFrames
	int ofsFrameCompFrames;         // numFrames

	int ofsEnd;                     // next surface follows
} mdcSurface_t;

typedef struct {
	int ident;
	int version;

	char name[64];                      // model name

	int flags;

	int numFrames;
	int numTags;
	int numSurfaces;

	int numSkins;

	int ofsFrames;                      // offset for first frame, stores the bounds and localOrigin
	int ofsTagNames;                    // numTags
	int ofsTags;                        // numFrames * numTags
	int ofsSurfaces;                    // first surface, others follow

	int ofsEnd;                         // end of file
} mdcHeader_t;

// the sizes must match the on-disk layout exactly or the whole file reads wrong
static_assert( sizeof( mdcXyzCompressed_t ) == 4, "unexpected mdc compressed size" );
static_assert( sizeof( mdcTagName_t ) == 64, "unexpected mdc tag name size" );
static_assert( sizeof( mdcTag_t ) == 12, "unexpected mdc tag size" );
static_assert( sizeof( mdcSurface_t ) == 124, "unexpected mdc surface size" );
static_assert( sizeof( mdcHeader_t ) == 112, "unexpected mdc header size" );

/*

idRenderModelMDC

The mdc adapter decompresses every frame at load time, then behaves
like the md3 adapter: the frames are lerped on demand through the
entity shader parms and the shader names stay stored until the
material phase resolves them.

The compressed frame decode follows R_MDC_DecodeXyzCompressed and
LerpCMeshVertexes in the src/renderer code of this code base.

*/

// the decompressed frames of one mdc surface
struct mdcRuntimeSurface_t {
	idStr shaderName;                   // resolved by the material phase
	int numVerts;
	int numTriangles;
	triIndex_t *    indexes;
	idVec2 *        texCoords;
	int numFrames;
	float *         xyz;                // numFrames * numVerts * 3
	float *         normals;            // numFrames * numVerts * 3
};

class idRenderModelMDC : public idRenderModelStatic {
public:
idRenderModelMDC();
virtual ~idRenderModelMDC();

virtual void            InitFromFile( const char *fileName );
virtual dynamicModel_t  IsDynamicModel() const;
virtual idRenderModel * InstantiateDynamicModel( const struct renderEntity_s *ent, const struct viewDef_t *view, idRenderModel *cachedModel );
virtual idBounds        Bounds( const struct renderEntity_s *ent ) const;

private:
void                    FreeRuntimeSurfaces();

mdcHeader_t *           mdc;                    // the raw file copy, holds the frame bounds
idList<mdcRuntimeSurface_t, TAG_MODEL>  mdcSurfaces;
};

#endif /* !__MODEL_MDC_H__ */
