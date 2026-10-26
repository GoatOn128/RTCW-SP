# Build digest

commit: 89b18b57c046

- ubuntu-latest-x64-debug: failure
- ubuntu-latest-x64-release: failure
- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: failure
- uncrustify: success
- windows-latest-x64-debug: success
- windows-latest-x64-release: success
- windows-latest-x86-debug: success
- windows-latest-x86-release: success

## ubuntu-latest-x64-debug

status: failure

errors: 9
warnings: 0 in 0 kinds

### errors

src/idlib/Str.cpp:1837:8: error: use of undeclared identifier '_vsnprintf'; did you mean 'vsnprintf'?
src/idlib/Heap.cpp:50:9: error: use of undeclared identifier '_aligned_malloc'; did you mean 'aligned_alloc'?
src/idlib/Heap.cpp:62:2: error: use of undeclared identifier '_aligned_free'
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Str.cpp.o] Error 1
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Heap.cpp.o] Error 1
src/idlib/math/VecX.cpp:39:41: error: cast from pointer to smaller type 'int' loses information
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/VecX.cpp.o] Error 1
src/idlib/math/MatX.cpp:39:41: error: cast from pointer to smaller type 'int' loses information
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/MatX.cpp.o] Error 1

### failure context

- build/linux-x64-debug/idlib/obj/idlib/Str.cpp.o

```
clang -o build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DSCREWUP -Isrc -Isrc/games/game -Isrc/
clang -o build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DSCREWUP -Isrc -Isrc/games/game -Is
clang -o build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DSCREWUP -Isrc -Isrc/games/game -I
clang -o build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_script.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DSCREWUP -Isrc -Isrc/games/game -Is
clang++ -o build/linux-x64-debug/idlib/obj/idlib/Heap.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-cop
clang++ -o build/linux-x64-debug/idlib/obj/idlib/Str.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-copy
clang -o build/linux-x64-debug/extractfuncs -m64 build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o build/linux-x64-debug/extractfuncs_tool/obj/t
clang++ -o build/linux-x64-debug/idlib/obj/idlib/Lib.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-copy
clang -o build/linux-x64-debug/renderer_gl.so -m64 -shared build/linux-x64-debug/renderer/obj/renderer/tr_animation.c.o build/linux-x64-debug/renderer/obj/renderer/tr_backend.c.o build/linux-x64-debug/renderer/obj/renderer/tr_bsp.c.o build/linux-x64-debug/renderer/obj/renderer/tr_cmds.c.o build/linux-x64-debug/renderer/obj/renderer/tr_cmesh.c.o build/linux-x64-debug/renderer/obj/renderer/tr_curve.
clang++ -o build/linux-x64-debug/idlib/obj/idlib/sys/sys_assert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depr
clang++ -o build/linux-x64-debug/idlib/obj/idlib/containers/HashIndex.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wn
src/idlib/Str.cpp:1837:8: error: use of undeclared identifier '_vsnprintf'; did you mean 'vsnprintf'?
 1837 |         ret = _vsnprintf( dest, size - 1, fmt, argptr );
      |               ^~~~~~~~~~
      |               vsnprintf
src/idlib/Heap.cpp:50:9: error: use of undeclared identifier '_aligned_malloc'; did you mean 'aligned_alloc'?
   50 |         return _aligned_malloc( paddedSize, 16 );
      |                ^~~~~~~~~~~~~~~
      |                aligned_alloc
/usr/include/stdio.h/usr/include/stdlib.h:746:14: note: 'aligned_alloc' declared here
  746 | extern void *aligned_alloc (size_t __alignment, size_t __size)
      |              ^
:396:12: note: 'vsnprintf' declared here
  396 | extern int vsnprintf (char *__restrict __s, size_t __maxlen,
      |            ^
src/idlib/Heap.cpp:62:2: error: use of undeclared identifier '_aligned_free'
   62 |         _aligned_free( ptr );
      |         ^~~~~~~~~~~~~
1 error generated.
2 errors generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Str.cpp.o] Error 1
```

- build/linux-x64-debug/idlib/obj/idlib/Heap.cpp.o

```
clang -o build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DSCREWUP -Isrc -Isrc/games/game -I
clang -o build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_script.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DSCREWUP -Isrc -Isrc/games/game -Is
clang++ -o build/linux-x64-debug/idlib/obj/idlib/Heap.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-cop
clang++ -o build/linux-x64-debug/idlib/obj/idlib/Str.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-copy
clang -o build/linux-x64-debug/extractfuncs -m64 build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o build/linux-x64-debug/extractfuncs_tool/obj/t
clang++ -o build/linux-x64-debug/idlib/obj/idlib/Lib.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-copy
clang -o build/linux-x64-debug/renderer_gl.so -m64 -shared build/linux-x64-debug/renderer/obj/renderer/tr_animation.c.o build/linux-x64-debug/renderer/obj/renderer/tr_backend.c.o build/linux-x64-debug/renderer/obj/renderer/tr_bsp.c.o build/linux-x64-debug/renderer/obj/renderer/tr_cmds.c.o build/linux-x64-debug/renderer/obj/renderer/tr_cmesh.c.o build/linux-x64-debug/renderer/obj/renderer/tr_curve.
clang++ -o build/linux-x64-debug/idlib/obj/idlib/sys/sys_assert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depr
clang++ -o build/linux-x64-debug/idlib/obj/idlib/containers/HashIndex.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wn
src/idlib/Str.cpp:1837:8: error: use of undeclared identifier '_vsnprintf'; did you mean 'vsnprintf'?
 1837 |         ret = _vsnprintf( dest, size - 1, fmt, argptr );
      |               ^~~~~~~~~~
      |               vsnprintf
src/idlib/Heap.cpp:50:9: error: use of undeclared identifier '_aligned_malloc'; did you mean 'aligned_alloc'?
   50 |         return _aligned_malloc( paddedSize, 16 );
      |                ^~~~~~~~~~~~~~~
      |                aligned_alloc
/usr/include/stdio.h/usr/include/stdlib.h:746:14: note: 'aligned_alloc' declared here
  746 | extern void *aligned_alloc (size_t __alignment, size_t __size)
      |              ^
:396:12: note: 'vsnprintf' declared here
  396 | extern int vsnprintf (char *__restrict __s, size_t __maxlen,
      |            ^
src/idlib/Heap.cpp:62:2: error: use of undeclared identifier '_aligned_free'
   62 |         _aligned_free( ptr );
      |         ^~~~~~~~~~~~~
1 error generated.
2 errors generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Str.cpp.o] Error 1
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Math.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Heap.cpp.o] Error 1
```

- build/linux-x64-debug/idlib/obj/idlib/math/VecX.cpp.o

```
      |                ^~~~~~~~~~~~~~~
      |                aligned_alloc
/usr/include/stdio.h/usr/include/stdlib.h:746:14: note: 'aligned_alloc' declared here
  746 | extern void *aligned_alloc (size_t __alignment, size_t __size)
      |              ^
:396:12: note: 'vsnprintf' declared here
  396 | extern int vsnprintf (char *__restrict __s, size_t __maxlen,
      |            ^
src/idlib/Heap.cpp:62:2: error: use of undeclared identifier '_aligned_free'
   62 |         _aligned_free( ptr );
      |         ^~~~~~~~~~~~~
1 error generated.
2 errors generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Str.cpp.o] Error 1
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Math.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Heap.cpp.o] Error 1
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Vector.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Matrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Angles.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Quat.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Plane.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecat
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Rotation.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depre
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/VecX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/MatX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x64-debug/idlib/obj/idlib/bv/Bounds.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x64-debug/idlib/obj/idlib/bv/Box.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-c
src/idlib/math/VecX.cpp:39:41: error: cast from pointer to smaller type 'int' loses information
   39 | float * idVecX::tempPtr = (float *) ( ( (int) idVecX::temp + 15 ) & ~15 );
      |                                         ^~~~~~~~~~~~~~~~~~
1 error generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/VecX.cpp.o] Error 1
```

- build/linux-x64-debug/idlib/obj/idlib/math/MatX.cpp.o

```
      |            ^
src/idlib/Heap.cpp:62:2: error: use of undeclared identifier '_aligned_free'
   62 |         _aligned_free( ptr );
      |         ^~~~~~~~~~~~~
1 error generated.
2 errors generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Str.cpp.o] Error 1
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Math.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Heap.cpp.o] Error 1
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Vector.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Matrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Angles.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Quat.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Plane.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecat
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Rotation.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depre
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/VecX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/MatX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x64-debug/idlib/obj/idlib/bv/Bounds.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x64-debug/idlib/obj/idlib/bv/Box.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-c
src/idlib/math/VecX.cpp:39:41: error: cast from pointer to smaller type 'int' loses information
   39 | float * idVecX::tempPtr = (float *) ( ( (int) idVecX::temp + 15 ) & ~15 );
      |                                         ^~~~~~~~~~~~~~~~~~
1 error generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/VecX.cpp.o] Error 1
clang++ -o build/linux-x64-debug/idlib/obj/idlib/bv/Sphere.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
src/idlib/math/MatX.cpp:39:41: error: cast from pointer to smaller type 'int' loses information
   39 | float * idMatX::tempPtr = (float *) ( ( (int) idMatX::temp + 15 ) & ~15 );
      |                                         ^~~~~~~~~~~~~~~~~~
clang++ -o build/linux-x64-debug/idlib/obj/idlib/geometry/DrawVert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-d
1 error generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/MatX.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x64-release

status: failure

errors: 9
warnings: 0 in 0 kinds

### errors

src/idlib/Str.cpp:1837:8: error: use of undeclared identifier '_vsnprintf'; did you mean 'vsnprintf'?
src/idlib/Heap.cpp:50:9: error: use of undeclared identifier '_aligned_malloc'; did you mean 'aligned_alloc'?
src/idlib/Heap.cpp:62:2: error: use of undeclared identifier '_aligned_free'
scons: *** [build/linux-x64-release/idlib/obj/idlib/Str.cpp.o] Error 1
scons: *** [build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o] Error 1
src/idlib/math/VecX.cpp:39:41: error: cast from pointer to smaller type 'int' loses information
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/VecX.cpp.o] Error 1
src/idlib/math/MatX.cpp:39:41: error: cast from pointer to smaller type 'int' loses information
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/MatX.cpp.o] Error 1

### failure context

- build/linux-x64-release/idlib/obj/idlib/Str.cpp.o

```
clang -o build/linux-x64-release/renderer/obj/qcommon/q_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DREFDLL -Isrc -Is
clang -o build/linux-x64-release/renderer/obj/third-party/stb/stb_impl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -w -fPIC -DNDEBUG -DREFDL
clang -o build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DS
clang -o build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DSCREWUP 
clang -o build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DSCREW
clang -o build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DSCRE
clang -o build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_script.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DSCREW
clang++ -o build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy
clang++ -o build/linux-x64-release/idlib/obj/idlib/Str.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang -o build/linux-x64-release/extractfuncs -m64 build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o build/linux-x64-release/extractfunc
clang++ -o build/linux-x64-release/idlib/obj/idlib/Lib.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
src/idlib/Str.cpp:1837:8: error: use of undeclared identifier '_vsnprintf'; did you mean 'vsnprintf'?
 1837 |         ret = _vsnprintf( dest, size - 1, fmt, argptr );
      |               ^~~~~~~~~~
      |               vsnprintf
src/idlib/Heap.cpp:50:9: error: use of undeclared identifier '_aligned_malloc'; did you mean 'aligned_alloc'?
   50 |         return _aligned_malloc( paddedSize, 16 );
      |                ^~~~~~~~~~~~~~~
      |                aligned_alloc
/usr/include/stdlib.h/usr/include/stdio.h:396:12: note: 'vsnprintf' declared here
  396 | extern int vsnprintf (char *__restrict __s, size_t __maxlen,
      |            ^
:746:14: note: 'aligned_alloc' declared here
  746 | extern void *aligned_alloc (size_t __alignment, size_t __size)
      |              ^
src/idlib/Heap.cpp:62:2: error: use of undeclared identifier '_aligned_free'
   62 |         _aligned_free( ptr );
      |         ^~~~~~~~~~~~~
1 error generated.
2 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Str.cpp.o] Error 1
```

- build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o

```
clang -o build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DS
clang -o build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DSCREWUP 
clang -o build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DSCREW
clang -o build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DSCRE
clang -o build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_script.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DSCREW
clang++ -o build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy
clang++ -o build/linux-x64-release/idlib/obj/idlib/Str.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang -o build/linux-x64-release/extractfuncs -m64 build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o build/linux-x64-release/extractfunc
clang++ -o build/linux-x64-release/idlib/obj/idlib/Lib.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
src/idlib/Str.cpp:1837:8: error: use of undeclared identifier '_vsnprintf'; did you mean 'vsnprintf'?
 1837 |         ret = _vsnprintf( dest, size - 1, fmt, argptr );
      |               ^~~~~~~~~~
      |               vsnprintf
src/idlib/Heap.cpp:50:9: error: use of undeclared identifier '_aligned_malloc'; did you mean 'aligned_alloc'?
   50 |         return _aligned_malloc( paddedSize, 16 );
      |                ^~~~~~~~~~~~~~~
      |                aligned_alloc
/usr/include/stdlib.h/usr/include/stdio.h:396:12: note: 'vsnprintf' declared here
  396 | extern int vsnprintf (char *__restrict __s, size_t __maxlen,
      |            ^
:746:14: note: 'aligned_alloc' declared here
  746 | extern void *aligned_alloc (size_t __alignment, size_t __size)
      |              ^
src/idlib/Heap.cpp:62:2: error: use of undeclared identifier '_aligned_free'
   62 |         _aligned_free( ptr );
      |         ^~~~~~~~~~~~~
1 error generated.
2 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Str.cpp.o] Error 1
clang++ -o build/linux-x64-release/idlib/obj/idlib/sys/sys_assert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-depre
scons: *** [build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o] Error 1
```

- build/linux-x64-release/idlib/obj/idlib/math/VecX.cpp.o

```
      |                aligned_alloc
/usr/include/stdlib.h/usr/include/stdio.h:396:12: note: 'vsnprintf' declared here
  396 | extern int vsnprintf (char *__restrict __s, size_t __maxlen,
      |            ^
:746:14: note: 'aligned_alloc' declared here
  746 | extern void *aligned_alloc (size_t __alignment, size_t __size)
      |              ^
src/idlib/Heap.cpp:62:2: error: use of undeclared identifier '_aligned_free'
   62 |         _aligned_free( ptr );
      |         ^~~~~~~~~~~~~
1 error generated.
2 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Str.cpp.o] Error 1
clang++ -o build/linux-x64-release/idlib/obj/idlib/sys/sys_assert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-depre
scons: *** [build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o] Error 1
clang++ -o build/linux-x64-release/idlib/obj/idlib/containers/HashIndex.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Math.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Vector.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecat
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Matrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecat
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Angles.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecat
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Quat.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Plane.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecate
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Rotation.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprec
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/VecX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/MatX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x64-release/idlib/obj/idlib/bv/Bounds.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
src/idlib/math/VecX.cpp:39:41: error: cast from pointer to smaller type 'int' loses information
   39 | float * idVecX::tempPtr = (float *) ( ( (int) idVecX::temp + 15 ) & ~15 );
      |                                         ^~~~~~~~~~~~~~~~~~
1 error generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/VecX.cpp.o] Error 1
```

- build/linux-x64-release/idlib/obj/idlib/math/MatX.cpp.o

```
      |              ^
src/idlib/Heap.cpp:62:2: error: use of undeclared identifier '_aligned_free'
   62 |         _aligned_free( ptr );
      |         ^~~~~~~~~~~~~
1 error generated.
2 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Str.cpp.o] Error 1
clang++ -o build/linux-x64-release/idlib/obj/idlib/sys/sys_assert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-depre
scons: *** [build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o] Error 1
clang++ -o build/linux-x64-release/idlib/obj/idlib/containers/HashIndex.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Math.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Vector.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecat
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Matrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecat
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Angles.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecat
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Quat.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Plane.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecate
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Rotation.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprec
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/VecX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/MatX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x64-release/idlib/obj/idlib/bv/Bounds.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
src/idlib/math/VecX.cpp:39:41: error: cast from pointer to smaller type 'int' loses information
   39 | float * idVecX::tempPtr = (float *) ( ( (int) idVecX::temp + 15 ) & ~15 );
      |                                         ^~~~~~~~~~~~~~~~~~
1 error generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/VecX.cpp.o] Error 1
clang++ -o build/linux-x64-release/idlib/obj/idlib/bv/Box.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-co
src/idlib/math/MatX.cpp:39:41: error: cast from pointer to smaller type 'int' loses information
   39 | float * idMatX::tempPtr = (float *) ( ( (int) idMatX::temp + 15 ) & ~15 );
      |                                         ^~~~~~~~~~~~~~~~~~
1 error generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/MatX.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-debug

status: failure

errors: 5
warnings: 0 in 0 kinds

### errors

src/idlib/Str.cpp:1837:8: error: use of undeclared identifier '_vsnprintf'; did you mean 'vsnprintf'?
src/idlib/Heap.cpp:50:9: error: use of undeclared identifier '_aligned_malloc'; did you mean 'aligned_alloc'?
src/idlib/Heap.cpp:62:2: error: use of undeclared identifier '_aligned_free'
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Str.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Heap.cpp.o] Error 1

### failure context

- build/linux-x86-debug/idlib/obj/idlib/Str.cpp.o

```
clang -o build/linux-x86-debug/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DSCREWUP -Isrc -Isrc/games/game -Is
clang -o build/linux-x86-debug/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DSCREWUP -Isrc -Isrc/games/game -I
clang -o build/linux-x86-debug/extractfuncs_tool/obj/tools/extractfuncs/l_script.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DSCREWUP -Isrc -Isrc/games/game -Is
clang++ -o build/linux-x86-debug/idlib/obj/idlib/Heap.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-cop
clang++ -o build/linux-x86-debug/idlib/obj/idlib/Str.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-copy
clang -o build/linux-x86-debug/extractfuncs -m32 build/linux-x86-debug/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o build/linux-x86-debug/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o build/linux-x86-debug/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o build/linux-x86-debug/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o build/linux-x86-debug/extractfuncs_tool/obj/t
clang++ -o build/linux-x86-debug/idlib/obj/idlib/Lib.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-copy
clang -o build/linux-x86-debug/renderer_gl.so -m32 -shared build/linux-x86-debug/renderer/obj/renderer/tr_animation.c.o build/linux-x86-debug/renderer/obj/renderer/tr_backend.c.o build/linux-x86-debug/renderer/obj/renderer/tr_bsp.c.o build/linux-x86-debug/renderer/obj/renderer/tr_cmds.c.o build/linux-x86-debug/renderer/obj/renderer/tr_cmesh.c.o build/linux-x86-debug/renderer/obj/renderer/tr_curve.
clang++ -o build/linux-x86-debug/idlib/obj/idlib/sys/sys_assert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depr
clang++ -o build/linux-x86-debug/idlib/obj/idlib/containers/HashIndex.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wn
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Math.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
src/idlib/Str.cpp:1837:8: error: use of undeclared identifier '_vsnprintf'; did you mean 'vsnprintf'?
 1837 |         ret = _vsnprintf( dest, size - 1, fmt, argptr );
      |               ^~~~~~~~~~
      |               vsnprintf
src/idlib/Heap.cpp:50:9: error: use of undeclared identifier '_aligned_malloc'; did you mean 'aligned_alloc'?
   50 |         return _aligned_malloc( paddedSize, 16 );
      |                ^~~~~~~~~~~~~~~
      |                aligned_alloc
/usr/include/stdio.h/usr/include/stdlib.h:746:14: note: 'aligned_alloc' declared here
  746 | extern void *aligned_alloc (size_t __alignment, size_t __size)
      |              ^
:396:12: note: 'vsnprintf' declared here
  396 | extern int vsnprintf (char *__restrict __s, size_t __maxlen,
      |            ^
src/idlib/Heap.cpp:62:2: error: use of undeclared identifier '_aligned_free'
   62 |         _aligned_free( ptr );
      |         ^~~~~~~~~~~~~
1 error generated.
2 errors generated.
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Str.cpp.o] Error 1
```

- build/linux-x86-debug/idlib/obj/idlib/Heap.cpp.o

```
clang -o build/linux-x86-debug/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DSCREWUP -Isrc -Isrc/games/game -I
clang -o build/linux-x86-debug/extractfuncs_tool/obj/tools/extractfuncs/l_script.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DSCREWUP -Isrc -Isrc/games/game -Is
clang++ -o build/linux-x86-debug/idlib/obj/idlib/Heap.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-cop
clang++ -o build/linux-x86-debug/idlib/obj/idlib/Str.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-copy
clang -o build/linux-x86-debug/extractfuncs -m32 build/linux-x86-debug/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o build/linux-x86-debug/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o build/linux-x86-debug/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o build/linux-x86-debug/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o build/linux-x86-debug/extractfuncs_tool/obj/t
clang++ -o build/linux-x86-debug/idlib/obj/idlib/Lib.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecated-copy
clang -o build/linux-x86-debug/renderer_gl.so -m32 -shared build/linux-x86-debug/renderer/obj/renderer/tr_animation.c.o build/linux-x86-debug/renderer/obj/renderer/tr_backend.c.o build/linux-x86-debug/renderer/obj/renderer/tr_bsp.c.o build/linux-x86-debug/renderer/obj/renderer/tr_cmds.c.o build/linux-x86-debug/renderer/obj/renderer/tr_cmesh.c.o build/linux-x86-debug/renderer/obj/renderer/tr_curve.
clang++ -o build/linux-x86-debug/idlib/obj/idlib/sys/sys_assert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depr
clang++ -o build/linux-x86-debug/idlib/obj/idlib/containers/HashIndex.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wn
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Math.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
src/idlib/Str.cpp:1837:8: error: use of undeclared identifier '_vsnprintf'; did you mean 'vsnprintf'?
 1837 |         ret = _vsnprintf( dest, size - 1, fmt, argptr );
      |               ^~~~~~~~~~
      |               vsnprintf
src/idlib/Heap.cpp:50:9: error: use of undeclared identifier '_aligned_malloc'; did you mean 'aligned_alloc'?
   50 |         return _aligned_malloc( paddedSize, 16 );
      |                ^~~~~~~~~~~~~~~
      |                aligned_alloc
/usr/include/stdio.h/usr/include/stdlib.h:746:14: note: 'aligned_alloc' declared here
  746 | extern void *aligned_alloc (size_t __alignment, size_t __size)
      |              ^
:396:12: note: 'vsnprintf' declared here
  396 | extern int vsnprintf (char *__restrict __s, size_t __maxlen,
      |            ^
src/idlib/Heap.cpp:62:2: error: use of undeclared identifier '_aligned_free'
   62 |         _aligned_free( ptr );
      |         ^~~~~~~~~~~~~
1 error generated.
2 errors generated.
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Str.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Heap.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-release

status: failure

errors: 5
warnings: 0 in 0 kinds

### errors

src/idlib/Heap.cpp:50:9: error: use of undeclared identifier '_aligned_malloc'; did you mean 'aligned_alloc'?
src/idlib/Heap.cpp:62:2: error: use of undeclared identifier '_aligned_free'
src/idlib/Str.cpp:1837:8: error: use of undeclared identifier '_vsnprintf'; did you mean 'vsnprintf'?
/usr/include/stdio.h:396:12scons: *** [build/linux-x86-release/idlib/obj/idlib/Heap.cpp.o] Error 1
scons: *** [build/linux-x86-release/idlib/obj/idlib/Str.cpp.o] Error 1

### failure context

- build/linux-x86-release/idlib/obj/idlib/Heap.cpp.o

```
clang -o build/linux-x86-release/renderer/obj/renderer/tr_surface.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DREFDLL -Isrc 
clang -o build/linux-x86-release/renderer/obj/renderer/tr_world.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DREFDLL -Isrc -I
clang -o build/linux-x86-release/renderer/obj/renderer/tr_module.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DREFDLL -Isrc -
clang -o build/linux-x86-release/renderer/obj/qcommon/q_math.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DREFDLL -Isrc -Isrc
clang -o build/linux-x86-release/renderer/obj/qcommon/q_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DREFDLL -Isrc -Is
clang -o build/linux-x86-release/renderer/obj/third-party/stb/stb_impl.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -w -fPIC -DNDEBUG -DREFDL
clang -o build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DS
clang -o build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DSCREWUP 
clang -o build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DSCREW
clang -o build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DSCRE
clang -o build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_script.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DSCREW
clang++ -o build/linux-x86-release/idlib/obj/idlib/Heap.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy
clang++ -o build/linux-x86-release/idlib/obj/idlib/Str.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang -o build/linux-x86-release/extractfuncs -m32 build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o build/linux-x86-release/extractfunc
clang++ -o build/linux-x86-release/idlib/obj/idlib/Lib.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
src/idlib/Heap.cpp:50:9: error: use of undeclared identifier '_aligned_malloc'; did you mean 'aligned_alloc'?
   50 |         return _aligned_malloc( paddedSize, 16 );
      |                ^~~~~~~~~~~~~~~
      |                aligned_alloc
/usr/include/stdlib.h:746:14: note: 'aligned_alloc' declared here
  746 | extern void *aligned_alloc (size_t __alignment, size_t __size)
      |              ^
src/idlib/Heap.cpp:62:2: error: use of undeclared identifier '_aligned_free'
   62 |         _aligned_free( ptr );
      |         ^~~~~~~~~~~~~
2 errors generated.
src/idlib/Str.cpp:1837:8: error: use of undeclared identifier '_vsnprintf'; did you mean 'vsnprintf'?
 1837 |         ret = _vsnprintf( dest, size - 1, fmt, argptr );
      |               ^~~~~~~~~~
      |               vsnprintf
/usr/include/stdio.h:396:12scons: *** [build/linux-x86-release/idlib/obj/idlib/Heap.cpp.o] Error 1
```

- build/linux-x86-release/idlib/obj/idlib/Str.cpp.o

```
clang -o build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DS
clang -o build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DSCREWUP 
clang -o build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DSCREW
clang -o build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DSCRE
clang -o build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_script.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -DNDEBUG -DSCREW
clang++ -o build/linux-x86-release/idlib/obj/idlib/Heap.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy
clang++ -o build/linux-x86-release/idlib/obj/idlib/Str.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang -o build/linux-x86-release/extractfuncs -m32 build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o build/linux-x86-release/extractfunc
clang++ -o build/linux-x86-release/idlib/obj/idlib/Lib.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
src/idlib/Heap.cpp:50:9: error: use of undeclared identifier '_aligned_malloc'; did you mean 'aligned_alloc'?
   50 |         return _aligned_malloc( paddedSize, 16 );
      |                ^~~~~~~~~~~~~~~
      |                aligned_alloc
/usr/include/stdlib.h:746:14: note: 'aligned_alloc' declared here
  746 | extern void *aligned_alloc (size_t __alignment, size_t __size)
      |              ^
src/idlib/Heap.cpp:62:2: error: use of undeclared identifier '_aligned_free'
   62 |         _aligned_free( ptr );
      |         ^~~~~~~~~~~~~
2 errors generated.
src/idlib/Str.cpp:1837:8: error: use of undeclared identifier '_vsnprintf'; did you mean 'vsnprintf'?
 1837 |         ret = _vsnprintf( dest, size - 1, fmt, argptr );
      |               ^~~~~~~~~~
      |               vsnprintf
/usr/include/stdio.h:396:12scons: *** [build/linux-x86-release/idlib/obj/idlib/Heap.cpp.o] Error 1
: note: 'vsnprintf' declared here
  396 | extern int vsnprintf (char *__restrict __s, size_t __maxlen,
      |            ^
clang++ -o build/linux-x86-release/idlib/obj/idlib/sys/sys_assert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-depre
1 error generated.
scons: *** [build/linux-x86-release/idlib/obj/idlib/Str.cpp.o] Error 1
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

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-release

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x86-debug

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x86-release

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

