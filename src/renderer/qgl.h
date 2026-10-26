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

/*
** QGL.H
*/

#ifndef __QGL_H__
#define __QGL_H__

#if defined( __LINT__ )

#include <GL/gl.h>

#elif defined( _WIN32 )

#pragma warning (disable: 4201)
#pragma warning (disable: 4214)
#pragma warning (disable: 4514)
#pragma warning (disable: 4032)
#pragma warning (disable: 4201)
#pragma warning (disable: 4214)
#include <windows.h>
#include <gl/gl.h>

#elif defined( MACOS_X )

#include "macosx_glimp.h"

#elif defined( __linux__ )

#include <GL/gl.h>
#include <GL/glx.h>
// bk001129 - from cvs1.17 (mkv)
#if defined( __FX__ )
#include <GL/fxmesa.h>
#endif

#elif defined( __FreeBSD__ ) // rb010123

#include <GL/gl.h>
#include <GL/glx.h>
#if defined( __FX__ )
#include <GL/fxmesa.h>
#endif

#else

#include <gl.h>

#endif


#ifndef APIENTRY
#define APIENTRY
#endif
#ifndef WINAPI
#define WINAPI
#endif


//===========================================================================

/*
** multitexture extension definitions
*/
#define GL_ACTIVE_TEXTURE_ARB               0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE_ARB        0x84E1
#define GL_MAX_ACTIVE_TEXTURES_ARB          0x84E2

#define GL_TEXTURE0_ARB                     0x84C0
#define GL_TEXTURE1_ARB                     0x84C1
#define GL_TEXTURE2_ARB                     0x84C2
#define GL_TEXTURE3_ARB                     0x84C3

// TTimo: FIXME
// linux needs those prototypes
// GL_VERSION_1_2 is defined after #include <gl.h>
#if !defined( GL_VERSION_1_2 ) || defined( __linux__ )
typedef void ( APIENTRY * PFNGLMULTITEXCOORD1DARBPROC )( GLenum target, GLdouble s );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD1DVARBPROC )( GLenum target, const GLdouble *v );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD1FARBPROC )( GLenum target, GLfloat s );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD1FVARBPROC )( GLenum target, const GLfloat *v );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD1IARBPROC )( GLenum target, GLint s );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD1IVARBPROC )( GLenum target, const GLint *v );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD1SARBPROC )( GLenum target, GLshort s );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD1SVARBPROC )( GLenum target, const GLshort *v );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD2DARBPROC )( GLenum target, GLdouble s, GLdouble t );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD2DVARBPROC )( GLenum target, const GLdouble *v );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD2FARBPROC )( GLenum target, GLfloat s, GLfloat t );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD2FVARBPROC )( GLenum target, const GLfloat *v );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD2IARBPROC )( GLenum target, GLint s, GLint t );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD2IVARBPROC )( GLenum target, const GLint *v );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD2SARBPROC )( GLenum target, GLshort s, GLshort t );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD2SVARBPROC )( GLenum target, const GLshort *v );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD3DARBPROC )( GLenum target, GLdouble s, GLdouble t, GLdouble r );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD3DVARBPROC )( GLenum target, const GLdouble *v );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD3FARBPROC )( GLenum target, GLfloat s, GLfloat t, GLfloat r );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD3FVARBPROC )( GLenum target, const GLfloat *v );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD3IARBPROC )( GLenum target, GLint s, GLint t, GLint r );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD3IVARBPROC )( GLenum target, const GLint *v );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD3SARBPROC )( GLenum target, GLshort s, GLshort t, GLshort r );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD3SVARBPROC )( GLenum target, const GLshort *v );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD4DARBPROC )( GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD4DVARBPROC )( GLenum target, const GLdouble *v );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD4FARBPROC )( GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD4FVARBPROC )( GLenum target, const GLfloat *v );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD4IARBPROC )( GLenum target, GLint s, GLint t, GLint r, GLint q );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD4IVARBPROC )( GLenum target, const GLint *v );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD4SARBPROC )( GLenum target, GLshort s, GLshort t, GLshort r, GLshort q );
typedef void ( APIENTRY * PFNGLMULTITEXCOORD4SVARBPROC )( GLenum target, const GLshort *v );
typedef void ( APIENTRY * PFNGLACTIVETEXTUREARBPROC )( GLenum target );
typedef void ( APIENTRY * PFNGLCLIENTACTIVETEXTUREARBPROC )( GLenum target );
#endif

/*
** extension constants
*/

// GL_ATI_pn_triangles
#ifndef GL_ATI_pn_triangles
#define GL_ATI_pn_triangles 1

// GR - update enumerants
#define GL_PN_TRIANGLES_ATI                         0x87F0
#define GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI   0x87F1
#define GL_PN_TRIANGLES_POINT_MODE_ATI              0x87F2
#define GL_PN_TRIANGLES_NORMAL_MODE_ATI             0x87F3
#define GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI       0x87F4
#define GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI       0x87F5
#define GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI        0x87F6
#define GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI      0x87F7
#define GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI   0x87F8

typedef void ( APIENTRY * PFNGLPNTRIANGLESIATIPROC )( GLenum pname, GLint param );
typedef void ( APIENTRY * PFNGLPNTRIANGLESFATIPROC )( GLenum pname, GLfloat param );
#endif

// for NV fog distance
#ifndef GL_NV_fog_distance
#define GL_FOG_DISTANCE_MODE_NV           0x855A
#define GL_EYE_RADIAL_NV                  0x855B
#define GL_EYE_PLANE_ABSOLUTE_NV          0x855C
/* reuse GL_EYE_PLANE */
#endif

// S3TC compression constants
#define GL_RGB_S3TC                         0x83A0
#define GL_RGB4_S3TC                        0x83A1

// GL_EXT_texture_compression_s3tc constants
#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT                   0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT                  0x83F1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT                  0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT                  0x83F3

// GL_EXT_texture_filter_anisotropic constants
#ifndef GL_EXT_texture_filter_anisotropic
#define GL_TEXTURE_MAX_ANISOTROPY_EXT     0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT 0x84FF
#endif

// extensions will be function pointers on all platforms
// The engine fills this table with the loaded OpenGL function pointers and
// hands it to the renderer module through refimport_t.
struct qglimport_s {

	void( APIENTRY * qglMultiTexCoord2fARB )( GLenum texture, GLfloat s, GLfloat t );
	void( APIENTRY * qglActiveTextureARB )( GLenum texture );
	void( APIENTRY * qglClientActiveTextureARB )( GLenum texture );

	void( APIENTRY * qglLockArraysEXT )( GLint, GLint );
	void( APIENTRY * qglUnlockArraysEXT )( void );

//----(SA)	added
	void( APIENTRY * qglPNTrianglesiATI )( GLenum pname, GLint param );
	void( APIENTRY * qglPNTrianglesfATI )( GLenum pname, GLfloat param );
//----(SA)	end

//===========================================================================


// windows systems use a function pointer for each call so we can load minidrivers

	void( APIENTRY * qglAccum )( GLenum op, GLfloat value );
	void( APIENTRY * qglAlphaFunc )( GLenum func, GLclampf ref );
	GLboolean( APIENTRY * qglAreTexturesResident )( GLsizei n, const GLuint *textures, GLboolean *residences );
	void( APIENTRY * qglArrayElement )( GLint i );
	void( APIENTRY * qglBegin )( GLenum mode );
	void( APIENTRY * qglBindTexture )( GLenum target, GLuint texture );
	void( APIENTRY * qglBitmap )( GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap );
	void( APIENTRY * qglBlendFunc )( GLenum sfactor, GLenum dfactor );
	void( APIENTRY * qglCallList )( GLuint list );
	void( APIENTRY * qglCallLists )( GLsizei n, GLenum type, const GLvoid *lists );
	void( APIENTRY * qglClear )( GLbitfield mask );
	void( APIENTRY * qglClearAccum )( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha );
	void( APIENTRY * qglClearColor )( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha );
	void( APIENTRY * qglClearDepth )( GLclampd depth );
	void( APIENTRY * qglClearIndex )( GLfloat c );
	void( APIENTRY * qglClearStencil )( GLint s );
	void( APIENTRY * qglClipPlane )( GLenum plane, const GLdouble *equation );
	void( APIENTRY * qglColor3b )( GLbyte red, GLbyte green, GLbyte blue );
	void( APIENTRY * qglColor3bv )( const GLbyte *v );
	void( APIENTRY * qglColor3d )( GLdouble red, GLdouble green, GLdouble blue );
	void( APIENTRY * qglColor3dv )( const GLdouble *v );
	void( APIENTRY * qglColor3f )( GLfloat red, GLfloat green, GLfloat blue );
	void( APIENTRY * qglColor3fv )( const GLfloat *v );
	void( APIENTRY * qglColor3i )( GLint red, GLint green, GLint blue );
	void( APIENTRY * qglColor3iv )( const GLint *v );
	void( APIENTRY * qglColor3s )( GLshort red, GLshort green, GLshort blue );
	void( APIENTRY * qglColor3sv )( const GLshort *v );
	void( APIENTRY * qglColor3ub )( GLubyte red, GLubyte green, GLubyte blue );
	void( APIENTRY * qglColor3ubv )( const GLubyte *v );
	void( APIENTRY * qglColor3ui )( GLuint red, GLuint green, GLuint blue );
	void( APIENTRY * qglColor3uiv )( const GLuint *v );
	void( APIENTRY * qglColor3us )( GLushort red, GLushort green, GLushort blue );
	void( APIENTRY * qglColor3usv )( const GLushort *v );
	void( APIENTRY * qglColor4b )( GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha );
	void( APIENTRY * qglColor4bv )( const GLbyte *v );
	void( APIENTRY * qglColor4d )( GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha );
	void( APIENTRY * qglColor4dv )( const GLdouble *v );
	void( APIENTRY * qglColor4f )( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha );
	void( APIENTRY * qglColor4fv )( const GLfloat *v );
	void( APIENTRY * qglColor4i )( GLint red, GLint green, GLint blue, GLint alpha );
	void( APIENTRY * qglColor4iv )( const GLint *v );
	void( APIENTRY * qglColor4s )( GLshort red, GLshort green, GLshort blue, GLshort alpha );
	void( APIENTRY * qglColor4sv )( const GLshort *v );
	void( APIENTRY * qglColor4ub )( GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha );
	void( APIENTRY * qglColor4ubv )( const GLubyte *v );
	void( APIENTRY * qglColor4ui )( GLuint red, GLuint green, GLuint blue, GLuint alpha );
	void( APIENTRY * qglColor4uiv )( const GLuint *v );
	void( APIENTRY * qglColor4us )( GLushort red, GLushort green, GLushort blue, GLushort alpha );
	void( APIENTRY * qglColor4usv )( const GLushort *v );
	void( APIENTRY * qglColorMask )( GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha );
	void( APIENTRY * qglColorMaterial )( GLenum face, GLenum mode );
	void( APIENTRY * qglColorPointer )( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
	void( APIENTRY * qglCopyPixels )( GLint x, GLint y, GLsizei width, GLsizei height, GLenum type );
	void( APIENTRY * qglCopyTexImage1D )( GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border );
	void( APIENTRY * qglCopyTexImage2D )( GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border );
	void( APIENTRY * qglCopyTexSubImage1D )( GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width );
	void( APIENTRY * qglCopyTexSubImage2D )( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height );
	void( APIENTRY * qglCullFace )( GLenum mode );
	void( APIENTRY * qglDeleteLists )( GLuint list, GLsizei range );
	void( APIENTRY * qglDeleteTextures )( GLsizei n, const GLuint *textures );
	void( APIENTRY * qglDepthFunc )( GLenum func );
	void( APIENTRY * qglDepthMask )( GLboolean flag );
	void( APIENTRY * qglDepthRange )( GLclampd zNear, GLclampd zFar );
	void( APIENTRY * qglDisable )( GLenum cap );
	void( APIENTRY * qglDisableClientState )( GLenum array );
	void( APIENTRY * qglDrawArrays )( GLenum mode, GLint first, GLsizei count );
	void( APIENTRY * qglDrawBuffer )( GLenum mode );
	void( APIENTRY * qglDrawElements )( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices );
	void( APIENTRY * qglDrawPixels )( GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels );
	void( APIENTRY * qglEdgeFlag )( GLboolean flag );
	void( APIENTRY * qglEdgeFlagPointer )( GLsizei stride, const GLvoid *pointer );
	void( APIENTRY * qglEdgeFlagv )( const GLboolean *flag );
	void( APIENTRY * qglEnable )( GLenum cap );
	void( APIENTRY * qglEnableClientState )( GLenum array );
	void( APIENTRY * qglEnd )( void );
	void( APIENTRY * qglEndList )( void );
	void( APIENTRY * qglEvalCoord1d )( GLdouble u );
	void( APIENTRY * qglEvalCoord1dv )( const GLdouble *u );
	void( APIENTRY * qglEvalCoord1f )( GLfloat u );
	void( APIENTRY * qglEvalCoord1fv )( const GLfloat *u );
	void( APIENTRY * qglEvalCoord2d )( GLdouble u, GLdouble v );
	void( APIENTRY * qglEvalCoord2dv )( const GLdouble *u );
	void( APIENTRY * qglEvalCoord2f )( GLfloat u, GLfloat v );
	void( APIENTRY * qglEvalCoord2fv )( const GLfloat *u );
	void( APIENTRY * qglEvalMesh1 )( GLenum mode, GLint i1, GLint i2 );
	void( APIENTRY * qglEvalMesh2 )( GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2 );
	void( APIENTRY * qglEvalPoint1 )( GLint i );
	void( APIENTRY * qglEvalPoint2 )( GLint i, GLint j );
	void( APIENTRY * qglFeedbackBuffer )( GLsizei size, GLenum type, GLfloat *buffer );
	void( APIENTRY * qglFinish )( void );
	void( APIENTRY * qglFlush )( void );
	void( APIENTRY * qglFogf )( GLenum pname, GLfloat param );
	void( APIENTRY * qglFogfv )( GLenum pname, const GLfloat *params );
	void( APIENTRY * qglFogi )( GLenum pname, GLint param );
	void( APIENTRY * qglFogiv )( GLenum pname, const GLint *params );
	void( APIENTRY * qglFrontFace )( GLenum mode );
	void( APIENTRY * qglFrustum )( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar );
	GLuint( APIENTRY * qglGenLists )( GLsizei range );
	void( APIENTRY * qglGenTextures )( GLsizei n, GLuint *textures );
	void( APIENTRY * qglGetBooleanv )( GLenum pname, GLboolean *params );
	void( APIENTRY * qglGetClipPlane )( GLenum plane, GLdouble *equation );
	void( APIENTRY * qglGetDoublev )( GLenum pname, GLdouble *params );
	GLenum( APIENTRY * qglGetError )( void );
	void( APIENTRY * qglGetFloatv )( GLenum pname, GLfloat *params );
	void( APIENTRY * qglGetIntegerv )( GLenum pname, GLint *params );
	void( APIENTRY * qglGetLightfv )( GLenum light, GLenum pname, GLfloat *params );
	void( APIENTRY * qglGetLightiv )( GLenum light, GLenum pname, GLint *params );
	void( APIENTRY * qglGetMapdv )( GLenum target, GLenum query, GLdouble *v );
	void( APIENTRY * qglGetMapfv )( GLenum target, GLenum query, GLfloat *v );
	void( APIENTRY * qglGetMapiv )( GLenum target, GLenum query, GLint *v );
	void( APIENTRY * qglGetMaterialfv )( GLenum face, GLenum pname, GLfloat *params );
	void( APIENTRY * qglGetMaterialiv )( GLenum face, GLenum pname, GLint *params );
	void( APIENTRY * qglGetPixelMapfv )( GLenum map, GLfloat *values );
	void( APIENTRY * qglGetPixelMapuiv )( GLenum map, GLuint *values );
	void( APIENTRY * qglGetPixelMapusv )( GLenum map, GLushort *values );
	void( APIENTRY * qglGetPointerv )( GLenum pname, GLvoid* *params );
	void( APIENTRY * qglGetPolygonStipple )( GLubyte *mask );
	const GLubyte * ( APIENTRY * qglGetString )( GLenum name );
	void( APIENTRY * qglGetTexEnvfv )( GLenum target, GLenum pname, GLfloat *params );
	void( APIENTRY * qglGetTexEnviv )( GLenum target, GLenum pname, GLint *params );
	void( APIENTRY * qglGetTexGendv )( GLenum coord, GLenum pname, GLdouble *params );
	void( APIENTRY * qglGetTexGenfv )( GLenum coord, GLenum pname, GLfloat *params );
	void( APIENTRY * qglGetTexGeniv )( GLenum coord, GLenum pname, GLint *params );
	void( APIENTRY * qglGetTexImage )( GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels );
	void( APIENTRY * qglGetTexLevelParameterfv )( GLenum target, GLint level, GLenum pname, GLfloat *params );
	void( APIENTRY * qglGetTexLevelParameteriv )( GLenum target, GLint level, GLenum pname, GLint *params );
	void( APIENTRY * qglGetTexParameterfv )( GLenum target, GLenum pname, GLfloat *params );
	void( APIENTRY * qglGetTexParameteriv )( GLenum target, GLenum pname, GLint *params );
	void( APIENTRY * qglHint )( GLenum target, GLenum mode );
	void( APIENTRY * qglIndexMask )( GLuint mask );
	void( APIENTRY * qglIndexPointer )( GLenum type, GLsizei stride, const GLvoid *pointer );
	void( APIENTRY * qglIndexd )( GLdouble c );
	void( APIENTRY * qglIndexdv )( const GLdouble *c );
	void( APIENTRY * qglIndexf )( GLfloat c );
	void( APIENTRY * qglIndexfv )( const GLfloat *c );
	void( APIENTRY * qglIndexi )( GLint c );
	void( APIENTRY * qglIndexiv )( const GLint *c );
	void( APIENTRY * qglIndexs )( GLshort c );
	void( APIENTRY * qglIndexsv )( const GLshort *c );
	void( APIENTRY * qglIndexub )( GLubyte c );
	void( APIENTRY * qglIndexubv )( const GLubyte *c );
	void( APIENTRY * qglInitNames )( void );
	void( APIENTRY * qglInterleavedArrays )( GLenum format, GLsizei stride, const GLvoid *pointer );
	GLboolean( APIENTRY * qglIsEnabled )( GLenum cap );
	GLboolean( APIENTRY * qglIsList )( GLuint list );
	GLboolean( APIENTRY * qglIsTexture )( GLuint texture );
	void( APIENTRY * qglLightModelf )( GLenum pname, GLfloat param );
	void( APIENTRY * qglLightModelfv )( GLenum pname, const GLfloat *params );
	void( APIENTRY * qglLightModeli )( GLenum pname, GLint param );
	void( APIENTRY * qglLightModeliv )( GLenum pname, const GLint *params );
	void( APIENTRY * qglLightf )( GLenum light, GLenum pname, GLfloat param );
	void( APIENTRY * qglLightfv )( GLenum light, GLenum pname, const GLfloat *params );
	void( APIENTRY * qglLighti )( GLenum light, GLenum pname, GLint param );
	void( APIENTRY * qglLightiv )( GLenum light, GLenum pname, const GLint *params );
	void( APIENTRY * qglLineStipple )( GLint factor, GLushort pattern );
	void( APIENTRY * qglLineWidth )( GLfloat width );
	void( APIENTRY * qglListBase )( GLuint base );
	void( APIENTRY * qglLoadIdentity )( void );
	void( APIENTRY * qglLoadMatrixd )( const GLdouble *m );
	void( APIENTRY * qglLoadMatrixf )( const GLfloat *m );
	void( APIENTRY * qglLoadName )( GLuint name );
	void( APIENTRY * qglLogicOp )( GLenum opcode );
	void( APIENTRY * qglMap1d )( GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points );
	void( APIENTRY * qglMap1f )( GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points );
	void( APIENTRY * qglMap2d )( GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points );
	void( APIENTRY * qglMap2f )( GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points );
	void( APIENTRY * qglMapGrid1d )( GLint un, GLdouble u1, GLdouble u2 );
	void( APIENTRY * qglMapGrid1f )( GLint un, GLfloat u1, GLfloat u2 );
	void( APIENTRY * qglMapGrid2d )( GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2 );
	void( APIENTRY * qglMapGrid2f )( GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2 );
	void( APIENTRY * qglMaterialf )( GLenum face, GLenum pname, GLfloat param );
	void( APIENTRY * qglMaterialfv )( GLenum face, GLenum pname, const GLfloat *params );
	void( APIENTRY * qglMateriali )( GLenum face, GLenum pname, GLint param );
	void( APIENTRY * qglMaterialiv )( GLenum face, GLenum pname, const GLint *params );
	void( APIENTRY * qglMatrixMode )( GLenum mode );
	void( APIENTRY * qglMultMatrixd )( const GLdouble *m );
	void( APIENTRY * qglMultMatrixf )( const GLfloat *m );
	void( APIENTRY * qglNewList )( GLuint list, GLenum mode );
	void( APIENTRY * qglNormal3b )( GLbyte nx, GLbyte ny, GLbyte nz );
	void( APIENTRY * qglNormal3bv )( const GLbyte *v );
	void( APIENTRY * qglNormal3d )( GLdouble nx, GLdouble ny, GLdouble nz );
	void( APIENTRY * qglNormal3dv )( const GLdouble *v );
	void( APIENTRY * qglNormal3f )( GLfloat nx, GLfloat ny, GLfloat nz );
	void( APIENTRY * qglNormal3fv )( const GLfloat *v );
	void( APIENTRY * qglNormal3i )( GLint nx, GLint ny, GLint nz );
	void( APIENTRY * qglNormal3iv )( const GLint *v );
	void( APIENTRY * qglNormal3s )( GLshort nx, GLshort ny, GLshort nz );
	void( APIENTRY * qglNormal3sv )( const GLshort *v );
	void( APIENTRY * qglNormalPointer )( GLenum type, GLsizei stride, const GLvoid *pointer );
	void( APIENTRY * qglOrtho )( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar );
	void( APIENTRY * qglPassThrough )( GLfloat token );
	void( APIENTRY * qglPixelMapfv )( GLenum map, GLsizei mapsize, const GLfloat *values );
	void( APIENTRY * qglPixelMapuiv )( GLenum map, GLsizei mapsize, const GLuint *values );
	void( APIENTRY * qglPixelMapusv )( GLenum map, GLsizei mapsize, const GLushort *values );
	void( APIENTRY * qglPixelStoref )( GLenum pname, GLfloat param );
	void( APIENTRY * qglPixelStorei )( GLenum pname, GLint param );
	void( APIENTRY * qglPixelTransferf )( GLenum pname, GLfloat param );
	void( APIENTRY * qglPixelTransferi )( GLenum pname, GLint param );
	void( APIENTRY * qglPixelZoom )( GLfloat xfactor, GLfloat yfactor );
	void( APIENTRY * qglPointSize )( GLfloat size );
	void( APIENTRY * qglPolygonMode )( GLenum face, GLenum mode );
	void( APIENTRY * qglPolygonOffset )( GLfloat factor, GLfloat units );
	void( APIENTRY * qglPolygonStipple )( const GLubyte *mask );
	void( APIENTRY * qglPopAttrib )( void );
	void( APIENTRY * qglPopClientAttrib )( void );
	void( APIENTRY * qglPopMatrix )( void );
	void( APIENTRY * qglPopName )( void );
	void( APIENTRY * qglPrioritizeTextures )( GLsizei n, const GLuint *textures, const GLclampf *priorities );
	void( APIENTRY * qglPushAttrib )( GLbitfield mask );
	void( APIENTRY * qglPushClientAttrib )( GLbitfield mask );
	void( APIENTRY * qglPushMatrix )( void );
	void( APIENTRY * qglPushName )( GLuint name );
	void( APIENTRY * qglRasterPos2d )( GLdouble x, GLdouble y );
	void( APIENTRY * qglRasterPos2dv )( const GLdouble *v );
	void( APIENTRY * qglRasterPos2f )( GLfloat x, GLfloat y );
	void( APIENTRY * qglRasterPos2fv )( const GLfloat *v );
	void( APIENTRY * qglRasterPos2i )( GLint x, GLint y );
	void( APIENTRY * qglRasterPos2iv )( const GLint *v );
	void( APIENTRY * qglRasterPos2s )( GLshort x, GLshort y );
	void( APIENTRY * qglRasterPos2sv )( const GLshort *v );
	void( APIENTRY * qglRasterPos3d )( GLdouble x, GLdouble y, GLdouble z );
	void( APIENTRY * qglRasterPos3dv )( const GLdouble *v );
	void( APIENTRY * qglRasterPos3f )( GLfloat x, GLfloat y, GLfloat z );
	void( APIENTRY * qglRasterPos3fv )( const GLfloat *v );
	void( APIENTRY * qglRasterPos3i )( GLint x, GLint y, GLint z );
	void( APIENTRY * qglRasterPos3iv )( const GLint *v );
	void( APIENTRY * qglRasterPos3s )( GLshort x, GLshort y, GLshort z );
	void( APIENTRY * qglRasterPos3sv )( const GLshort *v );
	void( APIENTRY * qglRasterPos4d )( GLdouble x, GLdouble y, GLdouble z, GLdouble w );
	void( APIENTRY * qglRasterPos4dv )( const GLdouble *v );
	void( APIENTRY * qglRasterPos4f )( GLfloat x, GLfloat y, GLfloat z, GLfloat w );
	void( APIENTRY * qglRasterPos4fv )( const GLfloat *v );
	void( APIENTRY * qglRasterPos4i )( GLint x, GLint y, GLint z, GLint w );
	void( APIENTRY * qglRasterPos4iv )( const GLint *v );
	void( APIENTRY * qglRasterPos4s )( GLshort x, GLshort y, GLshort z, GLshort w );
	void( APIENTRY * qglRasterPos4sv )( const GLshort *v );
	void( APIENTRY * qglReadBuffer )( GLenum mode );
	void( APIENTRY * qglReadPixels )( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels );
	void( APIENTRY * qglRectd )( GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2 );
	void( APIENTRY * qglRectdv )( const GLdouble *v1, const GLdouble *v2 );
	void( APIENTRY * qglRectf )( GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2 );
	void( APIENTRY * qglRectfv )( const GLfloat *v1, const GLfloat *v2 );
	void( APIENTRY * qglRecti )( GLint x1, GLint y1, GLint x2, GLint y2 );
	void( APIENTRY * qglRectiv )( const GLint *v1, const GLint *v2 );
	void( APIENTRY * qglRects )( GLshort x1, GLshort y1, GLshort x2, GLshort y2 );
	void( APIENTRY * qglRectsv )( const GLshort *v1, const GLshort *v2 );
	GLint( APIENTRY * qglRenderMode )( GLenum mode );
	void( APIENTRY * qglRotated )( GLdouble angle, GLdouble x, GLdouble y, GLdouble z );
	void( APIENTRY * qglRotatef )( GLfloat angle, GLfloat x, GLfloat y, GLfloat z );
	void( APIENTRY * qglScaled )( GLdouble x, GLdouble y, GLdouble z );
	void( APIENTRY * qglScalef )( GLfloat x, GLfloat y, GLfloat z );
	void( APIENTRY * qglScissor )( GLint x, GLint y, GLsizei width, GLsizei height );
	void( APIENTRY * qglSelectBuffer )( GLsizei size, GLuint *buffer );
	void( APIENTRY * qglShadeModel )( GLenum mode );
	void( APIENTRY * qglStencilFunc )( GLenum func, GLint ref, GLuint mask );
	void( APIENTRY * qglStencilMask )( GLuint mask );
	void( APIENTRY * qglStencilOp )( GLenum fail, GLenum zfail, GLenum zpass );
	void( APIENTRY * qglTexCoord1d )( GLdouble s );
	void( APIENTRY * qglTexCoord1dv )( const GLdouble *v );
	void( APIENTRY * qglTexCoord1f )( GLfloat s );
	void( APIENTRY * qglTexCoord1fv )( const GLfloat *v );
	void( APIENTRY * qglTexCoord1i )( GLint s );
	void( APIENTRY * qglTexCoord1iv )( const GLint *v );
	void( APIENTRY * qglTexCoord1s )( GLshort s );
	void( APIENTRY * qglTexCoord1sv )( const GLshort *v );
	void( APIENTRY * qglTexCoord2d )( GLdouble s, GLdouble t );
	void( APIENTRY * qglTexCoord2dv )( const GLdouble *v );
	void( APIENTRY * qglTexCoord2f )( GLfloat s, GLfloat t );
	void( APIENTRY * qglTexCoord2fv )( const GLfloat *v );
	void( APIENTRY * qglTexCoord2i )( GLint s, GLint t );
	void( APIENTRY * qglTexCoord2iv )( const GLint *v );
	void( APIENTRY * qglTexCoord2s )( GLshort s, GLshort t );
	void( APIENTRY * qglTexCoord2sv )( const GLshort *v );
	void( APIENTRY * qglTexCoord3d )( GLdouble s, GLdouble t, GLdouble r );
	void( APIENTRY * qglTexCoord3dv )( const GLdouble *v );
	void( APIENTRY * qglTexCoord3f )( GLfloat s, GLfloat t, GLfloat r );
	void( APIENTRY * qglTexCoord3fv )( const GLfloat *v );
	void( APIENTRY * qglTexCoord3i )( GLint s, GLint t, GLint r );
	void( APIENTRY * qglTexCoord3iv )( const GLint *v );
	void( APIENTRY * qglTexCoord3s )( GLshort s, GLshort t, GLshort r );
	void( APIENTRY * qglTexCoord3sv )( const GLshort *v );
	void( APIENTRY * qglTexCoord4d )( GLdouble s, GLdouble t, GLdouble r, GLdouble q );
	void( APIENTRY * qglTexCoord4dv )( const GLdouble *v );
	void( APIENTRY * qglTexCoord4f )( GLfloat s, GLfloat t, GLfloat r, GLfloat q );
	void( APIENTRY * qglTexCoord4fv )( const GLfloat *v );
	void( APIENTRY * qglTexCoord4i )( GLint s, GLint t, GLint r, GLint q );
	void( APIENTRY * qglTexCoord4iv )( const GLint *v );
	void( APIENTRY * qglTexCoord4s )( GLshort s, GLshort t, GLshort r, GLshort q );
	void( APIENTRY * qglTexCoord4sv )( const GLshort *v );
	void( APIENTRY * qglTexCoordPointer )( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
	void( APIENTRY * qglTexEnvf )( GLenum target, GLenum pname, GLfloat param );
	void( APIENTRY * qglTexEnvfv )( GLenum target, GLenum pname, const GLfloat *params );
	void( APIENTRY * qglTexEnvi )( GLenum target, GLenum pname, GLint param );
	void( APIENTRY * qglTexEnviv )( GLenum target, GLenum pname, const GLint *params );
	void( APIENTRY * qglTexGend )( GLenum coord, GLenum pname, GLdouble param );
	void( APIENTRY * qglTexGendv )( GLenum coord, GLenum pname, const GLdouble *params );
	void( APIENTRY * qglTexGenf )( GLenum coord, GLenum pname, GLfloat param );
	void( APIENTRY * qglTexGenfv )( GLenum coord, GLenum pname, const GLfloat *params );
	void( APIENTRY * qglTexGeni )( GLenum coord, GLenum pname, GLint param );
	void( APIENTRY * qglTexGeniv )( GLenum coord, GLenum pname, const GLint *params );
	void( APIENTRY * qglTexImage1D )( GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
	void( APIENTRY * qglTexImage2D )( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
	void( APIENTRY * qglTexParameterf )( GLenum target, GLenum pname, GLfloat param );
	void( APIENTRY * qglTexParameterfv )( GLenum target, GLenum pname, const GLfloat *params );
	void( APIENTRY * qglTexParameteri )( GLenum target, GLenum pname, GLint param );
	void( APIENTRY * qglTexParameteriv )( GLenum target, GLenum pname, const GLint *params );
	void( APIENTRY * qglTexSubImage1D )( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels );
	void( APIENTRY * qglTexSubImage2D )( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels );
	void( APIENTRY * qglTranslated )( GLdouble x, GLdouble y, GLdouble z );
	void( APIENTRY * qglTranslatef )( GLfloat x, GLfloat y, GLfloat z );
	void( APIENTRY * qglVertex2d )( GLdouble x, GLdouble y );
	void( APIENTRY * qglVertex2dv )( const GLdouble *v );
	void( APIENTRY * qglVertex2f )( GLfloat x, GLfloat y );
	void( APIENTRY * qglVertex2fv )( const GLfloat *v );
	void( APIENTRY * qglVertex2i )( GLint x, GLint y );
	void( APIENTRY * qglVertex2iv )( const GLint *v );
	void( APIENTRY * qglVertex2s )( GLshort x, GLshort y );
	void( APIENTRY * qglVertex2sv )( const GLshort *v );
	void( APIENTRY * qglVertex3d )( GLdouble x, GLdouble y, GLdouble z );
	void( APIENTRY * qglVertex3dv )( const GLdouble *v );
	void( APIENTRY * qglVertex3f )( GLfloat x, GLfloat y, GLfloat z );
	void( APIENTRY * qglVertex3fv )( const GLfloat *v );
	void( APIENTRY * qglVertex3i )( GLint x, GLint y, GLint z );
	void( APIENTRY * qglVertex3iv )( const GLint *v );
	void( APIENTRY * qglVertex3s )( GLshort x, GLshort y, GLshort z );
	void( APIENTRY * qglVertex3sv )( const GLshort *v );
	void( APIENTRY * qglVertex4d )( GLdouble x, GLdouble y, GLdouble z, GLdouble w );
	void( APIENTRY * qglVertex4dv )( const GLdouble *v );
	void( APIENTRY * qglVertex4f )( GLfloat x, GLfloat y, GLfloat z, GLfloat w );
	void( APIENTRY * qglVertex4fv )( const GLfloat *v );
	void( APIENTRY * qglVertex4i )( GLint x, GLint y, GLint z, GLint w );
	void( APIENTRY * qglVertex4iv )( const GLint *v );
	void( APIENTRY * qglVertex4s )( GLshort x, GLshort y, GLshort z, GLshort w );
	void( APIENTRY * qglVertex4sv )( const GLshort *v );
	void( APIENTRY * qglVertexPointer )( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
	void( APIENTRY * qglViewport )( GLint x, GLint y, GLsizei width, GLsizei height );

#if defined( _WIN32 )

	int( WINAPI * qwglChoosePixelFormat )( HDC, CONST PIXELFORMATDESCRIPTOR * );
	int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
	int( WINAPI * qwglGetPixelFormat )( HDC );
	BOOL( WINAPI * qwglSetPixelFormat )( HDC, int, CONST PIXELFORMATDESCRIPTOR * );
	BOOL( WINAPI * qwglSwapBuffers )( HDC );

	BOOL( WINAPI * qwglGetDeviceGammaRamp3DFX )( HDC, LPVOID );
	BOOL( WINAPI * qwglSetDeviceGammaRamp3DFX )( HDC, LPVOID );

	BOOL( WINAPI * qwglCopyContext )( HGLRC, HGLRC, UINT );
	HGLRC( WINAPI * qwglCreateContext )( HDC );
	HGLRC( WINAPI * qwglCreateLayerContext )( HDC, int );
	BOOL( WINAPI * qwglDeleteContext )( HGLRC );
	HGLRC( WINAPI * qwglGetCurrentContext )( VOID );
	HDC( WINAPI * qwglGetCurrentDC )( VOID );
	PROC( WINAPI * qwglGetProcAddress )( LPCSTR );
	BOOL( WINAPI * qwglMakeCurrent )( HDC, HGLRC );
	BOOL( WINAPI * qwglShareLists )( HGLRC, HGLRC );
	BOOL( WINAPI * qwglUseFontBitmaps )( HDC, DWORD, DWORD, DWORD );

	BOOL( WINAPI * qwglUseFontOutlines )( HDC, DWORD, DWORD, DWORD, FLOAT,
										  FLOAT, int, LPGLYPHMETRICSFLOAT );

	BOOL( WINAPI * qwglDescribeLayerPlane )( HDC, int, int, UINT,
											 LPLAYERPLANEDESCRIPTOR );
	int( WINAPI * qwglSetLayerPaletteEntries )( HDC, int, int, int,
												CONST COLORREF * );
	int( WINAPI * qwglGetLayerPaletteEntries )( HDC, int, int, int,
												COLORREF * );
	BOOL( WINAPI * qwglRealizeLayerPalette )( HDC, int, BOOL );
	BOOL( WINAPI * qwglSwapLayerBuffers )( HDC, UINT );

	BOOL( WINAPI * qwglSwapIntervalEXT )( int interval );

#endif  // _WIN32

#if ( ( defined __linux__ )  || ( defined __FreeBSD__ ) ) // rb010123

//FX Mesa Functions
// bk001129 - from cvs1.17 (mkv)
#if defined ( __FX__ )
	fxMesaContext ( *qfxMesaCreateContext )( GLuint win, GrScreenResolution_t, GrScreenRefresh_t, const GLint attribList[] );
	fxMesaContext ( *qfxMesaCreateBestContext )( GLuint win, GLint width, GLint height, const GLint attribList[] );
	void ( *qfxMesaDestroyContext )( fxMesaContext ctx );
	void ( *qfxMesaMakeCurrent )( fxMesaContext ctx );
	fxMesaContext ( *qfxMesaGetCurrentContext )( void );
	void ( *qfxMesaSwapBuffers )( void );
#endif

//GLX Functions
	XVisualInfo * ( *qglXChooseVisual )( Display * dpy, int screen, int *attribList );
	GLXContext ( *qglXCreateContext )( Display *dpy, XVisualInfo *vis, GLXContext shareList, Bool direct );
	void ( *qglXDestroyContext )( Display *dpy, GLXContext ctx );
	Bool ( *qglXMakeCurrent )( Display *dpy, GLXDrawable drawable, GLXContext ctx );
	void ( *qglXCopyContext )( Display *dpy, GLXContext src, GLXContext dst, GLuint mask );
	void ( *qglXSwapBuffers )( Display *dpy, GLXDrawable drawable );

#endif // __linux__ || __FreeBSD__ // rb010123
};

#ifndef REFDLL

extern void( APIENTRY * qglMultiTexCoord2fARB )( GLenum texture, GLfloat s, GLfloat t );
extern void( APIENTRY * qglActiveTextureARB )( GLenum texture );
extern void( APIENTRY * qglClientActiveTextureARB )( GLenum texture );

extern void( APIENTRY * qglLockArraysEXT )( GLint, GLint );
extern void( APIENTRY * qglUnlockArraysEXT )( void );

//----(SA)	added
extern void( APIENTRY * qglPNTrianglesiATI )( GLenum pname, GLint param );
extern void( APIENTRY * qglPNTrianglesfATI )( GLenum pname, GLfloat param );
//----(SA)	end

//===========================================================================


// windows systems use a function pointer for each call so we can load minidrivers

extern void( APIENTRY * qglAccum )( GLenum op, GLfloat value );
extern void( APIENTRY * qglAlphaFunc )( GLenum func, GLclampf ref );
extern GLboolean( APIENTRY * qglAreTexturesResident )( GLsizei n, const GLuint *textures, GLboolean *residences );
extern void( APIENTRY * qglArrayElement )( GLint i );
extern void( APIENTRY * qglBegin )( GLenum mode );
extern void( APIENTRY * qglBindTexture )( GLenum target, GLuint texture );
extern void( APIENTRY * qglBitmap )( GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap );
extern void( APIENTRY * qglBlendFunc )( GLenum sfactor, GLenum dfactor );
extern void( APIENTRY * qglCallList )( GLuint list );
extern void( APIENTRY * qglCallLists )( GLsizei n, GLenum type, const GLvoid *lists );
extern void( APIENTRY * qglClear )( GLbitfield mask );
extern void( APIENTRY * qglClearAccum )( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha );
extern void( APIENTRY * qglClearColor )( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha );
extern void( APIENTRY * qglClearDepth )( GLclampd depth );
extern void( APIENTRY * qglClearIndex )( GLfloat c );
extern void( APIENTRY * qglClearStencil )( GLint s );
extern void( APIENTRY * qglClipPlane )( GLenum plane, const GLdouble *equation );
extern void( APIENTRY * qglColor3b )( GLbyte red, GLbyte green, GLbyte blue );
extern void( APIENTRY * qglColor3bv )( const GLbyte *v );
extern void( APIENTRY * qglColor3d )( GLdouble red, GLdouble green, GLdouble blue );
extern void( APIENTRY * qglColor3dv )( const GLdouble *v );
extern void( APIENTRY * qglColor3f )( GLfloat red, GLfloat green, GLfloat blue );
extern void( APIENTRY * qglColor3fv )( const GLfloat *v );
extern void( APIENTRY * qglColor3i )( GLint red, GLint green, GLint blue );
extern void( APIENTRY * qglColor3iv )( const GLint *v );
extern void( APIENTRY * qglColor3s )( GLshort red, GLshort green, GLshort blue );
extern void( APIENTRY * qglColor3sv )( const GLshort *v );
extern void( APIENTRY * qglColor3ub )( GLubyte red, GLubyte green, GLubyte blue );
extern void( APIENTRY * qglColor3ubv )( const GLubyte *v );
extern void( APIENTRY * qglColor3ui )( GLuint red, GLuint green, GLuint blue );
extern void( APIENTRY * qglColor3uiv )( const GLuint *v );
extern void( APIENTRY * qglColor3us )( GLushort red, GLushort green, GLushort blue );
extern void( APIENTRY * qglColor3usv )( const GLushort *v );
extern void( APIENTRY * qglColor4b )( GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha );
extern void( APIENTRY * qglColor4bv )( const GLbyte *v );
extern void( APIENTRY * qglColor4d )( GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha );
extern void( APIENTRY * qglColor4dv )( const GLdouble *v );
extern void( APIENTRY * qglColor4f )( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha );
extern void( APIENTRY * qglColor4fv )( const GLfloat *v );
extern void( APIENTRY * qglColor4i )( GLint red, GLint green, GLint blue, GLint alpha );
extern void( APIENTRY * qglColor4iv )( const GLint *v );
extern void( APIENTRY * qglColor4s )( GLshort red, GLshort green, GLshort blue, GLshort alpha );
extern void( APIENTRY * qglColor4sv )( const GLshort *v );
extern void( APIENTRY * qglColor4ub )( GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha );
extern void( APIENTRY * qglColor4ubv )( const GLubyte *v );
extern void( APIENTRY * qglColor4ui )( GLuint red, GLuint green, GLuint blue, GLuint alpha );
extern void( APIENTRY * qglColor4uiv )( const GLuint *v );
extern void( APIENTRY * qglColor4us )( GLushort red, GLushort green, GLushort blue, GLushort alpha );
extern void( APIENTRY * qglColor4usv )( const GLushort *v );
extern void( APIENTRY * qglColorMask )( GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha );
extern void( APIENTRY * qglColorMaterial )( GLenum face, GLenum mode );
extern void( APIENTRY * qglColorPointer )( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
extern void( APIENTRY * qglCopyPixels )( GLint x, GLint y, GLsizei width, GLsizei height, GLenum type );
extern void( APIENTRY * qglCopyTexImage1D )( GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border );
extern void( APIENTRY * qglCopyTexImage2D )( GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border );
extern void( APIENTRY * qglCopyTexSubImage1D )( GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width );
extern void( APIENTRY * qglCopyTexSubImage2D )( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height );
extern void( APIENTRY * qglCullFace )( GLenum mode );
extern void( APIENTRY * qglDeleteLists )( GLuint list, GLsizei range );
extern void( APIENTRY * qglDeleteTextures )( GLsizei n, const GLuint *textures );
extern void( APIENTRY * qglDepthFunc )( GLenum func );
extern void( APIENTRY * qglDepthMask )( GLboolean flag );
extern void( APIENTRY * qglDepthRange )( GLclampd zNear, GLclampd zFar );
extern void( APIENTRY * qglDisable )( GLenum cap );
extern void( APIENTRY * qglDisableClientState )( GLenum array );
extern void( APIENTRY * qglDrawArrays )( GLenum mode, GLint first, GLsizei count );
extern void( APIENTRY * qglDrawBuffer )( GLenum mode );
extern void( APIENTRY * qglDrawElements )( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices );
extern void( APIENTRY * qglDrawPixels )( GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels );
extern void( APIENTRY * qglEdgeFlag )( GLboolean flag );
extern void( APIENTRY * qglEdgeFlagPointer )( GLsizei stride, const GLvoid *pointer );
extern void( APIENTRY * qglEdgeFlagv )( const GLboolean *flag );
extern void( APIENTRY * qglEnable )( GLenum cap );
extern void( APIENTRY * qglEnableClientState )( GLenum array );
extern void( APIENTRY * qglEnd )( void );
extern void( APIENTRY * qglEndList )( void );
extern void( APIENTRY * qglEvalCoord1d )( GLdouble u );
extern void( APIENTRY * qglEvalCoord1dv )( const GLdouble *u );
extern void( APIENTRY * qglEvalCoord1f )( GLfloat u );
extern void( APIENTRY * qglEvalCoord1fv )( const GLfloat *u );
extern void( APIENTRY * qglEvalCoord2d )( GLdouble u, GLdouble v );
extern void( APIENTRY * qglEvalCoord2dv )( const GLdouble *u );
extern void( APIENTRY * qglEvalCoord2f )( GLfloat u, GLfloat v );
extern void( APIENTRY * qglEvalCoord2fv )( const GLfloat *u );
extern void( APIENTRY * qglEvalMesh1 )( GLenum mode, GLint i1, GLint i2 );
extern void( APIENTRY * qglEvalMesh2 )( GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2 );
extern void( APIENTRY * qglEvalPoint1 )( GLint i );
extern void( APIENTRY * qglEvalPoint2 )( GLint i, GLint j );
extern void( APIENTRY * qglFeedbackBuffer )( GLsizei size, GLenum type, GLfloat *buffer );
extern void( APIENTRY * qglFinish )( void );
extern void( APIENTRY * qglFlush )( void );
extern void( APIENTRY * qglFogf )( GLenum pname, GLfloat param );
extern void( APIENTRY * qglFogfv )( GLenum pname, const GLfloat *params );
extern void( APIENTRY * qglFogi )( GLenum pname, GLint param );
extern void( APIENTRY * qglFogiv )( GLenum pname, const GLint *params );
extern void( APIENTRY * qglFrontFace )( GLenum mode );
extern void( APIENTRY * qglFrustum )( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar );
extern GLuint( APIENTRY * qglGenLists )( GLsizei range );
extern void( APIENTRY * qglGenTextures )( GLsizei n, GLuint *textures );
extern void( APIENTRY * qglGetBooleanv )( GLenum pname, GLboolean *params );
extern void( APIENTRY * qglGetClipPlane )( GLenum plane, GLdouble *equation );
extern void( APIENTRY * qglGetDoublev )( GLenum pname, GLdouble *params );
extern GLenum( APIENTRY * qglGetError )( void );
extern void( APIENTRY * qglGetFloatv )( GLenum pname, GLfloat *params );
extern void( APIENTRY * qglGetIntegerv )( GLenum pname, GLint *params );
extern void( APIENTRY * qglGetLightfv )( GLenum light, GLenum pname, GLfloat *params );
extern void( APIENTRY * qglGetLightiv )( GLenum light, GLenum pname, GLint *params );
extern void( APIENTRY * qglGetMapdv )( GLenum target, GLenum query, GLdouble *v );
extern void( APIENTRY * qglGetMapfv )( GLenum target, GLenum query, GLfloat *v );
extern void( APIENTRY * qglGetMapiv )( GLenum target, GLenum query, GLint *v );
extern void( APIENTRY * qglGetMaterialfv )( GLenum face, GLenum pname, GLfloat *params );
extern void( APIENTRY * qglGetMaterialiv )( GLenum face, GLenum pname, GLint *params );
extern void( APIENTRY * qglGetPixelMapfv )( GLenum map, GLfloat *values );
extern void( APIENTRY * qglGetPixelMapuiv )( GLenum map, GLuint *values );
extern void( APIENTRY * qglGetPixelMapusv )( GLenum map, GLushort *values );
extern void( APIENTRY * qglGetPointerv )( GLenum pname, GLvoid* *params );
extern void( APIENTRY * qglGetPolygonStipple )( GLubyte *mask );
extern const GLubyte * ( APIENTRY * qglGetString )( GLenum name );
extern void( APIENTRY * qglGetTexEnvfv )( GLenum target, GLenum pname, GLfloat *params );
extern void( APIENTRY * qglGetTexEnviv )( GLenum target, GLenum pname, GLint *params );
extern void( APIENTRY * qglGetTexGendv )( GLenum coord, GLenum pname, GLdouble *params );
extern void( APIENTRY * qglGetTexGenfv )( GLenum coord, GLenum pname, GLfloat *params );
extern void( APIENTRY * qglGetTexGeniv )( GLenum coord, GLenum pname, GLint *params );
extern void( APIENTRY * qglGetTexImage )( GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels );
extern void( APIENTRY * qglGetTexLevelParameterfv )( GLenum target, GLint level, GLenum pname, GLfloat *params );
extern void( APIENTRY * qglGetTexLevelParameteriv )( GLenum target, GLint level, GLenum pname, GLint *params );
extern void( APIENTRY * qglGetTexParameterfv )( GLenum target, GLenum pname, GLfloat *params );
extern void( APIENTRY * qglGetTexParameteriv )( GLenum target, GLenum pname, GLint *params );
extern void( APIENTRY * qglHint )( GLenum target, GLenum mode );
extern void( APIENTRY * qglIndexMask )( GLuint mask );
extern void( APIENTRY * qglIndexPointer )( GLenum type, GLsizei stride, const GLvoid *pointer );
extern void( APIENTRY * qglIndexd )( GLdouble c );
extern void( APIENTRY * qglIndexdv )( const GLdouble *c );
extern void( APIENTRY * qglIndexf )( GLfloat c );
extern void( APIENTRY * qglIndexfv )( const GLfloat *c );
extern void( APIENTRY * qglIndexi )( GLint c );
extern void( APIENTRY * qglIndexiv )( const GLint *c );
extern void( APIENTRY * qglIndexs )( GLshort c );
extern void( APIENTRY * qglIndexsv )( const GLshort *c );
extern void( APIENTRY * qglIndexub )( GLubyte c );
extern void( APIENTRY * qglIndexubv )( const GLubyte *c );
extern void( APIENTRY * qglInitNames )( void );
extern void( APIENTRY * qglInterleavedArrays )( GLenum format, GLsizei stride, const GLvoid *pointer );
extern GLboolean( APIENTRY * qglIsEnabled )( GLenum cap );
extern GLboolean( APIENTRY * qglIsList )( GLuint list );
extern GLboolean( APIENTRY * qglIsTexture )( GLuint texture );
extern void( APIENTRY * qglLightModelf )( GLenum pname, GLfloat param );
extern void( APIENTRY * qglLightModelfv )( GLenum pname, const GLfloat *params );
extern void( APIENTRY * qglLightModeli )( GLenum pname, GLint param );
extern void( APIENTRY * qglLightModeliv )( GLenum pname, const GLint *params );
extern void( APIENTRY * qglLightf )( GLenum light, GLenum pname, GLfloat param );
extern void( APIENTRY * qglLightfv )( GLenum light, GLenum pname, const GLfloat *params );
extern void( APIENTRY * qglLighti )( GLenum light, GLenum pname, GLint param );
extern void( APIENTRY * qglLightiv )( GLenum light, GLenum pname, const GLint *params );
extern void( APIENTRY * qglLineStipple )( GLint factor, GLushort pattern );
extern void( APIENTRY * qglLineWidth )( GLfloat width );
extern void( APIENTRY * qglListBase )( GLuint base );
extern void( APIENTRY * qglLoadIdentity )( void );
extern void( APIENTRY * qglLoadMatrixd )( const GLdouble *m );
extern void( APIENTRY * qglLoadMatrixf )( const GLfloat *m );
extern void( APIENTRY * qglLoadName )( GLuint name );
extern void( APIENTRY * qglLogicOp )( GLenum opcode );
extern void( APIENTRY * qglMap1d )( GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points );
extern void( APIENTRY * qglMap1f )( GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points );
extern void( APIENTRY * qglMap2d )( GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points );
extern void( APIENTRY * qglMap2f )( GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points );
extern void( APIENTRY * qglMapGrid1d )( GLint un, GLdouble u1, GLdouble u2 );
extern void( APIENTRY * qglMapGrid1f )( GLint un, GLfloat u1, GLfloat u2 );
extern void( APIENTRY * qglMapGrid2d )( GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2 );
extern void( APIENTRY * qglMapGrid2f )( GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2 );
extern void( APIENTRY * qglMaterialf )( GLenum face, GLenum pname, GLfloat param );
extern void( APIENTRY * qglMaterialfv )( GLenum face, GLenum pname, const GLfloat *params );
extern void( APIENTRY * qglMateriali )( GLenum face, GLenum pname, GLint param );
extern void( APIENTRY * qglMaterialiv )( GLenum face, GLenum pname, const GLint *params );
extern void( APIENTRY * qglMatrixMode )( GLenum mode );
extern void( APIENTRY * qglMultMatrixd )( const GLdouble *m );
extern void( APIENTRY * qglMultMatrixf )( const GLfloat *m );
extern void( APIENTRY * qglNewList )( GLuint list, GLenum mode );
extern void( APIENTRY * qglNormal3b )( GLbyte nx, GLbyte ny, GLbyte nz );
extern void( APIENTRY * qglNormal3bv )( const GLbyte *v );
extern void( APIENTRY * qglNormal3d )( GLdouble nx, GLdouble ny, GLdouble nz );
extern void( APIENTRY * qglNormal3dv )( const GLdouble *v );
extern void( APIENTRY * qglNormal3f )( GLfloat nx, GLfloat ny, GLfloat nz );
extern void( APIENTRY * qglNormal3fv )( const GLfloat *v );
extern void( APIENTRY * qglNormal3i )( GLint nx, GLint ny, GLint nz );
extern void( APIENTRY * qglNormal3iv )( const GLint *v );
extern void( APIENTRY * qglNormal3s )( GLshort nx, GLshort ny, GLshort nz );
extern void( APIENTRY * qglNormal3sv )( const GLshort *v );
extern void( APIENTRY * qglNormalPointer )( GLenum type, GLsizei stride, const GLvoid *pointer );
extern void( APIENTRY * qglOrtho )( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar );
extern void( APIENTRY * qglPassThrough )( GLfloat token );
extern void( APIENTRY * qglPixelMapfv )( GLenum map, GLsizei mapsize, const GLfloat *values );
extern void( APIENTRY * qglPixelMapuiv )( GLenum map, GLsizei mapsize, const GLuint *values );
extern void( APIENTRY * qglPixelMapusv )( GLenum map, GLsizei mapsize, const GLushort *values );
extern void( APIENTRY * qglPixelStoref )( GLenum pname, GLfloat param );
extern void( APIENTRY * qglPixelStorei )( GLenum pname, GLint param );
extern void( APIENTRY * qglPixelTransferf )( GLenum pname, GLfloat param );
extern void( APIENTRY * qglPixelTransferi )( GLenum pname, GLint param );
extern void( APIENTRY * qglPixelZoom )( GLfloat xfactor, GLfloat yfactor );
extern void( APIENTRY * qglPointSize )( GLfloat size );
extern void( APIENTRY * qglPolygonMode )( GLenum face, GLenum mode );
extern void( APIENTRY * qglPolygonOffset )( GLfloat factor, GLfloat units );
extern void( APIENTRY * qglPolygonStipple )( const GLubyte *mask );
extern void( APIENTRY * qglPopAttrib )( void );
extern void( APIENTRY * qglPopClientAttrib )( void );
extern void( APIENTRY * qglPopMatrix )( void );
extern void( APIENTRY * qglPopName )( void );
extern void( APIENTRY * qglPrioritizeTextures )( GLsizei n, const GLuint *textures, const GLclampf *priorities );
extern void( APIENTRY * qglPushAttrib )( GLbitfield mask );
extern void( APIENTRY * qglPushClientAttrib )( GLbitfield mask );
extern void( APIENTRY * qglPushMatrix )( void );
extern void( APIENTRY * qglPushName )( GLuint name );
extern void( APIENTRY * qglRasterPos2d )( GLdouble x, GLdouble y );
extern void( APIENTRY * qglRasterPos2dv )( const GLdouble *v );
extern void( APIENTRY * qglRasterPos2f )( GLfloat x, GLfloat y );
extern void( APIENTRY * qglRasterPos2fv )( const GLfloat *v );
extern void( APIENTRY * qglRasterPos2i )( GLint x, GLint y );
extern void( APIENTRY * qglRasterPos2iv )( const GLint *v );
extern void( APIENTRY * qglRasterPos2s )( GLshort x, GLshort y );
extern void( APIENTRY * qglRasterPos2sv )( const GLshort *v );
extern void( APIENTRY * qglRasterPos3d )( GLdouble x, GLdouble y, GLdouble z );
extern void( APIENTRY * qglRasterPos3dv )( const GLdouble *v );
extern void( APIENTRY * qglRasterPos3f )( GLfloat x, GLfloat y, GLfloat z );
extern void( APIENTRY * qglRasterPos3fv )( const GLfloat *v );
extern void( APIENTRY * qglRasterPos3i )( GLint x, GLint y, GLint z );
extern void( APIENTRY * qglRasterPos3iv )( const GLint *v );
extern void( APIENTRY * qglRasterPos3s )( GLshort x, GLshort y, GLshort z );
extern void( APIENTRY * qglRasterPos3sv )( const GLshort *v );
extern void( APIENTRY * qglRasterPos4d )( GLdouble x, GLdouble y, GLdouble z, GLdouble w );
extern void( APIENTRY * qglRasterPos4dv )( const GLdouble *v );
extern void( APIENTRY * qglRasterPos4f )( GLfloat x, GLfloat y, GLfloat z, GLfloat w );
extern void( APIENTRY * qglRasterPos4fv )( const GLfloat *v );
extern void( APIENTRY * qglRasterPos4i )( GLint x, GLint y, GLint z, GLint w );
extern void( APIENTRY * qglRasterPos4iv )( const GLint *v );
extern void( APIENTRY * qglRasterPos4s )( GLshort x, GLshort y, GLshort z, GLshort w );
extern void( APIENTRY * qglRasterPos4sv )( const GLshort *v );
extern void( APIENTRY * qglReadBuffer )( GLenum mode );
extern void( APIENTRY * qglReadPixels )( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels );
extern void( APIENTRY * qglRectd )( GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2 );
extern void( APIENTRY * qglRectdv )( const GLdouble *v1, const GLdouble *v2 );
extern void( APIENTRY * qglRectf )( GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2 );
extern void( APIENTRY * qglRectfv )( const GLfloat *v1, const GLfloat *v2 );
extern void( APIENTRY * qglRecti )( GLint x1, GLint y1, GLint x2, GLint y2 );
extern void( APIENTRY * qglRectiv )( const GLint *v1, const GLint *v2 );
extern void( APIENTRY * qglRects )( GLshort x1, GLshort y1, GLshort x2, GLshort y2 );
extern void( APIENTRY * qglRectsv )( const GLshort *v1, const GLshort *v2 );
extern GLint( APIENTRY * qglRenderMode )( GLenum mode );
extern void( APIENTRY * qglRotated )( GLdouble angle, GLdouble x, GLdouble y, GLdouble z );
extern void( APIENTRY * qglRotatef )( GLfloat angle, GLfloat x, GLfloat y, GLfloat z );
extern void( APIENTRY * qglScaled )( GLdouble x, GLdouble y, GLdouble z );
extern void( APIENTRY * qglScalef )( GLfloat x, GLfloat y, GLfloat z );
extern void( APIENTRY * qglScissor )( GLint x, GLint y, GLsizei width, GLsizei height );
extern void( APIENTRY * qglSelectBuffer )( GLsizei size, GLuint *buffer );
extern void( APIENTRY * qglShadeModel )( GLenum mode );
extern void( APIENTRY * qglStencilFunc )( GLenum func, GLint ref, GLuint mask );
extern void( APIENTRY * qglStencilMask )( GLuint mask );
extern void( APIENTRY * qglStencilOp )( GLenum fail, GLenum zfail, GLenum zpass );
extern void( APIENTRY * qglTexCoord1d )( GLdouble s );
extern void( APIENTRY * qglTexCoord1dv )( const GLdouble *v );
extern void( APIENTRY * qglTexCoord1f )( GLfloat s );
extern void( APIENTRY * qglTexCoord1fv )( const GLfloat *v );
extern void( APIENTRY * qglTexCoord1i )( GLint s );
extern void( APIENTRY * qglTexCoord1iv )( const GLint *v );
extern void( APIENTRY * qglTexCoord1s )( GLshort s );
extern void( APIENTRY * qglTexCoord1sv )( const GLshort *v );
extern void( APIENTRY * qglTexCoord2d )( GLdouble s, GLdouble t );
extern void( APIENTRY * qglTexCoord2dv )( const GLdouble *v );
extern void( APIENTRY * qglTexCoord2f )( GLfloat s, GLfloat t );
extern void( APIENTRY * qglTexCoord2fv )( const GLfloat *v );
extern void( APIENTRY * qglTexCoord2i )( GLint s, GLint t );
extern void( APIENTRY * qglTexCoord2iv )( const GLint *v );
extern void( APIENTRY * qglTexCoord2s )( GLshort s, GLshort t );
extern void( APIENTRY * qglTexCoord2sv )( const GLshort *v );
extern void( APIENTRY * qglTexCoord3d )( GLdouble s, GLdouble t, GLdouble r );
extern void( APIENTRY * qglTexCoord3dv )( const GLdouble *v );
extern void( APIENTRY * qglTexCoord3f )( GLfloat s, GLfloat t, GLfloat r );
extern void( APIENTRY * qglTexCoord3fv )( const GLfloat *v );
extern void( APIENTRY * qglTexCoord3i )( GLint s, GLint t, GLint r );
extern void( APIENTRY * qglTexCoord3iv )( const GLint *v );
extern void( APIENTRY * qglTexCoord3s )( GLshort s, GLshort t, GLshort r );
extern void( APIENTRY * qglTexCoord3sv )( const GLshort *v );
extern void( APIENTRY * qglTexCoord4d )( GLdouble s, GLdouble t, GLdouble r, GLdouble q );
extern void( APIENTRY * qglTexCoord4dv )( const GLdouble *v );
extern void( APIENTRY * qglTexCoord4f )( GLfloat s, GLfloat t, GLfloat r, GLfloat q );
extern void( APIENTRY * qglTexCoord4fv )( const GLfloat *v );
extern void( APIENTRY * qglTexCoord4i )( GLint s, GLint t, GLint r, GLint q );
extern void( APIENTRY * qglTexCoord4iv )( const GLint *v );
extern void( APIENTRY * qglTexCoord4s )( GLshort s, GLshort t, GLshort r, GLshort q );
extern void( APIENTRY * qglTexCoord4sv )( const GLshort *v );
extern void( APIENTRY * qglTexCoordPointer )( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
extern void( APIENTRY * qglTexEnvf )( GLenum target, GLenum pname, GLfloat param );
extern void( APIENTRY * qglTexEnvfv )( GLenum target, GLenum pname, const GLfloat *params );
extern void( APIENTRY * qglTexEnvi )( GLenum target, GLenum pname, GLint param );
extern void( APIENTRY * qglTexEnviv )( GLenum target, GLenum pname, const GLint *params );
extern void( APIENTRY * qglTexGend )( GLenum coord, GLenum pname, GLdouble param );
extern void( APIENTRY * qglTexGendv )( GLenum coord, GLenum pname, const GLdouble *params );
extern void( APIENTRY * qglTexGenf )( GLenum coord, GLenum pname, GLfloat param );
extern void( APIENTRY * qglTexGenfv )( GLenum coord, GLenum pname, const GLfloat *params );
extern void( APIENTRY * qglTexGeni )( GLenum coord, GLenum pname, GLint param );
extern void( APIENTRY * qglTexGeniv )( GLenum coord, GLenum pname, const GLint *params );
extern void( APIENTRY * qglTexImage1D )( GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
extern void( APIENTRY * qglTexImage2D )( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
extern void( APIENTRY * qglTexParameterf )( GLenum target, GLenum pname, GLfloat param );
extern void( APIENTRY * qglTexParameterfv )( GLenum target, GLenum pname, const GLfloat *params );
extern void( APIENTRY * qglTexParameteri )( GLenum target, GLenum pname, GLint param );
extern void( APIENTRY * qglTexParameteriv )( GLenum target, GLenum pname, const GLint *params );
extern void( APIENTRY * qglTexSubImage1D )( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels );
extern void( APIENTRY * qglTexSubImage2D )( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels );
extern void( APIENTRY * qglTranslated )( GLdouble x, GLdouble y, GLdouble z );
extern void( APIENTRY * qglTranslatef )( GLfloat x, GLfloat y, GLfloat z );
extern void( APIENTRY * qglVertex2d )( GLdouble x, GLdouble y );
extern void( APIENTRY * qglVertex2dv )( const GLdouble *v );
extern void( APIENTRY * qglVertex2f )( GLfloat x, GLfloat y );
extern void( APIENTRY * qglVertex2fv )( const GLfloat *v );
extern void( APIENTRY * qglVertex2i )( GLint x, GLint y );
extern void( APIENTRY * qglVertex2iv )( const GLint *v );
extern void( APIENTRY * qglVertex2s )( GLshort x, GLshort y );
extern void( APIENTRY * qglVertex2sv )( const GLshort *v );
extern void( APIENTRY * qglVertex3d )( GLdouble x, GLdouble y, GLdouble z );
extern void( APIENTRY * qglVertex3dv )( const GLdouble *v );
extern void( APIENTRY * qglVertex3f )( GLfloat x, GLfloat y, GLfloat z );
extern void( APIENTRY * qglVertex3fv )( const GLfloat *v );
extern void( APIENTRY * qglVertex3i )( GLint x, GLint y, GLint z );
extern void( APIENTRY * qglVertex3iv )( const GLint *v );
extern void( APIENTRY * qglVertex3s )( GLshort x, GLshort y, GLshort z );
extern void( APIENTRY * qglVertex3sv )( const GLshort *v );
extern void( APIENTRY * qglVertex4d )( GLdouble x, GLdouble y, GLdouble z, GLdouble w );
extern void( APIENTRY * qglVertex4dv )( const GLdouble *v );
extern void( APIENTRY * qglVertex4f )( GLfloat x, GLfloat y, GLfloat z, GLfloat w );
extern void( APIENTRY * qglVertex4fv )( const GLfloat *v );
extern void( APIENTRY * qglVertex4i )( GLint x, GLint y, GLint z, GLint w );
extern void( APIENTRY * qglVertex4iv )( const GLint *v );
extern void( APIENTRY * qglVertex4s )( GLshort x, GLshort y, GLshort z, GLshort w );
extern void( APIENTRY * qglVertex4sv )( const GLshort *v );
extern void( APIENTRY * qglVertexPointer )( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
extern void( APIENTRY * qglViewport )( GLint x, GLint y, GLsizei width, GLsizei height );

#if defined( _WIN32 )

extern int( WINAPI * qwglChoosePixelFormat )( HDC, CONST PIXELFORMATDESCRIPTOR * );
extern int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
extern int( WINAPI * qwglGetPixelFormat )( HDC );
extern BOOL( WINAPI * qwglSetPixelFormat )( HDC, int, CONST PIXELFORMATDESCRIPTOR * );
extern BOOL( WINAPI * qwglSwapBuffers )( HDC );

extern BOOL( WINAPI * qwglGetDeviceGammaRamp3DFX )( HDC, LPVOID );
extern BOOL( WINAPI * qwglSetDeviceGammaRamp3DFX )( HDC, LPVOID );

extern BOOL( WINAPI * qwglCopyContext )( HGLRC, HGLRC, UINT );
extern HGLRC( WINAPI * qwglCreateContext )( HDC );
extern HGLRC( WINAPI * qwglCreateLayerContext )( HDC, int );
extern BOOL( WINAPI * qwglDeleteContext )( HGLRC );
extern HGLRC( WINAPI * qwglGetCurrentContext )( VOID );
extern HDC( WINAPI * qwglGetCurrentDC )( VOID );
extern PROC( WINAPI * qwglGetProcAddress )( LPCSTR );
extern BOOL( WINAPI * qwglMakeCurrent )( HDC, HGLRC );
extern BOOL( WINAPI * qwglShareLists )( HGLRC, HGLRC );
extern BOOL( WINAPI * qwglUseFontBitmaps )( HDC, DWORD, DWORD, DWORD );

extern BOOL( WINAPI * qwglUseFontOutlines )( HDC, DWORD, DWORD, DWORD, FLOAT,
											 FLOAT, int, LPGLYPHMETRICSFLOAT );

extern BOOL( WINAPI * qwglDescribeLayerPlane )( HDC, int, int, UINT,
												LPLAYERPLANEDESCRIPTOR );
extern int( WINAPI * qwglSetLayerPaletteEntries )( HDC, int, int, int,
												   CONST COLORREF * );
extern int( WINAPI * qwglGetLayerPaletteEntries )( HDC, int, int, int,
												   COLORREF * );
extern BOOL( WINAPI * qwglRealizeLayerPalette )( HDC, int, BOOL );
extern BOOL( WINAPI * qwglSwapLayerBuffers )( HDC, UINT );

extern BOOL( WINAPI * qwglSwapIntervalEXT )( int interval );

#endif  // _WIN32

#if ( ( defined __linux__ )  || ( defined __FreeBSD__ ) ) // rb010123

//FX Mesa Functions
// bk001129 - from cvs1.17 (mkv)
#if defined ( __FX__ )
extern fxMesaContext ( *qfxMesaCreateContext )( GLuint win, GrScreenResolution_t, GrScreenRefresh_t, const GLint attribList[] );
extern fxMesaContext ( *qfxMesaCreateBestContext )( GLuint win, GLint width, GLint height, const GLint attribList[] );
extern void ( *qfxMesaDestroyContext )( fxMesaContext ctx );
extern void ( *qfxMesaMakeCurrent )( fxMesaContext ctx );
extern fxMesaContext ( *qfxMesaGetCurrentContext )( void );
extern void ( *qfxMesaSwapBuffers )( void );
#endif

//GLX Functions
extern XVisualInfo * ( *qglXChooseVisual )( Display * dpy, int screen, int *attribList );
extern GLXContext ( *qglXCreateContext )( Display *dpy, XVisualInfo *vis, GLXContext shareList, Bool direct );
extern void ( *qglXDestroyContext )( Display *dpy, GLXContext ctx );
extern Bool ( *qglXMakeCurrent )( Display *dpy, GLXDrawable drawable, GLXContext ctx );
extern void ( *qglXCopyContext )( Display *dpy, GLXContext src, GLXContext dst, GLuint mask );
extern void ( *qglXSwapBuffers )( Display *dpy, GLXDrawable drawable );

#endif // __linux__ || __FreeBSD__ // rb010123
#else
// The renderer module reaches the GL table through the import struct.
#define qglMultiTexCoord2fARB ( ri.qgl->qglMultiTexCoord2fARB )
#define qglActiveTextureARB ( ri.qgl->qglActiveTextureARB )
#define qglClientActiveTextureARB ( ri.qgl->qglClientActiveTextureARB )
#define qglLockArraysEXT ( ri.qgl->qglLockArraysEXT )
#define qglUnlockArraysEXT ( ri.qgl->qglUnlockArraysEXT )
#define qglPNTrianglesiATI ( ri.qgl->qglPNTrianglesiATI )
#define qglPNTrianglesfATI ( ri.qgl->qglPNTrianglesfATI )
#define qglAccum ( ri.qgl->qglAccum )
#define qglAlphaFunc ( ri.qgl->qglAlphaFunc )
#define qglAreTexturesResident ( ri.qgl->qglAreTexturesResident )
#define qglArrayElement ( ri.qgl->qglArrayElement )
#define qglBegin ( ri.qgl->qglBegin )
#define qglBindTexture ( ri.qgl->qglBindTexture )
#define qglBitmap ( ri.qgl->qglBitmap )
#define qglBlendFunc ( ri.qgl->qglBlendFunc )
#define qglCallList ( ri.qgl->qglCallList )
#define qglCallLists ( ri.qgl->qglCallLists )
#define qglClear ( ri.qgl->qglClear )
#define qglClearAccum ( ri.qgl->qglClearAccum )
#define qglClearColor ( ri.qgl->qglClearColor )
#define qglClearDepth ( ri.qgl->qglClearDepth )
#define qglClearIndex ( ri.qgl->qglClearIndex )
#define qglClearStencil ( ri.qgl->qglClearStencil )
#define qglClipPlane ( ri.qgl->qglClipPlane )
#define qglColor3b ( ri.qgl->qglColor3b )
#define qglColor3bv ( ri.qgl->qglColor3bv )
#define qglColor3d ( ri.qgl->qglColor3d )
#define qglColor3dv ( ri.qgl->qglColor3dv )
#define qglColor3f ( ri.qgl->qglColor3f )
#define qglColor3fv ( ri.qgl->qglColor3fv )
#define qglColor3i ( ri.qgl->qglColor3i )
#define qglColor3iv ( ri.qgl->qglColor3iv )
#define qglColor3s ( ri.qgl->qglColor3s )
#define qglColor3sv ( ri.qgl->qglColor3sv )
#define qglColor3ub ( ri.qgl->qglColor3ub )
#define qglColor3ubv ( ri.qgl->qglColor3ubv )
#define qglColor3ui ( ri.qgl->qglColor3ui )
#define qglColor3uiv ( ri.qgl->qglColor3uiv )
#define qglColor3us ( ri.qgl->qglColor3us )
#define qglColor3usv ( ri.qgl->qglColor3usv )
#define qglColor4b ( ri.qgl->qglColor4b )
#define qglColor4bv ( ri.qgl->qglColor4bv )
#define qglColor4d ( ri.qgl->qglColor4d )
#define qglColor4dv ( ri.qgl->qglColor4dv )
#define qglColor4f ( ri.qgl->qglColor4f )
#define qglColor4fv ( ri.qgl->qglColor4fv )
#define qglColor4i ( ri.qgl->qglColor4i )
#define qglColor4iv ( ri.qgl->qglColor4iv )
#define qglColor4s ( ri.qgl->qglColor4s )
#define qglColor4sv ( ri.qgl->qglColor4sv )
#define qglColor4ub ( ri.qgl->qglColor4ub )
#define qglColor4ubv ( ri.qgl->qglColor4ubv )
#define qglColor4ui ( ri.qgl->qglColor4ui )
#define qglColor4uiv ( ri.qgl->qglColor4uiv )
#define qglColor4us ( ri.qgl->qglColor4us )
#define qglColor4usv ( ri.qgl->qglColor4usv )
#define qglColorMask ( ri.qgl->qglColorMask )
#define qglColorMaterial ( ri.qgl->qglColorMaterial )
#define qglColorPointer ( ri.qgl->qglColorPointer )
#define qglCopyPixels ( ri.qgl->qglCopyPixels )
#define qglCopyTexImage1D ( ri.qgl->qglCopyTexImage1D )
#define qglCopyTexImage2D ( ri.qgl->qglCopyTexImage2D )
#define qglCopyTexSubImage1D ( ri.qgl->qglCopyTexSubImage1D )
#define qglCopyTexSubImage2D ( ri.qgl->qglCopyTexSubImage2D )
#define qglCullFace ( ri.qgl->qglCullFace )
#define qglDeleteLists ( ri.qgl->qglDeleteLists )
#define qglDeleteTextures ( ri.qgl->qglDeleteTextures )
#define qglDepthFunc ( ri.qgl->qglDepthFunc )
#define qglDepthMask ( ri.qgl->qglDepthMask )
#define qglDepthRange ( ri.qgl->qglDepthRange )
#define qglDisable ( ri.qgl->qglDisable )
#define qglDisableClientState ( ri.qgl->qglDisableClientState )
#define qglDrawArrays ( ri.qgl->qglDrawArrays )
#define qglDrawBuffer ( ri.qgl->qglDrawBuffer )
#define qglDrawElements ( ri.qgl->qglDrawElements )
#define qglDrawPixels ( ri.qgl->qglDrawPixels )
#define qglEdgeFlag ( ri.qgl->qglEdgeFlag )
#define qglEdgeFlagPointer ( ri.qgl->qglEdgeFlagPointer )
#define qglEdgeFlagv ( ri.qgl->qglEdgeFlagv )
#define qglEnable ( ri.qgl->qglEnable )
#define qglEnableClientState ( ri.qgl->qglEnableClientState )
#define qglEnd ( ri.qgl->qglEnd )
#define qglEndList ( ri.qgl->qglEndList )
#define qglEvalCoord1d ( ri.qgl->qglEvalCoord1d )
#define qglEvalCoord1dv ( ri.qgl->qglEvalCoord1dv )
#define qglEvalCoord1f ( ri.qgl->qglEvalCoord1f )
#define qglEvalCoord1fv ( ri.qgl->qglEvalCoord1fv )
#define qglEvalCoord2d ( ri.qgl->qglEvalCoord2d )
#define qglEvalCoord2dv ( ri.qgl->qglEvalCoord2dv )
#define qglEvalCoord2f ( ri.qgl->qglEvalCoord2f )
#define qglEvalCoord2fv ( ri.qgl->qglEvalCoord2fv )
#define qglEvalMesh1 ( ri.qgl->qglEvalMesh1 )
#define qglEvalMesh2 ( ri.qgl->qglEvalMesh2 )
#define qglEvalPoint1 ( ri.qgl->qglEvalPoint1 )
#define qglEvalPoint2 ( ri.qgl->qglEvalPoint2 )
#define qglFeedbackBuffer ( ri.qgl->qglFeedbackBuffer )
#define qglFinish ( ri.qgl->qglFinish )
#define qglFlush ( ri.qgl->qglFlush )
#define qglFogf ( ri.qgl->qglFogf )
#define qglFogfv ( ri.qgl->qglFogfv )
#define qglFogi ( ri.qgl->qglFogi )
#define qglFogiv ( ri.qgl->qglFogiv )
#define qglFrontFace ( ri.qgl->qglFrontFace )
#define qglFrustum ( ri.qgl->qglFrustum )
#define qglGenLists ( ri.qgl->qglGenLists )
#define qglGenTextures ( ri.qgl->qglGenTextures )
#define qglGetBooleanv ( ri.qgl->qglGetBooleanv )
#define qglGetClipPlane ( ri.qgl->qglGetClipPlane )
#define qglGetDoublev ( ri.qgl->qglGetDoublev )
#define qglGetError ( ri.qgl->qglGetError )
#define qglGetFloatv ( ri.qgl->qglGetFloatv )
#define qglGetIntegerv ( ri.qgl->qglGetIntegerv )
#define qglGetLightfv ( ri.qgl->qglGetLightfv )
#define qglGetLightiv ( ri.qgl->qglGetLightiv )
#define qglGetMapdv ( ri.qgl->qglGetMapdv )
#define qglGetMapfv ( ri.qgl->qglGetMapfv )
#define qglGetMapiv ( ri.qgl->qglGetMapiv )
#define qglGetMaterialfv ( ri.qgl->qglGetMaterialfv )
#define qglGetMaterialiv ( ri.qgl->qglGetMaterialiv )
#define qglGetPixelMapfv ( ri.qgl->qglGetPixelMapfv )
#define qglGetPixelMapuiv ( ri.qgl->qglGetPixelMapuiv )
#define qglGetPixelMapusv ( ri.qgl->qglGetPixelMapusv )
#define qglGetPointerv ( ri.qgl->qglGetPointerv )
#define qglGetPolygonStipple ( ri.qgl->qglGetPolygonStipple )
#define qglGetString ( ri.qgl->qglGetString )
#define qglGetTexEnvfv ( ri.qgl->qglGetTexEnvfv )
#define qglGetTexEnviv ( ri.qgl->qglGetTexEnviv )
#define qglGetTexGendv ( ri.qgl->qglGetTexGendv )
#define qglGetTexGenfv ( ri.qgl->qglGetTexGenfv )
#define qglGetTexGeniv ( ri.qgl->qglGetTexGeniv )
#define qglGetTexImage ( ri.qgl->qglGetTexImage )
#define qglGetTexLevelParameterfv ( ri.qgl->qglGetTexLevelParameterfv )
#define qglGetTexLevelParameteriv ( ri.qgl->qglGetTexLevelParameteriv )
#define qglGetTexParameterfv ( ri.qgl->qglGetTexParameterfv )
#define qglGetTexParameteriv ( ri.qgl->qglGetTexParameteriv )
#define qglHint ( ri.qgl->qglHint )
#define qglIndexMask ( ri.qgl->qglIndexMask )
#define qglIndexPointer ( ri.qgl->qglIndexPointer )
#define qglIndexd ( ri.qgl->qglIndexd )
#define qglIndexdv ( ri.qgl->qglIndexdv )
#define qglIndexf ( ri.qgl->qglIndexf )
#define qglIndexfv ( ri.qgl->qglIndexfv )
#define qglIndexi ( ri.qgl->qglIndexi )
#define qglIndexiv ( ri.qgl->qglIndexiv )
#define qglIndexs ( ri.qgl->qglIndexs )
#define qglIndexsv ( ri.qgl->qglIndexsv )
#define qglIndexub ( ri.qgl->qglIndexub )
#define qglIndexubv ( ri.qgl->qglIndexubv )
#define qglInitNames ( ri.qgl->qglInitNames )
#define qglInterleavedArrays ( ri.qgl->qglInterleavedArrays )
#define qglIsEnabled ( ri.qgl->qglIsEnabled )
#define qglIsList ( ri.qgl->qglIsList )
#define qglIsTexture ( ri.qgl->qglIsTexture )
#define qglLightModelf ( ri.qgl->qglLightModelf )
#define qglLightModelfv ( ri.qgl->qglLightModelfv )
#define qglLightModeli ( ri.qgl->qglLightModeli )
#define qglLightModeliv ( ri.qgl->qglLightModeliv )
#define qglLightf ( ri.qgl->qglLightf )
#define qglLightfv ( ri.qgl->qglLightfv )
#define qglLighti ( ri.qgl->qglLighti )
#define qglLightiv ( ri.qgl->qglLightiv )
#define qglLineStipple ( ri.qgl->qglLineStipple )
#define qglLineWidth ( ri.qgl->qglLineWidth )
#define qglListBase ( ri.qgl->qglListBase )
#define qglLoadIdentity ( ri.qgl->qglLoadIdentity )
#define qglLoadMatrixd ( ri.qgl->qglLoadMatrixd )
#define qglLoadMatrixf ( ri.qgl->qglLoadMatrixf )
#define qglLoadName ( ri.qgl->qglLoadName )
#define qglLogicOp ( ri.qgl->qglLogicOp )
#define qglMap1d ( ri.qgl->qglMap1d )
#define qglMap1f ( ri.qgl->qglMap1f )
#define qglMap2d ( ri.qgl->qglMap2d )
#define qglMap2f ( ri.qgl->qglMap2f )
#define qglMapGrid1d ( ri.qgl->qglMapGrid1d )
#define qglMapGrid1f ( ri.qgl->qglMapGrid1f )
#define qglMapGrid2d ( ri.qgl->qglMapGrid2d )
#define qglMapGrid2f ( ri.qgl->qglMapGrid2f )
#define qglMaterialf ( ri.qgl->qglMaterialf )
#define qglMaterialfv ( ri.qgl->qglMaterialfv )
#define qglMateriali ( ri.qgl->qglMateriali )
#define qglMaterialiv ( ri.qgl->qglMaterialiv )
#define qglMatrixMode ( ri.qgl->qglMatrixMode )
#define qglMultMatrixd ( ri.qgl->qglMultMatrixd )
#define qglMultMatrixf ( ri.qgl->qglMultMatrixf )
#define qglNewList ( ri.qgl->qglNewList )
#define qglNormal3b ( ri.qgl->qglNormal3b )
#define qglNormal3bv ( ri.qgl->qglNormal3bv )
#define qglNormal3d ( ri.qgl->qglNormal3d )
#define qglNormal3dv ( ri.qgl->qglNormal3dv )
#define qglNormal3f ( ri.qgl->qglNormal3f )
#define qglNormal3fv ( ri.qgl->qglNormal3fv )
#define qglNormal3i ( ri.qgl->qglNormal3i )
#define qglNormal3iv ( ri.qgl->qglNormal3iv )
#define qglNormal3s ( ri.qgl->qglNormal3s )
#define qglNormal3sv ( ri.qgl->qglNormal3sv )
#define qglNormalPointer ( ri.qgl->qglNormalPointer )
#define qglOrtho ( ri.qgl->qglOrtho )
#define qglPassThrough ( ri.qgl->qglPassThrough )
#define qglPixelMapfv ( ri.qgl->qglPixelMapfv )
#define qglPixelMapuiv ( ri.qgl->qglPixelMapuiv )
#define qglPixelMapusv ( ri.qgl->qglPixelMapusv )
#define qglPixelStoref ( ri.qgl->qglPixelStoref )
#define qglPixelStorei ( ri.qgl->qglPixelStorei )
#define qglPixelTransferf ( ri.qgl->qglPixelTransferf )
#define qglPixelTransferi ( ri.qgl->qglPixelTransferi )
#define qglPixelZoom ( ri.qgl->qglPixelZoom )
#define qglPointSize ( ri.qgl->qglPointSize )
#define qglPolygonMode ( ri.qgl->qglPolygonMode )
#define qglPolygonOffset ( ri.qgl->qglPolygonOffset )
#define qglPolygonStipple ( ri.qgl->qglPolygonStipple )
#define qglPopAttrib ( ri.qgl->qglPopAttrib )
#define qglPopClientAttrib ( ri.qgl->qglPopClientAttrib )
#define qglPopMatrix ( ri.qgl->qglPopMatrix )
#define qglPopName ( ri.qgl->qglPopName )
#define qglPrioritizeTextures ( ri.qgl->qglPrioritizeTextures )
#define qglPushAttrib ( ri.qgl->qglPushAttrib )
#define qglPushClientAttrib ( ri.qgl->qglPushClientAttrib )
#define qglPushMatrix ( ri.qgl->qglPushMatrix )
#define qglPushName ( ri.qgl->qglPushName )
#define qglRasterPos2d ( ri.qgl->qglRasterPos2d )
#define qglRasterPos2dv ( ri.qgl->qglRasterPos2dv )
#define qglRasterPos2f ( ri.qgl->qglRasterPos2f )
#define qglRasterPos2fv ( ri.qgl->qglRasterPos2fv )
#define qglRasterPos2i ( ri.qgl->qglRasterPos2i )
#define qglRasterPos2iv ( ri.qgl->qglRasterPos2iv )
#define qglRasterPos2s ( ri.qgl->qglRasterPos2s )
#define qglRasterPos2sv ( ri.qgl->qglRasterPos2sv )
#define qglRasterPos3d ( ri.qgl->qglRasterPos3d )
#define qglRasterPos3dv ( ri.qgl->qglRasterPos3dv )
#define qglRasterPos3f ( ri.qgl->qglRasterPos3f )
#define qglRasterPos3fv ( ri.qgl->qglRasterPos3fv )
#define qglRasterPos3i ( ri.qgl->qglRasterPos3i )
#define qglRasterPos3iv ( ri.qgl->qglRasterPos3iv )
#define qglRasterPos3s ( ri.qgl->qglRasterPos3s )
#define qglRasterPos3sv ( ri.qgl->qglRasterPos3sv )
#define qglRasterPos4d ( ri.qgl->qglRasterPos4d )
#define qglRasterPos4dv ( ri.qgl->qglRasterPos4dv )
#define qglRasterPos4f ( ri.qgl->qglRasterPos4f )
#define qglRasterPos4fv ( ri.qgl->qglRasterPos4fv )
#define qglRasterPos4i ( ri.qgl->qglRasterPos4i )
#define qglRasterPos4iv ( ri.qgl->qglRasterPos4iv )
#define qglRasterPos4s ( ri.qgl->qglRasterPos4s )
#define qglRasterPos4sv ( ri.qgl->qglRasterPos4sv )
#define qglReadBuffer ( ri.qgl->qglReadBuffer )
#define qglReadPixels ( ri.qgl->qglReadPixels )
#define qglRectd ( ri.qgl->qglRectd )
#define qglRectdv ( ri.qgl->qglRectdv )
#define qglRectf ( ri.qgl->qglRectf )
#define qglRectfv ( ri.qgl->qglRectfv )
#define qglRecti ( ri.qgl->qglRecti )
#define qglRectiv ( ri.qgl->qglRectiv )
#define qglRects ( ri.qgl->qglRects )
#define qglRectsv ( ri.qgl->qglRectsv )
#define qglRenderMode ( ri.qgl->qglRenderMode )
#define qglRotated ( ri.qgl->qglRotated )
#define qglRotatef ( ri.qgl->qglRotatef )
#define qglScaled ( ri.qgl->qglScaled )
#define qglScalef ( ri.qgl->qglScalef )
#define qglScissor ( ri.qgl->qglScissor )
#define qglSelectBuffer ( ri.qgl->qglSelectBuffer )
#define qglShadeModel ( ri.qgl->qglShadeModel )
#define qglStencilFunc ( ri.qgl->qglStencilFunc )
#define qglStencilMask ( ri.qgl->qglStencilMask )
#define qglStencilOp ( ri.qgl->qglStencilOp )
#define qglTexCoord1d ( ri.qgl->qglTexCoord1d )
#define qglTexCoord1dv ( ri.qgl->qglTexCoord1dv )
#define qglTexCoord1f ( ri.qgl->qglTexCoord1f )
#define qglTexCoord1fv ( ri.qgl->qglTexCoord1fv )
#define qglTexCoord1i ( ri.qgl->qglTexCoord1i )
#define qglTexCoord1iv ( ri.qgl->qglTexCoord1iv )
#define qglTexCoord1s ( ri.qgl->qglTexCoord1s )
#define qglTexCoord1sv ( ri.qgl->qglTexCoord1sv )
#define qglTexCoord2d ( ri.qgl->qglTexCoord2d )
#define qglTexCoord2dv ( ri.qgl->qglTexCoord2dv )
#define qglTexCoord2f ( ri.qgl->qglTexCoord2f )
#define qglTexCoord2fv ( ri.qgl->qglTexCoord2fv )
#define qglTexCoord2i ( ri.qgl->qglTexCoord2i )
#define qglTexCoord2iv ( ri.qgl->qglTexCoord2iv )
#define qglTexCoord2s ( ri.qgl->qglTexCoord2s )
#define qglTexCoord2sv ( ri.qgl->qglTexCoord2sv )
#define qglTexCoord3d ( ri.qgl->qglTexCoord3d )
#define qglTexCoord3dv ( ri.qgl->qglTexCoord3dv )
#define qglTexCoord3f ( ri.qgl->qglTexCoord3f )
#define qglTexCoord3fv ( ri.qgl->qglTexCoord3fv )
#define qglTexCoord3i ( ri.qgl->qglTexCoord3i )
#define qglTexCoord3iv ( ri.qgl->qglTexCoord3iv )
#define qglTexCoord3s ( ri.qgl->qglTexCoord3s )
#define qglTexCoord3sv ( ri.qgl->qglTexCoord3sv )
#define qglTexCoord4d ( ri.qgl->qglTexCoord4d )
#define qglTexCoord4dv ( ri.qgl->qglTexCoord4dv )
#define qglTexCoord4f ( ri.qgl->qglTexCoord4f )
#define qglTexCoord4fv ( ri.qgl->qglTexCoord4fv )
#define qglTexCoord4i ( ri.qgl->qglTexCoord4i )
#define qglTexCoord4iv ( ri.qgl->qglTexCoord4iv )
#define qglTexCoord4s ( ri.qgl->qglTexCoord4s )
#define qglTexCoord4sv ( ri.qgl->qglTexCoord4sv )
#define qglTexCoordPointer ( ri.qgl->qglTexCoordPointer )
#define qglTexEnvf ( ri.qgl->qglTexEnvf )
#define qglTexEnvfv ( ri.qgl->qglTexEnvfv )
#define qglTexEnvi ( ri.qgl->qglTexEnvi )
#define qglTexEnviv ( ri.qgl->qglTexEnviv )
#define qglTexGend ( ri.qgl->qglTexGend )
#define qglTexGendv ( ri.qgl->qglTexGendv )
#define qglTexGenf ( ri.qgl->qglTexGenf )
#define qglTexGenfv ( ri.qgl->qglTexGenfv )
#define qglTexGeni ( ri.qgl->qglTexGeni )
#define qglTexGeniv ( ri.qgl->qglTexGeniv )
#define qglTexImage1D ( ri.qgl->qglTexImage1D )
#define qglTexImage2D ( ri.qgl->qglTexImage2D )
#define qglTexParameterf ( ri.qgl->qglTexParameterf )
#define qglTexParameterfv ( ri.qgl->qglTexParameterfv )
#define qglTexParameteri ( ri.qgl->qglTexParameteri )
#define qglTexParameteriv ( ri.qgl->qglTexParameteriv )
#define qglTexSubImage1D ( ri.qgl->qglTexSubImage1D )
#define qglTexSubImage2D ( ri.qgl->qglTexSubImage2D )
#define qglTranslated ( ri.qgl->qglTranslated )
#define qglTranslatef ( ri.qgl->qglTranslatef )
#define qglVertex2d ( ri.qgl->qglVertex2d )
#define qglVertex2dv ( ri.qgl->qglVertex2dv )
#define qglVertex2f ( ri.qgl->qglVertex2f )
#define qglVertex2fv ( ri.qgl->qglVertex2fv )
#define qglVertex2i ( ri.qgl->qglVertex2i )
#define qglVertex2iv ( ri.qgl->qglVertex2iv )
#define qglVertex2s ( ri.qgl->qglVertex2s )
#define qglVertex2sv ( ri.qgl->qglVertex2sv )
#define qglVertex3d ( ri.qgl->qglVertex3d )
#define qglVertex3dv ( ri.qgl->qglVertex3dv )
#define qglVertex3f ( ri.qgl->qglVertex3f )
#define qglVertex3fv ( ri.qgl->qglVertex3fv )
#define qglVertex3i ( ri.qgl->qglVertex3i )
#define qglVertex3iv ( ri.qgl->qglVertex3iv )
#define qglVertex3s ( ri.qgl->qglVertex3s )
#define qglVertex3sv ( ri.qgl->qglVertex3sv )
#define qglVertex4d ( ri.qgl->qglVertex4d )
#define qglVertex4dv ( ri.qgl->qglVertex4dv )
#define qglVertex4f ( ri.qgl->qglVertex4f )
#define qglVertex4fv ( ri.qgl->qglVertex4fv )
#define qglVertex4i ( ri.qgl->qglVertex4i )
#define qglVertex4iv ( ri.qgl->qglVertex4iv )
#define qglVertex4s ( ri.qgl->qglVertex4s )
#define qglVertex4sv ( ri.qgl->qglVertex4sv )
#define qglVertexPointer ( ri.qgl->qglVertexPointer )
#define qglViewport ( ri.qgl->qglViewport )
#define qwglChoosePixelFormat ( ri.qgl->qwglChoosePixelFormat )
#define qwglDescribePixelFormat ( ri.qgl->qwglDescribePixelFormat )
#define qwglGetPixelFormat ( ri.qgl->qwglGetPixelFormat )
#define qwglSetPixelFormat ( ri.qgl->qwglSetPixelFormat )
#define qwglSwapBuffers ( ri.qgl->qwglSwapBuffers )
#define qwglGetDeviceGammaRamp3DFX ( ri.qgl->qwglGetDeviceGammaRamp3DFX )
#define qwglSetDeviceGammaRamp3DFX ( ri.qgl->qwglSetDeviceGammaRamp3DFX )
#define qwglCopyContext ( ri.qgl->qwglCopyContext )
#define qwglCreateContext ( ri.qgl->qwglCreateContext )
#define qwglCreateLayerContext ( ri.qgl->qwglCreateLayerContext )
#define qwglDeleteContext ( ri.qgl->qwglDeleteContext )
#define qwglGetCurrentContext ( ri.qgl->qwglGetCurrentContext )
#define qwglGetCurrentDC ( ri.qgl->qwglGetCurrentDC )
#define qwglGetProcAddress ( ri.qgl->qwglGetProcAddress )
#define qwglMakeCurrent ( ri.qgl->qwglMakeCurrent )
#define qwglShareLists ( ri.qgl->qwglShareLists )
#define qwglUseFontBitmaps ( ri.qgl->qwglUseFontBitmaps )
#define qwglUseFontOutlines ( ri.qgl->qwglUseFontOutlines )
#define qwglDescribeLayerPlane ( ri.qgl->qwglDescribeLayerPlane )
#define qwglSetLayerPaletteEntries ( ri.qgl->qwglSetLayerPaletteEntries )
#define qwglGetLayerPaletteEntries ( ri.qgl->qwglGetLayerPaletteEntries )
#define qwglRealizeLayerPalette ( ri.qgl->qwglRealizeLayerPalette )
#define qwglSwapLayerBuffers ( ri.qgl->qwglSwapLayerBuffers )
#define qwglSwapIntervalEXT ( ri.qgl->qwglSwapIntervalEXT )
#define qfxMesaCreateContext ( ri.qgl->qfxMesaCreateContext )
#define qfxMesaCreateBestContext ( ri.qgl->qfxMesaCreateBestContext )
#define qfxMesaDestroyContext ( ri.qgl->qfxMesaDestroyContext )
#define qfxMesaMakeCurrent ( ri.qgl->qfxMesaMakeCurrent )
#define qfxMesaGetCurrentContext ( ri.qgl->qfxMesaGetCurrentContext )
#define qfxMesaSwapBuffers ( ri.qgl->qfxMesaSwapBuffers )
#define qglXChooseVisual ( ri.qgl->qglXChooseVisual )
#define qglXCreateContext ( ri.qgl->qglXCreateContext )
#define qglXDestroyContext ( ri.qgl->qglXDestroyContext )
#define qglXMakeCurrent ( ri.qgl->qglXMakeCurrent )
#define qglXCopyContext ( ri.qgl->qglXCopyContext )
#define qglXSwapBuffers ( ri.qgl->qglXSwapBuffers )
#endif

#endif
