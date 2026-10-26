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

// sv_game.c -- interface to the game dll

#include "server.h"

#include "../game/botlib.h"

botlib_export_t *botlib_export;

void SV_GameError( const char *string ) {
	Com_Error( ERR_DROP, "%s", string );
}

void SV_GamePrint( const char *string ) {
	Com_Printf( "%s", string );
}

// these functions must be used instead of pointer arithmetic, because
// the game allocates gentities with private information after the server shared part
int SV_NumForGentity( sharedEntity_t *ent ) {
	int num;

	num = ( (byte *)ent - (byte *)sv.gentities ) / sv.gentitySize;

	return num;
}

sharedEntity_t *SV_GentityNum( int num ) {
	sharedEntity_t *ent;

	ent = ( sharedEntity_t * )( (byte *)sv.gentities + sv.gentitySize * ( num ) );

	return ent;
}

playerState_t *SV_GameClientNum( int num ) {
	playerState_t   *ps;

	ps = ( playerState_t * )( (byte *)sv.gameClients + sv.gameClientSize * ( num ) );

	return ps;
}

svEntity_t  *SV_SvEntityForGentity( sharedEntity_t *gEnt ) {
	if ( !gEnt || gEnt->s.number < 0 || gEnt->s.number >= MAX_GENTITIES ) {
		Com_Error( ERR_DROP, "SV_SvEntityForGentity: bad gEnt" );
	}
	return &sv.svEntities[ gEnt->s.number ];
}

sharedEntity_t *SV_GEntityForSvEntity( svEntity_t *svEnt ) {
	int num;

	num = svEnt - sv.svEntities;
	return SV_GentityNum( num );
}

/*
===============
SV_GameSendServerCommand

Sends a command string to a client
===============
*/
void SV_GameSendServerCommand( int clientNum, const char *text ) {
	if ( clientNum == -1 ) {
		SV_SendServerCommand( NULL, "%s", text );
	} else {
		if ( clientNum < 0 || clientNum >= sv_maxclients->integer ) {
			return;
		}
		SV_SendServerCommand( svs.clients + clientNum, "%s", text );
	}
}


/*
===============
SV_GameDropClient

Disconnects the client with a message
===============
*/
void SV_GameDropClient( int clientNum, const char *reason ) {
	if ( clientNum < 0 || clientNum >= sv_maxclients->integer ) {
		return;
	}
	SV_DropClient( svs.clients + clientNum, reason );
}


/*
=================
SV_SetBrushModel

sets mins and maxs for inline bmodels
=================
*/
void SV_SetBrushModel( sharedEntity_t *ent, const char *name ) {
	clipHandle_t h;
	vec3_t mins, maxs;

	if ( !name ) {
		Com_Error( ERR_DROP, "SV_SetBrushModel: NULL" );
	}

	if ( name[0] != '*' ) {
		Com_Error( ERR_DROP, "SV_SetBrushModel: %s isn't a brush model", name );
	}


	ent->s.modelindex = atoi( name + 1 );

	h = CM_InlineModel( ent->s.modelindex );
	CM_ModelBounds( h, mins, maxs );
	VectorCopy( mins, ent->r.mins );
	VectorCopy( maxs, ent->r.maxs );
	ent->r.bmodel = qtrue;

	ent->r.contents = -1;       // we don't know exactly what is in the brushes

	SV_LinkEntity( ent );       // FIXME: remove
}



/*
=================
SV_inPVS

Also checks portalareas so that doors block sight
=================
*/
qboolean SV_inPVS( const vec3_t p1, const vec3_t p2 ) {
	int leafnum;
	int cluster;
	int area1, area2;
	byte    *mask;

	leafnum = CM_PointLeafnum( p1 );
	cluster = CM_LeafCluster( leafnum );
	area1 = CM_LeafArea( leafnum );
	mask = CM_ClusterPVS( cluster );

	leafnum = CM_PointLeafnum( p2 );
	cluster = CM_LeafCluster( leafnum );
	area2 = CM_LeafArea( leafnum );
	if ( mask && ( !( mask[cluster >> 3] & ( 1 << ( cluster & 7 ) ) ) ) ) {
		return qfalse;
	}
	if ( !CM_AreasConnected( area1, area2 ) ) {
		return qfalse;      // a door blocks sight
	}
	return qtrue;
}


/*
=================
SV_inPVSIgnorePortals

Does NOT check portalareas
=================
*/
qboolean SV_inPVSIgnorePortals( const vec3_t p1, const vec3_t p2 ) {
	int leafnum;
	int cluster;
	int area1, area2;
	byte    *mask;

	leafnum = CM_PointLeafnum( p1 );
	cluster = CM_LeafCluster( leafnum );
	area1 = CM_LeafArea( leafnum );
	mask = CM_ClusterPVS( cluster );

	leafnum = CM_PointLeafnum( p2 );
	cluster = CM_LeafCluster( leafnum );
	area2 = CM_LeafArea( leafnum );

	if ( mask && ( !( mask[cluster >> 3] & ( 1 << ( cluster & 7 ) ) ) ) ) {
		return qfalse;
	}

	return qtrue;
}


/*
========================
SV_AdjustAreaPortalState
========================
*/
void SV_AdjustAreaPortalState( sharedEntity_t *ent, qboolean open ) {
	svEntity_t  *svEnt;

	svEnt = SV_SvEntityForGentity( ent );
	if ( svEnt->areanum2 == -1 ) {
		return;
	}
	CM_AdjustAreaPortalState( svEnt->areanum, svEnt->areanum2, open );
}


/*
==================
SV_GameAreaEntities
==================
*/
qboolean    SV_EntityContact( const vec3_t mins, const vec3_t maxs, const sharedEntity_t *gEnt, const int capsule ) {
	const float *origin, *angles;
	clipHandle_t ch;
	trace_t trace;

	// check for exact collision
	origin = gEnt->r.currentOrigin;
	angles = gEnt->r.currentAngles;

	ch = SV_ClipHandleForEntity( gEnt );
	CM_TransformedBoxTrace( &trace, vec3_origin, vec3_origin, mins, maxs,
							ch, -1, origin, angles, capsule );

	return trace.startsolid;
}


/*
===============
SV_GetServerinfo

===============
*/
void SV_GetServerinfo( char *buffer, int bufferSize ) {
	if ( bufferSize < 1 ) {
		Com_Error( ERR_DROP, "SV_GetServerinfo: bufferSize == %i", bufferSize );
	}
	Q_strncpyz( buffer, Cvar_InfoString( CVAR_SERVERINFO ), bufferSize );
}

/*
===============
SV_LocateGameData

===============
*/
void SV_LocateGameData( sharedEntity_t *gEnts, int numGEntities, int sizeofGEntity_t,
						playerState_t *clients, int sizeofGameClient ) {
	sv.gentities = gEnts;
	sv.gentitySize = sizeofGEntity_t;
	sv.num_entities = numGEntities;

	sv.gameClients = clients;
	sv.gameClientSize = sizeofGameClient;
}


/*
===============
SV_GetUsercmd

===============
*/
void SV_GetUsercmd( int clientNum, usercmd_t *cmd ) {
	if ( clientNum < 0 || clientNum >= sv_maxclients->integer ) {
		Com_Error( ERR_DROP, "SV_GetUsercmd: bad clientNum:%i", clientNum );
	}
	*cmd = svs.clients[clientNum].lastUsercmd;
}

//==============================================

// native game module interface (Doom3 style): the engine loads the
// module with Sys_LoadModule and exchanges structs of function pointers

static gameImport_t sv_gameImport;     // engine functions handed to the game module
static void *game_library = NULL;      // handle from Sys_LoadModule

typedef gameExport_t *( *GetGameAPI_t )( int apiVersion, gameImport_t *import );

static void G_Endgame( void ) {
	Com_Error( ERR_ENDGAME, "endgame" );   // no message, no error print
}

static int G_FSRename( const char *from, const char *to ) {
	FS_Rename( from, to );
	return 0;
}

static void G_Trace( trace_t *results, const vec3_t start, const vec3_t mins, const vec3_t maxs, const vec3_t end, int passEntityNum, int contentmask ) {
	SV_Trace( results, start, mins, maxs, end, passEntityNum, contentmask, qfalse );
}

static void G_TraceCapsule( trace_t *results, const vec3_t start, const vec3_t mins, const vec3_t maxs, const vec3_t end, int passEntityNum, int contentmask ) {
	SV_Trace( results, start, mins, maxs, end, passEntityNum, contentmask, qtrue );
}

static qboolean G_EntityContact( const vec3_t mins, const vec3_t maxs, const sharedEntity_t *ent ) {
	return SV_EntityContact( mins, maxs, ent, qfalse );
}

static qboolean G_EntityContactCapsule( const vec3_t mins, const vec3_t maxs, const sharedEntity_t *ent ) {
	return SV_EntityContact( mins, maxs, ent, qtrue );
}

static qboolean G_GetEntityToken( char *buffer, int bufferSize ) {
	const char  *s;

	s = COM_Parse( &sv.entityParsePoint );
	Q_strncpyz( buffer, s, bufferSize );
	if ( !sv.entityParsePoint && !s[0] ) {
		return qfalse;
	}
	return qtrue;
}

static void G_BotUserCommand( int clientNum, usercmd_t *cmd ) {
	SV_ClientThink( &svs.clients[clientNum], cmd );
}

/*
================
SV_FillGameImport

Fills the struct of engine functions handed to the game module
================
*/
static void SV_FillGameImport( gameImport_t *import ) {
	import->G_PRINT = SV_GamePrint;
	import->G_ERROR = SV_GameError;
	import->G_ENDGAME = G_Endgame;
	import->G_MILLISECONDS = Sys_Milliseconds;
	import->G_CVAR_REGISTER = Cvar_Register;
	import->G_CVAR_UPDATE = Cvar_Update;
	import->G_CVAR_SET = Cvar_Set;
	import->G_CVAR_VARIABLE_INTEGER_VALUE = Cvar_VariableIntegerValue;
	import->G_CVAR_VARIABLE_STRING_BUFFER = Cvar_VariableStringBuffer;
	import->G_ARGC = Cmd_Argc;
	import->G_ARGV = Cmd_ArgvBuffer;
	import->G_FS_FOPEN_FILE = FS_FOpenFileByMode;
	import->G_FS_READ = FS_Read;
	import->G_FS_WRITE = FS_Write;
	import->G_FS_RENAME = G_FSRename;
	import->G_FS_FCLOSE_FILE = FS_FCloseFile;
	import->G_SEND_CONSOLE_COMMAND = Cbuf_ExecuteText;
	import->G_LOCATE_GAME_DATA = SV_LocateGameData;
	import->G_DROP_CLIENT = SV_GameDropClient;
	import->G_SEND_SERVER_COMMAND = SV_GameSendServerCommand;
	import->G_SET_CONFIGSTRING = SV_SetConfigstring;
	import->G_GET_CONFIGSTRING = SV_GetConfigstring;
	import->G_GET_USERINFO = SV_GetUserinfo;
	import->G_SET_USERINFO = SV_SetUserinfo;
	import->G_GET_SERVERINFO = SV_GetServerinfo;
	import->G_SET_BRUSH_MODEL = SV_SetBrushModel;
	import->G_TRACE = G_Trace;
	import->G_TRACECAPSULE = G_TraceCapsule;
	import->G_POINT_CONTENTS = SV_PointContents;
	import->G_IN_PVS = SV_inPVS;
	import->G_IN_PVS_IGNORE_PORTALS = SV_inPVSIgnorePortals;
	import->G_ADJUST_AREA_PORTAL_STATE = SV_AdjustAreaPortalState;
	import->G_AREAS_CONNECTED = CM_AreasConnected;
	import->G_LINKENTITY = SV_LinkEntity;
	import->G_UNLINKENTITY = SV_UnlinkEntity;
	import->G_ENTITIES_IN_BOX = SV_AreaEntities;
	import->G_ENTITY_CONTACT = G_EntityContact;
	import->G_ENTITY_CONTACTCAPSULE = G_EntityContactCapsule;
	import->G_BOT_ALLOCATE_CLIENT = SV_BotAllocateClient;
	import->G_BOT_FREE_CLIENT = SV_BotFreeClient;
	import->G_GET_USERCMD = SV_GetUsercmd;
	import->G_GET_ENTITY_TOKEN = G_GetEntityToken;
	import->G_DEBUG_POLYGON_CREATE = BotImport_DebugPolygonCreate;
	import->G_DEBUG_POLYGON_DELETE = BotImport_DebugPolygonDelete;
	import->G_FS_GETFILELIST = FS_GetFileList;
	import->G_REAL_TIME = Com_RealTime;
	import->G_SNAPVECTOR = Sys_SnapVector;
	import->G_GETTAG = SV_GetTag;
	import->G_FS_COPY_FILE = FS_CopyFileOS;
	import->BOTLIB_SETUP = SV_BotLibSetup;
	import->BOTLIB_SHUTDOWN = SV_BotLibShutdown;
	import->BOTLIB_LIBVAR_SET = botlib_export->BotLibVarSet;
	import->BOTLIB_LIBVAR_GET = botlib_export->BotLibVarGet;
	import->BOTLIB_PC_ADD_GLOBAL_DEFINE = botlib_export->PC_AddGlobalDefine;
	import->BOTLIB_PC_LOAD_SOURCE = botlib_export->PC_LoadSourceHandle;
	import->BOTLIB_PC_FREE_SOURCE = botlib_export->PC_FreeSourceHandle;
	import->BOTLIB_PC_READ_TOKEN = botlib_export->PC_ReadTokenHandle;
	import->BOTLIB_PC_SOURCE_FILE_AND_LINE = botlib_export->PC_SourceFileAndLine;
	import->BOTLIB_START_FRAME = botlib_export->BotLibStartFrame;
	import->BOTLIB_LOAD_MAP = botlib_export->BotLibLoadMap;
	import->BOTLIB_UPDATENTITY = botlib_export->BotLibUpdateEntity;
	import->BOTLIB_TEST = botlib_export->Test;
	import->BOTLIB_GET_SNAPSHOT_ENTITY = SV_BotGetSnapshotEntity;
	import->BOTLIB_GET_CONSOLE_MESSAGE = SV_BotGetConsoleMessage;
	import->BOTLIB_USER_COMMAND = G_BotUserCommand;
	import->BOTLIB_AAS_ENTITY_INFO = botlib_export->aas.AAS_EntityInfo;
	import->BOTLIB_AAS_INITIALIZED = botlib_export->aas.AAS_Initialized;
	import->BOTLIB_AAS_PRESENCE_TYPE_BOUNDING_BOX = botlib_export->aas.AAS_PresenceTypeBoundingBox;
	import->BOTLIB_AAS_TIME = botlib_export->aas.AAS_Time;
	import->BOTLIB_AAS_SETCURRENTWORLD = botlib_export->aas.AAS_SetCurrentWorld;
	import->BOTLIB_AAS_POINT_AREA_NUM = botlib_export->aas.AAS_PointAreaNum;
	import->BOTLIB_AAS_TRACE_AREAS = botlib_export->aas.AAS_TraceAreas;
	import->BOTLIB_AAS_POINT_CONTENTS = botlib_export->aas.AAS_PointContents;
	import->BOTLIB_AAS_NEXT_BSP_ENTITY = botlib_export->aas.AAS_NextBSPEntity;
	import->BOTLIB_AAS_VALUE_FOR_BSP_EPAIR_KEY = botlib_export->aas.AAS_ValueForBSPEpairKey;
	import->BOTLIB_AAS_VECTOR_FOR_BSP_EPAIR_KEY = botlib_export->aas.AAS_VectorForBSPEpairKey;
	import->BOTLIB_AAS_FLOAT_FOR_BSP_EPAIR_KEY = botlib_export->aas.AAS_FloatForBSPEpairKey;
	import->BOTLIB_AAS_INT_FOR_BSP_EPAIR_KEY = botlib_export->aas.AAS_IntForBSPEpairKey;
	import->BOTLIB_AAS_AREA_REACHABILITY = botlib_export->aas.AAS_AreaReachability;
	import->BOTLIB_AAS_AREA_TRAVEL_TIME_TO_GOAL_AREA = botlib_export->aas.AAS_AreaTravelTimeToGoalArea;
	import->BOTLIB_AAS_SWIMMING = botlib_export->aas.AAS_Swimming;
	import->BOTLIB_AAS_PREDICT_CLIENT_MOVEMENT = botlib_export->aas.AAS_PredictClientMovement;
	import->BOTLIB_AAS_RT_SHOWROUTE = botlib_export->aas.AAS_RT_ShowRoute;
	import->BOTLIB_AAS_RT_GETHIDEPOS = botlib_export->aas.AAS_RT_GetHidePos;
	import->BOTLIB_AAS_FINDATTACKSPOTWITHINRANGE = botlib_export->aas.AAS_FindAttackSpotWithinRange;
	import->BOTLIB_AAS_GETROUTEFIRSTVISPOS = botlib_export->aas.AAS_GetRouteFirstVisPos;
	import->BOTLIB_AAS_SETAASBLOCKINGENTITY = botlib_export->aas.AAS_SetAASBlockingEntity;
	import->BOTLIB_EA_SAY = botlib_export->ea.EA_Say;
	import->BOTLIB_EA_SAY_TEAM = botlib_export->ea.EA_SayTeam;
	import->BOTLIB_EA_USE_ITEM = botlib_export->ea.EA_UseItem;
	import->BOTLIB_EA_DROP_ITEM = botlib_export->ea.EA_DropItem;
	import->BOTLIB_EA_USE_INV = botlib_export->ea.EA_UseInv;
	import->BOTLIB_EA_DROP_INV = botlib_export->ea.EA_DropInv;
	import->BOTLIB_EA_GESTURE = botlib_export->ea.EA_Gesture;
	import->BOTLIB_EA_COMMAND = botlib_export->ea.EA_Command;
	import->BOTLIB_EA_SELECT_WEAPON = botlib_export->ea.EA_SelectWeapon;
	import->BOTLIB_EA_TALK = botlib_export->ea.EA_Talk;
	import->BOTLIB_EA_ATTACK = botlib_export->ea.EA_Attack;
	import->BOTLIB_EA_RELOAD = botlib_export->ea.EA_Reload;
	import->BOTLIB_EA_USE = botlib_export->ea.EA_Use;
	import->BOTLIB_EA_RESPAWN = botlib_export->ea.EA_Respawn;
	import->BOTLIB_EA_JUMP = botlib_export->ea.EA_Jump;
	import->BOTLIB_EA_DELAYED_JUMP = botlib_export->ea.EA_DelayedJump;
	import->BOTLIB_EA_CROUCH = botlib_export->ea.EA_Crouch;
	import->BOTLIB_EA_MOVE_UP = botlib_export->ea.EA_MoveUp;
	import->BOTLIB_EA_MOVE_DOWN = botlib_export->ea.EA_MoveDown;
	import->BOTLIB_EA_MOVE_FORWARD = botlib_export->ea.EA_MoveForward;
	import->BOTLIB_EA_MOVE_BACK = botlib_export->ea.EA_MoveBack;
	import->BOTLIB_EA_MOVE_LEFT = botlib_export->ea.EA_MoveLeft;
	import->BOTLIB_EA_MOVE_RIGHT = botlib_export->ea.EA_MoveRight;
	import->BOTLIB_EA_MOVE = botlib_export->ea.EA_Move;
	import->BOTLIB_EA_VIEW = botlib_export->ea.EA_View;
	import->BOTLIB_EA_END_REGULAR = botlib_export->ea.EA_EndRegular;
	import->BOTLIB_EA_GET_INPUT = botlib_export->ea.EA_GetInput;
	import->BOTLIB_EA_RESET_INPUT = botlib_export->ea.EA_ResetInput;
	import->BOTLIB_AI_LOAD_CHARACTER = botlib_export->ai.BotLoadCharacter;
	import->BOTLIB_AI_FREE_CHARACTER = botlib_export->ai.BotFreeCharacter;
	import->BOTLIB_AI_CHARACTERISTIC_FLOAT = botlib_export->ai.Characteristic_Float;
	import->BOTLIB_AI_CHARACTERISTIC_BFLOAT = botlib_export->ai.Characteristic_BFloat;
	import->BOTLIB_AI_CHARACTERISTIC_INTEGER = botlib_export->ai.Characteristic_Integer;
	import->BOTLIB_AI_CHARACTERISTIC_BINTEGER = botlib_export->ai.Characteristic_BInteger;
	import->BOTLIB_AI_CHARACTERISTIC_STRING = botlib_export->ai.Characteristic_String;
	import->BOTLIB_AI_ALLOC_CHAT_STATE = botlib_export->ai.BotAllocChatState;
	import->BOTLIB_AI_FREE_CHAT_STATE = botlib_export->ai.BotFreeChatState;
	import->BOTLIB_AI_QUEUE_CONSOLE_MESSAGE = botlib_export->ai.BotQueueConsoleMessage;
	import->BOTLIB_AI_REMOVE_CONSOLE_MESSAGE = botlib_export->ai.BotRemoveConsoleMessage;
	import->BOTLIB_AI_NEXT_CONSOLE_MESSAGE = botlib_export->ai.BotNextConsoleMessage;
	import->BOTLIB_AI_NUM_CONSOLE_MESSAGE = botlib_export->ai.BotNumConsoleMessages;
	import->BOTLIB_AI_INITIAL_CHAT = botlib_export->ai.BotInitialChat;
	import->BOTLIB_AI_NUM_INITIAL_CHATS = botlib_export->ai.BotNumInitialChats;
	import->BOTLIB_AI_REPLY_CHAT = botlib_export->ai.BotReplyChat;
	import->BOTLIB_AI_CHAT_LENGTH = botlib_export->ai.BotChatLength;
	import->BOTLIB_AI_ENTER_CHAT = botlib_export->ai.BotEnterChat;
	import->BOTLIB_AI_GET_CHAT_MESSAGE = botlib_export->ai.BotGetChatMessage;
	import->BOTLIB_AI_STRING_CONTAINS = botlib_export->ai.StringContains;
	import->BOTLIB_AI_FIND_MATCH = botlib_export->ai.BotFindMatch;
	import->BOTLIB_AI_MATCH_VARIABLE = botlib_export->ai.BotMatchVariable;
	import->BOTLIB_AI_UNIFY_WHITE_SPACES = botlib_export->ai.UnifyWhiteSpaces;
	import->BOTLIB_AI_REPLACE_SYNONYMS = botlib_export->ai.BotReplaceSynonyms;
	import->BOTLIB_AI_LOAD_CHAT_FILE = botlib_export->ai.BotLoadChatFile;
	import->BOTLIB_AI_SET_CHAT_GENDER = botlib_export->ai.BotSetChatGender;
	import->BOTLIB_AI_SET_CHAT_NAME = botlib_export->ai.BotSetChatName;
	import->BOTLIB_AI_RESET_GOAL_STATE = botlib_export->ai.BotResetGoalState;
	import->BOTLIB_AI_RESET_AVOID_GOALS = botlib_export->ai.BotResetAvoidGoals;
	import->BOTLIB_AI_REMOVE_FROM_AVOID_GOALS = botlib_export->ai.BotRemoveFromAvoidGoals;
	import->BOTLIB_AI_PUSH_GOAL = botlib_export->ai.BotPushGoal;
	import->BOTLIB_AI_POP_GOAL = botlib_export->ai.BotPopGoal;
	import->BOTLIB_AI_EMPTY_GOAL_STACK = botlib_export->ai.BotEmptyGoalStack;
	import->BOTLIB_AI_DUMP_AVOID_GOALS = botlib_export->ai.BotDumpAvoidGoals;
	import->BOTLIB_AI_DUMP_GOAL_STACK = botlib_export->ai.BotDumpGoalStack;
	import->BOTLIB_AI_GOAL_NAME = botlib_export->ai.BotGoalName;
	import->BOTLIB_AI_GET_TOP_GOAL = botlib_export->ai.BotGetTopGoal;
	import->BOTLIB_AI_GET_SECOND_GOAL = botlib_export->ai.BotGetSecondGoal;
	import->BOTLIB_AI_CHOOSE_LTG_ITEM = botlib_export->ai.BotChooseLTGItem;
	import->BOTLIB_AI_CHOOSE_NBG_ITEM = botlib_export->ai.BotChooseNBGItem;
	import->BOTLIB_AI_TOUCHING_GOAL = botlib_export->ai.BotTouchingGoal;
	import->BOTLIB_AI_ITEM_GOAL_IN_VIS_BUT_NOT_VISIBLE = botlib_export->ai.BotItemGoalInVisButNotVisible;
	import->BOTLIB_AI_GET_LEVEL_ITEM_GOAL = botlib_export->ai.BotGetLevelItemGoal;
	import->BOTLIB_AI_GET_NEXT_CAMP_SPOT_GOAL = botlib_export->ai.BotGetNextCampSpotGoal;
	import->BOTLIB_AI_GET_MAP_LOCATION_GOAL = botlib_export->ai.BotGetMapLocationGoal;
	import->BOTLIB_AI_AVOID_GOAL_TIME = botlib_export->ai.BotAvoidGoalTime;
	import->BOTLIB_AI_INIT_LEVEL_ITEMS = botlib_export->ai.BotInitLevelItems;
	import->BOTLIB_AI_UPDATE_ENTITY_ITEMS = botlib_export->ai.BotUpdateEntityItems;
	import->BOTLIB_AI_LOAD_ITEM_WEIGHTS = botlib_export->ai.BotLoadItemWeights;
	import->BOTLIB_AI_FREE_ITEM_WEIGHTS = botlib_export->ai.BotFreeItemWeights;
	import->BOTLIB_AI_INTERBREED_GOAL_FUZZY_LOGIC = botlib_export->ai.BotInterbreedGoalFuzzyLogic;
	import->BOTLIB_AI_SAVE_GOAL_FUZZY_LOGIC = botlib_export->ai.BotSaveGoalFuzzyLogic;
	import->BOTLIB_AI_MUTATE_GOAL_FUZZY_LOGIC = botlib_export->ai.BotMutateGoalFuzzyLogic;
	import->BOTLIB_AI_ALLOC_GOAL_STATE = botlib_export->ai.BotAllocGoalState;
	import->BOTLIB_AI_FREE_GOAL_STATE = botlib_export->ai.BotFreeGoalState;
	import->BOTLIB_AI_RESET_MOVE_STATE = botlib_export->ai.BotResetMoveState;
	import->BOTLIB_AI_MOVE_TO_GOAL = botlib_export->ai.BotMoveToGoal;
	import->BOTLIB_AI_MOVE_IN_DIRECTION = botlib_export->ai.BotMoveInDirection;
	import->BOTLIB_AI_RESET_AVOID_REACH = botlib_export->ai.BotResetAvoidReach;
	import->BOTLIB_AI_RESET_LAST_AVOID_REACH = botlib_export->ai.BotResetLastAvoidReach;
	import->BOTLIB_AI_REACHABILITY_AREA = botlib_export->ai.BotReachabilityArea;
	import->BOTLIB_AI_MOVEMENT_VIEW_TARGET = botlib_export->ai.BotMovementViewTarget;
	import->BOTLIB_AI_PREDICT_VISIBLE_POSITION = botlib_export->ai.BotPredictVisiblePosition;
	import->BOTLIB_AI_ALLOC_MOVE_STATE = botlib_export->ai.BotAllocMoveState;
	import->BOTLIB_AI_FREE_MOVE_STATE = botlib_export->ai.BotFreeMoveState;
	import->BOTLIB_AI_INIT_MOVE_STATE = botlib_export->ai.BotInitMoveState;
	import->BOTLIB_AI_INIT_AVOID_REACH = botlib_export->ai.BotInitAvoidReach;
	import->BOTLIB_AI_CHOOSE_BEST_FIGHT_WEAPON = botlib_export->ai.BotChooseBestFightWeapon;
	import->BOTLIB_AI_GET_WEAPON_INFO = botlib_export->ai.BotGetWeaponInfo;
	import->BOTLIB_AI_LOAD_WEAPON_WEIGHTS = botlib_export->ai.BotLoadWeaponWeights;
	import->BOTLIB_AI_ALLOC_WEAPON_STATE = botlib_export->ai.BotAllocWeaponState;
	import->BOTLIB_AI_FREE_WEAPON_STATE = botlib_export->ai.BotFreeWeaponState;
	import->BOTLIB_AI_RESET_WEAPON_STATE = botlib_export->ai.BotResetWeaponState;
	import->BOTLIB_AI_GENETIC_PARENTS_AND_CHILD_SELECTION = botlib_export->ai.GeneticParentsAndChildSelection;
}

/*
===============
SV_ShutdownGameProgs

Called every time a map changes
===============
*/
void SV_ShutdownGameProgs( void ) {
	if ( !ge ) {
		return;
	}
	ge->Shutdown( qfalse );
	Sys_UnloadModule( game_library );
	game_library = NULL;
	ge = NULL;
}

/*
==================
SV_InitGameVM

Called for both a full init and a restart
==================
*/
static void SV_InitGameVM( qboolean restart ) {
	int i;

	// start the entity parsing at the beginning
	sv.entityParsePoint = CM_EntityString();

	// use the current msec count for a random seed
	// init for this gamestate
	ge->Init( svs.time, Com_Milliseconds(), restart );

	// clear all gentity pointers that might still be set from
	// a previous level
	for ( i = 0 ; i < sv_maxclients->integer ; i++ ) {
		svs.clients[i].gentity = NULL;
	}
}



/*
===================
SV_RestartGameProgs

Called on a map_restart, but not on a normal map change
===================
*/
void SV_RestartGameProgs( void ) {
	if ( !ge ) {
		return;
	}
	ge->Shutdown( qtrue );

	SV_InitGameVM( qtrue );
}


/*
===============
SV_InitGameProgs

Called on a normal map change, not on a map_restart
===============
*/
void SV_InitGameProgs( void ) {
	cvar_t  *var;
	GetGameAPI_t GetGameAPI;
	//FIXME these are temp while I make bots run in vm
	extern int bot_enable;

	var = Cvar_Get( "bot_enable", "1", CVAR_LATCH );
	if ( var ) {
		bot_enable = var->integer;
	} else {
		bot_enable = 0;
	}

	// exchange function pointer structs with the native game module
	SV_FillGameImport( &sv_gameImport );

	game_library = Sys_LoadModule( "qagame" );
	if ( !game_library ) {
		Com_Error( ERR_FATAL, "Sys_LoadModule on qagame failed" );
	}

	GetGameAPI = ( GetGameAPI_t ) Sys_ModuleAddress( game_library, "GetGameAPI" );
	if ( !GetGameAPI ) {
		Sys_UnloadModule( game_library );
		game_library = NULL;
		Com_Error( ERR_FATAL, "GetGameAPI not found in qagame" );
	}

	ge = GetGameAPI( GAME_API_VERSION, &sv_gameImport );
	if ( !ge || ge->apiVersion != GAME_API_VERSION ) {
		Sys_UnloadModule( game_library );
		game_library = NULL;
		ge = NULL;
		Com_Error( ERR_FATAL, "GetGameAPI on game failed" );
	}

	SV_InitGameVM( qfalse );
}


/*
====================
SV_GameCommand

See if the current console command is claimed by the game
====================
*/
qboolean SV_GameCommand( void ) {
	if ( sv.state != SS_GAME ) {
		return qfalse;
	}

	return ge->ConsoleCommand();
}


/*
====================
SV_SendMoveSpeedsToGame
====================
*/
void SV_SendMoveSpeedsToGame( int entnum, char *text ) {
	if ( !ge ) {
		return;
	}
	ge->RetrieveMoveSpeedsFromClient( entnum, text );
}

/*
====================
SV_GetTag

  return qfalse if unable to retrieve tag information for this client
====================
*/
extern qboolean CL_GetTag( int clientNum, char *tagname, orientation_t *or );

qboolean SV_GetTag( int clientNum, char *tagname, orientation_t *or ) {
	if ( com_dedicated->integer ) {
		return qfalse;
	}

	return CL_GetTag( clientNum, tagname, or );
}

/*
===================
SV_GetModelInfo

  request this modelinfo from the game
===================
*/
qboolean SV_GetModelInfo( int clientNum, char *modelName, animModelInfo_t **modelInfo ) {
	if ( !ge ) {
		return qfalse;
	}
	return ge->GetModelInfo( clientNum, modelName, modelInfo );
}