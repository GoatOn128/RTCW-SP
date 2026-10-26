# Build digest

commit: de36e5d55fed

- ubuntu-latest-x64-debug: failure
- ubuntu-latest-x64-release: failure
- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: failure
- uncrustify: success
- windows-latest-x64-debug: failure
- windows-latest-x64-release: failure
- windows-latest-x86-debug: failure
- windows-latest-x86-release: failure

## ubuntu-latest-x64-debug

status: failure

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x64-release

status: failure

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x86-debug

status: failure

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x86-release

status: failure

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


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

errors: 10
warnings: 0 in 0 kinds

### errors

src\tools\extractfuncs\l_log.c(117,7): error: use of undeclared identifier 'verbose'
src\tools\extractfuncs\l_log.c(118,3): error: call to undeclared library function 'va_start' with type 'void (__builtin_va_list &, ...)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\tools\extractfuncs\l_log.c(125,3): error: call to undeclared library function 'va_end' with type 'void (__builtin_va_list &)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
scons: *** [build\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_log.c.obj] Error 1
src\tools\extractfuncs\l_log.h(51,1): error: unknown type name 'FILE'
src\tools\extractfuncs\l_memory.c(364,2): error: call to undeclared library function 'memset' with type 'void *(void *, int, __size_t)' (aka 'void *(void *, int, unsigned long long)'); ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
scons: *** [build\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj] Error 1
src\tools\extractfuncs\l_precomp.c(132,8): error: call to undeclared library function 'tolower' with type 'int (int)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\tools\extractfuncs\l_precomp.c(143,8): error: call to undeclared library function 'toupper' with type 'int (int)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
scons: *** [build\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj] Error 1

### failure context

- build\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_log.c.obj

```
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_marks.c.obj /c src\renderer\tr_marks.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_mesh.c.obj /c src\renderer\tr_mesh.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_model.c.obj /c src\renderer\tr_model.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_noise.c.obj /c src\renderer\tr_noise.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_scene.c.obj /c src\renderer\tr_scene.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_shade.c.obj /c src\renderer\tr_shade.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN3
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_W
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_sky.c.obj /c src\renderer\tr_sky.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_surface.c.obj /c src\renderer\tr_surface.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_W
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_world.c.obj /c src\renderer\tr_world.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_module.c.obj /c src\renderer\tr_module.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x64-debug\renderer\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-debug\renderer\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-debug\renderer\obj\third-party\stb\stb_impl.c.obj /c src\third-party\stb\stb_impl.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /W
clang-cl /Fobuild\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\extractfuncs.c.obj /c src\tools\extractfuncs\extractfuncs.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-decla
clang-cl /Fobuild\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_log.c.obj /c src\tools\extractfuncs\l_log.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /O
src\tools\extractfuncs\l_log.c(117,7): error: use of undeclared identifier 'verbose'
  117 |         if ( verbose ) {
      |              ^~~~~~~
src\tools\extractfuncs\l_log.c(118,3): error: call to undeclared library function 'va_start' with type 'void (__builtin_va_list &, ...)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  118 |                 va_start( ap, fmt );
      |                 ^
src\tools\extractfuncs\l_log.c(118,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_start'
src\tools\extractfuncs\l_log.c(125,3): error: call to undeclared library function 'va_end' with type 'void (__builtin_va_list &)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  125 |                 va_end( ap );
      |                 ^
src\tools\extractfuncs\l_log.c(125,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_end'
3 errors generated.
scons: *** [build\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_log.c.obj] Error 1
```

- build\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj

```
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_world.c.obj /c src\renderer\tr_world.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_module.c.obj /c src\renderer\tr_module.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x64-debug\renderer\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-debug\renderer\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-debug\renderer\obj\third-party\stb\stb_impl.c.obj /c src\third-party\stb\stb_impl.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /W
clang-cl /Fobuild\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\extractfuncs.c.obj /c src\tools\extractfuncs\extractfuncs.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-decla
clang-cl /Fobuild\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_log.c.obj /c src\tools\extractfuncs\l_log.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /O
src\tools\extractfuncs\l_log.c(117,7): error: use of undeclared identifier 'verbose'
  117 |         if ( verbose ) {
      |              ^~~~~~~
src\tools\extractfuncs\l_log.c(118,3): error: call to undeclared library function 'va_start' with type 'void (__builtin_va_list &, ...)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  118 |                 va_start( ap, fmt );
      |                 ^
src\tools\extractfuncs\l_log.c(118,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_start'
src\tools\extractfuncs\l_log.c(125,3): error: call to undeclared library function 'va_end' with type 'void (__builtin_va_list &)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  125 |                 va_end( ap );
      |                 ^
src\tools\extractfuncs\l_log.c(125,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_end'
3 errors generated.
scons: *** [build\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_log.c.obj] Error 1
clang-cl /Fobuild\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj /c src\tools\extractfuncs\l_memory.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations 
In file included from src\tools\extractfuncs\l_memory.c:40:
src\tools\extractfuncs\l_log.h(51,1): error: unknown type name 'FILE'
   51 | FILE *Log_FileStruct( void );
      | ^
src\tools\extractfuncs\l_memory.c(364,2): error: call to undeclared library function 'memset' with type 'void *(void *, int, __size_t)' (aka 'void *(void *, int, unsigned long long)'); ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  364 |         memset( ptr, 0, size );
      |         ^
src\tools\extractfuncs\l_memory.c(364,2): note: include the header <string.h> or explicitly provide a declaration for 'memset'
2 errors generated.
scons: *** [build\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj] Error 1
```

- build\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj

```
      |                 ^
src\tools\extractfuncs\l_log.c(118,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_start'
src\tools\extractfuncs\l_log.c(125,3): error: call to undeclared library function 'va_end' with type 'void (__builtin_va_list &)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  125 |                 va_end( ap );
      |                 ^
src\tools\extractfuncs\l_log.c(125,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_end'
3 errors generated.
scons: *** [build\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_log.c.obj] Error 1
clang-cl /Fobuild\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj /c src\tools\extractfuncs\l_memory.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations 
In file included from src\tools\extractfuncs\l_memory.c:40:
src\tools\extractfuncs\l_log.h(51,1): error: unknown type name 'FILE'
   51 | FILE *Log_FileStruct( void );
      | ^
src\tools\extractfuncs\l_memory.c(364,2): error: call to undeclared library function 'memset' with type 'void *(void *, int, __size_t)' (aka 'void *(void *, int, unsigned long long)'); ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  364 |         memset( ptr, 0, size );
      |         ^
src\tools\extractfuncs\l_memory.c(364,2): note: include the header <string.h> or explicitly provide a declaration for 'memset'
2 errors generated.
scons: *** [build\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj] Error 1
clang-cl /Fobuild\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj /c src\tools\extractfuncs\l_precomp.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
clang-cl /Fobuild\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_script.c.obj /c src\tools\extractfuncs\l_script.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations 
src\tools\extractfuncs\l_precomp.c(132,8): error: call to undeclared library function 'tolower' with type 'int (int)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  132 |                 *s = tolower( *s );
      |                      ^
src\tools\extractfuncs\l_precomp.c(132,8): note: include the header <ctype.h> or explicitly provide a declaration for 'tolower'
src\tools\extractfuncs\l_precomp.c(143,8): error: call to undeclared library function 'toupper' with type 'int (int)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  143 |                 *s = toupper( *s );
      |                      ^
src\tools\extractfuncs\l_precomp.c(143,8): note: include the header <ctype.h> or explicitly provide a declaration for 'toupper'
2 errors generated.
scons: *** [build\windows-x64-debug\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj] Error 1
```


### warning kinds

## windows-latest-x64-release

status: failure

errors: 10
warnings: 0 in 0 kinds

### errors

src\tools\extractfuncs\l_log.c(117,7): error: use of undeclared identifier 'verbose'
src\tools\extractfuncs\l_log.c(118,3): error: call to undeclared library function 'va_start' with type 'void (__builtin_va_list &, ...)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\tools\extractfuncs\l_log.c(125,3): error: call to undeclared library function 'va_end' with type 'void (__builtin_va_list &)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
scons: *** [build\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_log.c.obj] Error 1
src\tools\extractfuncs\l_log.h(51,1): error: unknown type name 'FILE'
src\tools\extractfuncs\l_memory.c(364,2): error: call to undeclared library function 'memset' with type 'void *(void *, int, __size_t)' (aka 'void *(void *, int, unsigned long long)'); ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
scons: *** [build\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj] Error 1
src\tools\extractfuncs\l_precomp.c(132,8): error: call to undeclared library function 'tolower' with type 'int (int)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\tools\extractfuncs\l_precomp.c(143,8): error: call to undeclared library function 'toupper' with type 'int (int)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
scons: *** [build\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj] Error 1

### failure context

- build\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_log.c.obj

```
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj /c src\renderer\tr_mesh.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_model.c.obj /c src\renderer\tr_model.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_noise.c.obj /c src\renderer\tr_noise.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_scene.c.obj /c src\renderer\tr_scene.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj /c src\renderer\tr_shade.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_sky.c.obj /c src\renderer\tr_sky.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_surface.c.obj /c src\renderer\tr_surface.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_world.c.obj /c src\renderer\tr_world.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_module.c.obj /c src\renderer\tr_module.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-release\renderer\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-release\renderer\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x64-release\renderer\obj\third-party\stb\stb_impl.c.obj /c src\third-party\stb\stb_impl.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /W0 
clang-cl /Fobuild\windows-x64-release\extractfuncs\obj\tools\extractfuncs\extractfuncs.c.obj /c src\tools\extractfuncs\extractfuncs.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-dec
clang-cl /Fobuild\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_log.c.obj /c src\tools\extractfuncs\l_log.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 
clang-cl /Fobuild\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj /c src\tools\extractfuncs\l_memory.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
src\tools\extractfuncs\l_log.c(117,7): error: use of undeclared identifier 'verbose'
  117 |         if ( verbose ) {
      |              ^~~~~~~
src\tools\extractfuncs\l_log.c(118,3): error: call to undeclared library function 'va_start' with type 'void (__builtin_va_list &, ...)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  118 |                 va_start( ap, fmt );
      |                 ^
src\tools\extractfuncs\l_log.c(118,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_start'
src\tools\extractfuncs\l_log.c(125,3): error: call to undeclared library function 'va_end' with type 'void (__builtin_va_list &)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  125 |                 va_end( ap );
      |                 ^
src\tools\extractfuncs\l_log.c(125,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_end'
3 errors generated.
scons: *** [build\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_log.c.obj] Error 1
```

- build\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj

```
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_module.c.obj /c src\renderer\tr_module.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-release\renderer\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-release\renderer\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x64-release\renderer\obj\third-party\stb\stb_impl.c.obj /c src\third-party\stb\stb_impl.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /W0 
clang-cl /Fobuild\windows-x64-release\extractfuncs\obj\tools\extractfuncs\extractfuncs.c.obj /c src\tools\extractfuncs\extractfuncs.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-dec
clang-cl /Fobuild\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_log.c.obj /c src\tools\extractfuncs\l_log.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 
clang-cl /Fobuild\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj /c src\tools\extractfuncs\l_memory.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
src\tools\extractfuncs\l_log.c(117,7): error: use of undeclared identifier 'verbose'
  117 |         if ( verbose ) {
      |              ^~~~~~~
src\tools\extractfuncs\l_log.c(118,3): error: call to undeclared library function 'va_start' with type 'void (__builtin_va_list &, ...)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  118 |                 va_start( ap, fmt );
      |                 ^
src\tools\extractfuncs\l_log.c(118,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_start'
src\tools\extractfuncs\l_log.c(125,3): error: call to undeclared library function 'va_end' with type 'void (__builtin_va_list &)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  125 |                 va_end( ap );
      |                 ^
src\tools\extractfuncs\l_log.c(125,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_end'
3 errors generated.
scons: *** [build\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_log.c.obj] Error 1
In file included from src\tools\extractfuncs\l_memory.c:40:
src\tools\extractfuncs\l_log.h(51,1): error: unknown type name 'FILE'
   51 | FILE *Log_FileStruct( void );
      | ^
src\tools\extractfuncs\l_memory.c(364,2): error: call to undeclared library function 'memset' with type 'void *(void *, int, __size_t)' (aka 'void *(void *, int, unsigned long long)'); ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  364 |         memset( ptr, 0, size );
      |         ^
src\tools\extractfuncs\l_memory.c(364,2): note: include the header <string.h> or explicitly provide a declaration for 'memset'
2 errors generated.
clang-cl /Fobuild\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj /c src\tools\extractfuncs\l_precomp.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
scons: *** [build\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj] Error 1
```

- build\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj

```
  118 |                 va_start( ap, fmt );
      |                 ^
src\tools\extractfuncs\l_log.c(118,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_start'
src\tools\extractfuncs\l_log.c(125,3): error: call to undeclared library function 'va_end' with type 'void (__builtin_va_list &)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  125 |                 va_end( ap );
      |                 ^
src\tools\extractfuncs\l_log.c(125,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_end'
3 errors generated.
scons: *** [build\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_log.c.obj] Error 1
In file included from src\tools\extractfuncs\l_memory.c:40:
src\tools\extractfuncs\l_log.h(51,1): error: unknown type name 'FILE'
   51 | FILE *Log_FileStruct( void );
      | ^
src\tools\extractfuncs\l_memory.c(364,2): error: call to undeclared library function 'memset' with type 'void *(void *, int, __size_t)' (aka 'void *(void *, int, unsigned long long)'); ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  364 |         memset( ptr, 0, size );
      |         ^
src\tools\extractfuncs\l_memory.c(364,2): note: include the header <string.h> or explicitly provide a declaration for 'memset'
2 errors generated.
clang-cl /Fobuild\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj /c src\tools\extractfuncs\l_precomp.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
scons: *** [build\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_script.c.obj /c src\tools\extractfuncs\l_script.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
src\tools\extractfuncs\l_precomp.c(132,8): error: call to undeclared library function 'tolower' with type 'int (int)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  132 |                 *s = tolower( *s );
      |                      ^
src\tools\extractfuncs\l_precomp.c(132,8): note: include the header <ctype.h> or explicitly provide a declaration for 'tolower'
src\tools\extractfuncs\l_precomp.c(143,8): error: call to undeclared library function 'toupper' with type 'int (int)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  143 |                 *s = toupper( *s );
      |                      ^
src\tools\extractfuncs\l_precomp.c(143,8): note: include the header <ctype.h> or explicitly provide a declaration for 'toupper'
2 errors generated.
scons: *** [build\windows-x64-release\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj] Error 1
```


### warning kinds

## windows-latest-x86-debug

status: failure

errors: 10
warnings: 0 in 0 kinds

### errors

src\tools\extractfuncs\l_log.c(117,7): error: use of undeclared identifier 'verbose'
src\tools\extractfuncs\l_log.c(118,3): error: call to undeclared library function 'va_start' with type 'void (__builtin_va_list &, ...)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\tools\extractfuncs\l_log.c(125,3): error: call to undeclared library function 'va_end' with type 'void (__builtin_va_list &)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
scons: *** [build\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_log.c.obj] Error 1
src\tools\extractfuncs\l_log.h(51,1): error: unknown type name 'FILE'
src\tools\extractfuncs\l_memory.c(364,2): error: call to undeclared library function 'memset' with type 'void *(void *, int, __size_t)' (aka 'void *(void *, int, unsigned int)'); ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
scons: *** [build\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj] Error 1
src\tools\extractfuncs\l_precomp.c(132,8): error: call to undeclared library function 'tolower' with type 'int (int)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\tools\extractfuncs\l_precomp.c(143,8): error: call to undeclared library function 'toupper' with type 'int (int)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
scons: *** [build\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj] Error 1

### failure context

- build\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_log.c.obj

```
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_mesh.c.obj /c src\renderer\tr_mesh.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_model.c.obj /c src\renderer\tr_model.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_noise.c.obj /c src\renderer\tr_noise.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_scene.c.obj /c src\renderer\tr_scene.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_shade.c.obj /c src\renderer\tr_shade.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN3
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_W
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_sky.c.obj /c src\renderer\tr_sky.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_surface.c.obj /c src\renderer\tr_surface.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_W
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_world.c.obj /c src\renderer\tr_world.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_module.c.obj /c src\renderer\tr_module.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x86-debug\renderer\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x86-debug\renderer\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-debug\renderer\obj\third-party\stb\stb_impl.c.obj /c src\third-party\stb\stb_impl.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /W
clang-cl /Fobuild\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\extractfuncs.c.obj /c src\tools\extractfuncs\extractfuncs.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-decla
clang-cl /Fobuild\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_log.c.obj /c src\tools\extractfuncs\l_log.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /O
src\tools\extractfuncs\l_log.c(117,7): error: use of undeclared identifier 'verbose'
  117 |         if ( verbose ) {
      |              ^~~~~~~
src\tools\extractfuncs\l_log.c(118,3): error: call to undeclared library function 'va_start' with type 'void (__builtin_va_list &, ...)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  118 |                 va_start( ap, fmt );
      |                 ^
src\tools\extractfuncs\l_log.c(118,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_start'
src\tools\extractfuncs\l_log.c(125,3): error: call to undeclared library function 'va_end' with type 'void (__builtin_va_list &)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  125 |                 va_end( ap );
      |                 ^
src\tools\extractfuncs\l_log.c(125,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_end'
3 errors generated.
clang-cl /Fobuild\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj /c src\tools\extractfuncs\l_memory.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations 
scons: *** [build\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_log.c.obj] Error 1
```

- build\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj

```
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_module.c.obj /c src\renderer\tr_module.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x86-debug\renderer\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x86-debug\renderer\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-debug\renderer\obj\third-party\stb\stb_impl.c.obj /c src\third-party\stb\stb_impl.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /W
clang-cl /Fobuild\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\extractfuncs.c.obj /c src\tools\extractfuncs\extractfuncs.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-decla
clang-cl /Fobuild\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_log.c.obj /c src\tools\extractfuncs\l_log.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /O
src\tools\extractfuncs\l_log.c(117,7): error: use of undeclared identifier 'verbose'
  117 |         if ( verbose ) {
      |              ^~~~~~~
src\tools\extractfuncs\l_log.c(118,3): error: call to undeclared library function 'va_start' with type 'void (__builtin_va_list &, ...)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  118 |                 va_start( ap, fmt );
      |                 ^
src\tools\extractfuncs\l_log.c(118,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_start'
src\tools\extractfuncs\l_log.c(125,3): error: call to undeclared library function 'va_end' with type 'void (__builtin_va_list &)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  125 |                 va_end( ap );
      |                 ^
src\tools\extractfuncs\l_log.c(125,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_end'
3 errors generated.
clang-cl /Fobuild\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj /c src\tools\extractfuncs\l_memory.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations 
scons: *** [build\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_log.c.obj] Error 1
clang-cl /Fobuild\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj /c src\tools\extractfuncs\l_precomp.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
In file included from src\tools\extractfuncs\l_memory.c:40:
src\tools\extractfuncs\l_log.h(51,1): error: unknown type name 'FILE'
   51 | FILE *Log_FileStruct( void );
      | ^
src\tools\extractfuncs\l_memory.c(364,2): error: call to undeclared library function 'memset' with type 'void *(void *, int, __size_t)' (aka 'void *(void *, int, unsigned int)'); ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  364 |         memset( ptr, 0, size );
      |         ^
src\tools\extractfuncs\l_memory.c(364,2): note: include the header <string.h> or explicitly provide a declaration for 'memset'
2 errors generated.
scons: *** [build\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj] Error 1
```

- build\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj

```
      |                 ^
src\tools\extractfuncs\l_log.c(118,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_start'
src\tools\extractfuncs\l_log.c(125,3): error: call to undeclared library function 'va_end' with type 'void (__builtin_va_list &)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  125 |                 va_end( ap );
      |                 ^
src\tools\extractfuncs\l_log.c(125,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_end'
3 errors generated.
clang-cl /Fobuild\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj /c src\tools\extractfuncs\l_memory.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations 
scons: *** [build\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_log.c.obj] Error 1
clang-cl /Fobuild\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj /c src\tools\extractfuncs\l_precomp.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
In file included from src\tools\extractfuncs\l_memory.c:40:
src\tools\extractfuncs\l_log.h(51,1): error: unknown type name 'FILE'
   51 | FILE *Log_FileStruct( void );
      | ^
src\tools\extractfuncs\l_memory.c(364,2): error: call to undeclared library function 'memset' with type 'void *(void *, int, __size_t)' (aka 'void *(void *, int, unsigned int)'); ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  364 |         memset( ptr, 0, size );
      |         ^
src\tools\extractfuncs\l_memory.c(364,2): note: include the header <string.h> or explicitly provide a declaration for 'memset'
2 errors generated.
scons: *** [build\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj] Error 1
clang-cl /Fobuild\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_script.c.obj /c src\tools\extractfuncs\l_script.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations 
src\tools\extractfuncs\l_precomp.c(132,8): error: call to undeclared library function 'tolower' with type 'int (int)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  132 |                 *s = tolower( *s );
      |                      ^
src\tools\extractfuncs\l_precomp.c(132,8): note: include the header <ctype.h> or explicitly provide a declaration for 'tolower'
src\tools\extractfuncs\l_precomp.c(143,8): error: call to undeclared library function 'toupper' with type 'int (int)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  143 |                 *s = toupper( *s );
      |                      ^
src\tools\extractfuncs\l_precomp.c(143,8): note: include the header <ctype.h> or explicitly provide a declaration for 'toupper'
2 errors generated.
scons: *** [build\windows-x86-debug\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj] Error 1
```


### warning kinds

## windows-latest-x86-release

status: failure

errors: 10
warnings: 0 in 0 kinds

### errors

src\tools\extractfuncs\l_log.c(117,7): error: use of undeclared identifier 'verbose'
src\tools\extractfuncs\l_log.c(118,3): error: call to undeclared library function 'va_start' with type 'void (__builtin_va_list &, ...)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\tools\extractfuncs\l_log.c(125,3): error: call to undeclared library function 'va_end' with type 'void (__builtin_va_list &)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
scons: *** [build\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_log.c.obj] Error 1
src\tools\extractfuncs\l_log.h(51,1): error: unknown type name 'FILE'
src\tools\extractfuncs\l_memory.c(364,2): error: call to undeclared library function 'memset' with type 'void *(void *, int, __size_t)' (aka 'void *(void *, int, unsigned int)'); ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
scons: *** [build\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj] Error 1
src\tools\extractfuncs\l_precomp.c(132,8): error: call to undeclared library function 'tolower' with type 'int (int)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\tools\extractfuncs\l_precomp.c(143,8): error: call to undeclared library function 'toupper' with type 'int (int)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
scons: *** [build\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj] Error 1

### failure context

- build\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_log.c.obj

```
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_marks.c.obj /c src\renderer\tr_marks.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_mesh.c.obj /c src\renderer\tr_mesh.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_model.c.obj /c src\renderer\tr_model.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_noise.c.obj /c src\renderer\tr_noise.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_scene.c.obj /c src\renderer\tr_scene.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_shade.c.obj /c src\renderer\tr_shade.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_sky.c.obj /c src\renderer\tr_sky.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_surface.c.obj /c src\renderer\tr_surface.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_world.c.obj /c src\renderer\tr_world.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_module.c.obj /c src\renderer\tr_module.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-release\renderer\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x86-release\renderer\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\stb\stb_impl.c.obj /c src\third-party\stb\stb_impl.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /W0 
clang-cl /Fobuild\windows-x86-release\extractfuncs\obj\tools\extractfuncs\extractfuncs.c.obj /c src\tools\extractfuncs\extractfuncs.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-dec
clang-cl /Fobuild\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_log.c.obj /c src\tools\extractfuncs\l_log.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 
src\tools\extractfuncs\l_log.c(117,7): error: use of undeclared identifier 'verbose'
  117 |         if ( verbose ) {
      |              ^~~~~~~
src\tools\extractfuncs\l_log.c(118,3): error: call to undeclared library function 'va_start' with type 'void (__builtin_va_list &, ...)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  118 |                 va_start( ap, fmt );
      |                 ^
src\tools\extractfuncs\l_log.c(118,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_start'
src\tools\extractfuncs\l_log.c(125,3): error: call to undeclared library function 'va_end' with type 'void (__builtin_va_list &)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  125 |                 va_end( ap );
      |                 ^
src\tools\extractfuncs\l_log.c(125,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_end'
3 errors generated.
scons: *** [build\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_log.c.obj] Error 1
```

- build\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj

```
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_module.c.obj /c src\renderer\tr_module.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-release\renderer\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x86-release\renderer\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\stb\stb_impl.c.obj /c src\third-party\stb\stb_impl.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /W0 
clang-cl /Fobuild\windows-x86-release\extractfuncs\obj\tools\extractfuncs\extractfuncs.c.obj /c src\tools\extractfuncs\extractfuncs.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-dec
clang-cl /Fobuild\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_log.c.obj /c src\tools\extractfuncs\l_log.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 
src\tools\extractfuncs\l_log.c(117,7): error: use of undeclared identifier 'verbose'
  117 |         if ( verbose ) {
      |              ^~~~~~~
src\tools\extractfuncs\l_log.c(118,3): error: call to undeclared library function 'va_start' with type 'void (__builtin_va_list &, ...)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  118 |                 va_start( ap, fmt );
      |                 ^
src\tools\extractfuncs\l_log.c(118,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_start'
src\tools\extractfuncs\l_log.c(125,3): error: call to undeclared library function 'va_end' with type 'void (__builtin_va_list &)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  125 |                 va_end( ap );
      |                 ^
src\tools\extractfuncs\l_log.c(125,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_end'
3 errors generated.
scons: *** [build\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_log.c.obj] Error 1
clang-cl /Fobuild\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj /c src\tools\extractfuncs\l_memory.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
clang-cl /Fobuild\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj /c src\tools\extractfuncs\l_precomp.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
In file included from src\tools\extractfuncs\l_memory.c:40:
src\tools\extractfuncs\l_log.h(51,1): error: unknown type name 'FILE'
   51 | FILE *Log_FileStruct( void );
      | ^
src\tools\extractfuncs\l_memory.c(364,2): error: call to undeclared library function 'memset' with type 'void *(void *, int, __size_t)' (aka 'void *(void *, int, unsigned int)'); ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  364 |         memset( ptr, 0, size );
      |         ^
src\tools\extractfuncs\l_memory.c(364,2): note: include the header <string.h> or explicitly provide a declaration for 'memset'
2 errors generated.
scons: *** [build\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj] Error 1
```

- build\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj

```
      |                 ^
src\tools\extractfuncs\l_log.c(118,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_start'
src\tools\extractfuncs\l_log.c(125,3): error: call to undeclared library function 'va_end' with type 'void (__builtin_va_list &)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  125 |                 va_end( ap );
      |                 ^
src\tools\extractfuncs\l_log.c(125,3): note: include the header <stdarg.h> or explicitly provide a declaration for 'va_end'
3 errors generated.
scons: *** [build\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_log.c.obj] Error 1
clang-cl /Fobuild\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj /c src\tools\extractfuncs\l_memory.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
clang-cl /Fobuild\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj /c src\tools\extractfuncs\l_precomp.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
In file included from src\tools\extractfuncs\l_memory.c:40:
src\tools\extractfuncs\l_log.h(51,1): error: unknown type name 'FILE'
   51 | FILE *Log_FileStruct( void );
      | ^
src\tools\extractfuncs\l_memory.c(364,2): error: call to undeclared library function 'memset' with type 'void *(void *, int, __size_t)' (aka 'void *(void *, int, unsigned int)'); ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  364 |         memset( ptr, 0, size );
      |         ^
src\tools\extractfuncs\l_memory.c(364,2): note: include the header <string.h> or explicitly provide a declaration for 'memset'
2 errors generated.
scons: *** [build\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_memory.c.obj] Error 1
clang-cl /Fobuild\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_script.c.obj /c src\tools\extractfuncs\l_script.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
src\tools\extractfuncs\l_precomp.c(132,8): error: call to undeclared library function 'tolower' with type 'int (int)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  132 |                 *s = tolower( *s );
      |                      ^
src\tools\extractfuncs\l_precomp.c(132,8): note: include the header <ctype.h> or explicitly provide a declaration for 'tolower'
src\tools\extractfuncs\l_precomp.c(143,8): error: call to undeclared library function 'toupper' with type 'int (int)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  143 |                 *s = toupper( *s );
      |                      ^
src\tools\extractfuncs\l_precomp.c(143,8): note: include the header <ctype.h> or explicitly provide a declaration for 'toupper'
2 errors generated.
scons: *** [build\windows-x86-release\extractfuncs\obj\tools\extractfuncs\l_precomp.c.obj] Error 1
```


### warning kinds

