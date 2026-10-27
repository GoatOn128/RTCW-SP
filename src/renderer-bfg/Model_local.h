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

#ifndef __MODEL_LOCAL_H__
#define __MODEL_LOCAL_H__

#include "Model.h"

/*
===============================================================================

	Static model

	Trimmed from the BFG renderer: the source model loaders (ASE, LWO,
	MA), the surface merging and the inverted md5 joints are not ported.
	The Q3 format adapters subclass this class.

===============================================================================
*/

class idRenderModelStatic : public idRenderModel {
public:
	// the inherited public interface
	static idRenderModel *			Alloc();

									idRenderModelStatic();
	virtual							~idRenderModelStatic();

	virtual void					InitFromFile( const char *fileName );
	virtual bool					LoadBinaryModel( idFile *file, const ID_TIME_T sourceTimeStamp );
	virtual void					WriteBinaryModel( idFile *file, ID_TIME_T *_timeStamp = NULL ) const;
	virtual bool					SupportsBinaryModel() { return false; }

	virtual void					PartialInitFromFile( const char *fileName );
	virtual void					PurgeModel();
	virtual void					Reset() {};
	virtual void					LoadModel();
	virtual bool					IsLoaded();
	virtual void					SetLevelLoadReferenced( bool referenced );
	virtual bool					IsLevelLoadReferenced();
	virtual void					TouchData();
	virtual void					InitEmpty( const char *name );
	virtual void					AddSurface( modelSurface_t surface );
	virtual void					FinishSurfaces();
	virtual void					FreeVertexCache();
	virtual const char *			Name() const;
	virtual void					Print() const;
	virtual void					List() const;
	virtual int						Memory() const;
	virtual ID_TIME_T				Timestamp() const;
	virtual int						NumSurfaces() const;
	virtual int						NumBaseSurfaces() const;
	virtual const modelSurface_t *	Surface( int surfaceNum ) const;
	virtual srfTriangles_t *		AllocSurfaceTriangles( int numVerts, int numIndexes ) const;
	virtual void					FreeSurfaceTriangles( srfTriangles_t *tris ) const;
	virtual bool					IsStaticWorldModel() const;
	virtual bool					IsReloadable() const;
	virtual dynamicModel_t			IsDynamicModel() const;
	virtual bool					IsDefaultModel() const;
	virtual idRenderModel *			InstantiateDynamicModel( const struct renderEntity_s *ent, const viewDef_t *view, idRenderModel *cachedModel );
	virtual int						NumJoints() const;
	virtual const idMD5Joint *		GetJoints() const;
	virtual jointHandle_t			GetJointHandle( const char *name ) const;
	virtual const char *			GetJointName( jointHandle_t handle ) const;
	virtual const idJointQuat *		GetDefaultPose() const;
	virtual int						NearestJoint( int surfaceNum, int a, int b, int c ) const;
	virtual idBounds				Bounds( const struct renderEntity_s *ent ) const;
	virtual void					ReadFromDemoFile( class idDemoFile *f );
	virtual void					WriteToDemoFile( class idDemoFile *f );
	virtual float					DepthHack() const;

	virtual bool					ModelHasDrawingSurfaces() const { return hasDrawingSurfaces; };
	virtual bool					ModelHasInteractingSurfaces() const { return hasInteractingSurfaces; };
	virtual bool					ModelHasShadowCastingSurfaces() const { return hasShadowCastingSurfaces; };

	void							MakeDefaultModel();

public:
	idList<modelSurface_t, TAG_MODEL>	surfaces;
	idBounds						bounds;
	int								overlaysAdded;

protected:
	idStr							name;
	bool							isStaticWorldModel;
	bool							defaulted;
	bool							purged;					// eventually we will have dynamic reloading
	bool							fastLoad;				// don't generate tangents and shadow data
	bool							reloadable;				// if not, reloadModels won't check timestamp
	bool							levelLoadReferenced;	// for determining if it needs to be freed
	bool							hasDrawingSurfaces;
	bool							hasInteractingSurfaces;
	bool							hasShadowCastingSurfaces;
	ID_TIME_T						timeStamp;
};

#endif /* !__MODEL_LOCAL_H__ */
