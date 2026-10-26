# Build digest

commit: 7f9dccbc01a1

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

errors: 179
warnings: 0 in 0 kinds

### errors

: src/idlib/../idlib/sys/sys_intrinsics.herror: :159expected ';' after top level declarator:
40: error: expected ';' after top level declarator
src/idlib/../idlib/sys/sys_intrinsics.hsrc/idlib/sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
:176:3: error: a type specifier is required for all declarations
src/idlib/sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/../idlib/sys/sys_intrinsics.hsrc/idlib/sys/sys_intrinsics.h::187187::2424: :error:  unknown type name '__m128'error:
2error: 8unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:188:2: error: src/idlib/../idlib/sys/sys_intrinsics.h:188:2: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:188:2: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.hsrc/idlib/../idlib/sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
189 |         return _mm_add_ps( _mmsrc/idlib/sys/sys_intrinsics.h_:s189p:l21at:_ perror: s(use of undeclared identifier '_MM_SHUFFLE'
:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/../idlib/sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
180 | #define _mm_splat_ps( x, i src/idlib/sys/sys_intrinsics.h)    :  189 : 55 :   error:   use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/../idlib/sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( src/idlib/sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
, 1 ), _mm_spsrc/idlib/../idlib/sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/../idlib/sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/../idlib/sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
| src/idlib/sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h  :205 | 211        :_24_:m 1error: 2unknown type name '__m128'8
r = _mm_rcp_ps( x );     211  |  I/D/_ F_OmRmC_Er_cIpN_Lsrc/idlib/../idlib/sys/sys_intrinsics.hIp:Ns211E:(_)24E:  Xerror: hTaunknown type name '__m128'E
fatal error: too many errors emitted, stopping now [-ferror-limit=]
src/idlib/sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Heap.cpp.o] Error 1
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Str.cpp.o] Error 1
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Lib.cpp.o] Error 1
src/idlib/sys/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/sys/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/sys/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:188:2: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/containers/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/sys/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/math/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/containers/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.hsrc/idlib/containers/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
:187187 | :I24D:_ Ferror: Ounknown type name '__m128'R
src/idlib/sys/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/math/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:188:2: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/containers/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/containers/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:188:2: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/math/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/math/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/containers/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/math/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/containers/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/math/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
204 | ID_FORCE_INLINE_EXTERN _src/idlib/containers/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'_
src/idlib/math/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
scons: *** [build/linux-x64-debug/idlib/obj/idlib/sys/sys_assert.cpp.o] Error 1
20scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Math.cpp.o] Error 1
scons: *** [build/linux-x64-debug/idlib/obj/idlib/containers/HashIndex.cpp.o] Error 1
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Vector.cpp.o] Error 1
:159:40:src/idlib/math/../sys/sys_intrinsics.h :error: 176:expected ';' after top level declarator3
: error: a type specifier is required for all declarations
src/idlib/math/../sys/sys_intrinsics.hsrc/idlib/math/../sys/sys_intrinsics.h::187187::2424::  error: error: unknown type name '__m128'unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.hsrc/idlib/math/../sys/sys_intrinsics.h::187187::4545::  error: error: unknown type name '__m128'unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.hsrc/idlib/math/../sys/sys_intrinsics.h::188188::22::  error: error: unknown type name '__m128'unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.hsrc/idlib/math/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/math/../sys/sys_intrinsics.hsrc/idlib/math/../sys/sys_intrinsics.h::192192::2445::  error: error: unknown type name '__m128'unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.hsrc/idlib/math/../sys/sys_intrinsics.h::192192::4555::  error: error: unknown type name '__m128'unknown type name '__m128'
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Quat.cpp.o] Error 1
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Angles.cpp.o] Error 1
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Matrix.cpp.o] Error 1
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Plane.cpp.o] Error 1
187 | ID_FORCE_INLINEsrc/idlib/math/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
:188:2: error: unknown type name '__m128'
180 | #define _mm_splat_ps( x, i )      src/idlib/math/../sys/sys_intrinsics.h    : 192 : 24 :   error: __unknown type name '__m128'm
src/idlib/bv/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/bv/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/bv/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:188:2: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/bv/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/bv/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/bv/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/bv/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/bv/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/VecX.cpp.o] Error 1
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Rotation.cpp.o] Error 1
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/MatX.cpp.o] Error 1
scons: *** [build/linux-x64-debug/idlib/obj/idlib/bv/Bounds.cpp.o] Error 1
error: a type specifier is required for all declarations  159 | typedef union __declspec( intrin_type ) _CRT_ALIGN( 16 ) __m128c {
src/idlib/bv/../sys/sys_intrinsics.h  187 | :I187:D24_:F Oerror: RCunknown type name '__m128'E
189 |         return _mm_add_ps( src/idlib/bv/../sys/sys_intrinsics.h_mm_:s189p:l21a:t _error: puse of undeclared identifier '_MM_SHUFFLE's
189 |         return _mm_add_ps( _mmsrc/idlib/bv/../sys/sys_intrinsics.h_:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
:192:24: error: unknown type name '__m128'
:45: error: unknown type name '__m128'
205 |         __m128 r = _mm_rcp_ps( x );     src/idlib/bv/../sys/sys_intrinsics.h// _mm_rcp_ps() has 12 :211:24: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/geometry/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/geometry/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:188:2: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/geometry/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/geometry/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/geometry/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/geometry/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/geometry/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
scons: *** [build/linux-x64-debug/idlib/obj/idlib/bv/Sphere.cpp.o] Error 1
scons: *** [build/linux-x64-debug/idlib/obj/idlib/bv/Box.cpp.o] Error 1
scons: *** [build/linux-x64-debug/idlib/obj/idlib/geometry/DrawVert.cpp.o] Error 1
scons: *** [build/linux-x64-debug/idlib/obj/idlib/geometry/JointTransform.cpp.o] Error 1

### failure context

- build/linux-x64-debug/idlib/obj/idlib/Heap.cpp.o

```
src/idlib/sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/../idlib/sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      | src/idlib/sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
        ^  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp
_ps() has 12 bits of precision
      |         ^
src/idlib/sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h  :205 | 211        :_24_:m 1error: 2unknown type name '__m128'8
 r = _mm_rcp_ps( x );     211  |  I/D/_ F_OmRmC_Er_cIpN_Lsrc/idlib/../idlib/sys/sys_intrinsics.hIp:Ns211E:(_)24E:  Xerror: hTaunknown type name '__m128'E
sR N1 2_ _bmi  1211t | 2s8  oI_Dfm_ mpF_OrreRcCcEpi_1sI6iN_oLpnIsN(
E       __| E_        ^Xm
1T2E8R Nx  _)_ m{1
2      8|                         ^_
mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
src/idlib/sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
fatal error: too many errors emitted, stopping now [-ferror-limit=]
clang -o build/linux-x64-debug/renderer_gl.so -m64 -shared build/linux-x64-debug/renderer/obj/renderer/tr_animation.c.o build/linux-x64-debug/renderer/obj/renderer/tr_backend.c.o build/linux-x64-debug/renderer/obj/renderer/tr_bsp.c.o build/linux-x64-debug/renderer/obj/renderer/tr_cmds.c.o build/linux-x64-debug/renderer/obj/renderer/tr_cmesh.c.o build/linux-x64-debug/renderer/obj/renderer/tr_curve.
20 errors generated.
20 errors generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Heap.cpp.o] Error 1
```

- build/linux-x64-debug/idlib/obj/idlib/Str.cpp.o

```
src/idlib/sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/../idlib/sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      | src/idlib/sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
        ^  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp
_ps() has 12 bits of precision
      |         ^
src/idlib/sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h  :205 | 211        :_24_:m 1error: 2unknown type name '__m128'8
 r = _mm_rcp_ps( x );     211  |  I/D/_ F_OmRmC_Er_cIpN_Lsrc/idlib/../idlib/sys/sys_intrinsics.hIp:Ns211E:(_)24E:  Xerror: hTaunknown type name '__m128'E
sR N1 2_ _bmi  1211t | 2s8  oI_Dfm_ mpF_OrreRcCcEpi_1sI6iN_oLpnIsN(
E       __| E_        ^Xm
1T2E8R Nx  _)_ m{1
2      8|                         ^_
mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
src/idlib/sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
fatal error: too many errors emitted, stopping now [-ferror-limit=]
clang -o build/linux-x64-debug/renderer_gl.so -m64 -shared build/linux-x64-debug/renderer/obj/renderer/tr_animation.c.o build/linux-x64-debug/renderer/obj/renderer/tr_backend.c.o build/linux-x64-debug/renderer/obj/renderer/tr_bsp.c.o build/linux-x64-debug/renderer/obj/renderer/tr_cmds.c.o build/linux-x64-debug/renderer/obj/renderer/tr_cmesh.c.o build/linux-x64-debug/renderer/obj/renderer/tr_curve.
20 errors generated.
20 errors generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Heap.cpp.o] Error 1
20 errors generated.
clang++ -o build/linux-x64-debug/idlib/obj/idlib/sys/sys_assert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depr
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Str.cpp.o] Error 1
```

- build/linux-x64-debug/idlib/obj/idlib/Lib.cpp.o

```
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/../idlib/sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      | src/idlib/sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
        ^  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp
_ps() has 12 bits of precision
      |         ^
src/idlib/sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h  :205 | 211        :_24_:m 1error: 2unknown type name '__m128'8
 r = _mm_rcp_ps( x );     211  |  I/D/_ F_OmRmC_Er_cIpN_Lsrc/idlib/../idlib/sys/sys_intrinsics.hIp:Ns211E:(_)24E:  Xerror: hTaunknown type name '__m128'E
sR N1 2_ _bmi  1211t | 2s8  oI_Dfm_ mpF_OrreRcCcEpi_1sI6iN_oLpnIsN(
E       __| E_        ^Xm
1T2E8R Nx  _)_ m{1
2      8|                         ^_
mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
src/idlib/sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
fatal error: too many errors emitted, stopping now [-ferror-limit=]
clang -o build/linux-x64-debug/renderer_gl.so -m64 -shared build/linux-x64-debug/renderer/obj/renderer/tr_animation.c.o build/linux-x64-debug/renderer/obj/renderer/tr_backend.c.o build/linux-x64-debug/renderer/obj/renderer/tr_bsp.c.o build/linux-x64-debug/renderer/obj/renderer/tr_cmds.c.o build/linux-x64-debug/renderer/obj/renderer/tr_cmesh.c.o build/linux-x64-debug/renderer/obj/renderer/tr_curve.
20 errors generated.
20 errors generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Heap.cpp.o] Error 1
20 errors generated.
clang++ -o build/linux-x64-debug/idlib/obj/idlib/sys/sys_assert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depr
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Str.cpp.o] Error 1
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Lib.cpp.o] Error 1
```

- build/linux-x64-debug/idlib/obj/idlib/sys/sys_assert.cpp.o

```
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
  194 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 1, 0, 3, 2 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
  195 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 2, 3, 0, 1 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/sys/sys_assert.cpp.o] Error 1
```

- build/linux-x64-debug/idlib/obj/idlib/math/Math.cpp.o

```
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
  194 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 1, 0, 3, 2 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
  195 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 2, 3, 0, 1 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/sys/sys_assert.cpp.o] Error 1
20 errors generated.
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Matrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
20scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Math.cpp.o] Error 1
```

- build/linux-x64-debug/idlib/obj/idlib/containers/HashIndex.cpp.o

```
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
  194 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 1, 0, 3, 2 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
  195 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 2, 3, 0, 1 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/sys/sys_assert.cpp.o] Error 1
20 errors generated.
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Matrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
20scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Math.cpp.o] Error 1
 errors generated.
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Angles.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
scons: *** [build/linux-x64-debug/idlib/obj/idlib/containers/HashIndex.cpp.o] Error 1
```

- build/linux-x64-debug/idlib/obj/idlib/math/Vector.cpp.o

```
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
  194 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 1, 0, 3, 2 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
  195 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 2, 3, 0, 1 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/sys/sys_assert.cpp.o] Error 1
20 errors generated.
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Matrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
20scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Math.cpp.o] Error 1
 errors generated.
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Angles.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
scons: *** [build/linux-x64-debug/idlib/obj/idlib/containers/HashIndex.cpp.o] Error 1
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Quat.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
20 errors generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Vector.cpp.o] Error 1
```

- build/linux-x64-debug/idlib/obj/idlib/math/Quat.cpp.o

```
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
  194 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 1, 0, 3, 2 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
  195 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 2, 3, 0, 1 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
20 errors generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Quat.cpp.o] Error 1
```

- build/linux-x64-debug/idlib/obj/idlib/math/Angles.cpp.o

```
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
  194 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 1, 0, 3, 2 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
  195 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 2, 3, 0, 1 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
20 errors generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Quat.cpp.o] Error 1
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Rotation.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depre
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Angles.cpp.o] Error 1
```

- build/linux-x64-debug/idlib/obj/idlib/math/Matrix.cpp.o

```
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
  194 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 1, 0, 3, 2 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
  195 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 2, 3, 0, 1 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
20 errors generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Quat.cpp.o] Error 1
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/Rotation.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depre
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Angles.cpp.o] Error 1
clang++ -o build/linux-x64-debug/idlib/obj/idlib/math/VecX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
20 errors generated.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Matrix.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x64-release

status: failure

errors: 187
warnings: 0 in 0 kinds

### errors

src/idlib/../idlib/sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/../idlib/sys/sys_intrinsics.hsrc/idlib/sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
:176:3: error: a type specifier is required for all declarations
src/idlib/sys/sys_intrinsics.hsrc/idlib/../idlib/sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
:187:24: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
187 | ID_src/idlib/sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:188:2: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:188:2: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.hsrc/idlib/sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
180 | #define _mm_s:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/../idlib/sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/../idlib/sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/../idlib/sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
180 | #defsrc/idlib/../idlib/sys/sys_intrinsics.hin:e192 :_45m:m _error: spunknown type name '__m128'l
src/idlib/../idlib/sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, _src/idlib/../idlib/sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/../idlib/sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
193 |         __m128 c src/idlib/../idlib/sys/sys_intrinsics.h= :_204m:m45_:m uerror: lunknown type name '__m128'_
src/idlib/sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/../idlib/sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
src/idlib/sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
scons: *** [build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o] Error 1
scons: *** [build/linux-x64-release/idlib/obj/idlib/Str.cpp.o] Error 1
scons: *** [build/linux-x64-release/idlib/obj/idlib/Lib.cpp.o] Error 1
src/idlib/sys/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/sys/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/sys/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:188:2: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/containers/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/containers/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/sys/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/containers/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/containers/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
187 | ID_FORCE_Isrc/idlib/sys/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:188:2: error: unknown type name '__m128'
188 |         __m128 c = _mm_mul_ps( a, b )src/idlib/sys/../sys/sys_intrinsics.h;:193:2: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/containers/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 )src/idlib/sys/../sys/sys_intrinsics.h :195:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/math/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/containers/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
205 |         __m128 r = _mmsrc/idlib/math/../sys/sys_intrinsics.h_:r187c:p24_:p serror: (unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:188:2: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/containers/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/math/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/containers/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/math/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/containers/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/math/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/math/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
scons: *** [build/linux-x64-release/idlib/obj/idlib/containers/HashIndex.cpp.o] Error 1
scons: *** [build/linux-x64-release/idlib/obj/idlib/sys/sys_assert.cpp.o] Error 1
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Math.cpp.o] Error 1
src/idlib/math/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
45In file included from :src/idlib/math/../precompiled.h :error: 42:
:159:40: error: expected ';' after top level declarator
189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps(src/idlib/math/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/math/../sys/sys_intrinsics.hsrc/idlib/math/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
:204:24: error: unknown type name '__m128'
187 | ID_FORCE_INLINE_EXTsrc/idlib/math/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp1src/idlib/math/../sys/sys_intrinsics.h6_:p205s:(2 :_ _error: munknown type name '__m128'1
src/idlib/math/../sys/sys_intrinsics.h:211:fatal error: 24:too many errors emitted, stopping now [-ferror-limit=]
error: unknown type name '__m128'
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Vector.cpp.o] Error 1
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Angles.cpp.o] Error 1
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Matrix.cpp.o] Error 1
src/idlib/math/../sys/sys_intrinsics.h:159:40: error: src/idlib/math/../sys/sys_intrinsics.hexpected ';' after top level declarator:
176:3: error: a type specifier is required for all declarations
src/idlib/math/../sys/sys_intrinsics.h:187:24:src/idlib/math/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.hsrc/idlib/math/../sys/sys_intrinsics.h:188:2: error: unknown type name '__m128'
:188:2: error: unknown type name '__m128'
189 |         return _mm_src/idlib/math/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
180 | #define _mm_splat_psrc/idlib/math/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
180 | #define _mm_splat_ps( x, i )                __m128c( _mmsrc/idlib/math/../sys/sys_intrinsics.h_s:h192u:f45f:l eerror: _unknown type name '__m128'e
205 |         fatal error: _too many errors emitted, stopping now [-ferror-limit=]_
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Quat.cpp.o] Error 1
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Plane.cpp.o] Error 1
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Rotation.cpp.o] Error 1
src/idlib/bv/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/bv/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/bv/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:src/idlib/math/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
188:2: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
189 |         return _mm_add_ps( _mm_splat_ps(src/idlib/math/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/bv/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/bv/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
189 |         return _mm_add_ps( _mm_splatsrc/idlib/math/../sys/sys_intrinsics.h_:p189s:(77 :c ,error:  use of undeclared identifier '_MM_SHUFFLE'0
src/idlib/bv/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m1src/idlib/math/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
error:       unknown type name '__m128'|
192 | ID_FORCE_INLINE_EXTERN __m12src/idlib/bv/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
194 |         c = _mm_adsrc/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/bv/../sys/sys_intrinsics.h:204:24: error: src/idlib/math/../sys/sys_intrinsics.hunknown type name '__m128'
:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/bv/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
scons: *** [build/linux-x64-release/idlib/obj/idlib/bv/Bounds.cpp.o] Error 1
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/VecX.cpp.o] Error 1
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/MatX.cpp.o] Error 1
src/idlib/bv/../sys/sys_intrinsics.h:188:2: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/bv/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/geometry/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/geometry/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
scons: *** [build/linux-x64-release/idlib/obj/idlib/bv/Box.cpp.o] Error 1
src/idlib/geometry/../sys/sys_intrinsics.h:188:2: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/geometry/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/geometry/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/geometry/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/geometry/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/geometry/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
scons: *** [build/linux-x64-release/idlib/obj/idlib/bv/Sphere.cpp.o] Error 1
scons: *** [build/linux-x64-release/idlib/obj/idlib/geometry/DrawVert.cpp.o] Error 1
scons: *** [build/linux-x64-release/idlib/obj/idlib/geometry/JointTransform.cpp.o] Error 1

### failure context

- build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o

```
      |                        ^
src/idlib/sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^
src/idlib/sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
  194 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 1, 0, 3, 2 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
  195 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 2, 3, 0, 1 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o] Error 1
```

- build/linux-x64-release/idlib/obj/idlib/Str.cpp.o

```
src/idlib/sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^
src/idlib/sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
  194 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 1, 0, 3, 2 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
  195 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 2, 3, 0, 1 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o] Error 1
clang++ -o build/linux-x64-release/idlib/obj/idlib/sys/sys_assert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-depre
20 errors generated.
20 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Str.cpp.o] Error 1
```

- build/linux-x64-release/idlib/obj/idlib/Lib.cpp.o

```
      |                                                       ^
src/idlib/sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^
src/idlib/sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
  194 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 1, 0, 3, 2 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
  195 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 2, 3, 0, 1 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o] Error 1
clang++ -o build/linux-x64-release/idlib/obj/idlib/sys/sys_assert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-depre
20 errors generated.
20 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Str.cpp.o] Error 1
clang++ -o build/linux-x64-release/idlib/obj/idlib/containers/HashIndex.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno
scons: *** [build/linux-x64-release/idlib/obj/idlib/Lib.cpp.o] Error 1
```

- build/linux-x64-release/idlib/obj/idlib/containers/HashIndex.cpp.o

```
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/containers/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
src/idlib/math/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
  194 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 1, 0, 3, 2 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
  195 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 2, 3, 0, 1 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
20 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/containers/HashIndex.cpp.o] Error 1
```

- build/linux-x64-release/idlib/obj/idlib/sys/sys_assert.cpp.o

```
      |         ^
src/idlib/containers/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
src/idlib/math/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
  194 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 1, 0, 3, 2 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
  195 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 2, 3, 0, 1 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
20 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/containers/HashIndex.cpp.o] Error 1
scons: *** [build/linux-x64-release/idlib/obj/idlib/sys/sys_assert.cpp.o] Error 1
```

- build/linux-x64-release/idlib/obj/idlib/math/Math.cpp.o

```
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
src/idlib/math/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
  194 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 1, 0, 3, 2 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
  195 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 2, 3, 0, 1 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
20 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/containers/HashIndex.cpp.o] Error 1
scons: *** [build/linux-x64-release/idlib/obj/idlib/sys/sys_assert.cpp.o] Error 1
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Vector.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecat
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Matrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecat
20 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Math.cpp.o] Error 1
```

- build/linux-x64-release/idlib/obj/idlib/math/Vector.cpp.o

```
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
  194 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 1, 0, 3, 2 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
  195 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 2, 3, 0, 1 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Vector.cpp.o] Error 1
```

- build/linux-x64-release/idlib/obj/idlib/math/Angles.cpp.o

```
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
  194 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 1, 0, 3, 2 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
  195 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 2, 3, 0, 1 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Vector.cpp.o] Error 1
20 errors generated.
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Quat.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Angles.cpp.o] Error 1
```

- build/linux-x64-release/idlib/obj/idlib/math/Matrix.cpp.o

```
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
  194 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 1, 0, 3, 2 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
  195 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 2, 3, 0, 1 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Vector.cpp.o] Error 1
20 errors generated.
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Quat.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Angles.cpp.o] Error 1
clang++ -o build/linux-x64-release/idlib/obj/idlib/math/Plane.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecate
20 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Matrix.cpp.o] Error 1
```

- build/linux-x64-release/idlib/obj/idlib/math/Quat.cpp.o

```
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: unknown type name '__m128'
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:194:37: error: use of undeclared identifier '_MM_SHUFFLE'
  194 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 1, 0, 3, 2 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:195:37: error: use of undeclared identifier '_MM_SHUFFLE'
  195 |         c = _mm_add_ps( c, _mm_perm_ps( c, _MM_SHUFFLE( 2, 3, 0, 1 ) ) );
      |                                            ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:204:24: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:204:45: error: unknown type name '__m128'
  204 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp32_ps( __m128 x ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:205:2: error: unknown type name '__m128'
  205 |         __m128 r = _mm_rcp_ps( x );     // _mm_rcp_ps() has 12 bits of precision
      |         ^
src/idlib/math/../sys/sys_intrinsics.h:211:24: error: unknown type name '__m128'
  211 | ID_FORCE_INLINE_EXTERN __m128 _mm_rcp16_ps( __m128 x ) {
      |                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
20 errors generated.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Quat.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-debug

status: failure

errors: 181
warnings: 0 in 0 kinds

### errors

src/idlib/sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
spsrc/idlib/sys/sys_intrinsics.hec:( 159i:nt40r:in _error: texpected ';' after top level declaratoryp
src/idlib/../idlib/sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/sys/sys_intrinsics.hsrc/idlib/../idlib/sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarationssrc/idlib/sys/sys_intrinsics.h
:176:3  :176  | } error: __a type specifier is required for all declarationsm
:176:3: error: a type specifier is required for all declarations
src/idlib/../idlib/sys/sys_intrinsics.hsrc/idlib/sys/sys_intrinsics.h:187:24: error: src/idlib/sys/sys_intrinsics.hunknown type name '__m128'
:187:24: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
error:       | unknown type name '__m128'                                            ^
src/idlib/../idlib/sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.hsrc/idlib/sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
:187:55: error: unknown type name '__m128'
187 | ID_FORCE_INLINE_EXTERN __src/idlib/../idlib/sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:188:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/../idlib/sys/sys_intrinsics.h:188:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
:188:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/../idlib/sys/sys_intrinsics.hsrc/idlib/sys/sys_intrinsics.h::188188::88::  error: error: expected ';' after expressionexpected ';' after expression
188src/idlib/sys/sys_intrinsics.h188 | : |         188        _:__8_m:m1 12error: 28expected ';' after expression8
src/idlib/../idlib/sys/sys_intrinsics.hsrc/idlib/sys/sys_intrinsics.hsrc/idlib/sys/sys_intrinsics.h::188:1889::9 :error:  error: use of undeclared identifier 'c'use of undeclared identifier 'c'
:188:9: error: use of undeclared identifier 'c'
src/idlib/sys/sys_intrinsics.h:189:35: error: use of undeclared identifier 'c'
189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_spsrc/idlib/../idlib/sys/sys_intrinsics.hla:t189_:p35s:(  error: cuse of undeclared identifier 'c',
189 |         return _mm_add_ps( _mm_splat_ps( c, 0src/idlib/sys/sys_intrinsics.h ):, 189_:mm35_:a derror: duse of undeclared identifier 'c'_p
src/idlib/../idlib/sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
180 | #define _mm_splat_ps( x, i )                __m128c(src/idlib/sys/sys_intrinsics.h _:mm189_:s21h:u fferror: leuse of undeclared identifier '_MM_SHUFFLE'_
src/idlib/sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/../idlib/sys/sys_intrinsics.h:189:69: error: use of undeclared identifier 'c'
src/idlib/sys/sys_intrinsics.h:189:69: error: use of undeclared identifier 'c'
189 |         return _mm_add_ps( _mm_src/idlib/sys/sys_intrinsics.h:189:69: error: use of undeclared identifier 'c'
src/idlib/../idlib/sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/../idlib/sys/sys_intrinsics.h:189:91: error: use of undeclared identifier 'c'
src/idlib/sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/../idlib/sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_src/idlib/sys/sys_intrinsics.hS:H189U:F91F:L Eerror: (use of undeclared identifier 'c'
src/idlib/../idlib/sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'src/idlib/sys/sys_intrinsics.h
:189:91: error: use of undeclared identifier 'c'
189 |         return _mm_add_ps( _mm_src/idlib/sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
plat_ps( c, 0src/idlib/../idlib/sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/../idlib/sys/sys_intrinsics.h:193:8: error: expected ';' after expression
fatal error: too many errors emitted, stopping now [-ferror-limit=]
src/idlib/sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/sys/sys_intrinsics.h:193:8: error: expected ';' after expression
src/idlib/sys/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/sys/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/sys/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:188:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/sys/../sys/sys_intrinsics.h:188:8: error: expected ';' after expression
src/idlib/sys/../sys/sys_intrinsics.h:188:9: error: use of undeclared identifier 'c'
src/idlib/sys/../sys/sys_intrinsics.h:189:35: error: use of undeclared identifier 'c'
src/idlib/sys/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/../sys/sys_intrinsics.h:189:69: error: use of undeclared identifier 'c'
src/idlib/sys/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/../sys/sys_intrinsics.h:189:91: error: use of undeclared identifier 'c'
src/idlib/sys/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/sys/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Heap.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Lib.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Str.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/sys/sys_assert.cpp.o] Error 1
src/idlib/math/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/math/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/containers/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/containers/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/math/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:188:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
187 | Isrc/idlib/math/../sys/sys_intrinsics.h:188:8: error: expected ';' after expression
188 |         __m128 c = _mmsrc/idlib/containers/../sys/sys_intrinsics.h_:m188u:l2_:ps (error:  use of undeclared identifier '__m128'; did you mean '__m128c'?a
src/idlib/containers/../sys/sys_intrinsics.h:188:8: error: expected ';' after expression
src/idlib/math/../sys/sys_intrinsics.h:188:9: error: use of undeclared identifier 'c'
src/idlib/math/../sys/sys_intrinsics.h:188:src/idlib/math/../sys/sys_intrinsics.h:189:35: error: use of undeclared identifier 'c'
2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
|         rsrc/idlib/math/../sys/sys_intrinsics.h:188:8: error: expected ';' after expression
src/idlib/containers/../sys/sys_intrinsics.h:188:9: error: use of undeclared identifier 'c'
src/idlib/containers/../sys/sys_intrinsics.h:189:35: error: use of undeclared identifier 'c'
src/idlib/math/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_asrc/idlib/math/../sys/sys_intrinsics.hdd_:p189s(: 35_:m merror: _use of undeclared identifier 'c'sp
src/idlib/math/../sys/sys_intrinsics.h:189:69: error: use of undeclared identifier 'c'
src/idlib/containers/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffsrc/idlib/containers/../sys/sys_intrinsics.hl:e189_:e69p: ierror: 3use of undeclared identifier 'c'2
src/idlib/math/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/math/../sys/sys_intrinsics.h:189:91: error: use of undeclared identifier 'c'
src/idlib/containers/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
:       | error:                                                              ^~~~~~~~~~~~~~~~~~~~use of undeclared identifier 'c'
src/idlib/math/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/math/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
180 | #define _mm_splat_ps( xsrc/idlib/math/../sys/sys_intrinsics.h,: 192i: 45):  error:  unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/math/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
193 |         __m128 c = _mm_msrc/idlib/math/../sys/sys_intrinsics.hul:_192p:s45(:  aerror: , unknown type name '__m128'b
src/idlib/containers/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/containers/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
src/idlib/math/../sys/sys_intrinsics.h:188:8: error: expected ';' after expression
src/idlib/math/../sys/sys_intrinsics.h:189:35: error: use of undeclared identifier 'c'
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/Vector.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/containers/HashIndex.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/Math.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/Matrix.cpp.o] Error 1
159 | typedef union __declspec( intrin_type ) src/idlib/math/../sys/sys_intrinsics.h_C:R188T:_9A:L Ierror: Guse of undeclared identifier 'c'N
189 |         return _msrc/idlib/math/../sys/sys_intrinsics.hm:_188a:d2d:_ perror: suse of undeclared identifier '__m128'; did you mean '__m128c'?(
180 | #define _mm_splat_ps( x, i )     src/idlib/math/../sys/sys_intrinsics.h : 188 : 8:   error:  expected ';' after expression
192 | ID_FORCE_INLINE_EXsrc/idlib/math/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
TEsrc/idlib/math/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
RN __m128 _mm_msum4_ps( __m128 a, __m12fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/Plane.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/Angles.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/Quat.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/Rotation.cpp.o] Error 1
src/idlib/bv/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/bv/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/bv/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
187 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum3_src/idlib/math/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/bv/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
192 | ID_FORCE_INLINE_Esrc/idlib/bv/../sys/sys_intrinsics.hXT:ER188N: 2_:_ merror: 1use of undeclared identifier '__m128'; did you mean '__m128c'?2
src/idlib/bv/../sys/sys_intrinsics.h:188:8: error: expected ';' after expression
src/idlib/bv/../sys/sys_intrinsics.h:188:9: error: use of undeclared identifier 'c'
187 | ID_FORCE_INLINE_src/idlib/bv/../sys/sys_intrinsics.hEX:TE189R:N35 :_ _error: m1use of undeclared identifier 'c'2
src/idlib/bv/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/bv/../sys/sys_intrinsics.h:189:69: error: use of undeclared identifier 'c'
189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_src/idlib/bv/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_src/idlib/math/../sys/sys_intrinsics.h:189:69: error: use of undeclared identifier 'c'
src/idlib/bv/../sys/sys_intrinsics.h:189:91: error: use of undeclared identifier 'c'
src/idlib/bv/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/bv/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/bv/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
src/idlib/bv/../sys/sys_intrinsics.h:188:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/bv/../sys/sys_intrinsics.h:189:35: error: use of undeclared identifier 'c'
src/idlib/bv/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/VecX.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/bv/Bounds.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/MatX.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/bv/Box.cpp.o] Error 1
src/idlib/geometry/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/geometry/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/geometry/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:188:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/geometry/../sys/sys_intrinsics.h:188:8: error: expected ';' after expression
src/idlib/geometry/../sys/sys_intrinsics.h:188:9: error: use of undeclared identifier 'c'
src/idlib/geometry/../sys/sys_intrinsics.h:189:35: error: use of undeclared identifier 'c'
src/idlib/geometry/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/geometry/../sys/sys_intrinsics.h:189:69: error: use of undeclared identifier 'c'
src/idlib/geometry/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/geometry/../sys/sys_intrinsics.h:189:91: error: use of undeclared identifier 'c'
src/idlib/geometry/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/geometry/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/geometry/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
scons: *** [build/linux-x86-debug/idlib/obj/idlib/geometry/DrawVert.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/bv/Sphere.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/geometry/JointTransform.cpp.o] Error 1

### failure context

- build/linux-x86-debug/idlib/obj/idlib/Heap.cpp.o

```
      |                                                                                                  ^
src/idlib/sys/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                    ^~~~~~~~~~~~~~~~~~~~
src/idlib/sys/../sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/sys/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/sys/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/sys/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/sys/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/sys/../sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/sys/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
20 errors generated.
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Heap.cpp.o] Error 1
```

- build/linux-x86-debug/idlib/obj/idlib/Lib.cpp.o

```
src/idlib/sys/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                    ^~~~~~~~~~~~~~~~~~~~
src/idlib/sys/../sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/sys/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/sys/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/sys/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/sys/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/sys/../sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/sys/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
20 errors generated.
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Heap.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Lib.cpp.o] Error 1
```

- build/linux-x86-debug/idlib/obj/idlib/Str.cpp.o

```
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/sys/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/sys/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/sys/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/sys/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/sys/../sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/sys/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
20 errors generated.
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Heap.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Lib.cpp.o] Error 1
clang++ -o build/linux-x86-debug/idlib/obj/idlib/containers/HashIndex.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wn
20 errors generated.
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Math.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Str.cpp.o] Error 1
```

- build/linux-x86-debug/idlib/obj/idlib/sys/sys_assert.cpp.o

```
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/sys/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/sys/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/sys/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/sys/../sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/sys/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
20 errors generated.
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Heap.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Lib.cpp.o] Error 1
clang++ -o build/linux-x86-debug/idlib/obj/idlib/containers/HashIndex.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wn
20 errors generated.
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Math.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
scons: *** [build/linux-x86-debug/idlib/obj/idlib/Str.cpp.o] Error 1
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Vector.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
20 errors generated.
scons: *** [build/linux-x86-debug/idlib/obj/idlib/sys/sys_assert.cpp.o] Error 1
```

- build/linux-x86-debug/idlib/obj/idlib/math/Vector.cpp.o

```
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                                  ^
src/idlib/math/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                    ^~~~~~~~~~~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/math/../sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/math/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/Vector.cpp.o] Error 1
```

- build/linux-x86-debug/idlib/obj/idlib/containers/HashIndex.cpp.o

```
      |                                                                                    ^~~~~~~~~~~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/math/../sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/math/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/Vector.cpp.o] Error 1
20 errors generated.
20 errors generated.
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Angles.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
scons: *** [build/linux-x86-debug/idlib/obj/idlib/containers/HashIndex.cpp.o] Error 1
```

- build/linux-x86-debug/idlib/obj/idlib/math/Math.cpp.o

```
src/idlib/math/../sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/math/../sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/math/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/Vector.cpp.o] Error 1
20 errors generated.
20 errors generated.
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Angles.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
scons: *** [build/linux-x86-debug/idlib/obj/idlib/containers/HashIndex.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/Math.cpp.o] Error 1
```

- build/linux-x86-debug/idlib/obj/idlib/math/Matrix.cpp.o

```
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/math/../sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/math/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/Vector.cpp.o] Error 1
20 errors generated.
20 errors generated.
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Angles.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-depreca
scons: *** [build/linux-x86-debug/idlib/obj/idlib/containers/HashIndex.cpp.o] Error 1
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/Math.cpp.o] Error 1
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Quat.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/Plane.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecat
20 errors generated.
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/Matrix.cpp.o] Error 1
```

- build/linux-x86-debug/idlib/obj/idlib/math/Plane.cpp.o

```
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                                  ^
src/idlib/math/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                    ^~~~~~~~~~~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/math/../sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/math/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/Plane.cpp.o] Error 1
```

- build/linux-x86-debug/idlib/obj/idlib/math/Angles.cpp.o

```
      |                                                                                    ^~~~~~~~~~~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/math/../sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/math/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/Plane.cpp.o] Error 1
20 errors generated.
clang++ -o build/linux-x86-debug/idlib/obj/idlib/math/VecX.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno-deprecate
20 errors generated.
scons: *** [build/linux-x86-debug/idlib/obj/idlib/math/Angles.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-release

status: failure

errors: 156
warnings: 0 in 0 kinds

### errors

src/idlib/../idlib/sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/../idlib/sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/../idlib/sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:188:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/../idlib/sys/sys_intrinsics.h:188:8: error: expected ';' after expression
src/idlib/../idlib/sys/sys_intrinsics.h:188:9: error: use of undeclared identifier 'c'
src/idlib/../idlib/sys/sys_intrinsics.h:189:35: error: use of undeclared identifier 'c'
src/idlib/../idlib/sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/../idlib/sys/sys_intrinsics.h:189:69: error: use of undeclared identifier 'c'
src/idlib/../idlib/sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
src/idlib/../idlib/sys/sys_intrinsics.h:189:91: error: use of undeclared identifier 'c'
src/idlib/sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/../idlib/sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/../idlib/sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:188:2:src/idlib/../idlib/sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/../idlib/sys/sys_intrinsics.h  :193:8: error: expected ';' after expression
src/idlib/sys/sys_intrinsics.h:176:3fatal error: too many errors emitted, stopping now [-ferror-limit=]
src/idlib/sys/sys_intrinsics.h:188:8: error: expected ';' after expression
src/idlib/sys/sys_intrinsics.h:188:9: error: use of undeclared identifier 'c'
src/idlib/sys/sys_intrinsics.h:189:35: error: use of undeclared identifier 'c'
src/idlib/sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/sys_intrinsics.h:189:69: error: use of undeclared identifier 'c'
src/idlib/sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/sys_intrinsics.h:189:91: error: use of undeclared identifier 'c'
src/idlib/sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/sys/sys_intrinsics.h:193:8: error: expected ';' after expression
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build/linux-x86-release/idlib/obj/idlib/Heap.cpp.o] Error 1
scons: *** [build/linux-x86-release/idlib/obj/idlib/Str.cpp.o] Error 1
src/idlib/sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/sys/sys_intrinsics.h:188:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/sys/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/sys/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/sys/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:188:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/sys/../sys/sys_intrinsics.h:188:8: error: expected ';' after expression
src/idlib/sys/../sys/sys_intrinsics.h:188:9: error: use of undeclared identifier 'c'
src/idlib/sys/../sys/sys_intrinsics.h:189:35: error: use of undeclared identifier 'c'
src/idlib/sys/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/../sys/sys_intrinsics.h:189:69: error: use of undeclared identifier 'c'
src/idlib/sys/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/../sys/sys_intrinsics.h:189:91: error: use of undeclared identifier 'c'
src/idlib/sys/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/sys/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/sys/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/sys/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
scons: *** [build/linux-x86-release/idlib/obj/idlib/Lib.cpp.o] Error 1
src/idlib/containers/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/containers/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/containers/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:188:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/containers/../sys/sys_intrinsics.h:188:8: error: expected ';' after expression
src/idlib/containers/../sys/sys_intrinsics.h:188:9: error: use of undeclared identifier 'c'
src/idlib/containers/../sys/sys_intrinsics.h:189:35: error: use of undeclared identifier 'c'
src/idlib/containers/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/containers/../sys/sys_intrinsics.h:189:69: error: use of undeclared identifier 'c'
src/idlib/containers/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/containers/../sys/sys_intrinsics.h:189:91: error: use of undeclared identifier 'c'
src/idlib/containers/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/containers/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/containers/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/containers/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
scons: *** [build/linux-x86-release/idlib/obj/idlib/sys/sys_assert.cpp.o] Error 1
scons: *** [build/linux-x86-release/idlib/obj/idlib/containers/HashIndex.cpp.o] Error 1
src/idlib/math/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/math/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/math/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:188:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/math/../sys/sys_intrinsics.h:188:8: error: expected ';' after expression
src/idlib/math/../sys/sys_intrinsics.h:188:9: error: use of undeclared identifier 'c'
src/idlib/math/../sys/sys_intrinsics.h:189:35: error: use of undeclared identifier 'c'
src/idlib/math/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/math/../sys/sys_intrinsics.h:189:69: error: use of undeclared identifier 'c'
src/idlib/math/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/math/../sys/sys_intrinsics.h:189:91: error: use of undeclared identifier 'c'
src/idlib/math/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/math/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/math/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Math.cpp.o] Error 1
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Vector.cpp.o] Error 1
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Matrix.cpp.o] Error 1
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Angles.cpp.o] Error 1
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Quat.cpp.o] Error 1
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Plane.cpp.o] Error 1
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Rotation.cpp.o] Error 1
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/VecX.cpp.o] Error 1
src/idlib/bv/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/bv/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/bv/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:188:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/bv/../sys/sys_intrinsics.h:188:8: error: expected ';' after expression
src/idlib/bv/../sys/sys_intrinsics.h:188:9: error: use of undeclared identifier 'c'
src/idlib/bv/../sys/sys_intrinsics.h:189:35: error: use of undeclared identifier 'c'
src/idlib/bv/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/bv/../sys/sys_intrinsics.h:189:69: error: use of undeclared identifier 'c'
src/idlib/bv/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/bv/../sys/sys_intrinsics.h:189:91: error: use of undeclared identifier 'c'
src/idlib/bv/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/bv/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/bv/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/bv/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/MatX.cpp.o] Error 1
scons: *** [build/linux-x86-release/idlib/obj/idlib/bv/Bounds.cpp.o] Error 1
scons: *** [build/linux-x86-release/idlib/obj/idlib/bv/Box.cpp.o] Error 1
src/idlib/geometry/../sys/sys_intrinsics.h:159:40: error: expected ';' after top level declarator
src/idlib/geometry/../sys/sys_intrinsics.h:176:3: error: a type specifier is required for all declarations
src/idlib/geometry/../sys/sys_intrinsics.h:187:24: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:187:45: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:187:55: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:188:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/geometry/../sys/sys_intrinsics.h:188:8: error: expected ';' after expression
src/idlib/geometry/../sys/sys_intrinsics.h:188:9: error: use of undeclared identifier 'c'
src/idlib/geometry/../sys/sys_intrinsics.h:189:35: error: use of undeclared identifier 'c'
src/idlib/geometry/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/geometry/../sys/sys_intrinsics.h:189:69: error: use of undeclared identifier 'c'
src/idlib/geometry/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/geometry/../sys/sys_intrinsics.h:189:91: error: use of undeclared identifier 'c'
src/idlib/geometry/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
src/idlib/geometry/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
src/idlib/geometry/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
src/idlib/geometry/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
scons: *** [build/linux-x86-release/idlib/obj/idlib/bv/Sphere.cpp.o] Error 1
scons: *** [build/linux-x86-release/idlib/obj/idlib/geometry/DrawVert.cpp.o] Error 1
scons: *** [build/linux-x86-release/idlib/obj/idlib/geometry/JointTransform.cpp.o] Error 1

### failure context

- build/linux-x86-release/idlib/obj/idlib/Heap.cpp.o

```
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                                  ^
src/idlib/sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                    ^~~~~~~~~~~~~~~~~~~~
src/idlib/sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x86-release/idlib/obj/idlib/Heap.cpp.o] Error 1
```

- build/linux-x86-release/idlib/obj/idlib/Str.cpp.o

```
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                    ^~~~~~~~~~~~~~~~~~~~
src/idlib/sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x86-release/idlib/obj/idlib/Heap.cpp.o] Error 1
clang++ -o build/linux-x86-release/idlib/obj/idlib/sys/sys_assert.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-depre
20 errors generated.
scons: *** [build/linux-x86-release/idlib/obj/idlib/Str.cpp.o] Error 1
```

- build/linux-x86-release/idlib/obj/idlib/Lib.cpp.o

```
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                                  ^
src/idlib/sys/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                    ^~~~~~~~~~~~~~~~~~~~
src/idlib/sys/../sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/sys/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/sys/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/sys/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/sys/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/sys/../sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/sys/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x86-release/idlib/obj/idlib/Lib.cpp.o] Error 1
```

- build/linux-x86-release/idlib/obj/idlib/sys/sys_assert.cpp.o

```
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                                  ^
src/idlib/containers/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                    ^~~~~~~~~~~~~~~~~~~~
src/idlib/containers/../sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/containers/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/containers/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/containers/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/containers/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/containers/../sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/containers/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x86-release/idlib/obj/idlib/sys/sys_assert.cpp.o] Error 1
```

- build/linux-x86-release/idlib/obj/idlib/containers/HashIndex.cpp.o

```
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                    ^~~~~~~~~~~~~~~~~~~~
src/idlib/containers/../sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/containers/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/containers/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/containers/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/containers/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/containers/../sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/containers/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x86-release/idlib/obj/idlib/sys/sys_assert.cpp.o] Error 1
clang++ -o build/linux-x86-release/idlib/obj/idlib/math/Vector.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecat
20 errors generated.
scons: *** [build/linux-x86-release/idlib/obj/idlib/containers/HashIndex.cpp.o] Error 1
```

- build/linux-x86-release/idlib/obj/idlib/math/Math.cpp.o

```
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                                  ^
src/idlib/math/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                    ^~~~~~~~~~~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/math/../sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/math/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Math.cpp.o] Error 1
```

- build/linux-x86-release/idlib/obj/idlib/math/Vector.cpp.o

```
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                                  ^
src/idlib/math/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                    ^~~~~~~~~~~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/math/../sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/math/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Vector.cpp.o] Error 1
```

- build/linux-x86-release/idlib/obj/idlib/math/Matrix.cpp.o

```
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                          ^
src/idlib/math/../sys/sys_intrinsics.h:189:21: error: use of undeclared identifier '_MM_SHUFFLE'
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                            ^~~~~~~~~~~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:189:69: error: use of undeclared identifier 'c'
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                            ^
20 errors generated.
src/idlib/math/../sys/sys_intrinsics.h:189:55: error: use of undeclared identifier '_MM_SHUFFLE'
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                              ^~~~~~~~~~~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:189:91: error: use of undeclared identifier 'c'
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                                  ^
src/idlib/math/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                    ^~~~~~~~~~~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Matrix.cpp.o] Error 1
```

- build/linux-x86-release/idlib/obj/idlib/math/Angles.cpp.o

```
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                                  ^
src/idlib/math/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                    ^~~~~~~~~~~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/math/../sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/math/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Angles.cpp.o] Error 1
```

- build/linux-x86-release/idlib/obj/idlib/math/Quat.cpp.o

```
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                                  ^
src/idlib/math/../sys/sys_intrinsics.h:189:77: error: use of undeclared identifier '_MM_SHUFFLE'
  189 |         return _mm_add_ps( _mm_splat_ps( c, 0 ), _mm_add_ps( _mm_splat_ps( c, 1 ), _mm_splat_ps( c, 2 ) ) );
      |                                                                                    ^~~~~~~~~~~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:180:87: note: expanded from macro '_mm_splat_ps'
  180 | #define _mm_splat_ps( x, i )                __m128c( _mm_shuffle_epi32( __m128c( x ), _MM_SHUFFLE( i, i, i, i ) ) )
      |                                                                                       ^~~~~~~~~~~
src/idlib/math/../sys/sys_intrinsics.h:192:24: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                        ^
src/idlib/math/../sys/sys_intrinsics.h:192:45: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                             ^
src/idlib/math/../sys/sys_intrinsics.h:192:55: error: unknown type name '__m128'
  192 | ID_FORCE_INLINE_EXTERN __m128 _mm_msum4_ps( __m128 a, __m128 b ) {
      |                                                       ^
src/idlib/math/../sys/sys_intrinsics.h:193:2: error: use of undeclared identifier '__m128'; did you mean '__m128c'?
  193 |         __m128 c = _mm_mul_ps( a, b );
      |         ^~~~~~
      |         __m128c
src/idlib/math/../sys/sys_intrinsics.h:176:3: note: '__m128c' declared here
  176 | } __m128c;
      |   ^
src/idlib/math/../sys/sys_intrinsics.h:193:8: error: expected ';' after expression
  193 |         __m128 c = _mm_mul_ps( a, b );
      |               ^
      |               ;
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Quat.cpp.o] Error 1
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

