Return to Castle Wolfenstein single player GPL source release
=============================================================

This file contains the following sections:

GENERAL NOTES

LICENSE

GENERAL NOTES
=============

Game data and patching:
-----------------------

This source release does not contain any game data, the game data is still
covered by the original EULA and must be obeyed as usual.

You must patch the game to the latest version.

Note that RTCW is available from the Steam store at
http://store.steampowered.com/app/9010/

Linux note: due to the game CD containing only a Windows version of the game,
you must install and update the game using WINE to get the game data.

Compiling with CMake (all platforms):
---------------------------------------------------

The source tree builds with CMake; src/CMakeLists.txt is the entry point and
src/CMakePresets.json ships ready-made presets for the common configurations.

Requirements:
- CMake 3.25 or newer
- Windows: the Microsoft Visual Studio C++ toolchain (the x86 target also
  needs the 32-bit build tools installed)
- Linux: gcc or clang with multilib support for the x86 target, plus the
  X11 and OpenGL development headers

Windows, from the repository root:

  cmake --preset visual-studio
  cmake --build --preset visual-studio-release

x64 builds use the visual-studio-x64 preset instead. cmake_msvc.cmd in the
repository root configures the same Visual Studio build tree and .vscode
holds matching editor tasks. To use the developer command prompt directly:

  .vscode\scripts\VS2026DevCmd.cmd x64 release

Linux, from the repository root:

  cmake --preset linux-release      (run in the src directory)
  cmake --build --preset linux-release

or with the helper script, which configures a Ninja build tree under
build/<compiler>/<config> for the chosen compiler:

  ./cmake_linux.sh gcc release
  cmake --build build/gcc/release

Outputs:
- The engine executable WolfSP_<arch> (.exe on Windows) is written to the
  repository root.
- The game modules qagame_<arch>, cgame_<arch> and ui_<arch> (.dll on
  Windows, .so on Linux) are also written to the repository root; the
  engine loads them from there at startup.
- Tools (bspc, extractfuncs) are built from the same tree.

You can test your binaries by replacing WolfSP.exe, qagame_x86.dll,
cgame_x86.dll, ui_x86.dll (or the matching x64 variants) at the top of the
RTCW install.

Other platforms, updated source code, security issues:
------------------------------------------------------

If you have obtained this source code several weeks after the time of release
(August 2010), it is likely that you can find modified and improved
versions of the engine in various open source projects across the internet.
Depending what is your interest with the source code, those may be a better
starting point.


LICENSE
=======

See COPYING.txt for the GNU GENERAL PUBLIC LICENSE

ADDITIONAL TERMS:  The Return to Castle Wolfenstein single player GPL Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU GPL which accompanied the RTCW SP Source Code.  If not, please request a copy in writing from id Software at id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

EXCLUDED CODE:  The code described below and contained in the Return to Castle Wolfenstein single player GPL Source Code release is not part of the Program covered by the GPL and is expressly excluded from its terms.  You are solely responsible for obtaining from the copyright holder a license for such code and complying with the applicable license terms.

IO on .zip files using portions of zlib
---------------------------------------------------------------------------
lines	file(s)
4301	src/qcommon/unzip.c
Copyright (C) 1998 Gilles Vollant
zlib is Copyright (C) 1995-1998 Jean-loup Gailly and Mark Adler

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.

MD4 Message-Digest Algorithm
-----------------------------------------------------------------------------
lines   file(s)
289     src/qcommon/md4.c
Copyright (C) 1991-2, RSA Data Security, Inc. Created 1991. All rights reserved.

License to copy and use this software is granted provided that it is identified
as the <93>RSA Data Security, Inc. MD4 Message-Digest Algorithm<94> in all mater
ial mentioning or referencing this software or this function.
License is also granted to make and use derivative works provided that such work
s are identified as <93>derived from the RSA Data Security, Inc. MD4 Message-Dig
est Algorithm<94> in all material mentioning or referencing the derived work.
RSA Data Security, Inc. makes no representations concerning either the merchanta
bility of this software or the suitability of this software for any particular
purpose. It is provided <93>as is<94> without express or implied warranty of any
kind.

JPEG library
-----------------------------------------------------------------------------
src/jpeg-6
Copyright (C) 1991-1995, Thomas G. Lane

Permission is hereby granted to use, copy, modify, and distribute this
software (or portions thereof) for any purpose, without fee, subject to these
conditions:
(1) If any part of the source code for this software is distributed, then this
README file must be included, with this copyright and no-warranty notice
unaltered; and any additions, deletions, or changes to the original files
must be clearly indicated in accompanying documentation.
(2) If only executable code is distributed, then the accompanying
documentation must state that "this software is based in part on the work of
the Independent JPEG Group".
(3) Permission for use of this software is granted only if the user accepts
full responsibility for any undesirable consequences; the authors accept
NO LIABILITY for damages of any kind.

These conditions apply to any software derived from or based on the IJG code,
not just to the unmodified library.  If you use our work, you ought to
acknowledge us.

NOTE: unfortunately the README that came with our copy of the library has
been lost, so the one from release 6b is included instead. There are a few
'glue type' modifications to the library to make it easier to use from the
engine, but otherwise the dependency can be easily cleaned up to a
better release of the library.

