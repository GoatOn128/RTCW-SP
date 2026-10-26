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

#ifndef UI_PUBLIC_H
#define UI_PUBLIC_H

#define UI_API_VERSION  4

typedef struct {
	connstate_t connState;
	int connectPacketCount;
	int clientNum;
	char servername[MAX_STRING_CHARS];
	char updateInfoString[MAX_STRING_CHARS];
	char messageString[MAX_STRING_CHARS];
} uiClientState_t;

typedef struct {
	void ( *UI_ERROR )( const char *string );
	void ( *UI_PRINT )( const char *string );
	int ( *UI_MILLISECONDS )( void );
	void ( *UI_CVAR_SET )( const char *var_name, const char *value );
	float ( *UI_CVAR_VARIABLEVALUE )( const char *var_name );
	void ( *UI_CVAR_VARIABLESTRINGBUFFER )( const char *var_name, char *buffer, int bufsize );
	void ( *UI_CVAR_SETVALUE )( const char *var_name, float value );
	void ( *UI_CVAR_RESET )( const char *var_name );
	void ( *UI_CVAR_CREATE )( const char *var_name, const char *var_value, int flags );
	void ( *UI_CVAR_INFOSTRINGBUFFER )( int bit, char *buffer, int bufsize );
	int ( *UI_ARGC )( void );
	void ( *UI_ARGV )( int n, char *buffer, int bufferLength );
	void ( *UI_CMD_EXECUTETEXT )( int exec_when, const char *text );
	int ( *UI_FS_FOPENFILE )( const char *qpath, fileHandle_t *f, fsMode_t mode );
	int ( *UI_FS_READ )( void *buffer, int len, fileHandle_t f );
	int ( *UI_FS_SEEK )( fileHandle_t f, long offset, int origin );
	int ( *UI_FS_WRITE )( const void *buffer, int len, fileHandle_t f );
	void ( *UI_FS_FCLOSEFILE )( fileHandle_t f );
	int ( *UI_FS_GETFILELIST )( const char *path, const char *extension, char *listbuf, int bufsize );
	int ( *UI_FS_DELETEFILE )( const char *filename );
	qhandle_t ( *UI_R_REGISTERMODEL )( const char *name );
	qhandle_t ( *UI_R_REGISTERSKIN )( const char *name );
	qhandle_t ( *UI_R_REGISTERSHADERNOMIP )( const char *name );
	void ( *UI_R_CLEARSCENE )( void );
	void ( *UI_R_ADDREFENTITYTOSCENE )( const refEntity_t *re );
	void ( *UI_R_ADDPOLYTOSCENE )( qhandle_t hShader, int numVerts, const polyVert_t *verts );
	void ( *UI_R_ADDPOLYSTOSCENE )( qhandle_t hShader, int numVerts, const polyVert_t *verts, int numPolys );
	void ( *UI_R_ADDLIGHTTOSCENE )( const vec3_t org, float intensity, float r, float g, float b, int overdraw );
	void ( *UI_R_ADDCORONATOSCENE )( const vec3_t org, float r, float g, float b, float scale, int id, int flags );
	void ( *UI_R_RENDERSCENE )( const refdef_t *fd );
	void ( *UI_R_SETCOLOR )( const float *rgba );
	void ( *UI_R_DRAWSTRETCHPIC )( float x, float y, float w, float h, float s1, float t1, float s2, float t2, qhandle_t hShader );
	void ( *UI_UPDATESCREEN )( void );
	int ( *UI_CM_LERPTAG )( orientation_t *tag, const refEntity_t *refent, const char *tagName, int startIndex );
	sfxHandle_t ( *UI_S_REGISTERSOUND )( const char *sample );
	void ( *UI_S_STARTLOCALSOUND )( sfxHandle_t sfx, int channelNum );
	void ( *UI_S_FADESTREAMINGSOUND )( float targetvol, int time, int num );
	void ( *UI_S_FADEALLSOUNDS )( float targetvol, int time );
	void ( *UI_KEY_KEYNUMTOSTRINGBUF )( int keynum, char *buf, int buflen );
	void ( *UI_KEY_GETBINDINGBUF )( int keynum, char *buf, int buflen );
	void ( *UI_KEY_SETBINDING )( int keynum, const char *binding );
	qboolean ( *UI_KEY_ISDOWN )( int keynum );
	qboolean ( *UI_KEY_GETOVERSTRIKEMODE )( void );
	void ( *UI_KEY_SETOVERSTRIKEMODE )( qboolean state );
	void ( *UI_KEY_CLEARSTATES )( void );
	int ( *UI_KEY_GETCATCHER )( void );
	void ( *UI_KEY_SETCATCHER )( int catcher );
	void ( *UI_GETCLIPBOARDDATA )( char *buf, int bufsize );
	void ( *UI_GETGLCONFIG )( glconfig_t *glconfig );
	void ( *UI_GETCLIENTSTATE )( uiClientState_t *state );
	int ( *UI_GETCONFIGSTRING )( int index, char *buf, int bufsize );
	int ( *UI_LAN_GETLOCALSERVERCOUNT )( void );
	void ( *UI_LAN_GETLOCALSERVERADDRESSSTRING )( int n, char *buf, int buflen );
	int ( *UI_LAN_GETGLOBALSERVERCOUNT )( void );
	void ( *UI_LAN_GETGLOBALSERVERADDRESSSTRING )( int n, char *buf, int buflen );
	int ( *UI_LAN_GETPINGQUEUECOUNT )( void );
	void ( *UI_LAN_CLEARPING )( int n );
	void ( *UI_LAN_GETPING )( int n, char *buf, int buflen, int *pingtime );
	void ( *UI_LAN_GETPINGINFO )( int n, char *buf, int buflen );
	void ( *UI_CVAR_REGISTER )( vmCvar_t *vmCvar, const char *varName, const char *defaultValue, int flags );
	void ( *UI_CVAR_UPDATE )( vmCvar_t *vmCvar );
	int ( *UI_MEMORY_REMAINING )( void );
	void ( *UI_GET_CDKEY )( char *buf, int buflen );
	void ( *UI_SET_CDKEY )( char *buf );
	void ( *UI_R_REGISTERFONT )( const char *fontName, int pointSize, fontInfo_t *font );
	void ( *UI_R_MODELBOUNDS )( clipHandle_t model, vec3_t mins, vec3_t maxs );
	int ( *UI_PC_ADD_GLOBAL_DEFINE )( char *define );
	int ( *UI_PC_LOAD_SOURCE )( const char *filename );
	int ( *UI_PC_FREE_SOURCE )( int handle );
	int ( *UI_PC_READ_TOKEN )( int handle, pc_token_t *pc_token );
	int ( *UI_PC_SOURCE_FILE_AND_LINE )( int handle, char *filename, int *line );
	void ( *UI_S_STOPBACKGROUNDTRACK )( void );
	void ( *UI_S_STARTBACKGROUNDTRACK )( const char *intro, const char *loop, int fadeupTime );
	int ( *UI_REAL_TIME )( qtime_t *qtime );
	int ( *UI_LAN_GETSERVERCOUNT )( int source );
	void ( *UI_LAN_GETSERVERADDRESSSTRING )( int source, int n, char *buf, int buflen );
	void ( *UI_LAN_GETSERVERINFO )( int source, int n, char *buf, int buflen );
	void ( *UI_LAN_MARKSERVERVISIBLE )( int source, int n, qboolean visible );
	qboolean ( *UI_LAN_UPDATEVISIBLEPINGS )( int source );
	void ( *UI_LAN_RESETPINGS )( int n );
	void ( *UI_LAN_LOADCACHEDSERVERS )( void );
	void ( *UI_LAN_SAVECACHEDSERVERS )( void );
	int ( *UI_LAN_ADDSERVER )( int source, const char *name, const char *addr );
	void ( *UI_LAN_REMOVESERVER )( int source, const char *addr );
	int ( *UI_CIN_PLAYCINEMATIC )( const char *arg0, int xpos, int ypos, int width, int height, int bits );
	e_status ( *UI_CIN_STOPCINEMATIC )( int handle );
	e_status ( *UI_CIN_RUNCINEMATIC )( int handle );
	void ( *UI_CIN_DRAWCINEMATIC )( int handle );
	void ( *UI_CIN_SETEXTENTS )( int handle, int x, int y, int w, int h );
	void ( *UI_R_REMAP_SHADER )( const char *oldShader, const char *newShader, const char *timeOffset );
	qboolean ( *UI_VERIFY_CDKEY )( const char *key, const char *chksum );
	int ( *UI_LAN_SERVERSTATUS )( const char *serverAddress, char *serverStatus, int maxLen );
	int ( *UI_LAN_GETSERVERPING )( int source, int n );
	int ( *UI_LAN_SERVERISVISIBLE )( int source, int n );
	int ( *UI_LAN_COMPARESERVERS )( int source, int sortKey, int sortDir, int s1, int s2 );
	qboolean ( *UI_CL_GETLIMBOSTRING )( int index, char *buf );
	void *( *UI_MEMSET )( void *dest, int set, int count );
	void *( *UI_MEMCPY )( void *dest, const void *src, int count );
	char *( *UI_STRNCPY )( char *dest, const char *src, int count );
	float ( *UI_SIN )( float x );
	float ( *UI_COS )( float x );
	float ( *UI_ATAN2 )( float y, float x );
	float ( *UI_SQRT )( float x );
	float ( *UI_FLOOR )( float x );
	float ( *UI_CEIL )( float x );
} uiImport_t;

extern uiImport_t *uiImport;

typedef enum {
	UIMENU_NONE,
	UIMENU_MAIN,
	UIMENU_INGAME,
	UIMENU_NEED_CD,
	UIMENU_ENDGAME, //----(SA)	added
	UIMENU_BAD_CD_KEY,
	UIMENU_TEAM,
	UIMENU_PREGAME, //----(SA)	added
	UIMENU_POSTGAME,
	UIMENU_NOTEBOOK,
	UIMENU_CLIPBOARD,
	UIMENU_HELP,
	UIMENU_BOOK1,           //----(SA)	added
	UIMENU_BOOK2,           //----(SA)	added
	UIMENU_BOOK3,           //----(SA)	added
	UIMENU_WM_PICKTEAM,     // NERVE - SMF - for multiplayer only
	UIMENU_WM_PICKPLAYER,   // NERVE - SMF - for multiplayer only
	UIMENU_WM_QUICKMESSAGE, // NERVE - SMF
	UIMENU_WM_LIMBO,        // NERVE - SMF
	UIMENU_BRIEFING         //----(SA)	added
} uiMenuCommand_t;

#define SORT_HOST           0
#define SORT_MAP            1
#define SORT_CLIENTS        2
#define SORT_GAME           3
#define SORT_PING           4

#define SORT_SAVENAME       0
#define SORT_SAVETIME       1

typedef struct {
	int apiVersion;

	void ( *Init )( qboolean inGameLoad );
	void ( *Shutdown )( void );
	void ( *KeyEvent )( int key, qboolean down );
	void ( *MouseEvent )( int dx, int dy );
	void ( *Refresh )( int time );
	qboolean ( *IsFullscreen )( void );
	void ( *SetActiveMenu )( uiMenuCommand_t menu );
	uiMenuCommand_t ( *GetActiveMenu )( void );
	qboolean ( *ConsoleCommand )( int realTime );
	void ( *DrawConnectScreen )( qboolean overlay );
	qboolean ( *HasUniqueCDKey )( void );
} uiExport_t;

uiExport_t *GetUIAPI( int apiVersion, uiImport_t *import );

#endif
