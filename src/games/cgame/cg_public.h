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



#define CMD_BACKUP          64
#define CMD_MASK            ( CMD_BACKUP - 1 )
// allow a lot of command backups for very fast systems
// multiple commands may be combined into a single packet, so this
// needs to be larger than PACKET_BACKUP


#define MAX_ENTITIES_IN_SNAPSHOT    256

// snapshots are a view of the server at a given time

// Snapshots are generated at regular time intervals by the server,
// but they may not be sent if a client's rate level is exceeded, or
// they may be dropped by the network.
typedef struct {
	int snapFlags;                      // SNAPFLAG_RATE_DELAYED, etc
	int ping;

	int serverTime;                 // server time the message is valid for (in msec)

	byte areamask[MAX_MAP_AREA_BYTES];                  // portalarea visibility bits

	playerState_t ps;                       // complete information about the current player at this time

	int numEntities;                        // all of the entities that need to be presented
	entityState_t entities[MAX_ENTITIES_IN_SNAPSHOT];   // at the time of this snapshot

	int numServerCommands;                  // text based server commands to execute when this
	int serverCommandSequence;              // snapshot becomes current
} snapshot_t;

enum {
	CGAME_EVENT_NONE,
	CGAME_EVENT_TEAMMENU,
	CGAME_EVENT_SCOREBOARD,
	CGAME_EVENT_EDITHUD
};


/*
==================================================================

functions imported from the main executable

==================================================================
*/

#define CGAME_IMPORT_API_VERSION    3

typedef struct {
	void ( *CG_PRINT )( const char *string );
	void ( *CG_ERROR )( const char *string );
	int ( *CG_MILLISECONDS )( void );
	void ( *CG_CVAR_REGISTER )( vmCvar_t *vmCvar, const char *varName, const char *defaultValue, int flags );
	void ( *CG_CVAR_UPDATE )( vmCvar_t *vmCvar );
	void ( *CG_CVAR_SET )( const char *var_name, const char *value );
	void ( *CG_CVAR_VARIABLESTRINGBUFFER )( const char *var_name, char *buffer, int bufsize );
	int ( *CG_ARGC )( void );
	void ( *CG_ARGV )( int n, char *buffer, int bufferLength );
	void ( *CG_ARGS )( char *buffer, int bufferLength );
	int ( *CG_FS_FOPENFILE )( const char *qpath, fileHandle_t *f, fsMode_t mode );
	void ( *CG_FS_READ )( void *buffer, int len, fileHandle_t f );
	int ( *CG_FS_WRITE )( const void *buffer, int len, fileHandle_t f );
	void ( *CG_FS_FCLOSEFILE )( fileHandle_t f );
	void ( *CG_SENDCONSOLECOMMAND )( const char *text );
	void ( *CG_ADDCOMMAND )( const char *cmdName );
	void ( *CG_REMOVECOMMAND )( const char *cmdName );
	void ( *CG_SENDCLIENTCOMMAND )( const char *s );
	void ( *CG_UPDATESCREEN )( void );
	void ( *CG_CM_LOADMAP )( const char *mapname );
	int ( *CG_CM_NUMINLINEMODELS )( void );
	clipHandle_t ( *CG_CM_INLINEMODEL )( int index );
	clipHandle_t ( *CG_CM_TEMPBOXMODEL )( const vec3_t mins, const vec3_t maxs );
	clipHandle_t ( *CG_CM_TEMPCAPSULEMODEL )( const vec3_t mins, const vec3_t maxs );
	int ( *CG_CM_POINTCONTENTS )( const vec3_t p, clipHandle_t model );
	int ( *CG_CM_TRANSFORMEDPOINTCONTENTS )( const vec3_t p, clipHandle_t model, const vec3_t origin, const vec3_t angles );
	void ( *CG_CM_BOXTRACE )( trace_t *results, const vec3_t start, const vec3_t end, const vec3_t mins, const vec3_t maxs, clipHandle_t model, int brushmask );
	void ( *CG_CM_TRANSFORMEDBOXTRACE )( trace_t *results, const vec3_t start, const vec3_t end, const vec3_t mins, const vec3_t maxs, clipHandle_t model, int brushmask, const vec3_t origin, const vec3_t angles );
	void ( *CG_CM_CAPSULETRACE )( trace_t *results, const vec3_t start, const vec3_t end, const vec3_t mins, const vec3_t maxs, clipHandle_t model, int brushmask );
	void ( *CG_CM_TRANSFORMEDCAPSULETRACE )( trace_t *results, const vec3_t start, const vec3_t end, const vec3_t mins, const vec3_t maxs, clipHandle_t model, int brushmask, const vec3_t origin, const vec3_t angles );
	int ( *CG_CM_MARKFRAGMENTS )( int numPoints, const vec3_t *points, const vec3_t projection, int maxPoints, vec3_t pointBuffer, int maxFragments, markFragment_t *fragmentBuffer );
	void ( *CG_S_STARTSOUND )( vec3_t origin, int entityNum, int entchannel, sfxHandle_t sfx );
	void ( *CG_S_STARTSOUNDEX )( vec3_t origin, int entityNum, int entchannel, sfxHandle_t sfx, int flags );
	void ( *CG_S_STARTLOCALSOUND )( sfxHandle_t sfx, int channelNum );
	void ( *CG_S_CLEARLOOPINGSOUNDS )( qboolean killall );
	void ( *CG_S_ADDLOOPINGSOUND )( int entityNum, const vec3_t origin, const vec3_t velocity, int range, sfxHandle_t sfx, int volume );
	void ( *CG_S_STOPSTREAMINGSOUND )( int entityNum );
	void ( *CG_S_STOPLOOPINGSOUND )( int entityNum );
	void ( *CG_S_UPDATEENTITYPOSITION )( int entityNum, const vec3_t origin );
	int ( *CG_S_GETVOICEAMPLITUDE )( int entityNum );
	void ( *CG_S_RESPATIALIZE )( int entityNum, const vec3_t origin, vec3_t axis[3], int inwater );
	sfxHandle_t ( *CG_S_REGISTERSOUND )( const char *sample );
	void ( *CG_S_STARTBACKGROUNDTRACK )( const char *intro, const char *loop, int fadeupTime );
	void ( *CG_S_FADESTREAMINGSOUND )( float targetvol, int time, int num );
	void ( *CG_S_FADEALLSOUNDS )( float targetvol, int time );
	void ( *CG_S_STARTSTREAMINGSOUND )( const char *intro, const char *loop, int entnum, int channel, int attenuation );
	void ( *CG_S_STOPBACKGROUNDTRACK )( void );
	void ( *CG_R_LOADWORLDMAP )( const char *mapname );
	qhandle_t ( *CG_R_REGISTERMODEL )( const char *name );
	qhandle_t ( *CG_R_REGISTERSKIN )( const char *name );
	qhandle_t ( *CG_R_REGISTERSHADER )( const char *name );
	qhandle_t ( *CG_R_REGISTERSHADERNOMIP )( const char *name );
	qboolean ( *CG_R_GETSKINMODEL )( qhandle_t skinid, const char *type, char *name );
	qhandle_t ( *CG_R_GETMODELSHADER )( qhandle_t modelid, int surfnum, int withlightmap );
	void ( *CG_R_REGISTERFONT )( const char *fontName, int pointSize, fontInfo_t *font );
	void ( *CG_R_CLEARSCENE )( void );
	void ( *CG_R_ADDREFENTITYTOSCENE )( const refEntity_t *ent );
	void ( *CG_R_ADDPOLYTOSCENE )( qhandle_t hShader, int numVerts, const polyVert_t *verts );
	void ( *CG_R_ADDPOLYSTOSCENE )( qhandle_t hShader, int numVerts, const polyVert_t *verts, int numPolys );
	void ( *CG_RB_ZOMBIEFXADDNEWHIT )( int entityNum, const vec3_t hitPos, const vec3_t hitDir );
	void ( *CG_R_ADDLIGHTTOSCENE )( const vec3_t org, float intensity, float r, float g, float b, int overdraw );
	void ( *CG_R_ADDCORONATOSCENE )( const vec3_t org, float r, float g, float b, float scale, int id, int flags );
	void ( *CG_R_SETFOG )( int fogvar, int var1, int var2, float r, float g, float b, float density );
	void ( *CG_R_RENDERSCENE )( const refdef_t *fd );
	void ( *CG_R_SETCOLOR )( const float *rgba );
	void ( *CG_R_DRAWSTRETCHPIC )( float x, float y, float w, float h, float s1, float t1, float s2, float t2, qhandle_t hShader );
	void ( *CG_R_DRAWSTRETCHPIC_GRADIENT )( float x, float y, float w, float h, float s1, float t1, float s2, float t2, qhandle_t hShader, const float *gradientColor, int gradientType );
	void ( *CG_R_MODELBOUNDS )( clipHandle_t model, vec3_t mins, vec3_t maxs );
	int ( *CG_R_LERPTAG )( orientation_t *tag, const refEntity_t *refent, const char *tagName, int startIndex );
	void ( *CG_R_REMAP_SHADER )( const char *oldShader, const char *newShader, const char *timeOffset );
	void ( *CG_GETGLCONFIG )( glconfig_t *glconfig );
	void ( *CG_GETGAMESTATE )( gameState_t *gamestate );
	void ( *CG_GETCURRENTSNAPSHOTNUMBER )( int *snapshotNumber, int *serverTime );
	qboolean ( *CG_GETSNAPSHOT )( int snapshotNumber, snapshot_t *snapshot );
	qboolean ( *CG_GETSERVERCOMMAND )( int serverCommandNumber );
	int ( *CG_GETCURRENTCMDNUMBER )( void );
	qboolean ( *CG_GETUSERCMD )( int cmdNumber, usercmd_t *ucmd );
	void ( *CG_SETUSERCMDVALUE )( int stateValue, int holdableValue, float sensitivityScale, int cld );
	int ( *CG_MEMORY_REMAINING )( void );
	qboolean ( *CG_KEY_ISDOWN )( int keynum );
	int ( *CG_KEY_GETCATCHER )( void );
	void ( *CG_KEY_SETCATCHER )( int catcher );
	int ( *CG_KEY_GETKEY )( const char *binding );
	void *( *CG_MEMSET )( void *dest, int set, int count );
	void *( *CG_MEMCPY )( void *dest, const void *src, int count );
	char *( *CG_STRNCPY )( char *dest, const char *src, int count );
	float ( *CG_SIN )( float x );
	float ( *CG_COS )( float x );
	float ( *CG_ATAN2 )( float y, float x );
	float ( *CG_SQRT )( float x );
	float ( *CG_FLOOR )( float x );
	float ( *CG_CEIL )( float x );
	float ( *CG_ACOS )( float x );
	int ( *CG_PC_ADD_GLOBAL_DEFINE )( char *define );
	int ( *CG_PC_LOAD_SOURCE )( const char *filename );
	int ( *CG_PC_FREE_SOURCE )( int handle );
	int ( *CG_PC_READ_TOKEN )( int handle, pc_token_t *pc_token );
	int ( *CG_PC_SOURCE_FILE_AND_LINE )( int handle, char *filename, int *line );
	int ( *CG_REAL_TIME )( qtime_t *qtime );
	void ( *CG_SNAPVECTOR )( float *v );
	void ( *CG_SENDMOVESPEEDSTOGAME )( int entnum, char *movespeeds );
	int ( *CG_CIN_PLAYCINEMATIC )( const char *arg0, int xpos, int ypos, int width, int height, int bits );
	e_status ( *CG_CIN_STOPCINEMATIC )( int handle );
	e_status ( *CG_CIN_RUNCINEMATIC )( int handle );
	void ( *CG_CIN_DRAWCINEMATIC )( int handle );
	void ( *CG_CIN_SETEXTENTS )( int handle, int x, int y, int w, int h );
	void ( *CG_TESTPRINTINT )( char *string, int i );
	void ( *CG_TESTPRINTFLOAT )( char *string, float f );
	qboolean ( *CG_LOADCAMERA )( int camNum, const char *name );
	void ( *CG_STARTCAMERA )( int camNum, int time );
	void ( *CG_STOPCAMERA )( int camNum );
	qboolean ( *CG_GETCAMERAINFO )( int camNum, int time, vec3_t *origin, vec3_t *angles, float *fov );
	qboolean ( *CG_GET_ENTITY_TOKEN )( char *buffer, int bufferSize );
	void ( *CG_INGAME_POPUP )( const char *name );
	void ( *CG_INGAME_CLOSEPOPUP )( const char *name );
	void ( *CG_LIMBOCHAT )( const char *text );
	qboolean ( *CG_GETMODELINFO )( int clientNum, char *modelName, animModelInfo_t **modelInfo );
} cgameImport_t;

extern cgameImport_t *cgameImport;



/*
==================================================================

functions exported to the main executable

==================================================================
*/

typedef struct {
	int apiVersion;

	void ( *Init )( int serverMessageNum, int serverCommandSequence );
	void ( *Shutdown )( void );
	qboolean ( *ConsoleCommand )( void );
	void ( *DrawActiveFrame )( int serverTime, stereoFrame_t stereoView, qboolean demoPlayback );
	int ( *CrosshairPlayer )( void );
	int ( *LastAttacker )( void );
	void ( *KeyEvent )( int key, qboolean down );
	void ( *MouseEvent )( int dx, int dy );
	void ( *EventHandling )( int type );
	qboolean ( *GetTag )( int clientNum, char *tagname, orientation_t *or );
} cgameExport_t;

//----------------------------------------------

cgameExport_t *GetCgameAPI( int apiVersion, cgameImport_t *import );
