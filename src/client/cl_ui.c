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


#include "client.h"

#include "../game/botlib.h"

extern botlib_export_t *botlib_export;

uiExport_t *uie = NULL;              // ui module export

extern char cl_cdkey[34];


/*
====================
GetClientState
====================
*/
static void GetClientState( uiClientState_t *state ) {
	state->connectPacketCount = clc.connectPacketCount;
	state->connState = cls.state;
	Q_strncpyz( state->servername, cls.servername, sizeof( state->servername ) );
	Q_strncpyz( state->updateInfoString, cls.updateInfoString, sizeof( state->updateInfoString ) );
	Q_strncpyz( state->messageString, clc.serverMessage, sizeof( state->messageString ) );
	state->clientNum = cl.snap.ps.clientNum;
}

/*
====================
LAN_LoadCachedServers
====================
*/
void LAN_LoadCachedServers() {
	// TTimo: stub, this is only relevant to MP, SP kills the servercache.dat (and favorites)
	// show_bug.cgi?id=445
	/*
	  int size;
	  fileHandle_t fileIn;
	  cls.numglobalservers = cls.nummplayerservers = cls.numfavoriteservers = 0;
	  cls.numGlobalServerAddresses = 0;
	  if (FS_SV_FOpenFileRead("servercache.dat", &fileIn)) {
		  FS_Read(&cls.numglobalservers, sizeof(int), fileIn);
		  FS_Read(&cls.nummplayerservers, sizeof(int), fileIn);
		  FS_Read(&cls.numfavoriteservers, sizeof(int), fileIn);
		  FS_Read(&size, sizeof(int), fileIn);
		  if (size == sizeof(cls.globalServers) + sizeof(cls.favoriteServers) + sizeof(cls.mplayerServers)) {
			  FS_Read(&cls.globalServers, sizeof(cls.globalServers), fileIn);
			  FS_Read(&cls.mplayerServers, sizeof(cls.mplayerServers), fileIn);
			  FS_Read(&cls.favoriteServers, sizeof(cls.favoriteServers), fileIn);
		  } else {
			  cls.numglobalservers = cls.nummplayerservers = cls.numfavoriteservers = 0;
			  cls.numGlobalServerAddresses = 0;
		  }
		  FS_FCloseFile(fileIn);
	  }
	*/
}

/*
====================
LAN_SaveServersToCache
====================
*/
void LAN_SaveServersToCache() {
	// TTimo: stub, this is only relevant to MP, SP kills the servercache.dat (and favorites)
	// show_bug.cgi?id=445
	/*
	  int size;
	  fileHandle_t fileOut;
	#ifdef __MACOS__	//DAJ MacOS file typing
	  {
		  extern _MSL_IMP_EXP_C long _fcreator, _ftype;
		  _ftype = 'WlfB';
		  _fcreator = 'WlfS';
	  }
	#endif
	  fileOut = FS_SV_FOpenFileWrite("servercache.dat");
	  FS_Write(&cls.numglobalservers, sizeof(int), fileOut);
	  FS_Write(&cls.nummplayerservers, sizeof(int), fileOut);
	  FS_Write(&cls.numfavoriteservers, sizeof(int), fileOut);
	  size = sizeof(cls.globalServers) + sizeof(cls.favoriteServers) + sizeof(cls.mplayerServers);
	  FS_Write(&size, sizeof(int), fileOut);
	  FS_Write(&cls.globalServers, sizeof(cls.globalServers), fileOut);
	  FS_Write(&cls.mplayerServers, sizeof(cls.mplayerServers), fileOut);
	  FS_Write(&cls.favoriteServers, sizeof(cls.favoriteServers), fileOut);
	  FS_FCloseFile(fileOut);
	*/
}


/*
====================
LAN_ResetPings
====================
*/
static void LAN_ResetPings( int source ) {
	int count,i;
	serverInfo_t *servers = NULL;
	count = 0;

	switch ( source ) {
	case AS_LOCAL:
		servers = &cls.localServers[0];
		count = MAX_OTHER_SERVERS;
		break;
	case AS_MPLAYER:
		servers = &cls.mplayerServers[0];
		count = MAX_OTHER_SERVERS;
		break;
	case AS_GLOBAL:
		servers = &cls.globalServers[0];
		count = MAX_GLOBAL_SERVERS;
		break;
	case AS_FAVORITES:
		servers = &cls.favoriteServers[0];
		count = MAX_OTHER_SERVERS;
		break;
	}
	if ( servers ) {
		for ( i = 0; i < count; i++ ) {
			servers[i].ping = -1;
		}
	}
}

/*
====================
LAN_AddServer
====================
*/
static int LAN_AddServer( int source, const char *name, const char *address ) {
	int max, *count, i;
	netadr_t adr;
	serverInfo_t *servers = NULL;
	max = MAX_OTHER_SERVERS;
	count = 0;

	switch ( source ) {
	case AS_LOCAL:
		count = &cls.numlocalservers;
		servers = &cls.localServers[0];
		break;
	case AS_MPLAYER:
		count = &cls.nummplayerservers;
		servers = &cls.mplayerServers[0];
		break;
	case AS_GLOBAL:
		max = MAX_GLOBAL_SERVERS;
		count = &cls.numglobalservers;
		servers = &cls.globalServers[0];
		break;
	case AS_FAVORITES:
		count = &cls.numfavoriteservers;
		servers = &cls.favoriteServers[0];
		break;
	}
	if ( servers && *count < max ) {
		NET_StringToAdr( address, &adr );
		for ( i = 0; i < *count; i++ ) {
			if ( NET_CompareAdr( servers[i].adr, adr ) ) {
				break;
			}
		}
		if ( i >= *count ) {
			servers[*count].adr = adr;
			Q_strncpyz( servers[*count].hostName, name, sizeof( servers[*count].hostName ) );
			servers[*count].visible = qtrue;
			( *count )++;
			return 1;
		}
		return 0;
	}
	return -1;
}

/*
====================
LAN_RemoveServer
====================
*/
static void LAN_RemoveServer( int source, const char *addr ) {
	int *count, i;
	serverInfo_t *servers = NULL;
	count = 0;
	switch ( source ) {
	case AS_LOCAL:
		count = &cls.numlocalservers;
		servers = &cls.localServers[0];
		break;
	case AS_MPLAYER:
		count = &cls.nummplayerservers;
		servers = &cls.mplayerServers[0];
		break;
	case AS_GLOBAL:
		count = &cls.numglobalservers;
		servers = &cls.globalServers[0];
		break;
	case AS_FAVORITES:
		count = &cls.numfavoriteservers;
		servers = &cls.favoriteServers[0];
		break;
	}
	if ( servers ) {
		netadr_t comp;
		NET_StringToAdr( addr, &comp );
		for ( i = 0; i < *count; i++ ) {
			if ( NET_CompareAdr( comp, servers[i].adr ) ) {
				int j = i;
				while ( j < *count - 1 ) {
					Com_Memcpy( &servers[j], &servers[j + 1], sizeof( servers[j] ) );
					j++;
				}
				( *count )--;
				break;
			}
		}
	}
}


/*
====================
LAN_GetServerCount
====================
*/
static int LAN_GetServerCount( int source ) {
	switch ( source ) {
	case AS_LOCAL:
		return cls.numlocalservers;
		break;
	case AS_MPLAYER:
		return cls.nummplayerservers;
		break;
	case AS_GLOBAL:
		return cls.numglobalservers;
		break;
	case AS_FAVORITES:
		return cls.numfavoriteservers;
		break;
	}
	return 0;
}

/*
====================
LAN_GetLocalServerAddressString
====================
*/
static void LAN_GetServerAddressString( int source, int n, char *buf, int buflen ) {
	switch ( source ) {
	case AS_LOCAL:
		if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
			Q_strncpyz( buf, NET_AdrToString( cls.localServers[n].adr ), buflen );
			return;
		}
		break;
	case AS_MPLAYER:
		if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
			Q_strncpyz( buf, NET_AdrToString( cls.mplayerServers[n].adr ), buflen );
			return;
		}
		break;
	case AS_GLOBAL:
		if ( n >= 0 && n < MAX_GLOBAL_SERVERS ) {
			Q_strncpyz( buf, NET_AdrToString( cls.globalServers[n].adr ), buflen );
			return;
		}
		break;
	case AS_FAVORITES:
		if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
			Q_strncpyz( buf, NET_AdrToString( cls.favoriteServers[n].adr ), buflen );
			return;
		}
		break;
	}
	buf[0] = '\0';
}

/*
====================
LAN_GetServerInfo
====================
*/
static void LAN_GetServerInfo( int source, int n, char *buf, int buflen ) {
	char info[MAX_STRING_CHARS];
	serverInfo_t *server = NULL;
	info[0] = '\0';
	switch ( source ) {
	case AS_LOCAL:
		if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
			server = &cls.localServers[n];
		}
		break;
	case AS_MPLAYER:
		if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
			server = &cls.mplayerServers[n];
		}
		break;
	case AS_GLOBAL:
		if ( n >= 0 && n < MAX_GLOBAL_SERVERS ) {
			server = &cls.globalServers[n];
		}
		break;
	case AS_FAVORITES:
		if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
			server = &cls.favoriteServers[n];
		}
		break;
	}
	if ( server && buf ) {
		buf[0] = '\0';
		Info_SetValueForKey( info, "hostname", server->hostName );
		Info_SetValueForKey( info, "mapname", server->mapName );
		Info_SetValueForKey( info, "clients", va( "%i",server->clients ) );
		Info_SetValueForKey( info, "sv_maxclients", va( "%i",server->maxClients ) );
		Info_SetValueForKey( info, "ping", va( "%i",server->ping ) );
		Info_SetValueForKey( info, "minping", va( "%i",server->minPing ) );
		Info_SetValueForKey( info, "maxping", va( "%i",server->maxPing ) );
		Info_SetValueForKey( info, "game", server->game );
		Info_SetValueForKey( info, "gametype", va( "%i",server->gameType ) );
		Info_SetValueForKey( info, "nettype", va( "%i",server->netType ) );
		Info_SetValueForKey( info, "addr", NET_AdrToString( server->adr ) );
		Info_SetValueForKey( info, "sv_allowAnonymous", va( "%i", server->allowAnonymous ) );
		Q_strncpyz( buf, info, buflen );
	} else {
		if ( buf ) {
			buf[0] = '\0';
		}
	}
}

/*
====================
LAN_GetServerPing
====================
*/
static int LAN_GetServerPing( int source, int n ) {
	serverInfo_t *server = NULL;
	switch ( source ) {
	case AS_LOCAL:
		if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
			server = &cls.localServers[n];
		}
		break;
	case AS_MPLAYER:
		if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
			server = &cls.mplayerServers[n];
		}
		break;
	case AS_GLOBAL:
		if ( n >= 0 && n < MAX_GLOBAL_SERVERS ) {
			server = &cls.globalServers[n];
		}
		break;
	case AS_FAVORITES:
		if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
			server = &cls.favoriteServers[n];
		}
		break;
	}
	if ( server ) {
		return server->ping;
	}
	return -1;
}

/*
====================
LAN_GetServerPtr
====================
*/
static serverInfo_t *LAN_GetServerPtr( int source, int n ) {
	switch ( source ) {
	case AS_LOCAL:
		if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
			return &cls.localServers[n];
		}
		break;
	case AS_MPLAYER:
		if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
			return &cls.mplayerServers[n];
		}
		break;
	case AS_GLOBAL:
		if ( n >= 0 && n < MAX_GLOBAL_SERVERS ) {
			return &cls.globalServers[n];
		}
		break;
	case AS_FAVORITES:
		if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
			return &cls.favoriteServers[n];
		}
		break;
	}
	return NULL;
}

/*
====================
LAN_CompareServers
====================
*/
static int LAN_CompareServers( int source, int sortKey, int sortDir, int s1, int s2 ) {
	int res;
	serverInfo_t *server1, *server2;

	server1 = LAN_GetServerPtr( source, s1 );
	server2 = LAN_GetServerPtr( source, s2 );
	if ( !server1 || !server2 ) {
		return 0;
	}

	res = 0;
	switch ( sortKey ) {
	case SORT_HOST:
		res = Q_stricmp( server1->hostName, server2->hostName );
		break;

	case SORT_MAP:
		res = Q_stricmp( server1->mapName, server2->mapName );
		break;
	case SORT_CLIENTS:
		if ( server1->clients < server2->clients ) {
			res = -1;
		} else if ( server1->clients > server2->clients ) {
			res = 1;
		} else {
			res = 0;
		}
		break;
	case SORT_GAME:
		if ( server1->gameType < server2->gameType ) {
			res = -1;
		} else if ( server1->gameType > server2->gameType ) {
			res = 1;
		} else {
			res = 0;
		}
		break;
	case SORT_PING:
		if ( server1->ping < server2->ping ) {
			res = -1;
		} else if ( server1->ping > server2->ping ) {
			res = 1;
		} else {
			res = 0;
		}
		break;
	}

	if ( sortDir ) {
		if ( res < 0 ) {
			return 1;
		}
		if ( res > 0 ) {
			return -1;
		}
		return 0;
	}
	return res;
}

/*
====================
LAN_GetPingQueueCount
====================
*/
static int LAN_GetPingQueueCount( void ) {
	return ( CL_GetPingQueueCount() );
}

/*
====================
LAN_ClearPing
====================
*/
static void LAN_ClearPing( int n ) {
	CL_ClearPing( n );
}

/*
====================
LAN_GetPing
====================
*/
static void LAN_GetPing( int n, char *buf, int buflen, int *pingtime ) {
	CL_GetPing( n, buf, buflen, pingtime );
}

/*
====================
LAN_GetPingInfo
====================
*/
static void LAN_GetPingInfo( int n, char *buf, int buflen ) {
	CL_GetPingInfo( n, buf, buflen );
}

/*
====================
LAN_MarkServerVisible
====================
*/
static void LAN_MarkServerVisible( int source, int n, qboolean visible ) {
	if ( n == -1 ) {
		int count = MAX_OTHER_SERVERS;
		serverInfo_t *server = NULL;
		switch ( source ) {
		case AS_LOCAL:
			server = &cls.localServers[0];
			break;
		case AS_MPLAYER:
			server = &cls.mplayerServers[0];
			break;
		case AS_GLOBAL:
			server = &cls.globalServers[0];
			count = MAX_GLOBAL_SERVERS;
			break;
		case AS_FAVORITES:
			server = &cls.favoriteServers[0];
			break;
		}
		if ( server ) {
			for ( n = 0; n < count; n++ ) {
				server[n].visible = visible;
			}
		}

	} else {
		switch ( source ) {
		case AS_LOCAL:
			if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
				cls.localServers[n].visible = visible;
			}
			break;
		case AS_MPLAYER:
			if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
				cls.mplayerServers[n].visible = visible;
			}
			break;
		case AS_GLOBAL:
			if ( n >= 0 && n < MAX_GLOBAL_SERVERS ) {
				cls.globalServers[n].visible = visible;
			}
			break;
		case AS_FAVORITES:
			if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
				cls.favoriteServers[n].visible = visible;
			}
			break;
		}
	}
}


/*
=======================
LAN_ServerIsVisible
=======================
*/
static int LAN_ServerIsVisible( int source, int n ) {
	switch ( source ) {
	case AS_LOCAL:
		if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
			return cls.localServers[n].visible;
		}
		break;
	case AS_MPLAYER:
		if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
			return cls.mplayerServers[n].visible;
		}
		break;
	case AS_GLOBAL:
		if ( n >= 0 && n < MAX_GLOBAL_SERVERS ) {
			return cls.globalServers[n].visible;
		}
		break;
	case AS_FAVORITES:
		if ( n >= 0 && n < MAX_OTHER_SERVERS ) {
			return cls.favoriteServers[n].visible;
		}
		break;
	}
	return qfalse;
}

/*
=======================
LAN_UpdateVisiblePings
=======================
*/
qboolean LAN_UpdateVisiblePings( int source ) {
	return CL_UpdateVisiblePings_f( source );
}

/*
====================
LAN_GetServerStatus
====================
*/
int LAN_GetServerStatus( char *serverAddress, char *serverStatus, int maxLen ) {
	return CL_ServerStatus( serverAddress, serverStatus, maxLen );
}

/*
====================
CL_GetGlConfig
====================
*/
static void CL_GetGlconfig( glconfig_t *config ) {
	*config = cls.glconfig;
}

/*
====================
GetClipboardData
====================
*/
static void GetClipboardData( char *buf, int buflen ) {
	char    *cbd;

	cbd = Sys_GetClipboardData();

	if ( !cbd ) {
		*buf = 0;
		return;
	}

	Q_strncpyz( buf, cbd, buflen );

	Z_Free( cbd );
}

/*
====================
Key_KeynumToStringBuf
====================
*/
static void Key_KeynumToStringBuf( int keynum, char *buf, int buflen ) {
	Q_strncpyz( buf, Key_KeynumToString( keynum, qtrue ), buflen );
}

/*
====================
Key_GetBindingBuf
====================
*/
static void Key_GetBindingBuf( int keynum, char *buf, int buflen ) {
	char    *value;

	value = Key_GetBinding( keynum );
	if ( value ) {
		Q_strncpyz( buf, value, buflen );
	} else {
		*buf = 0;
	}
}

/*
====================
Key_GetCatcher
====================
*/
int Key_GetCatcher( void ) {
	return cls.keyCatchers;
}

/*
====================
Ket_SetCatcher
====================
*/
void Key_SetCatcher( int catcher ) {
	cls.keyCatchers = catcher;
}


/*
====================
CLUI_GetCDKey
====================
*/
static void CLUI_GetCDKey( char *buf, int buflen ) {
	cvar_t  *fs;
	fs = Cvar_Get( "fs_game", "", CVAR_INIT | CVAR_SYSTEMINFO );
	if ( UI_usesUniqueCDKey() && fs && fs->string[0] != 0 ) {
		memcpy( buf, &cl_cdkey[16], 16 );
		buf[16] = 0;
	} else {
		memcpy( buf, cl_cdkey, 16 );
		buf[16] = 0;
	}
}


/*
====================
CLUI_SetCDKey
====================
*/
static void CLUI_SetCDKey( char *buf ) {
	cvar_t  *fs;
	fs = Cvar_Get( "fs_game", "", CVAR_INIT | CVAR_SYSTEMINFO );
	if ( UI_usesUniqueCDKey() && fs && fs->string[0] != 0 ) {
		memcpy( &cl_cdkey[16], buf, 16 );
		cl_cdkey[32] = 0;
		// set the flag so the fle will be written at the next opportunity
		cvar_modifiedFlags |= CVAR_ARCHIVE;
	} else {
		memcpy( cl_cdkey, buf, 16 );
		// set the flag so the fle will be written at the next opportunity
		cvar_modifiedFlags |= CVAR_ARCHIVE;
	}
}


/*
====================
GetConfigString
====================
*/
static int GetConfigString( int index, char *buf, int size ) {
	int offset;

	if ( index < 0 || index >= MAX_CONFIGSTRINGS ) {
		return qfalse;
	}

	offset = cl.gameState.stringOffsets[index];
	if ( !offset ) {
		if ( size ) {
			buf[0] = 0;
		}
		return qfalse;
	}

	Q_strncpyz( buf, cl.gameState.stringData + offset, size );

	return qtrue;
}

// native ui module interface (Doom3 style): the engine loads the
// module with Sys_LoadModule and exchanges structs of function pointers

static uiImport_t cl_uiImport;      // engine functions handed to the ui module
#ifndef UI_HARD_LINKED
static void *ui_library = NULL;    // handle from Sys_LoadModule
#endif

#ifdef UI_HARD_LINKED
// hard-linked build: ui compiles straight into the engine binary,
// so its entry point is a plain extern instead of a module symbol
extern uiExport_t *GetUIAPI( int apiVersion, uiImport_t *import );
#else
typedef uiExport_t *( *GetUIAPI_t )( int apiVersion, uiImport_t *import );
#endif

static void CL_UI_Error( const char *string ) {
	Com_Error( ERR_DROP, "%s", string );
}

static void CL_UI_Print( const char *string ) {
	Com_Printf( "%s", string );
}

static void CL_UI_CvarCreate( const char *var_name, const char *var_value, int flags ) {
	Cvar_Get( var_name, var_value, flags );
}

static sfxHandle_t CL_UI_RegisterSound( const char *sample ) {
#ifdef DOOMSOUND    ///// (SA) DOOMSOUND
	return S_RegisterSound( sample );
#else
	return S_RegisterSound( sample, qfalse );
#endif  ///// (SA) DOOMSOUND
}

static int CL_UI_FS_Delete( const char *filename ) {
	return FS_Delete( (char *)filename );
}

static int CL_UI_LAN_GetLocalServerCount( void ) {
	return LAN_GetServerCount( AS_LOCAL );
}

static void CL_UI_LAN_GetLocalServerAddressString( int n, char *buf, int buflen ) {
	LAN_GetServerAddressString( AS_LOCAL, n, buf, buflen );
}

static int CL_UI_LAN_GetGlobalServerCount( void ) {
	return LAN_GetServerCount( AS_GLOBAL );
}

static void CL_UI_LAN_GetGlobalServerAddressString( int n, char *buf, int buflen ) {
	LAN_GetServerAddressString( AS_GLOBAL, n, buf, buflen );
}

static int CL_UI_LAN_ServerStatus( const char *serverAddress, char *serverStatus, int maxLen ) {
	return LAN_GetServerStatus( (char *)serverAddress, serverStatus, maxLen );
}

static void *CL_UI_Memset( void *dest, int set, int count ) {
	return memset( dest, set, count );
}

static void *CL_UI_Memcpy( void *dest, const void *src, int count ) {
	return memcpy( dest, src, count );
}

static char *CL_UI_Strncpy( char *dest, const char *src, int count ) {
	return strncpy( dest, src, count );
}

static float CL_UI_Sin( float x ) { return sin( x ); }
static float CL_UI_Cos( float x ) { return cos( x ); }
static float CL_UI_Atan2( float y, float x ) { return atan2( y, x ); }
static float CL_UI_Sqrt( float x ) { return sqrt( x ); }
static float CL_UI_Floor( float x ) { return floor( x ); }
static float CL_UI_Ceil( float x ) { return ceil( x ); }

/*
================
CL_FillUIImport

Fills the struct of engine functions handed to the ui module
================
*/
static void CL_FillUIImport( uiImport_t *import ) {
	import->UI_ERROR = CL_UI_Error;
	import->UI_PRINT = CL_UI_Print;
	import->UI_MILLISECONDS = Sys_Milliseconds;
	import->UI_CVAR_SET = Cvar_Set;
	import->UI_CVAR_VARIABLEVALUE = Cvar_VariableValue;
	import->UI_CVAR_VARIABLESTRINGBUFFER = Cvar_VariableStringBuffer;
	import->UI_CVAR_SETVALUE = Cvar_SetValue;
	import->UI_CVAR_RESET = Cvar_Reset;
	import->UI_CVAR_CREATE = CL_UI_CvarCreate;
	import->UI_CVAR_INFOSTRINGBUFFER = Cvar_InfoStringBuffer;
	import->UI_ARGC = Cmd_Argc;
	import->UI_ARGV = Cmd_ArgvBuffer;
	import->UI_CMD_EXECUTETEXT = Cbuf_ExecuteText;
	import->UI_FS_FOPENFILE = FS_FOpenFileByMode;
	import->UI_FS_READ = FS_Read;
	import->UI_FS_SEEK = FS_Seek;
	import->UI_FS_WRITE = FS_Write;
	import->UI_FS_FCLOSEFILE = FS_FCloseFile;
	import->UI_FS_GETFILELIST = FS_GetFileList;
	import->UI_FS_DELETEFILE = CL_UI_FS_Delete;
	import->UI_R_REGISTERMODEL = re.RegisterModel;
	import->UI_R_REGISTERSKIN = re.RegisterSkin;
	import->UI_R_REGISTERSHADERNOMIP = re.RegisterShaderNoMip;
	import->UI_R_CLEARSCENE = re.ClearScene;
	import->UI_R_ADDREFENTITYTOSCENE = re.AddRefEntityToScene;
	import->UI_R_ADDPOLYTOSCENE = re.AddPolyToScene;
	import->UI_R_ADDPOLYSTOSCENE = re.AddPolysToScene;
	import->UI_R_ADDLIGHTTOSCENE = re.AddLightToScene;
	import->UI_R_ADDCORONATOSCENE = re.AddCoronaToScene;
	import->UI_R_RENDERSCENE = re.RenderScene;
	import->UI_R_SETCOLOR = re.SetColor;
	import->UI_R_DRAWSTRETCHPIC = re.DrawStretchPic;
	import->UI_UPDATESCREEN = SCR_UpdateScreen;
	import->UI_CM_LERPTAG = re.LerpTag;
	import->UI_S_REGISTERSOUND = CL_UI_RegisterSound;
	import->UI_S_STARTLOCALSOUND = S_StartLocalSound;
	import->UI_S_FADESTREAMINGSOUND = S_FadeStreamingSound;
	import->UI_S_FADEALLSOUNDS = S_FadeAllSounds;
	import->UI_KEY_KEYNUMTOSTRINGBUF = Key_KeynumToStringBuf;
	import->UI_KEY_GETBINDINGBUF = Key_GetBindingBuf;
	import->UI_KEY_SETBINDING = Key_SetBinding;
	import->UI_KEY_ISDOWN = Key_IsDown;
	import->UI_KEY_GETOVERSTRIKEMODE = Key_GetOverstrikeMode;
	import->UI_KEY_SETOVERSTRIKEMODE = Key_SetOverstrikeMode;
	import->UI_KEY_CLEARSTATES = Key_ClearStates;
	import->UI_KEY_GETCATCHER = Key_GetCatcher;
	import->UI_KEY_SETCATCHER = Key_SetCatcher;
	import->UI_GETCLIPBOARDDATA = GetClipboardData;
	import->UI_GETGLCONFIG = CL_GetGlconfig;
	import->UI_GETCLIENTSTATE = GetClientState;
	import->UI_GETCONFIGSTRING = GetConfigString;
	import->UI_LAN_GETLOCALSERVERCOUNT = CL_UI_LAN_GetLocalServerCount;
	import->UI_LAN_GETLOCALSERVERADDRESSSTRING = CL_UI_LAN_GetLocalServerAddressString;
	import->UI_LAN_GETGLOBALSERVERCOUNT = CL_UI_LAN_GetGlobalServerCount;
	import->UI_LAN_GETGLOBALSERVERADDRESSSTRING = CL_UI_LAN_GetGlobalServerAddressString;
	import->UI_LAN_GETPINGQUEUECOUNT = LAN_GetPingQueueCount;
	import->UI_LAN_CLEARPING = LAN_ClearPing;
	import->UI_LAN_GETPING = LAN_GetPing;
	import->UI_LAN_GETPINGINFO = LAN_GetPingInfo;
	import->UI_CVAR_REGISTER = Cvar_Register;
	import->UI_CVAR_UPDATE = Cvar_Update;
	import->UI_MEMORY_REMAINING = Hunk_MemoryRemaining;
	import->UI_GET_CDKEY = CLUI_GetCDKey;
	import->UI_SET_CDKEY = CLUI_SetCDKey;
	import->UI_R_REGISTERFONT = re.RegisterFont;
	import->UI_R_MODELBOUNDS = re.ModelBounds;
	import->UI_PC_ADD_GLOBAL_DEFINE = botlib_export->PC_AddGlobalDefine;
	import->UI_PC_LOAD_SOURCE = botlib_export->PC_LoadSourceHandle;
	import->UI_PC_FREE_SOURCE = botlib_export->PC_FreeSourceHandle;
	import->UI_PC_READ_TOKEN = botlib_export->PC_ReadTokenHandle;
	import->UI_PC_SOURCE_FILE_AND_LINE = botlib_export->PC_SourceFileAndLine;
	import->UI_S_STOPBACKGROUNDTRACK = S_StopBackgroundTrack;
	import->UI_S_STARTBACKGROUNDTRACK = S_StartBackgroundTrack;
	import->UI_REAL_TIME = Com_RealTime;
	import->UI_LAN_GETSERVERCOUNT = LAN_GetServerCount;
	import->UI_LAN_GETSERVERADDRESSSTRING = LAN_GetServerAddressString;
	import->UI_LAN_GETSERVERINFO = LAN_GetServerInfo;
	import->UI_LAN_MARKSERVERVISIBLE = LAN_MarkServerVisible;
	import->UI_LAN_UPDATEVISIBLEPINGS = LAN_UpdateVisiblePings;
	import->UI_LAN_RESETPINGS = LAN_ResetPings;
	import->UI_LAN_LOADCACHEDSERVERS = LAN_LoadCachedServers;
	import->UI_LAN_SAVECACHEDSERVERS = LAN_SaveServersToCache;
	import->UI_LAN_ADDSERVER = LAN_AddServer;
	import->UI_LAN_REMOVESERVER = LAN_RemoveServer;
	import->UI_CIN_PLAYCINEMATIC = CIN_PlayCinematic;
	import->UI_CIN_STOPCINEMATIC = CIN_StopCinematic;
	import->UI_CIN_RUNCINEMATIC = CIN_RunCinematic;
	import->UI_CIN_DRAWCINEMATIC = CIN_DrawCinematic;
	import->UI_CIN_SETEXTENTS = CIN_SetExtents;
	import->UI_R_REMAP_SHADER = re.RemapShader;
	import->UI_VERIFY_CDKEY = CL_CDKeyValidate;
	import->UI_LAN_SERVERSTATUS = CL_UI_LAN_ServerStatus;
	import->UI_LAN_GETSERVERPING = LAN_GetServerPing;
	import->UI_LAN_SERVERISVISIBLE = LAN_ServerIsVisible;
	import->UI_LAN_COMPARESERVERS = LAN_CompareServers;
	import->UI_CL_GETLIMBOSTRING = CL_GetLimboString;
	import->UI_MEMSET = CL_UI_Memset;
	import->UI_MEMCPY = CL_UI_Memcpy;
	import->UI_STRNCPY = CL_UI_Strncpy;
	import->UI_SIN = CL_UI_Sin;
	import->UI_COS = CL_UI_Cos;
	import->UI_ATAN2 = CL_UI_Atan2;
	import->UI_SQRT = CL_UI_Sqrt;
	import->UI_FLOOR = CL_UI_Floor;
	import->UI_CEIL = CL_UI_Ceil;
}

/*
====================
CL_ShutdownUI
====================
*/
void CL_ShutdownUI( void ) {
	cls.keyCatchers &= ~KEYCATCH_UI;
	cls.uiStarted = qfalse;
	if ( !uie ) {
		return;
	}
	uie->Shutdown();
#ifndef UI_HARD_LINKED
	Sys_UnloadModule( ui_library );
	ui_library = NULL;
#endif
	uie = NULL;
}

/*
====================
CL_InitUI
====================
*/

void CL_InitUI( void ) {
#ifndef UI_HARD_LINKED
	GetUIAPI_t GetUIAPI;
#endif

	// exchange function pointer structs with the native ui module
	CL_FillUIImport( &cl_uiImport );

#ifdef UI_HARD_LINKED
	uie = GetUIAPI( UI_API_VERSION, &cl_uiImport );
	if ( !uie || uie->apiVersion != UI_API_VERSION ) {
		uie = NULL;
		Com_Error( ERR_FATAL, "GetUIAPI on ui failed" );
	}
#else
	ui_library = Sys_LoadModule( "ui" );
	if ( !ui_library ) {
		Com_Error( ERR_FATAL, "Sys_LoadModule on ui failed" );
	}

	GetUIAPI = ( GetUIAPI_t ) Sys_ModuleAddress( ui_library, "GetUIAPI" );
	if ( !GetUIAPI ) {
		Sys_UnloadModule( ui_library );
		ui_library = NULL;
		Com_Error( ERR_FATAL, "GetUIAPI not found in ui" );
	}

	uie = GetUIAPI( UI_API_VERSION, &cl_uiImport );
	if ( !uie || uie->apiVersion != UI_API_VERSION ) {
		Sys_UnloadModule( ui_library );
		ui_library = NULL;
		uie = NULL;
		Com_Error( ERR_FATAL, "GetUIAPI on ui failed" );
	}
#endif

	// init for this gamestate
	uie->Init( ( cls.state >= CA_AUTHORIZING && cls.state < CA_ACTIVE ) );
}


qboolean UI_usesUniqueCDKey() {
	if ( uie ) {
		return uie->HasUniqueCDKey();
	} else {
		return qfalse;
	}
}

/*
====================
UI_GameCommand

See if the current console command is claimed by the ui
====================
*/
qboolean UI_GameCommand( void ) {
	if ( !uie ) {
		return qfalse;
	}

	return uie->ConsoleCommand( cls.realtime );
}
