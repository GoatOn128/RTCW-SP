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
// OpenGL function table handed to the renderer through refimport_t, the
// video mode table used by the platform GL layer, and the engine side
// copies of the video cvars the platform layer reads.

#include "client.h"
#include "../renderer/tr_local.h"

qglimport_t qglImport;

cvar_t  *r_mode;
cvar_t  *r_fullscreen;
cvar_t  *r_glDriver;
cvar_t  *r_allowExtensions;
cvar_t  *r_ext_compressed_textures;
cvar_t  *r_ext_gamma_control;
cvar_t  *r_ext_multitexture;
cvar_t  *r_ext_compiled_vertex_array;
cvar_t  *r_ext_ATI_pntriangles;
cvar_t  *r_ext_texture_filter_anisotropic;
cvar_t  *r_ext_NV_fog_dist;
cvar_t  *r_ext_texture_env_add;
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
	r_glDriver = Cvar_Get( "r_glDriver", OPENGL_DRIVER_NAME, CVAR_ARCHIVE | CVAR_LATCH );
	r_allowExtensions = Cvar_Get( "r_allowExtensions", "1", CVAR_ARCHIVE | CVAR_LATCH );
	r_ext_compressed_textures = Cvar_Get( "r_ext_compressed_textures", "1", CVAR_ARCHIVE | CVAR_LATCH );
	r_ext_gamma_control = Cvar_Get( "r_ext_gamma_control", "1", CVAR_ARCHIVE | CVAR_LATCH );
	r_ext_multitexture = Cvar_Get( "r_ext_multitexture", "1", CVAR_ARCHIVE | CVAR_LATCH );
	r_ext_compiled_vertex_array = Cvar_Get( "r_ext_compiled_vertex_array", "1", CVAR_ARCHIVE | CVAR_LATCH );
	r_ext_ATI_pntriangles = Cvar_Get( "r_ext_ATI_pntriangles", "0", CVAR_ARCHIVE | CVAR_LATCH );
	r_ext_texture_filter_anisotropic = Cvar_Get( "r_ext_texture_filter_anisotropic", "0", CVAR_ARCHIVE );
	r_ext_NV_fog_dist = Cvar_Get( "r_ext_NV_fog_dist", "1", CVAR_ARCHIVE | CVAR_LATCH );
#ifdef __linux__ // broken on linux
	r_ext_texture_env_add = Cvar_Get( "r_ext_texture_env_add", "0", CVAR_ARCHIVE | CVAR_LATCH );
#else
	r_ext_texture_env_add = Cvar_Get( "r_ext_texture_env_add", "1", CVAR_ARCHIVE | CVAR_LATCH );
#endif
	r_colorbits = Cvar_Get( "r_colorbits", "0", CVAR_ARCHIVE | CVAR_LATCH );
	r_stereo = Cvar_Get( "r_stereo", "0", CVAR_ARCHIVE | CVAR_LATCH );
	r_stencilbits = Cvar_Get( "r_stencilbits", "0", CVAR_ARCHIVE | CVAR_LATCH );
	r_depthbits = Cvar_Get( "r_depthbits", "0", CVAR_ARCHIVE | CVAR_LATCH );
	r_ignorehwgamma = Cvar_Get( "r_ignorehwgamma", "1", CVAR_ARCHIVE | CVAR_LATCH );
	r_mode = Cvar_Get( "r_mode", "3", CVAR_ARCHIVE | CVAR_LATCH );
	r_fullscreen = Cvar_Get( "r_fullscreen", "1", CVAR_ARCHIVE | CVAR_LATCH );
	r_displayRefresh = Cvar_Get( "r_displayRefresh", "0", CVAR_LATCH );
	r_swapInterval = Cvar_Get( "r_swapInterval", "0", CVAR_ARCHIVE );
	r_verbose = Cvar_Get( "r_verbose", "0", CVAR_CHEAT );
	r_logFile = Cvar_Get( "r_logFile", "0", CVAR_CHEAT );
	r_drawBuffer = Cvar_Get( "r_drawBuffer", "GL_BACK", CVAR_CHEAT );
}

/*
** R_GetModeInfo
*/
typedef struct vidmode_s
{
	const char *description;
	int width, height;
	float pixelAspect;              // pixel width / height
} vidmode_t;

static vidmode_t r_vidModes[] =
{
	{ "Mode  0: 320x240",        320,    240,    1 },
	{ "Mode  1: 400x300",        400,    300,    1 },
	{ "Mode  2: 512x384",        512,    384,    1 },
	{ "Mode  3: 640x480",        640,    480,    1 },
	{ "Mode  4: 800x600",        800,    600,    1 },
	{ "Mode  5: 960x720",        960,    720,    1 },
	{ "Mode  6: 1024x768",       1024,   768,    1 },
	{ "Mode  7: 1152x864",       1152,   864,    1 },
	{ "Mode  8: 1280x1024",      1280,   1024,   1 },
	{ "Mode  9: 1600x1200",      1600,   1200,   1 },
	{ "Mode 10: 2048x1536",      2048,   1536,   1 },
	{ "Mode 11: 856x480 (wide)",856, 480,    1 },
	{ "Mode 12: 1920x1200 (wide)",1920,  1200,   1 }     //----(SA)	added
};
static int s_numVidModes = ( sizeof( r_vidModes ) / sizeof( r_vidModes[0] ) );

qboolean R_GetModeInfo( int *width, int *height, float *windowAspect, int mode ) {
	vidmode_t   *vm;

	if ( mode < -1 ) {
		return qfalse;
	}
	if ( mode >= s_numVidModes ) {
		return qfalse;
	}

	if ( mode == -1 ) {
		*width = Cvar_VariableIntegerValue( "r_customwidth" );
		*height = Cvar_VariableIntegerValue( "r_customheight" );
		*windowAspect = Cvar_VariableValue( "r_customaspect" );
		return qtrue;
	}

	vm = &r_vidModes[mode];

	*width  = vm->width;
	*height = vm->height;
	*windowAspect = (float)vm->width / ( vm->height * vm->pixelAspect );

	return qtrue;
}

/*
** R_ModeList_f
*/
void R_ModeList_f( void ) {
	int i;

	Com_Printf( "\n" );
	for ( i = 0; i < s_numVidModes; i++ )
	{
		Com_Printf( "%s\n", r_vidModes[i].description );
	}
	Com_Printf( "\n" );
}


void QGL_FillImportTable( void ) {
	qglImport.qglMultiTexCoord2fARB = qglMultiTexCoord2fARB;
	qglImport.qglActiveTextureARB = qglActiveTextureARB;
	qglImport.qglClientActiveTextureARB = qglClientActiveTextureARB;
	qglImport.qglLockArraysEXT = qglLockArraysEXT;
	qglImport.qglUnlockArraysEXT = qglUnlockArraysEXT;
	qglImport.qglPNTrianglesiATI = qglPNTrianglesiATI;
	qglImport.qglPNTrianglesfATI = qglPNTrianglesfATI;
	qglImport.qglAccum = qglAccum;
	qglImport.qglAlphaFunc = qglAlphaFunc;
	qglImport.qglAreTexturesResident = qglAreTexturesResident;
	qglImport.qglArrayElement = qglArrayElement;
	qglImport.qglBegin = qglBegin;
	qglImport.qglBindTexture = qglBindTexture;
	qglImport.qglBitmap = qglBitmap;
	qglImport.qglBlendFunc = qglBlendFunc;
	qglImport.qglCallList = qglCallList;
	qglImport.qglCallLists = qglCallLists;
	qglImport.qglClear = qglClear;
	qglImport.qglClearAccum = qglClearAccum;
	qglImport.qglClearColor = qglClearColor;
	qglImport.qglClearDepth = qglClearDepth;
	qglImport.qglClearIndex = qglClearIndex;
	qglImport.qglClearStencil = qglClearStencil;
	qglImport.qglClipPlane = qglClipPlane;
	qglImport.qglColor3b = qglColor3b;
	qglImport.qglColor3bv = qglColor3bv;
	qglImport.qglColor3d = qglColor3d;
	qglImport.qglColor3dv = qglColor3dv;
	qglImport.qglColor3f = qglColor3f;
	qglImport.qglColor3fv = qglColor3fv;
	qglImport.qglColor3i = qglColor3i;
	qglImport.qglColor3iv = qglColor3iv;
	qglImport.qglColor3s = qglColor3s;
	qglImport.qglColor3sv = qglColor3sv;
	qglImport.qglColor3ub = qglColor3ub;
	qglImport.qglColor3ubv = qglColor3ubv;
	qglImport.qglColor3ui = qglColor3ui;
	qglImport.qglColor3uiv = qglColor3uiv;
	qglImport.qglColor3us = qglColor3us;
	qglImport.qglColor3usv = qglColor3usv;
	qglImport.qglColor4b = qglColor4b;
	qglImport.qglColor4bv = qglColor4bv;
	qglImport.qglColor4d = qglColor4d;
	qglImport.qglColor4dv = qglColor4dv;
	qglImport.qglColor4f = qglColor4f;
	qglImport.qglColor4fv = qglColor4fv;
	qglImport.qglColor4i = qglColor4i;
	qglImport.qglColor4iv = qglColor4iv;
	qglImport.qglColor4s = qglColor4s;
	qglImport.qglColor4sv = qglColor4sv;
	qglImport.qglColor4ub = qglColor4ub;
	qglImport.qglColor4ubv = qglColor4ubv;
	qglImport.qglColor4ui = qglColor4ui;
	qglImport.qglColor4uiv = qglColor4uiv;
	qglImport.qglColor4us = qglColor4us;
	qglImport.qglColor4usv = qglColor4usv;
	qglImport.qglColorMask = qglColorMask;
	qglImport.qglColorMaterial = qglColorMaterial;
	qglImport.qglColorPointer = qglColorPointer;
	qglImport.qglCopyPixels = qglCopyPixels;
	qglImport.qglCopyTexImage1D = qglCopyTexImage1D;
	qglImport.qglCopyTexImage2D = qglCopyTexImage2D;
	qglImport.qglCopyTexSubImage1D = qglCopyTexSubImage1D;
	qglImport.qglCopyTexSubImage2D = qglCopyTexSubImage2D;
	qglImport.qglCullFace = qglCullFace;
	qglImport.qglDeleteLists = qglDeleteLists;
	qglImport.qglDeleteTextures = qglDeleteTextures;
	qglImport.qglDepthFunc = qglDepthFunc;
	qglImport.qglDepthMask = qglDepthMask;
	qglImport.qglDepthRange = qglDepthRange;
	qglImport.qglDisable = qglDisable;
	qglImport.qglDisableClientState = qglDisableClientState;
	qglImport.qglDrawArrays = qglDrawArrays;
	qglImport.qglDrawBuffer = qglDrawBuffer;
	qglImport.qglDrawElements = qglDrawElements;
	qglImport.qglDrawPixels = qglDrawPixels;
	qglImport.qglEdgeFlag = qglEdgeFlag;
	qglImport.qglEdgeFlagPointer = qglEdgeFlagPointer;
	qglImport.qglEdgeFlagv = qglEdgeFlagv;
	qglImport.qglEnable = qglEnable;
	qglImport.qglEnableClientState = qglEnableClientState;
	qglImport.qglEnd = qglEnd;
	qglImport.qglEndList = qglEndList;
	qglImport.qglEvalCoord1d = qglEvalCoord1d;
	qglImport.qglEvalCoord1dv = qglEvalCoord1dv;
	qglImport.qglEvalCoord1f = qglEvalCoord1f;
	qglImport.qglEvalCoord1fv = qglEvalCoord1fv;
	qglImport.qglEvalCoord2d = qglEvalCoord2d;
	qglImport.qglEvalCoord2dv = qglEvalCoord2dv;
	qglImport.qglEvalCoord2f = qglEvalCoord2f;
	qglImport.qglEvalCoord2fv = qglEvalCoord2fv;
	qglImport.qglEvalMesh1 = qglEvalMesh1;
	qglImport.qglEvalMesh2 = qglEvalMesh2;
	qglImport.qglEvalPoint1 = qglEvalPoint1;
	qglImport.qglEvalPoint2 = qglEvalPoint2;
	qglImport.qglFeedbackBuffer = qglFeedbackBuffer;
	qglImport.qglFinish = qglFinish;
	qglImport.qglFlush = qglFlush;
	qglImport.qglFogf = qglFogf;
	qglImport.qglFogfv = qglFogfv;
	qglImport.qglFogi = qglFogi;
	qglImport.qglFogiv = qglFogiv;
	qglImport.qglFrontFace = qglFrontFace;
	qglImport.qglFrustum = qglFrustum;
	qglImport.qglGenLists = qglGenLists;
	qglImport.qglGenTextures = qglGenTextures;
	qglImport.qglGetBooleanv = qglGetBooleanv;
	qglImport.qglGetClipPlane = qglGetClipPlane;
	qglImport.qglGetDoublev = qglGetDoublev;
	qglImport.qglGetError = qglGetError;
	qglImport.qglGetFloatv = qglGetFloatv;
	qglImport.qglGetIntegerv = qglGetIntegerv;
	qglImport.qglGetLightfv = qglGetLightfv;
	qglImport.qglGetLightiv = qglGetLightiv;
	qglImport.qglGetMapdv = qglGetMapdv;
	qglImport.qglGetMapfv = qglGetMapfv;
	qglImport.qglGetMapiv = qglGetMapiv;
	qglImport.qglGetMaterialfv = qglGetMaterialfv;
	qglImport.qglGetMaterialiv = qglGetMaterialiv;
	qglImport.qglGetPixelMapfv = qglGetPixelMapfv;
	qglImport.qglGetPixelMapuiv = qglGetPixelMapuiv;
	qglImport.qglGetPixelMapusv = qglGetPixelMapusv;
	qglImport.qglGetPointerv = qglGetPointerv;
	qglImport.qglGetPolygonStipple = qglGetPolygonStipple;
	qglImport.qglGetString = qglGetString;
	qglImport.qglGetTexEnvfv = qglGetTexEnvfv;
	qglImport.qglGetTexEnviv = qglGetTexEnviv;
	qglImport.qglGetTexGendv = qglGetTexGendv;
	qglImport.qglGetTexGenfv = qglGetTexGenfv;
	qglImport.qglGetTexGeniv = qglGetTexGeniv;
	qglImport.qglGetTexImage = qglGetTexImage;
	qglImport.qglGetTexLevelParameterfv = qglGetTexLevelParameterfv;
	qglImport.qglGetTexLevelParameteriv = qglGetTexLevelParameteriv;
	qglImport.qglGetTexParameterfv = qglGetTexParameterfv;
	qglImport.qglGetTexParameteriv = qglGetTexParameteriv;
	qglImport.qglHint = qglHint;
	qglImport.qglIndexMask = qglIndexMask;
	qglImport.qglIndexPointer = qglIndexPointer;
	qglImport.qglIndexd = qglIndexd;
	qglImport.qglIndexdv = qglIndexdv;
	qglImport.qglIndexf = qglIndexf;
	qglImport.qglIndexfv = qglIndexfv;
	qglImport.qglIndexi = qglIndexi;
	qglImport.qglIndexiv = qglIndexiv;
	qglImport.qglIndexs = qglIndexs;
	qglImport.qglIndexsv = qglIndexsv;
	qglImport.qglIndexub = qglIndexub;
	qglImport.qglIndexubv = qglIndexubv;
	qglImport.qglInitNames = qglInitNames;
	qglImport.qglInterleavedArrays = qglInterleavedArrays;
	qglImport.qglIsEnabled = qglIsEnabled;
	qglImport.qglIsList = qglIsList;
	qglImport.qglIsTexture = qglIsTexture;
	qglImport.qglLightModelf = qglLightModelf;
	qglImport.qglLightModelfv = qglLightModelfv;
	qglImport.qglLightModeli = qglLightModeli;
	qglImport.qglLightModeliv = qglLightModeliv;
	qglImport.qglLightf = qglLightf;
	qglImport.qglLightfv = qglLightfv;
	qglImport.qglLighti = qglLighti;
	qglImport.qglLightiv = qglLightiv;
	qglImport.qglLineStipple = qglLineStipple;
	qglImport.qglLineWidth = qglLineWidth;
	qglImport.qglListBase = qglListBase;
	qglImport.qglLoadIdentity = qglLoadIdentity;
	qglImport.qglLoadMatrixd = qglLoadMatrixd;
	qglImport.qglLoadMatrixf = qglLoadMatrixf;
	qglImport.qglLoadName = qglLoadName;
	qglImport.qglLogicOp = qglLogicOp;
	qglImport.qglMap1d = qglMap1d;
	qglImport.qglMap1f = qglMap1f;
	qglImport.qglMap2d = qglMap2d;
	qglImport.qglMap2f = qglMap2f;
	qglImport.qglMapGrid1d = qglMapGrid1d;
	qglImport.qglMapGrid1f = qglMapGrid1f;
	qglImport.qglMapGrid2d = qglMapGrid2d;
	qglImport.qglMapGrid2f = qglMapGrid2f;
	qglImport.qglMaterialf = qglMaterialf;
	qglImport.qglMaterialfv = qglMaterialfv;
	qglImport.qglMateriali = qglMateriali;
	qglImport.qglMaterialiv = qglMaterialiv;
	qglImport.qglMatrixMode = qglMatrixMode;
	qglImport.qglMultMatrixd = qglMultMatrixd;
	qglImport.qglMultMatrixf = qglMultMatrixf;
	qglImport.qglNewList = qglNewList;
	qglImport.qglNormal3b = qglNormal3b;
	qglImport.qglNormal3bv = qglNormal3bv;
	qglImport.qglNormal3d = qglNormal3d;
	qglImport.qglNormal3dv = qglNormal3dv;
	qglImport.qglNormal3f = qglNormal3f;
	qglImport.qglNormal3fv = qglNormal3fv;
	qglImport.qglNormal3i = qglNormal3i;
	qglImport.qglNormal3iv = qglNormal3iv;
	qglImport.qglNormal3s = qglNormal3s;
	qglImport.qglNormal3sv = qglNormal3sv;
	qglImport.qglNormalPointer = qglNormalPointer;
	qglImport.qglOrtho = qglOrtho;
	qglImport.qglPassThrough = qglPassThrough;
	qglImport.qglPixelMapfv = qglPixelMapfv;
	qglImport.qglPixelMapuiv = qglPixelMapuiv;
	qglImport.qglPixelMapusv = qglPixelMapusv;
	qglImport.qglPixelStoref = qglPixelStoref;
	qglImport.qglPixelStorei = qglPixelStorei;
	qglImport.qglPixelTransferf = qglPixelTransferf;
	qglImport.qglPixelTransferi = qglPixelTransferi;
	qglImport.qglPixelZoom = qglPixelZoom;
	qglImport.qglPointSize = qglPointSize;
	qglImport.qglPolygonMode = qglPolygonMode;
	qglImport.qglPolygonOffset = qglPolygonOffset;
	qglImport.qglPolygonStipple = qglPolygonStipple;
	qglImport.qglPopAttrib = qglPopAttrib;
	qglImport.qglPopClientAttrib = qglPopClientAttrib;
	qglImport.qglPopMatrix = qglPopMatrix;
	qglImport.qglPopName = qglPopName;
	qglImport.qglPrioritizeTextures = qglPrioritizeTextures;
	qglImport.qglPushAttrib = qglPushAttrib;
	qglImport.qglPushClientAttrib = qglPushClientAttrib;
	qglImport.qglPushMatrix = qglPushMatrix;
	qglImport.qglPushName = qglPushName;
	qglImport.qglRasterPos2d = qglRasterPos2d;
	qglImport.qglRasterPos2dv = qglRasterPos2dv;
	qglImport.qglRasterPos2f = qglRasterPos2f;
	qglImport.qglRasterPos2fv = qglRasterPos2fv;
	qglImport.qglRasterPos2i = qglRasterPos2i;
	qglImport.qglRasterPos2iv = qglRasterPos2iv;
	qglImport.qglRasterPos2s = qglRasterPos2s;
	qglImport.qglRasterPos2sv = qglRasterPos2sv;
	qglImport.qglRasterPos3d = qglRasterPos3d;
	qglImport.qglRasterPos3dv = qglRasterPos3dv;
	qglImport.qglRasterPos3f = qglRasterPos3f;
	qglImport.qglRasterPos3fv = qglRasterPos3fv;
	qglImport.qglRasterPos3i = qglRasterPos3i;
	qglImport.qglRasterPos3iv = qglRasterPos3iv;
	qglImport.qglRasterPos3s = qglRasterPos3s;
	qglImport.qglRasterPos3sv = qglRasterPos3sv;
	qglImport.qglRasterPos4d = qglRasterPos4d;
	qglImport.qglRasterPos4dv = qglRasterPos4dv;
	qglImport.qglRasterPos4f = qglRasterPos4f;
	qglImport.qglRasterPos4fv = qglRasterPos4fv;
	qglImport.qglRasterPos4i = qglRasterPos4i;
	qglImport.qglRasterPos4iv = qglRasterPos4iv;
	qglImport.qglRasterPos4s = qglRasterPos4s;
	qglImport.qglRasterPos4sv = qglRasterPos4sv;
	qglImport.qglReadBuffer = qglReadBuffer;
	qglImport.qglReadPixels = qglReadPixels;
	qglImport.qglRectd = qglRectd;
	qglImport.qglRectdv = qglRectdv;
	qglImport.qglRectf = qglRectf;
	qglImport.qglRectfv = qglRectfv;
	qglImport.qglRecti = qglRecti;
	qglImport.qglRectiv = qglRectiv;
	qglImport.qglRects = qglRects;
	qglImport.qglRectsv = qglRectsv;
	qglImport.qglRenderMode = qglRenderMode;
	qglImport.qglRotated = qglRotated;
	qglImport.qglRotatef = qglRotatef;
	qglImport.qglScaled = qglScaled;
	qglImport.qglScalef = qglScalef;
	qglImport.qglScissor = qglScissor;
	qglImport.qglSelectBuffer = qglSelectBuffer;
	qglImport.qglShadeModel = qglShadeModel;
	qglImport.qglStencilFunc = qglStencilFunc;
	qglImport.qglStencilMask = qglStencilMask;
	qglImport.qglStencilOp = qglStencilOp;
	qglImport.qglTexCoord1d = qglTexCoord1d;
	qglImport.qglTexCoord1dv = qglTexCoord1dv;
	qglImport.qglTexCoord1f = qglTexCoord1f;
	qglImport.qglTexCoord1fv = qglTexCoord1fv;
	qglImport.qglTexCoord1i = qglTexCoord1i;
	qglImport.qglTexCoord1iv = qglTexCoord1iv;
	qglImport.qglTexCoord1s = qglTexCoord1s;
	qglImport.qglTexCoord1sv = qglTexCoord1sv;
	qglImport.qglTexCoord2d = qglTexCoord2d;
	qglImport.qglTexCoord2dv = qglTexCoord2dv;
	qglImport.qglTexCoord2f = qglTexCoord2f;
	qglImport.qglTexCoord2fv = qglTexCoord2fv;
	qglImport.qglTexCoord2i = qglTexCoord2i;
	qglImport.qglTexCoord2iv = qglTexCoord2iv;
	qglImport.qglTexCoord2s = qglTexCoord2s;
	qglImport.qglTexCoord2sv = qglTexCoord2sv;
	qglImport.qglTexCoord3d = qglTexCoord3d;
	qglImport.qglTexCoord3dv = qglTexCoord3dv;
	qglImport.qglTexCoord3f = qglTexCoord3f;
	qglImport.qglTexCoord3fv = qglTexCoord3fv;
	qglImport.qglTexCoord3i = qglTexCoord3i;
	qglImport.qglTexCoord3iv = qglTexCoord3iv;
	qglImport.qglTexCoord3s = qglTexCoord3s;
	qglImport.qglTexCoord3sv = qglTexCoord3sv;
	qglImport.qglTexCoord4d = qglTexCoord4d;
	qglImport.qglTexCoord4dv = qglTexCoord4dv;
	qglImport.qglTexCoord4f = qglTexCoord4f;
	qglImport.qglTexCoord4fv = qglTexCoord4fv;
	qglImport.qglTexCoord4i = qglTexCoord4i;
	qglImport.qglTexCoord4iv = qglTexCoord4iv;
	qglImport.qglTexCoord4s = qglTexCoord4s;
	qglImport.qglTexCoord4sv = qglTexCoord4sv;
	qglImport.qglTexCoordPointer = qglTexCoordPointer;
	qglImport.qglTexEnvf = qglTexEnvf;
	qglImport.qglTexEnvfv = qglTexEnvfv;
	qglImport.qglTexEnvi = qglTexEnvi;
	qglImport.qglTexEnviv = qglTexEnviv;
	qglImport.qglTexGend = qglTexGend;
	qglImport.qglTexGendv = qglTexGendv;
	qglImport.qglTexGenf = qglTexGenf;
	qglImport.qglTexGenfv = qglTexGenfv;
	qglImport.qglTexGeni = qglTexGeni;
	qglImport.qglTexGeniv = qglTexGeniv;
	qglImport.qglTexImage1D = qglTexImage1D;
	qglImport.qglTexImage2D = qglTexImage2D;
	qglImport.qglTexParameterf = qglTexParameterf;
	qglImport.qglTexParameterfv = qglTexParameterfv;
	qglImport.qglTexParameteri = qglTexParameteri;
	qglImport.qglTexParameteriv = qglTexParameteriv;
	qglImport.qglTexSubImage1D = qglTexSubImage1D;
	qglImport.qglTexSubImage2D = qglTexSubImage2D;
	qglImport.qglTranslated = qglTranslated;
	qglImport.qglTranslatef = qglTranslatef;
	qglImport.qglVertex2d = qglVertex2d;
	qglImport.qglVertex2dv = qglVertex2dv;
	qglImport.qglVertex2f = qglVertex2f;
	qglImport.qglVertex2fv = qglVertex2fv;
	qglImport.qglVertex2i = qglVertex2i;
	qglImport.qglVertex2iv = qglVertex2iv;
	qglImport.qglVertex2s = qglVertex2s;
	qglImport.qglVertex2sv = qglVertex2sv;
	qglImport.qglVertex3d = qglVertex3d;
	qglImport.qglVertex3dv = qglVertex3dv;
	qglImport.qglVertex3f = qglVertex3f;
	qglImport.qglVertex3fv = qglVertex3fv;
	qglImport.qglVertex3i = qglVertex3i;
	qglImport.qglVertex3iv = qglVertex3iv;
	qglImport.qglVertex3s = qglVertex3s;
	qglImport.qglVertex3sv = qglVertex3sv;
	qglImport.qglVertex4d = qglVertex4d;
	qglImport.qglVertex4dv = qglVertex4dv;
	qglImport.qglVertex4f = qglVertex4f;
	qglImport.qglVertex4fv = qglVertex4fv;
	qglImport.qglVertex4i = qglVertex4i;
	qglImport.qglVertex4iv = qglVertex4iv;
	qglImport.qglVertex4s = qglVertex4s;
	qglImport.qglVertex4sv = qglVertex4sv;
	qglImport.qglVertexPointer = qglVertexPointer;
	qglImport.qglViewport = qglViewport;
#if defined( _WIN32 )
	qglImport.qwglChoosePixelFormat = qwglChoosePixelFormat;
	qglImport.qwglDescribePixelFormat = qwglDescribePixelFormat;
	qglImport.qwglGetPixelFormat = qwglGetPixelFormat;
	qglImport.qwglSetPixelFormat = qwglSetPixelFormat;
	qglImport.qwglSwapBuffers = qwglSwapBuffers;
	qglImport.qwglGetDeviceGammaRamp3DFX = qwglGetDeviceGammaRamp3DFX;
	qglImport.qwglSetDeviceGammaRamp3DFX = qwglSetDeviceGammaRamp3DFX;
	qglImport.qwglCopyContext = qwglCopyContext;
	qglImport.qwglCreateContext = qwglCreateContext;
	qglImport.qwglCreateLayerContext = qwglCreateLayerContext;
	qglImport.qwglDeleteContext = qwglDeleteContext;
	qglImport.qwglGetCurrentContext = qwglGetCurrentContext;
	qglImport.qwglGetCurrentDC = qwglGetCurrentDC;
	qglImport.qwglGetProcAddress = qwglGetProcAddress;
	qglImport.qwglMakeCurrent = qwglMakeCurrent;
	qglImport.qwglShareLists = qwglShareLists;
	qglImport.qwglUseFontBitmaps = qwglUseFontBitmaps;
	qglImport.qwglUseFontOutlines = qwglUseFontOutlines;
	qglImport.qwglDescribeLayerPlane = qwglDescribeLayerPlane;
	qglImport.qwglSetLayerPaletteEntries = qwglSetLayerPaletteEntries;
	qglImport.qwglGetLayerPaletteEntries = qwglGetLayerPaletteEntries;
	qglImport.qwglRealizeLayerPalette = qwglRealizeLayerPalette;
	qglImport.qwglSwapLayerBuffers = qwglSwapLayerBuffers;
	qglImport.qwglSwapIntervalEXT = qwglSwapIntervalEXT;
#endif  // _WIN32
#if ( ( defined __linux__ )  || ( defined __FreeBSD__ ) ) // rb010123
#if defined ( __FX__ )
	qglImport.qfxMesaCreateContext = qfxMesaCreateContext;
	qglImport.qfxMesaCreateBestContext = qfxMesaCreateBestContext;
	qglImport.qfxMesaDestroyContext = qfxMesaDestroyContext;
	qglImport.qfxMesaMakeCurrent = qfxMesaMakeCurrent;
	qglImport.qfxMesaGetCurrentContext = qfxMesaGetCurrentContext;
	qglImport.qfxMesaSwapBuffers = qfxMesaSwapBuffers;
#endif
	qglImport.qglXChooseVisual = qglXChooseVisual;
	qglImport.qglXCreateContext = qglXCreateContext;
	qglImport.qglXDestroyContext = qglXDestroyContext;
	qglImport.qglXMakeCurrent = qglXMakeCurrent;
	qglImport.qglXCopyContext = qglXCopyContext;
	qglImport.qglXSwapBuffers = qglXSwapBuffers;
#endif // __linux__ || __FreeBSD__ // rb010123
}
