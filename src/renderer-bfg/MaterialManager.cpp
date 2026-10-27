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
but WITHOUT ANY WARRANTY; without the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Doom 3 BFG Edition Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the Doom 3 BFG Edition Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied Doom 3 BFG Edition Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#include "../idlib/precompiled.h"
#include "Material_local.h"

/*

  The material manager keeps the registry of the loaded materials,
  following the model manager of this module. The name lookup matches
  the engine's shader lookup in src/renderer/tr_shader.c: the names are
  compared case-insensitively and a material registered with a negative
  lightmap index satisfies every non-negative lookup, so a shader
  definition serves all lightmap indexes of the same texture.

  Until the script translation lands, every unknown name gets the
  texture-only fallback material.

*/

static idMaterialManagerLocal staticMaterialManager;
idMaterialManager *materialManager = &staticMaterialManager;

/*
=================
idMaterialManagerLocal::Init
=================
*/
void idMaterialManagerLocal::Init() {
	initialized = true;

	// create a default material that is never drawn, like the engine's
	// default shader
	defaultMaterial = new idMaterial;
	defaultMaterial->InitDefault();
	AddMaterial( defaultMaterial );

	// the shader file scan lands with the script translation
}

/*
=================
idMaterialManagerLocal::Shutdown
=================
*/
void idMaterialManagerLocal::Shutdown() {
	materials.DeleteContents( true );
	hash.Free();
	shaderTextHash.Free();
	shaderText.Clear();
	shaderDefNames.Clear();
	shaderDefOffsets.Clear();
	defaultMaterial = NULL;
	initialized = false;
}

/*
=================
idMaterialManagerLocal::AddMaterial
=================
*/
void idMaterialManagerLocal::AddMaterial( idMaterial *material ) {
	hash.Add( hash.GenerateKey( material->GetName(), false ), materials.Append( material ) );
}

/*
=================
idMaterialManagerLocal::GetMaterial
=================
*/
const idMaterial *idMaterialManagerLocal::GetMaterial( const char *_name, int lightmapIndex, bool createIfNotFound ) {
	if ( !_name || !_name[0] ) {
		return defaultMaterial;
	}

	idStr canonical = _name;
	canonical.ToLower();
	canonical.StripFileExtension();

	// see if it is already loaded, with the lightmap match of the
	// engine's shader lookup
	int key = hash.GenerateKey( canonical, false );
	for ( int i = hash.First( key ); i != -1; i = hash.Next( i ) ) {
		idMaterial *material = materials[i];

		if ( canonical.Icmp( material->GetName() ) == 0 ) {
			if ( ( material->lightmapIndex == lightmapIndex ) ||
				 ( material->lightmapIndex < 0 && lightmapIndex >= 0 ) ) {
				return material;
			}
		}
	}

	if ( !createIfNotFound ) {
		return NULL;
	}

	// no explicit shader definition is known yet, so build the
	// texture-only fallback
	idMaterial *material = new idMaterial;
	material->InitTextureOnly( canonical, lightmapIndex );
	AddMaterial( material );

	return material;
}

/*
=================
idMaterialManagerLocal::CheckMaterial
=================
*/
const idMaterial *idMaterialManagerLocal::CheckMaterial( const char *name ) {
	EnsureInitialized();
	return GetMaterial( name, LIGHTMAP_NONE, false );
}

/*
=================
idMaterialManagerLocal::FindMaterial
=================
*/
const idMaterial *idMaterialManagerLocal::FindMaterial( const char *name, int lightmapIndex ) {
	EnsureInitialized();
	return GetMaterial( name, lightmapIndex, true );
}

/*
=================
idMaterialManagerLocal::NumMaterials
=================
*/
int idMaterialManagerLocal::NumMaterials() const {
	return materials.Num();
}

/*
=================
idMaterialManagerLocal::ListMaterials
=================
*/
void idMaterialManagerLocal::ListMaterials() const {
	idLib::Printf( "%5d materials\n", materials.Num() );
	for ( int i = 0; i < materials.Num(); i++ ) {
		const idMaterial *material = materials[i];
		idLib::Printf( "%-64s sort:%3d stages:%d %s%s\n",
					   material->GetName(), material->Sort(), material->GetNumStages(),
					   material->IsDrawn() ? "" : " (not drawn)",
					   material->defaulted ? " (defaulted)" : "" );
	}
}

/*
=================
idMaterialManagerLocal::EnsureInitialized
=================
*/
void idMaterialManagerLocal::EnsureInitialized() {
	// the engine renderer initialization is not hooked up yet, so the
	// manager initializes lazily on the first lookup
	if ( !initialized ) {
		Init();
	}
}
