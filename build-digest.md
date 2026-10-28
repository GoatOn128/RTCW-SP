# Build digest

commit: e560ddc2059e

- ubuntu-latest-x64-debug-: failure
- ubuntu-latest-x64-release-: cancelled
- ubuntu-latest-x64-release-game: failure
- ubuntu-latest-x86-debug-: failure
- ubuntu-latest-x86-release-: failure
- uncrustify: success
- windows-latest-x64-debug-: failure
- windows-latest-x64-release-: failure
- windows-latest-x64-release-cgame: failure
- windows-latest-x64-release-game: failure
- windows-latest-x64-release-ui: failure
- windows-latest-x86-debug-: failure
- windows-latest-x86-release-: cancelled

## ubuntu-latest-x64-debug-

status: failure

errors: 28
warnings: 17 in 4 kinds

### errors

src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
scons: *** [build/linux-x64-debug/client/obj/splines/math_angles.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/math_matrix.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/q_shared.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/q_parse.cpp.o] Error 1
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
src/games/cgame/cg_view.cpp:874:1: error: use of undeclared identifier '$1'
src/games/cgame/cg_view.cpp:1386:1: error: use of undeclared identifier '$1'
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_view.cpp.o] Error 1

### failure context

- build/linux-x64-debug/client/obj/splines/math_angles.cpp.o

```
/usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
    9 | #warning "xf86dga.h is obsolete and may be removed in the future."
      |  ^
/usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
   10 | #warning "include <X11/extensions/Xxf86dga.h> instead."
      |  ^
2 warnings generated.
Compiling 'src/splines/math_matrix.cpp'
Compiling 'src/splines/math_quaternion.cpp'
Compiling 'src/splines/math_vector.cpp'
In file included from src/splines/math_matrix.cpp:29:
In file included from src/splines/math_angles.cpp:29:
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
scons: *** [build/linux-x64-debug/client/obj/splines/math_angles.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/splines/math_matrix.cpp.o

```
    9 | #warning "xf86dga.h is obsolete and may be removed in the future."
      |  ^
/usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
   10 | #warning "include <X11/extensions/Xxf86dga.h> instead."
      |  ^
2 warnings generated.
Compiling 'src/splines/math_matrix.cpp'
Compiling 'src/splines/math_quaternion.cpp'
Compiling 'src/splines/math_vector.cpp'
In file included from src/splines/math_matrix.cpp:29:
In file included from src/splines/math_angles.cpp:29:
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
scons: *** [build/linux-x64-debug/client/obj/splines/math_angles.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/math_matrix.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/splines/q_shared.cpp.o

```
      |               ^
      |               ;
2 errors generated.
2 errors generated.
scons: *** [build/linux-x64-debug/client/obj/splines/math_angles.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/math_matrix.cpp.o] Error 1
Compiling 'src/splines/q_parse.cpp'
Compiling 'src/splines/q_shared.cpp'
Compiling 'src/splines/splines.cpp'
Compiling 'src/splines/util_str.cpp'
In file included from src/splines/q_shared.cpp:30:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
In file included from src/splines/q_parse.cpp:31:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
2 errors generated.
scons: *** [build/linux-x64-debug/client/obj/splines/q_shared.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/splines/q_parse.cpp.o

```
2 errors generated.
2 errors generated.
scons: *** [build/linux-x64-debug/client/obj/splines/math_angles.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/math_matrix.cpp.o] Error 1
Compiling 'src/splines/q_parse.cpp'
Compiling 'src/splines/q_shared.cpp'
Compiling 'src/splines/splines.cpp'
Compiling 'src/splines/util_str.cpp'
In file included from src/splines/q_shared.cpp:30:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
In file included from src/splines/q_parse.cpp:31:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
2 errors generated.
scons: *** [build/linux-x64-debug/client/obj/splines/q_shared.cpp.o] Error 1
Compiling 'src/games/botlib/be_ai_char.cpp'
scons: *** [build/linux-x64-debug/client/obj/splines/q_parse.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/splines/splines.cpp.o

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
Compiling 'src/games/botlib/be_ai_goal.cpp'
scons: *** [build/linux-x64-debug/client/obj/splines/splines.cpp.o] Error 1
```

- build/linux-x64-debug/cgame/obj/games/cgame/cg_view.cpp.o

```
Compiling 'src/games/cgame/cg_newDraw.cpp'
Compiling 'src/games/cgame/cg_players.cpp'
Compiling 'src/games/cgame/cg_playerstate.cpp'
Compiling 'src/games/cgame/cg_predict.cpp'
Compiling 'src/games/cgame/cg_scoreboard.cpp'
Compiling 'src/games/cgame/cg_servercmds.cpp'
Compiling 'src/games/cgame/cg_snapshot.cpp'
Compiling 'src/games/cgame/cg_sound.cpp'
Compiling 'src/games/cgame/cg_syscalls.cpp'
src/games/cgame/cg_servercmds.cpp:948:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  948 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src/games/cgame/cg_servercmds.cpp:960:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  960 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src/games/cgame/cg_servercmds.cpp:972:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  972 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
Compiling 'src/games/cgame/cg_view.cpp'
3 warnings generated.
Compiling 'src/games/cgame/cg_weapons.cpp'
Compiling 'src/games/cgame/fx/FxPrimitives.cpp'
src/games/cgame/cg_view.cpp:874:1: error: use of undeclared identifier '$1'
  874 | $1// fully zoomed out; keep the current fov_x
      | ^~
Compiling 'src/games/cgame/fx/FxScheduler.cpp'
src/games/cgame/cg_view.cpp:1386:1: error: use of undeclared identifier '$1'
 1386 | $1// fully zoomed out; keep the current fov_x
      | ^~
2 errors generated.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_view.cpp.o] Error 1
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
- [3x] -tautological-constant-out-of-range-compare
  - src/games/ui/ui_players.cpp:773:25: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1615:21: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1628:20: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]

## ubuntu-latest-x64-release-

status: cancelled

errors: 28
warnings: 18 in 5 kinds

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
src/games/cgame/cg_view.cpp:874:1: error: use of undeclared identifier '$1'
src/games/cgame/cg_view.cpp:1386:1: error: use of undeclared identifier '$1'
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_view.cpp.o] Error 1

### failure context

- build/linux-x64-release/client/obj/splines/math_angles.cpp.o

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
In file included from src/splines/math_angles.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
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
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_angles.cpp.o] Error 1
```

- build/linux-x64-release/client/obj/splines/math_matrix.cpp.o

```
/usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
    9 | #warning "xf86dga.h is obsolete and may be removed in the future."
      |  ^
/usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
   10 | #warning "include <X11/extensions/Xxf86dga.h> instead."
      |  ^
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
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
scons: *** [build/linux-x64-release/client/obj/splines/math_matrix.cpp.o] Error 1
```

- build/linux-x64-release/client/obj/splines/q_parse.cpp.o

```
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
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
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
scons: *** [build/linux-x64-release/client/obj/splines/math_matrix.cpp.o] Error 1
Compiling 'src/splines/q_parse.cpp'
Compiling 'src/splines/q_shared.cpp'
In file included from src/splines/q_parse.cpp:31:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
Compiling 'src/splines/splines.cpp'
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/q_parse.cpp.o] Error 1
```

- build/linux-x64-release/client/obj/splines/q_shared.cpp.o

```
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
scons: *** [build/linux-x64-release/client/obj/splines/math_matrix.cpp.o] Error 1
Compiling 'src/splines/q_parse.cpp'
Compiling 'src/splines/q_shared.cpp'
In file included from src/splines/q_parse.cpp:31:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
Compiling 'src/splines/splines.cpp'
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/q_parse.cpp.o] Error 1
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

- build/linux-x64-release/cgame/obj/games/cgame/cg_view.cpp.o

```
Compiling 'src/games/cgame/cg_main.cpp'
Compiling 'src/games/cgame/cg_newDraw.cpp'
Compiling 'src/games/cgame/cg_players.cpp'
Compiling 'src/games/cgame/cg_playerstate.cpp'
Compiling 'src/games/cgame/cg_predict.cpp'
Compiling 'src/games/cgame/cg_scoreboard.cpp'
Compiling 'src/games/cgame/cg_servercmds.cpp'
Compiling 'src/games/cgame/cg_snapshot.cpp'
src/games/cgame/cg_servercmds.cpp:948:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  948 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src/games/cgame/cg_servercmds.cpp:960:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  960 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src/games/cgame/cg_servercmds.cpp:972:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  972 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
Compiling 'src/games/cgame/cg_sound.cpp'
Compiling 'src/games/cgame/cg_syscalls.cpp'
3 warnings generated.
Compiling 'src/games/cgame/cg_view.cpp'
Compiling 'src/games/cgame/cg_weapons.cpp'
Compiling 'src/games/cgame/fx/FxPrimitives.cpp'
src/games/cgame/cg_view.cpp:874:1: error: use of undeclared identifier '$1'
  874 | $1// fully zoomed out; keep the current fov_x
      | ^~
src/games/cgame/cg_view.cpp:1386:1: error: use of undeclared identifier '$1'
 1386 | $1// fully zoomed out; keep the current fov_x
      | ^~
2 errors generated.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_view.cpp.o] Error 1
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
- [3x] -tautological-constant-out-of-range-compare
  - src/games/ui/ui_players.cpp:773:25: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1615:21: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1628:20: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
- [1x] -unused-value
  - src/splines/splines.cpp:580:17: warning: expression result unused [-Wunused-value]

## ubuntu-latest-x64-release-game

status: failure

errors: 28
warnings: 18 in 5 kinds

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
src/games/cgame/cg_view.cpp:874:1: error: use of undeclared identifier '$1'
src/games/cgame/cg_view.cpp:1386:1: error: use of undeclared identifier '$1'
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_view.cpp.o] Error 1

### failure context

- build/linux-x64-release/client/obj/splines/math_angles.cpp.o

```
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
In file included from src/splines/math_matrix.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
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
In file included from src/splines/math_matrix.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
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
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
scons: *** [build/linux-x64-release/client/obj/splines/math_matrix.cpp.o] Error 1
```

- build/linux-x64-release/client/obj/splines/q_parse.cpp.o

```
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
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
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
scons: *** [build/linux-x64-release/client/obj/splines/math_matrix.cpp.o] Error 1
Compiling 'src/splines/q_parse.cpp'
Compiling 'src/splines/q_shared.cpp'
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
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
scons: *** [build/linux-x64-release/client/obj/splines/math_matrix.cpp.o] Error 1
Compiling 'src/splines/q_parse.cpp'
Compiling 'src/splines/q_shared.cpp'
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
Compiling 'src/splines/splines.cpp'
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
Compiling 'src/splines/util_str.cpp'
Compiling 'src/games/botlib/be_ai_char.cpp'
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

- build/linux-x64-release/cgame/obj/games/cgame/cg_view.cpp.o

```
Compiling 'src/games/cgame/cg_main.cpp'
Compiling 'src/games/cgame/cg_newDraw.cpp'
Compiling 'src/games/cgame/cg_players.cpp'
Compiling 'src/games/cgame/cg_playerstate.cpp'
Compiling 'src/games/cgame/cg_predict.cpp'
Compiling 'src/games/cgame/cg_scoreboard.cpp'
Compiling 'src/games/cgame/cg_servercmds.cpp'
Compiling 'src/games/cgame/cg_snapshot.cpp'
src/games/cgame/cg_servercmds.cpp:948:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  948 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src/games/cgame/cg_servercmds.cpp:960:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  960 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src/games/cgame/cg_servercmds.cpp:972:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  972 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
Compiling 'src/games/cgame/cg_sound.cpp'
3 warnings generated.
Compiling 'src/games/cgame/cg_syscalls.cpp'
Compiling 'src/games/cgame/cg_view.cpp'
Compiling 'src/games/cgame/cg_weapons.cpp'
Compiling 'src/games/cgame/fx/FxPrimitives.cpp'
src/games/cgame/cg_view.cpp:874:1: error: use of undeclared identifier '$1'
  874 | $1// fully zoomed out; keep the current fov_x
      | ^~
src/games/cgame/cg_view.cpp:1386:1: error: use of undeclared identifier '$1'
 1386 | $1// fully zoomed out; keep the current fov_x
      | ^~
2 errors generated.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_view.cpp.o] Error 1
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
- [3x] -tautological-constant-out-of-range-compare
  - src/games/ui/ui_players.cpp:773:25: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1615:21: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1628:20: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
- [1x] -unused-value
  - src/splines/splines.cpp:580:17: warning: expression result unused [-Wunused-value]

## ubuntu-latest-x86-debug-

status: failure

errors: 28
warnings: 17 in 4 kinds

### errors

src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
scons: *** [build/linux-x86-debug/client/obj/splines/math_matrix.cpp.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/splines/math_angles.cpp.o] Error 1
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
src/games/cgame/cg_view.cpp:874:1: error: use of undeclared identifier '$1'
src/games/cgame/cg_view.cpp:1386:1: error: use of undeclared identifier '$1'
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_view.cpp.o] Error 1

### failure context

- build/linux-x86-debug/client/obj/splines/math_matrix.cpp.o

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
In file included from src/splines/math_angles.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
2 errors generated.
scons: *** [build/linux-x86-debug/client/obj/splines/math_matrix.cpp.o] Error 1
```

- build/linux-x86-debug/client/obj/splines/math_angles.cpp.o

```
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
In file included from src/splines/math_angles.cpp:29:
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:1: error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
2 errors generated.
scons: *** [build/linux-x86-debug/client/obj/splines/math_matrix.cpp.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/splines/math_angles.cpp.o] Error 1
```

- build/linux-x86-debug/client/obj/splines/q_parse.cpp.o

```
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
src/splines/q_splineshared.h:533:15: error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
2 errors generated.
scons: *** [build/linux-x86-debug/client/obj/splines/math_matrix.cpp.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
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
Compiling 'src/splines/util_str.cpp'
scons: *** [build/linux-x86-debug/client/obj/splines/q_parse.cpp.o] Error 1
```

- build/linux-x86-debug/client/obj/splines/q_shared.cpp.o

```
2 errors generated.
scons: *** [build/linux-x86-debug/client/obj/splines/math_matrix.cpp.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/splines/math_angles.cpp.o] Error 1
Compiling 'src/splines/math_vector.cpp'
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
Compiling 'src/splines/util_str.cpp'
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
2 errors generated.
scons: *** [build/linux-x86-debug/client/obj/splines/q_shared.cpp.o] Error 1
```

- build/linux-x86-debug/client/obj/splines/splines.cpp.o

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
scons: *** [build/linux-x86-debug/client/obj/splines/splines.cpp.o] Error 1
```

- build/linux-x86-debug/cgame/obj/games/cgame/cg_view.cpp.o

```
Compiling 'src/games/cgame/cg_newDraw.cpp'
Compiling 'src/games/cgame/cg_players.cpp'
Compiling 'src/games/cgame/cg_playerstate.cpp'
Compiling 'src/games/cgame/cg_predict.cpp'
Compiling 'src/games/cgame/cg_scoreboard.cpp'
Compiling 'src/games/cgame/cg_servercmds.cpp'
Compiling 'src/games/cgame/cg_snapshot.cpp'
Compiling 'src/games/cgame/cg_sound.cpp'
src/games/cgame/cg_servercmds.cpp:948:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  948 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src/games/cgame/cg_servercmds.cpp:960:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  960 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src/games/cgame/cg_servercmds.cpp:972:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  972 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
Compiling 'src/games/cgame/cg_syscalls.cpp'
3 warnings generated.
Compiling 'src/games/cgame/cg_view.cpp'
Compiling 'src/games/cgame/cg_weapons.cpp'
Compiling 'src/games/cgame/fx/FxPrimitives.cpp'
src/games/cgame/cg_view.cpp:874:1: error: use of undeclared identifier '$1'
  874 | $1// fully zoomed out; keep the current fov_x
      | ^~
src/games/cgame/cg_view.cpp:1386:1: error: use of undeclared identifier '$1'
 1386 | $1// fully zoomed out; keep the current fov_x
      | ^~
Compiling 'src/games/cgame/fx/FxScheduler.cpp'
2 errors generated.
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_view.cpp.o] Error 1
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
- [3x] -tautological-constant-out-of-range-compare
  - src/games/ui/ui_players.cpp:773:25: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1615:21: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1628:20: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]

## ubuntu-latest-x86-release-

status: failure

errors: 28
warnings: 18 in 5 kinds

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
src/games/cgame/cg_view.cpp:874:1: error: use of undeclared identifier '$1'
src/games/cgame/cg_view.cpp:1386:1: error: use of undeclared identifier '$1'
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_view.cpp.o] Error 1

### failure context

- build/linux-x86-release/client/obj/splines/math_angles.cpp.o

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
scons: *** [build/linux-x86-release/client/obj/splines/math_angles.cpp.o] Error 1
```

- build/linux-x86-release/client/obj/splines/math_matrix.cpp.o

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
scons: *** [build/linux-x86-release/client/obj/splines/math_angles.cpp.o] Error 1
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
scons: *** [build/linux-x86-release/client/obj/splines/math_matrix.cpp.o] Error 1
```

- build/linux-x86-release/client/obj/splines/q_parse.cpp.o

```
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x86-release/client/obj/splines/math_angles.cpp.o] Error 1
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
scons: *** [build/linux-x86-release/client/obj/splines/math_matrix.cpp.o] Error 1
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
      |               ^
      |               ;
2 errors generated.
scons: *** [build/linux-x86-release/client/obj/splines/math_matrix.cpp.o] Error 1
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

- build/linux-x86-release/cgame/obj/games/cgame/cg_view.cpp.o

```
Compiling 'src/games/cgame/cg_main.cpp'
Compiling 'src/games/cgame/cg_newDraw.cpp'
Compiling 'src/games/cgame/cg_players.cpp'
Compiling 'src/games/cgame/cg_playerstate.cpp'
Compiling 'src/games/cgame/cg_predict.cpp'
Compiling 'src/games/cgame/cg_scoreboard.cpp'
Compiling 'src/games/cgame/cg_servercmds.cpp'
Compiling 'src/games/cgame/cg_snapshot.cpp'
Compiling 'src/games/cgame/cg_sound.cpp'
src/games/cgame/cg_servercmds.cpp:948:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  948 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src/games/cgame/cg_servercmds.cpp:960:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  960 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src/games/cgame/cg_servercmds.cpp:972:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  972 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
Compiling 'src/games/cgame/cg_syscalls.cpp'
3 warnings generated.
Compiling 'src/games/cgame/cg_view.cpp'
Compiling 'src/games/cgame/cg_weapons.cpp'
Compiling 'src/games/cgame/fx/FxPrimitives.cpp'
src/games/cgame/cg_view.cpp:874:1: error: use of undeclared identifier '$1'
  874 | $1// fully zoomed out; keep the current fov_x
      | ^~
src/games/cgame/cg_view.cpp:1386:1: error: use of undeclared identifier '$1'
 1386 | $1// fully zoomed out; keep the current fov_x
      | ^~
2 errors generated.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_view.cpp.o] Error 1
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
- [3x] -tautological-constant-out-of-range-compare
  - src/games/ui/ui_players.cpp:773:25: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1615:21: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1628:20: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
- [1x] -unused-value
  - src/splines/splines.cpp:580:17: warning: expression result unused [-Wunused-value]

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
warnings: 15 in 2 kinds

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
src\games\cgame\cg_view.cpp(874,1): error: use of undeclared identifier '$1'
src\games\cgame\cg_view.cpp(1386,1): error: use of undeclared identifier '$1'
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1

### failure context

- build\windows-x64-debug\client\obj\splines\math_angles.cpp.obj

```
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
Compiling 'src\splines\math_vector.cpp'
scons: *** [build\windows-x64-debug\client\obj\splines\math_angles.cpp.obj] Error 1
```

- build\windows-x64-debug\client\obj\splines\math_matrix.cpp.obj

```
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
Compiling 'src\splines\math_vector.cpp'
scons: *** [build\windows-x64-debug\client\obj\splines\math_angles.cpp.obj] Error 1
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
Compiling 'src\splines\q_shared.cpp'
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
scons: *** [build\windows-x64-debug\client\obj\splines\q_parse.cpp.obj] Error 1
```

- build\windows-x64-debug\client\obj\splines\q_shared.cpp.obj

```
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x64-debug\client\obj\splines\math_matrix.cpp.obj] Error 1
Compiling 'src\splines\q_shared.cpp'
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
scons: *** [build\windows-x64-debug\client\obj\splines\q_parse.cpp.obj] Error 1
2 errors generated.
Compiling 'src\games\botlib\be_ai_char.cpp'
scons: *** [build\windows-x64-debug\client\obj\splines\q_shared.cpp.obj] Error 1
```

- build\windows-x64-debug\client\obj\splines\splines.cpp.obj

```
      |                     ^~
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
20 errors generated.
scons: *** [build\windows-x64-debug\client\obj\splines\splines.cpp.obj] Error 1
```

- build\windows-x64-debug\cgame\obj\games\cgame\cg_view.cpp.obj

```
Compiling 'src\games\cgame\cg_predict.cpp'
Compiling 'src\games\cgame\cg_scoreboard.cpp'
Compiling 'src\games\cgame\cg_servercmds.cpp'
Compiling 'src\games\cgame\cg_snapshot.cpp'
Compiling 'src\games\cgame\cg_sound.cpp'
src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  948 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  960 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  972 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
3 warnings generated.
Compiling 'src\games\cgame\cg_syscalls.cpp'
Compiling 'src\games\cgame\cg_view.cpp'
Compiling 'src\games\cgame\cg_weapons.cpp'
Compiling 'src\games\cgame\fx\FxPrimitives.cpp'
Compiling 'src\games\cgame\fx\FxScheduler.cpp'
src\games\cgame\cg_view.cpp(874,1): error: use of undeclared identifier '$1'
  874 | $1// fully zoomed out; keep the current fov_x
      | ^~
src\games\cgame\cg_view.cpp(1386,1): error: use of undeclared identifier '$1'
 1386 | $1// fully zoomed out; keep the current fov_x
      | ^~
2 errors generated.
src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1005 |         if ( ( !comppath || !cg_drawFPGun.integer ) &&     // then if it didn't find the 1st person one or you are set to not use one
      |                ~^~~~~~~~
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1
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
- [3x] -tautological-constant-out-of-range-compare
  - src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]

## windows-latest-x64-release-

status: failure

errors: 28
warnings: 16 in 3 kinds

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
src\games\cgame\cg_view.cpp(874,1): error: use of undeclared identifier '$1'
src\games\cgame\cg_view.cpp(1386,1): error: use of undeclared identifier '$1'
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\splines\math_angles.cpp.obj

```
Compiling 'src\renderer\tr_shade_calc.cpp'
Compiling 'src\renderer\tr_shader.cpp'
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
Compiling 'src\splines\splines.cpp'
scons: *** [build\windows-x64-release\client\obj\splines\q_parse.cpp.obj] Error 1
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
fatal error: too many errors emitted, stopping now [-ferror-limit=]
1 warning and 20 errors generated.
Compiling 'src\games\botlib\be_interface.cpp'
scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\cgame\cg_view.cpp.obj

```
Compiling 'src\games\cgame\cg_playerstate.cpp'
Compiling 'src\games\cgame\cg_predict.cpp'
Compiling 'src\games\cgame\cg_scoreboard.cpp'
Compiling 'src\games\cgame\cg_servercmds.cpp'
Compiling 'src\games\cgame\cg_snapshot.cpp'
Compiling 'src\games\cgame\cg_sound.cpp'
src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  948 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  960 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  972 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
Compiling 'src\games\cgame\cg_syscalls.cpp'
Compiling 'src\games\cgame\cg_view.cpp'
Compiling 'src\games\cgame\cg_weapons.cpp'
3 warnings generated.
Compiling 'src\games\cgame\fx\FxPrimitives.cpp'
src\games\cgame\cg_view.cpp(874,1): error: use of undeclared identifier '$1'
  874 | $1// fully zoomed out; keep the current fov_x
      | ^~
src\games\cgame\cg_view.cpp(1386,1): error: use of undeclared identifier '$1'
 1386 | $1// fully zoomed out; keep the current fov_x
      | ^~
2 errors generated.
src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1005 |         if ( ( !comppath || !cg_drawFPGun.integer ) &&     // then if it didn't find the 1st person one or you are set to not use one
      |                ~^~~~~~~~
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1
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
- [3x] -tautological-constant-out-of-range-compare
  - src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]

## windows-latest-x64-release-cgame

status: failure

errors: 28
warnings: 16 in 3 kinds

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
src\games\cgame\cg_view.cpp(874,1): error: use of undeclared identifier '$1'
src\games\cgame\cg_view.cpp(1386,1): error: use of undeclared identifier '$1'
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\splines\math_angles.cpp.obj

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
Compiling 'src\sys\win32\win_main.cpp'
Compiling 'src\sys\win32\win_net.cpp'
Compiling 'src\sys\win32\win_qgl.cpp'
Compiling 'src\sys\win32\win_shared.cpp'
Compiling 'src\sys\win32\win_snd.cpp'
Compiling 'src\sys\win32\win_syscon.cpp'
Compiling 'src\sys\win32\win_wndproc.cpp'
Compiling 'src\splines\math_angles.cpp'
Compiling 'src\splines\math_matrix.cpp'
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
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\q_parse.cpp.obj

```
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
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
Compiling 'src\splines\math_quaternion.cpp'
Compiling 'src\splines\math_vector.cpp'
Compiling 'src\splines\q_parse.cpp'
Compiling 'src\splines\q_shared.cpp'
Compiling 'src\splines\splines.cpp'
Compiling 'src\splines\util_str.cpp'
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
scons: *** [build\windows-x64-release\client\obj\splines\math_angles.cpp.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
Compiling 'src\splines\math_quaternion.cpp'
Compiling 'src\splines\math_vector.cpp'
Compiling 'src\splines\q_parse.cpp'
Compiling 'src\splines\q_shared.cpp'
Compiling 'src\splines\splines.cpp'
Compiling 'src\splines\util_str.cpp'
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

- build\windows-x64-release\cgame\obj\games\cgame\cg_view.cpp.obj

```
Compiling 'src\games\cgame\cg_playerstate.cpp'
Compiling 'src\games\cgame\cg_predict.cpp'
Compiling 'src\games\cgame\cg_scoreboard.cpp'
Compiling 'src\games\cgame\cg_servercmds.cpp'
Compiling 'src\games\cgame\cg_snapshot.cpp'
src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  948 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  960 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  972 |                 if ( text && strlen( text ) ) {
Compiling 'src\games\cgame\cg_sound.cpp'
      |                      ^~~~ ~~
3 warnings generated.
Compiling 'src\games\cgame\cg_syscalls.cpp'
Compiling 'src\games\cgame\cg_view.cpp'
Compiling 'src\games\cgame\cg_weapons.cpp'
Compiling 'src\games\cgame\fx\FxPrimitives.cpp'
src\games\cgame\cg_view.cpp(874,1): error: use of undeclared identifier '$1'
  874 | $1// fully zoomed out; keep the current fov_x
      | ^~
src\games\cgame\cg_view.cpp(1386,1): error: use of undeclared identifier '$1'
 1386 | $1// fully zoomed out; keep the current fov_x
      | ^~
2 errors generated.
src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1005 |         if ( ( !comppath || !cg_drawFPGun.integer ) &&     // then if it didn't find the 1st person one or you are set to not use one
      |                ~^~~~~~~~
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1
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
- [3x] -tautological-constant-out-of-range-compare
  - src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]

## windows-latest-x64-release-game

status: failure

errors: 28
warnings: 16 in 3 kinds

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
src\games\cgame\cg_view.cpp(874,1): error: use of undeclared identifier '$1'
src\games\cgame\cg_view.cpp(1386,1): error: use of undeclared identifier '$1'
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\splines\math_angles.cpp.obj

```
Compiling 'src\renderer\tr_shade_calc.cpp'
Compiling 'src\renderer\tr_shader.cpp'
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
scons: *** [build\windows-x64-release\client\obj\splines\q_shared.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\splines.cpp.obj

```
  856 |                 cameraPosition->write( file, va( "camera_%s",cameraPosition->typeStr() ) );
      |                                              ^~
Compiling 'src\games\botlib\be_ai_weap.cpp'
src\splines\splines.cpp(859,37): error: use of undeclared identifier 'va'
  859 |                         targetPositions[i]->write( file, va( "target_%s", targetPositions[i]->typeStr() ) );
      |                                                          ^~
src\splines\splines.cpp(960,12): error: use of undeclared identifier 'va'
  960 |         idStr s = va( "\t%s {\n", name );
      |                   ^~
Compiling 'src\games\botlib\be_ai_weight.cpp'
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

- build\windows-x64-release\cgame\obj\games\cgame\cg_view.cpp.obj

```
Compiling 'src\games\cgame\cg_main.cpp'
Compiling 'src\games\cgame\cg_newDraw.cpp'
Compiling 'src\games\cgame\cg_players.cpp'
Compiling 'src\games\cgame\cg_playerstate.cpp'
Compiling 'src\games\cgame\cg_predict.cpp'
Compiling 'src\games\cgame\cg_scoreboard.cpp'
Compiling 'src\games\cgame\cg_servercmds.cpp'
Compiling 'src\games\cgame\cg_snapshot.cpp'
Compiling 'src\games\cgame\cg_sound.cpp'
src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  948 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  960 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  972 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
Compiling 'src\games\cgame\cg_syscalls.cpp'
3 warnings generated.
Compiling 'src\games\cgame\cg_view.cpp'
Compiling 'src\games\cgame\cg_weapons.cpp'
Compiling 'src\games\cgame\fx\FxPrimitives.cpp'
src\games\cgame\cg_view.cpp(874,1): error: use of undeclared identifier '$1'
  874 | $1// fully zoomed out; keep the current fov_x
      | ^~
src\games\cgame\cg_view.cpp(1386,1): error: use of undeclared identifier '$1'
 1386 | $1// fully zoomed out; keep the current fov_x
      | ^~
2 errors generated.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1
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
- [3x] -tautological-constant-out-of-range-compare
  - src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]

## windows-latest-x64-release-ui

status: failure

errors: 28
warnings: 16 in 3 kinds

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
src\games\cgame\cg_view.cpp(874,1): error: use of undeclared identifier '$1'
src\games\cgame\cg_view.cpp(1386,1): error: use of undeclared identifier '$1'
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\splines\math_angles.cpp.obj

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
scons: *** [build\windows-x64-release\client\obj\splines\math_angles.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj

```
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
In file included from src\splines\math_matrix.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
Compiling 'src\splines\math_vector.cpp'
2 errors generated.
Compiling 'src\splines\q_parse.cpp'
scons: *** [build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\q_parse.cpp.obj

```
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
Compiling 'src\splines\math_vector.cpp'
2 errors generated.
Compiling 'src\splines\q_parse.cpp'
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
In file included from src\splines\q_shared.cpp:30:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
2 errors generated.
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
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
Compiling 'src\splines\math_vector.cpp'
2 errors generated.
Compiling 'src\splines\q_parse.cpp'
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
In file included from src\splines\q_shared.cpp:30:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
2 errors generated.
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\splines\q_parse.cpp.obj] Error 1
Compiling 'src\splines\splines.cpp'
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

- build\windows-x64-release\cgame\obj\games\cgame\cg_view.cpp.obj

```
Compiling 'src\games\cgame\cg_main.cpp'
Compiling 'src\games\cgame\cg_newDraw.cpp'
Compiling 'src\games\cgame\cg_players.cpp'
Compiling 'src\games\cgame\cg_playerstate.cpp'
Compiling 'src\games\cgame\cg_predict.cpp'
Compiling 'src\games\cgame\cg_scoreboard.cpp'
Compiling 'src\games\cgame\cg_servercmds.cpp'
Compiling 'src\games\cgame\cg_snapshot.cpp'
Compiling 'src\games\cgame\cg_sound.cpp'
src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  948 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  960 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  972 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
3 warnings generated.
Compiling 'src\games\cgame\cg_syscalls.cpp'
Compiling 'src\games\cgame\cg_view.cpp'
Compiling 'src\games\cgame\cg_weapons.cpp'
Compiling 'src\games\cgame\fx\FxPrimitives.cpp'
src\games\cgame\cg_view.cpp(874,1): error: use of undeclared identifier '$1'
  874 | $1// fully zoomed out; keep the current fov_x
      | ^~
src\games\cgame\cg_view.cpp(1386,1): error: use of undeclared identifier '$1'
 1386 | $1// fully zoomed out; keep the current fov_x
      | ^~
2 errors generated.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1
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
- [3x] -tautological-constant-out-of-range-compare
  - src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]

## windows-latest-x86-debug-

status: failure

errors: 37
warnings: 16 in 3 kinds

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
src\games\cgame\cg_view.cpp(874,1): error: use of undeclared identifier '$1'
src\games\cgame\cg_view.cpp(1386,1): error: use of undeclared identifier '$1'
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\ui\obj\qcommon\q_math.cpp.obj] Error 1

### failure context

- build\windows-x86-debug\client\obj\client\snd_mix.cpp.obj

```
Compiling 'src\client\cl_parse.cpp'
Compiling 'src\client\cl_scrn.cpp'
Compiling 'src\client\cl_ui.cpp'
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
Compiling 'src\client\snd_wavelet.cpp'
3 warnings generated.
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
Compiling 'src\renderer\tr_flares.cpp'
Compiling 'src\renderer\tr_font.cpp'
Compiling 'src\renderer\tr_image.cpp'
Compiling 'src\renderer\tr_init.cpp'
Compiling 'src\renderer\tr_light.cpp'
Compiling 'src\renderer\tr_main.cpp'
Compiling 'src\renderer\tr_marks.cpp'
Compiling 'src\renderer\tr_mesh.cpp'
Compiling 'src\renderer\tr_cmesh.cpp'
Compiling 'src\renderer\tr_model.cpp'
Compiling 'src\renderer\tr_noise.cpp'
Compiling 'src\renderer\tr_renderprog.cpp'
Compiling 'src\renderer\tr_scene.cpp'
Compiling 'src\renderer\tr_shade.cpp'
Compiling 'src\renderer\tr_shade_calc.cpp'
Compiling 'src\renderer\tr_shader.cpp'
Compiling 'src\renderer\tr_shadows.cpp'
Compiling 'src\renderer\tr_sky.cpp'
Compiling 'src\renderer\tr_surface.cpp'
Compiling 'src\renderer\tr_vfx.cpp'
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
scons: *** [build\windows-x86-debug\client\obj\qcommon\q_math.cpp.obj] Error 1
```

- build\windows-x86-debug\client\obj\splines\math_matrix.cpp.obj

```
Compiling 'src\sys\win32\win_main.cpp'
1 warning generated.
Compiling 'src\sys\win32\win_net.cpp'
Compiling 'src\sys\win32\win_qgl.cpp'
Compiling 'src\sys\win32\win_shared.cpp'
Compiling 'src\sys\win32\win_snd.cpp'
Compiling 'src\sys\win32\win_syscon.cpp'
Compiling 'src\sys\win32\win_wndproc.cpp'
Compiling 'src\splines\math_angles.cpp'
Compiling 'src\splines\math_matrix.cpp'
In file included from src\splines\math_angles.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
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
2 errors generated.
scons: *** [build\windows-x86-debug\client\obj\splines\math_matrix.cpp.obj] Error 1
```

- build\windows-x86-debug\client\obj\splines\math_angles.cpp.obj

```
1 warning generated.
Compiling 'src\sys\win32\win_net.cpp'
Compiling 'src\sys\win32\win_qgl.cpp'
Compiling 'src\sys\win32\win_shared.cpp'
Compiling 'src\sys\win32\win_snd.cpp'
Compiling 'src\sys\win32\win_syscon.cpp'
Compiling 'src\sys\win32\win_wndproc.cpp'
Compiling 'src\splines\math_angles.cpp'
Compiling 'src\splines\math_matrix.cpp'
In file included from src\splines\math_angles.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
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
2 errors generated.
scons: *** [build\windows-x86-debug\client\obj\splines\math_matrix.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\splines\math_angles.cpp.obj] Error 1
```

- build\windows-x86-debug\client\obj\splines\q_parse.cpp.obj

```
      |               ;
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
2 errors generated.
scons: *** [build\windows-x86-debug\client\obj\splines\math_matrix.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\splines\math_angles.cpp.obj] Error 1
Compiling 'src\splines\math_quaternion.cpp'
Compiling 'src\splines\math_vector.cpp'
Compiling 'src\splines\q_parse.cpp'
Compiling 'src\splines\q_shared.cpp'
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
Compiling 'src\splines\util_str.cpp'
scons: *** [build\windows-x86-debug\client\obj\splines\q_parse.cpp.obj] Error 1
```

- build\windows-x86-debug\client\obj\splines\q_shared.cpp.obj

```
scons: *** [build\windows-x86-debug\client\obj\splines\math_matrix.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\splines\math_angles.cpp.obj] Error 1
Compiling 'src\splines\math_quaternion.cpp'
Compiling 'src\splines\math_vector.cpp'
Compiling 'src\splines\q_parse.cpp'
Compiling 'src\splines\q_shared.cpp'
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
Compiling 'src\splines\util_str.cpp'
scons: *** [build\windows-x86-debug\client\obj\splines\q_parse.cpp.obj] Error 1
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
scons: *** [build\windows-x86-debug\client\obj\splines\q_shared.cpp.obj] Error 1
```

- build\windows-x86-debug\client\obj\splines\splines.cpp.obj

```
src\splines\splines.cpp(856,32): error: use of undeclared identifier 'va'
  856 |                 cameraPosition->write( file, va( "camera_%s",cameraPosition->typeStr() ) );
      |                                              ^~
Compiling 'src\games\botlib\l_libvar.cpp'
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
20 errors generated.
scons: *** [build\windows-x86-debug\client\obj\splines\splines.cpp.obj] Error 1
```

- build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj

```
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
Compiling 'src\games\game\bg_misc.cpp'
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
  745 |         static int bops_initialized;
      |         ^
src\qcommon\q_math.cpp(744,13): note: attribute is here
  744 | __declspec( naked ) int BoxOnPlaneSide( vec3_t emins, vec3_t emaxs, struct cplane_s *p ) {
      |             ^
1 error generated.
scons: *** [build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj] Error 1
```

- build\windows-x86-debug\cgame\obj\games\cgame\cg_view.cpp.obj

```
Compiling 'src\games\cgame\cg_main.cpp'
Compiling 'src\games\cgame\cg_newDraw.cpp'
Compiling 'src\games\cgame\cg_players.cpp'
Compiling 'src\games\cgame\cg_playerstate.cpp'
Compiling 'src\games\cgame\cg_predict.cpp'
Compiling 'src\games\cgame\cg_scoreboard.cpp'
Compiling 'src\games\cgame\cg_servercmds.cpp'
Compiling 'src\games\cgame\cg_snapshot.cpp'
Compiling 'src\games\cgame\cg_sound.cpp'
src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  948 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  960 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  972 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
3 warnings generated.
Compiling 'src\games\cgame\cg_syscalls.cpp'
Compiling 'src\games\cgame\cg_view.cpp'
Compiling 'src\games\cgame\cg_weapons.cpp'
Compiling 'src\games\cgame\fx\FxPrimitives.cpp'
src\games\cgame\cg_view.cpp(874,1): error: use of undeclared identifier '$1'
  874 | $1// fully zoomed out; keep the current fov_x
      | ^~
src\games\cgame\cg_view.cpp(1386,1): error: use of undeclared identifier '$1'
 1386 | $1// fully zoomed out; keep the current fov_x
      | ^~
2 errors generated.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1
```

- build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\games\cgame\cg_syscalls.cpp'
Compiling 'src\games\cgame\cg_view.cpp'
Compiling 'src\games\cgame\cg_weapons.cpp'
Compiling 'src\games\cgame\fx\FxPrimitives.cpp'
src\games\cgame\cg_view.cpp(874,1): error: use of undeclared identifier '$1'
  874 | $1// fully zoomed out; keep the current fov_x
      | ^~
src\games\cgame\cg_view.cpp(1386,1): error: use of undeclared identifier '$1'
 1386 | $1// fully zoomed out; keep the current fov_x
      | ^~
2 errors generated.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1
Compiling 'src\games\cgame\fx\FxScheduler.cpp'
Compiling 'src\games\cgame\fx\FxSystem.cpp'
src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1005 |         if ( ( !comppath || !cg_drawFPGun.integer ) &&     // then if it didn't find the 1st person one or you are set to not use one
      |                ~^~~~~~~~
1 warning generated.
Compiling 'src\games\cgame\fx\FxTemplate.cpp'
Compiling 'src\games\cgame\fx\FxUtil.cpp'
Compiling 'src\games\cgame\fx\genericparser2.cpp'
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
- [3x] -tautological-constant-out-of-range-compare
  - src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [1x] -cast-calling-convention
  - src\sys\win32\win_glimp.cpp(1541,3): warning: cast between incompatible calling conventions 'cdecl' and 'stdcall'; calls through this pointer may abort at runtime [-Wcast-calling-convention]

## windows-latest-x86-release-

status: cancelled

errors: 37
warnings: 17 in 4 kinds

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
scons: *** [build\windows-x86-release\client\obj\splines\q_shared.cpp.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\splines\q_parse.cpp.obj] Error 1
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
src\games\cgame\cg_view.cpp(874,1): error: use of undeclared identifier '$1'
src\games\cgame\cg_view.cpp(1386,1): error: use of undeclared identifier '$1'
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj] Error 1
scons: *** [build\windows-x86-release\ui\obj\qcommon\q_math.cpp.obj] Error 1

### failure context

- build\windows-x86-release\client\obj\client\snd_mix.cpp.obj

```
Compiling 'src\client\cl_main.cpp'
Compiling 'src\client\cl_net_chan.cpp'
Compiling 'src\client\cl_parse.cpp'
Compiling 'src\client\cl_scrn.cpp'
Compiling 'src\client\cl_ui.cpp'
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
Compiling 'src\client\snd_wavelet.cpp'
Compiling 'src\qcommon\cm_load.cpp'
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
scons: *** [build\windows-x86-release\client\obj\client\snd_mix.cpp.obj] Error 1
```

- build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\renderer\tr_flares.cpp'
Compiling 'src\renderer\tr_font.cpp'
Compiling 'src\renderer\tr_image.cpp'
Compiling 'src\renderer\tr_init.cpp'
Compiling 'src\renderer\tr_light.cpp'
Compiling 'src\renderer\tr_main.cpp'
Compiling 'src\renderer\tr_marks.cpp'
Compiling 'src\renderer\tr_mesh.cpp'
Compiling 'src\renderer\tr_cmesh.cpp'
Compiling 'src\renderer\tr_model.cpp'
Compiling 'src\renderer\tr_noise.cpp'
Compiling 'src\renderer\tr_renderprog.cpp'
Compiling 'src\renderer\tr_scene.cpp'
Compiling 'src\renderer\tr_shade.cpp'
Compiling 'src\renderer\tr_shade_calc.cpp'
Compiling 'src\renderer\tr_shader.cpp'
Compiling 'src\renderer\tr_shadows.cpp'
Compiling 'src\renderer\tr_sky.cpp'
Compiling 'src\renderer\tr_surface.cpp'
Compiling 'src\renderer\tr_vfx.cpp'
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
In file included from src\splines\math_matrix.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
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
In file included from src\splines\math_matrix.cpp:29:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
scons: *** [build\windows-x86-release\client\obj\splines\math_angles.cpp.obj] Error 1
2 errors generated.
Compiling 'src\splines\math_vector.cpp'
scons: *** [build\windows-x86-release\client\obj\splines\math_matrix.cpp.obj] Error 1
```

- build\windows-x86-release\client\obj\splines\q_shared.cpp.obj

```
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
scons: *** [build\windows-x86-release\client\obj\splines\math_angles.cpp.obj] Error 1
2 errors generated.
Compiling 'src\splines\math_vector.cpp'
scons: *** [build\windows-x86-release\client\obj\splines\math_matrix.cpp.obj] Error 1
Compiling 'src\splines\q_parse.cpp'
Compiling 'src\splines\q_shared.cpp'
In file included from src\splines\q_shared.cpp:30:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
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
2 errors generated.
scons: *** [build\windows-x86-release\client\obj\splines\q_shared.cpp.obj] Error 1
```

- build\windows-x86-release\client\obj\splines\q_parse.cpp.obj

```
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
scons: *** [build\windows-x86-release\client\obj\splines\math_angles.cpp.obj] Error 1
2 errors generated.
Compiling 'src\splines\math_vector.cpp'
scons: *** [build\windows-x86-release\client\obj\splines\math_matrix.cpp.obj] Error 1
Compiling 'src\splines\q_parse.cpp'
Compiling 'src\splines\q_shared.cpp'
In file included from src\splines\q_shared.cpp:30:
src\splines\q_splineshared.h(533,1): error: unknown type name 'char$1'; did you mean 'char'?
  533 | char$1*$2QDECL va( const char *format, ... );
      | ^~~~~~
      | char
src\splines\q_splineshared.h(533,15): error: expected ';' after top level declarator
  533 | char$1*$2QDECL va( const char *format, ... );
      |               ^
      |               ;
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
2 errors generated.
scons: *** [build\windows-x86-release\client\obj\splines\q_shared.cpp.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\splines\q_parse.cpp.obj] Error 1
```

- build\windows-x86-release\client\obj\splines\splines.cpp.obj

```
src\splines\splines.cpp(856,32): error: use of undeclared identifier 'va'
  856 |                 cameraPosition->write( file, va( "camera_%s",cameraPosition->typeStr() ) );
      |                                              ^~
src\splines\splines.cpp(859,37): error: use of undeclared identifier 'va'
  859 |                         targetPositions[i]->write( file, va( "target_%s", targetPositions[i]->typeStr() ) );
      |                                                          ^~
Compiling 'src\games\botlib\be_interface.cpp'
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
scons: *** [build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj] Error 1
```

- build\windows-x86-release\cgame\obj\games\cgame\cg_view.cpp.obj

```
Compiling 'src\games\cgame\cg_main.cpp'
Compiling 'src\games\cgame\cg_newDraw.cpp'
Compiling 'src\games\cgame\cg_players.cpp'
Compiling 'src\games\cgame\cg_playerstate.cpp'
Compiling 'src\games\cgame\cg_predict.cpp'
Compiling 'src\games\cgame\cg_scoreboard.cpp'
Compiling 'src\games\cgame\cg_servercmds.cpp'
Compiling 'src\games\cgame\cg_snapshot.cpp'
Compiling 'src\games\cgame\cg_sound.cpp'
src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  948 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  960 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  972 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
3 warnings generated.
Compiling 'src\games\cgame\cg_syscalls.cpp'
Compiling 'src\games\cgame\cg_view.cpp'
Compiling 'src\games\cgame\cg_weapons.cpp'
Compiling 'src\games\cgame\fx\FxPrimitives.cpp'
src\games\cgame\cg_view.cpp(874,1): error: use of undeclared identifier '$1'
  874 | $1// fully zoomed out; keep the current fov_x
      | ^~
src\games\cgame\cg_view.cpp(1386,1): error: use of undeclared identifier '$1'
 1386 | $1// fully zoomed out; keep the current fov_x
      | ^~
2 errors generated.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1
```

- build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\games\cgame\cg_weapons.cpp'
Compiling 'src\games\cgame\fx\FxPrimitives.cpp'
src\games\cgame\cg_view.cpp(874,1): error: use of undeclared identifier '$1'
  874 | $1// fully zoomed out; keep the current fov_x
      | ^~
src\games\cgame\cg_view.cpp(1386,1): error: use of undeclared identifier '$1'
 1386 | $1// fully zoomed out; keep the current fov_x
      | ^~
2 errors generated.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_view.cpp.obj] Error 1
Compiling 'src\games\cgame\fx\FxScheduler.cpp'
Compiling 'src\games\cgame\fx\FxSystem.cpp'
src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1005 |         if ( ( !comppath || !cg_drawFPGun.integer ) &&     // then if it didn't find the 1st person one or you are set to not use one
      |                ~^~~~~~~~
1 warning generated.
Compiling 'src\games\cgame\fx\FxTemplate.cpp'
Compiling 'src\games\cgame\fx\FxUtil.cpp'
Compiling 'src\games\cgame\fx\genericparser2.cpp'
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
- [3x] -tautological-constant-out-of-range-compare
  - src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [1x] -cast-calling-convention
  - src\sys\win32\win_glimp.cpp(1541,3): warning: cast between incompatible calling conventions 'cdecl' and 'stdcall'; calls through this pointer may abort at runtime [-Wcast-calling-convention]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]

