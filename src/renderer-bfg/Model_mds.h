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

If you have questions concerning this license or the applicable additional terms, you may contact id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#ifndef __MODEL_MDS_H__
#define __MODEL_MDS_H__

#include "Model_local.h"

/*
========================================================================

.MDS skeletal model file format

The on-disk structures are redeclared from this engine's own
src/qcommon/qfiles.h, so the layouts match byte for byte.

========================================================================
*/

const int MDS_VERSION       = 4;
const int MDS_MAX_VERTS     = 6000;
const int MDS_MAX_TRIANGLES = 8192;
const int MDS_MAX_BONES     = 128;
const int MDS_MAX_SURFACES  = 32;
const int MDS_MAX_TAGS      = 128;

// the on-disk structures assume little-endian data, like the engine
// loaders they replace; all supported platforms are little-endian
typedef struct {
	int boneIndex;                  // these are indexes into the boneReferences,
	float boneWeight;               // not the global per-frame bone list
	float offset[3];
} mdsWeight_t;

typedef struct {
	float normal[3];
	float texCoords[2];
	int numWeights;
	int fixedParent;                // stay equi-distant from this parent
	float fixedDist;
	mdsWeight_t weights[1];     // variable sized
} mdsVertex_t;

typedef struct {
	int indexes[3];
} mdsTriangle_t;

typedef struct {
	int ident;

	char name[64];                  // surface name
	char shader[64];                // shader name
	int shaderIndex;                // for in-game use

	int minLod;

	int ofsHeader;                  // this will be a negative number

	int numVerts;
	int ofsVerts;

	int numTriangles;
	int ofsTriangles;

	int ofsCollapseMap;             // numVerts * int

	int numBoneReferences;
	int ofsBoneReferences;

	int ofsEnd;                     // next surface follows
} mdsSurface_t;

typedef struct {
	short angles[4];                // to be converted to axis at run-time
	short ofsAngles[2];             // PITCH/YAW, head in this direction from parent to go to the offset position
} mdsBoneFrameCompressed_t;

typedef struct {
	float bounds[2][3];             // bounds of all surfaces of all LOD's for this frame
	float localOrigin[3];           // midpoint of bounds, used for sphere cull
	float radius;                   // dist from localOrigin to corner
	float parentOffset[3];          // one bone is an ascendant of all other bones, it starts the hierachy at this position
	mdsBoneFrameCompressed_t bones[1];  // [numBones]
} mdsFrame_t;

typedef struct {
	char name[64];                  // name of tag
	float torsoWeight;
	int boneIndex;                  // our index in the bones
} mdsTag_t;

#define BONEFLAG_TAG            1       // this bone is actually a tag

typedef struct {
	char name[64];                  // name of bone
	int parent;                     // not sure if this is required, no harm throwing it in
	float torsoWeight;              // scale torso rotation about torsoParent by this
	float parentDist;
	int flags;
} mdsBoneInfo_t;

typedef struct {
	int ident;
	int version;

	char name[64];                  // model name

	float lodScale;
	float lodBias;

	// frames and bones are shared by all levels of detail
	int numFrames;
	int numBones;
	int ofsFrames;                  // mdsFrame_t[numFrames]
	int ofsBones;                   // mdsBoneInfo_t[numBones]
	int torsoParent;                // index of bone that is the parent of the torso

	int numSurfaces;
	int ofsSurfaces;

	// tag data
	int numTags;
	int ofsTags;                    // mdsTag_t[numTags]

	int ofsEnd;                     // end of file
} mdsHeader_t;

// the sizes must match the on-disk layout exactly or the whole file reads wrong
static_assert( sizeof( mdsWeight_t ) == 20, "unexpected mds weight size" );
static_assert( sizeof( mdsVertex_t ) == 52, "unexpected mds vertex size" );
static_assert( sizeof( mdsTriangle_t ) == 12, "unexpected mds triangle size" );
static_assert( sizeof( mdsSurface_t ) == 176, "unexpected mds surface size" );
static_assert( sizeof( mdsBoneFrameCompressed_t ) == 12, "unexpected mds bone frame size" );
static_assert( sizeof( mdsFrame_t ) == 64, "unexpected mds frame size" );
static_assert( sizeof( mdsTag_t ) == 72, "unexpected mds tag size" );
static_assert( sizeof( mdsBoneInfo_t ) == 80, "unexpected mds bone info size" );
static_assert( sizeof( mdsHeader_t ) == 120, "unexpected mds header size" );

/*

idRenderModelMDS

The mds format is skeletal: the vertices carry bone weights and the
frames store compressed bone poses. Until the engine integration hooks
up the skeletal animation, the adapter computes the frame 0 bind pose
at load time and bakes the weighted vertices into static surfaces,
following R_CalcBone in src/renderer/tr_animation.c and the vertex
skinning in RB_SurfaceAnim for the pose math.

The shader names stay in the raw file copy until the material phase
resolves them.

*/

// the frame 0 pose of a single bone
struct mdsBonePose_t {
	idVec3 translation;
	float matrix[3][3];         // rotation
};

class idRenderModelMDS : public idRenderModelStatic {
public:
idRenderModelMDS();
virtual ~idRenderModelMDS();

virtual void            InitFromFile( const char *fileName );
virtual dynamicModel_t  IsDynamicModel() const;
virtual idRenderModel * InstantiateDynamicModel( const struct renderEntity_s *ent, const struct viewDef_t *view, idRenderModel *cachedModel );

private:
mdsHeader_t *           mds;
};

#endif /* !__MODEL_MDS_H__ */
