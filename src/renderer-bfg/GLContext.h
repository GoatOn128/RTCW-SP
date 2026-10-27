#ifndef __GLCONTEXT_H__
#define __GLCONTEXT_H__

#include <glad/gl.h>

/*
===============================================================================

	Thin wrapper around the glad 2 context loading. The BFG reference
	loads the OpenGL 1 context through QGL, this port uses the vendored
	glad 2 loader instead and keeps the same call shape.

===============================================================================
*/
class idGLContext {
public:
	idGLContext() : loaded( false ) {}

	// Load the OpenGL functions with the given loader callback. The
	// loader takes the function name and a user pointer and returns
	// the function pointer or NULL.
	bool		Init( void * ( *loaderProc )( const char *, void * ), void *userPtr );

	bool		IsLoaded() const { return loaded; }

private:
	bool		loaded;
};

#endif /* !__GLCONTEXT_H__ */
