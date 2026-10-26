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

// Copyright (C) 1999-2000 Id Software, Inc.
//

// g_public.h -- game module information visible to server

#define GAME_API_VERSION    8

// entity->svFlags
// the server does not know how to interpret most of the values
// in entityStates (level eType), so the game must explicitly flag
// special server behaviors
#define SVF_NOCLIENT            0x00000001  // don't send entity to clients, even if it has effects
#define SVF_VISDUMMY            0x00000004  // this ent is a "visibility dummy" and needs it's master to be sent to clients that can see it even if they can't see the master ent
#define SVF_BOT                 0x00000008
// Wolfenstein
#define SVF_CASTAI              0x00000010
// done.
#define SVF_BROADCAST           0x00000020  // send to all connected clients
#define SVF_PORTAL              0x00000040  // merge a second pvs at origin2 into snapshots
#define SVF_USE_CURRENT_ORIGIN  0x00000080  // entity->r.currentOrigin instead of entity->s.origin
                                            // for link position (missiles and movers)
// Ridah
#define SVF_NOFOOTSTEPS         0x00000100
// done.
// MrE:
#define SVF_CAPSULE             0x00000200  // use capsule for collision detection

#define SVF_VISDUMMY_MULTIPLE   0x00000400  // so that one vis dummy can add to snapshot multiple speakers

// recent id changes
#define SVF_SINGLECLIENT        0x00000800  // only send to a single client (entityShared_t->singleClient)
#define SVF_NOSERVERINFO        0x00001000  // don't send CS_SERVERINFO updates to this client
                                            // so that it can be updated for ping tools without
                                            // lagging clients
#define SVF_NOTSINGLECLIENT     0x00002000  // send entity to everyone but one client
                                            // (entityShared_t->singleClient)

//===============================================================


typedef struct {
	entityState_t s;                // communicated by server to clients

	qboolean linked;                // qfalse if not in any good cluster
	int linkcount;

	int svFlags;                    // SVF_NOCLIENT, SVF_BROADCAST, etc
	int singleClient;               // only send to this client when SVF_SINGLECLIENT is set

	qboolean bmodel;                // if false, assume an explicit mins / maxs bounding box
	                                // only set by trap_SetBrushModel
	vec3_t mins, maxs;
	int contents;                   // CONTENTS_TRIGGER, CONTENTS_SOLID, CONTENTS_BODY, etc
	                                // a non-solid entity should set to 0

	vec3_t absmin, absmax;          // derived from mins/maxs and origin + rotation

	// currentOrigin will be used for all collision detection and world linking.
	// it will not necessarily be the same as the trajectory evaluation for the current
	// time, because each entity must be moved one at a time after time is advanced
	// to avoid simultanious collision issues
	vec3_t currentOrigin;
	vec3_t currentAngles;

	// when a trace call is made and passEntityNum != ENTITYNUM_NONE,
	// an ent will be excluded from testing if:
	// ent->s.number == passEntityNum	(don't interact with self)
	// ent->s.ownerNum = passEntityNum	(don't interact with your own missiles)
	// entity[ent->s.ownerNum].ownerNum = passEntityNum	(don't interact with other missiles from owner)
	int ownerNum;
	int eventTime;
} entityShared_t;



// the server looks at a sharedEntity, which is the start of the game's gentity_t structure
typedef struct {
	entityState_t s;                // communicated by server to clients
	entityShared_t r;               // shared by both the server system and game
} sharedEntity_t;



//===============================================================

//
// system traps provided by the main engine
//
// forward declarations for botlib types passed by pointer
struct aas_clientmove_s;
struct aas_entityinfo_s;
struct bot_consolemessage_s;
struct bot_match_s;
struct bot_goal_s;
struct bot_moveresult_s;
struct bot_initmove_s;
struct weaponinfo_s;
struct bot_entitystate_s;
struct bot_input_s;

typedef struct {
	void ( *G_PRINT )( const char *string );
	void ( *G_ERROR )( const char *string );
	void ( *G_ENDGAME )( void );
	int ( *G_MILLISECONDS )( void );
	void ( *G_CVAR_REGISTER )( vmCvar_t *vmCvar, const char *varName, const char *defaultValue, int flags );
	void ( *G_CVAR_UPDATE )( vmCvar_t *vmCvar );
	void ( *G_CVAR_SET )( const char *var_name, const char *value );
	int ( *G_CVAR_VARIABLE_INTEGER_VALUE )( const char *var_name );
	void ( *G_CVAR_VARIABLE_STRING_BUFFER )( const char *var_name, char *buffer, int bufsize );
	int ( *G_ARGC )( void );
	void ( *G_ARGV )( int n, char *buffer, int bufferLength );
	int ( *G_FS_FOPEN_FILE )( const char *qpath, fileHandle_t *file, fsMode_t mode );
	void ( *G_FS_READ )( void *buffer, int len, fileHandle_t f );
	int ( *G_FS_WRITE )( const void *buffer, int len, fileHandle_t f );
	int ( *G_FS_RENAME )( const char *from, const char *to );
	void ( *G_FS_FCLOSE_FILE )( fileHandle_t f );
	void ( *G_SEND_CONSOLE_COMMAND )( int exec_when, const char *text );
	void ( *G_LOCATE_GAME_DATA )( sharedEntity_t *gEnts, int numGEntities, int sizeofGEntity_t, playerState_t *clients, int sizeofGameClient );
	void ( *G_DROP_CLIENT )( int clientNum, const char *reason );
	void ( *G_SEND_SERVER_COMMAND )( int clientNum, const char *text );
	void ( *G_SET_CONFIGSTRING )( int num, const char *string );
	void ( *G_GET_CONFIGSTRING )( int num, char *buffer, int bufferSize );
	void ( *G_GET_USERINFO )( int num, char *buffer, int bufferSize );
	void ( *G_SET_USERINFO )( int num, const char *buffer );
	void ( *G_GET_SERVERINFO )( char *buffer, int bufferSize );
	void ( *G_SET_BRUSH_MODEL )( sharedEntity_t *ent, const char *name );
	void ( *G_TRACE )( trace_t *results, const vec3_t start, const vec3_t mins, const vec3_t maxs, const vec3_t end, int passEntityNum, int contentmask );
	void ( *G_TRACECAPSULE )( trace_t *results, const vec3_t start, const vec3_t mins, const vec3_t maxs, const vec3_t end, int passEntityNum, int contentmask );
	int ( *G_POINT_CONTENTS )( const vec3_t point, int passEntityNum );
	qboolean ( *G_IN_PVS )( const vec3_t p1, const vec3_t p2 );
	qboolean ( *G_IN_PVS_IGNORE_PORTALS )( const vec3_t p1, const vec3_t p2 );
	void ( *G_ADJUST_AREA_PORTAL_STATE )( sharedEntity_t *ent, qboolean open );
	qboolean ( *G_AREAS_CONNECTED )( int area1, int area2 );
	void ( *G_LINKENTITY )( sharedEntity_t *ent );
	void ( *G_UNLINKENTITY )( sharedEntity_t *ent );
	int ( *G_ENTITIES_IN_BOX )( const vec3_t mins, const vec3_t maxs, int *list, int maxcount );
	qboolean ( *G_ENTITY_CONTACT )( const vec3_t mins, const vec3_t maxs, const sharedEntity_t *ent );
	qboolean ( *G_ENTITY_CONTACTCAPSULE )( const vec3_t mins, const vec3_t maxs, const sharedEntity_t *ent );
	int ( *G_BOT_ALLOCATE_CLIENT )( void );
	void ( *G_BOT_FREE_CLIENT )( int clientNum );
	void ( *G_GET_USERCMD )( int clientNum, usercmd_t *cmd );
	qboolean ( *G_GET_ENTITY_TOKEN )( char *buffer, int bufferSize );
	int ( *G_DEBUG_POLYGON_CREATE )( int color, int numPoints, vec3_t *points );
	void ( *G_DEBUG_POLYGON_DELETE )( int id );
	int ( *G_FS_GETFILELIST )( const char *path, const char *extension, char *listbuf, int bufsize );
	int ( *G_REAL_TIME )( qtime_t *qtime );
	void ( *G_SNAPVECTOR )( float *v );
	qboolean ( *G_GETTAG )( int clientNum, char *tagName, orientation_t *or );
	void ( *G_FS_COPY_FILE )( char *from, char *to );
	int ( *BOTLIB_SETUP )( void );
	int ( *BOTLIB_SHUTDOWN )( void );
	int ( *BOTLIB_LIBVAR_SET )( char *var_name, char *value );
	int ( *BOTLIB_LIBVAR_GET )( char *var_name, char *value, int size );
	int ( *BOTLIB_PC_ADD_GLOBAL_DEFINE )( char *string );
	int ( *BOTLIB_PC_LOAD_SOURCE )( const char *filename );
	int ( *BOTLIB_PC_FREE_SOURCE )( int handle );
	int ( *BOTLIB_PC_READ_TOKEN )( int handle, pc_token_t *pc_token );
	int ( *BOTLIB_PC_SOURCE_FILE_AND_LINE )( int handle, char *filename, int *line );
	int ( *BOTLIB_START_FRAME )( float time );
	int ( *BOTLIB_LOAD_MAP )( const char *mapname );
	int ( *BOTLIB_UPDATENTITY )( int ent, struct bot_entitystate_s *bue );
	int ( *BOTLIB_TEST )( int parm0, char *parm1, vec3_t parm2, vec3_t parm3 );
	int ( *BOTLIB_GET_SNAPSHOT_ENTITY )( int clientNum, int sequence );
	int ( *BOTLIB_GET_CONSOLE_MESSAGE )( int clientNum, char *message, int size );
	void ( *BOTLIB_USER_COMMAND )( int clientNum, usercmd_t *ucmd );
	void ( *BOTLIB_AAS_ENTITY_INFO )( int entnum, struct aas_entityinfo_s *info );
	int ( *BOTLIB_AAS_INITIALIZED )( void );
	void ( *BOTLIB_AAS_PRESENCE_TYPE_BOUNDING_BOX )( int presencetype, vec3_t mins, vec3_t maxs );
	float ( *BOTLIB_AAS_TIME )( void );
	void ( *BOTLIB_AAS_SETCURRENTWORLD )( int index );
	int ( *BOTLIB_AAS_POINT_AREA_NUM )( vec3_t point );
	int ( *BOTLIB_AAS_TRACE_AREAS )( vec3_t start, vec3_t end, int *areas, vec3_t *points, int maxareas );
	int ( *BOTLIB_AAS_POINT_CONTENTS )( vec3_t point );
	int ( *BOTLIB_AAS_NEXT_BSP_ENTITY )( int ent );
	int ( *BOTLIB_AAS_VALUE_FOR_BSP_EPAIR_KEY )( int ent, char *key, char *value, int size );
	int ( *BOTLIB_AAS_VECTOR_FOR_BSP_EPAIR_KEY )( int ent, char *key, vec3_t v );
	int ( *BOTLIB_AAS_FLOAT_FOR_BSP_EPAIR_KEY )( int ent, char *key, float *value );
	int ( *BOTLIB_AAS_INT_FOR_BSP_EPAIR_KEY )( int ent, char *key, int *value );
	int ( *BOTLIB_AAS_AREA_REACHABILITY )( int areanum );
	int ( *BOTLIB_AAS_AREA_TRAVEL_TIME_TO_GOAL_AREA )( int areanum, vec3_t origin, int goalareanum, int travelflags );
	int ( *BOTLIB_AAS_SWIMMING )( vec3_t origin );
	int ( *BOTLIB_AAS_PREDICT_CLIENT_MOVEMENT )( struct aas_clientmove_s *move, int entnum, vec3_t origin, int presencetype, int onground, vec3_t velocity, vec3_t cmdmove, int cmdframes, int maxframes, float frametime, int stopevent, int stopareanum, int visualize );
	void ( *BOTLIB_AAS_RT_SHOWROUTE )( vec3_t srcpos, int srcnum, int destnum );
	qboolean ( *BOTLIB_AAS_RT_GETHIDEPOS )( vec3_t srcpos, int srcnum, int srcarea, vec3_t destpos, int destnum, int destarea, vec3_t returnPos );
	int ( *BOTLIB_AAS_FINDATTACKSPOTWITHINRANGE )( int srcnum, int rangenum, int enemynum, float rangedist, int travelflags, float *outpos );
	qboolean ( *BOTLIB_AAS_GETROUTEFIRSTVISPOS )( vec3_t srcpos, vec3_t destpos, int travelflags, vec3_t retpos );
	void ( *BOTLIB_AAS_SETAASBLOCKINGENTITY )( vec3_t absmin, vec3_t absmax, qboolean blocking );
	void ( *BOTLIB_EA_SAY )( int client, char *str );
	void ( *BOTLIB_EA_SAY_TEAM )( int client, char *str );
	void ( *BOTLIB_EA_USE_ITEM )( int client, char *it );
	void ( *BOTLIB_EA_DROP_ITEM )( int client, char *it );
	void ( *BOTLIB_EA_USE_INV )( int client, char *inv );
	void ( *BOTLIB_EA_DROP_INV )( int client, char *inv );
	void ( *BOTLIB_EA_GESTURE )( int client );
	void ( *BOTLIB_EA_COMMAND )( int client, char *command );
	void ( *BOTLIB_EA_SELECT_WEAPON )( int client, int weapon );
	void ( *BOTLIB_EA_TALK )( int client );
	void ( *BOTLIB_EA_ATTACK )( int client );
	void ( *BOTLIB_EA_RELOAD )( int client );
	void ( *BOTLIB_EA_USE )( int client );
	void ( *BOTLIB_EA_RESPAWN )( int client );
	void ( *BOTLIB_EA_JUMP )( int client );
	void ( *BOTLIB_EA_DELAYED_JUMP )( int client );
	void ( *BOTLIB_EA_CROUCH )( int client );
	void ( *BOTLIB_EA_MOVE_UP )( int client );
	void ( *BOTLIB_EA_MOVE_DOWN )( int client );
	void ( *BOTLIB_EA_MOVE_FORWARD )( int client );
	void ( *BOTLIB_EA_MOVE_BACK )( int client );
	void ( *BOTLIB_EA_MOVE_LEFT )( int client );
	void ( *BOTLIB_EA_MOVE_RIGHT )( int client );
	void ( *BOTLIB_EA_MOVE )( int client, vec3_t dir, float speed );
	void ( *BOTLIB_EA_VIEW )( int client, vec3_t viewangles );
	void ( *BOTLIB_EA_END_REGULAR )( int client, float thinktime );
	void ( *BOTLIB_EA_GET_INPUT )( int client, float thinktime, struct bot_input_s *input );
	void ( *BOTLIB_EA_RESET_INPUT )( int client, struct bot_input_s *init );
	int ( *BOTLIB_AI_LOAD_CHARACTER )( char *charfile, int skill );
	void ( *BOTLIB_AI_FREE_CHARACTER )( int character );
	float ( *BOTLIB_AI_CHARACTERISTIC_FLOAT )( int character, int index );
	float ( *BOTLIB_AI_CHARACTERISTIC_BFLOAT )( int character, int index, float min, float max );
	int ( *BOTLIB_AI_CHARACTERISTIC_INTEGER )( int character, int index );
	int ( *BOTLIB_AI_CHARACTERISTIC_BINTEGER )( int character, int index, int min, int max );
	void ( *BOTLIB_AI_CHARACTERISTIC_STRING )( int character, int index, char *buf, int size );
	int ( *BOTLIB_AI_ALLOC_CHAT_STATE )( void );
	void ( *BOTLIB_AI_FREE_CHAT_STATE )( int handle );
	void ( *BOTLIB_AI_QUEUE_CONSOLE_MESSAGE )( int chatstate, int type, char *message );
	void ( *BOTLIB_AI_REMOVE_CONSOLE_MESSAGE )( int chatstate, int handle );
	int ( *BOTLIB_AI_NEXT_CONSOLE_MESSAGE )( int chatstate, struct bot_consolemessage_s *cm );
	int ( *BOTLIB_AI_NUM_CONSOLE_MESSAGE )( int chatstate );
	void ( *BOTLIB_AI_INITIAL_CHAT )( int chatstate, char *type, int mcontext, char *var0, char *var1, char *var2, char *var3, char *var4, char *var5, char *var6, char *var7 );
	int ( *BOTLIB_AI_NUM_INITIAL_CHATS )( int chatstate, char *type );
	int ( *BOTLIB_AI_REPLY_CHAT )( int chatstate, char *message, int mcontext, int vcontext, char *var0, char *var1, char *var2, char *var3, char *var4, char *var5, char *var6, char *var7 );
	int ( *BOTLIB_AI_CHAT_LENGTH )( int chatstate );
	void ( *BOTLIB_AI_ENTER_CHAT )( int chatstate, int client, int sendto );
	void ( *BOTLIB_AI_GET_CHAT_MESSAGE )( int chatstate, char *buf, int size );
	int ( *BOTLIB_AI_STRING_CONTAINS )( char *str1, char *str2, int casesensitive );
	int ( *BOTLIB_AI_FIND_MATCH )( char *str, struct bot_match_s *match, unsigned long int context );
	void ( *BOTLIB_AI_MATCH_VARIABLE )( struct bot_match_s *match, int variable, char *buf, int size );
	void ( *BOTLIB_AI_UNIFY_WHITE_SPACES )( char *string );
	void ( *BOTLIB_AI_REPLACE_SYNONYMS )( char *string, unsigned long int context );
	int ( *BOTLIB_AI_LOAD_CHAT_FILE )( int chatstate, char *chatfile, char *chatname );
	void ( *BOTLIB_AI_SET_CHAT_GENDER )( int chatstate, int gender );
	void ( *BOTLIB_AI_SET_CHAT_NAME )( int chatstate, char *name );
	void ( *BOTLIB_AI_RESET_GOAL_STATE )( int goalstate );
	void ( *BOTLIB_AI_RESET_AVOID_GOALS )( int goalstate );
	void ( *BOTLIB_AI_REMOVE_FROM_AVOID_GOALS )( int goalstate, int number );
	void ( *BOTLIB_AI_PUSH_GOAL )( int goalstate, struct bot_goal_s *goal );
	void ( *BOTLIB_AI_POP_GOAL )( int goalstate );
	void ( *BOTLIB_AI_EMPTY_GOAL_STACK )( int goalstate );
	void ( *BOTLIB_AI_DUMP_AVOID_GOALS )( int goalstate );
	void ( *BOTLIB_AI_DUMP_GOAL_STACK )( int goalstate );
	void ( *BOTLIB_AI_GOAL_NAME )( int number, char *name, int size );
	int ( *BOTLIB_AI_GET_TOP_GOAL )( int goalstate, struct bot_goal_s *goal );
	int ( *BOTLIB_AI_GET_SECOND_GOAL )( int goalstate, struct bot_goal_s *goal );
	int ( *BOTLIB_AI_CHOOSE_LTG_ITEM )( int goalstate, vec3_t origin, int *inventory, int travelflags );
	int ( *BOTLIB_AI_CHOOSE_NBG_ITEM )( int goalstate, vec3_t origin, int *inventory, int travelflags, struct bot_goal_s *ltg, float maxtime );
	int ( *BOTLIB_AI_TOUCHING_GOAL )( vec3_t origin, struct bot_goal_s *goal );
	int ( *BOTLIB_AI_ITEM_GOAL_IN_VIS_BUT_NOT_VISIBLE )( int viewer, vec3_t eye, vec3_t viewangles, struct bot_goal_s *goal );
	int ( *BOTLIB_AI_GET_LEVEL_ITEM_GOAL )( int index, char *classname, struct bot_goal_s *goal );
	int ( *BOTLIB_AI_GET_NEXT_CAMP_SPOT_GOAL )( int num, struct bot_goal_s *goal );
	int ( *BOTLIB_AI_GET_MAP_LOCATION_GOAL )( char *name, struct bot_goal_s *goal );
	float ( *BOTLIB_AI_AVOID_GOAL_TIME )( int goalstate, int number );
	void ( *BOTLIB_AI_INIT_LEVEL_ITEMS )( void );
	void ( *BOTLIB_AI_UPDATE_ENTITY_ITEMS )( void );
	int ( *BOTLIB_AI_LOAD_ITEM_WEIGHTS )( int goalstate, char *filename );
	void ( *BOTLIB_AI_FREE_ITEM_WEIGHTS )( int goalstate );
	void ( *BOTLIB_AI_INTERBREED_GOAL_FUZZY_LOGIC )( int parent1, int parent2, int child );
	void ( *BOTLIB_AI_SAVE_GOAL_FUZZY_LOGIC )( int goalstate, char *filename );
	void ( *BOTLIB_AI_MUTATE_GOAL_FUZZY_LOGIC )( int goalstate, float range );
	int ( *BOTLIB_AI_ALLOC_GOAL_STATE )( int client );
	void ( *BOTLIB_AI_FREE_GOAL_STATE )( int handle );
	void ( *BOTLIB_AI_RESET_MOVE_STATE )( int movestate );
	void ( *BOTLIB_AI_MOVE_TO_GOAL )( struct bot_moveresult_s *result, int movestate, struct bot_goal_s *goal, int travelflags );
	int ( *BOTLIB_AI_MOVE_IN_DIRECTION )( int movestate, vec3_t dir, float speed, int type );
	void ( *BOTLIB_AI_RESET_AVOID_REACH )( int movestate );
	void ( *BOTLIB_AI_RESET_LAST_AVOID_REACH )( int movestate );
	int ( *BOTLIB_AI_REACHABILITY_AREA )( vec3_t origin, int testground );
	int ( *BOTLIB_AI_MOVEMENT_VIEW_TARGET )( int movestate, struct bot_goal_s *goal, int travelflags, float lookahead, vec3_t target );
	int ( *BOTLIB_AI_PREDICT_VISIBLE_POSITION )( vec3_t origin, int areanum, struct bot_goal_s *goal, int travelflags, vec3_t target );
	int ( *BOTLIB_AI_ALLOC_MOVE_STATE )( void );
	void ( *BOTLIB_AI_FREE_MOVE_STATE )( int handle );
	void ( *BOTLIB_AI_INIT_MOVE_STATE )( int handle, struct bot_initmove_s *initmove );
	void ( *BOTLIB_AI_INIT_AVOID_REACH )( int handle );
	int ( *BOTLIB_AI_CHOOSE_BEST_FIGHT_WEAPON )( int weaponstate, int *inventory );
	void ( *BOTLIB_AI_GET_WEAPON_INFO )( int weaponstate, int weapon, struct weaponinfo_s *weaponinfo );
	int ( *BOTLIB_AI_LOAD_WEAPON_WEIGHTS )( int weaponstate, char *filename );
	int ( *BOTLIB_AI_ALLOC_WEAPON_STATE )( void );
	void ( *BOTLIB_AI_FREE_WEAPON_STATE )( int weaponstate );
	void ( *BOTLIB_AI_RESET_WEAPON_STATE )( int weaponstate );
	int ( *BOTLIB_AI_GENETIC_PARENTS_AND_CHILD_SELECTION )( int numranks, float *ranks, int *parent1, int *parent2, int *child );
} gameImport_t;

extern gameImport_t *gameImport;



//
// functions exported by the game subsystem
//
typedef struct {
	int apiVersion;

	void ( *Init )( int levelTime, int randomSeed, int restart );
	void ( *Shutdown )( int restart );

	char *( *ClientConnect )( int clientNum, qboolean firstTime, qboolean isBot );
	void ( *ClientBegin )( int clientNum );
	void ( *ClientUserinfoChanged )( int clientNum );
	void ( *ClientDisconnect )( int clientNum );
	void ( *ClientCommand )( int clientNum );
	void ( *ClientThink )( int clientNum );

	void ( *RunFrame )( int levelTime );
	qboolean ( *ConsoleCommand )( void );

	int ( *BotAIStartFrame )( int time );

	// Ridah, Cast AI
	qboolean ( *AicastVisibleFromPos )( vec3_t srcpos, int srcnum, vec3_t destpos, int destnum, qboolean updateVisPos );
	qboolean ( *AicastCheckAttackAtPos )( int entnum, int enemy, vec3_t pos, qboolean ducking, qboolean allowHitWorld );
	// done.

	void ( *RetrieveMoveSpeedsFromClient )( int entnum, char *text );
	qboolean ( *GetModelInfo )( int clientNum, char *modelName, animModelInfo_t **modelInfo );
} gameExport_t;

gameExport_t *GetGameAPI( int apiVersion, gameImport_t *import );
