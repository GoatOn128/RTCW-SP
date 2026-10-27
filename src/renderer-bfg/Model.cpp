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

If you have questions concerning this license or the applicable additional terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#include "../idlib/precompiled.h"
#include "Model_local.h"

/*
===============================================================================

	Static model implementation

	Trimmed from the BFG renderer: the ASE, LWO and MA source model
	loaders, the surface merging, the silhouette edge building and the
	binary render model format are not ported. The geometry stays on the
	CPU, the vertex cache upload happens in the frontend phase.

===============================================================================
*/

/*
================
idRenderModelStatic::Alloc
================
*/
idRenderModel *idRenderModelStatic::Alloc() {
	return new idRenderModelStatic;
}

/*
================
idRenderModelStatic::idRenderModelStatic
================
*/
idRenderModelStatic::idRenderModelStatic() {
	name = "<undefined>";
	bounds.Clear();
	overlaysAdded = 0;
	isStaticWorldModel = false;
	defaulted = false;
	purged = false;
	fastLoad = false;
	reloadable = true;
	levelLoadReferenced = false;
	hasDrawingSurfaces = true;
	hasInteractingSurfaces = true;
	hasShadowCastingSurfaces = true;
	timeStamp = 0;
}

/*
================
idRenderModelStatic::~idRenderModelStatic
================
*/
idRenderModelStatic::~idRenderModelStatic() {
	PurgeModel();
}

/*
==============
idRenderModelStatic::Print
==============
*/
void idRenderModelStatic::Print() const {
	idLib::Printf( "%s\n", name.c_str() );
	idLib::Printf( "Static model.\n" );
	idLib::Printf( "bounds: (%f %f %f) to (%f %f %f)\n",
				   bounds[0][0], bounds[0][1], bounds[0][2],
				   bounds[1][0], bounds[1][1], bounds[1][2] );

	idLib::Printf( "    verts  tris material\n" );
	for ( int i = 0; i < NumSurfaces(); i++ ) {
		const modelSurface_t *surf = Surface( i );

		srfTriangles_t *tri = surf->geometry;

		if ( !tri ) {
			idLib::Printf( "%2i: NULL surface geometry\n", i );
			continue;
		}

		idLib::Printf( "%2i: %5i %5i", i, tri->numVerts, tri->numIndexes / 3 );
		if ( tri->generateNormals ) {
			idLib::Printf( " (smoothed)\n" );
		} else {
			idLib::Printf( "\n" );
		}
	}
}

/*
==============
idRenderModelStatic::Memory
==============
*/
int idRenderModelStatic::Memory() const {
	int totalBytes = 0;

	totalBytes += sizeof( *this );
	totalBytes += name.DynamicMemoryUsed();
	totalBytes += surfaces.MemoryUsed();

	for ( int j = 0; j < NumSurfaces(); j++ ) {
		const modelSurface_t *surf = Surface( j );
		if ( !surf->geometry ) {
			continue;
		}
		totalBytes += surf->geometry->numVerts * sizeof( surf->geometry->verts[0] );
		totalBytes += surf->geometry->numIndexes * sizeof( surf->geometry->indexes[0] );
	}

	return totalBytes;
}

/*
==============
idRenderModelStatic::List
==============
*/
void idRenderModelStatic::List() const {
	int totalTris = 0;
	int totalVerts = 0;
	int totalBytes = 0;

	totalBytes = Memory();

	char closed = 'C';
	for ( int j = 0; j < NumSurfaces(); j++ ) {
		const modelSurface_t *surf = Surface( j );
		if ( !surf->geometry ) {
			continue;
		}
		if ( !surf->geometry->perfectHull ) {
			closed = ' ';
		}
		totalTris += surf->geometry->numIndexes / 3;
		totalVerts += surf->geometry->numVerts;
	}
	idLib::Printf( "%c%4ik %3i %4i %4i %s", closed, totalBytes / 1024, NumSurfaces(), totalVerts, totalTris, Name() );

	if ( IsDynamicModel() == DM_CACHED ) {
		idLib::Printf( " (DM_CACHED)" );
	}
	if ( IsDynamicModel() == DM_CONTINUOUS ) {
		idLib::Printf( " (DM_CONTINUOUS)" );
	}
	if ( defaulted ) {
		idLib::Printf( " (DEFAULTED)" );
	}
	if ( bounds[0][0] >= bounds[1][0] ) {
		idLib::Printf( " (EMPTY BOUNDS)" );
	}
	if ( bounds[1][0] - bounds[0][0] > 100000 ) {
		idLib::Printf( " (HUGE BOUNDS)" );
	}

	idLib::Printf( "\n" );
}

/*
================
idRenderModelStatic::IsDefaultModel
================
*/
bool idRenderModelStatic::IsDefaultModel() const {
	return defaulted;
}

/*
================
AddCubeFace
================
*/
static void AddCubeFace( srfTriangles_t *tri, idVec3 v1, idVec3 v2, idVec3 v3, idVec3 v4 ) {
	tri->verts[tri->numVerts + 0].Clear();
	tri->verts[tri->numVerts + 0].xyz = v1 * 8;
	tri->verts[tri->numVerts + 0].SetTexCoord( 0, 0 );

	tri->verts[tri->numVerts + 1].Clear();
	tri->verts[tri->numVerts + 1].xyz = v2 * 8;
	tri->verts[tri->numVerts + 1].SetTexCoord( 1, 0 );

	tri->verts[tri->numVerts + 2].Clear();
	tri->verts[tri->numVerts + 2].xyz = v3 * 8;
	tri->verts[tri->numVerts + 2].SetTexCoord( 1, 1 );

	tri->verts[tri->numVerts + 3].Clear();
	tri->verts[tri->numVerts + 3].xyz = v4 * 8;
	tri->verts[tri->numVerts + 3].SetTexCoord( 0, 1 );

	tri->indexes[tri->numIndexes + 0] = tri->numVerts + 0;
	tri->indexes[tri->numIndexes + 1] = tri->numVerts + 1;
	tri->indexes[tri->numIndexes + 2] = tri->numVerts + 2;
	tri->indexes[tri->numIndexes + 3] = tri->numVerts + 0;
	tri->indexes[tri->numIndexes + 4] = tri->numVerts + 2;
	tri->indexes[tri->numIndexes + 5] = tri->numVerts + 3;

	tri->numVerts += 4;
	tri->numIndexes += 6;
}

/*
================
idRenderModelStatic::MakeDefaultModel
================
*/
void idRenderModelStatic::MakeDefaultModel() {

	defaulted = true;

	// throw out any surfaces we already have
	PurgeModel();

	// create one new surface
	modelSurface_t surf;

	surf.id = 0;
	// the BFG code points the default model at the default material; the
	// material system is not ported yet, so the shader stays NULL until
	// the material phase resolves the stored shader names
	surf.shader = NULL;

	surf.geometry = AllocSurfaceTriangles( 24, 36 );

	srfTriangles_t *tri = surf.geometry;

	AddCubeFace( tri, idVec3( -1, 1, 1 ), idVec3( 1, 1, 1 ), idVec3( 1, -1, 1 ), idVec3( -1, -1, 1 ) );
	AddCubeFace( tri, idVec3( -1, 1, -1 ), idVec3( -1, -1, -1 ), idVec3( 1, -1, -1 ), idVec3( 1, 1, -1 ) );

	AddCubeFace( tri, idVec3( 1, -1, 1 ), idVec3( 1, 1, 1 ), idVec3( 1, 1, -1 ), idVec3( 1, -1, -1 ) );
	AddCubeFace( tri, idVec3( -1, -1, 1 ), idVec3( -1, -1, -1 ), idVec3( -1, 1, -1 ), idVec3( -1, 1, 1 ) );

	AddCubeFace( tri, idVec3( -1, -1, 1 ), idVec3( 1, -1, 1 ), idVec3( 1, -1, -1 ), idVec3( -1, -1, -1 ) );
	AddCubeFace( tri, idVec3( -1, 1, 1 ), idVec3( -1, 1, -1 ), idVec3( 1, 1, -1 ), idVec3( 1, 1, 1 ) );

	tri->generateNormals = true;

	AddSurface( surf );
	FinishSurfaces();
}

/*
================
idRenderModelStatic::PartialInitFromFile
================
*/
void idRenderModelStatic::PartialInitFromFile( const char *fileName ) {
	fastLoad = true;
	InitFromFile( fileName );
}

/*
================
idRenderModelStatic::InitFromFile
================
*/
void idRenderModelStatic::InitFromFile( const char *fileName ) {
	InitEmpty( fileName );

	// the ase, lwo and ma source model loaders of the BFG renderer are
	// not ported, so the base static class cannot load anything by
	// itself; the Q3 format adapters subclass this class and override
	// InitFromFile to parse the RTCW formats
	idLib::Warning( "idRenderModelStatic::InitFromFile: unknown type for model: '%s'", name.c_str() );
	MakeDefaultModel();
}

/*
========================
idRenderModelStatic::LoadBinaryModel
========================
*/
bool idRenderModelStatic::LoadBinaryModel( idFile *file, const ID_TIME_T sourceTimeStamp ) {
	// the engine file system is not hooked up yet, so the binary render
	// model format cannot be read
	return false;
}

/*
========================
idRenderModelStatic::WriteBinaryModel
========================
*/
void idRenderModelStatic::WriteBinaryModel( idFile *file, ID_TIME_T *_timeStamp ) const {
	// the engine file system is not hooked up yet, so the binary render
	// model format cannot be written
}

/*
================
idRenderModelStatic::LoadModel
================
*/
void idRenderModelStatic::LoadModel() {
	PurgeModel();
	InitFromFile( name );
}

/*
================
idRenderModelStatic::InitEmpty
================
*/
void idRenderModelStatic::InitEmpty( const char *fileName ) {
	// model names of the form _area* are static parts of the
	// world, and have already been considered for optimized shadows
	// other model names are inline entity models, and need to be
	// shadowed normally
	if ( !idStr::Cmpn( fileName, "_area", 5 ) ) {
		isStaticWorldModel = true;
	} else {
		isStaticWorldModel = false;
	}

	name = fileName;
	reloadable = false;		// if it didn't come from a file, we can't reload it
	timeStamp = 0;
	PurgeModel();
	purged = false;
	bounds.Zero();
}

/*
================
idRenderModelStatic::AddSurface
================
*/
void idRenderModelStatic::AddSurface( modelSurface_t surface ) {
	surfaces.Append( surface );
	if ( surface.geometry ) {
		bounds += surface.geometry->bounds;
	}
}

/*
================
idRenderModelStatic::Name
================
*/
const char *idRenderModelStatic::Name() const {
	return name;
}

/*
================
idRenderModelStatic::Timestamp
================
*/
ID_TIME_T idRenderModelStatic::Timestamp() const {
	return timeStamp;
}

/*
================
idRenderModelStatic::NumSurfaces
================
*/
int idRenderModelStatic::NumSurfaces() const {
	return surfaces.Num();
}

/*
================
idRenderModelStatic::NumBaseSurfaces
================
*/
int idRenderModelStatic::NumBaseSurfaces() const {
	return surfaces.Num() - overlaysAdded;
}

/*
================
idRenderModelStatic::Surface
================
*/
const modelSurface_t *idRenderModelStatic::Surface( int surfaceNum ) const {
	return &surfaces[surfaceNum];
}

/*
================
idRenderModelStatic::AllocSurfaceTriangles
================
*/
srfTriangles_t *idRenderModelStatic::AllocSurfaceTriangles( int numVerts, int numIndexes ) const {
	srfTriangles_t *tri = new srfTriangles_t;
	memset( tri, 0, sizeof( *tri ) );
	tri->numVerts = 0;
	tri->numIndexes = 0;
	if ( numVerts > 0 ) {
		tri->verts = new idDrawVert[numVerts];
	}
	if ( numIndexes > 0 ) {
		tri->indexes = new triIndex_t[numIndexes];
	}
	return tri;
}

/*
================
idRenderModelStatic::FreeSurfaceTriangles
================
*/
void idRenderModelStatic::FreeSurfaceTriangles( srfTriangles_t *tris ) const {
	if ( tris == NULL ) {
		return;
	}
	if ( !tris->referencedVerts ) {
		delete[] tris->verts;
	}
	if ( !tris->referencedIndexes ) {
		delete[] tris->indexes;
	}
	delete tris;
}

/*
================
idRenderModelStatic::IsStaticWorldModel
================
*/
bool idRenderModelStatic::IsStaticWorldModel() const {
	return isStaticWorldModel;
}

/*
================
idRenderModelStatic::IsDynamicModel
================
*/
dynamicModel_t idRenderModelStatic::IsDynamicModel() const {
	// dynamic subclasses will override this
	return DM_STATIC;
}

/*
================
idRenderModelStatic::IsReloadable
================
*/
bool idRenderModelStatic::IsReloadable() const {
	return reloadable;
}

/*
================
idRenderModelStatic::Bounds
================
*/
idBounds idRenderModelStatic::Bounds( const struct renderEntity_s *mdef ) const {
	return bounds;
}

/*
================
idRenderModelStatic::DepthHack
================
*/
float idRenderModelStatic::DepthHack() const {
	return 0.0f;
}

/*
================
idRenderModelStatic::InstantiateDynamicModel
================
*/
idRenderModel *idRenderModelStatic::InstantiateDynamicModel( const struct renderEntity_s *ent, const viewDef_t *view, idRenderModel *cachedModel ) {
	if ( cachedModel ) {
		delete cachedModel;
		cachedModel = NULL;
	}
	idLib::Error( "InstantiateDynamicModel called on static model '%s'", name.c_str() );
	return NULL;
}

/*
================
idRenderModelStatic::NumJoints
================
*/
int idRenderModelStatic::NumJoints() const {
	return 0;
}

/*
================
idRenderModelStatic::GetJoints
================
*/
const idMD5Joint *idRenderModelStatic::GetJoints() const {
	return NULL;
}

/*
================
idRenderModelStatic::GetJointHandle
================
*/
jointHandle_t idRenderModelStatic::GetJointHandle( const char *name ) const {
	return INVALID_JOINT;
}

/*
================
idRenderModelStatic::GetJointName
================
*/
const char *idRenderModelStatic::GetJointName( jointHandle_t handle ) const {
	return "";
}

/*
================
idRenderModelStatic::GetDefaultPose
================
*/
const idJointQuat *idRenderModelStatic::GetDefaultPose() const {
	return NULL;
}

/*
================
idRenderModelStatic::NearestJoint
================
*/
int idRenderModelStatic::NearestJoint( int surfaceNum, int a, int b, int c ) const {
	return INVALID_JOINT;
}

/*
================
idRenderModelStatic::FinishSurfaces

The BFG version also merges surfaces with the same material, creates
back sides for two sided materials, builds the silhouette edges and
computes tangents. All of that needs the material system, the shadow
code and the vertex cache, so this port only bounds the geometry. The
stored shader pointers stay NULL until the material phase resolves the
names.

================
*/
void idRenderModelStatic::FinishSurfaces() {
	int i;

	hasDrawingSurfaces = false;
	hasInteractingSurfaces = false;
	hasShadowCastingSurfaces = false;
	purged = false;

	// make sure we don't have a huge bounds even if we don't finish everything
	bounds.Zero();

	if ( surfaces.Num() == 0 ) {
		return;
	}

	// renderBump doesn't care about most of this
	if ( fastLoad ) {
		bounds.Zero();
		for ( i = 0; i < surfaces.Num(); i++ ) {
			const modelSurface_t *surf = &surfaces[i];
			if ( surf->geometry == NULL ) {
				continue;
			}
			surf->geometry->bounds.Clear();
			for ( int j = 0; j < surf->geometry->numVerts; j++ ) {
				surf->geometry->bounds.AddPoint( surf->geometry->verts[j].xyz );
			}
			bounds.AddBounds( surf->geometry->bounds );
		}
		return;
	}

	// make sure there aren't any NULL geometries
	for ( i = 0; i < surfaces.Num(); i++ ) {
		const modelSurface_t *surf = &surfaces[i];
		if ( surf->geometry == NULL ) {
			MakeDefaultModel();
			idLib::Error( "Model %s, surface %i had NULL geometry", name.c_str(), i );
			return;
		}
	}

	// bound all the surfaces and sum them into the model bounds
	bounds.Clear();
	for ( i = 0; i < surfaces.Num(); i++ ) {
		const modelSurface_t *surf = &surfaces[i];
		srfTriangles_t *tri = surf->geometry;

		tri->bounds.Clear();
		for ( int j = 0; j < tri->numVerts; j++ ) {
			tri->bounds.AddPoint( tri->verts[j].xyz );
		}

		bounds.AddBounds( tri->bounds );

		// every surface draws, receives light and casts shadows until the
		// material phase can decide otherwise
		hasDrawingSurfaces = true;
		hasInteractingSurfaces = true;
		hasShadowCastingSurfaces = true;
	}

	if ( bounds[0][0] > bounds[1][0] || bounds[0][1] > bounds[1][1] || bounds[0][2] > bounds[1][2] ) {
		idLib::Warning( "model %s has empty bounds", name.c_str() );
	}
}

/*
================
idRenderModelStatic::PurgeModel
================
*/
void idRenderModelStatic::PurgeModel() {
	for ( int i = 0; i < surfaces.Num(); i++ ) {
		modelSurface_t *surf = &surfaces[i];

		if ( surf->geometry ) {
			FreeSurfaceTriangles( surf->geometry );
		}
	}
	surfaces.Clear();

	purged = true;
}

/*
==============
idRenderModelStatic::FreeVertexCache

The vertex cache is not ported yet, there is nothing to drop
==============
*/
void idRenderModelStatic::FreeVertexCache() {
}

/*
================
idRenderModelStatic::ReadFromDemoFile
================
*/
void idRenderModelStatic::ReadFromDemoFile( class idDemoFile *f ) {
	// the demo file code is not ported yet
}

/*
================
idRenderModelStatic::WriteToDemoFile
================
*/
void idRenderModelStatic::WriteToDemoFile( class idDemoFile *f ) {
	// the demo file code is not ported yet
}

/*
================
idRenderModelStatic::IsLoaded
================
*/
bool idRenderModelStatic::IsLoaded() {
	return !purged;
}

/*
================
idRenderModelStatic::SetLevelLoadReferenced
================
*/
void idRenderModelStatic::SetLevelLoadReferenced( bool referenced ) {
	levelLoadReferenced = referenced;
}

/*
================
idRenderModelStatic::IsLevelLoadReferenced
================
*/
bool idRenderModelStatic::IsLevelLoadReferenced() {
	return levelLoadReferenced;
}

/*
================
idRenderModelStatic::TouchData

The BFG version touches all the materials of the model; the material
system is not ported yet
================
*/
void idRenderModelStatic::TouchData() {
}
