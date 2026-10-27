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
#include "ModelManager.h"
#include "Model_local.h"

/*

  The BFG code base keeps the model manager in ModelManager.cpp, with a
  private idRenderModelManagerLocal subclass. The console commands, the
  preload manifest and the memory reporting of the BFG version are not
  ported: the command system is not hooked up and the file system hookup
  happens with the engine integration.

*/

class idRenderModelManagerLocal : public idRenderModelManager {
public:
virtual void            Init();
virtual void            Shutdown();
virtual void            BeginLevelLoad();
virtual void            EndLevelLoad();
virtual idRenderModel * AllocModel();
virtual void            FreeModel( idRenderModel *model );
virtual idRenderModel * FindModel( const char *modelName );
virtual idRenderModel * CheckModel( const char *modelName );
virtual idRenderModel * DefaultModel();
virtual void            AddModel( idRenderModel *model );
virtual void            RemoveModel( idRenderModel *model );
virtual void            ReloadModels( bool forceAll = false );
virtual void            FreeModelVertexCaches();

private:
idRenderModel *         GetModel( const char *_modelName, bool createIfNotFound );

idList<idRenderModel *, TAG_MODEL>  models;
idHashIndex hash;
idRenderModel *                 defaultModel;
bool insideLevelLoad;
};

static idRenderModelManagerLocal staticModelManager;
idRenderModelManager *          renderModelManager = &staticModelManager;

/*
=================
idRenderModelManagerLocal::Init
=================
*/
void idRenderModelManagerLocal::Init() {
	insideLevelLoad = false;

	// create a default model
	idRenderModelStatic *model = new idRenderModelStatic;
	model->InitEmpty( "_DEFAULT" );
	model->MakeDefaultModel();
	model->SetLevelLoadReferenced( true );
	defaultModel = model;
	AddModel( model );

	// the BFG code also creates the beam and the sprite models here;
	// those are frontend helper models and are ported with the
	// frontend phase
}

/*
=================
idRenderModelManagerLocal::Shutdown
=================
*/
void idRenderModelManagerLocal::Shutdown() {
	models.DeleteContents( true );
	hash.Free();
}

/*
=================
idRenderModelManagerLocal::GetModel
=================
*/
idRenderModel *idRenderModelManagerLocal::GetModel( const char *_modelName, bool createIfNotFound ) {

	if ( !_modelName || !_modelName[0] ) {
		return NULL;
	}

	idStr canonical = _modelName;
	canonical.ToLower();

	idStr extension;
	canonical.ExtractFileExtension( extension );

	// see if it is already present
	int key = hash.GenerateKey( canonical, false );
	for ( int i = hash.First( key ); i != -1; i = hash.Next( i ) ) {
		idRenderModel *model = models[i];

		if ( canonical.Icmp( model->Name() ) == 0 ) {
			if ( !model->IsLoaded() ) {
				// reload it if it was purged
				model->LoadModel();
			}
			model->SetLevelLoadReferenced( true );
			return model;
		}
	}

	// see if we can load it

	// determine which subclass of idRenderModel to initialize
	// the md3, mdc and mds adapters land with the Q3 format commit
	idRenderModel *model = NULL;

	// Not one of the known formats
	if ( model == NULL ) {

		if ( extension.Length() ) {
			idLib::Warning( "unknown model type '%s'", canonical.c_str() );
		}

		if ( !createIfNotFound ) {
			return NULL;
		}

		idRenderModelStatic *smodel = new idRenderModelStatic;
		smodel->InitEmpty( canonical );
		smodel->MakeDefaultModel();

		model = smodel;
	}

	model->SetLevelLoadReferenced( true );

	if ( !createIfNotFound && model->IsDefaultModel() ) {
		delete model;
		model = NULL;

		return NULL;
	}

	AddModel( model );

	return model;
}

/*
=================
idRenderModelManagerLocal::AllocModel
=================
*/
idRenderModel *idRenderModelManagerLocal::AllocModel() {
	return new idRenderModelStatic();
}

/*
=================
idRenderModelManagerLocal::FreeModel
=================
*/
void idRenderModelManagerLocal::FreeModel( idRenderModel *model ) {
	if ( !model ) {
		return;
	}
	if ( !dynamic_cast<idRenderModelStatic *>( model ) ) {
		idLib::Error( "idRenderModelManager::FreeModel: model '%s' is not a static model", model->Name() );
		return;
	}
	if ( model == defaultModel ) {
		idLib::Error( "idRenderModelManager::FreeModel: can't free the default model" );
		return;
	}

	delete model;
}

/*
=================
idRenderModelManagerLocal::FindModel
=================
*/
idRenderModel *idRenderModelManagerLocal::FindModel( const char *modelName ) {
	return GetModel( modelName, true );
}

/*
=================
idRenderModelManagerLocal::CheckModel
=================
*/
idRenderModel *idRenderModelManagerLocal::CheckModel( const char *modelName ) {
	return GetModel( modelName, false );
}

/*
=================
idRenderModelManagerLocal::DefaultModel
=================
*/
idRenderModel *idRenderModelManagerLocal::DefaultModel() {
	return defaultModel;
}

/*
=================
idRenderModelManagerLocal::AddModel
=================
*/
void idRenderModelManagerLocal::AddModel( idRenderModel *model ) {
	hash.Add( hash.GenerateKey( model->Name(), false ), models.Append( model ) );
}

/*
=================
idRenderModelManagerLocal::RemoveModel
=================
*/
void idRenderModelManagerLocal::RemoveModel( idRenderModel *model ) {
	int index = models.FindIndex( model );
	if ( index != -1 ) {
		hash.RemoveIndex( hash.GenerateKey( model->Name(), false ), index );
		models.RemoveIndex( index );
	}
}

/*
=================
idRenderModelManagerLocal::ReloadModels
=================
*/
void idRenderModelManagerLocal::ReloadModels( bool forceAll ) {
	if ( forceAll ) {
		idLib::Printf( "Reloading all model files...\n" );
	} else {
		idLib::Printf( "Checking for changed model files...\n" );
	}

	// the BFG code checks the file timestamp here; the engine file system
	// is not hooked up yet, so every reloadable model is simply reloaded

	// skip the default model at index 0
	for ( int i = 1; i < models.Num(); i++ ) {
		idRenderModel *model = models[i];

		// we may want to allow world model reloading in the future, but we don't now
		if ( !model->IsReloadable() ) {
			continue;
		}

		model->LoadModel();
	}

	// the BFG code also forces the world to regenerate its references
	// here, because models may have changed size; that needs the frontend
}

/*
=================
idRenderModelManagerLocal::FreeModelVertexCaches
=================
*/
void idRenderModelManagerLocal::FreeModelVertexCaches() {
	for ( int i = 0; i < models.Num(); i++ ) {
		idRenderModel *model = models[i];
		model->FreeVertexCache();
	}
}

/*
=================
idRenderModelManagerLocal::BeginLevelLoad
=================
*/
void idRenderModelManagerLocal::BeginLevelLoad() {
	insideLevelLoad = true;

	for ( int i = 0; i < models.Num(); i++ ) {
		idRenderModel *model = models[i];

		// always reload all models
		if ( model->IsReloadable() ) {
			model->PurgeModel();
		}

		model->SetLevelLoadReferenced( false );
	}
}

/*
=================
idRenderModelManagerLocal::EndLevelLoad
=================
*/
void idRenderModelManagerLocal::EndLevelLoad() {
	idLib::Printf( "----- idRenderModelManagerLocal::EndLevelLoad -----\n" );

	insideLevelLoad = false;
	int purgeCount = 0;
	int keepCount = 0;

	// purge any models not touched
	for ( int i = 0; i < models.Num(); i++ ) {
		idRenderModel *model = models[i];

		if ( !model->IsLevelLoadReferenced() && model->IsLoaded() && model->IsReloadable() ) {
			purgeCount++;
			model->PurgeModel();
		} else {
			keepCount++;
		}
	}

	idLib::Printf( "%05d models purged, %05d kept\n", purgeCount, keepCount );
}
