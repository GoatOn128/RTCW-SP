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

// cl_cgame.c  -- client system interaction with client game

#include "client.h"

#include "../game/botlib.h"

extern botlib_export_t *botlib_export;

extern qboolean loadCamera( int camNum, const char *name );
extern void startCamera( int camNum, int time );
extern qboolean getCameraInfo( int camNum, int time, vec3_t *origin, vec3_t *angles, float *fov );

// RF, this is only used when running a local server
extern void SV_SendMoveSpeedsToGame( int entnum, char *text );
extern qboolean SV_GetModelInfo( int clientNum, char *modelName, animModelInfo_t **modelInfo );


/*
====================
CL_GetGameState
====================
*/
void CL_GetGameState( gameState_t *gs ) {
	*gs = cl.gameState;
}

/*
====================
CL_GetGlconfig
====================
*/
void CL_GetGlconfig( glconfig_t *glconfig ) {
	*glconfig = cls.glconfig;
}


/*
====================
CL_GetUserCmd
====================
*/
qboolean CL_GetUserCmd( int cmdNumber, usercmd_t *ucmd ) {
	// cmds[cmdNumber] is the last properly generated command

	// can't return anything that we haven't created yet
	if ( cmdNumber > cl.cmdNumber ) {
		Com_Error( ERR_DROP, "CL_GetUserCmd: %i >= %i", cmdNumber, cl.cmdNumber );
	}

	// the usercmd has been overwritten in the wrapping
	// buffer because it is too far out of date
	if ( cmdNumber <= cl.cmdNumber - CMD_BACKUP ) {
		return qfalse;
	}

	*ucmd = cl.cmds[ cmdNumber & CMD_MASK ];

	return qtrue;
}

int CL_GetCurrentCmdNumber( void ) {
	return cl.cmdNumber;
}


/*
====================
CL_GetParseEntityState
====================
*/
qboolean    CL_GetParseEntityState( int parseEntityNumber, entityState_t *state ) {
	// can't return anything that hasn't been parsed yet
	if ( parseEntityNumber >= cl.parseEntitiesNum ) {
		Com_Error( ERR_DROP, "CL_GetParseEntityState: %i >= %i",
				   parseEntityNumber, cl.parseEntitiesNum );
	}

	// can't return anything that has been overwritten in the circular buffer
	if ( parseEntityNumber <= cl.parseEntitiesNum - MAX_PARSE_ENTITIES ) {
		return qfalse;
	}

	*state = cl.parseEntities[ parseEntityNumber & ( MAX_PARSE_ENTITIES - 1 ) ];
	return qtrue;
}

/*
====================
CL_GetCurrentSnapshotNumber
====================
*/
void    CL_GetCurrentSnapshotNumber( int *snapshotNumber, int *serverTime ) {
	*snapshotNumber = cl.snap.messageNum;
	*serverTime = cl.snap.serverTime;
}

/*
====================
CL_GetSnapshot
====================
*/
qboolean    CL_GetSnapshot( int snapshotNumber, snapshot_t *snapshot ) {
	clSnapshot_t    *clSnap;
	int i, count;

	if ( snapshotNumber > cl.snap.messageNum ) {
		Com_Error( ERR_DROP, "CL_GetSnapshot: snapshotNumber > cl.snapshot.messageNum" );
	}

	// if the frame has fallen out of the circular buffer, we can't return it
	if ( cl.snap.messageNum - snapshotNumber >= PACKET_BACKUP ) {
		return qfalse;
	}

	// if the frame is not valid, we can't return it
	clSnap = &cl.snapshots[snapshotNumber & PACKET_MASK];
	if ( !clSnap->valid ) {
		return qfalse;
	}

	// if the entities in the frame have fallen out of their
	// circular buffer, we can't return it
	if ( cl.parseEntitiesNum - clSnap->parseEntitiesNum >= MAX_PARSE_ENTITIES ) {
		return qfalse;
	}

	// write the snapshot
	snapshot->snapFlags = clSnap->snapFlags;
	snapshot->serverCommandSequence = clSnap->serverCommandNum;
	snapshot->ping = clSnap->ping;
	snapshot->serverTime = clSnap->serverTime;
	memcpy( snapshot->areamask, clSnap->areamask, sizeof( snapshot->areamask ) );
	snapshot->ps = clSnap->ps;
	count = clSnap->numEntities;
	if ( count > MAX_ENTITIES_IN_SNAPSHOT ) {
		Com_DPrintf( "CL_GetSnapshot: truncated %i entities to %i\n", count, MAX_ENTITIES_IN_SNAPSHOT );
		count = MAX_ENTITIES_IN_SNAPSHOT;
	}
	snapshot->numEntities = count;
	for ( i = 0 ; i < count ; i++ ) {
		snapshot->entities[i] =
			cl.parseEntities[ ( clSnap->parseEntitiesNum + i ) & ( MAX_PARSE_ENTITIES - 1 ) ];
	}

	// FIXME: configstring changes and server commands!!!

	return qtrue;
}

/*
==============
CL_SetUserCmdValue
==============
*/
void CL_SetUserCmdValue( int userCmdValue, int holdableValue, float sensitivityScale, int cld ) {
	cl.cgameUserCmdValue        = userCmdValue;
	cl.cgameUserHoldableValue   = holdableValue;
	cl.cgameSensitivity         = sensitivityScale;
	cl.cgameCld                 = cld;
}

/*
==============
CL_AddCgameCommand
==============
*/
void CL_AddCgameCommand( const char *cmdName ) {
	Cmd_AddCommand( cmdName, NULL );
}

/*
==============
CL_CgameError
==============
*/
void CL_CgameError( const char *string ) {
	Com_Error( ERR_DROP, "%s", string );
}


/*
=====================
CL_ConfigstringModified
=====================
*/
void CL_ConfigstringModified( void ) {
	char        *old, *s;
	int i, index;
	char        *dup;
	gameState_t oldGs;
	int len;

	index = atoi( Cmd_Argv( 1 ) );
	if ( index < 0 || index >= MAX_CONFIGSTRINGS ) {
		Com_Error( ERR_DROP, "configstring > MAX_CONFIGSTRINGS" );
	}
//	s = Cmd_Argv(2);
	// get everything after "cs <num>"
	s = Cmd_ArgsFrom( 2 );

	old = cl.gameState.stringData + cl.gameState.stringOffsets[ index ];
	if ( !strcmp( old, s ) ) {
		return;     // unchanged
	}

	// build the new gameState_t
	oldGs = cl.gameState;

	memset( &cl.gameState, 0, sizeof( cl.gameState ) );

	// leave the first 0 for uninitialized strings
	cl.gameState.dataCount = 1;

	for ( i = 0 ; i < MAX_CONFIGSTRINGS ; i++ ) {
		if ( i == index ) {
			dup = s;
		} else {
			dup = oldGs.stringData + oldGs.stringOffsets[ i ];
		}
		if ( !dup[0] ) {
			continue;       // leave with the default empty string
		}

		len = strlen( dup );

		if ( len + 1 + cl.gameState.dataCount > MAX_GAMESTATE_CHARS ) {
			Com_Error( ERR_DROP, "MAX_GAMESTATE_CHARS exceeded" );
		}

		// append it to the gameState string buffer
		cl.gameState.stringOffsets[ i ] = cl.gameState.dataCount;
		memcpy( cl.gameState.stringData + cl.gameState.dataCount, dup, len + 1 );
		cl.gameState.dataCount += len + 1;
	}

	if ( index == CS_SYSTEMINFO ) {
		// parse serverId and other cvars
		CL_SystemInfoChanged();
	}

}


/*
===================
CL_GetServerCommand

Set up argc/argv for the given command
===================
*/
qboolean CL_GetServerCommand( int serverCommandNumber ) {
	char    *s;
	char    *cmd;
	static char bigConfigString[BIG_INFO_STRING];

	// if we have irretrievably lost a reliable command, drop the connection
	if ( serverCommandNumber <= clc.serverCommandSequence - MAX_RELIABLE_COMMANDS ) {
		// when a demo record was started after the client got a whole bunch of
		// reliable commands then the client never got those first reliable commands
		if ( clc.demoplaying ) {
			return qfalse;
		}
		Com_Error( ERR_DROP, "CL_GetServerCommand: a reliable command was cycled out" );
		return qfalse;
	}

	if ( serverCommandNumber > clc.serverCommandSequence ) {
		Com_Error( ERR_DROP, "CL_GetServerCommand: requested a command not received" );
		return qfalse;
	}

	s = clc.serverCommands[ serverCommandNumber & ( MAX_RELIABLE_COMMANDS - 1 ) ];
	clc.lastExecutedServerCommand = serverCommandNumber;

	Com_DPrintf( "serverCommand: %i : %s\n", serverCommandNumber, s );

rescan:
	Cmd_TokenizeString( s );
	cmd = Cmd_Argv( 0 );

	if ( !strcmp( cmd, "disconnect" ) ) {
		Com_Error( ERR_SERVERDISCONNECT,"Server disconnected\n" );
	}

	if ( !strcmp( cmd, "bcs0" ) ) {
		Com_sprintf( bigConfigString, BIG_INFO_STRING, "cs %s \"%s", Cmd_Argv( 1 ), Cmd_Argv( 2 ) );
		return qfalse;
	}

	if ( !strcmp( cmd, "bcs1" ) ) {
		s = Cmd_Argv( 2 );
		if ( strlen( bigConfigString ) + strlen( s ) >= BIG_INFO_STRING ) {
			Com_Error( ERR_DROP, "bcs exceeded BIG_INFO_STRING" );
		}
		strcat( bigConfigString, s );
		return qfalse;
	}

	if ( !strcmp( cmd, "bcs2" ) ) {
		s = Cmd_Argv( 2 );
		if ( strlen( bigConfigString ) + strlen( s ) + 1 >= BIG_INFO_STRING ) {
			Com_Error( ERR_DROP, "bcs exceeded BIG_INFO_STRING" );
		}
		strcat( bigConfigString, s );
		strcat( bigConfigString, "\"" );
		s = bigConfigString;
		goto rescan;
	}

	if ( !strcmp( cmd, "cs" ) ) {
		CL_ConfigstringModified();
		// reparse the string, because CL_ConfigstringModified may have done another Cmd_TokenizeString()
		Cmd_TokenizeString( s );
		return qtrue;
	}

	if ( !strcmp( cmd, "map_restart" ) ) {
		// clear notify lines and outgoing commands before passing
		// the restart to the cgame
		Con_ClearNotify();
		memset( cl.cmds, 0, sizeof( cl.cmds ) );
		return qtrue;
	}

	if ( !strcmp( cmd, "popup" ) ) { // direct server to client popup request, bypassing cgame
//		trap_UI_Popup(Cmd_Argv(1));
//		if ( cls.state == CA_ACTIVE && !clc.demoplaying ) {
//			uie->SetActiveMenu( UIMENU_CLIPBOARD);
//			Menus_OpenByName(Cmd_Argv(1));
//		}
		return qfalse;
	}


	// the clientLevelShot command is used during development
	// to generate 128*128 screenshots from the intermission
	// point of levels for the menu system to use
	// we pass it along to the cgame to make apropriate adjustments,
	// but we also clear the console and notify lines here
	if ( !strcmp( cmd, "clientLevelShot" ) ) {
		// don't do it if we aren't running the server locally,
		// otherwise malicious remote servers could overwrite
		// the existing thumbnails
		if ( !com_sv_running->integer ) {
			return qfalse;
		}
		// close the console
		Con_Close();
		// take a special screenshot next frame
		Cbuf_AddText( "wait ; wait ; wait ; wait ; screenshot levelshot\n" );
		return qtrue;
	}

	// we may want to put a "connect to other server" command here

	// cgame can now act on the command
	return qtrue;
}


/*
====================
CL_CM_LoadMap

Just adds default parameters that cgame doesn't need to know about
====================
*/
void CL_CM_LoadMap( const char *mapname ) {
	int checksum;

	CM_LoadMap( mapname, qtrue, &checksum );
}


// native cgame module interface (Doom3 style): the engine loads the
// module with Sys_LoadModule and exchanges structs of function pointers

static cgameImport_t cl_cgameImport;    // engine functions handed to the cgame module
#ifndef CGAME_HARD_LINKED
static void *cgame_library = NULL;      // handle from Sys_LoadModule
#endif

cgameExport_t *cge = NULL;              // cgame module export

#ifdef CGAME_HARD_LINKED
// hard-linked build: cgame compiles straight into the engine binary,
// so its entry point is a plain extern instead of a module symbol
extern cgameExport_t *GetCgameAPI( int apiVersion, cgameImport_t *import );
#else
typedef cgameExport_t *( *GetCgameAPI_t )( int apiVersion, cgameImport_t *import );
#endif

/*
====================
CL_ShutdonwCGame

====================
*/
void CL_ShutdownCGame( void ) {
	cls.keyCatchers &= ~KEYCATCH_CGAME;
	cls.cgameStarted = qfalse;
	if ( !cge ) {
		return;
	}
	cge->Shutdown();
#ifndef CGAME_HARD_LINKED
	Sys_UnloadModule( cgame_library );
	cgame_library = NULL;
#endif
	cge = NULL;
}


static void CL_CgamePrint( const char *string ) {
	Com_Printf( "%s", string );
}

static clipHandle_t CL_CM_TempBoxModel( const vec3_t mins, const vec3_t maxs ) {
	return CM_TempBoxModel( mins, maxs, qfalse );
}

static clipHandle_t CL_CM_TempCapsuleModel( const vec3_t mins, const vec3_t maxs ) {
	return CM_TempBoxModel( mins, maxs, qtrue );
}

static void CL_CM_BoxTrace( trace_t *results, const vec3_t start, const vec3_t end,
							const vec3_t mins, const vec3_t maxs,
							clipHandle_t model, int brushmask ) {
	CM_BoxTrace( results, start, end, mins, maxs, model, brushmask, qfalse );
}

static void CL_CM_TransformedBoxTrace( trace_t *results, const vec3_t start, const vec3_t end,
									   const vec3_t mins, const vec3_t maxs,
									   clipHandle_t model, int brushmask,
									   const vec3_t origin, const vec3_t angles ) {
	CM_TransformedBoxTrace( results, start, end, mins, maxs, model, brushmask, origin, angles, qfalse );
}

static void CL_CM_CapsuleTrace( trace_t *results, const vec3_t start, const vec3_t end,
								const vec3_t mins, const vec3_t maxs,
								clipHandle_t model, int brushmask ) {
	CM_BoxTrace( results, start, end, mins, maxs, model, brushmask, qtrue );
}

static void CL_CM_TransformedCapsuleTrace( trace_t *results, const vec3_t start, const vec3_t end,
										   const vec3_t mins, const vec3_t maxs,
										   clipHandle_t model, int brushmask,
										   const vec3_t origin, const vec3_t angles ) {
	CM_TransformedBoxTrace( results, start, end, mins, maxs, model, brushmask, origin, angles, qtrue );
}

static void CL_S_ClearLoopingSounds( qboolean killall ) {
	S_ClearLoopingSounds(); // (SA) modified so no_pvs sounds can function
	// RF, if killall, then stop all sounds
	if ( killall == 1 ) {
		S_ClearSounds( qtrue, qfalse );
	} else if ( killall == 2 ) {
		S_ClearSounds( qtrue, qtrue );
	}
}

static void CL_S_StopLoopingSound( int entityNum ) {
	// RF, not functional anymore, since we reverted to old looping code
	( void ) entityNum;
}

static sfxHandle_t CL_S_RegisterSound( const char *sample ) {
#ifdef DOOMSOUND    ///// (SA) DOOMSOUND
	return S_RegisterSound( sample );
#else
	return S_RegisterSound( sample, qfalse );
#endif  ///// (SA) DOOMSOUND
}

static void *CL_Memset( void *dest, int set, int count ) {
	return memset( dest, set, count );
}

static void *CL_Memcpy( void *dest, const void *src, int count ) {
	return memcpy( dest, src, count );
}

static char *CL_Strncpy( char *dest, const char *src, int count ) {
	return strncpy( dest, src, count );
}

static float CL_Sin( float x ) { return sin( x ); }
static float CL_Cos( float x ) { return cos( x ); }
static float CL_Atan2( float y, float x ) { return atan2( y, x ); }
static float CL_Sqrt( float x ) { return sqrt( x ); }
static float CL_Floor( float x ) { return floor( x ); }
static float CL_Ceil( float x ) { return ceil( x ); }
static float CL_Acos( float x ) { return Q_acos( x ); }

static void CL_TestPrintInt( char *string, int i ) {
	Com_Printf( "%s%i\n", string, i );
}

static void CL_TestPrintFloat( char *string, float f ) {
	Com_Printf( "%s%f\n", string, f );
}

static void CL_StartCamera( int camNum, int time ) {
	if ( camNum == 0 ) {  // CAM_PRIMARY
		cl.cameraMode = qtrue;  //----(SA) added
	}
	startCamera( camNum, time );
}

static void CL_StopCamera( int camNum ) {
	if ( camNum == 0 ) {  // CAM_PRIMARY
		cl.cameraMode = qfalse;
	}
}

// forward menu popups to the ui module
static void CL_UI_Popup( const char *name ) {
	if ( !uie ) {
		return;
	}

	if ( name && !Q_stricmp( name, "briefing" ) ) {  //----(SA) added
		uie->SetActiveMenu( UIMENU_BRIEFING );
		return;
	}

	if ( cls.state == CA_ACTIVE && !clc.demoplaying ) {
		// NERVE - SMF
		if ( name && !Q_stricmp( name, "UIMENU_WM_PICKTEAM" ) ) {
			uie->SetActiveMenu( UIMENU_WM_PICKTEAM );
		} else if ( name && !Q_stricmp( name, "UIMENU_WM_PICKPLAYER" ) ) {
			uie->SetActiveMenu( UIMENU_WM_PICKPLAYER );
		} else if ( name && !Q_stricmp( name, "UIMENU_WM_QUICKMESSAGE" ) ) {
			uie->SetActiveMenu( UIMENU_WM_QUICKMESSAGE );
		} else if ( name && !Q_stricmp( name, "UIMENU_WM_LIMBO" ) ) {
			uie->SetActiveMenu( UIMENU_WM_LIMBO );
		}
		// -NERVE - SMF
		else if ( name && !Q_stricmp( name, "hbook1" ) ) {   //----(SA)
			uie->SetActiveMenu( UIMENU_BOOK1 );
		} else if ( name && !Q_stricmp( name, "hbook2" ) ) {    //----(SA)
			uie->SetActiveMenu( UIMENU_BOOK2 );
		} else if ( name && !Q_stricmp( name, "hbook3" ) ) {    //----(SA)
			uie->SetActiveMenu( UIMENU_BOOK3 );
		} else if ( name && !Q_stricmp( name, "pregame" ) ) {    //----(SA) added
			uie->SetActiveMenu( UIMENU_PREGAME );
		} else {
			uie->SetActiveMenu( UIMENU_CLIPBOARD );
		}
	}
}

static void CL_UI_ClosePopup( const char *name ) {
	( void ) name;
	if ( !uie ) {
		return;
	}
	uie->KeyEvent( K_ESCAPE, qtrue );
}

static void CL_LimboChat( const char *text ) {
	if ( text ) {
		CL_AddToLimboChat( text );
	}
}

/*
================
CL_FillCgameImport

Fills the struct of engine functions handed to the cgame module
================
*/
static void CL_FillCgameImport( cgameImport_t *import ) {
	import->CG_PRINT = CL_CgamePrint;
	import->CG_ERROR = CL_CgameError;
	import->CG_MILLISECONDS = Sys_Milliseconds;
	import->CG_CVAR_REGISTER = Cvar_Register;
	import->CG_CVAR_UPDATE = Cvar_Update;
	import->CG_CVAR_SET = Cvar_Set;
	import->CG_CVAR_VARIABLESTRINGBUFFER = Cvar_VariableStringBuffer;
	import->CG_ARGC = Cmd_Argc;
	import->CG_ARGV = Cmd_ArgvBuffer;
	import->CG_ARGS = Cmd_ArgsBuffer;
	import->CG_FS_FOPENFILE = FS_FOpenFileByMode;
	import->CG_FS_READ = FS_Read;
	import->CG_FS_WRITE = FS_Write;
	import->CG_FS_FCLOSEFILE = FS_FCloseFile;
	import->CG_SENDCONSOLECOMMAND = Cbuf_AddText;
	import->CG_ADDCOMMAND = CL_AddCgameCommand;
	import->CG_REMOVECOMMAND = Cmd_RemoveCommand;
	import->CG_SENDCLIENTCOMMAND = CL_AddReliableCommand;
	import->CG_UPDATESCREEN = SCR_UpdateScreen;
	import->CG_CM_LOADMAP = CL_CM_LoadMap;
	import->CG_CM_NUMINLINEMODELS = CM_NumInlineModels;
	import->CG_CM_INLINEMODEL = CM_InlineModel;
	import->CG_CM_TEMPBOXMODEL = CL_CM_TempBoxModel;
	import->CG_CM_TEMPCAPSULEMODEL = CL_CM_TempCapsuleModel;
	import->CG_CM_POINTCONTENTS = CM_PointContents;
	import->CG_CM_TRANSFORMEDPOINTCONTENTS = CM_TransformedPointContents;
	import->CG_CM_BOXTRACE = CL_CM_BoxTrace;
	import->CG_CM_TRANSFORMEDBOXTRACE = CL_CM_TransformedBoxTrace;
	import->CG_CM_CAPSULETRACE = CL_CM_CapsuleTrace;
	import->CG_CM_TRANSFORMEDCAPSULETRACE = CL_CM_TransformedCapsuleTrace;
	import->CG_CM_MARKFRAGMENTS = re.MarkFragments;
	import->CG_S_STARTSOUND = S_StartSound;
	import->CG_S_STARTSOUNDEX = S_StartSoundEx;
	import->CG_S_STARTLOCALSOUND = S_StartLocalSound;
	import->CG_S_CLEARLOOPINGSOUNDS = CL_S_ClearLoopingSounds;
	import->CG_S_ADDLOOPINGSOUND = S_AddLoopingSound;
	import->CG_S_STOPSTREAMINGSOUND = S_StopEntStreamingSound;
	import->CG_S_STOPLOOPINGSOUND = CL_S_StopLoopingSound;
	import->CG_S_UPDATEENTITYPOSITION = S_UpdateEntityPosition;
	import->CG_S_GETVOICEAMPLITUDE = S_GetVoiceAmplitude;
	import->CG_S_RESPATIALIZE = S_Respatialize;
	import->CG_S_REGISTERSOUND = CL_S_RegisterSound;
	import->CG_S_STARTBACKGROUNDTRACK = S_StartBackgroundTrack;
	import->CG_S_FADESTREAMINGSOUND = S_FadeStreamingSound;
	import->CG_S_FADEALLSOUNDS = S_FadeAllSounds;
	import->CG_S_STARTSTREAMINGSOUND = S_StartStreamingSound;
	import->CG_S_STOPBACKGROUNDTRACK = S_StopBackgroundTrack;
	import->CG_R_LOADWORLDMAP = re.LoadWorld;
	import->CG_R_REGISTERMODEL = re.RegisterModel;
	import->CG_R_REGISTERSKIN = re.RegisterSkin;
	import->CG_R_REGISTERSHADER = re.RegisterShader;
	import->CG_R_REGISTERSHADERNOMIP = re.RegisterShaderNoMip;
	import->CG_R_GETSKINMODEL = re.GetSkinModel;
	import->CG_R_GETMODELSHADER = re.GetShaderFromModel;
	import->CG_R_REGISTERFONT = re.RegisterFont;
	import->CG_R_CLEARSCENE = re.ClearScene;
	import->CG_R_ADDREFENTITYTOSCENE = re.AddRefEntityToScene;
	import->CG_R_ADDPOLYTOSCENE = re.AddPolyToScene;
	import->CG_R_ADDPOLYSTOSCENE = re.AddPolysToScene;
	import->CG_RB_ZOMBIEFXADDNEWHIT = re.ZombieFXAddNewHit;
	import->CG_R_ADDLIGHTTOSCENE = re.AddLightToScene;
	import->CG_R_ADDCORONATOSCENE = re.AddCoronaToScene;
	import->CG_R_SETFOG = re.SetFog;
	import->CG_R_RENDERSCENE = re.RenderScene;
	import->CG_R_SETCOLOR = re.SetColor;
	import->CG_R_DRAWSTRETCHPIC = re.DrawStretchPic;
	import->CG_R_DRAWSTRETCHPIC_GRADIENT = re.DrawStretchPicGradient;
	import->CG_R_MODELBOUNDS = re.ModelBounds;
	import->CG_R_LERPTAG = re.LerpTag;
	import->CG_R_REMAP_SHADER = re.RemapShader;
	import->CG_GETGLCONFIG = CL_GetGlconfig;
	import->CG_GETGAMESTATE = CL_GetGameState;
	import->CG_GETCURRENTSNAPSHOTNUMBER = CL_GetCurrentSnapshotNumber;
	import->CG_GETSNAPSHOT = CL_GetSnapshot;
	import->CG_GETSERVERCOMMAND = CL_GetServerCommand;
	import->CG_GETCURRENTCMDNUMBER = CL_GetCurrentCmdNumber;
	import->CG_GETUSERCMD = CL_GetUserCmd;
	import->CG_SETUSERCMDVALUE = CL_SetUserCmdValue;
	import->CG_MEMORY_REMAINING = Hunk_MemoryRemaining;
	import->CG_KEY_ISDOWN = Key_IsDown;
	import->CG_KEY_GETCATCHER = Key_GetCatcher;
	import->CG_KEY_SETCATCHER = Key_SetCatcher;
	import->CG_KEY_GETKEY = Key_GetKey;
	import->CG_MEMSET = CL_Memset;
	import->CG_MEMCPY = CL_Memcpy;
	import->CG_STRNCPY = CL_Strncpy;
	import->CG_SIN = CL_Sin;
	import->CG_COS = CL_Cos;
	import->CG_ATAN2 = CL_Atan2;
	import->CG_SQRT = CL_Sqrt;
	import->CG_FLOOR = CL_Floor;
	import->CG_CEIL = CL_Ceil;
	import->CG_ACOS = CL_Acos;
	import->CG_PC_ADD_GLOBAL_DEFINE = botlib_export->PC_AddGlobalDefine;
	import->CG_PC_LOAD_SOURCE = botlib_export->PC_LoadSourceHandle;
	import->CG_PC_FREE_SOURCE = botlib_export->PC_FreeSourceHandle;
	import->CG_PC_READ_TOKEN = botlib_export->PC_ReadTokenHandle;
	import->CG_PC_SOURCE_FILE_AND_LINE = botlib_export->PC_SourceFileAndLine;
	import->CG_REAL_TIME = Com_RealTime;
	import->CG_SNAPVECTOR = Sys_SnapVector;
	import->CG_SENDMOVESPEEDSTOGAME = SV_SendMoveSpeedsToGame;
	import->CG_CIN_PLAYCINEMATIC = CIN_PlayCinematic;
	import->CG_CIN_STOPCINEMATIC = CIN_StopCinematic;
	import->CG_CIN_RUNCINEMATIC = CIN_RunCinematic;
	import->CG_CIN_DRAWCINEMATIC = CIN_DrawCinematic;
	import->CG_CIN_SETEXTENTS = CIN_SetExtents;
	import->CG_TESTPRINTINT = CL_TestPrintInt;
	import->CG_TESTPRINTFLOAT = CL_TestPrintFloat;
	import->CG_LOADCAMERA = loadCamera;
	import->CG_STARTCAMERA = CL_StartCamera;
	import->CG_STOPCAMERA = CL_StopCamera;
	import->CG_GETCAMERAINFO = getCameraInfo;
	import->CG_GET_ENTITY_TOKEN = re.GetEntityToken;
	import->CG_INGAME_POPUP = CL_UI_Popup;
	import->CG_INGAME_CLOSEPOPUP = CL_UI_ClosePopup;
	import->CG_LIMBOCHAT = CL_LimboChat;
	import->CG_GETMODELINFO = SV_GetModelInfo;
}

/*
====================
CL_UpdateLevelHunkUsage

  This updates the "hunkusage.dat" file with the current map and it's hunk usage count

  This is used for level loading, so we can show a percentage bar dependant on the amount
  of hunk memory allocated so far

  This will be slightly inaccurate if some settings like sound quality are changed, but these
  things should only account for a small variation (hopefully)
====================
*/
void CL_UpdateLevelHunkUsage( void ) {
	int handle;
	char *memlistfile = "hunkusage.dat";
	char *buf, *outbuf;
	char *buftrav, *outbuftrav;
	char *token;
	char outstr[256];
	int len, memusage;

	memusage = Cvar_VariableIntegerValue( "com_hunkused" ) + Cvar_VariableIntegerValue( "hunk_soundadjust" );

	len = FS_FOpenFileByMode( memlistfile, &handle, FS_READ );
	if ( len >= 0 ) { // the file exists, so read it in, strip out the current entry for this map, and save it out, so we can append the new value

		buf = (char *)Z_Malloc( len + 1 );
		memset( buf, 0, len + 1 );
		outbuf = (char *)Z_Malloc( len + 1 );
		memset( outbuf, 0, len + 1 );

		FS_Read( (void *)buf, len, handle );
		FS_FCloseFile( handle );

		// now parse the file, filtering out the current map
		buftrav = buf;
		outbuftrav = outbuf;
		outbuftrav[0] = '\0';
		while ( ( token = COM_Parse( &buftrav ) ) && token[0] ) {
			if ( !Q_strcasecmp( token, cl.mapname ) ) {
				// found a match
				token = COM_Parse( &buftrav );  // read the size
				if ( token && token[0] ) {
					if ( atoi( token ) == memusage ) {  // if it is the same, abort this process
						Z_Free( buf );
						Z_Free( outbuf );
						return;
					}
				}
			} else {    // send it to the outbuf
				Q_strcat( outbuftrav, len + 1, token );
				Q_strcat( outbuftrav, len + 1, " " );
				token = COM_Parse( &buftrav );  // read the size
				if ( token && token[0] ) {
					Q_strcat( outbuftrav, len + 1, token );
					Q_strcat( outbuftrav, len + 1, "\n" );
				} else {
					Com_Error( ERR_DROP, "hunkusage.dat file is corrupt\n" );
				}
			}
		}

#ifdef __MACOS__    //DAJ MacOS file typing
		{
			extern _MSL_IMP_EXP_C long _fcreator, _ftype;
			_ftype = 'WlfB';
			_fcreator = 'WlfS';
		}
#endif
		handle = FS_FOpenFileWrite( memlistfile );
		if ( handle < 0 ) {
			Com_Error( ERR_DROP, "cannot create %s\n", memlistfile );
		}
		// input file is parsed, now output to the new file
		len = strlen( outbuf );
		if ( FS_Write( (void *)outbuf, len, handle ) != len ) {
			Com_Error( ERR_DROP, "cannot write to %s\n", memlistfile );
		}
		FS_FCloseFile( handle );

		Z_Free( buf );
		Z_Free( outbuf );
	}
	// now append the current map to the current file
	FS_FOpenFileByMode( memlistfile, &handle, FS_APPEND );
	if ( handle < 0 ) {
		Com_Error( ERR_DROP, "cannot write to hunkusage.dat, check disk full\n" );
	}
	Com_sprintf( outstr, sizeof( outstr ), "%s %i\n", cl.mapname, memusage );
	FS_Write( outstr, strlen( outstr ), handle );
	FS_FCloseFile( handle );

	// now just open it and close it, so it gets copied to the pak dir
	len = FS_FOpenFileByMode( memlistfile, &handle, FS_READ );
	if ( len >= 0 ) {
		FS_FCloseFile( handle );
	}
}

/*
====================
CL_InitCGame

Should only by called by CL_StartHunkUsers
====================
*/
void CL_InitCGame( void ) {
	const char          *info;
	const char          *mapname;
	int t1, t2;
#ifndef CGAME_HARD_LINKED
	GetCgameAPI_t GetCgameAPI;
#endif

	t1 = Sys_Milliseconds();

	// put away the console
	Con_Close();

	// find the current mapname
	info = cl.gameState.stringData + cl.gameState.stringOffsets[ CS_SERVERINFO ];
	mapname = Info_ValueForKey( info, "mapname" );
	Com_sprintf( cl.mapname, sizeof( cl.mapname ), "maps/%s.bsp", mapname );

	// exchange function pointer structs with the native cgame module
	CL_FillCgameImport( &cl_cgameImport );

#ifdef CGAME_HARD_LINKED
	cge = GetCgameAPI( CGAME_IMPORT_API_VERSION, &cl_cgameImport );
	if ( !cge || cge->apiVersion != CGAME_IMPORT_API_VERSION ) {
		cge = NULL;
		Com_Error( ERR_DROP, "GetCgameAPI on cgame failed" );
	}
#else
	cgame_library = Sys_LoadModule( "cgame" );
	if ( !cgame_library ) {
		Com_Error( ERR_DROP, "Sys_LoadModule on cgame failed" );
	}

	GetCgameAPI = ( GetCgameAPI_t ) Sys_ModuleAddress( cgame_library, "GetCgameAPI" );
	if ( !GetCgameAPI ) {
		Sys_UnloadModule( cgame_library );
		cgame_library = NULL;
		Com_Error( ERR_DROP, "GetCgameAPI not found in cgame" );
	}

	cge = GetCgameAPI( CGAME_IMPORT_API_VERSION, &cl_cgameImport );
	if ( !cge || cge->apiVersion != CGAME_IMPORT_API_VERSION ) {
		Sys_UnloadModule( cgame_library );
		cgame_library = NULL;
		cge = NULL;
		Com_Error( ERR_DROP, "GetCgameAPI on cgame failed" );
	}
#endif

	cls.state = CA_LOADING;

	// init for this gamestate
	// use the lastExecutedServerCommand instead of the serverCommandSequence
	// otherwise server commands sent just before a gamestate are dropped
	cge->Init( clc.serverMessageSequence, clc.lastExecutedServerCommand );

	// we will send a usercmd this frame, which
	// will cause the server to send us the first snapshot
	cls.state = CA_PRIMED;

	t2 = Sys_Milliseconds();

	Com_Printf( "CL_InitCGame: %5.2f seconds\n", ( t2 - t1 ) / 1000.0 );

	// have the renderer touch all its images, so they are present
	// on the card even if the driver does deferred loading
	re.EndRegistration();

	// make sure everything is paged in
	if ( !Sys_LowPhysicalMemory() ) {
		Com_TouchMemory();
	}

	// clear anything that got printed
	Con_ClearNotify();

	// Ridah, update the memory usage file
	CL_UpdateLevelHunkUsage();
}


/*
====================
CL_GameCommand

See if the current console command is claimed by the cgame
====================
*/
qboolean CL_GameCommand( void ) {
	if ( !cge ) {
		return qfalse;
	}

	return cge->ConsoleCommand();
}



/*
=====================
CL_CGameRendering
=====================
*/
void CL_CGameRendering( stereoFrame_t stereo ) {
	cge->DrawActiveFrame( cl.serverTime, stereo, clc.demoplaying );
}


/*
=================
CL_AdjustTimeDelta

Adjust the clients view of server time.

We attempt to have cl.serverTime exactly equal the server's view
of time plus the timeNudge, but with variable latencies over
the internet it will often need to drift a bit to match conditions.

Our ideal time would be to have the adjusted time approach, but not pass,
the very latest snapshot.

Adjustments are only made when a new snapshot arrives with a rational
latency, which keeps the adjustment process framerate independent and
prevents massive overadjustment during times of significant packet loss
or bursted delayed packets.
=================
*/

#define RESET_TIME  500

void CL_AdjustTimeDelta( void ) {
	int resetTime;
	int newDelta;
	int deltaDelta;

	cl.newSnapshots = qfalse;

	// the delta never drifts when replaying a demo
	if ( clc.demoplaying ) {
		return;
	}

	// if the current time is WAY off, just correct to the current value
	if ( com_sv_running->integer ) {
		resetTime = 100;
	} else {
		resetTime = RESET_TIME;
	}

	newDelta = cl.snap.serverTime - cls.realtime;
	deltaDelta = abs( newDelta - cl.serverTimeDelta );

	if ( deltaDelta > RESET_TIME ) {
		cl.serverTimeDelta = newDelta;
		cl.oldServerTime = cl.snap.serverTime;  // FIXME: is this a problem for cgame?
		cl.serverTime = cl.snap.serverTime;
		if ( cl_showTimeDelta->integer ) {
			Com_Printf( "<RESET> " );
		}
	} else if ( deltaDelta > 100 ) {
		// fast adjust, cut the difference in half
		if ( cl_showTimeDelta->integer ) {
			Com_Printf( "<FAST> " );
		}
		cl.serverTimeDelta = ( cl.serverTimeDelta + newDelta ) >> 1;
	} else {
		// slow drift adjust, only move 1 or 2 msec

		// if any of the frames between this and the previous snapshot
		// had to be extrapolated, nudge our sense of time back a little
		// the granularity of +1 / -2 is too high for timescale modified frametimes
		if ( com_timescale->value == 0 || com_timescale->value == 1 ) {
			if ( cl.extrapolatedSnapshot ) {
				cl.extrapolatedSnapshot = qfalse;
				cl.serverTimeDelta -= 2;
			} else {
				// otherwise, move our sense of time forward to minimize total latency
				cl.serverTimeDelta++;
			}
		}
	}

	if ( cl_showTimeDelta->integer ) {
		Com_Printf( "%i ", cl.serverTimeDelta );
	}
}


/*
==================
CL_FirstSnapshot
==================
*/
void CL_FirstSnapshot( void ) {
	// ignore snapshots that don't have entities
	if ( cl.snap.snapFlags & SNAPFLAG_NOT_ACTIVE ) {
		return;
	}
	cls.state = CA_ACTIVE;

	// set the timedelta so we are exactly on this first frame
	cl.serverTimeDelta = cl.snap.serverTime - cls.realtime;
	cl.oldServerTime = cl.snap.serverTime;

	clc.timeDemoBaseTime = cl.snap.serverTime;

	// if this is the first frame of active play,
	// execute the contents of activeAction now
	// this is to allow scripting a timedemo to start right
	// after loading
	if ( cl_activeAction->string[0] ) {
		Cbuf_AddText( cl_activeAction->string );
		Cvar_Set( "activeAction", "" );
	}

	Sys_BeginProfiling();
}

/*
==================
CL_SetCGameTime
==================
*/
void CL_SetCGameTime( void ) {
	// getting a valid frame message ends the connection process
	if ( cls.state != CA_ACTIVE ) {
		if ( cls.state != CA_PRIMED ) {
			return;
		}
		if ( clc.demoplaying ) {
			// we shouldn't get the first snapshot on the same frame
			// as the gamestate, because it causes a bad time skip
			if ( !clc.firstDemoFrameSkipped ) {
				clc.firstDemoFrameSkipped = qtrue;
				return;
			}
			CL_ReadDemoMessage();
		}
		if ( cl.newSnapshots ) {
			cl.newSnapshots = qfalse;
			CL_FirstSnapshot();
		}
		if ( cls.state != CA_ACTIVE ) {
			return;
		}
	}

	// if we have gotten to this point, cl.snap is guaranteed to be valid
	if ( !cl.snap.valid ) {
		Com_Error( ERR_DROP, "CL_SetCGameTime: !cl.snap.valid" );
	}

	// allow pause in single player
	if ( sv_paused->integer && cl_paused->integer && com_sv_running->integer ) {
		// paused
		return;
	}

	if ( cl.snap.serverTime < cl.oldFrameServerTime ) {
		// Ridah, if this is a localhost, then we are probably loading a savegame
		if ( !Q_stricmp( cls.servername, "localhost" ) ) {
			// do nothing?
			CL_FirstSnapshot();
		} else {
			Com_Error( ERR_DROP, "cl.snap.serverTime < cl.oldFrameServerTime" );
		}
	}
	cl.oldFrameServerTime = cl.snap.serverTime;


	// get our current view of time

	if ( clc.demoplaying && cl_freezeDemo->integer ) {
		// cl_freezeDemo is used to lock a demo in place for single frame advances

	} else {
		// cl_timeNudge is a user adjustable cvar that allows more
		// or less latency to be added in the interest of better
		// smoothness or better responsiveness.
		int tn;

		tn = cl_timeNudge->integer;
		if ( tn < -30 ) {
			tn = -30;
		} else if ( tn > 30 ) {
			tn = 30;
		}

		cl.serverTime = cls.realtime + cl.serverTimeDelta - tn;

		// guarantee that time will never flow backwards, even if
		// serverTimeDelta made an adjustment or cl_timeNudge was changed
		if ( cl.serverTime < cl.oldServerTime ) {
			cl.serverTime = cl.oldServerTime;
		}
		cl.oldServerTime = cl.serverTime;

		// note if we are almost past the latest frame (without timeNudge),
		// so we will try and adjust back a bit when the next snapshot arrives
		if ( cls.realtime + cl.serverTimeDelta >= cl.snap.serverTime - 5 ) {
			cl.extrapolatedSnapshot = qtrue;
		}
	}

	// if we have gotten new snapshots, drift serverTimeDelta
	// don't do this every frame, or a period of packet loss would
	// make a huge adjustment
	if ( cl.newSnapshots ) {
		CL_AdjustTimeDelta();
	}

	if ( !clc.demoplaying ) {
		return;
	}

	// if we are playing a demo back, we can just keep reading
	// messages from the demo file until the cgame definately
	// has valid snapshots to interpolate between

	// a timedemo will always use a deterministic set of time samples
	// no matter what speed machine it is run on,
	// while a normal demo may have different time samples
	// each time it is played back
	if ( cl_timedemo->integer ) {
		if ( !clc.timeDemoStart ) {
			clc.timeDemoStart = Sys_Milliseconds();
		}
		clc.timeDemoFrames++;
		cl.serverTime = clc.timeDemoBaseTime + clc.timeDemoFrames * 50;
	}

	while ( cl.serverTime >= cl.snap.serverTime ) {
		// feed another messag, which should change
		// the contents of cl.snap
		CL_ReadDemoMessage();
		if ( cls.state != CA_ACTIVE ) {
			return;     // end of demo
		}
	}

}

/*
====================
CL_GetTag
====================
*/
qboolean CL_GetTag( int clientNum, char *tagname, orientation_t *or ) {
	if ( !cge ) {
		return qfalse;
	}

	return cge->GetTag( clientNum, tagname, or );
}

