# Build digest

commit: 85c30b7e368b

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

errors: 4
warnings: 579 in 22 kinds

### errors

/home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_cgame.c:735:(.text+0x21fb): undefined reference to `Sys_SnapVector'
/home/runner/work/RTCW-SP/RTCW-SP/src/server/sv_game.c:465:(.text+0x11b6): undefined reference to `Sys_SnapVector'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [build/linux-x64-debug/WolfSP] Error 1

### failure context

- build/linux-x64-debug/WolfSP

```
src/games/game/ai_cast_funcs.c:2179:19: warning: variable 'shouldAttack' set but not used [-Wunused-but-set-variable]
 2179 |                 int numEnemies, shouldAttack;
      |                                 ^
src/games/game/ai_cast_funcs.c:2108:27: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
 2108 |         gentity_t   *followent, *ent;
      |                                  ^
src/games/game/ai_cast_funcs.c:2109:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
 2109 |         bot_state_t *bs;
      |                      ^
src/games/game/ai_cast_funcs.c:2115:16: warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
 2115 |         cast_state_t *ocs;
      |                       ^
src/games/game/ai_cast_funcs.c:2116:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
 2116 |         int     *ammo, i;
      |                  ^
src/games/game/ai_cast_funcs.c:2560:11: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
 2560 |                                         if ( abs( AngleDelta( cs->idleYaw, cs->ideal_viewangles[YAW] ) ) < 45 ) {
      |                                              ^
src/games/game/ai_cast_funcs.c:2560:11: note: use function 'fabsf' instead
 2560 |                                         if ( abs( AngleDelta( cs->idleYaw, cs->ideal_viewangles[YAW] ) ) < 45 ) {
      |                                              ^~~
      |                                              fabsf
src/games/game/ai_cast_funcs.c:2323:14: warning: variable 'moveDist' set but not used [-Wunused-but-set-variable]
 2323 |         float dist, moveDist;
      |                     ^
src/games/game/ai_cast_funcs.c:2327:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
 2327 |         int     *ammo;
      |                  ^
clang -o build/linux-x64-debug/game/obj/games/game/ai_cast_script_ents.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -fPIC -fPIC -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc/third-party/jpeg-6 src/games/game/ai_cast_script_ents.c
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [build/linux-x64-debug/WolfSP] Error 1
```


### warning kinds

- [223x] -pointer-to-int-cast
  - src/renderer/tr_bsp.c:379:14: warning: cast to smaller integer type 'int' from 'float (*)[8]' [-Wpointer-to-int-cast]
  - src/renderer/tr_init.c:1177:7: warning: cast to smaller integer type 'int' from 'vec4_t *' (aka 'float (*)[4]') [-Wpointer-to-int-cast]
  - src/client/cl_cgame.c:701:10: warning: cast to smaller integer type 'int' from 'char *' [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1105:39: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1105:68: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1106:41: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1106:110: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_ui.c:1092:10: warning: cast to smaller integer type 'int' from 'char *' [-Wpointer-to-int-cast]
  - src/qcommon/cm_polylib.c:280:9: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/common.c:1098:29: warning: cast to smaller integer type 'int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:948:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:949:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:950:4: warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:951:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:952:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:953:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:954:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:955:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:956:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:957:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:958:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:959:4: warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:960:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:961:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:962:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:963:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:964:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:965:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:966:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:967:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
- [203x] -unused-but-set-variable
  - src/renderer/tr_bsp.c:147:9: warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_flares.c:128:23: warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_font.c:351:8: warning: variable 'glyphScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:2203:8: warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3445:8: warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3603:20: warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_main.c:1181:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.c:1883:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:6: warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:15: warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:1067:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - 452 |         {"BLOQ_MAY<DA>S", Ksrc/client/cl_input.c_:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:185:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2745:10: warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2849:18: warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - 590 |         msg_t msgbsrc/client/cl_main.c:3548:12: warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3549:6: warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3550:6: warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
  - src/client/cl_scrn.c:386:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/client/cl_ui.c:1195:16: warning: variable 'interpret' set but not used [-Wunused-but-set-variable]
  - src/client/snd_dma.c:558:8: warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src/client/snd_mix.c:793:10: warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.c:738:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.c:824:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
- [34x] -pointer-sign
  - src/renderer/tr_animation.c:1249:11: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/renderer/tr_animation.c:1376:13: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/sys/unix/unix_net.c:179:38: warning: passing 'int *' to parameter of type 'socklen_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1104:11: warning: assigning to 'const char *' from 'const GLubyte *' (aka 'const unsigned char *') converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1397:38: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1398:40: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1402:39: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1403:42: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:387:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:403:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1940:14: warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1955:20: warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:466:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1986:8: warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:508:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:518:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:526:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:542:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_info.c:79:14: warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1719:23: warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1721:5: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1723:9: warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1755:23: warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1758:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1762:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1764:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1766:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1769:9: warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1803:24: warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [30x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings
  - src/splines/splines.cpp:483:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:487:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:491:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:564:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:568:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:577:38: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:580:25: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:865:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:868:36: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:871:41: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:972:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:974:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:976:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:978:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1256:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1259:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1262:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1265:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1268:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1278:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1281:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1284:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1287:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1291:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1298:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1301:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1308:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1311:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1313:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1320:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
- [29x] -absolute-value
  - src/client/cl_cin.c:1518:43: warning: taking the absolute value of unsigned type 'unsigned int' has no effect [-Wabsolute-value]
  - src/client/cl_input.c:660:20: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - 595 |         {src/client/cl_input.c":P663A:G20G: Iwarning: <D9>using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_move.c:164:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2353:25: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2354:25: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2364:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2491:11: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_ai_move.c:2154:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/l_precomp.c:2436:31: warning: absolute value function 'abs' given an argument of type 'long' but has parameter of type 'int' which may cause truncation of value [-Wabsolute-value]
  - src/games/botlib/l_precomp.c:2542:31: warning: absolute value function 'abs' given an argument of type 'long' but has parameter of type 'int' which may cause truncation of value [-Wabsolute-value]
  - src/games/game/ai_cast_funcs.c:597:10: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_funcs.c:893:9: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_funcs.c:2560:11: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_script_actions.csrc/games/game/ai_cast_funcs.c:167:16: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_script_actions.c:352:16: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_script_actions.c:1658:10: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botai/ai_main.c:361:10: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botai/ai_main.c:450:17: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/cgame/cg_flamethrower.c:1344:13: warning: using floating point absolute value function 'fabs' when argument is of integer type [-Wabsolute-value]
  - src/games/cgame/cg_weapons.c:1805:22: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/ui/ui_shared.c:1365:34: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/ui/ui_shared.c:1366:34: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/ui/ui_shared.c:1367:34: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/ui/ui_shared.c:1368:34: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
- [18x] -invalid-source-encoding
  - src/client/cl_keys.c:197:5: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:450:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:452:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:469:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:470:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:474:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:475:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:476:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:477:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:478:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:535:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:541:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - 660 |                         SCR_DebugGraph( abs( cl.viewangles[YAW] - oldAngsrc/client/cl_keys.cle:s570[:Y13A:W ]warning:  illegal character encoding in string literal [-Winvalid-source-encoding])
  - src/client/cl_keys.c:595:9: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - _DebugGraph( abs( cl.visrc/client/cl_keys.cew:a607n:g13le:s [warning: Pillegal character encoding in string literal [-Winvalid-source-encoding]I
  - src/client/cl_keys.c:666:16: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - :12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:680:4: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [10x] -pointer-bool-conversion
  - src/client/snd_dma.c:1857:19: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.c:2171:11: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.c:2487:15: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/game/ai_cast_script_actions.c:1443:45: warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.c:950:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.c:962:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.c:974:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_weapons.c:1142:10: warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.c:1483:7: warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.c:1541:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [7x] -int-to-pointer-cast
  - src/qcommon/common.c:1098:15: warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src/server/sv_client.c:416:11: warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src/games/game/g_main.c:324:41: warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src/games/game/g_main.c:327:32: warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src/games/game/g_main.c:327:46: warning: cast to 'animModelInfo_t **' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src/games/cgame/cg_main.c:65:27: warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src/games/cgame/cg_main.c:65:41: warning: cast to 'orientation_t *' from smaller integer type 'int' [-Wint-to-pointer-cast]
- [4x] -void-pointer-to-int-cast
  - src/client/cl_cgame.c:697:10: warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src/client/cl_cgame.c:699:10: warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src/client/cl_ui.c:1086:10: warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src/client/cl_ui.c:1089:10: warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
- [4x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:107:18: warning: unused variable 'numTeamArenaGameNames' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:119:18: warning: unused variable 'numSortKeys' [-Wunused-const-variable]
- [2x] -array-bounds
  - src/renderer/tr_image.c:3712:59: warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src/renderer/tr_shade_calc.c:679:2: warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src/renderer/tr_shader.c:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src/renderer/tr_shader.c:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -sizeof-pointer-memaccess
  - src/qcommon/cvar.c:764:28: warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
  - src/games/game/ai_cast.c:501:33: warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'struct cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'struct cast_state_s *') [-Wsizeof-pointer-memaccess]
- [2x] -int-to-void-pointer-cast
  - src/qcommon/vm.c:61:9: warning: cast to 'void *' from smaller integer type 'vmptr_t' (aka 'int') [-Wint-to-void-pointer-cast]
  - src/qcommon/vm.c:173:8: warning: cast to 'void *' from smaller integer type 'int' [-Wint-to-void-pointer-cast]
- [2x] -unneeded-internal-declaration
  - src/games/ui/ui_main.c:95:20: warning: variable 'teamArenaGameNames' is not needed and will not be emitted [-Wunneeded-internal-declaration]
  - src/games/ui/ui_main.c:112:20: warning: variable 'sortKeys' is not needed and will not be emitted [-Wunneeded-internal-declaration]
- [1x] -strncat-size
  - src/client/cl_main.c:2837:25: warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src/qcommon/common.c:1800:2: warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] need to modify cg_event.c at "// check the sequencial list" if you change this
  - 995 |         { NETF( eventSequence ), 8 }, // warning: need to modify cg_event.c at "// check the sequencial list" if you change this
- [1x] -parentheses-equality
  - src/qcommon/unzip.c:2066:45: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -format
  - src/qcommon/vm.c:844:54: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]

## ubuntu-latest-x64-release

status: failure

errors: 4
warnings: 581 in 22 kinds

### errors

cl_cgame.c:(.text+0x1206): undefined reference to `Sys_SnapVector'
sv_game.c:(.text+0xa98): undefined reference to `Sys_SnapVector'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [build/linux-x64-release/WolfSP] Error 1

### failure context

- build/linux-x64-release/WolfSP

```
      |                                              fabsf
src/games/game/ai_cast_funcs.c:2323:14: warning: variable 'moveDist' set but not used [-Wunused-but-set-variable]
 2323 |         float dist, moveDist;
      |                     ^
src/games/game/ai_cast_funcs.c:2327:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
 2327 |         int     *ammo;
      |                  ^
src/games/game/ai_cast_funcs.c:3331:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
 3331 |         int     *ammo;
      |                  ^
src/games/game/ai_cast_funcs.c:3700:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
 3700 |         int     *ammo;
      |                  ^
src/games/game/ai_cast_funcs.c:4355:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
 4355 |         int     *ammo;
      |                  ^
src/games/game/ai_cast_funcs.c:4361:6: warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
 4361 |         int weapon;
      |             ^
src/games/game/ai_cast_funcs.c/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/client/cl_cgame.c.o: in function `CL_CgameSystemCalls':
cl_cgame.c:(.text+0x1206): undefined reference to `Sys_SnapVector'
:4663:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
 4663 |         gentity_t *ent;
      |                    ^
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/server/sv_game.c.o: in function `SV_GameSystemCalls':
sv_game.c:(.text+0xa98): undefined reference to `Sys_SnapVector'
src/games/game/ai_cast_funcs.c:4714:6: warning: variable 'tfl' set but not used [-Wunused-but-set-variable]
 4714 |         int tfl;
      |             ^
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [build/linux-x64-release/WolfSP] Error 1
```


### warning kinds

- [223x] -pointer-to-int-cast
  - src/renderer/tr_bsp.c:379:14: warning: cast to smaller integer type 'int' from 'float (*)[8]' [-Wpointer-to-int-cast]
  - src/renderer/tr_init.c:1177:7: warning: cast to smaller integer type 'int' from 'vec4_t *' (aka 'float (*)[4]') [-Wpointer-to-int-cast]
  - src/client/cl_cgame.c:701:10: warning: cast to smaller integer type 'int' from 'char *' [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1105:39: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1105:68: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1106:41: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1106:110: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_ui.c:1092:10: warning: cast to smaller integer type 'int' from 'char *' [-Wpointer-to-int-cast]
  - src/qcommon/cm_polylib.c:280:9: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/common.c:1098:29: warning: cast to smaller integer type 'int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:948:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:949:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:950:4: warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:951:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:952:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:953:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:954:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:955:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:956:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:957:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:958:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:959:4: warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:960:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:961:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:962:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:963:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:964:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:965:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:966:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:967:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
- [205x] -unused-but-set-variable
  - src/renderer/tr_bsp.c:147:9: warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_flares.c:128:23: warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_font.c:351:8: warning: variable 'glyphScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:2203:8: warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3445:8: warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3603:20: warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_main.c:1181:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.c:1883:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:6: warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:15: warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_sky.c:717:15: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:1067:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:185:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2745:10: warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2849:18: warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3548:12: warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3549:6: warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3550:6: warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
  - src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src/client/cl_scrn.c:386:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/client/cl_ui.c:1195:16: warning: variable 'interpret' set but not used [-Wunused-but-set-variable]
  - src/client/snd_dma.c:558:8: warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src/client/snd_mix.c:793:10: warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.c:738:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
- [34x] -pointer-sign
  - src/renderer/tr_animation.c:1249:11: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/renderer/tr_animation.c:1376:13: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/sys/unix/unix_net.c:179:38: warning: passing 'int *' to parameter of type 'socklen_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1104:11: warning: assigning to 'const char *' from 'const GLubyte *' (aka 'const unsigned char *') converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1397:38: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1398:40: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1402:39: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1403:42: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1940:14: warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1955:20: warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1986:8: warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:387:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:403:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:450:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:466:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:508:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:518:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:526:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:542:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_info.c:79:14: warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1719:23: warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1721:5: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1723:9: warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1755:23: warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1758:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1762:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1764:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1766:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1769:9: warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1803:24: warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [30x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings
  - src/splines/splines.cpp:483:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:487:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:491:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:564:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:568:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:577:38: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:580:25: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:865:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:868:36: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:871:41: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:972:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:974:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:976:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:978:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1256:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1259:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1262:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1265:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1268:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1278:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1281:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1284:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1287:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1291:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1298:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1301:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1308:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1311:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1313:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1320:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
- [29x] -absolute-value
  - src/client/cl_cin.c:1518:43: warning: taking the absolute value of unsigned type 'unsigned int' has no effect [-Wabsolute-value]
  - src/client/cl_input.c:660:20: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/client/cl_input.c:663:20: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_move.c:164:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2353:25: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2354:25: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2364:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2491:11: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_ai_move.c:2154:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/l_precomp.c:2436:31: warning: absolute value function 'abs' given an argument of type 'long' but has parameter of type 'int' which may cause truncation of value [-Wabsolute-value]
  - src/games/botlib/l_precomp.c:2542:31: warning: absolute value function 'abs' given an argument of type 'long' but has parameter of type 'int' which may cause truncation of value [-Wabsolute-value]
  - src/games/game/ai_cast_funcs.c:597:10: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_funcs.c:893:9: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_funcs.c:2560:11: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_script_actions.c:167:16: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_script_actions.c:352:16: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_script_actions.c:1658:10: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botai/ai_main.c:361:10: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botai/ai_main.c:450:17: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/cgame/cg_flamethrower.c:1344:13: warning: using floating point absolute value function 'fabs' when argument is of integer type [-Wabsolute-value]
  - src/games/cgame/cg_weapons.c:1805:22: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/ui/ui_shared.c:1365:34: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/ui/ui_shared.c:1366:34: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/ui/ui_shared.c:1367:34: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/ui/ui_shared.c:1368:34: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
- [18x] -invalid-source-encoding
  - src/client/cl_keys.c:197:5: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:450:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:452:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:469:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:470:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:474:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:475:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:476:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:477:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:478:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:535:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:541:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:570:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:595:9: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:607:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:666:16: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:667:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:680:4: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [10x] -pointer-bool-conversion
  - src/client/snd_dma.c:1857:19: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.c:2171:11: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.c:2487:15: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/game/ai_cast_script_actions.c:1443:45: warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.c:950:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.c:962:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.c:974:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_weapons.c:1142:10: warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.c:1483:7: warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.c:1541:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [7x] -int-to-pointer-cast
  - src/qcommon/common.c:1098:15: warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src/server/sv_client.c:416:11: warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src/games/game/g_main.c:324:41: warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src/games/game/g_main.c:327:32: warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src/games/game/g_main.c:327:46: warning: cast to 'animModelInfo_t **' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src/games/cgame/cg_main.c:65:27: warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src/games/cgame/cg_main.c:65:41: warning: cast to 'orientation_t *' from smaller integer type 'int' [-Wint-to-pointer-cast]
- [4x] -void-pointer-to-int-cast
  - src/client/cl_cgame.c:697:10: warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src/client/cl_cgame.c:699:10: warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src/client/cl_ui.c:1086:10: warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src/client/cl_ui.c:1089:10: warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
- [4x] -unused-const-variable
  - 549 |         return VM_Call( gvm, AICAST_VISIBLEFROMPOS, (int)srcpos, srcnum, (int)destpsrc/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:107:18: warning: unused variable 'numTeamArenaGameNames' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:119:18: warning: unused variable 'numSortKeys' [-Wunused-const-variable]
- [2x] -array-bounds
  - src/renderer/tr_image.c:3712:59: warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src/renderer/tr_shade_calc.c:679:2: warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src/renderer/tr_shader.c:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src/renderer/tr_shader.c:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -sizeof-pointer-memaccess
  - src/qcommon/cvar.c:764:28: warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
  - src/games/game/ai_cast.c:501:33: warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'struct cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'struct cast_state_s *') [-Wsizeof-pointer-memaccess]
- [2x] -int-to-void-pointer-cast
  - src/qcommon/vm.c:61:9: warning: cast to 'void *' from smaller integer type 'vmptr_t' (aka 'int') [-Wint-to-void-pointer-cast]
  - src/qcommon/vm.c:173:8: warning: cast to 'void *' from smaller integer type 'int' [-Wint-to-void-pointer-cast]
- [2x] -unneeded-internal-declaration
  - src/games/ui/ui_main.c:95:20: warning: variable 'teamArenaGameNames' is not needed and will not be emitted [-Wunneeded-internal-declaration]
  - src/games/ui/ui_main.c:112:20: warning: variable 'sortKeys' is not needed and will not be emitted [-Wunneeded-internal-declaration]
- [1x] -strncat-size
  - src/client/cl_main.c:2837:25: warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src/qcommon/common.c:1800:2: warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] need to modify cg_event.c at "// check the sequencial list" if you change this
  - 995 |         { NETF( eventSequence ), 8 }, // warning: need to modify cg_event.c at "// check the sequencial list" if you change this
- [1x] -parentheses-equality
  - src/qcommon/unzip.c:2066:45: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -format
  - src/qcommon/vm.c:844:54: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]

## ubuntu-latest-x86-debug

status: failure

errors: 12
warnings: 339 in 16 kinds

### errors

/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_marks.c:157:(.text+0x77): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_marks.c:191:(.text+0x1ad): undefined reference to `BoxOnPlaneSide'
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_world.c:427:(.text+0x803): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_world.c:437:(.text+0x85f): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_world.c:447:(.text+0x8bb): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/renderer/tr_world.c.o:/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_world.c:457: more undefined references to `BoxOnPlaneSide' follow
/home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_cgame.c:735:(.text+0x2925): undefined reference to `Sys_SnapVector'
/home/runner/work/RTCW-SP/RTCW-SP/src/client/snd_mix.c:163:(.text+0xc0): undefined reference to `S_WriteLinearBlastStereo16'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_test.c:162:(.text+0x3bb): undefined reference to `BoxOnPlaneSide'
/home/runner/work/RTCW-SP/RTCW-SP/src/server/sv_game.c:465:(.text+0x15b0): undefined reference to `Sys_SnapVector'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [build/linux-x86-debug/WolfSP] Error 1

### failure context

- build/linux-x86-debug/WolfSP

```
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_world.c:427:(.text+0x803): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_world.c:437:(.text+0x85f): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_world.c:447:(.text+0x8bb): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/renderer/tr_world.c.o:/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_world.c:457: more undefined references to `BoxOnPlaneSide' follow
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/client/cl_cgame.c.o: in function `CL_CgameSystemCalls':
/home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_cgame.c:735:(.text+0x2925): undefined reference to `Sys_SnapVector'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/client/snd_mix.c.o: in function `S_TransferStereo16':
/home/runner/work/RTCW-SP/RTCW-SP/src/client/snd_mix.c:163:(.text+0xc0): undefined reference to `S_WriteLinearBlastStereo16'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/qcommon/cm_test.c.o: in function `CM_BoxLeafnums_r':
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_test.c:162:(.text+0x3bb): undefined reference to `BoxOnPlaneSide'
src/games/game/ai_cast_script_actions.c:764:29: warning: variable 'setAngles' set but not used [-Wunused-but-set-variable]
  764 |         qboolean forever = qfalse, setAngles = qfalse;
      |                                    ^
/usr/bin/x86_64-linux-gnu-ld.bfd: clang -o build/linux-x86-debug/game/obj/games/game/ai_cast_script_ents.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -fPIC -fPIC -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc/third-party/jpeg-6 src/g
build/linux-x86-debug/client/obj/server/sv_game.c.o: in function `SV_GameSystemCalls':
/home/runner/work/RTCW-SP/RTCW-SP/src/server/sv_game.c:465:(.text+0x15b0): undefined reference to `Sys_SnapVector'
src/games/game/ai_cast_script_actions.c:1443:45: warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1443 |         if ( !g_entities[cs->entityNum].client->ps.weapons ) {
      |              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~
src/games/game/ai_cast_script_actions.c:1658:10: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
 1658 |                 diff = abs( AngleDifference( cs->bs->cur_ps.viewangles[i], cs->ideal_viewangles[i] ) );
      |                        ^
src/games/game/ai_cast_script_actions.c:1658:10: note: use function 'fabsf' instead
 1658 |                 diff = abs( AngleDifference( cs->bs->cur_ps.viewangles[i], cs->ideal_viewangles[i] ) );
      |                        ^~~
      |                        fabsf
src/games/game/ai_cast_script_actions.c:2706:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
 2706 |         gentity_t *ent;
      |                    ^
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [build/linux-x86-debug/WolfSP] Error 1
```


### warning kinds

- [203x] -unused-but-set-variable
  - src/renderer/tr_bsp.c:147:9: warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_flares.c:128:23: warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_font.c:351:8: warning: variable 'glyphScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:2203:8: warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3445:8: warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3603:20: warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_main.c:1181:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.c:1883:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:6: warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:15: warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:1067:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:185:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2745:10: warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2849:18: warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3548:12: warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3549:6: warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3550:6: warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
  - src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src/client/cl_scrn.c:386:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/client/cl_ui.c:1195:16: warning: variable 'interpret' set but not used [-Wunused-but-set-variable]
  - src/client/snd_dma.c:558:8: warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src/client/snd_mix.c:793:10: warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.c:738:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.c:824:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
- [34x] -pointer-sign
  - src/renderer/tr_animation.c:1249:11: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/renderer/tr_animation.c:1376:13: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/sys/unix/unix_net.c:179:38: warning: passing 'int *' to parameter of type 'socklen_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1104:11: warning: assigning to 'const char *' from 'const GLubyte *' (aka 'const unsigned char *') converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1397:38: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1398:40: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1402:39: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1403:42: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:387:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:403:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:450:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:466:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:508:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:518:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:526:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:542:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1940:14: warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1955:20: warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1986:8: warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_info.c:79:14: warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1719:23: warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1721:5: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1723:9: warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1755:23: warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1758:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1762:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1764:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1766:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1769:9: warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1803:24: warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [30x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings
  - src/splines/splines.cpp:483:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:487:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:491:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:564:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:568:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:577:38: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:580:25: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:865:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:868:36: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:871:41: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:972:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:974:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:976:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:978:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1256:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1259:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1262:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1265:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1268:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1278:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1281:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1284:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1287:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1291:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1298:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1301:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1308:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1311:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1313:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1320:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
- [27x] -absolute-value
  - src/client/cl_cin.c:1518:43: warning: taking the absolute value of unsigned type 'unsigned int' has no effect [-Wabsolute-value]
  - src/client/cl_input.c:660:20: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/client/cl_input.c:663:20: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_move.c:164:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2353:25: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2354:25: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2364:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2491:11: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_ai_move.c:2154:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_funcs.c:597:10: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_funcs.c:893:9: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_funcs.c:2560:11: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_script_actions.c:167:16: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_script_actions.c:352:16: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_script_actions.c:1658:10: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botai/ai_main.c:361:10: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botai/ai_main.c:450:17: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/cgame/cg_flamethrower.c:1344:13: warning: using floating point absolute value function 'fabs' when argument is of integer type [-Wabsolute-value]
  - src/games/cgame/cg_weapons.c:1805:22: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/ui/ui_shared.c:1365:34: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/ui/ui_shared.c:1366:34: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/ui/ui_shared.c:1367:34: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/ui/ui_shared.c:1368:34: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
- [18x] -invalid-source-encoding
  - src/client/cl_keys.c:197:5: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:450:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:452:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:469:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:470:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:474:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:475:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:476:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:477:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:478:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:535:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:541:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:570:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:595:9: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:607:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:666:16: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:667:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:680:4: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [10x] -pointer-bool-conversion
  - src/client/snd_dma.c:1857:19: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.c:2171:11: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.c:2487:15: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/game/ai_cast_script_actions.c:1443:45: warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.c:950:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.c:962:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.c:974:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_weapons.c:1142:10: warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.c:1483:7: warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.c:1541:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [4x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:107:18: warning: unused variable 'numTeamArenaGameNames' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:119:18: warning: unused variable 'numSortKeys' [-Wunused-const-variable]
- [2x] -array-bounds
  - src/renderer/tr_image.c:3712:59: warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src/renderer/tr_shade_calc.c:679:2: warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src/renderer/tr_shader.c:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src/renderer/tr_shader.c:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -sizeof-pointer-memaccess
  - src/qcommon/cvar.c:764:28: warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
  - src/games/game/ai_cast.c:501:33: warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'struct cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'struct cast_state_s *') [-Wsizeof-pointer-memaccess]
- [2x] -unneeded-internal-declaration
  - src/games/ui/ui_main.c:95:20: warning: variable 'teamArenaGameNames' is not needed and will not be emitted [-Wunneeded-internal-declaration]
  - src/games/ui/ui_main.c:112:20: warning: variable 'sortKeys' is not needed and will not be emitted [-Wunneeded-internal-declaration]
- [1x] -strncat-size
  - src/client/cl_main.c:2837:25: warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src/qcommon/common.c:1800:2: warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src/qcommon/unzip.c:2066:45: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]

## ubuntu-latest-x86-release

status: failure

errors: 13
warnings: 341 in 16 kinds

### errors

tr_marks.c:(.text+0x5b): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: tr_marks.c:(.text+0x163): undefined reference to `BoxOnPlaneSide'
tr_world.c:(.text+0x8b6): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: tr_world.c:(.text+0x8e5): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: tr_world.c:(.text+0x914): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-release/client/obj/renderer/tr_world.c.o:tr_world.c:(.text+0x943): more undefined references to `BoxOnPlaneSide' follow
cl_cgame.c:(.text+0x1318): undefined reference to `Sys_SnapVector'
snd_mix.c:(.text+0x6e): undefined reference to `S_WriteLinearBlastStereo16'
snd_mix.c:(.text+0x2b2): undefined reference to `S_WriteLinearBlastStereo16'
cm_test.c:(.text+0x2c1): undefined reference to `BoxOnPlaneSide'
sv_game.c:(.text+0xb90): undefined reference to `Sys_SnapVector'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [build/linux-x86-release/WolfSP] Error 1

### failure context

- build/linux-x86-release/WolfSP

```
src/games/game/ai_cast_funcs.c:4361:6: warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
 4361 |         int weapon;
      |             ^
src/games/game/ai_cast_funcs.c:4663:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
 4663 |         gentity_t *ent;
      |                    ^
src/games/game/ai_cast_funcs.c:4714:6: warning: variable 'tfl' set but not used [-Wunused-but-set-variable]
 4714 |         int tfl;
      |             ^
10 warnings generated.
clang -o build/linux-x86-release/game/obj/games/game/ai_cast_script_actions.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -fPIC -fPIC -DNDEBUG -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc/third-party/jpeg-6 src/gam
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-release/client/obj/renderer/tr_marks.c.o: in function `R_BoxSurfaces_r':
tr_marks.c:(.text+0x5b): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: tr_marks.c:(.text+0x163): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-release/client/obj/renderer/tr_world.c.o: in function `R_RecursiveWorldNode':
tr_world.c:(.text+0x8b6): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: tr_world.c:(.text+0x8e5): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: tr_world.c:(.text+0x914): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-release/client/obj/renderer/tr_world.c.o:tr_world.c:(.text+0x943): more undefined references to `BoxOnPlaneSide' follow
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-release/client/obj/client/cl_cgame.c.o: in function `CL_CgameSystemCalls':
cl_cgame.c:(.text+0x1318): undefined reference to `Sys_SnapVector'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-release/client/obj/client/snd_mix.c.o: in function `S_TransferStereo16':
snd_mix.c:(.text+0x6e): undefined reference to `S_WriteLinearBlastStereo16'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-release/client/obj/client/snd_mix.c.o: in function `S_TransferPaintBuffer':
snd_mix.c:(.text+0x2b2): undefined reference to `S_WriteLinearBlastStereo16'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-release/client/obj/qcommon/cm_test.c.o: in function `CM_BoxLeafnums_r':
cm_test.c:(.text+0x2c1): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-release/client/obj/server/sv_game.c.o: in function `SV_GameSystemCalls':
sv_game.c:(.text+0xb90): undefined reference to `Sys_SnapVector'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [build/linux-x86-release/WolfSP] Error 1
```


### warning kinds

- [205x] -unused-but-set-variable
  - src/renderer/tr_bsp.c:147:9: warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_flares.c:128:23: warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_font.c:351:8: warning: variable 'glyphScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:2203:8: warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3445:8: warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3603:20: warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_main.c:1181:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.c:1883:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:6: warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:15: warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_sky.c:717:15: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:1067:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:185:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2745:10: warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2849:18: warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3548:12: warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3549:6: warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3550:6: warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
  - src/client/cl_scrn.c:386:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src/client/cl_ui.c:1195:16: warning: variable 'interpret' set but not used [-Wunused-but-set-variable]
  - src/client/snd_dma.c:558:8: warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src/client/snd_mix.c:793:10: warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.c:738:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
- [34x] -pointer-sign
  - src/renderer/tr_animation.c:1249:11: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/renderer/tr_animation.c:1376:13: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/sys/unix/unix_net.c:179:38: warning: passing 'int *' to parameter of type 'socklen_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1104:11: warning: assigning to 'const char *' from 'const GLubyte *' (aka 'const unsigned char *') converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1397:38: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1398:40: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1402:39: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1403:42: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1940:14: warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1955:20: warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1986:8: warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:387:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:403:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:450:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:466:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:508:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:518:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:526:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:542:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_info.c:79:14: warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1719:23: warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1721:5: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1723:9: warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1755:23: warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1758:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1762:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1764:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1766:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1769:9: warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1803:24: warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [30x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings
  - src/splines/splines.cpp:483:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:487:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:491:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:564:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:568:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:577:38: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:580:25: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:865:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:868:36: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:871:41: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:972:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:974:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:976:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:978:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1256:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1259:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1262:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1265:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1268:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1278:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1281:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1284:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1287:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1291:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1298:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1301:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1308:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1311:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1313:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1320:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
- [27x] -absolute-value
  - src/client/cl_cin.c:1518:43: warning: taking the absolute value of unsigned type 'unsigned int' has no effect [-Wabsolute-value]
  - src/client/cl_input.c:660:20: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/client/cl_input.c:663:20: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_move.c:164:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2353:25: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2354:25: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2364:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2491:11: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_ai_move.c:2154:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_funcs.c:597:10: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_funcs.c:893:9: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_funcs.c:2560:11: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_script_actions.c:167:16: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_script_actions.c:352:16: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/game/ai_cast_script_actions.c:1658:10: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botai/ai_main.c:361:10: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botai/ai_main.c:450:17: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/cgame/cg_flamethrower.c:1344:13: warning: using floating point absolute value function 'fabs' when argument is of integer type [-Wabsolute-value]
  - src/games/cgame/cg_weapons.c:1805:22: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/ui/ui_shared.c:1365:34: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/ui/ui_shared.c:1366:34: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/ui/ui_shared.c:1367:34: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/ui/ui_shared.c:1368:34: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
- [18x] -invalid-source-encoding
  - src/client/cl_keys.c:197:5: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:450:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:452:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:469:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:470:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:474:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:475:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:476:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:477:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:478:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:535:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:541:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:570:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:595:9: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:607:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:666:16: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:667:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:680:4: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [10x] -pointer-bool-conversion
  - src/client/snd_dma.c:1857:19: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.c:2171:11: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.c:2487:15: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/game/ai_cast_script_actions.c:1443:45: warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.c:950:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.c:962:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.c:974:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_weapons.c:1142:10: warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.c:1483:7: warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.c:1541:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [4x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:107:18: warning: unused variable 'numTeamArenaGameNames' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:119:18: warning: unused variable 'numSortKeys' [-Wunused-const-variable]
- [2x] -array-bounds
  - src/renderer/tr_image.c:3712:59: warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src/renderer/tr_shade_calc.c:679:2: warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src/renderer/tr_shader.c:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src/renderer/tr_shader.c:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -sizeof-pointer-memaccess
  - src/qcommon/cvar.c:764:28: warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
  - src/games/game/ai_cast.c:501:33: warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'struct cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'struct cast_state_s *') [-Wsizeof-pointer-memaccess]
- [2x] -unneeded-internal-declaration
  - src/games/ui/ui_main.c:95:20: warning: variable 'teamArenaGameNames' is not needed and will not be emitted [-Wunneeded-internal-declaration]
  - src/games/ui/ui_main.c:112:20: warning: variable 'sortKeys' is not needed and will not be emitted [-Wunneeded-internal-declaration]
- [1x] -strncat-size
  - src/client/cl_main.c:2837:25: warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src/qcommon/common.c:1800:2: warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src/qcommon/unzip.c:2066:45: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]

## uncrustify

status: success

errors: 2
warnings: 0 in 0 kinds

### errors

UNCRUSTIFY_FAILED: src/sys/unix/qasm.h
UNCRUSTIFY_FAILED: src/games/game/bg_pmove.c

### failure context


### warning kinds

## windows-latest-x64-debug

status: failure

errors: 10
warnings: 1472 in 28 kinds

### errors

lld-link: error: duplicate symbol: r_fullscreen
scons: *** [build\windows-x64-debug\WolfSP.exe] Error 1
lld-link: error: undefined symbol: _VectorScale
>>> referenced by build\windows-x64-debug\game\obj\games\game\g_save.c.obj:(funcList)
lld-link: error: undefined symbol: _VectorCopy
lld-link: error: undefined symbol: _VectorAdd
lld-link: error: undefined symbol: _VectorSubtract
lld-link: error: undefined symbol: _DotProduct
lld-link: error: undefined symbol: _VectorMA
scons: *** [build\windows-x64-debug\qagame.dll] Error 1

### failure context

- build\windows-x64-debug\WolfSP.exe

```
      |                                                                        ^
src\games\game\ai_cast_script_actions.c(167,16): note: use function 'fabsf' instead
  167 |                                                                 diff = abs( AngleDifference( cs->viewangles[i], cs->ideal_viewangles[i] ) );
      |                                                                        ^~~
      |                                                                        fabsf
src\games\game\ai_cast_script_actions.c(352,16): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  352 |                                                                 diff = abs( AngleDifference( cs->viewangles[i], cs->ideal_viewangles[i] ) );
      |                                                                        ^
src\games\game\ai_cast_script_actions.c(352,16): note: use function 'fabsf' instead
  352 |                                                                 diff = abs( AngleDifference( cs->viewangles[i], cs->ideal_viewangles[i] ) );
      |                                                                        ^~~
      |                                                                        fabsf
src\games\game\ai_cast_script_actions.c(764,29): warning: variable 'setAngles' set but not used [-Wunused-but-set-variable]
  764 |         qboolean forever = qfalse, setAngles = qfalse;
      |                                    ^
src\games\game\ai_cast_script_actions.c(1443,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1443 |         if ( !g_entities[cs->entityNum].client->ps.weapons ) {
      |              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~
src\games\game\ai_cast_script_actions.c(1658,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
 1658 |                 diff = abs( AngleDifference( cs->bs->cur_ps.viewangles[i], cs->ideal_viewangles[i] ) );
      |                        ^
src\games\game\ai_cast_script_actions.c(1658,10): note: use function 'fabsf' instead
 1658 |                 diff = abs( AngleDifference( cs->bs->cur_ps.viewangles[i], cs->ideal_viewangles[i] ) );
      |                        ^~~
      |                        fabsf
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\ai_cast_think.c.obj /c src\games\game\ai_cast_think.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /I
src\games\game\ai_cast_script_actions.c(2706,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
 2706 |         gentity_t *ent;
      |                    ^
6 warnings generated.
scons: *** [build\windows-x64-debug\WolfSP.exe] Error 1
```

- build\windows-x64-debug\qagame.dll

```
      |                      ^~~~ ~~
src\games\cgame\cg_servercmds.c(974,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  974 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_sound.c.obj /c src\games\cgame\cg_sound.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\ga
3 warnings generated.
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_syscalls.c.obj /c src\games\cgame\cg_syscalls.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /I
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_trails.c.obj /c src\games\cgame\cg_trails.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\
src\games\cgame\cg_sound.c(238,6): warning: variable 's' set but not used [-Wunused-but-set-variable]
  238 |         int s;
      |             ^
1 warning generated.
lld-link: error: undefined symbol: _VectorScale
>>> referenced by build\windows-x64-debug\game\obj\games\game\g_save.c.obj:(funcList)

lld-link: error: undefined symbol: _VectorCopy
>>> referenced by build\windows-x64-debug\game\obj\games\game\g_save.c.obj:(funcList)

lld-link: error: undefined symbol: _VectorAdd
>>> referenced by build\windows-x64-debug\game\obj\games\game\g_save.c.obj:(funcList)

lld-link: error: undefined symbol: _VectorSubtract
>>> referenced by build\windows-x64-debug\game\obj\games\game\g_save.c.obj:(funcList)

lld-link: error: undefined symbol: _DotProduct
>>> referenced by build\windows-x64-debug\game\obj\games\game\g_save.c.obj:(funcList)

lld-link: error: undefined symbol: _VectorMA
>>> referenced by build\windows-x64-debug\game\obj\games\game\g_save.c.obj:(funcList)
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_view.c.obj /c src\games\cgame\cg_view.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\game
scons: *** [build\windows-x64-debug\qagame.dll] Error 1
```


### warning kinds

- [494x] -missing-field-initializers
  - src\renderer\tr_shader.c(1817,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2082,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2083,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2084,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(144,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,10): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,40): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,52): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(70,57): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,59): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
- [353x] -incompatible-function-pointer-types
  - src\sys\win32\win_qgl.c(2939,42): warning: incompatible function pointer types assigning to 'void (*)(GLenum, GLfloat) __attribute__((stdcall))' (aka 'void (*)(unsigned int, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2940,46): warning: incompatible function pointer types assigning to 'void (*)(GLenum, GLclampf) __attribute__((stdcall))' (aka 'void (*)(unsigned int, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2941,56): warning: incompatible function pointer types assigning to 'GLboolean (*)(GLsizei, const GLuint *, GLboolean *) __attribute__((stdcall))' (aka 'unsigned char (*)(int, const unsigned int *, unsigned char *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2942,49): warning: incompatible function pointer types assigning to 'void (*)(GLint) __attribute__((stdcall))' (aka 'void (*)(int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2943,42): warning: incompatible function pointer types assigning to 'void (*)(GLenum) __attribute__((stdcall))' (aka 'void (*)(unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2944,48): warning: incompatible function pointer types assigning to 'void (*)(GLenum, GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2945,43): warning: incompatible function pointer types assigning to 'void (*)(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *) __attribute__((stdcall))' (aka 'void (*)(int, int, float, float, float, float, const unsigned char *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2946,46): warning: incompatible function pointer types assigning to 'void (*)(GLenum, GLenum) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2947,45): warning: incompatible function pointer types assigning to 'void (*)(GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2948,46): warning: incompatible function pointer types assigning to 'void (*)(GLsizei, GLenum, const GLvoid *) __attribute__((stdcall))' (aka 'void (*)(int, unsigned int, const void *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2949,42): warning: incompatible function pointer types assigning to 'void (*)(GLbitfield) __attribute__((stdcall))' (aka 'void (*)(unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2950,47): warning: incompatible function pointer types assigning to 'void (*)(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((stdcall))' (aka 'void (*)(float, float, float, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2951,47): warning: incompatible function pointer types assigning to 'void (*)(GLclampf, GLclampf, GLclampf, GLclampf) __attribute__((stdcall))' (aka 'void (*)(float, float, float, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2952,47): warning: incompatible function pointer types assigning to 'void (*)(GLclampd) __attribute__((stdcall))' (aka 'void (*)(double)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2953,47): warning: incompatible function pointer types assigning to 'void (*)(GLfloat) __attribute__((stdcall))' (aka 'void (*)(float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2954,49): warning: incompatible function pointer types assigning to 'void (*)(GLint) __attribute__((stdcall))' (aka 'void (*)(int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2955,46): warning: incompatible function pointer types assigning to 'void (*)(GLenum, const GLdouble *) __attribute__((stdcall))' (aka 'void (*)(unsigned int, const double *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2956,44): warning: incompatible function pointer types assigning to 'void (*)(GLbyte, GLbyte, GLbyte) __attribute__((stdcall))' (aka 'void (*)(signed char, signed char, signed char)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2957,45): warning: incompatible function pointer types assigning to 'void (*)(const GLbyte *) __attribute__((stdcall))' (aka 'void (*)(const signed char *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2958,44): warning: incompatible function pointer types assigning to 'void (*)(GLdouble, GLdouble, GLdouble) __attribute__((stdcall))' (aka 'void (*)(double, double, double)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2959,45): warning: incompatible function pointer types assigning to 'void (*)(const GLdouble *) __attribute__((stdcall))' (aka 'void (*)(const double *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2960,44): warning: incompatible function pointer types assigning to 'void (*)(GLfloat, GLfloat, GLfloat) __attribute__((stdcall))' (aka 'void (*)(float, float, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2961,45): warning: incompatible function pointer types assigning to 'void (*)(const GLfloat *) __attribute__((stdcall))' (aka 'void (*)(const float *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2962,44): warning: incompatible function pointer types assigning to 'void (*)(GLint, GLint, GLint) __attribute__((stdcall))' (aka 'void (*)(int, int, int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2963,45): warning: incompatible function pointer types assigning to 'void (*)(const GLint *) __attribute__((stdcall))' (aka 'void (*)(const int *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2964,44): warning: incompatible function pointer types assigning to 'void (*)(GLshort, GLshort, GLshort) __attribute__((stdcall))' (aka 'void (*)(short, short, short)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2965,45): warning: incompatible function pointer types assigning to 'void (*)(const GLshort *) __attribute__((stdcall))' (aka 'void (*)(const short *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2966,45): warning: incompatible function pointer types assigning to 'void (*)(GLubyte, GLubyte, GLubyte) __attribute__((stdcall))' (aka 'void (*)(unsigned char, unsigned char, unsigned char)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2967,46): warning: incompatible function pointer types assigning to 'void (*)(const GLubyte *) __attribute__((stdcall))' (aka 'void (*)(const unsigned char *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2968,45): warning: incompatible function pointer types assigning to 'void (*)(GLuint, GLuint, GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int, unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
- [228x] -pointer-to-int-cast
  - src\renderer\tr_bsp.c(379,14): warning: cast to smaller integer type 'int' from 'float (*)[8]' [-Wpointer-to-int-cast]
  - src\renderer\tr_init.c(1177,7): warning: cast to smaller integer type 'int' from 'vec4_t *' (aka 'float (*)[4]') [-Wpointer-to-int-cast]
  - src\client\cl_cgame.c(701,10): warning: cast to smaller integer type 'int' from 'char *' [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1105,39): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1105,68): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1106,41): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1106,110): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_ui.c(1092,10): warning: cast to smaller integer type 'int' from 'char *' [-Wpointer-to-int-cast]
  - src\qcommon\cm_polylib.c(280,9): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\common.c(1098,29): warning: cast to smaller integer type 'int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(948,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(949,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(950,4): warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(951,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(952,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(953,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(954,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(955,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(956,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(957,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(958,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(959,4): warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(960,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(961,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(962,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(963,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(964,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(965,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(966,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(967,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
- [202x] -unused-but-set-variable
  - src\renderer\tr_bsp.c(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_font.c(351,8): warning: variable 'glyphScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_flares.c(128,23): warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_main.c(1181,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(2203,8): warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3445,8): warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3603,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.c(1883,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.c(103,6): warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.c(103,15): warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(185,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2745,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2849,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3548,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3549,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3550,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
  - src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src\client\cl_scrn.c(386,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\client\cl_ui.c(1195,16): warning: variable 'interpret' set but not used [-Wunused-but-set-variable]
  - src\client\snd_dma.c(558,8): warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src\client\snd_mix.c(793,10): warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(738,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(824,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cmd.c(247,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
- [39x] -pointer-sign
  - src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1349,38): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1350,40): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1351,39): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1352,42): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(265,31): warning: passing 'byte *' (aka 'unsigned char *') to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(583,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(590,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(630,28): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(637,29): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(660,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(667,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1940,14): warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1955,20): warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1986,8): warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(387,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(403,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(450,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(466,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(508,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(518,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(526,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(542,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_info.c(79,14): warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1719,23): warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1721,5): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1723,9): warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1755,23): warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1758,6): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [30x] -writable-strings
  - src\splines\splines.cpp(483,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(487,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(491,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(564,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(568,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(577,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(580,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(865,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(868,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(871,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(972,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(974,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(976,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(978,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1256,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1259,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1262,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1265,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1268,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1278,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1281,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1284,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1287,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1291,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1298,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1301,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1308,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1311,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1313,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1320,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [27x] -absolute-value
  - src\client\cl_cgame.csrc\client\cl_cin.c((10671518,,643))::  warning: warning: taking the absolute value of unsigned type 'unsigned int' has no effect [-Wabsolute-value]variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(660,20): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\client\cl_input.c(663,20): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_move.c(164,8): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2353,25): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2354,25): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2364,8): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2491,11): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_ai_move.c(2154,8): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_funcs.c(597,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_funcs.c(893,9): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_funcs.c(2560,11): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_script_actions.c(167,16): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_script_actions.c(352,16): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_script_actions.c(1658,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botai\ai_main.c(361,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botai\ai_main.c(450,17): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\cgame\cg_flamethrower.c(1344,13): warning: using floating point absolute value function 'fabs' when argument is of integer type [-Wabsolute-value]
  - src\games\cgame\cg_weapons.c(1805,22): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\ui\ui_shared.c(1365,34): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\ui\ui_shared.c(1366,34): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\ui\ui_shared.c(1367,34): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\ui\ui_shared.c(1368,34): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
- [18x] -invalid-source-encoding
  - src\client\cl_keys.c(197,5): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(450,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(452,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(469,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(470,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(474,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(475,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(476,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(477,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(478,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(535,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(541,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(570,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(595,9): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(607,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(666,16): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(667,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(680,4): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
- [10x] -pointer-bool-conversion
  - src\client\snd_dma.c(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.c(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.c(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai_cast_script_actions.c(1443,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.c(950,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.c(962,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.c(974,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.c(1142,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.c(1483,7): warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.c(1541,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [8x] -extern-initializer
  - src\sys\win32\win_input.c(211,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(212,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(213,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(214,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - 3132 |         qglPixsrc\sys\win32\win_snd.c(146,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - 3134 |         qglPixelTransferi            =  dllPixelTransfersrc\sys\win32\win_snd.ci( 149 , 14 ) :   warning:  'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(151,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(152,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
- [7x] -int-to-pointer-cast
  - src\qcommon\common.c(1098,15): warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\server\sv_client.c(416,11): warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\game\g_main.c(324,41): warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\game\g_main.c(327,32): warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\game\g_main.c(327,46): warning: cast to 'animModelInfo_t **' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\cgame\cg_main.c(65,27): warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\cgame\cg_main.c(65,41): warning: cast to 'orientation_t *' from smaller integer type 'int' [-Wint-to-pointer-cast]
- [6x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(600,13): warning: unused variable 'lastWarning' [-Wunused-variable]
  - src\sys\win32\win_main.c(708,22): warning: unused variable 'stream' [-Wunused-variable]
- [5x] -void-pointer-to-int-cast
  - src\client\cl_cgame.c(697,10): warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src\client\cl_cgame.c(699,10): warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src\client\cl_ui.c(1086,10): warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src\client\cl_ui.c(1089,10): warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src\sys\win32\win_input.c(860,7): warning: cast to smaller integer type 'unsigned long' from 'void *' [-Wvoid-pointer-to-int-cast]
- [4x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(107,18): warning: unused variable 'numTeamArenaGameNames' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(119,18): warning: unused variable 'numSortKeys' [-Wunused-const-variable]
- [4x] -unused-function
  - src\sys\win32\win_shared.c(103,12): warning: unused function 'IsPentium' [-Wunused-function]
  - src\sys\win32\win_shared.c(107,12): warning: unused function 'Is3DNOW' [-Wunused-function]
  - src\sys\win32\win_shared.c(147,12): warning: unused function 'IsKNI' [-Wunused-function]
  - src\sys\win32\win_shared.c(161,12): warning: unused function 'IsMMX' [-Wunused-function]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(153,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(1111,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1170,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [2x] -array-bounds
  - src\renderer\tr_image.c(3712,59): warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src\renderer\tr_shade_calc.c(679,2): warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src\renderer\tr_shader.c(986,23): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src\renderer\tr_shader.c(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -sizeof-pointer-memaccess
  - src\qcommon\cvar.c(764,28): warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
  - src\games\game\ai_cast.c(501,33): warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'struct cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'struct cast_state_s *') [-Wsizeof-pointer-memaccess]
- [2x] -int-to-void-pointer-cast
  - src\qcommon\vm.c(61,9): warning: cast to 'void *' from smaller integer type 'vmptr_t' (aka 'int') [-Wint-to-void-pointer-cast]
  - src\qcommon\vm.c(173,8): warning: cast to 'void *' from smaller integer type 'int' [-Wint-to-void-pointer-cast]
- [2x] -unneeded-internal-declaration
  - src\games\ui\ui_main.c(95,20): warning: variable 'teamArenaGameNames' is not needed and will not be emitted [-Wunneeded-internal-declaration]
  - src\games\ui\ui_main.c(112,20): warning: variable 'sortKeys' is not needed and will not be emitted [-Wunneeded-internal-declaration]
- [1x] -strncat-size
  - src\client\cl_main.c(2837,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src\qcommon\common.c(1800,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] need to modify cg_event.c at "// check the sequencial list" if you change this
  - 995 |         { NETF( eventSequence ), 8 }, // warning: need to modify cg_event.c at "// check the sequencial list" if you change this
- [1x] -parentheses-equality
  - src\qcommon\unzip.c(2066,45): warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -format
  - src\qcommon\vm.c(  844489, | 54        )        :         iwarning: fformat specifies type 'int' but the argument has type '__ptrdiff_t' (aka 'long long') [-Wformat]
- [1x] -cast-function-type-mismatch
  - src\sys\win32\win_syscon.c(283,21): warning: cast from 'LONG (*)(HWND, UINT, WPARAM, LPARAM) __attribute__((stdcall))' (aka 'long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') to 'WNDPROC' (aka 'long long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') converts to incompatible function type [-Wcast-function-type-mismatch]

## windows-latest-x64-release

status: failure

errors: 10
warnings: 1474 in 28 kinds

### errors

lld-link: error: duplicate symbol: r_fullscreen
scons: *** [build\windows-x64-release\WolfSP.exe] Error 1
lld-link: error: undefined symbol: _VectorScale
>>> referenced by build\windows-x64-release\game\obj\games\game\g_save.c.obj:(funcList)
lld-link: error: undefined symbol: _VectorCopy
lld-link: error: undefined symbol: _VectorAdd
lld-link: error: undefined symbol: _VectorSubtract
lld-link: error: undefined symbol: _DotProduct
lld-link: error: undefined symbol: _VectorMA
scons: *** [build\windows-x64-release\qagame.dll] Error 1

### failure context

- build\windows-x64-release\WolfSP.exe

```
      |             ^
4 warnings generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\ai_cast_script_actions.c.obj /c src\games\game\ai_cast_script_actions.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types /O2 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sy
src\games\game\ai_cast_script_actions.c(167,16): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  167 |                                                                 diff = abs( AngleDifference( cs->viewangles[i], cs->ideal_viewangles[i] ) );
      |                                                                        ^
src\games\game\ai_cast_script_actions.c(167,16): note: use function 'fabsf' instead
  167 |                                                                 diff = abs( AngleDifference( cs->viewangles[i], cs->ideal_viewangles[i] ) );
      |                                                                        ^~~
      |                                                                        fabsf
src\games\game\ai_cast_script_actions.c(352,16): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  352 |                                                                 diff = abs( AngleDifference( cs->viewangles[i], cs->ideal_viewangles[i] ) );
      |                                                                        ^
src\games\game\ai_cast_script_actions.c(352,16): note: use function 'fabsf' instead
  352 |                                                                 diff = abs( AngleDifference( cs->viewangles[i], cs->ideal_viewangles[i] ) );
      |                                                                        ^~~
      |                                                                        fabsf
src\games\game\ai_cast_script_actions.c(764,29): warning: variable 'setAngles' set but not used [-Wunused-but-set-variable]
  764 |         qboolean forever = qfalse, setAngles = qfalse;
      |                                    ^
src\games\game\ai_cast_script_actions.c(1443,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1443 |         if ( !g_entities[cs->entityNum].client->ps.weapons ) {
      |              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~
src\games\game\ai_cast_script_actions.c(1658,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
 1658 |                 diff = abs( AngleDifference( cs->bs->cur_ps.viewangles[i], cs->ideal_viewangles[i] ) );
      |                        ^
src\games\game\ai_cast_script_actions.c(1658,10): note: use function 'fabsf' instead
 1658 |                 diff = abs( AngleDifference( cs->bs->cur_ps.viewangles[i], cs->ideal_viewangles[i] ) );
      |                        ^~~
      |                        fabsf
scons: *** [build\windows-x64-release\WolfSP.exe] Error 1
```

- build\windows-x64-release\qagame.dll

```
src\games\cgame\cg_servercmds.c(974,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  974 |                 if ( text && strlen( text ) ) {
      |                      ^~~~ ~~
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_sound.c.obj /c src\games\cgame\cg_sound.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types /O2 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_syscalls.c.obj /c src\games\cgame\cg_syscalls.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types /O2 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\w
3 warnings generated.
src\games\cgame\cg_sound.c(238,6): warning: variable 's' set but not used [-Wunused-but-set-variable]
  238 |         int s;
      |             ^
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_trails.c.obj /c src\games\cgame\cg_trails.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types /O2 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32
1 warning generated.
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_view.c.obj /c src\games\cgame\cg_view.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types /O2 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Is
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_weapons.c.obj /c src\games\cgame\cg_weapons.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types /O2 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
lld-link: error: undefined symbol: _VectorScale
>>> referenced by build\windows-x64-release\game\obj\games\game\g_save.c.obj:(funcList)

lld-link: error: undefined symbol: _VectorCopy
>>> referenced by build\windows-x64-release\game\obj\games\game\g_save.c.obj:(funcList)

lld-link: error: undefined symbol: _VectorAdd
>>> referenced by build\windows-x64-release\game\obj\games\game\g_save.c.obj:(funcList)

lld-link: error: undefined symbol: _VectorSubtract
>>> referenced by build\windows-x64-release\game\obj\games\game\g_save.c.obj:(funcList)

lld-link: error: undefined symbol: _DotProduct
>>> referenced by build\windows-x64-release\game\obj\games\game\g_save.c.obj:(funcList)

lld-link: error: undefined symbol: _VectorMA
>>> referenced by build\windows-x64-release\game\obj\games\game\g_save.c.obj:(funcList)
scons: *** [build\windows-x64-release\qagame.dll] Error 1
```


### warning kinds

- [494x] -missing-field-initializers
  - src\renderer\tr_shader.c(1817,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2082,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2083,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2084,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(144,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,10): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,40): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,52): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(70,57): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,59): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
- [353x] -incompatible-function-pointer-types
  - src\sys\win32\win_qgl.c(2939,42): warning: incompatible function pointer types assigning to 'void (*)(GLenum, GLfloat) __attribute__((stdcall))' (aka 'void (*)(unsigned int, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2940,46): warning: incompatible function pointer types assigning to 'void (*)(GLenum, GLclampf) __attribute__((stdcall))' (aka 'void (*)(unsigned int, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2941,56): warning: incompatible function pointer types assigning to 'GLboolean (*)(GLsizei, const GLuint *, GLboolean *) __attribute__((stdcall))' (aka 'unsigned char (*)(int, const unsigned int *, unsigned char *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2942,49): warning: incompatible function pointer types assigning to 'void (*)(GLint) __attribute__((stdcall))' (aka 'void (*)(int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2943,42): warning: incompatible function pointer types assigning to 'void (*)(GLenum) __attribute__((stdcall))' (aka 'void (*)(unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2944,48): warning: incompatible function pointer types assigning to 'void (*)(GLenum, GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2945,43): warning: incompatible function pointer types assigning to 'void (*)(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *) __attribute__((stdcall))' (aka 'void (*)(int, int, float, float, float, float, const unsigned char *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2946,46): warning: incompatible function pointer types assigning to 'void (*)(GLenum, GLenum) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2947,45): warning: incompatible function pointer types assigning to 'void (*)(GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2948,46): warning: incompatible function pointer types assigning to 'void (*)(GLsizei, GLenum, const GLvoid *) __attribute__((stdcall))' (aka 'void (*)(int, unsigned int, const void *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2949,42): warning: incompatible function pointer types assigning to 'void (*)(GLbitfield) __attribute__((stdcall))' (aka 'void (*)(unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2950,47): warning: incompatible function pointer types assigning to 'void (*)(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((stdcall))' (aka 'void (*)(float, float, float, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2951,47): warning: incompatible function pointer types assigning to 'void (*)(GLclampf, GLclampf, GLclampf, GLclampf) __attribute__((stdcall))' (aka 'void (*)(float, float, float, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2952,47): warning: incompatible function pointer types assigning to 'void (*)(GLclampd) __attribute__((stdcall))' (aka 'void (*)(double)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2953,47): warning: incompatible function pointer types assigning to 'void (*)(GLfloat) __attribute__((stdcall))' (aka 'void (*)(float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2954,49): warning: incompatible function pointer types assigning to 'void (*)(GLint) __attribute__((stdcall))' (aka 'void (*)(int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2955,46): warning: incompatible function pointer types assigning to 'void (*)(GLenum, const GLdouble *) __attribute__((stdcall))' (aka 'void (*)(unsigned int, const double *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2956,44): warning: incompatible function pointer types assigning to 'void (*)(GLbyte, GLbyte, GLbyte) __attribute__((stdcall))' (aka 'void (*)(signed char, signed char, signed char)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2957,45): warning: incompatible function pointer types assigning to 'void (*)(const GLbyte *) __attribute__((stdcall))' (aka 'void (*)(const signed char *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2958,44): warning: incompatible function pointer types assigning to 'void (*)(GLdouble, GLdouble, GLdouble) __attribute__((stdcall))' (aka 'void (*)(double, double, double)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2959,45): warning: incompatible function pointer types assigning to 'void (*)(const GLdouble *) __attribute__((stdcall))' (aka 'void (*)(const double *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2960,44): warning: incompatible function pointer types assigning to 'void (*)(GLfloat, GLfloat, GLfloat) __attribute__((stdcall))' (aka 'void (*)(float, float, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2961,45): warning: incompatible function pointer types assigning to 'void (*)(const GLfloat *) __attribute__((stdcall))' (aka 'void (*)(const float *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2962,44): warning: incompatible function pointer types assigning to 'void (*)(GLint, GLint, GLint) __attribute__((stdcall))' (aka 'void (*)(int, int, int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2963,45): warning: incompatible function pointer types assigning to 'void (*)(const GLint *) __attribute__((stdcall))' (aka 'void (*)(const int *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2964,44): warning: incompatible function pointer types assigning to 'void (*)(GLshort, GLshort, GLshort) __attribute__((stdcall))' (aka 'void (*)(short, short, short)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2965,45): warning: incompatible function pointer types assigning to 'void (*)(const GLshort *) __attribute__((stdcall))' (aka 'void (*)(const short *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2966,45): warning: incompatible function pointer types assigning to 'void (*)(GLubyte, GLubyte, GLubyte) __attribute__((stdcall))' (aka 'void (*)(unsigned char, unsigned char, unsigned char)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2967,46): warning: incompatible function pointer types assigning to 'void (*)(const GLubyte *) __attribute__((stdcall))' (aka 'void (*)(const unsigned char *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2968,45): warning: incompatible function pointer types assigning to 'void (*)(GLuint, GLuint, GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int, unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
- [228x] -pointer-to-int-cast
  - src\renderer\tr_bsp.c(379,14): warning: cast to smaller integer type 'int' from 'float (*)[8]' [-Wpointer-to-int-cast]
  - src\renderer\tr_init.c(1177,7): warning: cast to smaller integer type 'int' from 'vec4_t *' (aka 'float (*)[4]') [-Wpointer-to-int-cast]
  - src\client\cl_cgame.c(701,10): warning: cast to smaller integer type 'int' from 'char *' [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1105,39): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1105,68): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1106,41): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1106,110): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_ui.c(1092,10): warning: cast to smaller integer type 'int' from 'char *' [-Wpointer-to-int-cast]
  - src\qcommon\cm_polylib.c(280,9): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\common.c(1098,29): warning: cast to smaller integer type 'int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(948,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(949,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(950,4): warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(951,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(952,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(953,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(954,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(955,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(956,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(957,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(958,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(959,4): warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(960,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(961,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(962,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(963,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(964,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(965,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(966,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(967,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
- [205x] -unused-but-set-variable
  - src\renderer\tr_bsp.c(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_flares.c(128,23): warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_font.c(351,8): warning: variable 'glyphScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(2203,8): warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3445,8): warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3603,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_main.c(1181,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.c(1883,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.c(103,6): warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.c(103,15): warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_sky.c(717,15): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(1067,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(185,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2745,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2849,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3548,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3549,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3550,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
  - src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src\client\cl_ui.c(1195,16): warning: variable 'interpret' set but not used [-Wunused-but-set-variable]
  - src\client\cl_scrn.c(386,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\client\snd_dma.c(558,8): warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src\client\snd_mix.c(793,10): warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(738,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
- [39x] -pointer-sign
  - src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1349,38): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - 859 |                         src\sys\win32\win_glimp.c        (        1350 ( ,uns40i)g:n warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1352,42): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(265,31): warning: passing 'byte *' (aka 'unsigned char *') to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(583,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(590,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(630,28): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(637,29): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(660,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(667,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1940,14): warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1955,20): warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1986,8): warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(387,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(403,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(450,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(466,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(508,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(518,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(526,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(542,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_info.c(79,14): warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1719,23): warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1721,5): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1723,9): warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1755,23): warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1758,6): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [30x] -writable-strings
  - src\splines\splines.cpp(483,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(487,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(491,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(564,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(568,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(577,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(580,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(865,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(868,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(871,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(972,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(974,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(976,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(978,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1256,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1259,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1262,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1265,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1268,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1278,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1281,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1284,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1287,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1291,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1298,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1301,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1308,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1311,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1313,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1320,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [27x] -absolute-value
  - src\client\cl_cin.c(1518,43): warning: taking the absolute value of unsigned type 'unsigned int' has no effect [-Wabsolute-value]
  - src\client\cl_input.c(660,20): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\client\cl_input.c(663,20): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_move.c(164,8): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2353,25): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2354,25): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2364,8): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2491,11): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_ai_move.c(2154,8): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_funcs.c(597,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_funcs.c(893,9): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_funcs.c(2560,11): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_script_actions.c(167,16): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_script_actions.c(352,16): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_script_actions.c(1658,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botai\ai_main.c(361,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botai\ai_main.c(450,17): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\cgame\cg_flamethrower.c(1344,13): warning: using floating point absolute value function 'fabs' when argument is of integer type [-Wabsolute-value]
  - src\games\cgame\cg_weapons.c(1805,22): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\ui\ui_shared.c(1365,34): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\ui\ui_shared.c(1366,34): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\ui\ui_shared.c(1367,34): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\ui\ui_shared.c(1368,34): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
- [18x] -invalid-source-encoding
  - src\client\cl_keys.c(197,5): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(450,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(452,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(469,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(470,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(474,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(475,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(476,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(477,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(478,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(535,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(541,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(570,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(595,9): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(607,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(666,16): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(667,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(680,4): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
- [10x] -pointer-bool-conversion
  - src\client\snd_dma.c(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.c(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.c(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai_cast_script_actions.c(1443,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.c(950,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.c(962,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.c(974,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.c(1142,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.c(1483,7): warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.c(1541,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [8x] -extern-initializer
  - src\sys\win32\win_input.c(211,14): src\sys\win32\win_gamma.cwarning: ('extern' variable has an initializer [-Wextern-initializer]153
  - src\sys\win32\win_input.c(212,41414 | )#: warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(213,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(214,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(146,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(149,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(151,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(152,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
- [7x] -int-to-pointer-cast
  - src\qcommon\common.c(1098,15): warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\server\sv_client.c(416,11): warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\game\g_main.c(324,41): warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\game\g_main.c(327,32): warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\game\g_main.c(327,46): warning: cast to 'animModelInfo_t **' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\cgame\cg_main.c(65,27): warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\cgame\cg_main.c(65,41): warning: cast to 'orientation_t *' from smaller integer type 'int' [-Wint-to-pointer-cast]
- [5x] -void-pointer-to-int-cast
  - src\client\cl_cgame.c(697,10): warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src\client\cl_cgame.c(699,10): warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src\client\cl_ui.c(1086,10): warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src\client\cl_ui.c(1089,10): warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - yz( glConfig.src\sys\win32\win_input.c(r860e,nd7): warning: cast to smaller integer type 'unsigned long' from 'void *' [-Wvoid-pointer-to-int-cast]e
- [5x] -unused-variable
  - ring, qglGetString( GL_RENDERER ), sizeof( glConfig.rendersrc\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - warning: unused variable 'df' [-Wunused-variable]
  - chsrc\sys\win32\win_input.ca(r258 ,*22d)e: warning: unused variable 'g_pdi' [-Wunused-variable]st, const char
  - src\sys\win32\win_input.c(259src\sys\win32\win_glimp.c,(28)1351:, 39)warning: : unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(708,22): warning: unused variable 'stream' [-Wunused-variable]
- [4x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(107,18): warning: unused variable 'numTeamArenaGameNames' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(119,18): warning: unused variable 'numSortKeys' [-Wunused-const-variable]
- [4x] -unused-function
  - src\sys\win32\win_shared.c(103,12): warning: unused function 'IsPentium' [-Wunused-function]
  - src\sys\win32\win_shared.c(107,12): warning: unused function 'Is3DNOW' [-Wunused-function]
  - src\sys\win32\win_shared.c(147,12): warning: unused function 'IsKNI' [-Wunused-function]
  - src\sys\win32\win_shared.c(161,12): warning: unused function 'IsMMX' [-Wunused-function]
- [3x] -deprecated-declarations
  - ,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(1111,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1170,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [2x] -array-bounds
  - src\renderer\tr_image.c(3712,59): warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src\renderer\tr_shade_calc.c(679,2): warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src\renderer\tr_shader.c(986,23): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src\renderer\tr_shader.c(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -sizeof-pointer-memaccess
  - src\qcommon\cvar.c(764,28): warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
  - src\games\game\ai_cast.c(501,33): warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'struct cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'struct cast_state_s *') [-Wsizeof-pointer-memaccess]
- [2x] -int-to-void-pointer-cast
  - src\qcommon\vm.c(61,9): warning: cast to 'void *' from smaller integer type 'vmptr_t' (aka 'int') [-Wint-to-void-pointer-cast]
  - src\qcommon\vm.c(173,8): warning: cast to 'void *' from smaller integer type 'int' [-Wint-to-void-pointer-cast]
- [2x] -unneeded-internal-declaration
  - src\games\ui\ui_main.c(95,20): warning: variable 'teamArenaGameNames' is not needed and will not be emitted [-Wunneeded-internal-declaration]
  - src\games\ui\ui_main.c(112,20): warning: variable 'sortKeys' is not needed and will not be emitted [-Wunneeded-internal-declaration]
- [1x] -strncat-size
  - src\client\cl_main.c(2837,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src\qcommon\common.c(1800,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] need to modify cg_event.c at "// check the sequencial list" if you change this
  - 995 |         { NETF( eventSequence ), 8 }, // warning: need to modify cg_event.c at "// check the sequencial list" if you change this
- [1x] -parentheses-equality
  - src\qcommon\unzip.c(2066,45): warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -format
  - src\qcommon\vm.c(844,54): warning: format specifies type 'int' but the argument has type '__ptrdiff_t' (aka 'long long') [-Wformat]
- [1x] -cast-function-type-mismatch
  - src\sys\win32\win_syscon.c(283,21): warning: cast from 'LONG (*)(HWND, UINT, WPARAM, LPARAM) __attribute__((stdcall))' (aka 'long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') to 'WNDPROC' (aka 'long long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') converts to incompatible function type [-Wcast-function-type-mismatch]

## windows-latest-x86-debug

status: failure

errors: 10
warnings: 1207 in 22 kinds

### errors

lld-link: error: duplicate symbol: _r_fullscreen
scons: *** [build\windows-x86-debug\WolfSP.exe] Error 1
lld-link: error: undefined symbol: __VectorScale
>>> referenced by build\windows-x86-debug\game\obj\games\game\g_save.c.obj:(_funcList)
lld-link: error: undefined symbol: __VectorCopy
lld-link: error: undefined symbol: __VectorAdd
lld-link: error: undefined symbol: __VectorSubtract
lld-link: error: undefined symbol: __DotProduct
lld-link: error: undefined symbol: __VectorMA
scons: *** [build\windows-x86-debug\qagame.dll] Error 1

### failure context

- build\windows-x86-debug\WolfSP.exe

```
src\games\game\ai_cast_script_actions.c(764,29): warning: variable 'setAngles' set but not used [-Wunused-but-set-variable]
  764 |         qboolean forever = qfalse, setAngles = qfalse;
      |                                    ^
src\games\game\ai_cast_funcs.c(4355,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
 4355 |         int   src\games\game\ai_cast_script_actions.c (1443,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  1443* | a        mimfo ;(
       !| g                 ^_
ensrc\games\game\ai_cast_funcs.ct(i4361t,i6e)s:[ cwarning: svariable 'weapon' set but not used [-Wunused-but-set-variable]-
>e n4361t | i        tiynNtu mw]e.acploine;n
t      -| >            ^p
s.weapons ) {
      |              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~
src\games\game\ai_cast_funcs.c(4663,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
 4663 |         gentity_t *ent;
      |                    ^
src\games\game\ai_cast_script_actions.c(1658,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
 1658 |                 diff = abs( AngleDifference( cs->bs->cur_ps.viewangles[i], cs->ideal_viewangles[i] ) );
      |                        ^
src\games\game\ai_cast_script_actions.c(1658,10): note: use function 'fabsf' instead
 1658 |                 diff = abs( AngleDifference( cs->bs->cur_ps.viewangles[i], cs->ideal_viewangles[i] ) );
      |                        ^~~
      |                        fabsf
src\games\game\ai_cast_funcs.c(4714,6): warning: variable 'tfl' set but not used [-Wunused-but-set-variable]
 4714 |         int tfl;
      |             ^
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\ai_cast_script_ents.c.obj /c src\games\game\ai_cast_script_ents.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\
src\games\game\ai_cast_script_actions.c(2706,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
 2706 |         gentity_t *ent;
      |                    ^
6 warnings generated.
scons: *** [build\windows-x86-debug\WolfSP.exe] Error 1
```

- build\windows-x86-debug\qagame.dll

```
src\games\cgame\cg_weapons.c(6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
 6041 |         int anim;
      |             ^
src\games\ui\ui_shared.c(4173,13): src\games\cgame\cg_weapons.c(6088,13): warning: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
variable 'parent' set but not used [-Wunused-but-set-variable]
 6088  | 4173         | c        emnetniutDye_ft_ t* c*epnatr;e
n      t| ;                   ^

      |                    ^
src\games\ui\ui_shared.c(4820,14): warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
 4820 |         modelDef_t *modelPtr;
      |                     ^
clang-cl /Fobuild\windows-x86-debug\cgame\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bota
lld-link: error: undefined symbol: __VectorScale
>>> referenced by build\windows-x86-debug\game\obj\games\game\g_save.c.obj:(_funcList)

lld-link: error: undefined symbol: __VectorCopy
>>> referenced by build\windows-x86-debug\game\obj\games\game\g_save.c.obj:(_funcList)

lld-link: error: undefined symbol: __VectorAdd
>>> referenced by build\windows-x86-debug\game\obj\games\game\g_save.c.obj:(_funcList)

lld-link: error: undefined symbol: __VectorSubtract
>>> referenced by build\windows-x86-debug\game\obj\games\game\g_save.c.obj:(_funcList)

lld-link: error: undefined symbol: __DotProduct
>>> referenced by build\windows-x86-debug\game\obj\games\game\g_save.c.obj:(_funcList)

lld-link: error: undefined symbol: __VectorMA
>>> referenced by build\windows-x86-debug\game\obj\games\game\g_save.c.obj:(_funcList)
scons: *** [build\windows-x86-debug\qagame.dll] Error 1
```


### warning kinds

- [493x] -missing-field-initializers
  - src\renderer\tr_shader.c(1817,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2082,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2083,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2084,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(144,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,10): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,40): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,52): warning: 3missing field 'maxarray' initializer [-Wmissing-field-initializers] warning
  - src\games\botlib\be_ai_weap.c(70,57): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,59): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
- [337x] -incompatible-function-pointer-types
  - src\sys\win32\win_qgl.c(2939,42): warning: incompatible function pointer types assigning to 'void (*)(GLenum, GLfloat) __attribute__((stdcall))' (aka 'void (*)(unsigned int, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2940,46): warning: incompatible function pointer types assigning to 'void (*)(GLenum, GLclampf) __attribute__((stdcall))' (aka 'void (*)(unsigned int, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2941,56): warning: incompatible function pointer types assigning to 'GLboolean (*)(GLsizei, const GLuint *, GLboolean *) __attribute__((stdcall))' (aka 'unsigned char (*)(int, const unsigned int *, unsigned char *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2942,49): warning: incompatible function pointer types assigning to 'void (*)(GLint) __attribute__((stdcall))' (aka 'void (*)(int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2943,42): warning: incompatible function pointer types assigning to 'void (*)(GLenum) __attribute__((stdcall))' (aka 'void (*)(unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2944,48): warning: incompatible function pointer types assigning to 'void (*)(GLenum, GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2945,43): warning: incompatible function pointer types assigning to 'void (*)(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *) __attribute__((stdcall))' (aka 'void (*)(int, int, float, float, float, float, const unsigned char *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2946,46): warning: incompatible function pointer types assigning to 'void (*)(GLenum, GLenum) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2947,45): warning: incompatible function pointer types assigning to 'void (*)(GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2948,46): warning: incompatible function pointer types assigning to 'void (*)(GLsizei, GLenum, const GLvoid *) __attribute__((stdcall))' (aka 'void (*)(int, unsigned int, const void *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2949,42): warning: incompatible function pointer types assigning to 'void (*)(GLbitfield) __attribute__((stdcall))' (aka 'void (*)(unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2950,47): warning: incompatible function pointer types assigning to 'void (*)(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((stdcall))' (aka 'void (*)(float, float, float, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2951,47): warning: incompatible function pointer types assigning to 'void (*)(GLclampf, GLclampf, GLclampf, GLclampf) __attribute__((stdcall))' (aka 'void (*)(float, float, float, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2952,47): warning: incompatible function pointer types assigning to 'void (*)(GLclampd) __attribute__((stdcall))' (aka 'void (*)(double) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2953,47): warning: incompatible function pointer types assigning to 'void (*)(GLfloat) __attribute__((stdcall))' (aka 'void (*)(float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2954,49): warning: incompatible function pointer types assigning to 'void (*)(GLint) __attribute__((stdcall))' (aka 'void (*)(int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2955,46): warning: incompatible function pointer types assigning to 'void (*)(GLenum, const GLdouble *) __attribute__((stdcall))' (aka 'void (*)(unsigned int, const double *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2956,44): warning: incompatible function pointer types assigning to 'void (*)(GLbyte, GLbyte, GLbyte) __attribute__((stdcall))' (aka 'void (*)(signed char, signed char, signed char) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2957,45): warning: incompatible function pointer types assigning to 'void (*)(const GLbyte *) __attribute__((stdcall))' (aka 'void (*)(const signed char *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2958,44): warning: incompatible function pointer types assigning to 'void (*)(GLdouble, GLdouble, GLdouble) __attribute__((stdcall))' (aka 'void (*)(double, double, double) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2959,45): warning: incompatible function pointer types assigning to 'void (*)(const GLdouble *) __attribute__((stdcall))' (aka 'void (*)(const double *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2960,44): warning: incompatible function pointer types assigning to 'void (*)(GLfloat, GLfloat, GLfloat) __attribute__((stdcall))' (aka 'void (*)(float, float, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2961,45): warning: incompatible function pointer types assigning to 'void (*)(const GLfloat *) __attribute__((stdcall))' (aka 'void (*)(const float *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2962,44): warning: incompatible function pointer types assigning to 'void (*)(GLint, GLint, GLint) __attribute__((stdcall))' (aka 'void (*)(int, int, int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2963,45): warning: incompatible function pointer types assigning to 'void (*)(const GLint *) __attribute__((stdcall))' (aka 'void (*)(const int *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2964,44): warning: incompatible function pointer types assigning to 'void (*)(GLshort, GLshort, GLshort) __attribute__((stdcall))' (aka 'void (*)(short, short, short) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2965,45): warning: incompatible function pointer types assigning to 'void (*)(const GLshort *) __attribute__((stdcall))' (aka 'void (*)(const short *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2966,45): warning: incompatible function pointer types assigning to 'void (*)(GLubyte, GLubyte, GLubyte) __attribute__((stdcall))' (aka 'void (*)(unsigned char, unsigned char, unsigned char) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2967,46): warning: incompatible function pointer types assigning to 'void (*)(const GLubyte *) __attribute__((stdcall))' (aka 'void (*)(const unsigned char *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2968,45): warning: incompatible function pointer types assigning to 'void (*)(GLuint, GLuint, GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int, unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
- [202x] -unused-but-set-variable
  - src\renderer\tr_bsp.c(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_flares.c(128,23): warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_font.c(351,8): warning: variable 'glyphScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(2203,8): warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3445,8): warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3603,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_main.c(1181,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.c(1883,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.c(103,6): warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.c(103,15): warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(1067,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(185,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2745,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2849,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3548,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3549,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3550,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
  - src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src\client\cl_scrn.c(386,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\client\cl_ui.c(1195,16): warning: variable 'interpret' set but not used [-Wunused-but-set-variable]
  - src\client\snd_dma.c(558,8): warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src\client\snd_mix.c(793,10): warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(738,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(824,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
- [39x] -pointer-sign
  - src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1349,38): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1350,40): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1351,39): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1352,42): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(265,31): warning: passing 'byte *' (aka 'unsigned char *') to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(583,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(590,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(630,28): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(637,29): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(660,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(667,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1940,14): warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1955,20): warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1986,8): warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(387,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(403,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(450,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(466,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(508,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(518,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(526,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(542,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_info.c(79,14): warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1719,23): warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1721,5): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1723,9): warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1755,23): warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1758,6): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [30x] -writable-strings
  - src\splines\splines.cpp(483,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(487,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(491,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(564,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(568,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(577,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(580,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(865,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(868,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(871,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(972,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(974,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(976,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(978,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1256,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1259,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1262,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1265,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1268,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1278,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1281,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1284,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1287,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1291,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1298,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1301,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1308,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1311,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1313,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1320,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [27x] -absolute-value
  - src\client\cl_cin.c(1518,43): warning: taking the absolute value of unsigned type 'unsigned int' has no effect [-Wabsolute-value]
  - src\client\cl_input.c(660,20): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\client\cl_input.c(663,20): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_move.c(164,8): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2353,25): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2354,25): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2364,8): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2491,11): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_ai_move.c(2154,8): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_funcs.c(597,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_funcs.c(893,9): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_funcs.c(2560,11): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_script_actions.c(167,16): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_script_actions.c(352,16): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_script_actions.c(1658,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botai\ai_main.c(361,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botai\ai_main.c(450,17): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\cgame\cg_flamethrower.c(1344,13): warning: using floating point absolute value function 'fabs' when argument is of integer type [-Wabsolute-value]
  - src\games\ui\ui_shared.c(1365,34): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\ui\ui_shared.c(1366,34): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\ui\ui_shared.c(1367,34): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\ui\ui_shared.c(1368,34): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\cgame\cg_weapons.c(1805,22): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
- [18x] -invalid-source-encoding
  - src\client\cl_keys.c(197,5): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(450,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(452,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(469,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(470,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(474,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(475,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(476,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(477,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(478,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(535,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(541,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(570,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(595,9): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(607,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(666,16): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(667,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(680,4): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
- [10x] -pointer-bool-conversion
  - src\client\snd_dma.c(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.c(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.c(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - 4355 |         int   src\games\game\ai_cast_script_actions.c (1443,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.c(950,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.c(962,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.c(974,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.c(1142,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.c(1483,7): warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.c(1541,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [7x] -extern-initializer
  - src\sys\win32\win_input.c(211,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(212,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(213,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(214,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(146,14): warning: src\sys\win32\win_qgl.c'extern' variable has an initializer [-Wextern-initializer](
  - 3096 |         qglLoadMatrixf               =  dllLoadMatrixf               = GPA( "glLoasrc\sys\win32\win_snd.cdM(a149t,r14i)x:f "warning:  'extern' variable has an initializer [-Wextern-initializer])
  - 3099 |         qglsrc\sys\win32\win_snd.cM(a152p,114d) :   warning:  'extern' variable has an initializer [-Wextern-initializer]
- [6x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(600,13): warning: unused variable 'lastWarning' [-Wunused-variable]
  - src\sys\win32\win_main.c(708,22): warning: unused variable 'stream' [-Wunused-variable]
- [4x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(107,18): warning: unused variable 'numTeamArenaGameNames' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(119,18): warning: unused variable 'numSortKeys' [-Wunused-const-variable]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(153,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(1111,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1170,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [2x] -array-bounds
  - src\renderer\tr_image.c(3712,59): warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src\renderer\tr_shade_calc.c(679,2): warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src\renderer\tr_shader.c(986,23): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src\renderer\tr_shader.c(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -sizeof-pointer-memaccess
  - src\qcommon\cvar.c(764,28): warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
  - src\games\game\ai_cast.c(501,33): warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'struct cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'struct cast_state_s *') [-Wsizeof-pointer-memaccess]
- [2x] -unneeded-internal-declaration
  - src\games\ui\ui_main.c(95,20): warning: variable 'teamArenaGameNames' is not needed and will not be emitted [-Wunneeded-internal-declaration]
  - src\games\ui\ui_main.c(112,20): warning: variable 'sortKeys' is not needed and will not be emitted [-Wunneeded-internal-declaration]
- [1x] -strncat-size
  - src\client\cl_main.c(2837,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src\qcommon\common.c(1800,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src\qcommon\unzip.c(2066,45): warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -cast-calling-convention
  - src\sys\win32\win_glimp.c(1541,3): warning: cast between incompatible calling conventions 'cdecl' and 'stdcall'; calls through this pointer may abort at runtime [-Wcast-calling-convention]
- [1x] src\games\ui\ui_shared.c( 34474167, | 46        )in:t  lastweap;warning:
  - src\games\ui\ui_shared.c( 34474167, | 46        )in:t  lastweap;warning:

## windows-latest-x86-release

status: failure

errors: 10
warnings: 1210 in 22 kinds

### errors

lld-link: error: duplicate symbol: _r_fullscreen
scons: *** [build\windows-x86-release\WolfSP.exe] Error 1
lld-link: error: undefined symbol: __VectorScale
>>> referenced by build\windows-x86-release\game\obj\games\game\g_save.c.obj:(_funcList)
lld-link: error: undefined symbol: __VectorCopy
lld-link: error: undefined symbol: __VectorAdd
lld-link: error: undefined symbol: __VectorSubtract
lld-link: error: undefined symbol: __DotProduct
lld-link: error: undefined symbol: __VectorMA
scons: *** [build\windows-x86-release\qagame.dll] Error 1

### failure context

- build\windows-x86-release\WolfSP.exe

```
src\games\game\ai_cast_script_actions.c(167,16): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  167 |                                                                 diff = abs( AngleDifference( cs->viewangles[i], cs->ideal_viewangles[i] ) );
      |                                                                        ^
src\games\game\ai_cast_script_actions.c(167,16): note: use function 'fabsf' instead
  167 |                                                                 diff = abs( AngleDifference( cs->viewangles[i], cs->ideal_viewangles[i] ) );
      |                                                                        ^~~
      |                                                                        fabsf
src\games\game\ai_cast_script_actions.c(352,16): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  352 |                                                                 diff = abs( AngleDifference( cs->viewangles[i], cs->ideal_viewangles[i] ) );
      |                                                                        ^
src\games\game\ai_cast_script_actions.c(352,16): note: use function 'fabsf' instead
  352 |                                                                 diff = abs( AngleDifference( cs->viewangles[i], cs->ideal_viewangles[i] ) );
      |                                                                        ^~~
      |                                                                        fabsf
src\games\game\ai_cast_script_actions.c(764,29): warning: variable 'setAngles' set but not used [-Wunused-but-set-variable]
  764 |         qboolean forever = qfalse, setAngles = qfalse;
      |                                    ^
src\games\game\ai_cast_script_actions.c(1443,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1443 |         if ( !g_entities[cs->entityNum].client->ps.weapons ) {
      |              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~
src\games\game\ai_cast_script_actions.c(1658,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
 1658 |                 diff = abs( AngleDifference( cs->bs->cur_ps.viewangles[i], cs->ideal_viewangles[i] ) );
      |                        ^
src\games\game\ai_cast_script_actions.c(1658,10): note: use function 'fabsf' instead
 1658 |                 diff = abs( AngleDifference( cs->bs->cur_ps.viewangles[i], cs->ideal_viewangles[i] ) );
      |                        ^~~
      |                        fabsf
src\games\game\ai_cast_script_actions.c(2706,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
 2706 |         gentity_t *ent;
      |                    ^
scons: *** [build\windows-x86-release\WolfSP.exe] Error 1
```

- build\windows-x86-release\qagame.dll

```
src\games\ui\ui_shared.c(3550,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
 3550 |         {"kill",         -1,             -1, -1, -1}
      |                                                    ^
src\games\ui\ui_shared.c(3712,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
 3712 |         float x, y, value;
      |                     ^
src\games\ui\ui_shared.c(4173,13): warning: variable 'parent' set but not used [-Wunused-but-set-variable]
 4173 |         menuDef_t *parent;
      |                    ^
src\games\ui\ui_shared.c(4820,14): warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
 4820 |         modelDef_t *modelPtr;
      |                     ^
clang-cl /Fobuild\windows-x86-release\cgame\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types /O2 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\gam
lld-link: error: undefined symbol: __VectorScale
>>> referenced by build\windows-x86-release\game\obj\games\game\g_save.c.obj:(_funcList)

lld-link: error: undefined symbol: __VectorCopy
>>> referenced by build\windows-x86-release\game\obj\games\game\g_save.c.obj:(_funcList)

lld-link: error: undefined symbol: __VectorAdd
>>> referenced by build\windows-x86-release\game\obj\games\game\g_save.c.obj:(_funcList)

lld-link: error: undefined symbol: __VectorSubtract
>>> referenced by build\windows-x86-release\game\obj\games\game\g_save.c.obj:(_funcList)

lld-link: error: undefined symbol: __DotProduct
>>> referenced by build\windows-x86-release\game\obj\games\game\g_save.c.obj:(_funcList)

lld-link: error: undefined symbol: __VectorMA
>>> referenced by build\windows-x86-release\game\obj\games\game\g_save.c.obj:(_funcList)
scons: *** [build\windows-x86-release\qagame.dll] Error 1
```


### warning kinds

- [494x] -missing-field-initializers
  - src\renderer\tr_shader.c(1817,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2082,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2083,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2084,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(144,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,10): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,40): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,52): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(70,57): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,59): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
- [336x] -incompatible-function-pointer-types
  - src\sys\win32\win_qgl.c(2939,42): warning: incompatible function pointer types assigning to 'void (*)(GLenum, GLfloat) __attribute__((stdcall))' (aka 'void (*)(unsigned int, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2940,46): warning: incompatible function pointer types assigning to 'void (*)(GLenum, GLclampf) __attribute__((stdcall))' (aka 'void (*)(unsigned int, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2941,56): warning: incompatible function pointer types assigning to 'GLboolean (*)(GLsizei, const GLuint *, GLboolean *) __attribute__((stdcall))' (aka 'unsigned char (*)(int, const unsigned int *, unsigned char *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2942,49): warning: incompatible function pointer types assigning to 'void (*)(GLint) __attribute__((stdcall))' (aka 'void (*)(int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2943,42): warning: incompatible function pointer types assigning to 'void (*)(GLenum) __attribute__((stdcall))' (aka 'void (*)(unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2944,48): warning: incompatible function pointer types assigning to 'void (*)(GLenum, GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2945,43): warning: incompatible function pointer types assigning to 'void (*)(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *) __attribute__((stdcall))' (aka 'void (*)(int, int, float, float, float, float, const unsigned char *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2946,46): warning: incompatible function pointer types assigning to 'void (*)(GLenum, GLenum) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2947,45): warning: incompatible function pointer types assigning to 'void (*)(GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2948,46): warning: incompatible function pointer types assigning to 'void (*)(GLsizei, GLenum, const GLvoid *) __attribute__((stdcall))' (aka 'void (*)(int, unsigned int, const void *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2949,42): warning: incompatible function pointer types assigning to 'void (*)(GLbitfield) __attribute__((stdcall))' (aka 'void (*)(unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2950,47): warning: incompatible function pointer types assigning to 'void (*)(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((stdcall))' (aka 'void (*)(float, float, float, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2951,47): warning: incompatible function pointer types assigning to 'void (*)(GLclampf, GLclampf, GLclampf, GLclampf) __attribute__((stdcall))' (aka 'void (*)(float, float, float, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2952,47): warning: incompatible function pointer types assigning to 'void (*)(GLclampd) __attribute__((stdcall))' (aka 'void (*)(double) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2953,47): warning: incompatible function pointer types assigning to 'void (*)(GLfloat) __attribute__((stdcall))' (aka 'void (*)(float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2954,49): warning: incompatible function pointer types assigning to 'void (*)(GLint) __attribute__((stdcall))' (aka 'void (*)(int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2955,46): warning: incompatible function pointer types assigning to 'void (*)(GLenum, const GLdouble *) __attribute__((stdcall))' (aka 'void (*)(unsigned int, const double *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2956,44): warning: incompatible function pointer types assigning to 'void (*)(GLbyte, GLbyte, GLbyte) __attribute__((stdcall))' (aka 'void (*)(signed char, signed char, signed char) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2957,45): warning: incompatible function pointer types assigning to 'void (*)(const GLbyte *) __attribute__((stdcall))' (aka 'void (*)(const signed char *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2958,44): warning: incompatible function pointer types assigning to 'void (*)(GLdouble, GLdouble, GLdouble) __attribute__((stdcall))' (aka 'void (*)(double, double, double) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2959,45): warning: incompatible function pointer types assigning to 'void (*)(const GLdouble *) __attribute__((stdcall))' (aka 'void (*)(const double *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2960,44): warning: incompatible function pointer types assigning to 'void (*)(GLfloat, GLfloat, GLfloat) __attribute__((stdcall))' (aka 'void (*)(float, float, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2961,45): warning: incompatible function pointer types assigning to 'void (*)(const GLfloat *) __attribute__((stdcall))' (aka 'void (*)(const float *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2962,44): warning: incompatible function pointer types assigning to 'void (*)(GLint, GLint, GLint) __attribute__((stdcall))' (aka 'void (*)(int, int, int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2963,45): warning: incompatible function pointer types assigning to 'void (*)(const GLint *) __attribute__((stdcall))' (aka 'void (*)(const int *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2964,44): warning: incompatible function pointer types assigning to 'void (*)(GLshort, GLshort, GLshort) __attribute__((stdcall))' (aka 'void (*)(short, short, short) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2965,45): warning: incompatible function pointer types assigning to 'void (*)(const GLshort *) __attribute__((stdcall))' (aka 'void (*)(const short *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2966,45): warning: incompatible function pointer types assigning to 'void (*)(GLubyte, GLubyte, GLubyte) __attribute__((stdcall))' (aka 'void (*)(unsigned char, unsigned char, unsigned char) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2967,46): warning: incompatible function pointer types assigning to 'void (*)(const GLubyte *) __attribute__((stdcall))' (aka 'void (*)(const unsigned char *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
  - src\sys\win32\win_qgl.c(2968,45): warning: incompatible function pointer types assigning to 'void (*)(GLuint, GLuint, GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int, unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
- [205x] -unused-but-set-variable
  - src\renderer\tr_bsp.c(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_flares.c(128,23): warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_font.c(351,8): warning: variable 'glyphScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(2203,8): warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3445,8): warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3603,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_main.c(1181,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.c(1883,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.c(103,6): warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.c(103,15): warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_sky.c(717,15): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(1067,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(185,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2745,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2849,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3548,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3549,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3550,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
  - src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src\client\cl_scrn.c(386,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\client\cl_ui.c(1195,16): warning: variable 'interpret' set but not used [-Wunused-but-set-variable]
  - src\client\snd_dma.c(558,8): warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src\client\snd_mix.c(793,10): warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(738,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
- [39x] -pointer-sign
  - src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1349,38): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1350,40): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1351,39): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1352,42): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(265,31): warning: passing 'byte *' (aka 'unsigned char *') to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(583,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(590,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(630,28): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(637,29): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(660,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(667,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1940,14): warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1955,20): warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1986,8): warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(387,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(403,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(450,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(466,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(508,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(518,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(526,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(542,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_info.c(79,14): warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1719,23): warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1721,5): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1723,9): warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1755,23): warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1758,6): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [30x] -writable-strings
  - src\splines\splines.cpp(483,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(487,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(491,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(564,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(568,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(577,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(580,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(865,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(868,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(871,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(972,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(974,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(976,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(978,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1256,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1259,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1262,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1265,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1268,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1278,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1281,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1284,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1287,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1291,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1298,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1301,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1308,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1311,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1313,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1320,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [27x] -absolute-value
  - src\client\cl_cin.c(1518,43): warning: taking the absolute value of unsigned type 'unsigned int' has no effect [-Wabsolute-value]
  - src\client\cl_input.c(660,20): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\client\cl_input.c(663,20): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_move.c(164,8): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2353,25): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2354,25): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2364,8): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2491,11): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_ai_move.c(2154,8): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_funcs.c(597,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_funcs.c(893,9): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_funcs.c(2560,11): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_script_actions.c(167,16): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_script_actions.c(352,16): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_script_actions.c(1658,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botai\ai_main.c(361,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botai\ai_main.c(450,17): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\cgame\cg_flamethrower.c(1344,13): warning: using floating point absolute value function 'fabs' when argument is of integer type [-Wabsolute-value]
  - src\games\cgame\cg_weapons.c(1805,22): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\ui\ui_shared.c(1365,34): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\ui\ui_shared.c(1366,34): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\ui\ui_shared.c(1367,34): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\ui\ui_shared.c(1368,34): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
- [18x] -invalid-source-encoding
  - src\client\cl_keys.c(197,5): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(450,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(452,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(469,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(470,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(474,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(475,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(476,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(477,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(478,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(535,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(541,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(570,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(595,9): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(607,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(666,16): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(667,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(680,4): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
- [10x] -pointer-bool-conversion
  - src\client\snd_dma.c(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.c(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.c(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai_cast_script_actions.c(1443,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.c(950,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.c(962,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.c(974,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.c(1142,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.c(1483,7): warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.c(1541,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [8x] -extern-initializer
  - src\sys\win32\win_input.c(211,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(212,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(213,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(214,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - 3066src\sys\win32\win_snd.c(146 | ,14        )q:gl Iwarning: n'extern' variable has an initializer [-Wextern-initializer]d
  - 3067 |         qglIndexPointer              =  dllIndexPointer              = GPAsrc\sys\win32\win_snd.c(( 149",g14l)I:n dwarning: e'extern' variable has an initializer [-Wextern-initializer]x
  - lIndexd                  src\sys\win32\win_snd.c  =( 151G,P14A)(:  "warning: g'extern' variable has an initializer [-Wextern-initializer]l
  - ): warning: 'extern' variable has an initializer [-Wextern-initializer]
- [5x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(708,22): warning: unused variable 'stream' [-Wunused-variable]
- [4x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(107,18): warning: unused variable 'numTeamArenaGameNames' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(119,18): warning: unused variable 'numSortKeys' [-Wunused-const-variable]
- [3x] -deprecated-declarations
  - src\sys\win32\win_glimp.c(1111,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_gamma.c(153,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1170,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [2x] -array-bounds
  - src\renderer\tr_image.c(3712,59): warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src\renderer\tr_shade_calc.c(679,2): warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src\renderer\tr_shader.c(986,23): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src\renderer\tr_shader.c(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -sizeof-pointer-memaccess
  - src\qcommon\cvar.c(764,28): warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
  - src\games\game\ai_cast.c(501,33): warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'struct cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'struct cast_state_s *') [-Wsizeof-pointer-memaccess]
- [2x] -unneeded-internal-declaration
  - src\games\ui\ui_main.c(95,20): warning: variable 'teamArenaGameNames' is not needed and will not be emitted [-Wunneeded-internal-declaration]
  - src\games\ui\ui_main.c(112,20): warning: variable 'sortKeys' is not needed and will not be emitted [-Wunneeded-internal-declaration]
- [1x] -strncat-size
  - src\client\cl_main.c(2837,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src\qcommon\common.c(1800,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src\qcommon\unzip.c(2066,45): warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -cast-calling-convention
  - src\sys\win32\win_glimp.c(1541,3): warning: cast between incompatible calling conventions 'cdecl' and 'stdcall'; calls through this pointer may abort at runtime [-Wcast-calling-convention]
- [1x] 4, 0x0, 0x0 );
  - 93, 0xbc, 0x44, 0x45, 0src\sys\win32\win_qgl.cx(530673,,63 )0:x 5warning: 4, 0x0, 0x0 );

