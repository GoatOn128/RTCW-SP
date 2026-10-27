# Build digest

commit: 14c85b290f36

- ubuntu-latest-x64-debug: failure
- ubuntu-latest-x64-release: cancelled
- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: failure
- uncrustify: success
- windows-latest-x64-debug: failure
- windows-latest-x64-release: cancelled
- windows-latest-x86-debug: failure
- windows-latest-x86-release: failure

## ubuntu-latest-x64-debug

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/RenderProgs_GLSL.cpp:980:69: error: use of undeclared identifier 'outFileGLSL'
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o] Error 1

### failure context

- build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o

```
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Matrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Angles.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Quat.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Plane.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecat
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Rotation.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depre
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/VecX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/MatX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x64-debug/idlib/obj/idlib/bv/Bounds.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x64-debug/idlib/obj/idlib/bv/Box.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-c
clang++ -o build/linux-x64-debug/idlib/obj/idlib/bv/Sphere.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x64-debug/idlib/obj/idlib/geometry/DrawVert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-d
clang++ -o build/linux-x64-debug/idlib/obj/idlib/geometry/JointTransform.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang++ -o build/linux-x64-debug/idlib/obj/idlib/geometry/RenderMatrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -W
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-cop
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-co
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/ScreenRect.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-co
ar rc build/linux-x64-debug/libidlib.a build/linux-x64-debug/idlib/obj/idlib/Heap.cpp.o build/linux-x64-debug/idlib/obj/idlib/Str.cpp.o build/linux-x64-debug/idlib/obj/idlib/Lib.cpp.o build/linux-x64-debug/idlib/obj/idlib/Token.cpp.o build/linux-x64-debug/idlib/obj/idlib/Lexer.cpp.o build/linux-x64-debug/idlib/obj/idlib/Parser.cpp.o build/linux-x64-debug/idlib/obj/idlib/sys/sys_assert.cpp.o build/
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/GLContext.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/CVarSystem.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy
ranlib build/linux-x64-debug/libidlib.a
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/GLMatrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-cop
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecate
clang -o build/linux-x64-debug/renderer-bfg/obj/third-party/glad/src/gl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -w -fPIC -Isrc -Isrc/games/game -Isrc/client 
src/renderer-bfg/RenderProgs_GLSL.cpp:980:69: error: use of undeclared identifier 'outFileGLSL'
  980 |                                 idLib::Error( "couldn't find uniform %s for %s", token.c_str(), outFileGLSL.c_str() );
      |                                                                                                 ^~~~~~~~~~~
1 error generated.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x64-release

status: cancelled

errors: 2
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/RenderProgs_GLSL.cpp:980:69: error: use of undeclared identifier 'outFileGLSL'
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o] Error 1

### failure context

- build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o

```
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Matrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecat
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Angles.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecat
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Quat.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Plane.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecate
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Rotation.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprec
clang -o build/linux-x64-release/renderer_gl.so -m64 -shared build/linux-x64-release/renderer/obj/renderer/tr_animation.c.o build/linux-x64-release/renderer/obj/renderer/tr_backend.c.o build/linux-x64-release/renderer/obj/renderer/tr_bsp.c.o build/linux-x64-release/renderer/obj/renderer/tr_cmds.c.o build/linux-x64-release/renderer/obj/renderer/tr_cmesh.c.o build/linux-x64-release/renderer/obj/rend
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/VecX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/MatX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x64-release/idlib/obj/idlib/bv/Bounds.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x64-release/idlib/obj/idlib/bv/Box.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-co
clang++ -o build/linux-x64-release/idlib/obj/idlib/bv/Sphere.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x64-release/idlib/obj/idlib/geometry/DrawVert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-de
clang++ -o build/linux-x64-release/idlib/obj/idlib/geometry/JointTransform.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x64-release/idlib/obj/idlib/geometry/RenderMatrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wn
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-string
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ScreenRect.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings 
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-string
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/GLContext.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/CVarSystem.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings 
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/GLMatrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -W
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-st
ar rc build/linux-x64-release/libidlib.a build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o build/linux-x64-release/idlib/obj/idlib/Str.cpp.o build/linux-x64-release/idlib/obj/idlib/Lib.cpp.o build/linux-x64-release/idlib/obj/idlib/Token.cpp.o build/linux-x64-release/idlib/obj/idlib/Lexer.cpp.o build/linux-x64-release/idlib/obj/idlib/Parser.cpp.o build/linux-x64-release/idlib/obj/idlib/sys/sys_ass
clang -o build/linux-x64-release/renderer-bfg/obj/third-party/glad/src/gl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -w -fPIC -DNDEBUG -Isrc -
src/renderer-bfg/RenderProgs_GLSL.cpp:980:69: error: use of undeclared identifier 'outFileGLSL'
  980 |                                 idLib::Error( "couldn't find uniform %s for %s", token.c_str(), outFileGLSL.c_str() );
      |                                                                                                 ^~~~~~~~~~~
1 error generated.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-debug

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/RenderProgs_GLSL.cpp:980:69: error: use of undeclared identifier 'outFileGLSL'
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o] Error 1

### failure context

- build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o

```
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Matrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Angles.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Quat.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Plane.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecat
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Rotation.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depre
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/VecX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/MatX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x86-debug/idlib/obj/idlib/bv/Bounds.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x86-debug/idlib/obj/idlib/bv/Box.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-c
clang++ -o build/linux-x86-debug/idlib/obj/idlib/bv/Sphere.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x86-debug/idlib/obj/idlib/geometry/DrawVert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-d
clang++ -o build/linux-x86-debug/idlib/obj/idlib/geometry/JointTransform.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang++ -o build/linux-x86-debug/idlib/obj/idlib/geometry/RenderMatrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -W
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-cop
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-co
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/ScreenRect.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-co
ar rc build/linux-x86-debug/libidlib.a build/linux-x86-debug/idlib/obj/idlib/Heap.cpp.o build/linux-x86-debug/idlib/obj/idlib/Str.cpp.o build/linux-x86-debug/idlib/obj/idlib/Lib.cpp.o build/linux-x86-debug/idlib/obj/idlib/Token.cpp.o build/linux-x86-debug/idlib/obj/idlib/Lexer.cpp.o build/linux-x86-debug/idlib/obj/idlib/Parser.cpp.o build/linux-x86-debug/idlib/obj/idlib/sys/sys_assert.cpp.o build/
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/GLContext.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
ranlib build/linux-x86-debug/libidlib.a
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/CVarSystem.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/GLMatrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-cop
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecate
clang -o build/linux-x86-debug/renderer-bfg/obj/third-party/glad/src/gl.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -w -fPIC -Isrc -Isrc/games/game -Isrc/client 
src/renderer-bfg/RenderProgs_GLSL.cpp:980:69: error: use of undeclared identifier 'outFileGLSL'
  980 |                                 idLib::Error( "couldn't find uniform %s for %s", token.c_str(), outFileGLSL.c_str() );
      |                                                                                                 ^~~~~~~~~~~
1 error generated.
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-release

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/RenderProgs_GLSL.cpp:980:69: error: use of undeclared identifier 'outFileGLSL'
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o] Error 1

### failure context

- build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o

```
clang++ -o build/linux-x86-release/idlib/obj/idlib/math/Angles.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecat
clang++ -o build/linux-x86-release/idlib/obj/idlib/math/Quat.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x86-release/idlib/obj/idlib/math/Plane.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecate
clang++ -o build/linux-x86-release/idlib/obj/idlib/math/Rotation.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprec
clang -o build/linux-x86-release/renderer_gl.so -m32 -shared build/linux-x86-release/renderer/obj/renderer/tr_animation.c.o build/linux-x86-release/renderer/obj/renderer/tr_backend.c.o build/linux-x86-release/renderer/obj/renderer/tr_bsp.c.o build/linux-x86-release/renderer/obj/renderer/tr_cmds.c.o build/linux-x86-release/renderer/obj/renderer/tr_cmesh.c.o build/linux-x86-release/renderer/obj/rend
clang++ -o build/linux-x86-release/idlib/obj/idlib/math/VecX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x86-release/idlib/obj/idlib/math/MatX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x86-release/idlib/obj/idlib/bv/Bounds.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x86-release/idlib/obj/idlib/bv/Box.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-co
clang++ -o build/linux-x86-release/idlib/obj/idlib/bv/Sphere.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x86-release/idlib/obj/idlib/geometry/DrawVert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-de
clang++ -o build/linux-x86-release/idlib/obj/idlib/geometry/JointTransform.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x86-release/idlib/obj/idlib/geometry/RenderMatrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wn
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-string
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/ScreenRect.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings 
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-string
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/GLContext.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/CVarSystem.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings 
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/GLMatrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -W
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
ar rc build/linux-x86-release/libidlib.a build/linux-x86-release/idlib/obj/idlib/Heap.cpp.o build/linux-x86-release/idlib/obj/idlib/Str.cpp.o build/linux-x86-release/idlib/obj/idlib/Lib.cpp.o build/linux-x86-release/idlib/obj/idlib/Token.cpp.o build/linux-x86-release/idlib/obj/idlib/Lexer.cpp.o build/linux-x86-release/idlib/obj/idlib/Parser.cpp.o build/linux-x86-release/idlib/obj/idlib/sys/sys_ass
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-st
clang -o build/linux-x86-release/renderer-bfg/obj/third-party/glad/src/gl.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -w -fPIC -DNDEBUG -Isrc -
ranlib build/linux-x86-release/libidlib.a
src/renderer-bfg/RenderProgs_GLSL.cpp:980:69: error: use of undeclared identifier 'outFileGLSL'
  980 |                                 idLib::Error( "couldn't find uniform %s for %s", token.c_str(), outFileGLSL.c_str() );
      |                                                                                                 ^~~~~~~~~~~
1 error generated.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o] Error 1
```


### warning kinds

## uncrustify

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-debug

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src\renderer-bfg\RenderProgs_GLSL.cpp(980,69): error: use of undeclared identifier 'outFileGLSL'
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj] Error 1

### failure context

- build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj

```
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\Vector.cpp.obj /c src\idlib\math\Vector.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\Matrix.cpp.obj /c src\idlib\math\Matrix.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\Angles.cpp.obj /c src\idlib\math\Angles.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\Quat.cpp.obj /c src\idlib\math\Quat.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\Plane.cpp.obj /c src\idlib\math\Plane.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-de
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\Rotation.cpp.obj /c src\idlib\math\Rotation.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\VecX.cpp.obj /c src\idlib\math\VecX.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\MatX.cpp.obj /c src\idlib\math\MatX.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\bv\Bounds.cpp.obj /c src\idlib\bv\Bounds.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\bv\Box.cpp.obj /c src\idlib\bv\Box.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-deprecated
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\bv\Sphere.cpp.obj /c src\idlib\bv\Sphere.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\geometry\DrawVert.cpp.obj /c src\idlib\geometry\DrawVert.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-s
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\geometry\JointTransform.cpp.obj /c src\idlib\geometry\JointTransform.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wn
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj /c src\idlib\geometry\RenderMatrix.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wr
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj /c src\renderer-bfg\RenderWorld.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-w
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj /c src\renderer-bfg\RenderEntity.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj /c src\renderer-bfg\ScreenRect.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
llvm-lib /nologo /OUT:build\windows-x64-debug\idlib.lib build\windows-x64-debug\idlib\obj\idlib\Heap.cpp.obj build\windows-x64-debug\idlib\obj\idlib\Str.cpp.obj build\windows-x64-debug\idlib\obj\idlib\Lib.cpp.obj build\windows-x64-debug\idlib\obj\idlib\Token.cpp.obj build\windows-x64-debug\idlib\obj\idlib\Lexer.cpp.obj build\windows-x64-debug\idlib\obj\idlib\Parser.cpp.obj build\windows-x64-debug\
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj /c src\renderer-bfg\RenderSystem.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj /c src\renderer-bfg\GLContext.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj /c src\renderer-bfg\CVarSystem.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj /c src\renderer-bfg\GLMatrix.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writabl
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj /c src\renderer-bfg\RenderLog.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj /c src\renderer-bfg\RenderProgs.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-w
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj /c src\renderer-bfg\RenderProgs_GLSL.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\third-party\glad\src\gl.c.obj /c src\third-party\glad\src\gl.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od 
src\renderer-bfg\RenderProgs_GLSL.cpp(980,69): error: use of undeclared identifier 'outFileGLSL'
  980 |                                 idLib::Error( "couldn't find uniform %s for %s", token.c_str(), outFileGLSL.c_str() );
      |                                                                                                 ^~~~~~~~~~~
1 error generated.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x64-release

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x86-debug

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src\renderer-bfg\RenderProgs_GLSL.cpp(980,69): error: use of undeclared identifier 'outFileGLSL'
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj] Error 1

### failure context

- build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj

```
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\math\Vector.cpp.obj /c src\idlib\math\Vector.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\math\Matrix.cpp.obj /c src\idlib\math\Matrix.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\math\Angles.cpp.obj /c src\idlib\math\Angles.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\math\Quat.cpp.obj /c src\idlib\math\Quat.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\math\Plane.cpp.obj /c src\idlib\math\Plane.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-de
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\math\Rotation.cpp.obj /c src\idlib\math\Rotation.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\math\VecX.cpp.obj /c src\idlib\math\VecX.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\math\MatX.cpp.obj /c src\idlib\math\MatX.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\bv\Bounds.cpp.obj /c src\idlib\bv\Bounds.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\bv\Box.cpp.obj /c src\idlib\bv\Box.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-deprecated
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\bv\Sphere.cpp.obj /c src\idlib\bv\Sphere.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\geometry\DrawVert.cpp.obj /c src\idlib\geometry\DrawVert.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-s
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\geometry\JointTransform.cpp.obj /c src\idlib\geometry\JointTransform.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wn
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj /c src\idlib\geometry\RenderMatrix.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wr
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj /c src\renderer-bfg\RenderWorld.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-w
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj /c src\renderer-bfg\RenderEntity.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj /c src\renderer-bfg\ScreenRect.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj /c src\renderer-bfg\RenderSystem.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno
llvm-lib /nologo /OUT:build\windows-x86-debug\idlib.lib build\windows-x86-debug\idlib\obj\idlib\Heap.cpp.obj build\windows-x86-debug\idlib\obj\idlib\Str.cpp.obj build\windows-x86-debug\idlib\obj\idlib\Lib.cpp.obj build\windows-x86-debug\idlib\obj\idlib\Token.cpp.obj build\windows-x86-debug\idlib\obj\idlib\Lexer.cpp.obj build\windows-x86-debug\idlib\obj\idlib\Parser.cpp.obj build\windows-x86-debug\
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj /c src\renderer-bfg\GLContext.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj /c src\renderer-bfg\CVarSystem.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj /c src\renderer-bfg\GLMatrix.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writabl
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj /c src\renderer-bfg\RenderLog.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj /c src\renderer-bfg\RenderProgs.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-w
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj /c src\renderer-bfg\RenderProgs_GLSL.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\third-party\glad\src\gl.c.obj /c src\third-party\glad\src\gl.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od 
src\renderer-bfg\RenderProgs_GLSL.cpp(980,69): error: use of undeclared identifier 'outFileGLSL'
  980 |                                 idLib::Error( "couldn't find uniform %s for %s", token.c_str(), outFileGLSL.c_str() );
      |                                                                                                 ^~~~~~~~~~~
1 error generated.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x86-release

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src\renderer-bfg\RenderProgs_GLSL.cpp(980,69): error: use of undeclared identifier 'outFileGLSL'
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj] Error 1

### failure context

- build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj

```
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\math\Vector.cpp.obj /c src\idlib\math\Vector.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wn
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\math\Matrix.cpp.obj /c src\idlib\math\Matrix.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wn
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\math\Angles.cpp.obj /c src\idlib\math\Angles.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wn
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\math\Quat.cpp.obj /c src\idlib\math\Quat.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-de
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\math\Plane.cpp.obj /c src\idlib\math\Plane.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\math\Rotation.cpp.obj /c src\idlib\math\Rotation.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\math\VecX.cpp.obj /c src\idlib\math\VecX.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-de
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\math\MatX.cpp.obj /c src\idlib\math\MatX.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-de
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\bv\Bounds.cpp.obj /c src\idlib\bv\Bounds.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-de
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\bv\Box.cpp.obj /c src\idlib\bv\Box.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-deprecat
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\bv\Sphere.cpp.obj /c src\idlib\bv\Sphere.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-de
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\geometry\DrawVert.cpp.obj /c src\idlib\geometry\DrawVert.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\geometry\JointTransform.cpp.obj /c src\idlib\geometry\JointTransform.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj /c src\idlib\geometry\RenderMatrix.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj /c src\renderer-bfg\RenderWorld.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj /c src\renderer-bfg\RenderEntity.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -W
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj /c src\renderer-bfg\ScreenRect.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-w
llvm-lib /nologo /OUT:build\windows-x86-release\idlib.lib build\windows-x86-release\idlib\obj\idlib\Heap.cpp.obj build\windows-x86-release\idlib\obj\idlib\Str.cpp.obj build\windows-x86-release\idlib\obj\idlib\Lib.cpp.obj build\windows-x86-release\idlib\obj\idlib\Token.cpp.obj build\windows-x86-release\idlib\obj\idlib\Lexer.cpp.obj build\windows-x86-release\idlib\obj\idlib\Parser.cpp.obj build\wind
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj /c src\renderer-bfg\RenderSystem.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -W
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj /c src\renderer-bfg\GLContext.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj /c src\renderer-bfg\CVarSystem.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-w
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj /c src\renderer-bfg\GLMatrix.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj /c src\renderer-bfg\RenderLog.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj /c src\renderer-bfg\RenderProgs.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj /c src\renderer-bfg\RenderProgs_GLSL.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declara
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj /c src\third-party\glad\src\gl.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /W
src\renderer-bfg\RenderProgs_GLSL.cpp(980,69): error: use of undeclared identifier 'outFileGLSL'
  980 |                                 idLib::Error( "couldn't find uniform %s for %s", token.c_str(), outFileGLSL.c_str() );
      |                                                                                                 ^~~~~~~~~~~
1 error generated.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj] Error 1
```


### warning kinds

