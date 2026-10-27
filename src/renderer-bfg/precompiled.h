#ifndef __RENDERER_BFG_PRECOMPILED_H__
#define __RENDERER_BFG_PRECOMPILED_H__

// Renderer-bfg module: everything the ported BFG renderer files need
// comes through the idlib precompiled header, plus the vendored glad
// loader for the GL types and entry points.

#include "../idlib/precompiled.h"

#include <glad/gl.h>

// the ported BFG renderer code calls the GL entry points with a qgl
// prefix from the old QGL layer; glad exposes the same functions under
// their standard gl names, so the prefix is mapped onto glad
#define qglAttachShader glAttachShader
#define qglBindAttribLocation glBindAttribLocation
#define qglCompileShader glCompileShader
#define qglCreateProgram glCreateProgram
#define qglCreateShader glCreateShader
#define qglDeleteProgram glDeleteProgram
#define qglDeleteShader glDeleteShader
#define qglGetProgramInfoLog glGetProgramInfoLog
#define qglGetProgramiv glGetProgramiv
#define qglGetShaderInfoLog glGetShaderInfoLog
#define qglGetShaderiv glGetShaderiv
#define qglGetUniformBlockIndex glGetUniformBlockIndex
#define qglGetUniformLocation glGetUniformLocation
#define qglLinkProgram glLinkProgram
#define qglShaderSource glShaderSource
#define qglUniform1i glUniform1i
#define qglUniform4fv glUniform4fv
#define qglUniformBlockBinding glUniformBlockBinding
#define qglUseProgram glUseProgram

#endif /* !__RENDERER_BFG_PRECOMPILED_H__ */
