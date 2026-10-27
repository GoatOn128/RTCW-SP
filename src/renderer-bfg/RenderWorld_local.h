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

#ifndef __RENDERWORLDLOCAL_H__
#define __RENDERWORLDLOCAL_H__

#include "RenderWorld.h"
#include "ScreenRect.h"

/*
===============================================================================

	idRenderWorldLocal

	Trimmed from the BFG renderer: the interaction table, the decal and
	overlay allocators, the demo code and the portal view flow need the
	backend and the map loader, and are ported with the later renderer
	phases. The def registration and the portal state handling are
	complete.

===============================================================================
*/

// assume any lightDef or entityDef index above this is an internal error
const int LUDICROUS_INDEX   = 10000;

// the BFG framework file code defines this; it is not ported yet
#define FILE_NOT_FOUND_TIMESTAMP ( (ID_TIME_T)-1 )

class idRenderEntityLocal;
class idRenderLightLocal;
class idImage;
class idInteraction;
class idRenderModelDecal;
class idRenderModelOverlay;
struct viewEntity_t;
struct viewLight_t;

// areas have references to hold all the lights and entities in them
struct areaReference_t {
	areaReference_t *       areaNext;       // chain in the area
	areaReference_t *       areaPrev;
	areaReference_t *       ownerNext;      // chain on either the entityDef or lightDef
	idRenderEntityLocal *   entity;         // only one of entity / light will be non-NULL
	idRenderLightLocal *    light;          // only one of entity / light will be non-NULL
	struct portalArea_s *   area;           // so owners can find all the areas they are in
};


typedef struct portal_s {
	int intoArea;                           // area this portal leads to
	idWinding *             w;              // winding points have counter clockwise ordering seen this area
	idPlane plane;                          // view must be on the positive side of the plane to cross
	struct portal_s *       next;           // next portal of the area
	struct doublePortal_s * doublePortal;
} portal_t;


typedef struct doublePortal_s {
	struct portal_s *       portals[2];
	int blockingBits;                       // PS_BLOCK_VIEW, PS_BLOCK_AIR, etc, set by doors that shut them off

	// A portal will be considered closed if it is past the
	// fog-out point in a fog volume.  We only support a single
	// fog volume over each portal.
	idRenderLightLocal *    fogLight;
	struct doublePortal_s *nextFoggedPortal;
} doublePortal_t;


typedef struct portalArea_s {
	int areaNum;
	int connectedAreaNum[NUM_PORTAL_ATTRIBUTES];                        // if two areas have matching connectedAreaNum, they are
	// not separated by a portal with the apropriate PS_BLOCK_* blockingBits
	int viewCount;                          // set by R_FindViewLightsAndEntities
	portal_t *              portals;        // never changes after load
	areaReference_t entityRefs;             // head/tail of doubly linked list, may change
	areaReference_t lightRefs;              // head/tail of doubly linked list, may change
} portalArea_t;


static const int CHILDREN_HAVE_MULTIPLE_AREAS = -2;
static const int AREANUM_SOLID = -1;
typedef struct {
	idPlane plane;
	int children[2];                            // negative numbers are (-1 - areaNumber), 0 = solid
	int commonChildrenArea;                     // if all children are either solid or a single area,
	// this is the area number, else CHILDREN_HAVE_MULTIPLE_AREAS
} areaNode_t;


// idRenderLight should become the new public interface replacing the qhandle_t to light defs in the idRenderWorld interface
class idRenderLight {
public:
virtual ~idRenderLight() {}

virtual void            FreeRenderLight() = 0;
virtual void            UpdateRenderLight( const renderLight_t *re, bool forceUpdate = false ) = 0;
virtual void            GetRenderLight( renderLight_t *re ) = 0;
virtual void            ForceUpdate() = 0;
virtual int             GetIndex() = 0;
};


// idRenderEntity should become the new public interface replacing the qhandle_t to entity defs in the idRenderWorld interface
class idRenderEntity {
public:
virtual ~idRenderEntity() {}

virtual void            FreeRenderEntity() = 0;
virtual void            UpdateRenderEntity( const renderEntity_t *re, bool forceUpdate = false ) = 0;
virtual void            GetRenderEntity( renderEntity_t *re ) = 0;
virtual void            ForceUpdate() = 0;
virtual int             GetIndex() = 0;

// overlays are extra polygons that deform with animating models for blood and damage marks
virtual void            ProjectOverlay( const idPlane localTextureAxis[2], const idMaterial *material ) = 0;
virtual void            RemoveDecals() = 0;
};


class idRenderLightLocal : public idRenderLight {
public:
idRenderLightLocal();

virtual void            FreeRenderLight();
virtual void            UpdateRenderLight( const renderLight_t *re, bool forceUpdate = false );
virtual void            GetRenderLight( renderLight_t *re );
virtual void            ForceUpdate();
virtual int             GetIndex();

// the LightCastsShadows helper needs the full idMaterial and is
// ported with the material system

renderLight_t parms;                            // specification

bool lightHasMoved;                             // the light has changed its position since it was
// first added, so the prelight model is not valid
idRenderWorldLocal *    world;
int index;                                      // in world lightdefs

int areaNum;                                    // if not -1, we may be able to cull all the light's
// interactions if !viewDef->connectedAreas[areaNum]

int lastModifiedFrameNum;                           // to determine if it is constantly changing,
// and should go in the dynamic frame memory, or kept
// in the cached memory
bool archived;                                  // for demo writing


// derived information
idPlane lightProject[4];                            // old style light projection where Z and W are flipped and projected lights lightProject[3] is divided by ( zNear + zFar )
idRenderMatrix baseLightProject;                // global xyz1 to projected light strq
idRenderMatrix inverseBaseLightProject;             // transforms the zero-to-one cube to exactly cover the light in world space

const idMaterial *      lightShader;            // guaranteed to be valid, even if parms.shader isn't
idImage *               falloffImage;

idVec3 globalLightOrigin;                       // accounting for lightCenter and parallel
idBounds globalLightBounds;

int viewCount;                                  // if == tr.viewCount, the light is on the viewDef->viewLights list
viewLight_t *           viewLight;

areaReference_t *       references;             // each area the light is present in will have a lightRef
idInteraction *         firstInteraction;       // doubly linked list
idInteraction *         lastInteraction;

struct doublePortal_s * foggedPortals;
};


class idRenderEntityLocal : public idRenderEntity {
public:
idRenderEntityLocal();

virtual void            FreeRenderEntity();
virtual void            UpdateRenderEntity( const renderEntity_t *re, bool forceUpdate = false );
virtual void            GetRenderEntity( renderEntity_t *re );
virtual void            ForceUpdate();
virtual int             GetIndex();

// overlays are extra polygons that deform with animating models for blood and damage marks
virtual void            ProjectOverlay( const idPlane localTextureAxis[2], const idMaterial *material );
virtual void            RemoveDecals();

renderEntity_t parms;

float modelMatrix[16];                          // this is just a rearrangement of parms.axis and parms.origin
idRenderMatrix modelRenderMatrix;
idRenderMatrix inverseBaseModelProject;             // transforms the unit cube to exactly cover the model in world space

idRenderWorldLocal *    world;
int index;                                      // in world entityDefs

int lastModifiedFrameNum;                           // to determine if it is constantly changing,
// and should go in the dynamic frame memory, or kept
// in the cached memory
bool archived;                                  // for demo writing

idRenderModel *         dynamicModel;           // if parms.model->IsDynamicModel(), this is the generated data
int dynamicModelFrameCount;                         // continuously animating dynamic models will recreate
// dynamicModel if this doesn't == tr.viewCount
idRenderModel *         cachedDynamicModel;


// the local bounds used to place entityRefs, either from parms for dynamic entities, or a model bounds
idBounds localReferenceBounds;

// axis aligned bounding box in world space, derived from refernceBounds and
// modelMatrix in R_CreateEntityRefs()
idBounds globalReferenceBounds;

// a viewEntity_t is created whenever a idRenderEntityLocal is considered for inclusion
// in a given view, even if it turns out to not be visible
int viewCount;                                  // if tr.viewCount == viewCount, viewEntity is valid,
// but the entity may still be off screen
viewEntity_t *          viewEntity;             // in frame temporary memory

idRenderModelDecal *    decals;                 // decals that have been projected on this model
idRenderModelOverlay *  overlays;               // blood overlays on animated models

areaReference_t *       entityRefs;             // chain of all references
idInteraction *         firstInteraction;       // doubly linked list
idInteraction *         lastInteraction;

bool needsPortalSky;
};


class idRenderWorldLocal : public idRenderWorld {
public:
idRenderWorldLocal();
virtual ~idRenderWorldLocal();

virtual bool            InitFromMap( const char *mapName );
virtual void            ResetLocalRenderModels();               // Fixes a crash when switching between expansion packs in Doom3:BFG

virtual qhandle_t       AddEntityDef( const renderEntity_t *re );
virtual void            UpdateEntityDef( qhandle_t entityHandle, const renderEntity_t *re );
virtual void            FreeEntityDef( qhandle_t entityHandle );
virtual const renderEntity_t *GetRenderEntity( qhandle_t entityHandle ) const;

virtual qhandle_t       AddLightDef( const renderLight_t *rlight );
virtual void            UpdateLightDef( qhandle_t lightHandle, const renderLight_t *rlight );
virtual void            FreeLightDef( qhandle_t lightHandle );
virtual const renderLight_t *GetRenderLight( qhandle_t lightHandle ) const;

virtual bool            CheckAreaForPortalSky( int areaNum );

virtual void            GenerateAllInteractions();
virtual void            RegenerateWorld();

virtual void            ProjectDecalOntoWorld( const idFixedWinding &winding, const idVec3 &projectionOrigin, const bool parallel, const float fadeDepth, const idMaterial *material, const int startTime );
virtual void            ProjectDecal( qhandle_t entityHandle, const idFixedWinding &winding, const idVec3 &projectionOrigin, const bool parallel, const float fadeDepth, const idMaterial *material, const int startTime );
virtual void            ProjectOverlay( qhandle_t entityHandle, const idPlane localTextureAxis[2], const idMaterial *material, const int startTime );
virtual void            RemoveDecals( qhandle_t entityHandle );

virtual void            SetRenderView( const renderView_t *renderView );
virtual void            RenderScene( const renderView_t *renderView );

virtual int             NumPortals() const;
virtual qhandle_t       FindPortal( const idBounds &b ) const;
virtual void            SetPortalState( qhandle_t portal, int blockingBits );
virtual int             GetPortalState( qhandle_t portal );
virtual bool            AreasAreConnected( int areaNum1, int areaNum2, portalConnection_t connection ) const;

virtual int             NumAreas() const;
virtual int             PointInArea( const idVec3 &point ) const;
virtual int             BoundsInAreas( const idBounds &bounds, int *areas, int maxAreas ) const;
virtual int             NumPortalsInArea( int areaNum );
virtual exitPortal_t    GetPortal( int areaNum, int portalNum );

virtual guiPoint_t      GuiTrace( qhandle_t entityHandle, const idVec3 start, const idVec3 end ) const;
virtual bool            ModelTrace( modelTrace_t &trace, qhandle_t entityHandle, const idVec3 &start, const idVec3 &end, const float radius ) const;
virtual bool            Trace( modelTrace_t &trace, const idVec3 &start, const idVec3 &end, const float radius, bool skipDynamic, bool skipPlayer ) const;
virtual bool            FastWorldTrace( modelTrace_t &trace, const idVec3 &start, const idVec3 &end ) const;

virtual void            DebugClearLines( int time );
virtual void            DebugLine( const idVec4 &color, const idVec3 &start, const idVec3 &end, const int lifetime, const bool depthTest );
virtual void            DebugArrow( const idVec4 &color, const idVec3 &start, const idVec3 &end, int size, const int lifetime );
virtual void            DebugWinding( const idVec4 &color, const idWinding &w, const idVec3 &origin, const idMat3 &axis, const int lifetime, const bool depthTest );
virtual void            DebugCircle( const idVec4 &color, const idVec3 &origin, const idVec3 &dir, const float radius, const int numSteps, const int lifetime, const bool depthTest );
virtual void            DebugSphere( const idVec4 &color, const idSphere &sphere, const int lifetime, bool depthTest );
virtual void            DebugBounds( const idVec4 &color, const idBounds &bounds, const idVec3 &org, const int lifetime );
virtual void            DebugBox( const idVec4 &color, const idBox &box, const int lifetime );
virtual void            DebugCone( const idVec4 &color, const idVec3 &apex, const idVec3 &dir, float radius1, float radius2, const int lifetime );
virtual void            DebugAxis( const idVec3 &origin, const idMat3 &axis );

virtual void            DebugClearPolygons( int time );
virtual void            DebugPolygon( const idVec4 &color, const idWinding &winding, const int lifeTime, const bool depthTest );

virtual void            DrawText( const char *text, const idVec3 &origin, float scale, const idVec4 &color, const idMat3 &viewAxis, const int align, const int lifetime, bool depthTest );

//-----------------------

void                    AddEntityRefToArea( idRenderEntityLocal *def, portalArea_t *area );
void                    AddLightRefToArea( idRenderLightLocal *light, portalArea_t *area );

void                    FloodConnectedAreas( portalArea_t *area, int portalAttributeIndex );
idScreenRect &          GetAreaScreenRect( int areaNum ) const { return areaScreenRect[areaNum]; }

public:
idStr mapName;                                  // ie: maps/tim_dm2.proc, written to demoFile
ID_TIME_T mapTimeStamp;                         // for fast reloads of the same level

areaNode_t *            areaNodes;
int numAreaNodes;

portalArea_t *          portalAreas;
int numPortalAreas;
int connectedAreaNum;                           // incremented every time a door portal state changes

idScreenRect *          areaScreenRect;

doublePortal_t *        doublePortals;
int numInterAreaPortals;

idList<idRenderModel *, TAG_MODEL>          localModels;

idList<idRenderEntityLocal*, TAG_ENTITY>    entityDefs;
idList<idRenderLightLocal*, TAG_LIGHT>      lightDefs;

bool generateAllInteractionsCalled;

private:
void                    FreeWorld();
};

#endif /* !__RENDERWORLDLOCAL_H__ */
