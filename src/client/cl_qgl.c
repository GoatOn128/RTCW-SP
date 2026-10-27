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

In addition, the RTCW SP Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the RTCW SP Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you should contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

// cl_qgl.c -- engine side support for the renderer module. It owns the
// video mode table used by the platform GL layer, and the engine side
// copies of the video cvars the platform layer and the hard-linked
// renderer read.

#include "client.h"
#include "../renderer/tr_local.h"


cvar_t  *r_mode;
cvar_t  *r_fullscreen;
cvar_t  *r_ext_compressed_textures;
cvar_t  *r_ext_gamma_control;
cvar_t  *r_ext_texture_filter_anisotropic;
cvar_t  *r_colorbits;
cvar_t  *r_stereo;
cvar_t  *r_stencilbits;
cvar_t  *r_depthbits;
cvar_t  *r_ignorehwgamma;
cvar_t  *r_displayRefresh;
cvar_t  *r_swapInterval;
cvar_t  *r_verbose;
cvar_t  *r_logFile;
cvar_t  *r_drawBuffer;

// the engine creates the video cvars before the renderer module and the
// platform GL layer run; the renderer gets the same cvar objects back
// through Cvar_Get
void CL_RegisterVideoCvars( void ) {
	r_ext_compressed_textures = Cvar_Get( "r_ext_compressed_textures", "1", CVAR_ARCHIVE | CVAR_LATCH );
	r_ext_gamma_control = Cvar_Get( "r_ext_gamma_control", "1", CVAR_ARCHIVE | CVAR_LATCH );
	r_ext_texture_filter_anisotropic = Cvar_Get( "r_ext_texture_filter_anisotropic", "0", CVAR_ARCHIVE );
	r_colorbits = Cvar_Get( "r_colorbits", "0", CVAR_ARCHIVE | CVAR_LATCH );
	r_stereo = Cvar_Get( "r_stereo", "0", CVAR_ARCHIVE | CVAR_LATCH );
	r_stencilbits = Cvar_Get( "r_stencilbits", "0", CVAR_ARCHIVE | CVAR_LATCH );
	r_depthbits = Cvar_Get( "r_depthbits", "0", CVAR_ARCHIVE | CVAR_LATCH );
	r_ignorehwgamma = Cvar_Get( "r_ignorehwgamma", "1", CVAR_ARCHIVE | CVAR_LATCH );
	r_mode = Cvar_Get( "r_mode", "-2", CVAR_ARCHIVE | CVAR_LATCH );
	r_fullscreen = Cvar_Get( "r_fullscreen", "1", CVAR_ARCHIVE | CVAR_LATCH );
	r_displayRefresh = Cvar_Get( "r_displayRefresh", "0", CVAR_LATCH );
	r_swapInterval = Cvar_Get( "r_swapInterval", "0", CVAR_ARCHIVE );
	r_verbose = Cvar_Get( "r_verbose", "0", CVAR_CHEAT );
	r_logFile = Cvar_Get( "r_logFile", "0", CVAR_CHEAT );
	r_drawBuffer = Cvar_Get( "r_drawBuffer", "GL_BACK", CVAR_CHEAT );
}

/*
** R_GetModeInfo

The BFG edition video mode system: the platform GL layer enumerates
the modes the display reports into this table at startup, so r_mode
values from 0 up index what the hardware actually supports. r_mode -2
uses the current desktop resolution and r_mode -1 the r_customwidth,
r_customheight cvars.
*/
#define MAX_VID_MODES 128

typedef struct vidmode_s
{
	int width, height;
} vidmode_t;

static vidmode_t r_vidModes[MAX_VID_MODES];
static int s_numVidModes = 0;

// the desktop resolution the platform layer reports for r_mode -2
static int r_desktopWidth = 0;
static int r_desktopHeight = 0;

void R_SetDesktopResolution( int width, int height ) {
	r_desktopWidth = width;
	r_desktopHeight = height;
}

// add a mode to the list, skipping sizes that are already in it
void R_AddVideoMode( int width, int height ) {
	int i;

	if ( s_numVidModes >= MAX_VID_MODES ) {
		return;
	}
	for ( i = 0; i < s_numVidModes; i++ ) {
		if ( r_vidModes[i].width == width && r_vidModes[i].height == height ) {
			return;
		}
	}

	r_vidModes[s_numVidModes].width = width;
	r_vidModes[s_numVidModes].height = height;
	s_numVidModes++;
}

qboolean R_GetModeInfo( int *width, int *height, float *windowAspect, int mode ) {
	if ( mode == -2 ) {
		// desktop resolution
		if ( r_desktopWidth <= 0 || r_desktopHeight <= 0 ) {
			return qfalse;
		}
		*width = r_desktopWidth;
		*height = r_desktopHeight;
	} else if ( mode == -1 ) {
		// custom resolution through the cvars
		*width = Cvar_VariableIntegerValue( "r_customwidth" );
		*height = Cvar_VariableIntegerValue( "r_customheight" );
		if ( *width <= 0 || *height <= 0 ) {
			return qfalse;
		}
	} else
	{
		if ( mode < 0 || mode >= s_numVidModes ) {
			return qfalse;
		}
		*width = r_vidModes[mode].width;
		*height = r_vidModes[mode].height;
	}

	*windowAspect = (float)*width / ( *height );

	return qtrue;
}

/*
** R_ModeList_f
*/
void R_ModeList_f( void ) {
	int i;

	Com_Printf( "\n" );
	Com_Printf( "Mode -2: desktop resolution\n" );
	Com_Printf( "Mode -1: r_customwidth x r_customheight\n" );
	for ( i = 0; i < s_numVidModes; i++ )
	{
		Com_Printf( "Mode %2d: %4d x %d\n", i, r_vidModes[i].width, r_vidModes[i].height );
	}
	Com_Printf( "\n" );
}
