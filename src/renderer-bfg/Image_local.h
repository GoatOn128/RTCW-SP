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

#ifndef __IMAGE_LOCAL_H__
#define __IMAGE_LOCAL_H__

#include "ImageManager.h"
#include "CVarSystem.h"

/*
===============================================================================

  The local image manager. The builtin images live in
  Image_intrinsic.cpp, the file loading in Image_files.cpp and the
  pixel processing in Image_process.cpp, following the BFG renderer's
  split of the image code across files.

===============================================================================
*/

// the fog table size of the engine's R_InitFogTable
const int FOG_TABLE_SIZE = 256;

// the image cvars shared across the image files, declared in
// ImageManager.cpp with the engine defaults
extern idCVar r_textureMode;
extern idCVar r_texturebits;
extern idCVar r_picmip;
extern idCVar r_picmip2;
extern idCVar r_simpleMipMaps;
extern idCVar r_roundImagesDown;
extern idCVar r_ext_compressed_textures;

// the color mapping tables of the engine's R_SetColorMappings,
// implemented in Image_process.cpp
void R_SetColorMappings( int overbrightBits, float gamma, float intensity );

// the file loaders behind the engine's R_LoadImage, implemented in
// Image_files.cpp; the loaded pixels come back as a new byte[] the
// caller deletes
void R_LoadImageFiles( const char *name, byte **pic, int *width, int *height );

class idImageManagerLocal : public idImageManager {
public:
virtual void                    Init();
virtual void                    Shutdown();
virtual idImage *               ImageFromFile( const char *name, bool mipmap, bool allowPicmip, bool characterMIP, int wrapClampMode );
virtual idImage *               CreateImage( const char *name, const byte *pic, int width, int height,
											 bool mipmap, bool allowPicmip, bool characterMIP, int wrapClampMode );
virtual idImage *               CheckImage( const char *name ) const;
virtual int                     NumImages() const { return images.Num(); }
virtual void                    ListImages() const;

virtual idImage *               DefaultImage() const { return defaultImage; }
virtual idImage *               WhiteImage() const { return whiteImage; }
virtual idImage *               IdentityLightImage() const { return identityLightImage; }
virtual idImage *               DlightImage() const { return dlightImage; }
virtual idImage *               FogImage() const { return fogImage; }

virtual float                   IdentityLight() const { return identityLight; }
virtual byte                    IdentityLightByte() const { return identityLightByte; }
virtual int                     OverbrightBits() const { return overbrightBits; }

virtual int                     AllowCompress() const { return allowCompress; }
virtual void                    SetAllowCompress( int value ) { allowCompress = value; }

private:
void                            EnsureInitialized();
void                            CreateBuiltinImages();

// the fog factor of the engine's R_FogFactor, reads the fog table
float                           R_FogFactor( float s, float t );

// the R_FindShaderInShaderText lookup of the engine: the case
// insensitive hash over the names
idImage *                       FindLoadedImage( const char *name ) const;

idList<idImage *, TAG_IMAGE> images;
idHashIndex hash;

idImage *                       defaultImage;
idImage *                       whiteImage;
idImage *                       identityLightImage;
idImage *                       dlightImage;
idImage *                       fogImage;

bool initialized;

// the color mapping state of R_SetColorMappings
int overbrightBits;             // engine tr.overbrightBits
float identityLight;            // 1 / (1 << overbrightBits)
byte identityLightByte;

// the shader keyword compression control, engine tr.allowCompress
int allowCompress;

// the fog density table of the engine's R_InitFogTable, filled for
// the fog image
float fogTable[FOG_TABLE_SIZE];
};

#endif /* !__IMAGE_LOCAL_H__ */
