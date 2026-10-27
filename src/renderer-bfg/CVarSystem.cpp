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
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Doom 3 BFG Edition Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the Doom 3 BFG Edition Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the Doom 3 BFG Edition Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/
#include "precompiled.h"
#include "CVarSystem.h"

// interim: the engine cvar system is not ported yet and nothing in this
// module changes cvar values, so the cvarSystem pointer stays NULL;
// idCVar::Init parses the default value so the defaults still read back
idCVarSystem * cvarSystem = NULL;

// statically declared cvars of this module, see the note in CVarSystem.h
idCVar * idCVar::staticVars = NULL;

// the renderer cvars shared across the files of this module, with
// externs in CVarSystem.h; the cvars of a single file stay local to it
idCVar r_vertexLight( "r_vertexLight", "0", CVAR_RENDERER | CVAR_ARCHIVE, "vertex lighting" );
idCVar r_mapOverBrightBits( "r_mapOverBrightBits", "2", CVAR_RENDERER | CVAR_ARCHIVE, "map overbright bits" );
