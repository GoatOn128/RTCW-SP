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

#include "precompiled.h"
#include "Image_local.h"

/*

  The image manager keeps the registry of the loaded images, following
  the model and material managers of this module. The create and the
  find semantics follow R_CreateImageExt and R_FindImageFileExt in
  src/renderer/tr_image.c of this code base: a file that does not load
  gives NULL and a name that exists comes back unchanged.

  The engine uploads the textures to GL right in R_CreateImageExt.
  This renderer prepares the pixels instead and uploads them when the
  backend runs with a live GL context, so the module stays loadable
  without one.

*/

// image cvars of the engine, defaults as declared in tr_init.c and
// tr_image.c of this code base; the engine framework is not hooked up
// yet, so the values read back are the defaults. The shared ones have
// externs in Image_local.h
idCVar r_textureMode( "r_textureMode", "GL_LINEAR_MIPMAP_NEAREST", CVAR_RENDERER | CVAR_ARCHIVE, "texture filter" );
idCVar r_texturebits( "r_texturebits", "0", CVAR_RENDERER | CVAR_ARCHIVE, "0 = use bpp desktop depth, 16/32 = force bits" );
idCVar r_picmip( "r_picmip", "1", CVAR_RENDERER | CVAR_ARCHIVE, "set texture quality, 0 = max quality, 16 = lowest" );
idCVar r_picmip2( "r_picmip2", "2", CVAR_RENDERER | CVAR_ARCHIVE, "picmip for character skins" );
idCVar r_simpleMipMaps( "r_simpleMipMaps", "1", CVAR_RENDERER | CVAR_ARCHIVE, "" );
idCVar r_roundImagesDown( "r_roundImagesDown", "1", CVAR_RENDERER | CVAR_ARCHIVE, "" );

static idCVar r_ext_compressed_textures( "r_ext_compressed_textures", "1", CVAR_RENDERER | CVAR_ARCHIVE, "" );
static idCVar r_overBrightBits( "r_overBrightBits", "0", CVAR_RENDERER | CVAR_ARCHIVE, "" );
static idCVar r_gamma( "r_gamma", "1", CVAR_RENDERER | CVAR_ARCHIVE, "changes gamma tables", 0.5f, 3.0f );
static idCVar r_intensity( "r_intensity", "1", CVAR_RENDERER, "", 1.0f, 5.0f );

static idImageManagerLocal staticImageManager;
idImageManager *imageManager = &staticImageManager;

/*
=================
idImage::idImage
=================
*/
idImage::idImage( const char *name ) : imgName( name ) {
	width = 0;
	height = 0;
	uploadWidth = 0;
	uploadHeight = 0;
	mipmap = false;
	allowPicmip = false;
	characterMIP = false;
	wrapClampMode = GL_REPEAT;
	internalFormat = GL_RGB;
	texnum = TEXTURE_NOT_LOADED;
	filterMin = GL_LINEAR;
	filterMag = GL_LINEAR;
	numLevels = 0;
	memset( levelWidth, 0, sizeof( levelWidth ) );
	memset( levelHeight, 0, sizeof( levelHeight ) );
	memset( levelOffsets, 0, sizeof( levelOffsets ) );
}

/*
=================
idImage::Upload

Hands the prepared levels to GL. Nothing calls this until the backend
phase runs with a live GL context; the image keeps its pixels until
then.
=================
*/
void idImage::Upload() {
	if ( texnum != TEXTURE_NOT_LOADED ) {
		return;
	}

	glGenTextures( 1, &texnum );
	glBindTexture( GL_TEXTURE_2D, texnum );

	for ( int level = 0; level < numLevels; level++ ) {
		glTexImage2D( GL_TEXTURE_2D, level, internalFormat,
					  levelWidth[level], levelHeight[level], 0,
					  GL_RGBA, GL_UNSIGNED_BYTE, pic.Ptr() + levelOffsets[level] );
	}

	// the filter pair comes from r_textureMode for mipmapped images,
	// the engine uses GL_LINEAR for everything else
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, filterMin );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, filterMag );

	// the wrap state is set after the upload, like the engine does
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, wrapClampMode );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, wrapClampMode );
}

/*
=================
idImage::GetLevel
=================
*/
const byte *idImage::GetLevel( int level, int &levelWidth, int &levelHeight ) const {
	levelWidth = this->levelWidth[level];
	levelHeight = this->levelHeight[level];
	return pic.Ptr() + levelOffsets[level];
}

/*
=================
idImageManagerLocal::Init
=================
*/
void idImageManagerLocal::Init() {
	initialized = true;

	defaultImage = NULL;
	whiteImage = NULL;
	identityLightImage = NULL;
	dlightImage = NULL;
	fogImage = NULL;

	// the shader compression control, engine tr.allowCompress
	allowCompress = 0;

	// the color mapping setup of R_SetColorMappings: the engine checks
	// the hardware gamma ramp and the fullscreen mode here, this
	// module has no context yet, so the hardware gamma is assumed
	overbrightBits = r_overBrightBits.GetInteger();
	if ( overbrightBits < 0 ) {
		overbrightBits = 0;
	}
	// allow 2 overbright bits in 24 bit, the engine allows only 1 in 16
	// bit, this renderer only runs true color
	if ( overbrightBits > 2 ) {
		overbrightBits = 2;
	}

	identityLight = 1.0f / ( 1 << overbrightBits );
	identityLightByte = ( byte )( 255 * identityLight );

	// build the gamma and intensity translation tables
	R_SetColorMappings( overbrightBits, r_gamma.GetFloat(), r_intensity.GetFloat() );

	// create default texture, white texture and the other builtin
	// images of the engine's R_CreateBuiltinImages
	CreateBuiltinImages();
}

/*
=================
idImageManagerLocal::Shutdown
=================
*/
void idImageManagerLocal::Shutdown() {
	images.DeleteContents( true );
	hash.Free();
	defaultImage = NULL;
	whiteImage = NULL;
	identityLightImage = NULL;
	dlightImage = NULL;
	fogImage = NULL;
	initialized = false;
}

/*
=================
idImageManagerLocal::FindLoadedImage
=================
*/
idImage *idImageManagerLocal::FindLoadedImage( const char *name ) const {
	int key = hash.GenerateKey( name, false );
	for ( int i = hash.First( key ); i != -1; i = hash.Next( i ) ) {
		if ( images[i]->imgName.Icmp( name ) == 0 ) {
			return images[i];
		}
	}
	return NULL;
}

/*
=================
idImageManagerLocal::CreateImage

The only way images are created, the R_CreateImageExt of this code
base's engine. The name based noCompress decisions live here, the
pixel preparation in idImage::GenerateImage.
=================
*/
idImage *idImageManagerLocal::CreateImage( const char *name, const byte *pic, int width, int height,
										  bool mipmap, bool allowPicmip, bool characterMIP, int wrapClampMode ) {
	EnsureInitialized();

	// a name that exists comes back unchanged: the builtin images and
	// the lightmaps survive repeated creation, the engine hashes every
	// R_CreateImageExt call and hands back the first image of the name
	// on its find paths
	idImage *image = FindLoadedImage( name );
	if ( image ) {
		return image;
	}

	bool isLightmap = false;
	bool noCompress = false;

	if ( idStr::Icmpn( name, "*lightmap", 9 ) == 0 ) {
		isLightmap = true;
		noCompress = true;
	}
	if ( !noCompress && strstr( name, "skies" ) ) {
		noCompress = true;
	}
	if ( !noCompress && strstr( name, "weapons" ) ) {     // don't compress view weapon skins
		noCompress = true;
	}
	// the shader keywords allowcompress and nocompress set the
	// compression control, the parser resets it after every shader
	if ( r_ext_compressed_textures.GetInteger() == 2 && allowCompress != 1 ) {
		noCompress = true;
	} else if ( r_ext_compressed_textures.GetInteger() == 1 && allowCompress < 0 ) {
		noCompress = true;
	}

	image = new idImage( name );
	image->mipmap = mipmap;
	image->allowPicmip = allowPicmip;
	image->characterMIP = characterMIP;
	image->wrapClampMode = wrapClampMode;
	image->GenerateImage( pic, width, height, mipmap, allowPicmip, characterMIP, isLightmap, noCompress );

	hash.Add( hash.GenerateKey( name, false ), images.Append( image ) );

	return image;
}

/*
=================
idImageManagerLocal::ImageFromFile

The R_FindImageFileExt of this code base's engine. Returns NULL when
the file does not load, the callers fall back to the default image or
fail the stage.
=================
*/
idImage *idImageManagerLocal::ImageFromFile( const char *name, bool mipmap, bool allowPicmip, bool characterMIP, int wrapClampMode ) {
	if ( !name || !name[0] ) {
		return NULL;
	}

	EnsureInitialized();

	// see if the image is already loaded
	idImage *image = FindLoadedImage( name );
	if ( image ) {
		// the white image can be used with any set of parms, but other
		// mismatches are errors
		if ( idStr::Icmp( name, "*white" ) != 0 ) {
			if ( image->mipmap != mipmap ||
				 image->allowPicmip != allowPicmip ||
				 image->characterMIP != characterMIP ||
				 image->wrapClampMode != wrapClampMode ) {
				idLib::Warning( "WARNING: reused image %s with mixed load parms\n", name );
			}
		}
		return image;
	}

	// load the pic from disk
	byte *pic = NULL;
	int width = 0;
	int height = 0;
	R_LoadImageFiles( name, &pic, &width, &height );
	if ( pic == NULL ) {
// no need to check the uppercase on win32 systems, the engine only
// retries on unix
#if !defined( _WIN32 )
		// try the upper case extension for unix systems
		idStr altname = name;
		int len = altname.Length();
		altname[len - 3] = toupper( altname[len - 3] );
		altname[len - 2] = toupper( altname[len - 2] );
		altname[len - 1] = toupper( altname[len - 1] );
		R_LoadImageFiles( altname.c_str(), &pic, &width, &height );
		if ( pic == NULL ) {
			return NULL;
		}
#else
		return NULL;
#endif
	}

	image = CreateImage( name, pic, width, height, mipmap, allowPicmip, characterMIP, wrapClampMode );
	delete[] pic;

	return image;
}

/*
=================
idImageManagerLocal::CheckImage
=================
*/
idImage *idImageManagerLocal::CheckImage( const char *name ) const {
	if ( !name || !name[0] ) {
		return NULL;
	}
	return FindLoadedImage( name );
}

/*
=================
idImageManagerLocal::ListImages
=================
*/
void idImageManagerLocal::ListImages() const {
	idLib::Printf( "%5d images\n", images.Num() );
	for ( int i = 0; i < images.Num(); i++ ) {
		idLib::Printf( "%-64s %4ix%-4i %s\n",
					   images[i]->imgName.c_str(), images[i]->GetUploadWidth(), images[i]->GetUploadHeight(),
					   images[i]->IsUploaded() ? "" : " (not uploaded)" );
	}
}

/*
=================
idImageManagerLocal::EnsureInitialized
=================
*/
void idImageManagerLocal::EnsureInitialized() {
	// the engine renderer initialization is not hooked up yet, so the
	// manager initializes lazily on the first lookup
	if ( !initialized ) {
		Init();
	}
}
