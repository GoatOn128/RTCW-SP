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

In addition, the RTCW SP Source Code is also subject to certain additional terms.  You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the RTCW SP Source Code.  If not, please request a copy in writing to id Software at the address below.

If you have questions concerning the license or the applicable additional terms, you should contact in writing to id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, MD 20850 USA.

===========================================================================
*/

#include "precompiled.h"

#include "Lighting.h"
#include "Tess.h"
#include "MaterialManager.h"
#include "ImageManager.h"
#include "CVarSystem.h"
#include "Q3Bsp.h"

/*

  The entity lighting, ported from src/renderer/tr_light.c of this
  code base: the light grid trilerp of R_SetupEntityLightingGrid, the
  minlight, hilight and sun fallbacks of R_SetupEntityLighting and the
  point query of R_LightForPoint.

  The engine reads the light grid off tr.world; this port reads it off
  the world global of the BSP adapter, r_worldBsp, and the identity
  light, the sun direction and the lightgrid multipliers come off the
  image and material managers that hold the engine's tr structure
  values.

  The dynamic light block of R_SetupEntityLighting reads the refdef
  dlights, and R_TransformDlights and R_DlightBmodel walk them for the
  bmodels: all of that lands with the dynamic light phase, as
  documented at the call sites.

  Nothing calls this yet: the scene phase drives it per entity, like
  the engine front end does.

*/

// engine q_shared.h
#define MAX_CLIENTS 64

// engine tr_init.c defaults
static idCVar r_ambientScale( "r_ambientScale", "0.5", CVAR_RENDERER | CVAR_CHEAT, "ambient light scale" );
static idCVar r_directedScale( "r_directedScale", "1", CVAR_RENDERER | CVAR_CHEAT, "directed light scale" );
static idCVar r_debugLight( "r_debugLight", "0", CVAR_RENDERER | CVAR_CHEAT, "print the light values of the player entity" );

/*
=================
VectorNormalize2

The engine's VectorNormalize2 of src/qcommon/q_math.c: normalizes v
into out and returns the length.
=================
*/
static ID_INLINE float VectorNormalize2( const vec3_t v, vec3_t out ) {
	float length, ilength;

	length = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
	length = ( float )sqrt( length );
	if ( length ) {
		ilength = 1.0f / length;
		out[0] = v[0] * ilength;
		out[1] = v[1] * ilength;
		out[2] = v[2] * ilength;
	} else {
		VectorClear( out );
	}

	return length;
}

/*
=================
R_SetupEntityLightingGrid

=================
*/
static void R_SetupEntityLightingGrid( trRefEntity_t *ent ) {
	vec3_t lightOrigin;
	int pos[3];
	int i, j;
	byte    *gridData;
	float frac[3];
	int gridStep[3];
	vec3_t direction;
	float totalFactor;
	const q3BspWorld_t *world = r_worldBsp;

	if ( ent->e.renderfx & RF_LIGHTING_ORIGIN ) {
		// seperate lightOrigins are needed so an object that is
		// sinking into the ground can still be lit, and so
		// multi-part models can be lit identically
		VectorCopy( ent->e.lightingOrigin, lightOrigin );
	} else {
		VectorCopy( ent->e.origin, lightOrigin );
	}

	VectorSubtract( lightOrigin, world->lightGridOrigin, lightOrigin );
	for ( i = 0 ; i < 3 ; i++ ) {
		float v;

		v = lightOrigin[i] * world->lightGridInverseSize[i];
		pos[i] = floor( v );
		frac[i] = v - pos[i];
		if ( pos[i] < 0 ) {
			pos[i] = 0;
		} else if ( pos[i] >= world->lightGridBounds[i] - 1 ) {
			pos[i] = world->lightGridBounds[i] - 1;
		}
	}

	VectorClear( ent->ambientLight );
	VectorClear( ent->directedLight );
	VectorClear( direction );

	assert( world->lightGridData ); // bk010103 - NULL with -nolight maps

	// trilerp the light value
	gridStep[0] = 8;
	gridStep[1] = 8 * world->lightGridBounds[0];
	gridStep[2] = 8 * world->lightGridBounds[0] * world->lightGridBounds[1];
	gridData = world->lightGridData + pos[0] * gridStep[0]
			   + pos[1] * gridStep[1] + pos[2] * gridStep[2];

	totalFactor = 0;
	for ( i = 0 ; i < 8 ; i++ ) {
		float factor;
		byte    *data;
		int lat, lng;
		vec3_t normal;

		factor = 1.0;
		data = gridData;
		for ( j = 0 ; j < 3 ; j++ ) {
			if ( i & ( 1 << j ) ) {
				factor *= frac[j];
				data += gridStep[j];
			} else {
				factor *= ( 1.0f - frac[j] );
			}
		}

		if ( !( data[0] + data[1] + data[2] ) ) {
			continue;   // ignore samples in walls
		}
		totalFactor += factor;

		ent->ambientLight[0] += factor * data[0];
		ent->ambientLight[1] += factor * data[1];
		ent->ambientLight[2] += factor * data[2];

		ent->directedLight[0] += factor * data[3];
		ent->directedLight[1] += factor * data[4];
		ent->directedLight[2] += factor * data[5];

		lat = data[7];
		lng = data[6];
		lat *= ( FUNCTABLE_SIZE / 256 );
		lng *= ( FUNCTABLE_SIZE / 256 );

		// decode X as cos( lat ) * sin( long )
		// decode Y as sin( lat ) * sin( long )
		// decode Z as cos( long )

		normal[0] = sinTable[( lat + ( FUNCTABLE_SIZE / 4 ) ) & FUNCTABLE_MASK] * sinTable[lng];
		normal[1] = sinTable[lat] * sinTable[lng];
		normal[2] = sinTable[( lng + ( FUNCTABLE_SIZE / 4 ) ) & FUNCTABLE_MASK];

		VectorMA( direction, factor, normal, direction );
	}

	if ( totalFactor > 0 && totalFactor < 0.99 ) {
		totalFactor = 1.0f / totalFactor;
		VectorScale( ent->ambientLight, totalFactor, ent->ambientLight );
		VectorScale( ent->directedLight, totalFactor, ent->directedLight );
	}

	VectorScale( ent->ambientLight, r_ambientScale.GetFloat(), ent->ambientLight );
	VectorScale( ent->directedLight, r_directedScale.GetFloat(), ent->directedLight );

//----(SA)	added
	// cheats?  check for single player?
	if ( materialManager->LightGridMulDirected() ) {
		VectorScale( ent->directedLight, materialManager->LightGridMulDirected(), ent->directedLight );
	}
	if ( materialManager->LightGridMulAmbient() ) {
		VectorScale( ent->ambientLight, materialManager->LightGridMulAmbient(), ent->ambientLight );
	}
//----(SA)	end

	VectorNormalize2( direction, ent->lightDir );
}


/*
===============
LogLight
===============
*/
static void LogLight( trRefEntity_t *ent ) {
	int max1, max2;

	if ( !( ent->e.renderfx & RF_FIRST_PERSON ) ) {
		return;
	}

	max1 = ent->ambientLight[0];
	if ( ent->ambientLight[1] > max1 ) {
		max1 = ent->ambientLight[1];
	} else if ( ent->ambientLight[2] > max1 ) {
		max1 = ent->ambientLight[2];
	}

	max2 = ent->directedLight[0];
	if ( ent->directedLight[1] > max2 ) {
		max2 = ent->directedLight[1];
	} else if ( ent->directedLight[2] > max2 ) {
		max2 = ent->directedLight[2];
	}

	idLib::Printf( "amb:%i  dir:%i\n", max1, max2 );
}

/*
=================
R_SetupEntityLighting

Calculates all the lighting values that will be used
by the Calc_* functions
=================
*/
void R_SetupEntityLighting( const trRefdef_t *refdef, trRefEntity_t *ent ) {
	int i;
	float d;
	vec3_t lightDir;
	vec3_t lightOrigin;

	// lighting calculations
	if ( ent->lightingCalculated ) {
		return;
	}
	ent->lightingCalculated = qtrue;

	//
	// trace a sample point down to find ambient light
	//
	if ( ent->e.renderfx & RF_LIGHTING_ORIGIN ) {
		// seperate lightOrigins are needed so an object that is
		// sinking into the ground can still be lit, and so
		// multi-part models can be lit identically
		VectorCopy( ent->e.lightingOrigin, lightOrigin );
	} else {
		VectorCopy( ent->e.origin, lightOrigin );
	}

	// if NOWORLDMODEL, only use dynamic lights (menu system, etc)
	if ( !( refdef->rdflags & RDF_NOWORLDMODEL )
		 && r_worldBsp->lightGridData ) {
		R_SetupEntityLightingGrid( ent );
	} else {
		ent->ambientLight[0] = ent->ambientLight[1] =
			ent->ambientLight[2] = imageManager->IdentityLight() * 150;
		ent->directedLight[0] = ent->directedLight[1] =
			ent->directedLight[2] = imageManager->IdentityLight() * 150;
		VectorCopy( materialManager->SunDirection(), ent->lightDir );
	}

	if ( ent->e.hilightIntensity ) {
		// level of intensity was set because the item was looked at
		ent->ambientLight[0] += imageManager->IdentityLight() * 128 * ent->e.hilightIntensity;
		ent->ambientLight[1] += imageManager->IdentityLight() * 128 * ent->e.hilightIntensity;
		ent->ambientLight[2] += imageManager->IdentityLight() * 128 * ent->e.hilightIntensity;
	} else if ( ent->e.renderfx & RF_MINLIGHT ) {
		// give everything a minimum light add
		ent->ambientLight[0] += imageManager->IdentityLight() * 32;
		ent->ambientLight[1] += imageManager->IdentityLight() * 32;
		ent->ambientLight[2] += imageManager->IdentityLight() * 32;
	}


	if ( ent->e.entityNum < MAX_CLIENTS && ( refdef->rdflags & RDF_SNOOPERVIEW ) ) {
		VectorSet( ent->ambientLight, 245, 245, 245 );    // allow a little room for flicker from directed light
	}


	//
	// modify the light by dynamic lights
	//
	d = VectorLength( ent->directedLight );
	VectorScale( ent->lightDir, d, lightDir );

	// the dynamic light block of the engine walks refdef->dlights
	// here and folds their color into the directed light; the dlights
	// land with the dynamic light phase, until then only the map grid
	// light and the sun light an entity

	// clamp ambient
	for ( i = 0 ; i < 3 ; i++ ) {
		if ( ent->ambientLight[i] > imageManager->IdentityLightByte() ) {
			ent->ambientLight[i] = imageManager->IdentityLightByte();
		}
	}

	if ( r_debugLight.GetInteger() ) {
		LogLight( ent );
	}

	// save out the byte packet version
	( (byte *)&ent->ambientLightInt )[0] = myftol( ent->ambientLight[0] );
	( (byte *)&ent->ambientLightInt )[1] = myftol( ent->ambientLight[1] );
	( (byte *)&ent->ambientLightInt )[2] = myftol( ent->ambientLight[2] );
	( (byte *)&ent->ambientLightInt )[3] = 0xff;

	// transform the direction to local space
	VectorNormalize( lightDir );
	ent->lightDir[0] = DotProduct( lightDir, ent->e.axis[0] );
	ent->lightDir[1] = DotProduct( lightDir, ent->e.axis[1] );
	ent->lightDir[2] = DotProduct( lightDir, ent->e.axis[2] );
}

/*
=================
R_LightForPoint
=================
*/
int R_LightForPoint( vec3_t point, vec3_t ambientLight, vec3_t directedLight, vec3_t lightDir ) {
	trRefEntity_t ent;

	// bk010103 - this segfaults with -nolight maps
	if ( r_worldBsp->lightGridData == NULL ) {
		return qfalse;
	}

	memset( &ent, 0, sizeof( ent ) );
	VectorCopy( point, ent.e.origin );
	R_SetupEntityLightingGrid( &ent );
	VectorCopy( ent.ambientLight, ambientLight );
	VectorCopy( ent.directedLight, directedLight );
	VectorCopy( ent.lightDir, lightDir );

	return qtrue;
}
