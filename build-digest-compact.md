# Compact build digest

commit: cf545e369d21

- ubuntu-latest-x64-debug-: cancelled
- ubuntu-latest-x64-release-: failure
- ubuntu-latest-x64-release-game: failure
- ubuntu-latest-x86-debug-: failure
- ubuntu-latest-x86-release-: failure
- uncrustify: success
- windows-latest-x64-debug-: failure
- windows-latest-x64-release-: cancelled
- windows-latest-x64-release-cgame: cancelled
- windows-latest-x64-release-game: failure
- windows-latest-x64-release-ui: cancelled
- windows-latest-x86-debug-: failure
- windows-latest-x86-release-: cancelled

## ubuntu-latest-x64-debug-

status: cancelled

errors: 25
warnings: 40 in 16 kinds

### errors

src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
scons: *** [build/linux-x64-debug/client/obj/splines/math_angles.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/math_matrix.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/q_parse.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/q_shared.cpp.o] Error 1
src/splines/splines.cpp:471:12: error: use of undeclared identifier 'va'
src/splines/splines.cpp:475:6: error: use of undeclared identifier 'va'
src/splines/splines.cpp:479:7: error: use of undeclared identifier 'va'
src/splines/splines.cpp:552:19: error: use of undeclared identifier 'va'
src/splines/splines.cpp:556:19: error: use of undeclared identifier 'va'
src/splines/splines.cpp:565:34: error: use of undeclared identifier 'va'
src/splines/splines.cpp:568:21: error: use of undeclared identifier 'va'
src/splines/splines.cpp:853:7: error: use of undeclared identifier 'va'
src/splines/splines.cpp:856:32: error: use of undeclared identifier 'va'
src/splines/splines.cpp:859:37: error: use of undeclared identifier 'va'
src/splines/splines.cpp:960:12: error: use of undeclared identifier 'va'
src/splines/splines.cpp:962:6: error: use of undeclared identifier 'va'
src/splines/splines.cpp:964:6: error: use of undeclared identifier 'va'
src/splines/splines.cpp:966:6: error: use of undeclared identifier 'va'
src/splines/splines.cpp:1247:12: error: use of undeclared identifier 'va'
src/splines/splines.cpp:1250:6: error: use of undeclared identifier 'va'
src/splines/splines.cpp:1253:6: error: use of undeclared identifier 'va'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build/linux-x64-debug/client/obj/splines/splines.cpp.o] Error 1

### failure context

- build/linux-x64-debug/client/obj/splines/math_angles.cpp.o

```
Compiling 'src/splines/math_matrix.cpp'
In file included from src/sys/unix/linux_glimp.cpp:76:
/usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
    9 | #warning "xf86dga.h is obsolete and may be removed in the future."
      |  ^
/usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
   10 | #warning "include <X11/extensions/Xxf86dga.h> instead."
      |  ^
2 warnings generated.
Compiling 'src/splines/math_quaternion.cpp'
In file included from src/splines/math_matrix.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
In file included from src/splines/math_angles.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
2 errors generated.
scons: *** [build/linux-x64-debug/client/obj/splines/math_angles.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/splines/math_matrix.cpp.o

```
/usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
    9 | #warning "xf86dga.h is obsolete and may be removed in the future."
      |  ^
/usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
   10 | #warning "include <X11/extensions/Xxf86dga.h> instead."
      |  ^
2 warnings generated.
Compiling 'src/splines/math_quaternion.cpp'
In file included from src/splines/math_matrix.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
In file included from src/splines/math_angles.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
2 errors generated.
scons: *** [build/linux-x64-debug/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
scons: *** [build/linux-x64-debug/client/obj/splines/math_matrix.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/splines/q_parse.cpp.o

```
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
2 errors generated.
scons: *** [build/linux-x64-debug/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
scons: *** [build/linux-x64-debug/client/obj/splines/math_matrix.cpp.o] Error 1
Compiling 'src/splines/q_parse.cpp'
Compiling 'src/splines/q_shared.cpp'
Compiling 'src/splines/splines.cpp'
In file included from src/splines/q_parse.cpp:31:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x64-debug/client/obj/splines/q_parse.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/splines/q_shared.cpp.o

```
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x64-debug/client/obj/splines/q_parse.cpp.o] Error 1
Compiling 'src/splines/util_str.cpp'
Compiling 'src/games/botlib/be_ai_char.cpp'
In file included from src/splines/q_shared.cpp:30:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
In file included from src/splines/splines.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
scons: *** [build/linux-x64-debug/client/obj/splines/q_shared.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/splines/splines.cpp.o

```
      |                     ^~
src/splines/splines.cpp:856:32: error: use of undeclared identifier 'va'
  856 |                 cameraPosition->write( file, va( "camera_%s",cameraPosition->typeStr() ) );
      |                                              ^~
src/splines/splines.cpp:859:37: error: use of undeclared identifier 'va'
  859 |                         targetPositions[i]->write( file, va( "target_%s", targetPositions[i]->typeStr() ) );
      |                                                          ^~
src/splines/splines.cpp:960:12: error: use of undeclared identifier 'va'
  960 |         idStr s = va( "\t%s {\n", name );
      |                   ^~
src/splines/splines.cpp:962:6: error: use of undeclared identifier 'va'
  962 |         s = va( "\t\ttype %d\n", static_cast<int>( type ) );
      |             ^~
src/splines/splines.cpp:964:6: error: use of undeclared identifier 'va'
  964 |         s = va( "\t\tparam \"%s\"\n", paramStr.c_str() );
      |             ^~
src/splines/splines.cpp:966:6: error: use of undeclared identifier 'va'
  966 |         s = va( "\t\ttime %d\n", time );
      |             ^~
src/splines/splines.cpp:1247:12: error: use of undeclared identifier 'va'
 1247 |         idStr s = va( "\t%s {\n", p );
      |                   ^~
src/splines/splines.cpp:1250:6: error: use of undeclared identifier 'va'
 1250 |         s = va( "\t\tfov %f\n", fov );
      |             ^~
src/splines/splines.cpp:1253:6: error: use of undeclared identifier 'va'
 1253 |         s = va( "\t\tstartFOV %f\n", startFOV );
      |             ^~
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x64-debug/client/obj/splines/splines.cpp.o] Error 1
```


### warning kinds

- [12x] -pointer-bool-conversion
  - src/client/snd_dma.cpp:1857:19: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.cpp:2171:11: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.cpp:2487:15: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/game/ai/ai_script_actions_combat.cpp:533:45: warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_drawtools.cpp:148:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_ents.cpp:397:14: warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:948:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:960:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:972:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_weapons.cpp:1005:10: warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.cpp:1449:7: warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.cpp:1507:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [6x] -sizeof-pointer-memaccess
  - src/qcommon/cvar.cpp:764:28: warning: 'memset' call operates on objects of type 'cvar_t' (aka 'cvar_s') while the size is based on a different type 'cvar_t *' (aka 'cvar_s *') [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.cpp:807:29: warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.cpp:999:32: warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]
  - src/games/game/ai/ai_system.cpp:458:33: warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'cast_state_s *') [-Wsizeof-pointer-memaccess]
- [3x] -tautological-constant-out-of-range-compare
  - src/games/ui/ui_players.cpp:773:25: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1615:21: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1628:20: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [2x] -array-bounds
  - src/renderer/tr_image.cpp:3346:59: warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src/renderer/tr_shade_calc.cpp:679:2: warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src/renderer/tr_shader.cpp:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src/renderer/tr_shader.cpp:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -format
  - src/games/botlib/l_precomp.cpp:2441:31: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
  - src/games/botlib/l_precomp.cpp:2547:31: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [2x] -sizeof-array-argument
  - src/games/game/bg_animation.cpp:807:27: warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -logical-not-parentheses
  - src/games/game/g_client.cpp:1531:8: warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src/games/game/g_client.cpp:1608:9: warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [2x] -self-assign
  - src/games/cgame/cg_view.cpp:874:11: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src/games/cgame/cg_view.cpp:1386:12: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
- [1x] -strncat-size
  - src/client/cl_main.cpp:2838:25: warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src/qcommon/common.cpp:1799:2: warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src/qcommon/unzip.cpp:2066:45: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
- [1x] -char-subscripts
  - src/games/cgame/cg_newDraw.cpp:1830:24: warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src/games/cgame/fx/FxScheduler.cpp:386:12: warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## uncrustify

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-debug-

status: failure

errors: 25
warnings: 38 in 14 kinds

### errors

src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
scons: *** [build\windows-x64-debug\client\obj\splines\math_angles.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\splines\math_matrix.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\splines\q_parse.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\splines\q_shared.cpp.obj] Error 1
src\splines\splines.cpp(471,12): error: use of undeclared identifier 'va'
src\splines\splines.cpp(475,6): error: use of undeclared identifier 'va'
src\splines\splines.cpp(479,7): error: use of undeclared identifier 'va'
src\splines\splines.cpp(552,19): error: use of undeclared identifier 'va'
src\splines\splines.cpp(556,19): error: use of undeclared identifier 'va'
src\splines\splines.cpp(565,34): error: use of undeclared identifier 'va'
src\splines\splines.cpp(568,21): error: use of undeclared identifier 'va'
src\splines\splines.cpp(853,7): error: use of undeclared identifier 'va'
src\splines\splines.cpp(856,32): error: use of undeclared identifier 'va'
src\splines\splines.cpp(859,37): error: use of undeclared identifier 'va'
src\splines\splines.cpp(960,12): error: use of undeclared identifier 'va'
src\splines\splines.cpp(962,6): error: use of undeclared identifier 'va'
src\splines\splines.cpp(964,6): error: use of undeclared identifier 'va'
src\splines\splines.cpp(966,6): error: use of undeclared identifier 'va'
src\splines\splines.cpp(1247,12): error: use of undeclared identifier 'va'
src\splines\splines.cpp(1250,6): error: use of undeclared identifier 'va'
src\splines\splines.cpp(1253,6): error: use of undeclared identifier 'va'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x64-debug\client\obj\splines\splines.cpp.obj] Error 1

### failure context

- build\windows-x64-debug\client\obj\splines\math_angles.cpp.obj

```
Compiling 'src\sys\win32\win_input.cpp'
Compiling 'src\sys\win32\win_main.cpp'
Compiling 'src\sys\win32\win_net.cpp'
Compiling 'src\sys\win32\win_qgl.cpp'
Compiling 'src\sys\win32\win_shared.cpp'
Compiling 'src\sys\win32\win_snd.cpp'
Compiling 'src\sys\win32\win_syscon.cpp'
Compiling 'src\sys\win32\win_wndproc.cpp'
Compiling 'src\splines\math_angles.cpp'
Compiling 'src\splines\math_matrix.cpp'
Compiling 'src\splines\math_quaternion.cpp'
In file included from src\splines\math_angles.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
In file included from src\splines\math_matrix.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
scons: *** [build\windows-x64-debug\client\obj\splines\math_angles.cpp.obj] Error 1
```

- build\windows-x64-debug\client\obj\splines\math_matrix.cpp.obj

```
Compiling 'src\sys\win32\win_qgl.cpp'
Compiling 'src\sys\win32\win_shared.cpp'
Compiling 'src\sys\win32\win_snd.cpp'
Compiling 'src\sys\win32\win_syscon.cpp'
Compiling 'src\sys\win32\win_wndproc.cpp'
Compiling 'src\splines\math_angles.cpp'
Compiling 'src\splines\math_matrix.cpp'
Compiling 'src\splines\math_quaternion.cpp'
In file included from src\splines\math_angles.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
In file included from src\splines\math_matrix.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
scons: *** [build\windows-x64-debug\client\obj\splines\math_angles.cpp.obj] Error 1
2 errors generated.
Compiling 'src\splines\math_vector.cpp'
scons: *** [build\windows-x64-debug\client\obj\splines\math_matrix.cpp.obj] Error 1
```

- build\windows-x64-debug\client\obj\splines\q_parse.cpp.obj

```
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
In file included from src\splines\math_matrix.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
scons: *** [build\windows-x64-debug\client\obj\splines\math_angles.cpp.obj] Error 1
2 errors generated.
Compiling 'src\splines\math_vector.cpp'
scons: *** [build\windows-x64-debug\client\obj\splines\math_matrix.cpp.obj] Error 1
Compiling 'src\splines\q_parse.cpp'
Compiling 'src\splines\q_shared.cpp'
In file included from src\splines\q_parse.cpp:31:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
Compiling 'src\splines\splines.cpp'
scons: *** [build\windows-x64-debug\client\obj\splines\q_parse.cpp.obj] Error 1
```

- build\windows-x64-debug\client\obj\splines\q_shared.cpp.obj

```
      |               ;
scons: *** [build\windows-x64-debug\client\obj\splines\math_angles.cpp.obj] Error 1
2 errors generated.
Compiling 'src\splines\math_vector.cpp'
scons: *** [build\windows-x64-debug\client\obj\splines\math_matrix.cpp.obj] Error 1
Compiling 'src\splines\q_parse.cpp'
Compiling 'src\splines\q_shared.cpp'
In file included from src\splines\q_parse.cpp:31:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
Compiling 'src\splines\splines.cpp'
scons: *** [build\windows-x64-debug\client\obj\splines\q_parse.cpp.obj] Error 1
Compiling 'src\splines\util_str.cpp'
In file included from src\splines\q_shared.cpp:30:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x64-debug\client\obj\splines\q_shared.cpp.obj] Error 1
```

- build\windows-x64-debug\client\obj\splines\splines.cpp.obj

```
src\splines\splines.cpp(856,32): error: use of undeclared identifier 'va'
  856 |                 cameraPosition->write( file, va( "camera_%s",cameraPosition->typeStr() ) );
      |                                              ^~
src\splines\splines.cpp(859,37): error: use of undeclared identifier 'va'
  859 |                         targetPositions[i]->write( file, va( "target_%s", targetPositions[i]->typeStr() ) );
      |                                                          ^~
Compiling 'src\games\botlib\l_libvar.cpp'
src\splines\splines.cpp(960,12): error: use of undeclared identifier 'va'
  960 |         idStr s = va( "\t%s {\n", name );
      |                   ^~
src\splines\splines.cpp(962,6): error: use of undeclared identifier 'va'
  962 |         s = va( "\t\ttype %d\n", static_cast<int>( type ) );
      |             ^~
src\splines\splines.cpp(964,6): error: use of undeclared identifier 'va'
  964 |         s = va( "\t\tparam \"%s\"\n", paramStr.c_str() );
      |             ^~
src\splines\splines.cpp(966,6): error: use of undeclared identifier 'va'
  966 |         s = va( "\t\ttime %d\n", time );
      |             ^~
src\splines\splines.cpp(1247,12): error: use of undeclared identifier 'va'
 1247 |         idStr s = va( "\t%s {\n", p );
      |                   ^~
src\splines\splines.cpp(1250,6): error: use of undeclared identifier 'va'
 1250 |         s = va( "\t\tfov %f\n", fov );
      |             ^~
src\splines\splines.cpp(1253,6): error: use of undeclared identifier 'va'
 1253 |         s = va( "\t\tstartFOV %f\n", startFOV );
      |             ^~
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build\windows-x64-debug\client\obj\splines\splines.cpp.obj] Error 1
```


### warning kinds

- [12x] -pointer-bool-conversion
  - src\client\snd_dma.cpp(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai\ai_script_actions_combat.cpp(533,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_drawtools.cpp(148,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_ents.cpp(397,14): warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1449,7): warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1507,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [6x] -sizeof-pointer-memaccess
  - src\qcommon\cvar.cpp(764,28): warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(807,29): warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(999,32): warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]
  - src\games\game\ai\ai_system.cpp(458,33): warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'struct cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'struct cast_state_s *') [-Wsizeof-pointer-memaccess]
- [3x] -tautological-constant-out-of-range-compare
  - src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [2x] -array-bounds
  - src\renderer\tr_image.cpp(3346,59): warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src\renderer\tr_shade_calc.cpp(679,2): warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src\renderer\tr_shader.cpp(986,23): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src\renderer\tr_shader.cpp(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -format
  - src\games\botlib\l_precomp.cpp(2441,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
  - src\games\botlib\l_precomp.cpp(2547,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [2x] -sizeof-array-argument
  - src\games\game\bg_animation.cpp(807,27): warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -logical-not-parentheses
  - src\games\game\g_client.cpp(1531,8): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src\games\game\g_client.cpp(1608,9): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [2x] -self-assign
  - src\games\cgame\cg_view.cpp(874,11): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src\games\cgame\cg_view.cpp(1386,12): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
- [1x] -strncat-size
  - src\client\cl_main.cpp(2838,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src\qcommon\common.cpp(1799,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src\qcommon\unzip.cpp(2066,45): warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -char-subscripts
  - src\games\cgame\cg_newDraw.cpp(1830,24): warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

