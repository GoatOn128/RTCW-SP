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
#include "RenderSystem.h"
#include "RenderWorld_local.h"

// The BFG reference declares idRenderSystemLocal in tr_local.h; the local
// class lives in this file until the frontend phase ports tr_local.h.
// Everything except the render world allocation is stubbed until the
// backend phases are ported.
class idRenderSystemLocal : public idRenderSystem {
public:
	virtual ~idRenderSystemLocal() {}

	virtual void			Init() {
		frameCount = 0;
	}

	virtual void			Shutdown() {}

	virtual void			ResetGuiModels() {}

	virtual void			InitOpenGL() {}

	virtual void			ShutdownOpenGL() {}

	virtual bool			IsOpenGLRunning() const { return false; }

	virtual bool			IsFullScreen() const { return false; }
	virtual int				GetWidth() const { return 0; }
	virtual int				GetHeight() const { return 0; }

	virtual float			GetPixelAspect() const { return 1.0f; }

	virtual float			GetPhysicalScreenWidthInCentimeters() const { return 50.0f; }

	virtual stereo3DMode_t	GetStereo3DMode() const { return STEREO3D_OFF; }
	virtual bool			IsStereoScopicRenderingSupported() const { return false; }
	virtual stereo3DMode_t	GetStereoScopicRenderingMode() const { return STEREO3D_OFF; }
	virtual void			EnableStereoScopicRendering( const stereo3DMode_t mode ) const {}
	virtual bool			HasQuadBufferSupport() const { return false; }

	virtual idRenderWorld *	AllocRenderWorld() {
		return new idRenderWorldLocal;
	}
	virtual	void			FreeRenderWorld( idRenderWorld * rw ) {
		delete rw;
	}

	virtual void			BeginLevelLoad() {}
	virtual void			EndLevelLoad() {}
	virtual void			Preload( const idPreloadManifest &manifest, const char *mapName ) {}
	virtual void			LoadLevelImages() {}

	virtual void			BeginAutomaticBackgroundSwaps( autoRenderIconType_t icon ) {}
	virtual void			EndAutomaticBackgroundSwaps() {}
	virtual bool			AreAutomaticBackgroundSwapsRunning( autoRenderIconType_t * icon ) const {
		if ( icon != NULL ) {
			*icon = AUTORENDER_DEFAULTICON;
		}
		return false;
	}

	virtual class idFont *	RegisterFont( const char * fontName ) { return NULL; }
	virtual void			ResetFonts() {}

	virtual void			SetColor( const idVec4 & rgba ) {}

	virtual uint32			GetColor() { return 0xFFFFFFFF; }

	virtual void			SetGLState( const uint64 glState ) {}

	virtual void			DrawFilled( const idVec4 & color, float x, float y, float w, float h ) {}
	virtual void			DrawStretchPic( float x, float y, float w, float h, float s1, float t1, float s2, float t2, const idMaterial *material ) {}
	virtual void			DrawStretchPic( const idVec4 & topLeft, const idVec4 & topRight, const idVec4 & bottomRight, const idVec4 & bottomLeft, const idMaterial * material ) {}
	virtual void			DrawStretchTri ( const idVec2 & p1, const idVec2 & p2, const idVec2 & p3, const idVec2 & t1, const idVec2 & t2, const idVec2 & t3, const idMaterial *material ) {}
	virtual idDrawVert *	AllocTris( int numVerts, const triIndex_t * indexes, int numIndexes, const idMaterial * material, const stereoDepthType_t stereoType ) { return NULL; }

	virtual void			PrintMemInfo( MemInfo_t *mi ) {}

	virtual void			DrawSmallChar( int x, int y, int ch ) {}
	virtual void			DrawSmallStringExt( int x, int y, const char *string, const idVec4 &setColor, bool forceColor ) {}
	virtual void			DrawBigChar( int x, int y, int ch ) {}
	virtual void			DrawBigStringExt( int x, int y, const char *string, const idVec4 &setColor, bool forceColor ) {}

	virtual void			WriteDemoPics() {}
	virtual void			DrawDemoPics() {}

	virtual const emptyCommand_t *	SwapCommandBuffers( uint64 *frontEndMicroSec, uint64 *backEndMicroSec, uint64 *shadowMicroSec, uint64 *gpuMicroSec ) {
		*frontEndMicroSec = *backEndMicroSec = *shadowMicroSec = *gpuMicroSec = 0;
		return NULL;
	}

	virtual void			SwapCommandBuffers_FinishRendering( uint64 *frontEndMicroSec, uint64 *backEndMicroSec, uint64 *shadowMicroSec, uint64 *gpuMicroSec ) {
		*frontEndMicroSec = *backEndMicroSec = *shadowMicroSec = *gpuMicroSec = 0;
	}

	virtual const emptyCommand_t *	SwapCommandBuffers_FinishCommandBuffers() { return NULL; }

	virtual void			RenderCommandBuffers( const emptyCommand_t * commandBuffers ) {}

	virtual void			TakeScreenshot( int width, int height, const char *fileName, int samples, struct renderView_s *ref ) {}

	virtual void			CropRenderSize( int width, int height ) {}
	virtual void			CaptureRenderToImage( const char *imageName, bool clearColorAfterCopy ) {}
	virtual void			CaptureRenderToFile( const char *fileName, bool fixAlpha ) {}
	virtual void			UnCrop() {}

	virtual bool			UploadImage( const char *imageName, const byte *data, int width, int height ) { return false; }

	virtual int				GetFrameCount() const { return frameCount; }

private:
	int				frameCount;
};

idRenderSystem *	renderSystem = NULL;
