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

/*
 * name:		cg_players.c
 *
 * desc:		handle the media and animation for player entities
 *
*/

#include "cg_local.h"

#define SWING_RIGHT 1
#define SWING_LEFT  2

char    *cg_customSoundNames[MAX_CUSTOM_SOUNDS] = {
	"*death1.wav",
	"*death2.wav",
	"*death3.wav",
	"*jump1.wav",
	"*pain25_1.wav",
	"*pain50_1.wav",
	"*pain75_1.wav",
	"*pain100_1.wav",
	"*falling1.wav",
	"*gasp.wav",
	"*drown.wav",
	"*fall1.wav",
	"*fall2.wav",
	"*taunt.wav",
	"*exert1.wav",
	"*exert2.wav",
	"*exert3.wav",
};

/*
================
CG_EntOnFire
================
*/
qboolean CG_EntOnFire( centity_t *cent ) {
	return  (   ( cent->currentState.onFireStart < cg.time ) &&
				( cent->currentState.onFireEnd > cg.time ) );
}

/*
================
CG_IsCrouchingAnim
================
*/
qboolean CG_IsCrouchingAnim( clientInfo_t *ci, int animNum ) {
	animation_t *anim;

	// FIXME: make compatible with new scripting
	animNum &= ~ANIM_TOGGLEBIT;
	//
	anim = BG_GetAnimationForIndex( ci->clientNum, animNum );
	//
	if ( anim->movetype & ( ( 1 << ANIM_MT_IDLECR ) | ( 1 << ANIM_MT_WALKCR ) | ( 1 << ANIM_MT_WALKCRBK ) ) ) {
		return qtrue;
	}
	//
	return qfalse;
}

/*
================
CG_CustomSound

================
*/
sfxHandle_t CG_CustomSound( int clientNum, const char *soundName ) {
	clientInfo_t *ci;
	int i;

	if ( soundName[0] != '*' ) {
		return trap_S_RegisterSound( soundName );
	}

	if ( clientNum < 0 || clientNum >= MAX_CLIENTS ) {
		clientNum = 0;
	}
	ci = &cgs.clientinfo[ clientNum ];

	for ( i = 0 ; i < MAX_CUSTOM_SOUNDS && cg_customSoundNames[i] ; i++ ) {
		if ( !Q_stricmp( soundName, cg_customSoundNames[i] ) ) {
			return ci->sounds[i];
		}
	}

	CG_Error( "Unknown custom sound: %s", soundName );
	return 0;
}



/*
=============================================================================

CLIENT INFO

=============================================================================
*/

/*
======================
CG_ParseGibModels

Read a configuration file containing gib models for use with this character
======================
*/
static qboolean CG_ParseGibModels( const char *filename, clientInfo_t *ci ) {
	char        *text_p;
	int len;
	int i;
	char        *token;
	char text[20000];
	fileHandle_t f;

	memset( ci->gibModels, 0, sizeof( ci->gibModels ) );

	// load the file
	len = trap_FS_FOpenFile( filename, &f, FS_READ );
	if ( len <= 0 ) {
		return qfalse;
	}
	if ( len >= sizeof( text ) - 1 ) {
		CG_Printf( "File %s too long\n", filename );
		return qfalse;
	}
	trap_FS_Read( text, len, f );
	text[len] = 0;
	trap_FS_FCloseFile( f );

	// parse the text
	text_p = text;

	for ( i = 0; i < MAX_GIB_MODELS; i++ ) {
		token = COM_Parse( &text_p );
		if ( !token ) {
			break;
		}
		// cache this model
		ci->gibModels[i] = trap_R_RegisterModel( token );
	}

	return qtrue;
}


/*
==================
CG_CalcMoveSpeeds
==================
*/
void CG_CalcMoveSpeeds( clientInfo_t *ci ) {
	char *tags[2] = {"tag_footleft", "tag_footright"};
	vec3_t oldPos[2];
	refEntity_t refent;
	animation_t *anim;
	int i, j, k;
	float totalSpeed;
	int numSpeed;
	int low, numSteps, lastFirst, thisFirst;
	qboolean isStrafe;
	orientation_t o[2];

	refent.hModel = ci->legsModel;

	for ( i = 0, anim = ci->modelInfo->animations; i < ci->modelInfo->numAnimations; i++, anim++ ) {

		if ( anim->moveSpeed == 0 ) {
			continue;
		}

		totalSpeed = 0;
		numSpeed = 0;
		numSteps = 0;
		isStrafe = qfalse;
		if ( strstr( anim->name, "strafe" ) ) {
			isStrafe = qtrue;
		}

		// first, get the end frame positions, since thats where we loop from
		refent.frame = anim->firstFrame + anim->numFrames - 1;
		refent.oldframe = refent.frame;
		// for each foot
		for ( k = 0; k < 2; k++ ) {
			if ( trap_R_LerpTag( &o[k], &refent, tags[k], 0 ) < 0 ) {
				CG_Error( "CG_CalcMoveSpeeds: unable to find tag %s, cannot calculate movespeed", tags[k] );
			}
		}
		// save the positions
		for ( k = 0; k < 2; k++ ) {
			VectorCopy( o[k].origin, oldPos[k] );
		}
		//
		// set the numSteps
		if ( !isStrafe ) {
			if ( o[0].origin[0] > o[1].origin[0] ) {
				thisFirst = 0;
			} else { thisFirst = 1;}
		} else {
			if ( o[0].origin[1] > o[1].origin[1] ) {
				thisFirst = 0;
			} else { thisFirst = 1;}
		}
		lastFirst = thisFirst;

		// for each frame
		for ( j = 0; j < anim->numFrames; j++ ) {

			refent.frame = anim->firstFrame + j;
			refent.oldframe = refent.frame;

			// for each foot
			for ( k = 0; k < 2; k++ ) {
				if ( trap_R_LerpTag( &o[k], &refent, tags[k], 0 ) < 0 ) {
					CG_Error( "CG_CalcMoveSpeeds: unable to find tag %s, cannot calculate movespeed", tags[k] );
				}
			}

			// find the contact foot
			if ( anim->flags & ANIMFL_LADDERANIM ) {
				if ( o[0].origin[0] > o[1].origin[0] ) {
					low = 0;
				} else {
					low = 1;
				}
				totalSpeed += fabs( oldPos[low][2] - o[low].origin[2] );
			} else {
				if ( o[0].origin[2] < o[1].origin[2] ) {
					low = 0;
				} else {
					low = 1;
				}
				if ( !isStrafe ) {
					totalSpeed += fabs( oldPos[low][0] - o[low].origin[0] );
				} else {
					totalSpeed += fabs( oldPos[low][1] - o[low].origin[1] );
				}
				//
				// set the numSteps
				if ( !isStrafe ) {
					if ( o[0].origin[0] > o[1].origin[0] ) {
						thisFirst = 0;
					} else { thisFirst = 1;}
				} else {
					if ( o[0].origin[1] > o[1].origin[1] ) {
						thisFirst = 0;
					} else { thisFirst = 1;}
				}
				// if they have changed, record the step
				if ( lastFirst != thisFirst ) {
					numSteps++;
					lastFirst = thisFirst;
				}
			}

			numSpeed++;

			// save the positions
			for ( k = 0; k < 2; k++ ) {
				VectorCopy( o[k].origin, oldPos[k] );
			}
		}

		// record the speed
		if ( anim->moveSpeed < 0 ) {  // use the auto calculations
			anim->moveSpeed = (int)( ( totalSpeed / numSpeed ) * 1000.0 / anim->frameLerp );
		}
		// set the stepGap
		if ( !numSteps ) {
			numSteps = 2;
		}
		if ( numSteps % 2 ) {
			numSteps++;             // round it up if odd number of steps
		}
		anim->stepGap = ( 0.5 * ( (float)anim->moveSpeed * (float)anim->duration / 1000.0 ) );
		anim->stepGap /= ( numSteps / 2 );  // in case there are more than 2 steps in animation
		if ( isStrafe ) {
			anim->stepGap *= 1.3;   // HACK
		}
	}

	if ( cgs.localServer ) {
		CG_SendMoveSpeed( ci->modelInfo->animations, ci->modelInfo->numAnimations, ci->modelInfo->modelname );
	}
}

/*
======================
CG_ParseAnimationFiles

  Read in all the configuration and script files for this model.
======================
*/

#if 0   // RF, this entire function not used anymore, since we now grab all this stuff from the server

static qboolean CG_ParseAnimationFiles( const char *modelname, clientInfo_t *ci, int client ) {
	char text[100000];
	char filename[MAX_QPATH];
	fileHandle_t f;
	int len;

	// set the name of the model in the modelinfo structure
	Q_strncpyz( ci->modelInfo->modelname, modelname, sizeof( ci->modelInfo->modelname ) );

	// load the cfg file
	Com_sprintf( filename, sizeof( filename ), "models/players/%s/wolfanim.cfg", modelname );
	len = trap_FS_FOpenFile( filename, &f, FS_READ );
	if ( len <= 0 ) {
		return qfalse;
	}
	if ( len >= sizeof( text ) - 1 ) {
		CG_Printf( "File %s too long\n", filename );
		return qfalse;
	}
	trap_FS_Read( text, len, f );
	text[len] = 0;
	trap_FS_FCloseFile( f );

	// parse the text
	BG_AnimParseAnimConfig( ci->modelInfo, filename, text );

	if ( ci->isSkeletal != ci->modelInfo->isSkeletal ) {
		CG_Error( "Mis-match in %s, loaded skeletal model, but file does not specify SKELETAL\n", filename );
	}

	// calc movespeed values if required
	CG_CalcMoveSpeeds( ci );

	// load the script file
	Com_sprintf( filename, sizeof( filename ), "models/players/%s/wolfanim.script", modelname );
	len = trap_FS_FOpenFile( filename, &f, FS_READ );
	if ( len <= 0 ) {
		if ( ci->modelInfo->version > 1 ) {
			return qfalse;
		}
		// try loading the default script for old legacy models
		Com_sprintf( filename, sizeof( filename ), "models/players/default.script", modelname );
		len = trap_FS_FOpenFile( filename, &f, FS_READ );
		if ( len <= 0 ) {
			return qfalse;
		}
	}
	if ( len >= sizeof( text ) - 1 ) {
		CG_Printf( "File %s too long\n", filename );
		return qfalse;
	}
	trap_FS_Read( text, len, f );
	text[len] = 0;
	trap_FS_FCloseFile( f );

	// parse the text
	BG_AnimParseAnimScript( ci->modelInfo, &cgs.animScriptData, ci->clientNum, filename, text );
	return qtrue;
}
#endif

/*
==========================
CG_RegisterClientSkin
==========================
*/

//----(SA) modified this for head separation

static qboolean CG_RegisterClientSkin( clientInfo_t *ci, const char *modelName, const char *skinName ) {
	char filename[MAX_QPATH];

	// RF, try and register the new "body_*.skin" file for skeletal animation
	Com_sprintf( filename, sizeof( filename ), "models/players/%s/body_%s.skin", modelName, skinName );
	ci->legsSkin = trap_R_RegisterSkin( filename );
	if ( ci->legsSkin ) { // skeletal model
		ci->torsoSkin = ci->legsSkin;
		return qtrue;
	}

	Com_sprintf( filename, sizeof( filename ), "models/players/%s/lower_%s.skin", modelName, skinName );
	ci->legsSkin = trap_R_RegisterSkin( filename );

	Com_sprintf( filename, sizeof( filename ), "models/players/%s/upper_%s.skin", modelName, skinName );
	ci->torsoSkin = trap_R_RegisterSkin( filename );

	if ( !ci->legsSkin || !ci->torsoSkin ) {
		return qfalse;
	}

	return qtrue;
}

/*
==============
CG_RegisterClientHeadSkin
==============
*/
static qboolean CG_RegisterClientHeadSkin( clientInfo_t *ci, const char *modelName, const char *hSkinName ) {
	char filename[MAX_QPATH];

	Com_sprintf( filename, sizeof( filename ), "models/players/%s/head_%s.skin", modelName, hSkinName );
	ci->headSkin = trap_R_RegisterSkin( filename );

	if ( !ci->headSkin ) {
		return qfalse;
	}

	return qtrue;

}

//----(SA) end



//----(SA)	added
/*
==============
CG_RegisterAcc
==============
*/
static qboolean CG_RegisterAcc( clientInfo_t *ci, const char *modelName, const char *skinName, int *model, int *skin ) {
	char namefromskin[MAX_QPATH];
	char filename[MAX_QPATH];

	if ( !model || !skin ) {
		return qfalse;
	}

	// FIXME: have the check the last 4 chars rather than strstr()
	if ( !strstr( skinName, ".md3" ) ) {          // try to find a skin in the acc folder that matches
		*skin = trap_R_RegisterSkin( va( "%s/%s.skin", modelName, skinName ) );

		if ( *skin ) {
			if ( trap_R_GetSkinModel( *skin, "md3_part", &namefromskin[0] ) ) {
				Com_sprintf( filename, sizeof( filename ), "%s/acc/%s", modelName, namefromskin );
				// NOTE: FIXME: this will currently only work with accessories in the <modelName>/acc directory.
				//				It will have to strip the directory off the end and then use the remaining
				//				path in order to work for arbitrary sub-directories.
//				Com_sprintf( filename, sizeof( filename ), "%s/%s/%s.md3", modelName, <accpath>, namefromskin );

			} else {
				Com_sprintf( filename, sizeof( filename ), "%s/%s.md3", modelName, skinName );
			}
		} else {
			Com_sprintf( filename, sizeof( filename ), "%s/%s.md3", modelName, skinName );
		}
	} else {                                    // the skin wants a straight model
		Com_sprintf( filename, sizeof( filename ), "%s/%s", modelName, skinName );
	}


	*model = trap_R_RegisterModel( filename );

	if ( *model ) {
		return qtrue;
	}

	return qfalse;
}

//----(SA)	end


/*
==================
CG_CheckForExistingModelInfo

  If this player model has already been parsed, then use the existing information.
  Otherwise, set the modelInfo pointer to the first free slot.

  returns qtrue if existing model found, qfalse otherwise
==================
*/
extern animScriptData_t *globalScriptData;
qboolean CG_CheckForExistingModelInfo( clientInfo_t *ci, char *modelName, animModelInfo_t **modelInfo ) {
	int i;
	animModelInfo_t *trav; // *firstFree=NULL; // TTimo: unused

	globalScriptData = &cgs.animScriptData;

	for ( i = 0; i < MAX_ANIMSCRIPT_MODELS; i++ ) {
		trav = cgs.animScriptData.modelInfo[i];
		if ( trav && trav->modelname[0] ) {
			// this model is used, so check if it's a match
			if ( !Q_stricmp( trav->modelname, modelName ) ) {
				// found a match, use this modelinfo
				*modelInfo = trav;
				cgs.animScriptData.clientModels[ci->clientNum] = i + 1;
				return qtrue;
			}
		} else {
			// if we fell down to here, then we have found a free slot

			// request it from the server (game module)
			if ( trap_GetModelInfo( ci->clientNum, modelName, &cgs.animScriptData.modelInfo[i] ) ) {

				// success
				cgs.animScriptData.clientModels[ci->clientNum] = i + 1;
				*modelInfo = cgs.animScriptData.modelInfo[i];
				// calc movespeed/footstep values
				CG_CalcMoveSpeeds( ci );
				return qfalse;  // we need to cache all the assets for this character

			}

			// huh!?
			CG_Error( "CG_CheckForExistingModelInfo: unable to optain modelInfo from server" );
		}

	}

	CG_Error( "unable to find a free modelinfo slot, cannot continue\n" );
	// qfalse signifies that we need to parse the information from the script files
	return qfalse;
}


/*
==========================
CG_RegisterClientModelname
==========================
*/

//----(SA) modified this for head separation

static qboolean CG_RegisterClientModelname( clientInfo_t *ci, const char *modelName, const char *skinName ) {
	char namefromskin[MAX_QPATH];
	char filename[MAX_QPATH];
	char name[MAX_QPATH];
	int i;

	// if any skins failed to load, return failure
//----(SA) modified this for head separation
	if ( !CG_RegisterClientSkin( ci, modelName, skinName ) ) {
		Com_Printf( "Failed to load skin file: %s/%s\n", modelName, skinName );
		return qfalse;
	}

	// load cmodels before models so filecache works

	if ( trap_R_GetSkinModel( ci->legsSkin, "md3_part", &namefromskin[0] ) ) {
		Com_sprintf( filename, sizeof( filename ), "models/players/%s/%s", modelName, namefromskin );
		ci->legsModel = trap_R_RegisterModel( filename );
	} else {    // try skeletal model
		Com_sprintf( filename, sizeof( filename ), "models/players/%s/body.mds", modelName );
		ci->legsModel = trap_R_RegisterModel( filename );

		if ( !ci->legsModel ) {   // revert to mesh animation
			Com_sprintf( filename, sizeof( filename ), "models/players/%s/lower.md3", modelName );
			ci->legsModel = trap_R_RegisterModel( filename );
		} else {                // found skeletal model
			ci->isSkeletal = qtrue;
			ci->torsoModel = ci->legsModel;
		}
	}

	if ( !ci->isSkeletal ) {

		if ( !ci->legsModel ) {
			Com_Printf( "Failed to load legs model file %s\n", filename );
			return qfalse;
		}

		if ( trap_R_GetSkinModel( ci->torsoSkin, "md3_part", &namefromskin[0] ) ) {
			Com_sprintf( filename, sizeof( filename ), "models/players/%s/%s", modelName, namefromskin );
		} else {
			Com_sprintf( filename, sizeof( filename ), "models/players/%s/upper.md3", modelName );
		}

		ci->torsoModel = trap_R_RegisterModel( filename );

		if ( !ci->torsoModel ) {
			Com_Printf( "Failed to load torso model file %s\n", filename );
			return qfalse;
		}

	}

//----(SA)	testing
	{
		char scaleString[MAX_QPATH];
		char    *string_p;
		char    *scaleToken;
		qboolean badscale = qfalse;

		string_p = scaleString;

		if ( trap_R_GetSkinModel( ci->legsSkin, "playerscale", &scaleString[0] ) ) {
			scaleToken = COM_Parse( &string_p );
			if ( !scaleToken ) {
				badscale = qtrue;   // and drop to "if(badscale)" below
			} else
			{
				ci->playermodelScale[0] = atof( scaleToken );

				scaleToken = COM_Parse( &string_p );
				if ( !scaleToken ) {
					badscale = qtrue;   // and drop to "if(badscale)" below
				} else
				{
					ci->playermodelScale[1] = atof( scaleToken );

					scaleToken = COM_Parse( &string_p );
					if ( !scaleToken ) {
						badscale = qtrue;   // and drop to "if(badscale)" below
					} else
					{
						ci->playermodelScale[2] = atof( scaleToken );
					}
				}
			}
		}

		if ( badscale ) {
			ci->playermodelScale[0] =
				ci->playermodelScale[1] =
					ci->playermodelScale[2] = 0.0f;
		}
	}
//----(SA)	end


	// try all the accessories
	if ( trap_R_GetSkinModel( ci->legsSkin, "md3_beltr", &namefromskin[0] ) ) {
		CG_RegisterAcc( ci, va( "models/players/%s", modelName ), namefromskin, &ci->accModels[ACC_BELT_LEFT], &ci->accSkins[ACC_BELT_LEFT] );
	}
	if ( trap_R_GetSkinModel( ci->legsSkin, "md3_beltl", &namefromskin[0] ) ) {
		CG_RegisterAcc( ci, va( "models/players/%s", modelName ), namefromskin, &ci->accModels[ACC_BELT_RIGHT], &ci->accSkins[ACC_BELT_RIGHT] );
	}
	if ( trap_R_GetSkinModel( ci->torsoSkin, "md3_belt", &namefromskin[0] ) ) {
		CG_RegisterAcc( ci, va( "models/players/%s", modelName ), namefromskin, &ci->accModels[ACC_BELT], &ci->accSkins[ACC_BELT] );
	}
	if ( trap_R_GetSkinModel( ci->torsoSkin, "md3_back", &namefromskin[0] ) ) {
		CG_RegisterAcc( ci, va( "models/players/%s", modelName ), namefromskin, &ci->accModels[ACC_BACK], &ci->accSkins[ACC_BACK] );
	}
	if ( trap_R_GetSkinModel( ci->torsoSkin, "md3_weapon", &namefromskin[0] ) ) {
		CG_RegisterAcc( ci, va( "models/players/%s", modelName ), namefromskin, &ci->accModels[ACC_WEAPON], &ci->accSkins[ACC_WEAPON] );
	}
	if ( trap_R_GetSkinModel( ci->torsoSkin, "md3_weapon2", &namefromskin[0] ) ) {
		CG_RegisterAcc( ci, va( "models/players/%s", modelName ), namefromskin, &ci->accModels[ACC_WEAPON2], &ci->accSkins[ACC_WEAPON2] );
	}
//----(SA)	added
	// try anim script parts
	for ( i = 0; i < 8; i++ ) {
		if ( trap_R_GetSkinModel( ci->torsoSkin, va( "md3_animscript%d", i ), &namefromskin[0] ) ) {
			CG_RegisterAcc( ci, va( "models/players/%s", modelName ), namefromskin, &ci->partModels[ACC_WEAPON], &ci->partSkins[ACC_WEAPON] );
		}
	}
//----(SA)	end

	// look for this model in the list of models already opened
	if ( !CG_CheckForExistingModelInfo( ci, (char *)modelName, &ci->modelInfo ) ) {
/*
		if ( !CG_ParseAnimationFiles( modelName, ci, ci->clientNum ) ) {
			Com_Printf( "Failed to load animation file %s\n", filename );
			return qfalse;
		}
*/
		// special case, only cache certain shaders/models for certain characters
		if ( !Q_strcasecmp( (char *)modelName, "zombie" ) ) {
			cgs.media.zombieSpiritWallShader = trap_R_RegisterShader( "zombieDeathWindTrail" );
			cgs.media.zombieSpiritTrailShader = trap_R_RegisterShader( "zombieSpiritTrail" );
			cgs.media.zombieSpiritSkullShader = trap_R_RegisterShader( "zombieSpiritSkull" );
			//cgs.media.zombieDeathDustShader = trap_R_RegisterShader( "zombieDeathDust" );
			//cgs.media.zombieBodyFadeShader = trap_R_RegisterShader( "zombieBodyFade" );
			//cgs.media.zombieHeadFadeShader = trap_R_RegisterShader( "zombieHeadFade" );

			cgs.media.skeletonSkinShader = trap_R_RegisterShader( "skeletonSkin" );
			cgs.media.skeletonLegsModel = trap_R_RegisterModel( "models/players/skel/lower.md3" );
			cgs.media.skeletonLegsSkin = trap_R_RegisterSkin( "models/players/skel/lower_default.skin" );
			cgs.media.skeletonTorsoModel = trap_R_RegisterModel( "models/players/skel/upper.md3" );
			cgs.media.skeletonTorsoSkin = trap_R_RegisterSkin( "models/players/skel/upper_default.skin" );
			cgs.media.skeletonHeadModel = trap_R_RegisterModel( "models/players/skel/head.md3" );
			cgs.media.skeletonHeadSkin = trap_R_RegisterSkin( "models/players/skel/head_default.skin" );

			cgs.media.zombieSpiritSound = trap_S_RegisterSound( "sound/zombie/attack/spirit_start.wav" );
			cgs.media.zombieSpiritLoopSound = trap_S_RegisterSound( "sound/zombie/attack/spirit_loop.wav" );
			cgs.media.zombieDeathSound = trap_S_RegisterSound( "sound/world/ceramicbreak.wav" ); // Zombie Gib

			cgs.media.spiritSkullModel = trap_R_RegisterModel( "models/mapobjects/skull/skul2t.md3" );

			CG_RegisterWeapon( WP_GAUNTLET );
		} else if ( !Q_strcasecmp( (char *)modelName, "beast" ) ) {
			cgs.media.helgaSpiritSkullShader = trap_R_RegisterShader( "helgaSpiritGhost" );
			cgs.media.helgaSpiritTrailShader = trap_R_RegisterShader( "helgaSpiritTrail" );
			cgs.media.helgaGhostModel = trap_R_RegisterModel( "models/players/beast/ghost.md3" );
			cgs.media.helgaSpiritLoopSound = trap_S_RegisterSound( "sound/beast/tortured_souls_loop.wav" );
			cgs.media.helgaSpiritSound = CG_SoundScriptPrecache( "helgaSpiritStartSound" );
			cgs.media.helgaGaspSound = CG_SoundScriptPrecache( "helgaSpiritGasp" );
		} else if ( !Q_strcasecmp( (char *)modelName, "loper" ) ) {
			//cgs.media.loperGroundChargeShader = trap_R_RegisterShader( "loperGroundCharge" );
		} else if ( !Q_strcasecmp( (char *)modelName, "protosoldier" ) ) {
			cgs.media.protoArmorBreak = CG_SoundScriptPrecache( "Protosoldier_loseArmor" );

			cgs.media.protoArmor[0]     = trap_R_RegisterModel( "models/players/protosoldier/armor/nodam_chest.md3" );
			cgs.media.protoArmor[1]     = trap_R_RegisterModel( "models/players/protosoldier/armor/nodam_lftcalf.md3" );
			cgs.media.protoArmor[2]     = trap_R_RegisterModel( "models/players/protosoldier/armor/nodam_lftforarm.md3" );
			cgs.media.protoArmor[3]     = trap_R_RegisterModel( "models/players/protosoldier/armor/nodam_lftshoulder.md3" );
			cgs.media.protoArmor[4]     = trap_R_RegisterModel( "models/players/protosoldier/armor/nodam_lftthigh.md3" );
			cgs.media.protoArmor[5]     = trap_R_RegisterModel( "models/players/protosoldier/armor/nodam_rtcalf.md3" );
			cgs.media.protoArmor[6]     = trap_R_RegisterModel( "models/players/protosoldier/armor/nodam_rtforarm.md3" );
			cgs.media.protoArmor[7]     = trap_R_RegisterModel( "models/players/protosoldier/armor/nodam_rtshoulder.md3" );
			cgs.media.protoArmor[8]     = trap_R_RegisterModel( "models/players/protosoldier/armor/nodam_rtthigh.md3" );

			cgs.media.protoArmor[9]     = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_chest1.md3" );
			cgs.media.protoArmor[10]    = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_lftcalf1.md3" );
			cgs.media.protoArmor[11]    = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_lftforarm1.md3" );
			cgs.media.protoArmor[12]    = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_lftshoulder1.md3" );
			cgs.media.protoArmor[13]    = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_lftthigh1.md3" );
			cgs.media.protoArmor[14]    = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_rtcalf1.md3" );
			cgs.media.protoArmor[15]    = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_rtforarm1.md3" );
			cgs.media.protoArmor[16]    = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_rtshoulder1.md3" );
			cgs.media.protoArmor[17]    = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_rtthigh1.md3" );

			cgs.media.protoArmor[18]    = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_chest2.md3" );
			cgs.media.protoArmor[19]    = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_lftcalf2.md3" );
			cgs.media.protoArmor[20]    = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_lftforarm2.md3" );
			cgs.media.protoArmor[21]    = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_lftshoulder2.md3" );
			cgs.media.protoArmor[22]    = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_lftthigh2.md3" );
			cgs.media.protoArmor[23]    = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_rtcalf2.md3" );
			cgs.media.protoArmor[24]    = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_rtforarm2.md3" );
			cgs.media.protoArmor[25]    = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_rtshoulder2.md3" );
			cgs.media.protoArmor[26]    = trap_R_RegisterModel( "models/players/protosoldier/armor/dam_rtthigh2.md3" );
		} else if ( !Q_strcasecmp( (char *)modelName, "supersoldier" ) ) {

			cgs.media.superArmorBreak = CG_SoundScriptPrecache( "Supersoldier_loseArmor" );

			cgs.media.superArmor[0]     = trap_R_RegisterModel( "models/players/supersoldier/armor/nodam_chest.md3" );
			cgs.media.superArmor[1]     = trap_R_RegisterModel( "models/players/supersoldier/armor/nodam_lftcalf.md3" );
			cgs.media.superArmor[2]     = trap_R_RegisterModel( "models/players/supersoldier/armor/nodam_lftforarm.md3" );
			cgs.media.superArmor[3]     = trap_R_RegisterModel( "models/players/supersoldier/armor/nodam_lftshoulder.md3" );
			cgs.media.superArmor[4]     = trap_R_RegisterModel( "models/players/supersoldier/armor/nodam_lftthigh.md3" );
			cgs.media.superArmor[5]     = trap_R_RegisterModel( "models/players/supersoldier/armor/nodam_rtcalf.md3" );
			cgs.media.superArmor[6]     = trap_R_RegisterModel( "models/players/supersoldier/armor/nodam_rtforarm.md3" );
			cgs.media.superArmor[7]     = trap_R_RegisterModel( "models/players/supersoldier/armor/nodam_rtshoulder.md3" );
			cgs.media.superArmor[8]     = trap_R_RegisterModel( "models/players/supersoldier/armor/nodam_rtthigh.md3" );

			cgs.media.superArmor[9]     = trap_R_RegisterModel( "models/players/supersoldier/armor/nodam_lftfoot.md3" );
			cgs.media.superArmor[10]    = trap_R_RegisterModel( "models/players/supersoldier/armor/nodam_rtfoot.md3" );
			cgs.media.superArmor[11]    = trap_R_RegisterModel( "models/players/supersoldier/armor/nodam_lftuparm.md3" );
			cgs.media.superArmor[12]    = trap_R_RegisterModel( "models/players/supersoldier/armor/nodam_rtuparm.md3" );
			cgs.media.superArmor[13]    = trap_R_RegisterModel( "models/players/supersoldier/armor/nodam_waist.md3" );
			cgs.media.superArmor[14]    = trap_R_RegisterModel( "models/players/supersoldier/armor/nodam_lftknee.md3" );
			cgs.media.superArmor[15]    = trap_R_RegisterModel( "models/players/supersoldier/armor/nodam_rtknee.md3" );



			cgs.media.superArmor[16]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_chest1.md3" );
			cgs.media.superArmor[17]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_lftcalf1.md3" );
			cgs.media.superArmor[18]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_lftforarm1.md3" );
			cgs.media.superArmor[19]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_lftshoulder1.md3" );
			cgs.media.superArmor[20]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_lftthigh1.md3" );
			cgs.media.superArmor[21]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_rtcalf1.md3" );
			cgs.media.superArmor[22]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_rtforarm1.md3" );
			cgs.media.superArmor[23]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_rtshoulder1.md3" );
			cgs.media.superArmor[24]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_rtthigh1.md3" );

			cgs.media.superArmor[25]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_lftfoot1.md3" );
			cgs.media.superArmor[26]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_rtfoot1.md3" );
			cgs.media.superArmor[27]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_lftuparm1.md3" );
			cgs.media.superArmor[28]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_rtuparm1.md3" );
			cgs.media.superArmor[29]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_waist1.md3" );

			cgs.media.superArmor[30]    = 0;
			cgs.media.superArmor[31]    = 0;


			cgs.media.superArmor[32]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_chest2.md3" );
			cgs.media.superArmor[33]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_lftcalf2.md3" );
			cgs.media.superArmor[34]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_lftforarm2.md3" );
			cgs.media.superArmor[35]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_lftshoulder2.md3" );
			cgs.media.superArmor[36]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_lftthigh2.md3" );
			cgs.media.superArmor[37]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_rtcalf2.md3" );
			cgs.media.superArmor[38]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_rtforarm2.md3" );
			cgs.media.superArmor[39]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_rtshoulder2.md3" );
			cgs.media.superArmor[30]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_rtthigh2.md3" );

			cgs.media.superArmor[31]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_lftfoot2.md3" );
			cgs.media.superArmor[32]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_rtfoot2.md3" );
			cgs.media.superArmor[33]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_lftuparm2.md3" );
			cgs.media.superArmor[44]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_rtuparm2.md3" );
			cgs.media.superArmor[45]    = trap_R_RegisterModel( "models/players/supersoldier/armor/dam_waist2.md3" );

			cgs.media.superArmor[46]    = 0;
			cgs.media.superArmor[47]    = 0;
/*
super has that proto doesn't...

dam_chest3              attached to tag_chest

dam_lftfoot1
dam_lftfoot2
nodam_lftfoot            attached to tag_footleft

dam_rtfoot1
dam_rtfoot2
nodam_rtfoot            attached to tag_footright

dam_lftuparm1
dam_lftuparm2
nodam_lftuparm       attached to tag_sholeft

dam_rtuparm1
dam_rtuparm2
nodam_rtuparm       attached to tag_shoright

dam_waist1
dam_waist2
nodam_waist            attached to tag_torso

nodam_lftknee          attached to tag_calfleft

nodam_rtknee          attached to tag_calfright
*/
		} else if ( !Q_strcasecmp( (char *)modelName, "dark" ) ) {

			cgs.media.superArmorBreak = CG_SoundScriptPrecache( "Supersoldier_loseArmor" );

			cgs.media.superArmor[0]     = trap_R_RegisterModel( "models/players/dark/armor/nodam_chest.md3" );
			cgs.media.superArmor[1]     = trap_R_RegisterModel( "models/players/dark/armor/nodam_lftcalf.md3" );
			cgs.media.superArmor[2]     = trap_R_RegisterModel( "models/players/dark/armor/nodam_lftforarm.md3" );
			cgs.media.superArmor[3]     = trap_R_RegisterModel( "models/players/dark/armor/nodam_lftshoulder.md3" );
			cgs.media.superArmor[4]     = trap_R_RegisterModel( "models/players/dark/armor/nodam_lftthigh.md3" );
			cgs.media.superArmor[5]     = trap_R_RegisterModel( "models/players/dark/armor/nodam_rtcalf.md3" );
			cgs.media.superArmor[6]     = trap_R_RegisterModel( "models/players/dark/armor/nodam_rtforarm.md3" );
			cgs.media.superArmor[7]     = trap_R_RegisterModel( "models/players/dark/armor/nodam_rtshoulder.md3" );
			cgs.media.superArmor[8]     = trap_R_RegisterModel( "models/players/dark/armor/nodam_rtthigh.md3" );

			cgs.media.superArmor[9]     = trap_R_RegisterModel( "models/players/dark/armor/nodam_lftfoot.md3" );
			cgs.media.superArmor[10]    = trap_R_RegisterModel( "models/players/dark/armor/nodam_rtfoot.md3" );
			cgs.media.superArmor[11]    = trap_R_RegisterModel( "models/players/dark/armor/nodam_lftuparm.md3" );
			cgs.media.superArmor[12]    = trap_R_RegisterModel( "models/players/dark/armor/nodam_rtuparm.md3" );
			cgs.media.superArmor[13]    = trap_R_RegisterModel( "models/players/dark/armor/nodam_waist.md3" );
			cgs.media.superArmor[14]    = trap_R_RegisterModel( "models/players/dark/armor/nodam_lftknee.md3" );
			cgs.media.superArmor[15]    = trap_R_RegisterModel( "models/players/dark/armor/nodam_rtknee.md3" );



			cgs.media.superArmor[16]    = trap_R_RegisterModel( "models/players/dark/armor/dam_chest1.md3" );
			cgs.media.superArmor[17]    = trap_R_RegisterModel( "models/players/dark/armor/dam_lftcalf1.md3" );
			cgs.media.superArmor[18]    = trap_R_RegisterModel( "models/players/dark/armor/dam_lftforarm1.md3" );
			cgs.media.superArmor[19]    = trap_R_RegisterModel( "models/players/dark/armor/dam_lftshoulder1.md3" );
			cgs.media.superArmor[20]    = trap_R_RegisterModel( "models/players/dark/armor/dam_lftthigh1.md3" );
			cgs.media.superArmor[21]    = trap_R_RegisterModel( "models/players/dark/armor/dam_rtcalf1.md3" );
			cgs.media.superArmor[22]    = trap_R_RegisterModel( "models/players/dark/armor/dam_rtforarm1.md3" );
			cgs.media.superArmor[23]    = trap_R_RegisterModel( "models/players/dark/armor/dam_rtshoulder1.md3" );
			cgs.media.superArmor[24]    = trap_R_RegisterModel( "models/players/dark/armor/dam_rtthigh1.md3" );

			cgs.media.superArmor[25]    = trap_R_RegisterModel( "models/players/dark/armor/dam_lftfoot1.md3" );
			cgs.media.superArmor[26]    = trap_R_RegisterModel( "models/players/dark/armor/dam_rtfoot1.md3" );
			cgs.media.superArmor[27]    = trap_R_RegisterModel( "models/players/dark/armor/dam_lftuparm1.md3" );
			cgs.media.superArmor[28]    = trap_R_RegisterModel( "models/players/dark/armor/dam_rtuparm1.md3" );
			cgs.media.superArmor[29]    = trap_R_RegisterModel( "models/players/dark/armor/dam_waist1.md3" );

			cgs.media.superArmor[30]    = 0;
			cgs.media.superArmor[31]    = 0;


			cgs.media.superArmor[32]    = trap_R_RegisterModel( "models/players/dark/armor/dam_chest2.md3" );
			cgs.media.superArmor[33]    = trap_R_RegisterModel( "models/players/dark/armor/dam_lftcalf2.md3" );
			cgs.media.superArmor[34]    = trap_R_RegisterModel( "models/players/dark/armor/dam_lftforarm2.md3" );
			cgs.media.superArmor[35]    = trap_R_RegisterModel( "models/players/dark/armor/dam_lftshoulder2.md3" );
			cgs.media.superArmor[36]    = trap_R_RegisterModel( "models/players/dark/armor/dam_lftthigh2.md3" );
			cgs.media.superArmor[37]    = trap_R_RegisterModel( "models/players/dark/armor/dam_rtcalf2.md3" );
			cgs.media.superArmor[38]    = trap_R_RegisterModel( "models/players/dark/armor/dam_rtforarm2.md3" );
			cgs.media.superArmor[39]    = trap_R_RegisterModel( "models/players/dark/armor/dam_rtshoulder2.md3" );
			cgs.media.superArmor[30]    = trap_R_RegisterModel( "models/players/dark/armor/dam_rtthigh2.md3" );

			cgs.media.superArmor[31]    = trap_R_RegisterModel( "models/players/dark/armor/dam_lftfoot2.md3" );
			cgs.media.superArmor[32]    = trap_R_RegisterModel( "models/players/dark/armor/dam_rtfoot2.md3" );
			cgs.media.superArmor[33]    = trap_R_RegisterModel( "models/players/dark/armor/dam_lftuparm2.md3" );
			cgs.media.superArmor[44]    = trap_R_RegisterModel( "models/players/dark/armor/dam_rtuparm2.md3" );
			cgs.media.superArmor[45]    = trap_R_RegisterModel( "models/players/dark/armor/dam_waist2.md3" );

			cgs.media.superArmor[46]    = 0;
			cgs.media.superArmor[47]    = 0;

		} else if ( !Q_strcasecmp( (char *)modelName, "heinrich" ) ) {

			cgs.media.heinrichArmorBreak = CG_SoundScriptPrecache( "Heinrich_loseArmor" );

			// RF, these are also used but supersoldier "spirits" in end map
			cgs.media.zombieSpiritLoopSound = trap_S_RegisterSound( "sound/zombie/attack/spirit_loop.wav" );
			cgs.media.ssSpiritSkullModel = trap_R_RegisterModel( "models/players/supersoldier/ssghost.md3" );

			cgs.media.zombieSpiritTrailShader = trap_R_RegisterShader( "zombieSpiritTrail" );
			cgs.media.zombieSpiritLoopSound = trap_S_RegisterSound( "sound/zombie/attack/spirit_loop.wav" );
			cgs.media.helgaGaspSound = CG_SoundScriptPrecache( "helgaSpiritGasp" );

			cgs.media.debrisHitSound = trap_S_RegisterSound( "sound/world/debris_hit.wav" );

			cgs.media.heinrichArmor[0]  = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_chest.md3" );
			cgs.media.heinrichArmor[1]  = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_lftcalf.md3" );
			cgs.media.heinrichArmor[2]  = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_lftforarm.md3" );
			cgs.media.heinrichArmor[3]  = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_lftshoulder.md3" );
			cgs.media.heinrichArmor[4]  = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_lftthigh.md3" );
			cgs.media.heinrichArmor[5]  = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_rtcalf.md3" );
			cgs.media.heinrichArmor[6]  = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_rtforarm.md3" );
			cgs.media.heinrichArmor[7]  = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_rtshoulder.md3" );
			cgs.media.heinrichArmor[8]  = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_rtthigh.md3" );

			cgs.media.heinrichArmor[9]  = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_lftfoot.md3" );
			cgs.media.heinrichArmor[10] = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_rtfoot.md3" );
			cgs.media.heinrichArmor[11] = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_lftuparm.md3" );
			cgs.media.heinrichArmor[12] = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_rtuparm.md3" );
			cgs.media.heinrichArmor[13] = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_waist.md3" );
			cgs.media.heinrichArmor[14] = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_lftknee.md3" );
			cgs.media.heinrichArmor[15] = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_rtknee.md3" );

			cgs.media.heinrichArmor[16] = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_lftelbow.md3" );
			cgs.media.heinrichArmor[17] = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_rtelbow.md3" );
			cgs.media.heinrichArmor[18] = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_lfthip.md3" );
			cgs.media.heinrichArmor[19] = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_rthip.md3" );
			cgs.media.heinrichArmor[20] = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_lftshin.md3" );
			cgs.media.heinrichArmor[21] = trap_R_RegisterModel( "models/players/heinrich/armor/nodam_rtshin.md3" );


			cgs.media.heinrichArmor[22] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_chest1.md3" );
			cgs.media.heinrichArmor[23] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lftcalf1.md3" );
			cgs.media.heinrichArmor[24] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lftforarm1.md3" );
			cgs.media.heinrichArmor[25] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lftshoulder1.md3" );
			cgs.media.heinrichArmor[26] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lftthigh1.md3" );
			cgs.media.heinrichArmor[27] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rtcalf1.md3" );
			cgs.media.heinrichArmor[28] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rtforarm1.md3" );
			cgs.media.heinrichArmor[29] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rtshoulder1.md3" );
			cgs.media.heinrichArmor[30] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rtthigh1.md3" );

			cgs.media.heinrichArmor[31] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lftfoot1.md3" );
			cgs.media.heinrichArmor[32] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rtfoot1.md3" );
			cgs.media.heinrichArmor[33] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lftuparm1.md3" );
			cgs.media.heinrichArmor[34] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rtuparm1.md3" );
			cgs.media.heinrichArmor[35] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_waist1.md3" );
			cgs.media.heinrichArmor[36] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lftknee1.md3" );
			cgs.media.heinrichArmor[37] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rtknee1.md3" );

			cgs.media.heinrichArmor[38] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lftelbow1.md3" );
			cgs.media.heinrichArmor[39] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rtelbow1.md3" );
			cgs.media.heinrichArmor[40] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lfthip1.md3" );
			cgs.media.heinrichArmor[41] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rthip1.md3" );
			cgs.media.heinrichArmor[42] = 0;
			cgs.media.heinrichArmor[43] = 0;


			cgs.media.heinrichArmor[44] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_chest2.md3" );
			cgs.media.heinrichArmor[45] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lftcalf2.md3" );
			cgs.media.heinrichArmor[46] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lftforarm2.md3" );
			cgs.media.heinrichArmor[47] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lftshoulder2.md3" );
			cgs.media.heinrichArmor[48] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lftthigh2.md3" );
			cgs.media.heinrichArmor[49] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rtcalf2.md3" );
			cgs.media.heinrichArmor[50] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rtforarm2.md3" );
			cgs.media.heinrichArmor[51] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rtshoulder2.md3" );
			cgs.media.heinrichArmor[52] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rtthigh2.md3" );

			cgs.media.heinrichArmor[43] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lftfoot2.md3" );
			cgs.media.heinrichArmor[54] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rtfoot2.md3" );
			cgs.media.heinrichArmor[55] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lftuparm2.md3" );
			cgs.media.heinrichArmor[56] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rtuparm2.md3" );
			cgs.media.heinrichArmor[57] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_waist2.md3" );
			cgs.media.heinrichArmor[58] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lftknee2.md3" );
			cgs.media.heinrichArmor[59] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rtknee2.md3" );

			cgs.media.heinrichArmor[60] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lftelbow2.md3" );
			cgs.media.heinrichArmor[61] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rtelbow2.md3" );
			cgs.media.heinrichArmor[62] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_lfthip2.md3" );
			cgs.media.heinrichArmor[63] = trap_R_RegisterModel( "models/players/heinrich/armor/dam_rthip2.md3" );
			cgs.media.heinrichArmor[64] = 0;
			cgs.media.heinrichArmor[65] = 0;

/*
heinrich has that ss doesn't...

dam_lftelbow
dam_lftelbow1
dam_lftelbow2            attached to tag_sholeft

nodam_rtelbow
dam_rtelbow1
dam_rtelbow2            attached to tag_shoright

nodam_lfthip
dam_lfthip1
dam_lfthip2
dam_lfthip3                attached to tag_legleft

nodam_rthip
dam_rthip1
dam_rthip2
dam_rthip3                 attached to tag_legright

nodam_lftshin           attached to tag_calfleft

nodam_rtshin            attached to tag_calfright
*/
		}
//----(SA)	end

// end special AI model loading


		// -------- FOOTSTEP SOUNDS ---------
		// load model specific footsteps
		// FIXME: this should be moved over to per model scripts or animation scripting
		if ( !Q_strcasecmp( (char *)modelName, "eliteguard" ) ) {
			// ELITEGUARD

			for ( i = 0; i < 4; i++ ) {
				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/eliteguard/step%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_ELITE_STEP][i] = trap_S_RegisterSound( name );

				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/eliteguard/clank%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_ELITE_METAL][i] = trap_S_RegisterSound( name );

//				Com_sprintf (name, sizeof(name), "sound/player/footsteps/eliteguard/roof%i.wav", i+1);
//				cgs.media.footsteps[FOOTSTEP_ELITE_ROOF][i] = trap_S_RegisterSound (name);

				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/eliteguard/wood%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_ELITE_WOOD][i] = trap_S_RegisterSound( name );

				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/eliteguard/gravel%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_ELITE_GRAVEL][i] = trap_S_RegisterSound( name );
			}
		} else if (   !Q_strcasecmp( (char *)modelName, "protosoldier" ) ) {
			// ProtoSoldier
			for ( i = 0; i < 4; i++ ) {
				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/protosoldier/step%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_PROTOSOLDIER_STEP][i] = trap_S_RegisterSound( name );

				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/protosoldier/clank%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_PROTOSOLDIER_METAL][i] = trap_S_RegisterSound( name );

				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/protosoldier/grass%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_PROTOSOLDIER_GRASS][i] = trap_S_RegisterSound( name );

				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/protosoldier/gravel%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_PROTOSOLDIER_GRAVEL][i] = trap_S_RegisterSound( name );

				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/protosoldier/wood%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_PROTOSOLDIER_WOOD][i] = trap_S_RegisterSound( name );
			}
		} else if ( !Q_strcasecmp( (char *)modelName, "supersoldier" ) ) {
			// SuperSoldier/HEINRICH
			for ( i = 0; i < 4; i++ ) {
				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/supersoldier/step%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_SUPERSOLDIER_STEP][i] = trap_S_RegisterSound( name );

				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/supersoldier/clank%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_SUPERSOLDIER_METAL][i] = trap_S_RegisterSound( name );

				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/supersoldier/grass%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_SUPERSOLDIER_GRASS][i] = trap_S_RegisterSound( name );

				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/supersoldier/gravel%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_SUPERSOLDIER_GRAVEL][i] = trap_S_RegisterSound( name );

				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/supersoldier/wood%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_SUPERSOLDIER_WOOD][i] = trap_S_RegisterSound( name );
			}
		}
		// Heinrich special
		else if ( !Q_strcasecmp( (char *)modelName, "heinrich" ) ) {
			// SuperSoldier/HEINRICH
			for ( i = 0; i < 4; i++ ) {
				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/heinrich/step%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_HEINRICH][i] = trap_S_RegisterSound( name );
			}
		} else if ( !Q_strcasecmp( (char *)modelName, "loper" ) ) {
			// Loper
			for ( i = 0; i < 4; i++ ) {
				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/loper/clank%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_LOPER_METAL][i] = trap_S_RegisterSound( name );

				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/loper/step%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_LOPER_STEP][i] = trap_S_RegisterSound( name );

				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/loper/wood%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_LOPER_WOOD][i] = trap_S_RegisterSound( name );
			}
		} else if ( !Q_strcasecmp( (char *)modelName, "zombie" ) ) {
			// Zombie
			for ( i = 0; i < 4; i++ ) {
				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/zombie/gravel%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_ZOMBIE_GRAVEL][i] = trap_S_RegisterSound( name );

				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/zombie/step%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_ZOMBIE_STEP][i] = trap_S_RegisterSound( name );

				Com_sprintf( name, sizeof( name ), "sound/player/footsteps/zombie/wood%i.wav", i + 1 );
				cgs.media.footsteps[FOOTSTEP_ZOMBIE_WOOD][i] = trap_S_RegisterSound( name );
			}
		} else if ( !Q_strcasecmp( (char *)modelName, "beast" ) ) {
			// Helga Boss
			cgs.media.footsteps[FOOTSTEP_BEAST][0] = CG_SoundScriptPrecache( "beastStep" );   // just precache the sound script
		}
	}

	// whoops!  this stuff would never get set if it found one existing already!!
	if ( !Q_strcasecmp( (char *)modelName, "loper" ) ) {
		ci->partModels[8] = trap_R_RegisterModel( va( "models/players/%s/spinner.md3", modelName ) );
	} else if ( !Q_strcasecmp( (char *)modelName, "sealoper" ) ) {
		ci->partModels[8] = trap_R_RegisterModel( va( "models/players/%s/spinner.md3", modelName ) );
	}


	return qtrue;
}

/*
==============
CG_RegisterClientHeadname
==============
*/
static qboolean CG_RegisterClientHeadname( clientInfo_t *ci, const char *modelName, const char *hSkinName ) {
	char namefromskin[MAX_QPATH];
	char filename[MAX_QPATH];
	int i;

	if ( !CG_RegisterClientHeadSkin( ci, modelName, hSkinName ) ) {
		Com_Printf( "Failed to load head skin file: %s/head_%s.skin\n", modelName, hSkinName );   //----(SA)
		return qfalse;
	}

	if ( trap_R_GetSkinModel( ci->headSkin, "md3_part", &namefromskin[0] ) ) {
		Com_sprintf( filename, sizeof( filename ), "models/players/%s/%s", modelName, namefromskin );
	} else {
		Com_sprintf( filename, sizeof( filename ), "models/players/%s/head.md3", modelName );
	}

	ci->headModel = trap_R_RegisterModel( filename );
	if ( !ci->headModel ) {
		Com_Printf( "Failed to load head model file %s\n", filename );    //----(SA)
		return qfalse;
	}

	if ( trap_R_GetSkinModel( ci->headSkin, "md3_hat", &namefromskin[0] ) ) {
		CG_RegisterAcc( ci, va( "models/players/%s", modelName ), namefromskin, &ci->accModels[ACC_HAT], &ci->accSkins[ACC_HAT] );
	}

	for ( i = 0; i < ACC_NUM_MOUTH - 1; i++ ) {
		if ( trap_R_GetSkinModel( ci->headSkin, va( "md3_hat%d", 2 + i ), &namefromskin[0] ) ) {
			CG_RegisterAcc( ci, va( "models/players/%s", modelName ), namefromskin, &ci->accModels[ACC_MOUTH2 + i], &ci->accSkins[ACC_MOUTH2 + i] );
		}
	}

	return qtrue;
}
/*
====================
CG_ColorFromString
====================
*/
static void CG_ColorFromString( const char *v, vec3_t color ) {
	int val;

	VectorClear( color );

	val = atoi( v );

	if ( val < 1 || val > 7 ) {
		VectorSet( color, 1, 1, 1 );
		return;
	}

	if ( val & 1 ) {
		color[2] = 1.0f;
	}
	if ( val & 2 ) {
		color[1] = 1.0f;
	}
	if ( val & 4 ) {
		color[0] = 1.0f;
	}
}

/*
===================
CG_LoadClientInfo

Load it now, taking the disk hits.
This will usually be deferred to a safe time
===================
*/
void CG_LoadClientInfo( clientInfo_t *ci ) {
	const char  *dir, *fallback;
	int i;
	const char  *s;
	int clientNum;
	int headfail = 0;
	char filename[MAX_QPATH];

//----(SA) modified this for head separation

	// load the head first (since if the head loads but there is a problem with something in the lower
	// body, you will want to default the model back to a default and want the head to match)
	//

	if ( !CG_RegisterClientHeadname( ci, ci->modelName, ci->hSkinName ) ) {
		if ( cg_buildScript.integer ) {
			CG_Error( "CG_RegisterClientHeadname( %s, %s ) failed.  setting default", ci->modelName, ci->hSkinName );
		}

		// fall back to default head
		if ( !CG_RegisterClientHeadname( ci, ci->modelName, "default" ) ) {
			headfail = 1;
			if ( cg_buildScript.integer ) {
				CG_Error( "head model/skin (%s/default) failed to register", ci->modelName );    //----(SA)
			}
		}
	}

	if ( headfail || !CG_RegisterClientModelname( ci, ci->modelName, ci->skinName ) ) {
		if ( cg_buildScript.integer ) {
			CG_Error( "CG_RegisterClientModelname( %s, %s ) failed", ci->modelName, ci->skinName );
		}

		// fall back
		if ( cgs.gametype >= GT_TEAM ) {
			// keep skin name but set default model
			if ( !CG_RegisterClientModelname( ci, DEFAULT_MODEL, ci->skinName ) ) {
				CG_Error( "DEFAULT_MODEL / skin (%s/%s) failed to register", DEFAULT_MODEL, ci->skinName );
			}
		} else if ( cgs.gametype == GT_SINGLE_PLAYER && !headfail ) {
			// try to keep the model but default the skin (so you can tell bad guys from good)
			if ( !CG_RegisterClientModelname( ci, ci->modelName, "default" ) ) {
				CG_Error( "DEFAULT_MODEL (%s/default) failed to register", ci->modelName );
			}
		} else {
			// go totally default
			if ( !CG_RegisterClientModelname( ci, DEFAULT_MODEL, "default" ) ) {
				CG_Error( "DEFAULT_MODEL (%s/default) failed to register", DEFAULT_MODEL );
			}

			// fall back to default head
			if ( !CG_RegisterClientHeadname( ci, DEFAULT_MODEL, "default" ) ) {
				CG_Error( "model/ DEFAULT_HEAD / skin (%s/default) failed to register", DEFAULT_HEAD );
			}

		}

	}

//----(SA) end

	// sounds
	dir = ci->modelName;
	fallback = DEFAULT_MODEL;

	for ( i = 0 ; i < MAX_CUSTOM_SOUNDS ; i++ ) {
		s = cg_customSoundNames[i];
		if ( !s ) {
			break;
		}
		ci->sounds[i] = trap_S_RegisterSound( va( "sound/player/%s/%s", dir, s + 1 ) );
		if ( !ci->sounds[i] ) {
			ci->sounds[i] = trap_S_RegisterSound( va( "sound/player/%s/%s", fallback, s + 1 ) );
		}
	}

	// load the gibs
	Com_sprintf( filename, sizeof( filename ), "models/players/%s/gibs.cfg", dir );
	if ( !CG_ParseGibModels( filename, ci ) ) {
		// n/mind.. gib code will automatically fall back to old gibs
	}

	ci->deferred = qfalse;

	// reset any existing players and bodies, because they might be in bad
	// frames for this new model
	clientNum = ci - cgs.clientinfo;
	for ( i = 0 ; i < MAX_GENTITIES ; i++ ) {
		if ( cg_entities[i].currentState.clientNum == clientNum
			 && cg_entities[i].currentState.eType == ET_PLAYER ) {
			CG_ResetPlayerEntity( &cg_entities[i] );
		}
	}
}

/*
======================
CG_CopyClientInfoModel
======================
*/
static void CG_CopyClientInfoModel( clientInfo_t *from, clientInfo_t *to ) {
	VectorCopy( from->playermodelScale, to->playermodelScale );

	to->legsModel   = from->legsModel;
	to->legsSkin    = from->legsSkin;
	to->torsoModel  = from->torsoModel;
	to->torsoSkin   = from->torsoSkin;
	to->headModel   = from->headModel;
	to->headSkin    = from->headSkin;
	to->isSkeletal  = from->isSkeletal;
	to->modelIcon   = from->modelIcon;

//----(SA)
	memcpy( to->accModels,  from->accModels,    sizeof( to->accModels   ) );
	memcpy( to->accSkins,   from->accSkins,     sizeof( to->accSkins    ) );
	memcpy( to->partModels, from->partModels,   sizeof( to->partModels  ) );
//	memcpy( to->partSkins,	from->partSkins,	sizeof( to->partSkins	) );
//----(SA)	end

	memcpy( to->sounds,     from->sounds,       sizeof( to->sounds ) );

	// Ridah
	memcpy( to->gibModels, from->gibModels, sizeof( to->gibModels ) );
	// done.

	// copy the modelInfo
	to->modelInfo = from->modelInfo;
	cgs.animScriptData.clientModels[ to->clientNum ] = cgs.animScriptData.clientModels[ from->clientNum ];

}

/*
======================
CG_ScanForExistingClientInfo
======================
*/
static qboolean CG_ScanForExistingClientInfo( clientInfo_t *ci ) {
	int i;
	clientInfo_t    *match;

	for ( i = 0 ; i < cgs.maxclients ; i++ ) {
		match = &cgs.clientinfo[ i ];
		if ( !match->infoValid ) {
			continue;
		}
		if ( match->deferred ) {
			continue;
		}
//----(SA) added checks for same head.  FIXME: soon this will be more efficient than just looking for a complete character (body/head) match.
		if (
			!Q_stricmp( ci->modelName,  match->modelName )
			&&  !Q_stricmp( ci->skinName,   match->skinName )
			&&  !Q_stricmp( ci->hSkinName,  match->hSkinName )
			) {

//----(SA) done

			// this clientinfo is identical, so use it's handles

			ci->deferred = qfalse;

			CG_CopyClientInfoModel( match, ci );

			return qtrue;
		}
	}

	// nothing matches, so defer the load
	return qfalse;
}

/*
======================
CG_SetDeferredClientInfo

We aren't going to load it now, so grab some other
client's info to use until we have some spare time.
======================
*/
static void CG_SetDeferredClientInfo( clientInfo_t *ci ) {
	int i;
	clientInfo_t    *match;

	// if we are in teamplay, only grab a model if the skin is correct
	if ( cgs.gametype >= GT_TEAM ) {
		for ( i = 0 ; i < cgs.maxclients ; i++ ) {
			match = &cgs.clientinfo[ i ];
			if ( !match->infoValid ) {
				continue;
			}
			if ( Q_stricmp( ci->skinName, match->skinName ) ) {
				continue;
			}
			ci->deferred = qtrue;
			CG_CopyClientInfoModel( match, ci );
			return;
		}

		// load the full model, because we don't ever want to show
		// an improper team skin.  This will cause a hitch for the first
		// player, when the second enters.  Combat shouldn't be going on
		// yet, so it shouldn't matter
		CG_LoadClientInfo( ci );
		return;
	}

	// find the first valid clientinfo and grab its stuff
	for ( i = 0 ; i < cgs.maxclients ; i++ ) {
		match = &cgs.clientinfo[ i ];
		if ( !match->infoValid ) {
			continue;
		}

		ci->deferred = qtrue;
		CG_CopyClientInfoModel( match, ci );
		return;
	}

	// we should never get here...
	CG_Printf( "CG_SetDeferredClientInfo: no valid clients!\n" );

	CG_LoadClientInfo( ci );
}


/*
======================
CG_NewClientInfo
======================
*/
void CG_NewClientInfo( int clientNum ) {
	clientInfo_t *ci;
	clientInfo_t newInfo;
	const char  *configstring;
	const char  *v;
	char        *slash;

	ci = &cgs.clientinfo[clientNum];

	configstring = CG_ConfigString( clientNum + CS_PLAYERS );
	if ( !configstring[0] ) {
		memset( ci, 0, sizeof( *ci ) );
		return;     // player just left
	}

	// build into a temp buffer so the defer checks can use
	// the old value
	memset( &newInfo, 0, sizeof( newInfo ) );

	newInfo.clientNum = clientNum;

	// isolate the player's name
	v = Info_ValueForKey( configstring, "n" );
	Q_strncpyz( newInfo.name, v, sizeof( newInfo.name ) );

	// colors
	v = Info_ValueForKey( configstring, "c1" );
	CG_ColorFromString( v, newInfo.color );

	// bot skill
	v = Info_ValueForKey( configstring, "skill" );
	newInfo.botSkill = atoi( v );

	// handicap
	v = Info_ValueForKey( configstring, "hc" );
	newInfo.handicap = atoi( v );

	// wins
	v = Info_ValueForKey( configstring, "w" );
	newInfo.wins = atoi( v );

	// losses
	v = Info_ValueForKey( configstring, "l" );
	newInfo.losses = atoi( v );

	// team
	v = Info_ValueForKey( configstring, "t" );
	newInfo.team = atoi( v );

//----(SA) modified this for head separation

// (SA) note to Ryan: The problem I see with having the model set for cg_forceModel in the game (g_forcemodel)
//		is that it was initally there for a performance/fairness thing so you can connect to a
//		server and not use other players goofy models or whatever.  We should still have some simple
//		client-side thing for defaulting all models to one particular player model or something.  (did that make sense?)

	// head
	v = Info_ValueForKey( configstring, "head" );
/* RF, disabled this, not needed anymore
	if ( cg_forceModel.integer )
	{
		char modelStr[MAX_QPATH];

		// forcemodel makes everyone use a single model
		// to prevent load hitches

		trap_Cvar_VariableStringBuffer( "head", modelStr, sizeof( modelStr ) );
		Q_strncpyz( newInfo.hSkinName, modelStr, sizeof( newInfo.hSkinName ) );
	}
	else {
*/
	Q_strncpyz( newInfo.hSkinName, v, sizeof( newInfo.hSkinName ) );
//	}

//----(SA) modified this for head separation

	// model
	v = Info_ValueForKey( configstring, "model" );
/* RF, disabled this, not needed anymore
	if ( cg_forceModel.integer ) {
		// forcemodel makes everyone use a single model
		// to prevent load hitches
		char modelStr[MAX_QPATH];
		char *skin;

		trap_Cvar_VariableStringBuffer( "model", modelStr, sizeof( modelStr ) );
		if ( ( skin = strchr( modelStr, '/' ) ) == NULL) {
			skin = "default";
		} else {
			*skin++ = 0;
		}

		Q_strncpyz( newInfo.skinName, skin, sizeof( newInfo.skinName ) );
		Q_strncpyz( newInfo.modelName, modelStr, sizeof( newInfo.modelName ) );

		if ( cgs.gametype >= GT_TEAM ) {
			// keep skin name
			slash = strchr( v, '/' );
			if ( slash ) {
				Q_strncpyz( newInfo.skinName, slash + 1, sizeof( newInfo.skinName ) );
			}
		}
	} else {
*/
	Q_strncpyz( newInfo.modelName, v, sizeof( newInfo.modelName ) );

	slash = strchr( newInfo.modelName, '/' );
	if ( !slash ) {
		// modelName did not include a skin name
		Q_strncpyz( newInfo.skinName, "default", sizeof( newInfo.skinName ) );
	} else {
		Q_strncpyz( newInfo.skinName, slash + 1, sizeof( newInfo.skinName ) );
		// truncate modelName
		*slash = 0;
	}
//	}

	//----(SA) modify \/ to differentiate for head models/skins as well


	// scan for an existing clientinfo that matches this modelname
	// so we can avoid loading checks if possible
	if ( !CG_ScanForExistingClientInfo( &newInfo ) ) {
		qboolean forceDefer;

		// RF, disabled this, we can't have this happening in Wolf. If there is not enough memory,
		// then we have a leak or havent allocated enough hunk
		forceDefer = qfalse;

//		forceDefer = trap_MemoryRemaining() < 4000000;

		// if we are defering loads, just have it pick the first valid
//		if ( forceDefer || ( cg_deferPlayers.integer && !cg_buildScript.integer && !cg.loading ) ) {

		// very temporary!  do not defer any players just yet
		// we need to get ai's to be non-deferred players before we can
		// do this (SA)
		if ( forceDefer ) {
			// keep whatever they had if it won't violate team skins
			if ( ci->infoValid &&
				 ( cgs.gametype < GT_TEAM || !Q_stricmp( newInfo.skinName, ci->skinName ) ) ) {
				CG_CopyClientInfoModel( ci, &newInfo );
				newInfo.deferred = qtrue;
			} else {
				// use whatever is available
				CG_SetDeferredClientInfo( &newInfo );
			}
			// if we are low on memory, leave them with this model
			if ( forceDefer ) {
				CG_Printf( "Memory is low.  Using deferred model.\n" );
				newInfo.deferred = qfalse;
			}
		} else {
			CG_LoadClientInfo( &newInfo );
		}
	}

	// replace whatever was there with the new one
	newInfo.infoValid = qtrue;
	*ci = newInfo;
}



/*
======================
CG_LoadDeferredPlayers

Called each frame when a player is dead
and the scoreboard is up
so deferred players can be loaded
======================
*/
void CG_LoadDeferredPlayers( void ) {
	int i;
	clientInfo_t    *ci;

	// scan for a deferred player to load
	for ( i = 0, ci = cgs.clientinfo ; i < cgs.maxclients ; i++, ci++ ) {
		if ( ci->infoValid && ci->deferred ) {
			// if we are low on memory, leave it deferred
			if ( trap_MemoryRemaining() < 4000000 ) {
				CG_Printf( "Memory is low.  Using deferred model.\n" );
				ci->deferred = qfalse;
				continue;
			}
			CG_LoadClientInfo( ci );
		}
	}
}

/*
=============================================================================

PLAYER ANIMATION

=============================================================================
*/


/*
===============
CG_SetLerpFrameAnimation

may include ANIM_TOGGLEBIT
===============
*/
static void CG_SetLerpFrameAnimation( clientInfo_t *ci, lerpFrame_t *lf, int newAnimation ) {
	animation_t *anim;

	if ( !ci->modelInfo ) {
		return;
	}

	lf->animationNumber = newAnimation;
	newAnimation &= ~ANIM_TOGGLEBIT;

	if ( newAnimation < 0 || newAnimation >= ci->modelInfo->numAnimations ) {
		CG_Error( "Bad animation number (CG_SLFA): %i", newAnimation );
	}

	anim = &ci->modelInfo->animations[ newAnimation ];

	lf->animation = anim;
	lf->animationTime = lf->frameTime + anim->initialLerp;

	if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
