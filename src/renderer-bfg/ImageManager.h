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

In addition, the Doom 3 BFG Edition Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied Doom 3 BFG Edition Source Code. If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#ifndef __IMAGEMANAGER_H__
#define __IMAGEMANAGER_H__

#include "Image.h"

/*
===============================================================================

  Image Manager

  A trimmed stand-in for the BFG image manager, following the material
  and model managers of this module: the registry of the images. The
  find and the create semantics follow R_FindImageFile and
  R_CreateImageExt in src/renderer/tr_image.c of this code base, so
  the shader parser and the lightmap upload keep the engine behavior.

===============================================================================
*/

class idImageManager {
public:
virtual ~idImageManager() {}

// clears the list, builds the color tables and creates the builtin
// images of the engine's R_InitImages
virtual void                    Init() = 0;

// frees all the images
virtual void                    Shutdown() = 0;

// finds or loads an image file. Returns NULL when the file does not
// load, like R_FindImageFile: the caller fails the stage or falls
// back to the default image
virtual idImage *               ImageFromFile( const char *name, bool mipmap, bool allowPicmip, bool characterMIP, int wrapClampMode ) = 0;

// creates an image from pixels, like R_CreateImageExt. A name that
// already exists comes back unchanged, so the intrinsic images and
// the lightmaps survive repeated creation
virtual idImage *               CreateImage( const char *name, const byte *pic, int width, int height,
											 bool mipmap, bool allowPicmip, bool characterMIP, int wrapClampMode ) = 0;

// returns NULL if the name is not a loaded image
virtual idImage *               CheckImage( const char *name ) const = 0;

virtual int                     NumImages() const = 0;

// prints the loaded images, for development
virtual void                    ListImages() const = 0;

// the builtin images of the engine's R_CreateBuiltinImages
virtual idImage *               DefaultImage() const = 0;
virtual idImage *               WhiteImage() const = 0;
virtual idImage *               IdentityLightImage() const = 0;
virtual idImage *               DlightImage() const = 0;
virtual idImage *               FogImage() const = 0;

// the overbright color scale of the engine's R_SetColorMappings
virtual float                   IdentityLight() const = 0;
virtual byte                    IdentityLightByte() const = 0;
virtual int                     OverbrightBits() const = 0;

// the shader compression control of the engine's tr.allowCompress:
// 0 is the default, the allowcompress keyword sets 1, nocompress -1
virtual int                     AllowCompress() const = 0;
virtual void                    SetAllowCompress( int value ) = 0;
};

// this will be statically pointed at a private implementation
extern idImageManager *         imageManager;

// the overbright shift of R_ColorShiftLightingBytes in src/renderer/tr_bsp.c
// of this code base, used by the lightmap upload
void R_ColorShiftLightingBytes( int shift, const byte in[4], byte out[4] );

#endif /* !__IMAGEMANAGER_H__ */
