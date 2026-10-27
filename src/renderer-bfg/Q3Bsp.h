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

#ifndef __Q3BSP_H__
#define __Q3BSP_H__

#include "../idlib/precompiled.h"

/*
===============================================================================

	The on-disk structures of the Q3/RTCW .bsp files, redeclared here from
	src/qcommon/qfiles.h so the BFG based renderer does not depend on the
	engine headers, plus the runtime structures the BSP adapter fills in.

	The loader assumes little-endian data, like the engine loaders it
	replaces; all supported platforms are little-endian.

===============================================================================
*/

const int Q3_MAX_QPATH         = 64;
const int Q3_LIGHTMAP_SIZE     = 128;      // lightmap blocks are 128x128 RGB
const int Q3_LIGHTMAP_BYTES    = Q3_LIGHTMAP_SIZE * Q3_LIGHTMAP_SIZE * 3;
const int Q3_BSP_VERSION       = 47;

// lump indices in the BSP header
enum {
	LUMP_ENTITIES,
	LUMP_SHADERS,
	LUMP_PLANES,
	LUMP_NODES,
	LUMP_LEAFS,
	LUMP_LEAFSURFACES,
	LUMP_LEAFBRUSHES,
	LUMP_MODELS,
	LUMP_BRUSHES,
	LUMP_BRUSHSIDES,
	LUMP_DRAWVERTS,
	LUMP_DRAWINDEXES,
	LUMP_FOGS,
	LUMP_SURFACES,
	LUMP_LIGHTMAPS,
	LUMP_LIGHTGRID,
	LUMP_VISIBILITY,
	HEADER_LUMPS
};

typedef struct {
	int fileofs, filelen;
} q3BspLump_t;

typedef struct {
	int ident;
	int version;
	q3BspLump_t lumps[HEADER_LUMPS];
} q3BspHeader_t;

typedef struct {
	float mins[3], maxs[3];
	int firstSurface, numSurfaces;
	int firstBrush, numBrushes;
} q3BspDiskModel_t;

typedef struct {
	char shader[Q3_MAX_QPATH];
	int surfaceFlags;
	int contentFlags;
} q3BspDiskShader_t;

// plane x^1 is always the opposite of plane x
typedef struct {
	float normal[3];
	float dist;
} q3BspDiskPlane_t;

typedef struct {
	int planeNum;
	int children[2];            // negative numbers are -(leafs+1), not nodes
	int mins[3];                // for frustum culling
	int maxs[3];
} q3BspDiskNode_t;

typedef struct {
	int cluster;                // -1 = opaque cluster
	int area;

	int mins[3];                // for frustum culling
	int maxs[3];

	int firstLeafSurface;
	int numLeafSurfaces;

	int firstLeafBrush;
	int numLeafBrushes;
} q3BspDiskLeaf_t;

// the on-disk drawVert_t doubles as the runtime vertex; the patch
// subdivision and the surface loaders copy it verbatim
typedef struct {
	float xyz[3];
	float st[2];
	float lightmap[2];
	float normal[3];
	byte color[4];
} q3BspDrawVert_t;

typedef enum {
	Q3_MST_BAD,
	Q3_MST_PLANAR,
	Q3_MST_PATCH,
	Q3_MST_TRIANGLE_SOUP,
	Q3_MST_FLARE
} q3BspSurfaceType_t;

typedef struct {
	int shaderNum;
	int fogNum;
	int surfaceType;

	int firstVert;
	int numVerts;

	int firstIndex;
	int numIndexes;

	int lightmapNum;
	int lightmapX, lightmapY;
	int lightmapWidth, lightmapHeight;

	float lightmapOrigin[3];
	float lightmapVecs[3][3];   // for patches, [0] and [1] are lodbounds

	int patchWidth;
	int patchHeight;
} q3BspDiskSurface_t;

// the sizes must match the on-disk layout exactly or the whole file reads wrong
static_assert( sizeof( q3BspLump_t ) == 8, "unexpected BSP lump size" );
static_assert( sizeof( q3BspHeader_t ) == 8 + HEADER_LUMPS * sizeof( q3BspLump_t ), "unexpected BSP header size" );
static_assert( sizeof( q3BspDiskModel_t ) == 40, "unexpected BSP model size" );
static_assert( sizeof( q3BspDiskShader_t ) == 72, "unexpected BSP shader size" );
static_assert( sizeof( q3BspDiskPlane_t ) == 16, "unexpected BSP plane size" );
static_assert( sizeof( q3BspDiskNode_t ) == 36, "unexpected BSP node size" );
static_assert( sizeof( q3BspDiskLeaf_t ) == 48, "unexpected BSP leaf size" );
static_assert( sizeof( q3BspDrawVert_t ) == 44, "unexpected BSP vertex size" );
static_assert( sizeof( q3BspDiskSurface_t ) == 104, "unexpected BSP surface size" );

/*
===============================================================================

	Runtime structures filled in by the BSP adapter. The map geometry is
	copied into the local render models by the model adapter phase, the
	data stays on the world for the lightmap, vis and shader lookups.

===============================================================================
*/

typedef struct {
	char name[Q3_MAX_QPATH];
	int surfaceFlags;
	int contentFlags;
} q3BspShader_t;

typedef struct {
	int shaderNum;
	int fogNum;
	q3BspSurfaceType_t surfaceType;
	int lightmapNum;

	int patchWidth;             // final grid size after subdivision, 0 for non patches
	int patchHeight;

	int numVerts;
	q3BspDrawVert_t * verts;    // NULL for skipped surfaces
	int numIndexes;
	int * indexes;              // NULL for skipped surfaces

	idBounds bounds;            // computed from the vertices
} q3BspSurface_t;

typedef struct {
	int cluster;                // -1 = opaque cluster
	int area;
	int firstLeafSurface;
	int numLeafSurfaces;
} q3BspLeaf_t;

typedef struct {
	idBounds bounds;
	int firstSurface;
	int numSurfaces;
} q3BspModel_t;

struct q3BspWorld_t {
	int numShaders;
	q3BspShader_t * shaders;

	int numSurfaces;
	q3BspSurface_t * surfaces;

	int numLeafSurfaces;
	int * leafSurfaces;         // indices into surfaces

	int numLeafs;
	q3BspLeaf_t * leafs;

	int numModels;
	q3BspModel_t * models;

	int numClusters;
	int clusterBytes;
	byte * vis;                 // numClusters * clusterBytes of bit vectors
	byte * novis;                // clusterBytes of 0xff for clusters without vis

	int numLightmaps;
	byte * lightmaps;           // numLightmaps * 128 * 128 * 3, uploaded by the image phase

	// the light grid of the engine's R_LoadLightGrid in tr_bsp.c,
	// sampled by the entity lighting phase; lightGridSize comes from
	// the worldspawn gridsize key, lightGridData holds numGridPoints
	// samples of 8 bytes or NULL when the map has no grid
	float lightGridSize[3];
	float lightGridInverseSize[3];
	float lightGridOrigin[3];
	int lightGridBounds[3];
	byte * lightGridData;

	q3BspWorld_t() {
		memset( this, 0, sizeof( *this ) );
	}

	~q3BspWorld_t() {
		for ( int i = 0; i < numSurfaces; i++ ) {
			free( surfaces[i].verts );
			free( surfaces[i].indexes );
		}
		free( shaders );
		free( surfaces );
		free( leafSurfaces );
		free( leafs );
		free( models );
		free( vis );
		free( novis );
		free( lightmaps );
		free( lightGridData );
	}
};

// the world behind the current scene, the engine's tr.world until the
// scene phase carries a world pointer of its own; set by the BSP
// loader of RenderWorld_load.cpp, cleared when the world is freed
extern q3BspWorld_t *r_worldBsp;

#endif /* !__Q3BSP_H__ */
