# Compact build digest

commit: 88de9323eadb

- ubuntu-latest-x64-debug-: failure
- ubuntu-latest-x64-release-: failure
- ubuntu-latest-x64-release-game: failure
- ubuntu-latest-x86-debug-: failure
- ubuntu-latest-x86-release-: cancelled
- uncrustify: success
- windows-latest-x64-debug-: failure
- windows-latest-x64-release-: cancelled
- windows-latest-x64-release-cgame: cancelled
- windows-latest-x64-release-game: cancelled
- windows-latest-x64-release-ui: cancelled
- windows-latest-x86-debug-: failure
- windows-latest-x86-release-: failure

## ubuntu-latest-x64-debug-

status: failure

errors: 28
warnings: 2 in 2 kinds

### errors

src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
scons: *** [build/linux-x64-debug/client/obj/splines/math_matrix.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/math_angles.cpp.o] Error 1
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
src/games/cgame/cg_view.cpp:874:5: error: use of undeclared identifier '$'
src/games/cgame/cg_view.cpp:1387:6: error: use of undeclared identifier '$'
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_view.cpp.o] Error 1

### failure context

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
Compiling 'src/splines/math_vector.cpp'
Compiling 'src/splines/q_parse.cpp'
In file included from src/splines/math_angles.cpp:29:
In file included from src/splines/math_matrix.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
2 errors generated.
scons: *** [build/linux-x64-debug/client/obj/splines/math_matrix.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/splines/math_angles.cpp.o

```
    9 | #warning "xf86dga.h is obsolete and may be removed in the future."
      |  ^
/usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
   10 | #warning "include <X11/extensions/Xxf86dga.h> instead."
      |  ^
2 warnings generated.
Compiling 'src/splines/math_quaternion.cpp'
Compiling 'src/splines/math_vector.cpp'
Compiling 'src/splines/q_parse.cpp'
In file included from src/splines/math_angles.cpp:29:
In file included from src/splines/math_matrix.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
2 errors generated.
scons: *** [build/linux-x64-debug/client/obj/splines/math_matrix.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/math_angles.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/splines/q_parse.cpp.o

```
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
2 errors generated.
scons: *** [build/linux-x64-debug/client/obj/splines/math_matrix.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/math_angles.cpp.o] Error 1
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
Compiling 'src/splines/util_str.cpp'
scons: *** [build/linux-x64-debug/client/obj/splines/q_parse.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/splines/q_shared.cpp.o

```
      |               ;
2 errors generated.
2 errors generated.
scons: *** [build/linux-x64-debug/client/obj/splines/math_matrix.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/math_angles.cpp.o] Error 1
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
Compiling 'src/splines/util_str.cpp'
scons: *** [build/linux-x64-debug/client/obj/splines/q_parse.cpp.o] Error 1
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
Compiling 'src/games/botlib/be_ai_char.cpp'
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

- build/linux-x64-debug/cgame/obj/games/cgame/cg_view.cpp.o

```
Compiling 'src/games/cgame/cg_ents.cpp'
Compiling 'src/games/cgame/cg_event.cpp'
Compiling 'src/games/cgame/cg_fx.cpp'
Compiling 'src/games/cgame/cg_fx_entities.cpp'
Compiling 'src/games/cgame/cg_fx_flame.cpp'
Compiling 'src/games/cgame/cg_fx_marks.cpp'
Compiling 'src/games/cgame/cg_fx_particles.cpp'
Compiling 'src/games/cgame/cg_fx_trails.cpp'
Compiling 'src/games/cgame/cg_info.cpp'
Compiling 'src/games/cgame/cg_main.cpp'
Compiling 'src/games/cgame/cg_newDraw.cpp'
Compiling 'src/games/cgame/cg_players.cpp'
Compiling 'src/games/cgame/cg_playerstate.cpp'
Compiling 'src/games/cgame/cg_predict.cpp'
Compiling 'src/games/cgame/cg_scoreboard.cpp'
Compiling 'src/games/cgame/cg_servercmds.cpp'
Compiling 'src/games/cgame/cg_snapshot.cpp'
Compiling 'src/games/cgame/cg_sound.cpp'
Compiling 'src/games/cgame/cg_syscalls.cpp'
Compiling 'src/games/cgame/cg_view.cpp'
Compiling 'src/games/cgame/cg_weapons.cpp'
Compiling 'src/games/cgame/fx/FxPrimitives.cpp'
Compiling 'src/games/cgame/fx/FxScheduler.cpp'
src/games/cgame/cg_view.cpp:874:5: error: use of undeclared identifier '$'
  874 |                                 $ 1// fully zoomed out; keep the current fov_x
      |                                 ^
src/games/cgame/cg_view.cpp:1387:6: error: use of undeclared identifier '$'
 1387 |                                         $ 1// fully zoomed out; keep the current fov_x
      |                                         ^
2 errors generated.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_view.cpp.o] Error 1
```


### warning kinds

- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]

## uncrustify

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-debug-

status: failure

errors: 28
warnings: 0 in 0 kinds

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
src\games\cgame\cg_view.cpp(874,5): error: use of undeclared identifier '$'
src\games\cgame\cg_view.cpp(1387,6): error: use of undeclared identifier '$'
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1

### failure context

- build\windows-x64-debug\client\obj\splines\math_angles.cpp.obj

```
Compiling 'src\renderer\tr_shadows.cpp'
Compiling 'src\renderer\tr_sky.cpp'
Compiling 'src\renderer\tr_surface.cpp'
Compiling 'src\renderer\tr_vfx.cpp'
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
scons: *** [build\windows-x64-debug\client\obj\splines\math_angles.cpp.obj] Error 1
```

- build\windows-x64-debug\client\obj\splines\math_matrix.cpp.obj

```
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
scons: *** [build\windows-x64-debug\client\obj\splines\math_angles.cpp.obj] Error 1
Compiling 'src\splines\math_vector.cpp'
Compiling 'src\splines\q_parse.cpp'
Compiling 'src\splines\q_shared.cpp'
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
scons: *** [build\windows-x64-debug\client\obj\splines\math_matrix.cpp.obj] Error 1
```

- build\windows-x64-debug\client\obj\splines\q_parse.cpp.obj

```
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x64-debug\client\obj\splines\math_matrix.cpp.obj] Error 1
Compiling 'src\splines\splines.cpp'
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
scons: *** [build\windows-x64-debug\client\obj\splines\q_parse.cpp.obj] Error 1
```

- build\windows-x64-debug\client\obj\splines\q_shared.cpp.obj

```
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x64-debug\client\obj\splines\math_matrix.cpp.obj] Error 1
Compiling 'src\splines\splines.cpp'
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
scons: *** [build\windows-x64-debug\client\obj\splines\q_parse.cpp.obj] Error 1
Compiling 'src\games\botlib\be_ai_char.cpp'
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
src\splines\splines.cpp(960,12): error: use of undeclared identifier 'va'
  960 |         idStr s = va( "\t%s {\n", name );
      |                   ^~
src\splines\splines.cpp(962,6): error: use of undeclared identifier 'va'
  962 |         s = va( "\t\ttype %d\n", static_cast<int>( type ) );
      |             ^~
Compiling 'src\games\botlib\l_crc.cpp'
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

- build\windows-x64-debug\cgame\obj\games\cgame\cg_view.cpp.obj

```
Compiling 'src\games\cgame\cg_ents.cpp'
Compiling 'src\games\cgame\cg_event.cpp'
Compiling 'src\games\cgame\cg_fx.cpp'
Compiling 'src\games\cgame\cg_fx_entities.cpp'
Compiling 'src\games\cgame\cg_fx_flame.cpp'
Compiling 'src\games\cgame\cg_fx_marks.cpp'
Compiling 'src\games\cgame\cg_fx_particles.cpp'
Compiling 'src\games\cgame\cg_fx_trails.cpp'
Compiling 'src\games\cgame\cg_info.cpp'
Compiling 'src\games\cgame\cg_main.cpp'
Compiling 'src\games\cgame\cg_newDraw.cpp'
Compiling 'src\games\cgame\cg_players.cpp'
Compiling 'src\games\cgame\cg_playerstate.cpp'
Compiling 'src\games\cgame\cg_predict.cpp'
Compiling 'src\games\cgame\cg_scoreboard.cpp'
Compiling 'src\games\cgame\cg_servercmds.cpp'
Compiling 'src\games\cgame\cg_snapshot.cpp'
Compiling 'src\games\cgame\cg_sound.cpp'
Compiling 'src\games\cgame\cg_syscalls.cpp'
Compiling 'src\games\cgame\cg_view.cpp'
Compiling 'src\games\cgame\cg_weapons.cpp'
Compiling 'src\games\cgame\fx\FxPrimitives.cpp'
src\games\cgame\cg_view.cpp(874,5): error: use of undeclared identifier '$'
  874 |                                 $ 1// fully zoomed out; keep the current fov_x
      |                                 ^
src\games\cgame\cg_view.cpp(1387,6): error: use of undeclared identifier '$'
 1387 |                                         $ 1// fully zoomed out; keep the current fov_x
      |                                         ^
2 errors generated.
Compiling 'src\games\cgame\fx\FxScheduler.cpp'
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1
```


### warning kinds

