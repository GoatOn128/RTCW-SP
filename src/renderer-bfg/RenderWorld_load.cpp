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

In addition, the Doom 3 BFG Edition Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the Doom 3 BFG Edition Source Code.  If not, please request a copy in writing from id Software LLC at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#include "precompiled.h"

#include "RenderWorld_local.h"
#include "Q3Bsp.h"
#include "Q3Patch.h"

// Trimmed and reworked from the BFG RenderWorld_load.cpp: instead of the
// .proc format the loader reads the Q3/RTCW .bsp files of this engine, and
// instead of the render model manager the map geometry stays on the world
// until the model adapter phase.

/*
===================
LumpInFile

Checks that a lump sits inside the file and holds a whole number of elements
===================
*/
static bool LumpInFile( const q3BspLump_t &lump, int fileLength, int elementSize ) {
	if ( lump.fileofs < 0 || lump.filelen < 0 ) {
		return false;
	}
	if ( lump.filelen % elementSize != 0 ) {
		return false;
	}
	// both values are non negative so this cannot overflow
	if ( lump.fileofs + lump.filelen > fileLength ) {
		return false;
	}
	return true;
}

/*
===================
LoadQ3BspShaders
===================
*/
static bool LoadQ3BspShaders( const byte *buffer, int fileLength, const q3BspHeader_t *header, q3BspWorld_t *world ) {
	const q3BspLump_t &lump = header->lumps[LUMP_SHADERS];
	if ( !LumpInFile( lump, fileLength, sizeof( q3BspDiskShader_t ) ) ) {
		return false;
	}

	const q3BspDiskShader_t *in = (const q3BspDiskShader_t *)( buffer + lump.fileofs );
	world->numShaders = lump.filelen / sizeof( q3BspDiskShader_t );
	world->shaders = (q3BspShader_t *) malloc( world->numShaders * sizeof( world->shaders[0] ) );

	for ( int i = 0; i < world->numShaders; i++ ) {
		q3BspShader_t *out = &world->shaders[i];
		// the on-disk name is not guaranteed to be null terminated
		strncpy( out->name, in[i].shader, Q3_MAX_QPATH - 1 );
		out->name[Q3_MAX_QPATH - 1] = '\0';
		out->surfaceFlags = in[i].surfaceFlags;
		out->contentFlags = in[i].contentFlags;
	}
	return true;
}

/*
===================
LoadQ3BspSurfaces

Loads the planar faces, the triangle soups, the flares and the patches,
subdividing the patches into grid meshes
===================
*/
static bool LoadQ3BspSurfaces( const byte *buffer, int fileLength, const q3BspHeader_t *header, q3BspWorld_t *world ) {
	const q3BspLump_t &surfaceLump = header->lumps[LUMP_SURFACES];
	if ( !LumpInFile( surfaceLump, fileLength, sizeof( q3BspDiskSurface_t ) ) ) {
		return false;
	}

	// the vertexes and the indexes are shared between the surfaces
	const q3BspLump_t &vertLump = header->lumps[LUMP_DRAWVERTS];
	if ( !LumpInFile( vertLump, fileLength, sizeof( q3BspDrawVert_t ) ) ) {
		return false;
	}
	const q3BspLump_t &indexLump = header->lumps[LUMP_DRAWINDEXES];
	if ( !LumpInFile( indexLump, fileLength, sizeof( int ) ) ) {
		return false;
	}

	const q3BspDiskSurface_t *surfaces = (const q3BspDiskSurface_t *)( buffer + surfaceLump.fileofs );
	const int numSurfaces = surfaceLump.filelen / sizeof( q3BspDiskSurface_t );

	const q3BspDrawVert_t *verts = (const q3BspDrawVert_t *)( buffer + vertLump.fileofs );
	const int numVerts = vertLump.filelen / sizeof( q3BspDrawVert_t );

	const int *indexes = (const int *)( buffer + indexLump.fileofs );
	const int numIndexes = indexLump.filelen / sizeof( int );

	world->numSurfaces = numSurfaces;
	world->surfaces = (q3BspSurface_t *) calloc( numSurfaces, sizeof( world->surfaces[0] ) );

	for ( int i = 0; i < numSurfaces; i++ ) {
		const q3BspDiskSurface_t *ds = &surfaces[i];
		q3BspSurface_t *surf = &world->surfaces[i];

		surf->shaderNum = ds->shaderNum;
		surf->fogNum = ds->fogNum;
		surf->surfaceType = (q3BspSurfaceType_t)ds->surfaceType;
		surf->lightmapNum = ds->lightmapNum;

		// the surface data must stay inside the vertex and index lumps
		if ( ds->firstVert < 0 || ds->numVerts < 0 || ds->firstVert + ds->numVerts > numVerts ) {
			return false;
		}
		if ( ds->firstIndex < 0 || ds->numIndexes < 0 || ds->firstIndex + ds->numIndexes > numIndexes ) {
			return false;
		}

		switch ( ds->surfaceType ) {
		case Q3_MST_PLANAR:
		case Q3_MST_TRIANGLE_SOUP: {
			surf->numVerts = ds->numVerts;
			surf->verts = (q3BspDrawVert_t *) malloc( surf->numVerts * sizeof( surf->verts[0] ) );
			memcpy( surf->verts, verts + ds->firstVert, surf->numVerts * sizeof( surf->verts[0] ) );

			surf->numIndexes = ds->numIndexes;
			surf->indexes = (int *) malloc( surf->numIndexes * sizeof( surf->indexes[0] ) );
			memcpy( surf->indexes, indexes + ds->firstIndex, surf->numIndexes * sizeof( surf->indexes[0] ) );
			break;
		}
		case Q3_MST_PATCH: {
			// subdivide the control grid into a grid mesh, the subdivided
			// grid carries no indexes of its own
			int gridWidth = 0;
			int gridHeight = 0;
			const q3BspDrawVert_t *gridVerts = NULL;
			if ( !q3SubdividePatchToGrid( ds->patchWidth, ds->patchHeight,
										  verts + ds->firstVert, &gridWidth, &gridHeight, &gridVerts ) ) {
				idLib::Warning( "idRenderWorldLocal::InitFromMap: bad patch surface %i", i );
				return false;
			}

			surf->patchWidth = gridWidth;
			surf->patchHeight = gridHeight;
			surf->numVerts = gridWidth * gridHeight;
			surf->verts = (q3BspDrawVert_t *) gridVerts;

			// triangulate the grid the same way the engine renderer does
			surf->numIndexes = ( gridWidth - 1 ) * ( gridHeight - 1 ) * 6;
			surf->indexes = (int *) malloc( surf->numIndexes * sizeof( surf->indexes[0] ) );
			int numIndexesOut = 0;
			for ( int y = 0; y < gridHeight - 1; y++ ) {
				for ( int x = 0; x < gridWidth - 1; x++ ) {
					// vertex order to be reckognized as tristrips
					const int v1 = y * gridWidth + x + 1;
					const int v2 = v1 - 1;
					const int v3 = v2 + gridWidth;
					const int v4 = v3 + 1;

					surf->indexes[numIndexesOut + 0] = v2;
					surf->indexes[numIndexesOut + 1] = v3;
					surf->indexes[numIndexesOut + 2] = v1;
					surf->indexes[numIndexesOut + 3] = v1;
					surf->indexes[numIndexesOut + 4] = v3;
					surf->indexes[numIndexesOut + 5] = v4;
					numIndexesOut += 6;
				}
			}
			break;
		}
		case Q3_MST_FLARE: {
			// the flare is drawn through the flare shader at the first
			// control point; keep the point so the backend can reach it
			surf->numVerts = 1;
			surf->verts = (q3BspDrawVert_t *) malloc( sizeof( surf->verts[0] ) );
			*surf->verts = verts[ds->firstVert];
			surf->numIndexes = 0;
			break;
		}
		default:
			idLib::Warning( "idRenderWorldLocal::InitFromMap: bad surface type %i", ds->surfaceType );
			return false;
		}

		// culling bounds from the loaded vertices
		surf->bounds.Clear();
		for ( int j = 0; j < surf->numVerts; j++ ) {
			surf->bounds.AddPoint( idVec3( surf->verts[j].xyz[0], surf->verts[j].xyz[1], surf->verts[j].xyz[2] ) );
		}
	}

	return true;
}

/*
===================
LoadQ3BspLeafs

Also returns the number of areas and clusters through the pointers
===================
*/
static bool LoadQ3BspLeafs( const byte *buffer, int fileLength, const q3BspHeader_t *header, q3BspWorld_t *world,
							int *outNumAreas, int *outNumClusters ) {
	const q3BspLump_t &leafLump = header->lumps[LUMP_LEAFS];
	if ( !LumpInFile( leafLump, fileLength, sizeof( q3BspDiskLeaf_t ) ) ) {
		return false;
	}
	const q3BspLump_t &leafSurfaceLump = header->lumps[LUMP_LEAFSURFACES];
	if ( !LumpInFile( leafSurfaceLump, fileLength, sizeof( int ) ) ) {
		return false;
	}

	const q3BspDiskLeaf_t *in = (const q3BspDiskLeaf_t *)( buffer + leafLump.fileofs );
	const int numLeafs = leafLump.filelen / sizeof( q3BspDiskLeaf_t );

	const int *leafSurfacesIn = (const int *)( buffer + leafSurfaceLump.fileofs );
	const int numLeafSurfaces = leafSurfaceLump.filelen / sizeof( int );

	world->numLeafs = numLeafs;
	world->leafs = (q3BspLeaf_t *) calloc( numLeafs, sizeof( world->leafs[0] ) );

	int numAreas = 0;
	int numClusters = 0;
	for ( int i = 0; i < numLeafs; i++ ) {
		q3BspLeaf_t *leaf = &world->leafs[i];
		leaf->cluster = in[i].cluster;
		leaf->area = in[i].area;
		leaf->firstLeafSurface = in[i].firstLeafSurface;
		leaf->numLeafSurfaces = in[i].numLeafSurfaces;

		if ( leaf->area < -1 || leaf->firstLeafSurface < 0
			 || leaf->numLeafSurfaces < 0
			 || leaf->firstLeafSurface + leaf->numLeafSurfaces > numLeafSurfaces ) {
			return false;
		}
		if ( leaf->area >= numAreas ) {
			numAreas = leaf->area + 1;
		}
		if ( leaf->cluster + 1 > numClusters ) {
			numClusters = leaf->cluster + 1;
		}
	}

	world->numLeafSurfaces = numLeafSurfaces;
	world->leafSurfaces = (int *) malloc( numLeafSurfaces * sizeof( int ) );
	memcpy( world->leafSurfaces, leafSurfacesIn, numLeafSurfaces * sizeof( int ) );

	*outNumAreas = numAreas > 0 ? numAreas : 1;
	*outNumClusters = numClusters;
	return true;
}

/*
===================
LoadQ3BspAreaNodes

Converts the BSP tree of nodes and leafs into the BFG area nodes, which
walk down to area numbers instead of clusters
===================
*/
static bool LoadQ3BspAreaNodes( const byte *buffer, int fileLength, const q3BspHeader_t *header,
								const q3BspWorld_t *world, areaNode_t **outNodes, int *outNumNodes ) {
	const q3BspLump_t &nodeLump = header->lumps[LUMP_NODES];
	if ( !LumpInFile( nodeLump, fileLength, sizeof( q3BspDiskNode_t ) ) ) {
		return false;
	}
	const q3BspLump_t &planeLump = header->lumps[LUMP_PLANES];
	if ( !LumpInFile( planeLump, fileLength, sizeof( q3BspDiskPlane_t ) ) ) {
		return false;
	}

	const q3BspDiskNode_t *nodes = (const q3BspDiskNode_t *)( buffer + nodeLump.fileofs );
	const int numNodes = nodeLump.filelen / sizeof( q3BspDiskNode_t );
	if ( numNodes <= 0 ) {
		// a map without nodes cannot be walked, treat it as broken
		return false;
	}

	const q3BspDiskPlane_t *planes = (const q3BspDiskPlane_t *)( buffer + planeLump.fileofs );
	const int numPlanes = planeLump.filelen / sizeof( q3BspDiskPlane_t );

	areaNode_t *out = new areaNode_t[numNodes];
	bool ok = true;

	for ( int i = 0; i < numNodes && ok; i++ ) {
		if ( nodes[i].planeNum < 0 || nodes[i].planeNum >= numPlanes ) {
			ok = false;
			break;
		}
		const q3BspDiskPlane_t *plane = &planes[nodes[i].planeNum];
		out[i].plane.SetNormal( idVec3( plane->normal[0], plane->normal[1], plane->normal[2] ) );
		out[i].plane.SetDist( plane->dist );

		for ( int j = 0; j < 2 && ok; j++ ) {
			const int child = nodes[i].children[j];
			if ( child >= 0 ) {
				// a node child is an index into the area nodes
				if ( child >= numNodes ) {
					ok = false;
					break;
				}
				out[i].children[j] = child;
			} else {
				// a leaf child is -(leaf+1) in the file; the BFG nodes
				// store (-1 - areaNumber), or 0 for solid leafs
				const int leafNum = -1 - child;
				if ( leafNum < 0 || leafNum >= world->numLeafs ) {
					ok = false;
					break;
				}
				const int area = world->leafs[leafNum].area;
				if ( area < 0 ) {
					out[i].children[j] = AREANUM_SOLID;
				} else {
					out[i].children[j] = -1 - area;
				}
			}
		}

		out[i].commonChildrenArea = CHILDREN_HAVE_MULTIPLE_AREAS;
	}

	if ( !ok ) {
		delete[] out;
		*outNodes = NULL;
		*outNumNodes = 0;
		return false;
	}

	*outNodes = out;
	*outNumNodes = numNodes;
	return true;
}

/*
===================
LoadQ3BspModels
===================
*/
static bool LoadQ3BspModels( const byte *buffer, int fileLength, const q3BspHeader_t *header, q3BspWorld_t *world ) {
	const q3BspLump_t &lump = header->lumps[LUMP_MODELS];
	if ( !LumpInFile( lump, fileLength, sizeof( q3BspDiskModel_t ) ) ) {
		return false;
	}

	const q3BspDiskModel_t *in = (const q3BspDiskModel_t *)( buffer + lump.fileofs );
	world->numModels = lump.filelen / sizeof( q3BspDiskModel_t );
	world->models = (q3BspModel_t *) calloc( world->numModels, sizeof( world->models[0] ) );

	for ( int i = 0; i < world->numModels; i++ ) {
		q3BspModel_t *model = &world->models[i];
		model->bounds[0] = idVec3( in[i].mins[0], in[i].mins[1], in[i].mins[2] );
		model->bounds[1] = idVec3( in[i].maxs[0], in[i].maxs[1], in[i].maxs[2] );
		model->firstSurface = in[i].firstSurface;
		model->numSurfaces = in[i].numSurfaces;
	}
	return true;
}

/*
===================
LoadQ3BspVis
===================
*/
static void LoadQ3BspVis( const byte *buffer, const q3BspHeader_t *header, q3BspWorld_t *world ) {
	const q3BspLump_t &lump = header->lumps[LUMP_VISIBILITY];
	if ( lump.filelen < 2 * (int)sizeof( int ) ) {
		// no vis data; the world stays usable with the novis fallback
		return;
	}

	const int *visHeader = (const int *)( buffer + lump.fileofs );
	world->numClusters = visHeader[0];
	world->clusterBytes = visHeader[1];

	const int numVisBytes = world->numClusters * world->clusterBytes;
	if ( lump.filelen < 2 * (int)sizeof( int ) + numVisBytes ) {
		// truncated vis lump, fall back to novis
		world->numClusters = 0;
		world->clusterBytes = 0;
		return;
	}

	world->vis = (byte *) malloc( numVisBytes );
	memcpy( world->vis, visHeader + 2, numVisBytes );
}

/*
===================
LoadQ3BspLightmaps

The lightmap lighting stays: the raw 128x128 RGB blocks are kept on the
world and uploaded by the image phase, which owns the texture objects
===================
*/
static void LoadQ3BspLightmaps( const byte *buffer, const q3BspHeader_t *header, q3BspWorld_t *world ) {
	const q3BspLump_t &lump = header->lumps[LUMP_LIGHTMAPS];
	if ( lump.filelen <= 0 ) {
		return;
	}

	world->numLightmaps = lump.filelen / Q3_LIGHTMAP_BYTES;
	world->lightmaps = (byte *) malloc( world->numLightmaps * Q3_LIGHTMAP_BYTES );
	memcpy( world->lightmaps, buffer + lump.fileofs, world->numLightmaps * Q3_LIGHTMAP_BYTES );
}

/*
===================
idRenderWorldLocal::SetupPortalAreas
===================
*/
void idRenderWorldLocal::SetupPortalAreas( int numAreas ) {
	numPortalAreas = numAreas;
	portalAreas = new portalArea_t[numPortalAreas];
	areaScreenRect = new idScreenRect[numPortalAreas];
	for ( int i = 0; i < numPortalAreas; i++ ) {
		portalArea_t *area = &portalAreas[i];

		area->areaNum = i;
		area->viewCount = 0;
		area->portals = NULL;

		area->entityRefs.areaNext = area->entityRefs.areaPrev = &area->entityRefs;
		area->entityRefs.ownerNext = NULL;
		area->entityRefs.entity = NULL;
		area->entityRefs.light = NULL;
		area->entityRefs.area = NULL;

		area->lightRefs.areaNext = area->lightRefs.areaPrev = &area->lightRefs;
		area->lightRefs.ownerNext = NULL;
		area->lightRefs.entity = NULL;
		area->lightRefs.light = NULL;
		area->lightRefs.area = NULL;

		for ( int j = 0; j < NUM_PORTAL_ATTRIBUTES; j++ ) {
			area->connectedAreaNum[j] = 0;
		}

		areaScreenRect[i].Clear();
	}

	// the Q3 BSP files carry no inter-area portals; every area starts fully
	// connected for every portal attribute until the engine integration phase
	// hooks up the clip model area portal states
	for ( int i = 0; i < NUM_PORTAL_ATTRIBUTES; i++ ) {
		connectedAreaNum++;
		for ( int j = 0; j < numPortalAreas; j++ ) {
			FloodConnectedAreas( &portalAreas[j], i );
		}
	}
}

/*
=================
idRenderWorldLocal::ClearWorld

Sets up for a single area world
=================
*/
void idRenderWorldLocal::ClearWorld() {
	SetupPortalAreas( 1 );
}

/*
=================
idRenderWorldLocal::CommonChildrenArea_r
=================
*/
int idRenderWorldLocal::CommonChildrenArea_r( areaNode_t *node ) {
	int nums[2];

	for ( int i = 0; i < 2; i++ ) {
		if ( node->children[i] <= 0 ) {
			nums[i] = -1 - node->children[i];
		} else {
			nums[i] = CommonChildrenArea_r( &areaNodes[ node->children[i] ] );
		}
	}

	// solid nodes will match any area
	if ( nums[0] == AREANUM_SOLID ) {
		nums[0] = nums[1];
	}
	if ( nums[1] == AREANUM_SOLID ) {
		nums[1] = nums[0];
	}

	int common;
	if ( nums[0] == nums[1] ) {
		common = nums[0];
	} else {
		common = CHILDREN_HAVE_MULTIPLE_AREAS;
	}

	node->commonChildrenArea = common;

	return common;
}

/*
===================
idRenderWorldLocal::LoadQ3BspWorld
===================
*/
bool idRenderWorldLocal::LoadQ3BspWorld( const char *name ) {
	// interim: the engine file system is not hooked up yet, so the BSP is
	// read straight from the directory next to the working directory, like
	// the shader loader reads its CG sources
	idStr filename = name;
	filename.DefaultFileExtension( ".bsp" );

	FILE *file = fopen( filename.c_str(), "rb" );
	if ( file == NULL ) {
		idLib::Warning( "idRenderWorldLocal::InitFromMap: %s not found", filename.c_str() );
		return false;
	}
	fseek( file, 0, SEEK_END );
	const int fileLength = ftell( file );
	fseek( file, 0, SEEK_SET );
	if ( fileLength < (int)sizeof( q3BspHeader_t ) ) {
		fclose( file );
		idLib::Warning( "idRenderWorldLocal::InitFromMap: %s is not a BSP file", filename.c_str() );
		return false;
	}
	byte *buffer = (byte *) malloc( fileLength );
	const int readLength = (int) fread( buffer, 1, fileLength, file );
	fclose( file );
	if ( readLength != fileLength ) {
		free( buffer );
		idLib::Warning( "idRenderWorldLocal::InitFromMap: %s could not be read", filename.c_str() );
		return false;
	}

	const q3BspHeader_t *header = (const q3BspHeader_t *)buffer;
	if ( header->version != Q3_BSP_VERSION ) {
		idLib::Warning( "idRenderWorldLocal::InitFromMap: %s has wrong version number (%i should be %i)",
						filename.c_str(), header->version, Q3_BSP_VERSION );
		free( buffer );
		return false;
	}

	q3BspWorld_t *world = new q3BspWorld_t();
	areaNode_t *nodes = NULL;
	int numNodes = 0;
	int numAreas = 1;
	int numClusters = 0;

	const bool ok = LoadQ3BspShaders( buffer, fileLength, header, world )
					&& LoadQ3BspSurfaces( buffer, fileLength, header, world )
					&& LoadQ3BspLeafs( buffer, fileLength, header, world, &numAreas, &numClusters )
					&& LoadQ3BspAreaNodes( buffer, fileLength, header, world, &nodes, &numNodes )
					&& LoadQ3BspModels( buffer, fileLength, header, world );

	if ( !ok ) {
		idLib::Warning( "idRenderWorldLocal::InitFromMap: %s is not a valid BSP file", filename.c_str() );
		delete world;
		delete[] nodes;
		free( buffer );
		return false;
	}

	LoadQ3BspVis( buffer, header, world );
	LoadQ3BspLightmaps( buffer, header, world );

	// the vis lump header carries the authoritative cluster counts, the
	// leaf scan is the fallback for maps without vis data
	if ( world->numClusters <= 0 ) {
		world->numClusters = numClusters;
		world->clusterBytes = ( numClusters + 7 ) / 8;
	}

	// the novis fallback marks every cluster visible
	const int novisBytes = ( world->clusterBytes + 63 ) & ~63;
	world->novis = (byte *) malloc( novisBytes );
	memset( world->novis, 0xff, novisBytes );

	areaNodes = nodes;
	numAreaNodes = numNodes;

	// find the points where the area walks can early out
	CommonChildrenArea_r( &areaNodes[0] );

	SetupPortalAreas( numAreas );

	// the map timestamp fast reload path needs the engine file system and
	// is hooked up by the engine integration phase
	mapTimeStamp = FILE_NOT_FOUND_TIMESTAMP;

	idLib::Printf( "idRenderWorldLocal::InitFromMap: %s, %i areas, %i clusters, %i surfaces, %i lightmaps\n",
				   filename.c_str(), numPortalAreas, world->numClusters, world->numSurfaces, world->numLightmaps );

	free( buffer );
	bspWorld = world;
	return true;
}
