# Build digest

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

## ubuntu-latest-x64-release-

status: failure

errors: 25
warnings: 41 in 17 kinds

### errors

src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
scons: *** [build/linux-x64-release/client/obj/splines/math_angles.cpp.o] Error 1
scons: *** [build/linux-x64-release/client/obj/splines/math_matrix.cpp.o] Error 1
scons: *** [build/linux-x64-release/client/obj/splines/q_parse.cpp.o] Error 1
scons: *** [build/linux-x64-release/client/obj/splines/q_shared.cpp.o] Error 1
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
scons: *** [build/linux-x64-release/client/obj/splines/splines.cpp.o] Error 1

### failure context

- build/linux-x64-release/client/obj/splines/math_angles.cpp.o

```
2 warnings generated.
Compiling 'src/qcommon/q_shared.cpp'
Compiling 'src/qcommon/q_math.cpp'
Compiling 'src/sys/unix/unix_main.cpp'
Compiling 'src/sys/unix/unix_net.cpp'
Compiling 'src/sys/unix/unix_shared.cpp'
Compiling 'src/sys/unix/linux_common.cpp'
Compiling 'src/sys/unix/linux_glimp.cpp'
Compiling 'src/sys/unix/linux_joystick.cpp'
Compiling 'src/sys/unix/linux_qgl.cpp'
Compiling 'src/sys/unix/linux_snd.cpp'
Compiling 'src/splines/math_angles.cpp'
In file included from src/sys/unix/linux_glimp.cpp:76:
/usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
    9 | #warning "xf86dga.h is obsolete and may be removed in the future."
      |  ^
/usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
   10 | #warning "include <X11/extensions/Xxf86dga.h> instead."
      |  ^
Compiling 'src/splines/math_matrix.cpp'
In file included from src/splines/math_angles.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_angles.cpp.o] Error 1
```

- build/linux-x64-release/client/obj/splines/math_matrix.cpp.o

```
In file included from src/sys/unix/linux_glimp.cpp:76:
/usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
    9 | #warning "xf86dga.h is obsolete and may be removed in the future."
      |  ^
/usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
   10 | #warning "include <X11/extensions/Xxf86dga.h> instead."
      |  ^
Compiling 'src/splines/math_matrix.cpp'
In file included from src/splines/math_angles.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_quaternion.cpp'
In file included from src/splines/math_matrix.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_matrix.cpp.o] Error 1
```

- build/linux-x64-release/client/obj/splines/q_parse.cpp.o

```
      |               ;
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_quaternion.cpp'
In file included from src/splines/math_matrix.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_matrix.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
2 warnings generated.
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
scons: *** [build/linux-x64-release/client/obj/splines/q_parse.cpp.o] Error 1
```

- build/linux-x64-release/client/obj/splines/q_shared.cpp.o

```
      |               ;
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_matrix.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
2 warnings generated.
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
scons: *** [build/linux-x64-release/client/obj/splines/q_parse.cpp.o] Error 1
Compiling 'src/splines/util_str.cpp'
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
scons: *** [build/linux-x64-release/client/obj/splines/q_shared.cpp.o] Error 1
```

- build/linux-x64-release/client/obj/splines/splines.cpp.o

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
1 warning and 20 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/splines.cpp.o] Error 1
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
- [1x] -unused-value
  - src/splines/splines.cpp:580:17: warning: expression result unused [-Wunused-value]
- [1x] -char-subscripts
  - src/games/cgame/cg_newDraw.cpp:1830:24: warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src/games/cgame/fx/FxScheduler.cpp:386:12: warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## ubuntu-latest-x64-release-game

status: failure

errors: 25
warnings: 41 in 17 kinds

### errors

src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
scons: *** [build/linux-x64-release/client/obj/splines/math_angles.cpp.o] Error 1
scons: *** [build/linux-x64-release/client/obj/splines/math_matrix.cpp.o] Error 1
scons: *** [build/linux-x64-release/client/obj/splines/q_parse.cpp.o] Error 1
scons: *** [build/linux-x64-release/client/obj/splines/q_shared.cpp.o] Error 1
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
scons: *** [build/linux-x64-release/client/obj/splines/splines.cpp.o] Error 1

### failure context

- build/linux-x64-release/client/obj/splines/math_angles.cpp.o

```
Compiling 'src/qcommon/q_math.cpp'
Compiling 'src/sys/unix/unix_main.cpp'
Compiling 'src/sys/unix/unix_net.cpp'
Compiling 'src/sys/unix/unix_shared.cpp'
Compiling 'src/sys/unix/linux_common.cpp'
Compiling 'src/sys/unix/linux_glimp.cpp'
Compiling 'src/sys/unix/linux_joystick.cpp'
Compiling 'src/sys/unix/linux_qgl.cpp'
Compiling 'src/sys/unix/linux_snd.cpp'
In file included from src/sys/unix/linux_glimp.cpp:76:
/usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
    9 | #warning "xf86dga.h is obsolete and may be removed in the future."
      |  ^
/usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
   10 | #warning "include <X11/extensions/Xxf86dga.h> instead."
      |  ^
Compiling 'src/splines/math_angles.cpp'
Compiling 'src/splines/math_matrix.cpp'
2 warnings generated.
Compiling 'src/splines/math_quaternion.cpp'
In file included from src/splines/math_angles.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_angles.cpp.o] Error 1
```

- build/linux-x64-release/client/obj/splines/math_matrix.cpp.o

```
      |  ^
/usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
   10 | #warning "include <X11/extensions/Xxf86dga.h> instead."
      |  ^
Compiling 'src/splines/math_angles.cpp'
Compiling 'src/splines/math_matrix.cpp'
2 warnings generated.
Compiling 'src/splines/math_quaternion.cpp'
In file included from src/splines/math_angles.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
In file included from src/splines/math_matrix.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_matrix.cpp.o] Error 1
```

- build/linux-x64-release/client/obj/splines/q_parse.cpp.o

```
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
In file included from src/splines/math_matrix.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_matrix.cpp.o] Error 1
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
scons: *** [build/linux-x64-release/client/obj/splines/q_parse.cpp.o] Error 1
```

- build/linux-x64-release/client/obj/splines/q_shared.cpp.o

```
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_matrix.cpp.o] Error 1
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
scons: *** [build/linux-x64-release/client/obj/splines/q_parse.cpp.o] Error 1
Compiling 'src/splines/util_str.cpp'
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
scons: *** [build/linux-x64-release/client/obj/splines/q_shared.cpp.o] Error 1
```

- build/linux-x64-release/client/obj/splines/splines.cpp.o

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
1 warning and 20 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/splines.cpp.o] Error 1
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
- [1x] -unused-value
  - src/splines/splines.cpp:580:17: warning: expression result unused [-Wunused-value]
- [1x] -char-subscripts
  - src/games/cgame/cg_newDraw.cpp:1830:24: warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src/games/cgame/fx/FxScheduler.cpp:386:12: warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## ubuntu-latest-x86-debug-

status: failure

errors: 25
warnings: 40 in 16 kinds

### errors

src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
scons: *** [build/linux-x86-debug/client/obj/splines/math_angles.cpp.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/splines/math_matrix.cpp.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/splines/q_parse.cpp.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/splines/q_shared.cpp.o] Error 1
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
scons: *** [build/linux-x86-debug/client/obj/splines/splines.cpp.o] Error 1

### failure context

- build/linux-x86-debug/client/obj/splines/math_angles.cpp.o

```
Compiling 'src/qcommon/q_math.cpp'
Compiling 'src/sys/unix/unix_main.cpp'
Compiling 'src/sys/unix/unix_net.cpp'
Compiling 'src/sys/unix/unix_shared.cpp'
Compiling 'src/sys/unix/linux_common.cpp'
Compiling 'src/sys/unix/linux_glimp.cpp'
Compiling 'src/sys/unix/linux_joystick.cpp'
Compiling 'src/sys/unix/linux_qgl.cpp'
Compiling 'src/sys/unix/linux_snd.cpp'
Compiling 'src/splines/math_angles.cpp'
In file included from src/sys/unix/linux_glimp.cpp:76:
/usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
    9 | #warning "xf86dga.h is obsolete and may be removed in the future."
      |  ^
/usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
   10 | #warning "include <X11/extensions/Xxf86dga.h> instead."
      |  ^
2 warnings generated.
Compiling 'src/splines/math_matrix.cpp'
Compiling 'src/splines/math_quaternion.cpp'
In file included from src/splines/math_angles.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x86-debug/client/obj/splines/math_angles.cpp.o] Error 1
```

- build/linux-x86-debug/client/obj/splines/math_matrix.cpp.o

```
    9 | #warning "xf86dga.h is obsolete and may be removed in the future."
      |  ^
/usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
   10 | #warning "include <X11/extensions/Xxf86dga.h> instead."
      |  ^
2 warnings generated.
Compiling 'src/splines/math_matrix.cpp'
Compiling 'src/splines/math_quaternion.cpp'
In file included from src/splines/math_angles.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x86-debug/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
In file included from src/splines/math_matrix.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x86-debug/client/obj/splines/math_matrix.cpp.o] Error 1
```

- build/linux-x86-debug/client/obj/splines/q_parse.cpp.o

```
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x86-debug/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
In file included from src/splines/math_matrix.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x86-debug/client/obj/splines/math_matrix.cpp.o] Error 1
Compiling 'src/splines/q_parse.cpp'
Compiling 'src/splines/q_shared.cpp'
Compiling 'src/splines/splines.cpp'
Compiling 'src/splines/util_str.cpp'
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
scons: *** [build/linux-x86-debug/client/obj/splines/q_parse.cpp.o] Error 1
```

- build/linux-x86-debug/client/obj/splines/q_shared.cpp.o

```
      |               ;
2 errors generated.
scons: *** [build/linux-x86-debug/client/obj/splines/math_matrix.cpp.o] Error 1
Compiling 'src/splines/q_parse.cpp'
Compiling 'src/splines/q_shared.cpp'
Compiling 'src/splines/splines.cpp'
Compiling 'src/splines/util_str.cpp'
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
scons: *** [build/linux-x86-debug/client/obj/splines/q_parse.cpp.o] Error 1
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
Compiling 'src/games/botlib/be_ai_chat.cpp'
2 errors generated.
scons: *** [build/linux-x86-debug/client/obj/splines/q_shared.cpp.o] Error 1
```

- build/linux-x86-debug/client/obj/splines/splines.cpp.o

```
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
Compiling 'src/games/botlib/be_ai_move.cpp'
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
scons: *** [build/linux-x86-debug/client/obj/splines/splines.cpp.o] Error 1
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

## ubuntu-latest-x86-release-

status: failure

errors: 25
warnings: 41 in 17 kinds

### errors

src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
scons: *** [build/linux-x86-release/client/obj/splines/math_angles.cpp.o] Error 1
scons: *** [build/linux-x86-release/client/obj/splines/math_matrix.cpp.o] Error 1
scons: *** [build/linux-x86-release/client/obj/splines/q_parse.cpp.o] Error 1
scons: *** [build/linux-x86-release/client/obj/splines/q_shared.cpp.o] Error 1
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
scons: *** [build/linux-x86-release/client/obj/splines/splines.cpp.o] Error 1

### failure context

- build/linux-x86-release/client/obj/splines/math_angles.cpp.o

```
Compiling 'src/renderer/tr_world.cpp'
Compiling 'src/qcommon/q_shared.cpp'
Compiling 'src/qcommon/q_math.cpp'
Compiling 'src/sys/unix/unix_main.cpp'
Compiling 'src/sys/unix/unix_net.cpp'
Compiling 'src/sys/unix/unix_shared.cpp'
Compiling 'src/sys/unix/linux_common.cpp'
Compiling 'src/sys/unix/linux_glimp.cpp'
Compiling 'src/sys/unix/linux_joystick.cpp'
Compiling 'src/sys/unix/linux_qgl.cpp'
Compiling 'src/sys/unix/linux_snd.cpp'
Compiling 'src/splines/math_angles.cpp'
In file included from src/sys/unix/linux_glimp.cpp:76:
/usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
    9 | #warning "xf86dga.h is obsolete and may be removed in the future."
      |  ^
/usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
   10 | #warning "include <X11/extensions/Xxf86dga.h> instead."
      |  ^
Compiling 'src/splines/math_matrix.cpp'
In file included from src/splines/math_angles.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x86-release/client/obj/splines/math_angles.cpp.o] Error 1
```

- build/linux-x86-release/client/obj/splines/math_matrix.cpp.o

```
In file included from src/sys/unix/linux_glimp.cpp:76:
/usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
    9 | #warning "xf86dga.h is obsolete and may be removed in the future."
      |  ^
/usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
   10 | #warning "include <X11/extensions/Xxf86dga.h> instead."
      |  ^
Compiling 'src/splines/math_matrix.cpp'
In file included from src/splines/math_angles.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x86-release/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_quaternion.cpp'
In file included from src/splines/math_matrix.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x86-release/client/obj/splines/math_matrix.cpp.o] Error 1
```

- build/linux-x86-release/client/obj/splines/q_parse.cpp.o

```
      |               ;
2 errors generated.
scons: *** [build/linux-x86-release/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_quaternion.cpp'
In file included from src/splines/math_matrix.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x86-release/client/obj/splines/math_matrix.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
2 warnings generated.
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
scons: *** [build/linux-x86-release/client/obj/splines/q_parse.cpp.o] Error 1
```

- build/linux-x86-release/client/obj/splines/q_shared.cpp.o

```
      |               ;
2 errors generated.
scons: *** [build/linux-x86-release/client/obj/splines/math_matrix.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
2 warnings generated.
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
scons: *** [build/linux-x86-release/client/obj/splines/q_parse.cpp.o] Error 1
Compiling 'src/splines/util_str.cpp'
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
scons: *** [build/linux-x86-release/client/obj/splines/q_shared.cpp.o] Error 1
```

- build/linux-x86-release/client/obj/splines/splines.cpp.o

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
1 warning and 20 errors generated.
scons: *** [build/linux-x86-release/client/obj/splines/splines.cpp.o] Error 1
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
- [1x] -unused-value
  - src/splines/splines.cpp:580:17: warning: expression result unused [-Wunused-value]
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

## windows-latest-x64-release-

status: cancelled

errors: 25
warnings: 39 in 15 kinds

### errors

src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
scons: *** [build\windows-x64-release\client\obj\splines\math_angles.cpp.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\splines\q_shared.cpp.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\splines\q_parse.cpp.obj] Error 1
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
scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\splines\math_angles.cpp.obj

```
 1898 |         if ( stages[0].alphaGen == CGEN_WAVEFORM ) {
      |              ~~~~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
Compiling 'src\renderer\tr_vfx.cpp'
2 warnings generated.
Compiling 'src\renderer\tr_world.cpp'
Compiling 'src\qcommon\q_shared.cpp'
Compiling 'src\qcommon\q_math.cpp'
Compiling 'src\sys\win32\win_gamma.cpp'
Compiling 'src\sys\win32\win_glimp.cpp'
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
scons: *** [build\windows-x64-release\client\obj\splines\math_angles.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj

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
scons: *** [build\windows-x64-release\client\obj\splines\math_angles.cpp.obj] Error 1
Compiling 'src\splines\math_vector.cpp'
In file included from src\splines\math_matrix.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\q_shared.cpp.obj

```
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
Compiling 'src\splines\q_parse.cpp'
Compiling 'src\splines\q_shared.cpp'
Compiling 'src\splines\splines.cpp'
In file included from src\splines\q_shared.cpp:30:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
In file included from src\splines\q_parse.cpp:31:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
2 errors generated.
Compiling 'src\splines\util_str.cpp'
scons: *** [build\windows-x64-release\client\obj\splines\q_shared.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\q_parse.cpp.obj

```
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
Compiling 'src\splines\q_parse.cpp'
Compiling 'src\splines\q_shared.cpp'
Compiling 'src\splines\splines.cpp'
In file included from src\splines\q_shared.cpp:30:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
In file included from src\splines\q_parse.cpp:31:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
2 errors generated.
Compiling 'src\splines\util_str.cpp'
scons: *** [build\windows-x64-release\client\obj\splines\q_shared.cpp.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\splines\q_parse.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\splines.cpp.obj

```
src\splines\splines.cpp(856,32): error: use of undeclared identifier 'va'
  856 |                 cameraPosition->write( file, va( "camera_%s",cameraPosition->typeStr() ) );
      |                                              ^~
src\splines\splines.cpp(859,37): error: use of undeclared identifier 'va'
  859 |                         targetPositions[i]->write( file, va( "target_%s", targetPositions[i]->typeStr() ) );
      |                                                          ^~
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
1 warning and 20 errors generated.
Compiling 'src\games\botlib\be_nav_interface.cpp'
scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1
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
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]
- [1x] -char-subscripts
  - src\games\cgame\cg_newDraw.cpp(1830,24): warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## windows-latest-x64-release-cgame

status: cancelled

errors: 25
warnings: 39 in 15 kinds

### errors

src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
scons: *** [build\windows-x64-release\client\obj\splines\math_angles.cpp.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\splines\q_parse.cpp.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\splines\q_shared.cpp.obj] Error 1
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
scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\splines\math_angles.cpp.obj

```
 1898 |         if ( stages[0].alphaGen == CGEN_WAVEFORM ) {
      |              ~~~~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
1 warning generated.
Compiling 'src\renderer\tr_surface.cpp'
Compiling 'src\renderer\tr_vfx.cpp'
2 warnings generated.
Compiling 'src\renderer\tr_world.cpp'
Compiling 'src\qcommon\q_shared.cpp'
Compiling 'src\qcommon\q_math.cpp'
Compiling 'src\sys\win32\win_gamma.cpp'
Compiling 'src\sys\win32\win_glimp.cpp'
Compiling 'src\sys\win32\win_input.cpp'
Compiling 'src\sys\win32\win_main.cpp'
Compiling 'src\sys\win32\win_net.cpp'
Compiling 'src\sys\win32\win_qgl.cpp'
Compiling 'src\sys\win32\win_shared.cpp'
Compiling 'src\sys\win32\win_snd.cpp'
Compiling 'src\sys\win32\win_syscon.cpp'
Compiling 'src\sys\win32\win_wndproc.cpp'
Compiling 'src\splines\math_angles.cpp'
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
scons: *** [build\windows-x64-release\client\obj\splines\math_angles.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj

```
Compiling 'src\sys\win32\win_shared.cpp'
Compiling 'src\sys\win32\win_snd.cpp'
Compiling 'src\sys\win32\win_syscon.cpp'
Compiling 'src\sys\win32\win_wndproc.cpp'
Compiling 'src\splines\math_angles.cpp'
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
scons: *** [build\windows-x64-release\client\obj\splines\math_angles.cpp.obj] Error 1
Compiling 'src\splines\math_matrix.cpp'
Compiling 'src\splines\math_quaternion.cpp'
Compiling 'src\splines\math_vector.cpp'
Compiling 'src\splines\q_parse.cpp'
In file included from src\splines\math_matrix.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\q_parse.cpp.obj

```
      |               ;
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\splines\math_angles.cpp.obj] Error 1
Compiling 'src\splines\math_matrix.cpp'
Compiling 'src\splines\math_quaternion.cpp'
Compiling 'src\splines\math_vector.cpp'
Compiling 'src\splines\q_parse.cpp'
In file included from src\splines\math_matrix.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
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
scons: *** [build\windows-x64-release\client\obj\splines\q_parse.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\q_shared.cpp.obj

```
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
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
scons: *** [build\windows-x64-release\client\obj\splines\q_parse.cpp.obj] Error 1
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
Compiling 'src\games\botlib\be_ai_char.cpp'
scons: *** [build\windows-x64-release\client\obj\splines\q_shared.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\splines.cpp.obj

```
src\splines\splines.cpp(856,32): error: use of undeclared identifier 'va'
  856 |                 cameraPosition->write( file, va( "camera_%s",cameraPosition->typeStr() ) );
      |                                              ^~
src\splines\splines.cpp(859,37): error: use of undeclared identifier 'va'
  859 |                         targetPositions[i]->write( file, va( "target_%s", targetPositions[i]->typeStr() ) );
      |                                                          ^~
src\splines\splines.cpp(960,12): error: use of undeclared identifier 'va'
  960 |         idStr s = va( "\t%s {\n", name );
      |                   ^~
Compiling 'src\games\botlib\be_ea.cpp'
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
1 warning and 20 errors generated.
scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1
```


### warning kinds

- [12x] -pointer-bool-conversion
  - src\client\snd_dma.cpp(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_drawtools.cpp(148,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_ents.cpp(397,14): warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai\ai_script_actions_combat.cpp(533,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
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
- [2x] -self-assign
  - src\games\cgame\cg_view.cpp(874,11): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src\games\cgame\cg_view.cpp(1386,12): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
- [2x] -logical-not-parentheses
  - src\games\game\g_client.cpp(1531,8): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src\games\game\g_client.cpp(1608,9): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [1x] -strncat-size
  - src\client\cl_main.cpp(2838,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src\qcommon\common.cpp(1799,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src\qcommon\unzip.cpp(2066,45): warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]
- [1x] -char-subscripts
  - src\games\cgame\cg_newDraw.cpp(1830,24): warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## windows-latest-x64-release-game

status: failure

errors: 25
warnings: 39 in 15 kinds

### errors

src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
scons: *** [build\windows-x64-release\client\obj\splines\math_angles.cpp.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\splines\q_parse.cpp.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\splines\q_shared.cpp.obj] Error 1
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
scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\splines\math_angles.cpp.obj

```
1 warning generated.
 1898 |         if ( stages[0].alphaGen == CGEN_WAVEFORM ) {
      |              ~~~~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
Compiling 'src\renderer\tr_surface.cpp'
Compiling 'src\renderer\tr_vfx.cpp'
2 warnings generated.
Compiling 'src\renderer\tr_world.cpp'
Compiling 'src\qcommon\q_shared.cpp'
Compiling 'src\qcommon\q_math.cpp'
Compiling 'src\sys\win32\win_gamma.cpp'
Compiling 'src\sys\win32\win_glimp.cpp'
Compiling 'src\sys\win32\win_input.cpp'
Compiling 'src\sys\win32\win_main.cpp'
Compiling 'src\sys\win32\win_net.cpp'
Compiling 'src\sys\win32\win_qgl.cpp'
Compiling 'src\sys\win32\win_shared.cpp'
Compiling 'src\sys\win32\win_snd.cpp'
Compiling 'src\sys\win32\win_syscon.cpp'
Compiling 'src\sys\win32\win_wndproc.cpp'
Compiling 'src\splines\math_angles.cpp'
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
scons: *** [build\windows-x64-release\client\obj\splines\math_angles.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj

```
Compiling 'src\sys\win32\win_net.cpp'
Compiling 'src\sys\win32\win_qgl.cpp'
Compiling 'src\sys\win32\win_shared.cpp'
Compiling 'src\sys\win32\win_snd.cpp'
Compiling 'src\sys\win32\win_syscon.cpp'
Compiling 'src\sys\win32\win_wndproc.cpp'
Compiling 'src\splines\math_angles.cpp'
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
scons: *** [build\windows-x64-release\client\obj\splines\math_angles.cpp.obj] Error 1
Compiling 'src\splines\math_matrix.cpp'
Compiling 'src\splines\math_quaternion.cpp'
In file included from src\splines\math_matrix.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\q_parse.cpp.obj

```
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\splines\math_angles.cpp.obj] Error 1
Compiling 'src\splines\math_matrix.cpp'
Compiling 'src\splines\math_quaternion.cpp'
In file included from src\splines\math_matrix.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
Compiling 'src\splines\math_vector.cpp'
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
scons: *** [build\windows-x64-release\client\obj\splines\q_parse.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\q_shared.cpp.obj

```
      |               ;
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
Compiling 'src\splines\math_vector.cpp'
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
scons: *** [build\windows-x64-release\client\obj\splines\q_parse.cpp.obj] Error 1
Compiling 'src\splines\splines.cpp'
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
Compiling 'src\games\botlib\be_ai_char.cpp'
scons: *** [build\windows-x64-release\client\obj\splines\q_shared.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\splines.cpp.obj

```
  856 |                 cameraPosition->write( file, va( "camera_%s",cameraPosition->typeStr() ) );
      |                                              ^~
src\splines\splines.cpp(859,37): error: use of undeclared identifier 'va'
  859 |                         targetPositions[i]->write( file, va( "target_%s", targetPositions[i]->typeStr() ) );
      |                                                          ^~
src\splines\splines.cpp(960,12): error: use of undeclared identifier 'va'
  960 |         idStr s = va( "\t%s {\n", name );
      |                   ^~
Compiling 'src\games\botlib\be_ea.cpp'
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
1 warning and 20 errors generated.
Compiling 'src\games\botlib\be_interface.cpp'
scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1
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
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]
- [1x] -char-subscripts
  - src\games\cgame\cg_newDraw.cpp(1830,24): warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## windows-latest-x64-release-ui

status: cancelled

errors: 25
warnings: 39 in 15 kinds

### errors

src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
scons: *** [build\windows-x64-release\client\obj\splines\math_angles.cpp.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\splines\q_parse.cpp.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\splines\q_shared.cpp.obj] Error 1
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
scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\splines\math_angles.cpp.obj

```
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
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\splines\math_angles.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj

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
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\splines\math_angles.cpp.obj] Error 1
Compiling 'src\splines\math_vector.cpp'
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\q_parse.cpp.obj

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
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\splines\math_angles.cpp.obj] Error 1
Compiling 'src\splines\math_vector.cpp'
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
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
scons: *** [build\windows-x64-release\client\obj\splines\q_parse.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\q_shared.cpp.obj

```
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
Compiling 'src\splines\splines.cpp'
scons: *** [build\windows-x64-release\client\obj\splines\q_parse.cpp.obj] Error 1
Compiling 'src\splines\util_str.cpp'
Compiling 'src\games\botlib\be_ai_char.cpp'
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
In file included from src\splines\splines.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
scons: *** [build\windows-x64-release\client\obj\splines\q_shared.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\splines.cpp.obj

```
src\splines\splines.cpp(856,32): error: use of undeclared identifier 'va'
  856 |                 cameraPosition->write( file, va( "camera_%s",cameraPosition->typeStr() ) );
      |                                              ^~
src\splines\splines.cpp(859,37): error: use of undeclared identifier 'va'
  859 |                         targetPositions[i]->write( file, va( "target_%s", targetPositions[i]->typeStr() ) );
      |                                                          ^~
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
Compiling 'src\games\botlib\be_ea.cpp'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
1 warning and 20 errors generated.
scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1
```


### warning kinds

- [12x] -pointer-bool-conversion
  - src\client\snd_dma.cpp(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1449,7): warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1507,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai\ai_script_actions_combat.cpp(533,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_drawtools.cpp(148,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_ents.cpp(397,14): warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
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
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]
- [1x] -char-subscripts
  - src\games\cgame\cg_newDraw.cpp(1830,24): warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## windows-latest-x86-debug-

status: failure

errors: 34
warnings: 39 in 15 kinds

### errors

src\client\snd_mix.cpp(89,23): error: unknown token in expression
src\client\snd_mix.cpp(89,14): error: use of undeclared label 'dword'
src\client\snd_mix.cpp(89,20): error: use of undeclared label 'ptr'
scons: *** [build\windows-x86-debug\client\obj\client\snd_mix.cpp.obj] Error 1
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
scons: *** [build\windows-x86-debug\client\obj\qcommon\q_math.cpp.obj] Error 1
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
scons: *** [build\windows-x86-debug\client\obj\splines\math_matrix.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\splines\math_angles.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\splines\q_parse.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\splines\q_shared.cpp.obj] Error 1
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
scons: *** [build\windows-x86-debug\client\obj\splines\splines.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\ui\obj\qcommon\q_math.cpp.obj] Error 1

### failure context

- build\windows-x86-debug\client\obj\client\snd_mix.cpp.obj

```
Compiling 'src\client\cl_scrn.cpp'
Compiling 'src\client\cl_ui.cpp'
1 warning generated.
Compiling 'src\client\snd_adpcm.cpp'
Compiling 'src\client\snd_dma.cpp'
Compiling 'src\client\snd_mem.cpp'
Compiling 'src\client\snd_mix.cpp'
src\client\snd_dma.cpp(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1857 |                         if ( ss && ss->loop ) {
      |                                 ~~ ~~~~^~~~
src\client\snd_dma.cpp(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
 2171 |         if ( ss->loop && loop ) {
      |              ~~~~^~~~ ~~
src\client\snd_dma.cpp(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
 2487 |                                         if ( ss->loop && ss->loop[0] ) {
      |                                              ~~~~^~~~ ~~
3 warnings generated.
Compiling 'src\client\snd_wavelet.cpp'
Compiling 'src\qcommon\cm_load.cpp'
Compiling 'src\qcommon\cm_patch.cpp'
src\client\snd_mix.cpp(89,23): error: unknown token in expression
   89 |                 mov ecx,ds:dword ptr[snd_linear_count]
      |                                     ^
src\client\snd_mix.cpp(89,14): error: use of undeclared label 'dword'
   89 |                 mov ecx,ds:dword ptr[snd_linear_count]
      |                            ^
src\client\snd_mix.cpp(89,20): error: use of undeclared label 'ptr'
   89 |                 mov ecx,ds:dword ptr[snd_linear_count]
      |                                  ^
3 errors generated.
scons: *** [build\windows-x86-debug\client\obj\client\snd_mix.cpp.obj] Error 1
```

- build\windows-x86-debug\client\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\renderer\tr_shadows.cpp'
Compiling 'src\renderer\tr_sky.cpp'
src\renderer\tr_shade_calc.cpp(679,2): warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
  679 |         invModulate[3] = 255 - backEnd.currentEntity->e.shaderRGBA[3];  // this trashes alpha, but the AGEN block fixes it
      |         ^           ~
src\renderer\tr_shade_calc.cpp(669,2): note: array 'invModulate' declared here
  669 |         unsigned char invModulate[3];
      |         ^
1 warning generated.
src\renderer\tr_shader.cpp(986,23): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  986 |         if ( stage->alphaGen == CGEN_IDENTITY ) {
      |              ~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
src\renderer\tr_shader.cpp(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
 1898 |         if ( stages[0].alphaGen == CGEN_WAVEFORM ) {
      |              ~~~~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
Compiling 'src\renderer\tr_surface.cpp'
2 warnings generated.
Compiling 'src\renderer\tr_vfx.cpp'
Compiling 'src\renderer\tr_world.cpp'
Compiling 'src\qcommon\q_shared.cpp'
Compiling 'src\qcommon\q_math.cpp'
Compiling 'src\sys\win32\win_gamma.cpp'
Compiling 'src\sys\win32\win_glimp.cpp'
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
  745 |         static int bops_initialized;
      |         ^
src\qcommon\q_math.cpp(744,13): note: attribute is here
  744 | __declspec( naked ) int BoxOnPlaneSide( vec3_t emins, vec3_t emaxs, struct cplane_s *p ) {
      |             ^
1 error generated.
scons: *** [build\windows-x86-debug\client\obj\qcommon\q_math.cpp.obj] Error 1
```

- build\windows-x86-debug\client\obj\splines\math_matrix.cpp.obj

```
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
In file included from src\splines\math_matrix.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-debug\client\obj\splines\math_matrix.cpp.obj] Error 1
```

- build\windows-x86-debug\client\obj\splines\math_angles.cpp.obj

```
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
In file included from src\splines\math_matrix.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-debug\client\obj\splines\math_matrix.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\splines\math_angles.cpp.obj] Error 1
```

- build\windows-x86-debug\client\obj\splines\q_parse.cpp.obj

```
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-debug\client\obj\splines\math_matrix.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\splines\math_angles.cpp.obj] Error 1
Compiling 'src\splines\math_vector.cpp'
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
In file included from src\splines\q_shared.cpp:30:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
scons: *** [build\windows-x86-debug\client\obj\splines\q_parse.cpp.obj] Error 1
```

- build\windows-x86-debug\client\obj\splines\q_shared.cpp.obj

```
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-debug\client\obj\splines\math_matrix.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\splines\math_angles.cpp.obj] Error 1
Compiling 'src\splines\math_vector.cpp'
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
In file included from src\splines\q_shared.cpp:30:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
scons: *** [build\windows-x86-debug\client\obj\splines\q_parse.cpp.obj] Error 1
2 errors generated.
Compiling 'src\splines\util_str.cpp'
scons: *** [build\windows-x86-debug\client\obj\splines\q_shared.cpp.obj] Error 1
```

- build\windows-x86-debug\client\obj\splines\splines.cpp.obj

```
src\splines\splines.cpp(856,32): error: use of undeclared identifier 'va'
  856 |                 cameraPosition->write( file, va( "camera_%s",cameraPosition->typeStr() ) );
      |                                              ^~
src\splines\splines.cpp(859,37): error: use of undeclared identifier 'va'
  859 |                         targetPositions[i]->write( file, va( "target_%s", targetPositions[i]->typeStr() ) );
      |                                                          ^~
src\splines\splines.cpp(960,12): error: use of undeclared identifier 'va'
  960 |         idStr s = va( "\t%s {\n", name );
      |                   ^~
src\splines\splines.cpp(962,6): error: use of undeclared identifier 'va'
  962 |         s = va( "\t\ttype %d\n", static_cast<int>( type ) );
      |             ^~
src\splines\splines.cpp(964,6): error: use of undeclared identifier 'va'
  964 |         s = va( "\t\tparam \"%s\"\n", paramStr.c_str() );
      |             ^~
Compiling 'src\games\botlib\l_crc.cpp'
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
scons: *** [build\windows-x86-debug\client\obj\splines\splines.cpp.obj] Error 1
```

- build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\games\game\ai\fsm\ai_ability.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_cover.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_doors.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_evasion.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_grenades.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_idle.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_investigate.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_mounted.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_pursuit.cpp'
Compiling 'src\games\game\ai\fsm\ai_boss_heinrich.cpp'
Compiling 'src\games\game\ai\fsm\ai_boss_helga.cpp'
Compiling 'src\games\game\ai\fsm\ai_combat.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_blackguard.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_loper.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_reject.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_stimsoldier.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_warzombie.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_zombie.cpp'
Compiling 'src\games\game\ai\fsm\ai_state_legacy.cpp'
Compiling 'src\games\game\ai\fsm\ai_state_machine.cpp'
Compiling 'src\qcommon\q_math.cpp'
Compiling 'src\qcommon\q_shared.cpp'
Compiling 'src\games\game\bg_animation.cpp'
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
  745 |         static int bops_initialized;
      |         ^
src\qcommon\q_math.cpp(744,13): note: attribute is here
  744 | __declspec( naked ) int BoxOnPlaneSide( vec3_t emins, vec3_t emaxs, struct cplane_s *p ) {
      |             ^
1 error generated.
scons: *** [build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj] Error 1
```

- build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj

```
src\games\cgame\cg_view.cpp(1386,12): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
 1386 |                                         fov_x = fov_x;
      |                                         ~~~~~ ^ ~~~~~
src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1005 |         if ( ( !comppath || !cg_drawFPGun.integer ) &&     // then if it didn't find the 1st person one or you are set to not use one
      |                ~^~~~~~~~
Compiling 'src\games\cgame\fx\FxScheduler.cpp'
2 warnings generated.
Compiling 'src\games\cgame\fx\FxSystem.cpp'
1 warning generated.
Compiling 'src\games\cgame\fx\FxTemplate.cpp'
src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]
  386 |                         memset( effect, 0, sizeof( SEffectTemplate ) );
      |                                 ^
src\games\cgame\fx\FxScheduler.cpp(386,12): note: explicitly cast the pointer to silence this warning
  386 |                         memset( effect, 0, sizeof( SEffectTemplate ) );
      |                                 ^
      |                                 (void*)
Compiling 'src\games\cgame\fx\FxUtil.cpp'
Compiling 'src\games\cgame\fx\genericparser2.cpp'
1 warning generated.
Compiling 'src\games\ui\ui_shared.cpp'
Compiling 'src\qcommon\q_math.cpp'
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
  745 |         static int bops_initialized;
      |         ^
src\qcommon\q_math.cpp(744,13): note: attribute is here
  744 | __declspec( naked ) int BoxOnPlaneSide( vec3_t emins, vec3_t emaxs, struct cplane_s *p ) {
      |             ^
1 error generated.
scons: *** [build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj] Error 1
```

- build\windows-x86-debug\ui\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\games\ui\ui_players.cpp'
Compiling 'src\games\ui\ui_shared.cpp'
Compiling 'src\games\ui\ui_syscalls.cpp'
src\games\ui\ui_main.cpp(1449,7): warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1449 |         if ( levelname && levelname[0] != 0 ) {
      |              ^~~~~~~~~ ~~
src\games\ui\ui_main.cpp(1507,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1507 |                 if ( backgroundcolor ) {
      |                 ~~   ^~~~~~~~~~~~~~~
src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  773 |         if ( pi->pendingWeapon != -1 && dp_realtime > pi->weaponTimer ) {
      |              ~~~~~~~~~~~~~~~~~ ^  ~~
src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
 1615 |                 if ( weaponNumber != -1 ) {
      |                      ~~~~~~~~~~~~ ^  ~~
src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
 1628 |         if ( weaponNumber == -1 ) {
      |              ~~~~~~~~~~~~ ^  ~~
3 warnings generated.
Compiling 'src\games\ui\ui_util.cpp'
Compiling 'src\qcommon\q_math.cpp'
Compiling 'src\qcommon\q_shared.cpp'
2 warnings generated.
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
  745 |         static int bops_initialized;
      |         ^
src\qcommon\q_math.cpp(744,13): note: attribute is here
  744 | __declspec( naked ) int BoxOnPlaneSide( vec3_t emins, vec3_t emaxs, struct cplane_s *p ) {
      |             ^
1 error generated.
scons: *** [build\windows-x86-debug\ui\obj\qcommon\q_math.cpp.obj] Error 1
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
- [1x] -cast-calling-convention
  - src\sys\win32\win_glimp.cpp(1541,3): warning: cast between incompatible calling conventions 'cdecl' and 'stdcall'; calls through this pointer may abort at runtime [-Wcast-calling-convention]
- [1x] -char-subscripts
  - src\games\cgame\cg_newDraw.cpp(1830,24): warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## windows-latest-x86-release-

status: cancelled

errors: 34
warnings: 40 in 16 kinds

### errors

src\client\snd_mix.cpp(89,23): error: unknown token in expression
src\client\snd_mix.cpp(89,14): error: use of undeclared label 'dword'
src\client\snd_mix.cpp(89,20): error: use of undeclared label 'ptr'
scons: *** [build\windows-x86-release\client\obj\client\snd_mix.cpp.obj] Error 1
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
scons: *** [build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj] Error 1
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
scons: *** [build\windows-x86-release\client\obj\splines\math_angles.cpp.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\splines\math_matrix.cpp.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\splines\q_parse.cpp.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\splines\q_shared.cpp.obj] Error 1
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
scons: *** [build\windows-x86-release\client\obj\splines\splines.cpp.obj] Error 1
scons: *** [build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj] Error 1
scons: *** [build\windows-x86-release\ui\obj\qcommon\q_math.cpp.obj] Error 1

### failure context

- build\windows-x86-release\client\obj\client\snd_mix.cpp.obj

```
      |                                              sizeof(info) - strlen(info) - 1
Compiling 'src\client\cl_parse.cpp'
Compiling 'src\client\cl_scrn.cpp'
Compiling 'src\client\cl_ui.cpp'
Compiling 'src\client\snd_adpcm.cpp'
Compiling 'src\client\snd_dma.cpp'
1 warning generated.
Compiling 'src\client\snd_mem.cpp'
Compiling 'src\client\snd_mix.cpp'
Compiling 'src\client\snd_wavelet.cpp'
src\client\snd_dma.cpp(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1857 |                         if ( ss && ss->loop ) {
      |                                 ~~ ~~~~^~~~
src\client\snd_dma.cpp(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
 2171 |         if ( ss->loop && loop ) {
      |              ~~~~^~~~ ~~
src\client\snd_dma.cpp(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
 2487 |                                         if ( ss->loop && ss->loop[0] ) {
      |                                              ~~~~^~~~ ~~
src\client\snd_mix.cpp(89,23): error: unknown token in expression
   89 |                 mov ecx,ds:dword ptr[snd_linear_count]
      |                                     ^
src\client\snd_mix.cpp(89,14): error: use of undeclared label 'dword'
   89 |                 mov ecx,ds:dword ptr[snd_linear_count]
      |                            ^
src\client\snd_mix.cpp(89,20): error: use of undeclared label 'ptr'
   89 |                 mov ecx,ds:dword ptr[snd_linear_count]
      |                                  ^
3 errors generated.
Compiling 'src\qcommon\cm_load.cpp'
scons: *** [build\windows-x86-release\client\obj\client\snd_mix.cpp.obj] Error 1
```

- build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\renderer\tr_shade_calc.cpp'
Compiling 'src\renderer\tr_shader.cpp'
Compiling 'src\renderer\tr_shadows.cpp'
src\renderer\tr_shade_calc.cpp(679,2): warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
  679 |         invModulate[3] = 255 - backEnd.currentEntity->e.shaderRGBA[3];  // this trashes alpha, but the AGEN block fixes it
      |         ^           ~
src\renderer\tr_shade_calc.cpp(669,2): note: array 'invModulate' declared here
  669 |         unsigned char invModulate[3];
      |         ^
Compiling 'src\renderer\tr_sky.cpp'
1 warning generated.
Compiling 'src\renderer\tr_surface.cpp'
src\renderer\tr_shader.cpp(986,23): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  986 |         if ( stage->alphaGen == CGEN_IDENTITY ) {
      |              ~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
src\renderer\tr_shader.cpp(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
 1898 |         if ( stages[0].alphaGen == CGEN_WAVEFORM ) {
      |              ~~~~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
Compiling 'src\renderer\tr_vfx.cpp'
2 warnings generated.
Compiling 'src\renderer\tr_world.cpp'
Compiling 'src\qcommon\q_shared.cpp'
Compiling 'src\qcommon\q_math.cpp'
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
  745 |         static int bops_initialized;
      |         ^
src\qcommon\q_math.cpp(744,13): note: attribute is here
  744 | __declspec( naked ) int BoxOnPlaneSide( vec3_t emins, vec3_t emaxs, struct cplane_s *p ) {
      |             ^
1 error generated.
scons: *** [build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj] Error 1
```

- build\windows-x86-release\client\obj\splines\math_angles.cpp.obj

```
Compiling 'src\sys\win32\win_glimp.cpp'
Compiling 'src\sys\win32\win_input.cpp'
src\sys\win32\win_glimp.cpp(1541,3): warning: cast between incompatible calling conventions 'cdecl' and 'stdcall'; calls through this pointer may abort at runtime [-Wcast-calling-convention]
 1541 |                 (LPTHREAD_START_ROUTINE)GLimp_RenderThreadWrapper,  // LPTHREAD_START_ROUTINE lpStartAddr,
      |                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src\sys\win32\win_glimp.cpp(1516,6): note: consider defining 'GLimp_RenderThreadWrapper' with the 'stdcall' calling convention
 1516 | void GLimp_RenderThreadWrapper( void ) {
      |      ^
      |      __RPC_CALLEE 
Compiling 'src\sys\win32\win_main.cpp'
Compiling 'src\sys\win32\win_net.cpp'
1 warning generated.
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
scons: *** [build\windows-x86-release\client\obj\splines\math_angles.cpp.obj] Error 1
```

- build\windows-x86-release\client\obj\splines\math_matrix.cpp.obj

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
scons: *** [build\windows-x86-release\client\obj\splines\math_angles.cpp.obj] Error 1
Compiling 'src\splines\math_vector.cpp'
In file included from src\splines\math_matrix.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x86-release\client\obj\splines\math_matrix.cpp.obj] Error 1
```

- build\windows-x86-release\client\obj\splines\q_parse.cpp.obj

```
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x86-release\client\obj\splines\math_angles.cpp.obj] Error 1
Compiling 'src\splines\math_vector.cpp'
In file included from src\splines\math_matrix.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x86-release\client\obj\splines\math_matrix.cpp.obj] Error 1
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
scons: *** [build\windows-x86-release\client\obj\splines\q_parse.cpp.obj] Error 1
```

- build\windows-x86-release\client\obj\splines\q_shared.cpp.obj

```
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x86-release\client\obj\splines\math_matrix.cpp.obj] Error 1
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
scons: *** [build\windows-x86-release\client\obj\splines\q_parse.cpp.obj] Error 1
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
Compiling 'src\splines\util_str.cpp'
scons: *** [build\windows-x86-release\client\obj\splines\q_shared.cpp.obj] Error 1
```

- build\windows-x86-release\client\obj\splines\splines.cpp.obj

```
src\splines\splines.cpp(856,32): error: use of undeclared identifier 'va'
  856 |                 cameraPosition->write( file, va( "camera_%s",cameraPosition->typeStr() ) );
      |                                              ^~
Compiling 'src\games\botlib\be_interface.cpp'
src\splines\splines.cpp(859,37): error: use of undeclared identifier 'va'
  859 |                         targetPositions[i]->write( file, va( "target_%s", targetPositions[i]->typeStr() ) );
      |                                                          ^~
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
1 warning and 20 errors generated.
scons: *** [build\windows-x86-release\client\obj\splines\splines.cpp.obj] Error 1
```

- build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj

```
1 warning generated.
Compiling 'src\games\game\ai\fsm\ai_behavior_doors.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_evasion.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_grenades.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_idle.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_investigate.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_mounted.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_pursuit.cpp'
Compiling 'src\games\game\ai\fsm\ai_boss_heinrich.cpp'
Compiling 'src\games\game\ai\fsm\ai_boss_helga.cpp'
Compiling 'src\games\game\ai\fsm\ai_combat.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_blackguard.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_loper.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_reject.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_stimsoldier.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_warzombie.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_zombie.cpp'
Compiling 'src\games\game\ai\fsm\ai_state_legacy.cpp'
Compiling 'src\games\game\ai\fsm\ai_state_machine.cpp'
Compiling 'src\qcommon\q_math.cpp'
Compiling 'src\qcommon\q_shared.cpp'
Compiling 'src\games\game\bg_animation.cpp'
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
  745 |         static int bops_initialized;
      |         ^
src\qcommon\q_math.cpp(744,13): note: attribute is here
  744 | __declspec( naked ) int BoxOnPlaneSide( vec3_t emins, vec3_t emaxs, struct cplane_s *p ) {
      |             ^
1 error generated.
Compiling 'src\games\game\bg_misc.cpp'
scons: *** [build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj] Error 1
```

- build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj

```
      |                                         ~~~~~ ^ ~~~~~
src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1005 |         if ( ( !comppath || !cg_drawFPGun.integer ) &&     // then if it didn't find the 1st person one or you are set to not use one
      |                ~^~~~~~~~
Compiling 'src\games\cgame\fx\FxScheduler.cpp'
2 warnings generated.
Compiling 'src\games\cgame\fx\FxSystem.cpp'
1 warning generated.
Compiling 'src\games\cgame\fx\FxTemplate.cpp'
src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]
  386 |                         memset( effect, 0, sizeof( SEffectTemplate ) );
      |                                 ^
src\games\cgame\fx\FxScheduler.cpp(386,12): note: explicitly cast the pointer to silence this warning
  386 |                         memset( effect, 0, sizeof( SEffectTemplate ) );
      |                                 ^
      |                                 (void*)
Compiling 'src\games\cgame\fx\FxUtil.cpp'
Compiling 'src\games\cgame\fx\genericparser2.cpp'
1 warning generated.
Compiling 'src\games\ui\ui_shared.cpp'
Compiling 'src\qcommon\q_math.cpp'
Compiling 'src\qcommon\q_shared.cpp'
Compiling 'src\games\game\bg_misc.cpp'
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
  745 |         static int bops_initialized;
      |         ^
src\qcommon\q_math.cpp(744,13): note: attribute is here
  744 | __declspec( naked ) int BoxOnPlaneSide( vec3_t emins, vec3_t emaxs, struct cplane_s *p ) {
      |             ^
1 error generated.
scons: *** [build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj] Error 1
```

- build\windows-x86-release\ui\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\games\ui\ui_main.cpp'
Compiling 'src\games\ui\ui_players.cpp'
src\games\ui\ui_main.cpp(1449,7): warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1449 |         if ( levelname && levelname[0] != 0 ) {
      |              ^~~~~~~~~ ~~
src\games\ui\ui_main.cpp(1507,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1507 |                 if ( backgroundcolor ) {
      |                 ~~   ^~~~~~~~~~~~~~~
Compiling 'src\games\ui\ui_shared.cpp'
src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  773 |         if ( pi->pendingWeapon != -1 && dp_realtime > pi->weaponTimer ) {
      |              ~~~~~~~~~~~~~~~~~ ^  ~~
src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
 1615 |                 if ( weaponNumber != -1 ) {
      |                      ~~~~~~~~~~~~ ^  ~~
src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
 1628 |         if ( weaponNumber == -1 ) {
      |              ~~~~~~~~~~~~ ^  ~~
Compiling 'src\games\ui\ui_syscalls.cpp'
3 warnings generated.
Compiling 'src\games\ui\ui_util.cpp'
Compiling 'src\qcommon\q_math.cpp'
Compiling 'src\qcommon\q_shared.cpp'
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
  745 |         static int bops_initialized;
      |         ^
src\qcommon\q_math.cpp(744,13): note: attribute is here
  744 | __declspec( naked ) int BoxOnPlaneSide( vec3_t emins, vec3_t emaxs, struct cplane_s *p ) {
      |             ^
1 error generated.
scons: *** [build\windows-x86-release\ui\obj\qcommon\q_math.cpp.obj] Error 1
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
- [1x] -cast-calling-convention
  - src\sys\win32\win_glimp.cpp(1541,3): warning: cast between incompatible calling conventions 'cdecl' and 'stdcall'; calls through this pointer may abort at runtime [-Wcast-calling-convention]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]
- [1x] -char-subscripts
  - src\games\cgame\cg_newDraw.cpp(1830,24): warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

