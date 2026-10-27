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

#pragma hdrstop
#include "../idlib/precompiled.h"

#include "RenderWorld_local.h"

// Trimmed from the BFG RenderWorld.cpp: the interaction table, the decal
// and overlay allocation, the demo writes and the debug drawing all go
// through the backend or the model code, which are ported with the later
// renderer phases. Everything that works without them follows the
// reference implementation.

/*
===================
idRenderWorldLocal::idRenderWorldLocal
===================
*/
idRenderWorldLocal::idRenderWorldLocal() {
	mapName.Clear();
	mapTimeStamp = FILE_NOT_FOUND_TIMESTAMP;

	generateAllInteractionsCalled = false;

	areaNodes = NULL;
	numAreaNodes = 0;

	portalAreas = NULL;
	numPortalAreas = 0;

	connectedAreaNum = 0;
	areaScreenRect = NULL;

	doublePortals = NULL;
	numInterAreaPortals = 0;
}

/*
===================
idRenderWorldLocal::~idRenderWorldLocal
===================
*/
idRenderWorldLocal::~idRenderWorldLocal() {
	// free all the entityDefs, lightDefs, portals, etc
	FreeWorld();

	// the debug lines, polygons and text live in the backend, which is
	// ported with the GLSL backend phase
}

/*
===================
idRenderWorldLocal::FreeWorld
===================
*/
void idRenderWorldLocal::FreeWorld() {
	// free all the defs
	for ( int i = 0; i < entityDefs.Num(); i++ ) {
		delete entityDefs[i];
	}
	entityDefs.Clear();

	for ( int i = 0; i < lightDefs.Num(); i++ ) {
		delete lightDefs[i];
	}
	lightDefs.Clear();

	// the local models are owned by the model manager, which is ported
	// with the model adapter phase
	localModels.Clear();

	// free the area and portal memory; the portal windings are owned by
	// the map loading code, which is ported with the BSP adapter phase
	delete[] areaNodes;
	areaNodes = NULL;
	numAreaNodes = 0;

	delete[] portalAreas;
	portalAreas = NULL;
	numPortalAreas = 0;

	delete[] areaScreenRect;
	areaScreenRect = NULL;

	delete[] doublePortals;
	doublePortals = NULL;
	numInterAreaPortals = 0;

	connectedAreaNum = 0;
}

/*
===================
idRenderWorldLocal::InitFromMap

The BFG map loading code lives in RenderWorld_load.cpp and is ported
with the BSP adapter phase; every world starts as the empty single
area world that BFG gives a NULL or empty map name.
===================
*/
bool idRenderWorldLocal::InitFromMap( const char *mapName ) {
	FreeWorld();

	this->mapName = mapName ? mapName : "";

	numPortalAreas = 1;
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

	// all areas start fully connected for every portal attribute
	for ( int i = 0; i < NUM_PORTAL_ATTRIBUTES; i++ ) {
		connectedAreaNum++;
		FloodConnectedAreas( &portalAreas[0], i );
	}

	return true;
}

/*
===================
idRenderWorldLocal::ResetLocalRenderModels
===================
*/
void idRenderWorldLocal::ResetLocalRenderModels() {
	// the BFG code frees the local render models through the model
	// manager, which is ported with the model adapter phase
	localModels.Clear();
}

/*
===================
AddEntityDef
===================
*/
qhandle_t idRenderWorldLocal::AddEntityDef( const renderEntity_t *re ) {
	// try and reuse a free spot
	int entityHandle = entityDefs.FindNull();
	if ( entityHandle == -1 ) {
		entityHandle = entityDefs.Append( NULL );
	}

	UpdateEntityDef( entityHandle, re );

	return entityHandle;
}

/*
==============
UpdateEntityDef

Does not write to the demo file, which will only be updated for
visible entities
==============
*/
void idRenderWorldLocal::UpdateEntityDef( qhandle_t entityHandle, const renderEntity_t *re ) {
	if ( !re->hModel && !re->callback ) {
		idLib::Error( "idRenderWorld::UpdateEntityDef: NULL hModel" );
	}

	// create new slots if needed
	if ( entityHandle < 0 || entityHandle > LUDICROUS_INDEX ) {
		idLib::Error( "idRenderWorld::UpdateEntityDef: index = %i", entityHandle );
	}
	while ( entityHandle >= entityDefs.Num() ) {
		entityDefs.Append( NULL );
	}

	idRenderEntityLocal *def = entityDefs[entityHandle];
	if ( def != NULL ) {
		if ( !re->forceUpdate ) {
			// check for exact match (OPTIMIZE: check through pointers more)
			if ( !re->joints && !re->callbackData && !def->dynamicModel && !memcmp( re, &def->parms, sizeof( *re ) ) ) {
				return;
			}
		}

		// the callback shortcut, the derived data updates and the demo
		// writes live in the BFG renderWorld_defs code, which is ported
		// with the model adapter phase
	} else {
		// creating a new one
		def = new ( TAG_RENDER_ENTITY ) idRenderEntityLocal;
		entityDefs[entityHandle] = def;

		def->world = this;
		def->index = entityHandle;
	}

	def->parms = *re;

	// the area references are built by R_CreateEntityRefs, which needs
	// the model code and is ported with the model adapter phase
}

/*
===================
FreeEntityDef

Frees all references and lit surfaces from the model, and
NULL's out it's entry in the world list
===================
*/
void idRenderWorldLocal::FreeEntityDef( qhandle_t entityHandle ) {
	idRenderEntityLocal *def;

	if ( entityHandle < 0 || entityHandle >= entityDefs.Num() ) {
		idLib::Printf( "idRenderWorld::FreeEntityDef: handle %i > %i\n", entityHandle, entityDefs.Num() );
		return;
	}

	def = entityDefs[entityHandle];
	if ( !def ) {
		idLib::Printf( "idRenderWorld::FreeEntityDef: handle %i is NULL\n", entityHandle );
		return;
	}

	// the BFG code frees the derived data and the demo references here;
	// no derived data exists until the model adapter phase is ported

	// if we are playing a demo, these will have been freed
	// in R_FreeEntityDefDerivedData(), otherwise the gui
	// object still exists in the game

	def->parms.gui[ 0 ] = NULL;
	def->parms.gui[ 1 ] = NULL;
	def->parms.gui[ 2 ] = NULL;

	delete def;
	entityDefs[ entityHandle ] = NULL;
}

/*
==================
GetRenderEntity
==================
*/
const renderEntity_t *idRenderWorldLocal::GetRenderEntity( qhandle_t entityHandle ) const {
	idRenderEntityLocal *def;

	if ( entityHandle < 0 || entityHandle >= entityDefs.Num() ) {
		idLib::Printf( "idRenderWorld::GetRenderEntity: invalid handle %i [0, %i]\n", entityHandle, entityDefs.Num() );
		return NULL;
	}

	def = entityDefs[entityHandle];
	if ( !def ) {
		idLib::Printf( "idRenderWorld::GetRenderEntity: handle %i is NULL\n", entityHandle );
		return NULL;
	}

	return &def->parms;
}

/*
==================
AddLightDef
==================
*/
qhandle_t idRenderWorldLocal::AddLightDef( const renderLight_t *rlight ) {
	// try and reuse a free spot
	int lightHandle = lightDefs.FindNull();

	if ( lightHandle == -1 ) {
		lightHandle = lightDefs.Append( NULL );
	}

	UpdateLightDef( lightHandle, rlight );

	return lightHandle;
}

/*
=================
UpdateLightDef

The generation of all the derived interaction data will
usually be deferred until it is visible in a scene

Does not write to the demo file, which will only be done for visible lights
=================
*/
void idRenderWorldLocal::UpdateLightDef( qhandle_t lightHandle, const renderLight_t *rlight ) {
	// create new slots if needed
	if ( lightHandle < 0 || lightHandle > LUDICROUS_INDEX ) {
		idLib::Error( "idRenderWorld::UpdateLightDef: index = %i", lightHandle );
	}
	while ( lightHandle >= lightDefs.Num() ) {
		lightDefs.Append( NULL );
	}

	bool justUpdate = false;
	idRenderLightLocal *light = lightDefs[lightHandle];
	if ( light ) {
		// if the shape of the light stays the same, we don't need to dump
		// any of our derived data, because shader parms are calculated every frame
		if ( rlight->axis == light->parms.axis && rlight->end == light->parms.end &&
			 rlight->lightCenter == light->parms.lightCenter && rlight->lightRadius == light->parms.lightRadius &&
			 rlight->noShadows == light->parms.noShadows && rlight->origin == light->parms.origin &&
			 rlight->parallel == light->parms.parallel && rlight->pointLight == light->parms.pointLight &&
			 rlight->right == light->parms.right && rlight->start == light->parms.start &&
			 rlight->target == light->parms.target && rlight->up == light->parms.up &&
			 rlight->shader == light->lightShader && rlight->prelightModel == light->parms.prelightModel ) {
			justUpdate = true;
		} else {
			// if we are updating shadows, the prelight model is no longer valid
			light->lightHasMoved = true;
			// the derived data of the light is freed by R_FreeLightDefDerivedData,
			// which is ported with the GLSL backend phase
		}
	} else {
		// create a new one
		light = new ( TAG_RENDER_LIGHT ) idRenderLightLocal;
		lightDefs[lightHandle] = light;

		light->world = this;
		light->index = lightHandle;
	}

	light->parms = *rlight;

	// the light shader handling and the demo writes live in the BFG
	// renderWorld_defs code, which is ported with the material phase

	if ( light->lightHasMoved ) {
		light->parms.prelightModel = NULL;
	}

	// the area references are built by R_CreateLightRefs, which is ported
	// with the BSP adapter phase
}

/*
====================
FreeLightDef

Frees all references and lit surfaces from the light, and
NULL's out it's entry in the world list
====================
*/
void idRenderWorldLocal::FreeLightDef( qhandle_t lightHandle ) {
	idRenderLightLocal *light;

	if ( lightHandle < 0 || lightHandle >= lightDefs.Num() ) {
		idLib::Printf( "idRenderWorld::FreeLightDef: invalid handle %i [0, %i]\n", lightHandle, lightDefs.Num() );
		return;
	}

	light = lightDefs[lightHandle];
	if ( !light ) {
		idLib::Printf( "idRenderWorld::FreeLightDef: handle %i is NULL\n", lightHandle );
		return;
	}

	// the BFG code frees the derived data and the demo references here;
	// no derived data exists until the backend phases are ported

	delete light;
	lightDefs[lightHandle] = NULL;
}

/*
==================
GetRenderLight
==================
*/
const renderLight_t *idRenderWorldLocal::GetRenderLight( qhandle_t lightHandle ) const {
	idRenderLightLocal *def;

	if ( lightHandle < 0 || lightHandle >= lightDefs.Num() ) {
		idLib::Printf( "idRenderWorld::GetRenderLight: handle %i > %i\n", lightHandle, lightDefs.Num() );
		return NULL;
	}

	def = lightDefs[lightHandle];
	if ( !def ) {
		idLib::Printf( "idRenderWorld::GetRenderLight: handle %i is NULL\n", lightHandle );
		return NULL;
	}

	return &def->parms;
}

/*
================
idRenderWorldLocal::CheckAreaForPortalSky
================
*/
bool idRenderWorldLocal::CheckAreaForPortalSky( int areaNum ) {
	// the portal sky check needs the map data and is ported with the BSP
	// adapter phase
	return false;
}

/*
================
idRenderWorldLocal::GenerateAllInteractions
================
*/
void idRenderWorldLocal::GenerateAllInteractions() {
	// the interactions are built by the light interaction code, which is
	// ported with the GLSL backend phase
	generateAllInteractionsCalled = true;
}

/*
===============
idRenderWorldLocal::RegenerateWorld
===============
*/
void idRenderWorldLocal::RegenerateWorld() {
	// the derived data recreation lives in the BFG frontend, which is
	// ported with the GLSL backend phase
}

/*
================
idRenderWorldLocal::ProjectDecalOntoWorld
================
*/
void idRenderWorldLocal::ProjectDecalOntoWorld( const idFixedWinding &winding, const idVec3 &projectionOrigin, const bool parallel, const float fadeDepth, const idMaterial *material, const int startTime ) {
	// the decal code needs the map data and the model decals, which are
	// ported with the BSP and model adapter phases
}

/*
================
idRenderWorldLocal::ProjectDecal
================
*/
void idRenderWorldLocal::ProjectDecal( qhandle_t entityHandle, const idFixedWinding &winding, const idVec3 &projectionOrigin, const bool parallel, const float fadeDepth, const idMaterial *material, const int startTime ) {
	// the decal code is ported with the model adapter phase
}

/*
================
idRenderWorldLocal::ProjectOverlay
================
*/
void idRenderWorldLocal::ProjectOverlay( qhandle_t entityHandle, const idPlane localTextureAxis[2], const idMaterial *material, const int startTime ) {
	// the overlay code is ported with the model adapter phase
}

/*
================
idRenderWorldLocal::RemoveDecals
================
*/
void idRenderWorldLocal::RemoveDecals( qhandle_t entityHandle ) {
	// the decal removal is ported with the model adapter phase
}

/*
================
idRenderWorldLocal::SetRenderView
================
*/
void idRenderWorldLocal::SetRenderView( const renderView_t *renderView ) {
	// the BFG code stores the view for the shader evaluation, which is
	// ported with the GLSL backend phase
}

/*
================
idRenderWorldLocal::RenderScene
================
*/
void idRenderWorldLocal::RenderScene( const renderView_t *renderView ) {
	// the front end view flow is ported with the GLSL backend phase
}

/*
===================
idRenderWorldLocal::NumAreas
===================
*/
int idRenderWorldLocal::NumAreas() const {
	return numPortalAreas;
}

/*
===================
idRenderWorldLocal::NumPortalsInArea
===================
*/
int idRenderWorldLocal::NumPortalsInArea( int areaNum ) {
	portalArea_t    *area;
	int count;
	portal_t        *portal;

	if ( areaNum >= numPortalAreas || areaNum < 0 ) {
		idLib::Error( "idRenderWorld::NumPortalsInArea: bad areanum %i", areaNum );
	}
	area = &portalAreas[areaNum];

	count = 0;
	for ( portal = area->portals; portal; portal = portal->next ) {
		count++;
	}
	return count;
}

/*
===================
idRenderWorldLocal::GetPortal
===================
*/
exitPortal_t idRenderWorldLocal::GetPortal( int areaNum, int portalNum ) {
	portalArea_t    *area;
	int count;
	portal_t        *portal;
	exitPortal_t ret;

	if ( areaNum > numPortalAreas ) {
		idLib::Error( "idRenderWorld::GetPortal: areaNum > numAreas" );
	}
	area = &portalAreas[areaNum];

	count = 0;
	for ( portal = area->portals; portal; portal = portal->next ) {
		if ( count == portalNum ) {
			ret.areas[0] = areaNum;
			ret.areas[1] = portal->intoArea;
			ret.w = portal->w;
			ret.blockingBits = portal->doublePortal->blockingBits;
			ret.portalHandle = portal->doublePortal - doublePortals + 1;
			return ret;
		}
		count++;
	}

	idLib::Error( "idRenderWorld::GetPortal: portalNum > numPortals" );

	memset( &ret, 0, sizeof( ret ) );
	return ret;
}

/*
===============
idRenderWorldLocal::PointInAreaNum

Will return -1 if the point is not in an area, otherwise
it will return 0 <= value < tr.world->numPortalAreas
===============
*/
int idRenderWorldLocal::PointInArea( const idVec3 &point ) const {
	areaNode_t  *node;
	int nodeNum;
	float d;

	node = areaNodes;
	if ( !node ) {
		return -1;
	}
	while ( 1 ) {
		d = point * node->plane.Normal() + node->plane[3];
		if ( d > 0 ) {
			nodeNum = node->children[0];
		} else {
			nodeNum = node->children[1];
		}
		if ( nodeNum == 0 ) {
			return -1;      // in solid
		}
		if ( nodeNum < 0 ) {
			nodeNum = -1 - nodeNum;
			if ( nodeNum >= numPortalAreas ) {
				idLib::Error( "idRenderWorld::PointInArea: area out of range" );
			}
			return nodeNum;
		}
		node = areaNodes + nodeNum;
	}

	return -1;
}

/*
===================
idRenderWorldLocal::BoundsInAreas_r
===================
*/
void idRenderWorldLocal::BoundsInAreas_r( int nodeNum, const idBounds &bounds, int *areas, int *numAreas, int maxAreas ) const {
	int side, i;
	areaNode_t *node;

	do {
		if ( nodeNum < 0 ) {
			nodeNum = -1 - nodeNum;

			for ( i = 0; i < ( *numAreas ); i++ ) {
				if ( areas[i] == nodeNum ) {
					break;
				}
			}
			if ( i >= ( *numAreas ) && ( *numAreas ) < maxAreas ) {
				areas[( *numAreas )++] = nodeNum;
			}
			return;
		}

		node = areaNodes + nodeNum;

		side = bounds.PlaneSide( node->plane );
		if ( side == PLANESIDE_FRONT ) {
			nodeNum = node->children[0];
		} else if ( side == PLANESIDE_BACK )   {
			nodeNum = node->children[1];
		} else {
			if ( node->children[1] != 0 ) {
				BoundsInAreas_r( node->children[1], bounds, areas, numAreas, maxAreas );
				if ( ( *numAreas ) >= maxAreas ) {
					return;
				}
			}
			nodeNum = node->children[0];
		}
	} while ( nodeNum != 0 );

	return;
}

/*
===================
idRenderWorldLocal::BoundsInAreas

  fills the *areas array with the number of the areas the bounds are in
  returns the total number of areas the bounds are in
===================
*/
int idRenderWorldLocal::BoundsInAreas( const idBounds &bounds, int *areas, int maxAreas ) const {
	int numAreas = 0;

	assert( areas );
	assert( bounds[0][0] <= bounds[1][0] && bounds[0][1] <= bounds[1][1] && bounds[0][2] <= bounds[1][2] );
	assert( bounds[1][0] - bounds[0][0] < 1e4f && bounds[1][1] - bounds[0][1] < 1e4f && bounds[1][2] - bounds[0][2] < 1e4f );

	if ( !areaNodes ) {
		return numAreas;
	}
	BoundsInAreas_r( 0, bounds, areas, &numAreas, maxAreas );
	return numAreas;
}

/*
================
idRenderWorldLocal::GuiTrace

checks a ray trace against any gui surfaces in an entity, returning the
fraction location of the trace on the gui surface, or -1,-1 if no hit.
this doesn't do any occlusion testing, simply ignoring non-gui surfaces.
start / end are in global world coordinates.
================
*/
guiPoint_t idRenderWorldLocal::GuiTrace( qhandle_t entityHandle, const idVec3 start, const idVec3 end ) const {
	guiPoint_t ret;
	memset( &ret, 0, sizeof( ret ) );
	ret.x = -1.0f;
	ret.y = -1.0f;
	return ret;
}

/*
================
idRenderWorldLocal::ModelTrace
================
*/
bool idRenderWorldLocal::ModelTrace( modelTrace_t &trace, qhandle_t entityHandle, const idVec3 &start, const idVec3 &end, const float radius ) const {
	// the model tracing needs the model code, which is ported with the
	// model adapter phase
	return false;
}

/*
================
idRenderWorldLocal::Trace
================
*/
bool idRenderWorldLocal::Trace( modelTrace_t &trace, const idVec3 &start, const idVec3 &end, const float radius, bool skipDynamic, bool skipPlayer ) const {
	// the world tracing is ported with the BSP adapter phase
	return false;
}

/*
================
idRenderWorldLocal::FastWorldTrace
================
*/
bool idRenderWorldLocal::FastWorldTrace( modelTrace_t &trace, const idVec3 &start, const idVec3 &end ) const {
	// the BSP tree tracing is ported with the BSP adapter phase
	return false;
}

/*
==============
NumPortals
==============
*/
int idRenderWorldLocal::NumPortals() const {
	return numInterAreaPortals;
}

/*
==============
FindPortal

Game code uses this to identify which portals are inside doors.
Returns 0 if no portal contacts the bounds
==============
*/
qhandle_t idRenderWorldLocal::FindPortal( const idBounds &b ) const {
	// the portal windings are created by the map loading code, which is
	// ported with the BSP adapter phase
	return 0;
}

/*
=============
FloodConnectedAreas
=============
*/
void idRenderWorldLocal::FloodConnectedAreas( portalArea_t *area, int portalAttributeIndex ) {
	if ( area->connectedAreaNum[portalAttributeIndex] == connectedAreaNum ) {
		return;
	}
	area->connectedAreaNum[portalAttributeIndex] = connectedAreaNum;

	for ( portal_t *p = area->portals; p != NULL; p = p->next ) {
		if ( !( p->doublePortal->blockingBits & ( 1 << portalAttributeIndex ) ) ) {
			FloodConnectedAreas( &portalAreas[p->intoArea], portalAttributeIndex );
		}
	}
}

/*
==============
AreasAreConnected
==============
*/
bool idRenderWorldLocal::AreasAreConnected( int areaNum1, int areaNum2, portalConnection_t connection ) const {
	if ( areaNum1 == -1 || areaNum2 == -1 ) {
		return false;
	}
	if ( areaNum1 > numPortalAreas || areaNum2 > numPortalAreas || areaNum1 < 0 || areaNum2 < 0 ) {
		idLib::Error( "idRenderWorldLocal::AreasAreConnected: bad parms: %i, %i", areaNum1, areaNum2 );
	}

	int attribute = 0;

	int intConnection = (int)connection;

	while ( intConnection > 1 ) {
		attribute++;
		intConnection >>= 1;
	}
	if ( attribute >= NUM_PORTAL_ATTRIBUTES || ( 1 << attribute ) != (int)connection ) {
		idLib::Error( "idRenderWorldLocal::AreasAreConnected: bad connection number: %i\n", (int)connection );
	}

	return portalAreas[areaNum1].connectedAreaNum[attribute] == portalAreas[areaNum2].connectedAreaNum[attribute];
}

/*
==============
SetPortalState

doors explicitly close off portals when shut
==============
*/
void idRenderWorldLocal::SetPortalState( qhandle_t portal, int blockTypes ) {
	if ( portal == 0 ) {
		return;
	}

	if ( portal < 1 || portal > numInterAreaPortals ) {
		idLib::Error( "SetPortalState: bad portal number %i", portal );
	}
	int old = doublePortals[portal - 1].blockingBits;
	if ( old == blockTypes ) {
		return;
	}
	doublePortals[portal - 1].blockingBits = blockTypes;

	// leave the connectedAreaGroup the same on one side,
	// then flood fill from the other side with a new number for each changed attribute
	for ( int i = 0; i < NUM_PORTAL_ATTRIBUTES; i++ ) {
		if ( ( old ^ blockTypes ) & ( 1 << i ) ) {
			connectedAreaNum++;
			FloodConnectedAreas( &portalAreas[doublePortals[portal - 1].portals[1]->intoArea], i );
		}
	}

	// the BFG code also writes the portal state to the demo file here
}

/*
==============
GetPortalState
==============
*/
int idRenderWorldLocal::GetPortalState( qhandle_t portal ) {
	if ( portal == 0 ) {
		return 0;
	}

	if ( portal < 1 || portal > numInterAreaPortals ) {
		idLib::Error( "GetPortalState: bad portal number %i", portal );
	}

	return doublePortals[portal - 1].blockingBits;
}

/*
===================
idRenderWorldLocal::AddEntityRefToArea
===================
*/
void idRenderWorldLocal::AddEntityRefToArea( idRenderEntityLocal *def, portalArea_t *area ) {
	areaReference_t *ref;

	if ( def == NULL ) {
		idLib::Error( "idRenderWorldLocal::AddEntityRefToArea: NULL def" );
		return;
	}

	for ( ref = def->entityRefs; ref != NULL; ref = ref->ownerNext ) {
		if ( ref->area == area ) {
			return;
		}
	}

	// the BFG code allocates the references through the block allocator
	// of BoundsTrack.h, which is ported with the GLSL backend phase
	ref = new ( TAG_RENDER ) areaReference_t;
	memset( ref, 0, sizeof( *ref ) );

	ref->entity = def;

	// link to entityDef
	ref->ownerNext = def->entityRefs;
	def->entityRefs = ref;

	// link to end of area list
	ref->area = area;
	ref->areaNext = &area->entityRefs;
	ref->areaPrev = area->entityRefs.areaPrev;
	ref->areaNext->areaPrev = ref;
	ref->areaPrev->areaNext = ref;
}

/*
===================
idRenderWorldLocal::AddLightRefToArea
===================
*/
void idRenderWorldLocal::AddLightRefToArea( idRenderLightLocal *light, portalArea_t *area ) {
	areaReference_t *lref;

	for ( lref = light->references; lref != NULL; lref = lref->ownerNext ) {
		if ( lref->area == area ) {
			return;
		}
	}

	// add a lightref to this area
	lref = new ( TAG_RENDER ) areaReference_t;
	memset( lref, 0, sizeof( *lref ) );
	lref->light = light;
	lref->area = area;
	lref->ownerNext = light->references;
	light->references = lref;

	// doubly linked list so we can free them easily later
	area->lightRefs.areaNext->areaPrev = lref;
	lref->areaNext = area->lightRefs.areaNext;
	lref->areaPrev = &area->lightRefs;
	area->lightRefs.areaNext = lref;
}

/*
================
idRenderWorldLocal::DebugClearLines
================
*/
void idRenderWorldLocal::DebugClearLines( int time ) {
	// the debug drawing goes through the backend debug tools, which are
	// ported with the GLSL backend phase
}

/*
================
idRenderWorldLocal::DebugLine
================
*/
void idRenderWorldLocal::DebugLine( const idVec4 &color, const idVec3 &start, const idVec3 &end, const int lifetime, const bool depthTest ) {
}

/*
================
idRenderWorldLocal::DebugArrow
================
*/
void idRenderWorldLocal::DebugArrow( const idVec4 &color, const idVec3 &start, const idVec3 &end, int size, const int lifetime ) {
}

/*
================
idRenderWorldLocal::DebugWinding
================
*/
void idRenderWorldLocal::DebugWinding( const idVec4 &color, const idWinding &w, const idVec3 &origin, const idMat3 &axis, const int lifetime, const bool depthTest ) {
}

/*
================
idRenderWorldLocal::DebugCircle
================
*/
void idRenderWorldLocal::DebugCircle( const idVec4 &color, const idVec3 &origin, const idVec3 &dir, const float radius, const int numSteps, const int lifetime, const bool depthTest ) {
}

/*
================
idRenderWorldLocal::DebugSphere
================
*/
void idRenderWorldLocal::DebugSphere( const idVec4 &color, const idSphere &sphere, const int lifetime, bool depthTest ) {
}

/*
================
idRenderWorldLocal::DebugBounds
================
*/
void idRenderWorldLocal::DebugBounds( const idVec4 &color, const idBounds &bounds, const idVec3 &org, const int lifetime ) {
}

/*
================
idRenderWorldLocal::DebugBox
================
*/
void idRenderWorldLocal::DebugBox( const idVec4 &color, const idBox &box, const int lifetime ) {
}

/*
================
idRenderWorldLocal::DebugCone
================
*/
void idRenderWorldLocal::DebugCone( const idVec4 &color, const idVec3 &apex, const idVec3 &dir, float radius1, float radius2, const int lifetime ) {
}

/*
================
idRenderWorldLocal::DebugAxis
================
*/
void idRenderWorldLocal::DebugAxis( const idVec3 &origin, const idMat3 &axis ) {
}

/*
================
idRenderWorldLocal::DebugClearPolygons
================
*/
void idRenderWorldLocal::DebugClearPolygons( int time ) {
}

/*
================
idRenderWorldLocal::DebugPolygon
================
*/
void idRenderWorldLocal::DebugPolygon( const idVec4 &color, const idWinding &winding, const int lifeTime, const bool depthTest ) {
}

/*
================
idRenderWorldLocal::DrawText
================
*/
void idRenderWorldLocal::DrawText( const char *text, const idVec3 &origin, float scale, const idVec4 &color, const idMat3 &viewAxis, const int align, const int lifetime, const bool depthTest ) {
}

/*
===================
idRenderWorldLocal::StartWritingDemo
===================
*/
void idRenderWorldLocal::StartWritingDemo( idDemoFile *demo ) {
	// the demo recording is ported with the backend phases
}

/*
===================
idRenderWorldLocal::StopWritingDemo
===================
*/
void idRenderWorldLocal::StopWritingDemo() {
}

/*
===================
idRenderWorldLocal::ProcessDemoCommand
===================
*/
bool idRenderWorldLocal::ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) {
	// the demo playback is ported with the backend phases
	return false;
}
