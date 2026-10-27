/*
===========================================================================

Return to Castle Wolfenstein single player GPL Source Code
Copyright (C) 1999-2010 id Software LLC, a ZeniMax Media company.

This file is part of the Return to Castle Wolfenstein single player GPL Source Code (RTCW SP Source Code).

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

#pragma once

// Internal skeletal render data built by the MD5 text loader. No disk ABI.
#define SKEL_MAX_VERTS       6000
#define SKEL_MAX_TRIANGLES   8192
#define SKEL_MAX_BONES       128
#define SKEL_MAX_SURFACES    32
#define SKEL_MAX_TAGS        128


typedef struct {
	int boneIndex;              // global joint index
	float boneWeight;
	vec3_t offset;
} skelWeight_t;

typedef struct {
	vec3_t normal;
	vec2_t texCoords;
	int numWeights;
	skelWeight_t weights[1];     // variable sized
} skelVertex_t;

typedef struct {
	int indexes[3];
} skelTriangle_t;

typedef struct {
	int ident;

	char name[MAX_QPATH];           // polyset name
	char shader[MAX_QPATH];
	int shaderIndex;                // for in-game use


	int ofsHeader;                  // this will be a negative number

	int numVerts;
	int ofsVerts;

	int numTriangles;
	int ofsTriangles;


	// Bone references are a set of ints representing all the bones
	// present in any vertex weights for this surface.  This is
	// needed because a model may have surfaces that need to be
	// drawn at different sort times, and we don't want to have
	// to re-interpolate all the bones for each surface.
	int numBoneReferences;
	int ofsBoneReferences;

	int ofsEnd;                     // next surface follows
} skelSurface_t;

typedef struct {
	vec4_t rotation; // unit quaternion, model space
	vec3_t translation; // model space
} skelPose_t;

// NOTE: this only used at run-time
typedef struct {
	float matrix[3][3];             // 3x3 rotation
	vec3_t translation;             // translation vector
} skelBoneFrame_t;

typedef struct {
	vec3_t bounds[2];               // bounds of all surfaces of all LOD's for this frame
	vec3_t localOrigin;             // midpoint of bounds, used for sphere cull
	float radius;                   // dist from localOrigin to corner
	skelPose_t bones[1];              // [numBones]
} skelFrame_t;


typedef struct {
	char name[MAX_QPATH];           // name of tag
	float torsoWeight;
	int boneIndex;                  // our index in the bones
} skelTag_t;

#define BONEFLAG_TAG        1       // this bone is actually a tag

typedef struct {
	char name[MAX_QPATH];           // name of bone
	int parent;                     // not sure if this is required, no harm throwing it in
	float torsoWeight;              // scale torso rotation about torsoParent by this
	int flags;
} skelBoneInfo_t;

typedef struct {

	char name[MAX_QPATH];           // model name


	// frames and bones are shared by all levels of detail
	int numFrames;
	int numBones;
	int ofsFrames;                  // skelFrame_t[numFrames], variable stride
	int ofsBones;                   // skelBoneInfo_t[numBones]
	int torsoParent;                // index of bone that is the parent of the torso

	int numSurfaces;
	int ofsSurfaces;

	// tag data
	int numTags;
	int ofsTags;                    // skelTag_t[numTags]

	int ofsEnd;                     // end of file
} skelHeader_t;

qboolean R_LoadMD5( model_t *mod, const char *name );
void R_MD5QuatMatrix( const vec4_t q, vec3_t m[3] );
void R_MD5BlendQuat( const vec4_t a, const vec4_t b, float fraction, vec4_t out );
