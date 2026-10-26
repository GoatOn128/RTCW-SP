# Build digest

commit: 5c6809f67194

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

errors: 19
warnings: 412 in 21 kinds

### errors

src/sys/unix/unix_main.c:663:2: error: Unknown arch
scons: *** [build/linux-x64-debug/client/obj/sys/unix/unix_main.c.o] Error 1
scons: *** Do not know how to make File target `build/linux-x64-debug/qagame' (/home/runner/work/RTCW-SP/RTCW-SP/build/linux-x64-debug/qagame).
src/games/cgame/../ui/ui_shared.h:37:10: fatal error: '../../main/ui/menudef.h' file not found
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_consolecmds.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_draw.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_event.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_info.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_main.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_newDraw.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_servercmds.c.o] Error 1
src/games/ui/ui_shared.h:37:10: fatal error: '../../main/ui/menudef.h' file not found
scons: *** [build/linux-x64-debug/cgame/obj/games/ui/ui_shared.c.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_atoms.c.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_gameinfo.c.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_players.c.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_syscalls.c.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_main.c.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_shared.c.o] Error 1

### warning kinds

- [200x] -pointer-to-int-cast
  - src/renderer/tr_bsp.c:379:14: warning: cast to smaller integer type 'int' from 'float (*)[8]' [-Wpointer-to-int-cast]
  - src/renderer/tr_init.c:1177:7: warning: cast to smaller integer type 'int' from 'vec4_t *' (aka 'float (*)[4]') [-Wpointer-to-int-cast]
  - src/client/cl_cgame.c:701:10: warning: cast to smaller integer type 'int' from 'char *' [-Wpointer-to-int-cast]
  - warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
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
- [110x] -unused-but-set-variable
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
  - src/client/cl_cin.c:1105:src/client/cl_cgame.c39::1067:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
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
  - src/qcommon/cm_trace.c:824:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
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
- [16x] -pointer-sign
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
- [13x] -absolute-value
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
  - src/games/cgame/cg_flamethrower.c:1344:13: warning: using floating point absolute value function 'fabs' when argument is of integer type [-Wabsolute-value]
  - src/games/cgame/cg_weapons.c:1805:22: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
- [4x] -void-pointer-to-int-cast
  - src/client/cl_cgame.c:697:10: warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src/client/cl_cgame.c:699:10: warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src/client/cl_ui.c:1086:10: warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src/client/cl_ui.c:1089:10: warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
- [4x] -pointer-bool-conversion
  - src/client/snd_dma.c:1857:19: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.c:2171:11: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.c:2487:15: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_weapons.c:1142:10: warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [2x] -array-bounds
  - src/renderer/tr_image.c:3712:59: warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src/renderer/tr_shade_calc.c:679:2: warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src/renderer/tr_shader.c:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src/renderer/tr_shader.c:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -int-to-pointer-cast
  - src/qcommon/common.c:1098:15: warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src/server/sv_client.c:416:11: warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
- [2x] -int-to-void-pointer-cast
  - src/qcommon/vm.c:61:9: warning: cast to 'void *' from smaller integer type 'vmptr_t' (aka 'int') [-Wint-to-void-pointer-cast]
  - src/qcommon/vm.c:173:8: warning: cast to 'void *' from smaller integer type 'int' [-Wint-to-void-pointer-cast]
- [1x] -strncat-size
  - src/client/cl_main.c:2837:25: warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src/qcommon/common.c:1800:2: warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -sizeof-pointer-memaccess
  - src/qcommon/cvar.c:764:28: warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
- [1x] need to modify cg_event.c at "// check the sequencial list" if you change this
  - 995 |         { NETF( eventSequence ), 8 }, // warning: need to modify cg_event.c at "// check the sequencial list" if you change this
- [1x] -parentheses-equality
  - src/qcommon/unzip.c:2066:45: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] -format
  - src/qcommon/vm.c:848:54: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]

## ubuntu-latest-x64-release

status: failure

errors: 19
warnings: 414 in 21 kinds

### errors

src/sys/unix/unix_main.c:663:2: error: Unknown arch
scons: *** [build/linux-x64-release/client/obj/sys/unix/unix_main.c.o] Error 1
scons: *** Do not know how to make File target `build/linux-x64-release/qagame' (/home/runner/work/RTCW-SP/RTCW-SP/build/linux-x64-release/qagame).
src/games/cgame/../ui/ui_shared.h:37:10: fatal error: '../../main/ui/menudef.h' file not found
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_consolecmds.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_draw.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_event.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_info.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_main.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_newDraw.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_servercmds.c.o] Error 1
src/games/ui/ui_shared.h:37:10: fatal error: '../../main/ui/menudef.h' file not found
scons: *** [build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_atoms.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_gameinfo.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_players.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_syscalls.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_main.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o] Error 1

### warning kinds

- [200x] -pointer-to-int-cast
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
- [112x] -unused-but-set-variable
  - src/renderer/tr_bsp.c:147:9: warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_flares.c:128:23: warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_font.c:351:8: warning: variable 'glyphScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:2203:8: warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3445:8: warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3603:20: warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_main.c:1181:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.c:1883:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
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
- [16x] -pointer-sign
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
- [13x] -absolute-value
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
  - src/games/cgame/cg_flamethrower.c:1344:13: warning: using floating point absolute value function 'fabs' when argument is of integer type [-Wabsolute-value]
  - src/games/cgame/cg_weapons.c:1805:22: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
- [4x] -void-pointer-to-int-cast
  - src/client/cl_cgame.c:697:10: warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src/client/cl_cgame.c:699:10: warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src/client/cl_ui.c:1086:10: warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src/client/cl_ui.c:1089:10: warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
- [4x] -pointer-bool-conversion
  - src/client/snd_dma.c:1857:19: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.c:2171:11: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.c:2487:15: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_weapons.c:1142:10: warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [2x] -array-bounds
  - src/renderer/tr_image.c:3712:59: warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src/renderer/tr_shade_calc.c:679:2: warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src/renderer/tr_shader.c:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src/renderer/tr_shader.c:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -int-to-pointer-cast
  - src/qcommon/common.c:1098:15: warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src/server/sv_client.c:416:11: warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
- [2x] -int-to-void-pointer-cast
  - src/qcommon/vm.c:61:9: warning: cast to 'void *' from smaller integer type 'vmptr_t' (aka 'int') [-Wint-to-void-pointer-cast]
  - src/qcommon/vm.c:173:8: warning: cast to 'void *' from smaller integer type 'int' [-Wint-to-void-pointer-cast]
- [1x] -strncat-size
  - src/client/cl_main.c:2837:25: warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src/qcommon/common.c:1800:2: warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -sizeof-pointer-memaccess
  - src/qcommon/cvar.c:764:28: warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
- [1x] need to modify cg_event.c at "// check the sequencial list" if you change this
  - 995 |         { NETF( eventSequence ), 8 }, // warning: need to modify cg_event.c at "// check the sequencial list" if you change this
- [1x] -parentheses-equality
  - src/qcommon/unzip.c:2066:45: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] -format
  - src/qcommon/vm.c:848:54: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]

## ubuntu-latest-x86-debug

status: failure

errors: 35
warnings: 203 in 17 kinds

### errors

scons: *** Do not know how to make File target `build/linux-x86-debug/qagame' (/home/runner/work/RTCW-SP/RTCW-SP/build/linux-x86-debug/qagame).
src/games/cgame/../ui/ui_shared.h:37:10: fatal error: '../../main/ui/menudef.h' file not found
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_consolecmds.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_draw.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_event.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_info.c.o] Error 1
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
(.text+0x4): undefined reference to `_snd_linear_count'
/usr/bin/x86_64-linux-gnu-ld.bfd: (.text+0xa): undefined reference to `_snd_p'
/usr/bin/x86_64-linux-gnu-ld.bfd: (.text+0x10): undefined reference to `_snd_out'
/home/runner/work/RTCW-SP/RTCW-SP/src/splines/q_shared.cpp:47:(.text+0x37): undefined reference to `Com_Allocate'
/home/runner/work/RTCW-SP/RTCW-SP/src/splines/q_shared.cpp:75:(.text+0x149): undefined reference to `Com_Allocate'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/splines/q_shared.cpp:83:(.text+0x1a6): undefined reference to `Com_Dealloc'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [build/linux-x86-debug/WolfSP] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_main.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_newDraw.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_servercmds.c.o] Error 1
src/games/ui/ui_shared.h:37:10: fatal error: '../../main/ui/menudef.h' file not found
scons: *** [build/linux-x86-debug/cgame/obj/games/ui/ui_shared.c.o] Error 1
scons: *** [build/linux-x86-debug/ui/obj/games/ui/ui_atoms.c.o] Error 1
scons: *** [build/linux-x86-debug/ui/obj/games/ui/ui_gameinfo.c.o] Error 1
scons: *** [build/linux-x86-debug/ui/obj/games/ui/ui_players.c.o] Error 1
scons: *** [build/linux-x86-debug/ui/obj/games/ui/ui_shared.c.o] Error 1
scons: *** [build/linux-x86-debug/ui/obj/games/ui/ui_main.c.o] Error 1
scons: *** [build/linux-x86-debug/ui/obj/games/ui/ui_syscalls.c.o] Error 1

### warning kinds

- [111x] -unused-but-set-variable
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
- [16x] -pointer-sign
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
- [11x] -absolute-value
  - src/client/cl_cin.c:1518:43: warning: taking the absolute value of unsigned type 'unsigned int' has no effect [-Wabsolute-value]
  - src/client/cl_input.c:660:20: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/client/cl_input.c:663:20: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_move.c:164:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2353:25: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - 2188src/games/botlib/be_aas_reach.c | :2354:25: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - ort int t, besrc/games/botlib/be_aas_reach.c:2364:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2491:11: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_ai_move.c:2154:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/cgame/cg_flamethrower.c:1344:13: warning: using floating point absolute value function 'fabs' when argument is of integer type [-Wabsolute-value]
  - src/games/cgame/cg_weapons.c:1805:22: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
- [4x] -pointer-bool-conversion
  - src/client/snd_dma.c:1857:19: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.c:2171:11: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.c:2487:15: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_weapons.c:1142:10: warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [2x] -array-bounds
  - src/renderer/tr_image.c:3712:59: warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src/renderer/tr_shade_calc.c:679:2: warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src/renderer/tr_shader.c:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src/renderer/tr_shader.c:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [1x] -strncat-size
  - src/client/cl_main.c:2837:25: warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src/qcommon/common.c:1800:2: warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -sizeof-pointer-memaccess
  - src/qcommon/cvar.c:764:28: warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
- [1x] -parentheses-equality
  - src/qcommon/unzip.c:2066:45: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
- [1x] relocation in read-only section `.text'
  - /usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/sys/unix/matha.s.o: warning: relocation in read-only section `.text'
- [1x] creating DT_TEXTREL in a PIE
  - /usr/bin/x86_64-linux-gnu-ld.bfd: warning: creating DT_TEXTREL in a PIE

## ubuntu-latest-x86-release

status: failure

errors: 37
warnings: 205 in 17 kinds

### errors

scons: *** Do not know how to make File target `build/linux-x86-release/qagame' (/home/runner/work/RTCW-SP/RTCW-SP/build/linux-x86-release/qagame).
src/games/cgame/../ui/ui_shared.h:37:10: fatal error: '../../main/ui/menudef.h' file not found
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_consolecmds.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_draw.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_event.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_info.c.o] Error 1
tr_marks.c:(.text+0x5b): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: tr_marks.c:(.text+0x163): undefined reference to `BoxOnPlaneSide'
tr_world.c:(.text+0x8b6): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: tr_world.c:(.text+0x8e5): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: tr_world.c:(.text+0x914): undefined reference to `BoxOnPlaneSide'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-release/client/obj/renderer/tr_world.c.o:tr_world.c:(.text+0x943): more undefined references to `BoxOnPlaneSide' follow
cl_cgame.c:(.text+0x1318): undefined reference to `Sys_SnapVector'
snd_mix.c:(.text+0x6e): undefined reference to `S_WriteLinearBlastStereo16'
snd_mix.c:(.text+0x2b2): undefined reference to `S_WriteLinearBlastStereo16'
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_main.c.o] Error 1
cm_test.c:(.text+0x2c1): undefined reference to `BoxOnPlaneSide'
sv_game.c:(.text+0xb90): undefined reference to `Sys_SnapVector'
(.text+0x4): undefined reference to `_snd_linear_count'
/usr/bin/x86_64-linux-gnu-ld.bfd: (.text+0xa): undefined reference to `_snd_p'
/usr/bin/x86_64-linux-gnu-ld.bfd: (.text+0x10): undefined reference to `_snd_out'
q_shared.cpp:(.text+0x28): undefined reference to `Com_Allocate'
q_shared.cpp:(.text+0x9a): undefined reference to `Com_Dealloc'
/usr/bin/x86_64-linux-gnu-ld.bfd: q_shared.cpp:(.text+0xd0): undefined reference to `Com_Allocate'
/usr/bin/x86_64-linux-gnu-ld.bfd: q_shared.cpp:(.text+0x135): undefined reference to `Com_Allocate'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [build/linux-x86-release/WolfSP] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_newDraw.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_servercmds.c.o] Error 1
src/games/ui/ui_shared.h:37:10: fatal error: '../../main/ui/menudef.h' file not found
scons: *** [build/linux-x86-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_atoms.c.o] Error 1
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_gameinfo.c.o] Error 1
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_players.c.o] Error 1
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_syscalls.c.o] Error 1
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_main.c.o] Error 1
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_shared.c.o] Error 1

### warning kinds

- [113x] -unused-but-set-variable
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
- [16x] -pointer-sign
  - src/renderer/tr_animation.c:1249:11: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/renderer/tr_animation.c:1376:13: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/sys/unix/unix_net.c:179:38: warning: passing 'int *' to parameter of type 'socklen_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1104:11: warning: assigning to 'const char *' from 'const GLubyte *' (aka 'const unsigned char *') converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1397:38: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1398:40: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1402:39: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/sys/unix/linux_glimp.c:1403:42: warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:387:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - :403:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:450:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:466:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:508:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:518:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:526:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:542:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [11x] -absolute-value
  - src/client/cl_cin.c:1518:43: warning: taking the absolute value of unsigned type 'unsigned int' has no effect [-Wabsolute-value]
  - src/client/cl_input.c:660:20: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/client/cl_input.c:663:20: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_move.c:164:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2353:25: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2354:25: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2364:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_reach.c:2491:11: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_ai_move.c:2154:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/cgame/cg_flamethrower.c:1344:13: warning: using floating point absolute value function 'fabs' when argument is of integer type [-Wabsolute-value]
  - src/games/cgame/cg_weapons.c:1805:22: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
- [4x] -pointer-bool-conversion
  - src/client/snd_dma.c:1857:19: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.c:2171:11: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.c:2487:15: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_weapons.c:1142:10: warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [2x] -array-bounds
  - src/renderer/tr_image.c:3712:59: warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src/renderer/tr_shade_calc.c:679:2: warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src/renderer/tr_shader.c:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src/renderer/tr_shader.c:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [1x] -strncat-size
  - src/client/cl_main.c:2837:25: warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src/qcommon/common.c:1800:2: warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -sizeof-pointer-memaccess
  - src/qcommon/cvar.c:764:28: warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
- [1x] -parentheses-equality
  - src/qcommon/unzip.c:2066:45: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
- [1x] relocation in read-only section `.text'
  - /usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-release/client/obj/sys/unix/matha.s.o: warning: relocation in read-only section `.text'
- [1x] creating DT_TEXTREL in a PIE
  - /usr/bin/x86_64-linux-gnu-ld.bfd: warning: creating DT_TEXTREL in a PIE

## uncrustify

status: success

errors: 2
warnings: 0 in 0 kinds

### errors

UNCRUSTIFY_FAILED: src/sys/unix/qasm.h
UNCRUSTIFY_FAILED: src/games/game/bg_pmove.c

### warning kinds

## windows-latest-x64-debug

status: failure

errors: 63
warnings: 730 in 26 kinds

### errors

src\third-party\jpeg-6\../jpeg-6\../jpeg-6/jmorecfg.h(152,14): error: typedef redefinition with different types ('long' vs 'int')
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_image.c.obj] Error 1
src\qcommon\common.c(1961,40): error: use of undeclared identifier 'CPUSTRING'
src\qcommon\common.c(2074,34): error: use of undeclared identifier 'CPUSTRING'
scons: *** [build\windows-x64-debug\client\obj\qcommon\common.c.obj] Error 1
src\sys\win32\win_glimp.c(1544,3): error: incompatible pointer types passing 'int *' to parameter of type 'LPDWORD' (aka 'unsigned long *') [-Wincompatible-pointer-types]
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
src\sys\win32\win_net.c(485,40): error: incompatible pointer types passing 'qboolean *' to parameter of type 'u_long *' (aka 'unsigned long *') [-Wincompatible-pointer-types]
src\sys\win32\win_net.c(792,40): error: incompatible pointer types passing 'int *' to parameter of type 'u_long *' (aka 'unsigned long *') [-Wincompatible-pointer-types]
src\sys\win32\win_qgl.c(2939,42): error: incompatible function pointer types assigning to 'void (*)(GLenum, GLfloat) __attribute__((stdcall))' (aka 'void (*)(unsigned int, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2940,46): error: incompatible function pointer types assigning to 'void (*)(GLenum, GLclampf) __attribute__((stdcall))' (aka 'void (*)(unsigned int, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2941,56): error: incompatible function pointer types assigning to 'GLboolean (*)(GLsizei, const GLuint *, GLboolean *) __attribute__((stdcall))' (aka 'unsigned char (*)(int, const unsigned int *, unsigned char *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2942,49): error: incompatible function pointer types assigning to 'void (*)(GLint) __attribute__((stdcall))' (aka 'void (*)(int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2943,42): error: incompatible function pointer types assigning to 'void (*)(GLenum) __attribute__((stdcall))' (aka 'void (*)(unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2944,48): error: incompatible function pointer types assigning to 'void (*)(GLenum, GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2945,43): error: incompatible function pointer types assigning to 'void (*)(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *) __attribute__((stdcall))' (aka 'void (*)(int, int, float, float, float, float, const unsigned char *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2946,46): error: incompatible function pointer types assigning to 'void (*)(GLenum, GLenum) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2947,45): error: incompatible function pointer types assigning to 'void (*)(GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2948,46): error: incompatible function pointer types assigning to 'void (*)(GLsizei, GLenum, const GLvoid *) __attribute__((stdcall))' (aka 'void (*)(int, unsigned int, const void *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2949,42): error: incompatible function pointer types assigning to 'void (*)(GLbitfield) __attribute__((stdcall))' (aka 'void (*)(unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2950,47): error: incompatible function pointer types assigning to 'void (*)(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((stdcall))' (aka 'void (*)(float, float, float, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2951,47): error: incompatible function pointer types assigning to 'void (*)(GLclampf, GLclampf, GLclampf, GLclampf) __attribute__((stdcall))' (aka 'void (*)(float, float, float, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2952,47): error: incompatible function pointer types assigning to 'void (*)(GLclampd) __attribute__((stdcall))' (aka 'void (*)(double)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2953,47): error: incompatible function pointer types assigning to 'void (*)(GLfloat) __attribute__((stdcall))' (aka 'void (*)(float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2954,49): error: incompatible function pointer types assigning to 'void (*)(GLint) __attribute__((stdcall))' (aka 'void (*)(int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2955,46): error: incompatible function pointer types assigning to 'void (*)(GLenum, const GLdouble *) __attribute__((stdcall))' (aka 'void (*)(unsigned int, const double *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2956,44): error: incompatible function pointer types assigning to 'void (*)(GLbyte, GLbyte, GLbyte) __attribute__((stdcall))' (aka 'void (*)(signed char, signed char, signed char)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2957,45): error: incompatible function pointer types assigning to 'void (*)(const GLbyte *) __attribute__((stdcall))' (aka 'void (*)(const signed char *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_net.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_qgl.c.obj] Error 1
src\sys\win32\win_shared.c(154,7): error: use of undeclared label 'good'
src\sys\win32\win_shared.c(155,7): error: use of undeclared label 'err'
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_shared.c.obj] Error 1
src\sys\win32\win_snd.c(339,68): error: incompatible pointer types passing 'DWORD **' (aka 'unsigned long **') to parameter of type 'LPVOID *' (aka 'void **') [-Wincompatible-pointer-types]
src\sys\win32\win_snd.c(340,14): error: incompatible pointer types passing 'DWORD **' (aka 'unsigned long **') to parameter of type 'LPVOID *' (aka 'void **') [-Wincompatible-pointer-types]
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_snd.c.obj] Error 1
src\sys\win32\win_syscon.c(394,78): error: use of undeclared identifier 'GWL_WNDPROC'
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_syscon.c.obj] Error 1
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\basetsd.h(77,29): error: typedef redefinition with different types ('int' vs 'long')
scons: *** [build\windows-x64-debug\client\obj\third-party\jpeg-6\jerror.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\third-party\jpeg-6\jmemnobs.c.obj] Error 1
clang-cl: error: no such file or directory: '/dll'
clang-cl: error: no such file or directory: '/implib:build\windows-x64-debug\qagame.lib'
scons: *** [build\windows-x64-debug\qagame.dll] Error 1
src\games\cgame\../ui/ui_shared.h(37,10): fatal error: '../../main/ui/menudef.h' file not found
fatal error:       '../../main/ui/menudef.h' file not found|
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_consolecmds.c.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_draw.c.obj] Error 1
src\games\cgame\../ui/ui_shared.h ( 371,0100)0:  /fatal error:  '../../main/ui/menudef.h' file not found1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_event.c.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_info.c.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_main.c.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_newDraw.c.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_servercmds.c.obj] Error 1
src\games\ui\ui_shared.h(37,10): fatal error: '../../main/ui/menudef.h' file not found
scons: *** [build\windows-x64-debug\cgame\obj\games\ui\ui_shared.c.obj] Error 1
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_atoms.c.obj] Error 1
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_gameinfo.c.obj] Error 1
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_main.c.obj] Error 1
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_players.c.obj] Error 1
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_shared.c.obj] Error 1
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_syscalls.c.obj] Error 1

### warning kinds

- [222x] -pointer-to-int-cast
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
- [183x] -missing-field-initializers
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
- [171x] -unused-but-set-variable
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
- [21x] -pointer-sign
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
  - src\games\cgame\cg_drawtools.c(387,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(403,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(450,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(466,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(508,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(518,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(526,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(542,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [19x] -absolute-value
  - src\client\cl_cin.c(1518,43): warning: taking the absolute value of unsigned type 'unsigned int' has no effect [-Wabsolute-value]
  - src\client\cl_input.c(660,20): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\client\cl_input.c(663,20): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_move.c(164,8): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2353,25): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2354,25): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2364,8): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_aas_reach.c(2491,11): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botlib\be_ai_move.c(2154src\games\botlib\be_ai_weap.c,(891),:11 )warning: :using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
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
  - cosrc\splines\math_quaternion.hn(s60t, 6i)d:V ewarning: c3definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
- [8x] -extern-initializer
  - src\sys\win32\win_input.c(211,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(212,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(213,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(214,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(146,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(149,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(151,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(152,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
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
- [5x] -pointer-bool-conversion
  - src\client\snd_dma.c(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.c(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.c(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai_cast_script_actions.c(1443,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.c(1142,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [5x] -int-to-pointer-cast
  - src\qcommon\common.c(1098,15): warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\server\sv_client.c(416,11): warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\game\g_main.c(324,41): warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\game\g_main.c(327,32): warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\game\g_main.c(327,46): warning: cast to 'animModelInfo_t **' from smaller integer type 'int' [-Wint-to-pointer-cast]
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
- [1x] -strncat-size
  - src\client\cl_main.c(2837,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src\qcommon\common.c(1800,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] need to modify cg_event.c at "// check the sequencial list" if you change this
  - 995 |         { NETF( eventSequence ), 8 }, // warning: need to modify cg_event.c at "// check the sequencial list" if you change this
- [1x] -parentheses-equality
  - src\qcommon\unzip.c(2066,45): warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -unused-const-variable
  - 549 |         return VM_Call( gvm, AICsrc\qcommon\unzip.cA(S3046T,_19V)I:S Iwarning: Bunused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] -format
  - src\qcommon\vm.c(848,54): warning: format specifies type 'int' but the argument has type '__ptrdiff_t' (aka 'long long') [-Wformat]
- [1x] -cast-function-type-mismatch
  - src\sys\win32\win_syscon.c(283,21): warning: cast from 'LONG (*)(HWND, UINT, WPARAM, LPARAM) __attribute__((stdcall))' (aka 'long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') to 'WNDPROC' (aka 'long long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') converts to incompatible function type [-Wcast-function-type-mismatch]
- [1x] )      :|                   ^warning:
  - )      :|                   ^warning:

## windows-latest-x64-release

status: failure

errors: 61
warnings: 731 in 25 kinds

### errors

src\third-party\jpeg-6\../jpeg-6\../jpeg-6/jmorecfg.h(152,14): error: typedef redefinition with different types ('long' vs 'int')
scons: *** [build\windows-x64-release\client\obj\renderer\tr_image.c.obj] Error 1
src\qcommon\common.c(1961,40): error: use of undeclared identifier 'CPUSTRING'
src\qcommon\common.c(2074,34): error: use of undeclared identifier 'CPUSTRING'
scons: *** [build\windows-x64-release\client\obj\qcommon\common.c.obj] Error 1
src\sys\win32\win_glimp.c(1544,3): error: incompatible pointer types passing 'int *' to parameter of type 'LPDWORD' (aka 'unsigned long *') [-Wincompatible-pointer-types]
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
src\sys\win32\win_net.c(485,40): error: incompatible pointer types passing 'qboolean *' to parameter of type 'u_long *' (aka 'unsigned long *') [-Wincompatible-pointer-types]
src\sys\win32\win_net.c(792,40): error: incompatible pointer types passing 'int *' to parameter of type 'u_long *' (aka 'unsigned long *') [-Wincompatible-pointer-types]
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_net.c.obj] Error 1
src\sys\win32\win_qgl.c(2939,42): error: incompatible function pointer types assigning to 'void (*)(GLenum, GLfloat) __attribute__((stdcall))' (aka 'void (*)(unsigned int, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2940,46): error: incompatible function pointer types assigning to 'void (*)(GLenum, GLclampf) __attribute__((stdcall))' (aka 'void (*)(unsigned int, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2941,56): error: incompatible function pointer types assigning to 'GLboolean (*)(GLsizei, const GLuint *, GLboolean *) __attribute__((stdcall))' (aka 'unsigned char (*)(int, const unsigned int *, unsigned char *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2942,49): error: incompatible function pointer types assigning to 'void (*)(GLint) __attribute__((stdcall))' (aka 'void (*)(int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2943,42): error: incompatible function pointer types assigning to 'void (*)(GLenum) __attribute__((stdcall))' (aka 'void (*)(unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2944,48): error: incompatible function pointer types assigning to 'void (*)(GLenum, GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2945,43): error: incompatible function pointer types assigning to 'void (*)(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *) __attribute__((stdcall))' (aka 'void (*)(int, int, float, float, float, float, const unsigned char *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2946,46): error: incompatible function pointer types assigning to 'void (*)(GLenum, GLenum) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2947,45): error: incompatible function pointer types assigning to 'void (*)(GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2948,46): error: incompatible function pointer types assigning to 'void (*)(GLsizei, GLenum, const GLvoid *) __attribute__((stdcall))' (aka 'void (*)(int, unsigned int, const void *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2949,42): error: incompatible function pointer types assigning to 'void (*)(GLbitfield) __attribute__((stdcall))' (aka 'void (*)(unsigned int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2950,47): error: incompatible function pointer types assigning to 'void (*)(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((stdcall))' (aka 'void (*)(float, float, float, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2951,47): error: incompatible function pointer types assigning to 'void (*)(GLclampf, GLclampf, GLclampf, GLclampf) __attribute__((stdcall))' (aka 'void (*)(float, float, float, float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2952,47): error: incompatible function pointer types assigning to 'void (*)(GLclampd) __attribute__((stdcall))' (aka 'void (*)(double)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2953,47): error: incompatible function pointer types assigning to 'void (*)(GLfloat) __attribute__((stdcall))' (aka 'void (*)(float)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2954,49): error: incompatible function pointer types assigning to 'void (*)(GLint) __attribute__((stdcall))' (aka 'void (*)(int)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2955,46): error: incompatible function pointer types assigning to 'void (*)(GLenum, const GLdouble *) __attribute__((stdcall))' (aka 'void (*)(unsigned int, const double *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2956,44): error: incompatible function pointer types assigning to 'void (*)(GLbyte, GLbyte, GLbyte) __attribute__((stdcall))' (aka 'void (*)(signed char, signed char, signed char)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2957,45): error: incompatible function pointer types assigning to 'void (*)(const GLbyte *) __attribute__((stdcall))' (aka 'void (*)(const signed char *)') from 'FARPROC' (aka 'long long (*)()') [-Wincompatible-function-pointer-types]
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
src\sys\win32\win_shared.c(154,7): error: use of undeclared label 'good'
src\sys\win32\win_shared.c(155,7): error: use of undeclared label 'err'
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_shared.c.obj] Error 1
src\sys\win32\win_snd.c(339,68): error: incompatible pointer types passing 'DWORD **' (aka 'unsigned long **') to parameter of type 'LPVOID *' (aka 'void **') [-Wincompatible-pointer-types]
src\sys\win32\win_snd.c(340,14): error: incompatible pointer types passing 'DWORD **' (aka 'unsigned long **') to parameter of type 'LPVOID *' (aka 'void **') [-Wincompatible-pointer-types]
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj] Error 1
src\sys\win32\win_syscon.c(394,78): error: use of undeclared identifier 'GWL_WNDPROC'
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_syscon.c.obj] Error 1
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\basetsd.h(77,29): error: typedef redefinition with different types ('int' vs 'long')
scons: *** [build\windows-x64-release\client\obj\third-party\jpeg-6\jerror.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\third-party\jpeg-6\jmemnobs.c.obj] Error 1
clang-cl: error: no such file or directory: '/dll'
clang-cl: error: no such file or directory: '/implib:build\windows-x64-release\qagame.lib'
scons: *** [build\windows-x64-release\qagame.dll] Error 1
src\games\cgame\../ui/ui_shared.h(37,10): fatal error: '../../main/ui/menudef.h' file not found
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_consolecmds.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_draw.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_event.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_info.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_main.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_newDraw.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_servercmds.c.obj] Error 1
src\games\ui\ui_shared.h(37,10): fatal error: '../../main/ui/menudef.h' file not found
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_atoms.c.obj] Error 1
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_gameinfo.c.obj] Error 1
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_players.c.obj] Error 1
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj] Error 1
In file included from scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj] Error 1
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_syscalls.c.obj] Error 1

### warning kinds

- [222x] -pointer-to-int-cast
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
- [183x] -missing-field-initializers
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
- [174x] -unused-but-set-variable
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
- [21x] -pointer-sign
  - src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1349,38): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1350,40): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1351,39): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_glimp.c258 | s(ta1352t,i42c) :L Pwarning: Dpassing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]I
  - src\sys\win32\win_net.c(265,31): warning: passing 'byte *' (aka 'unsigned char *') to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(583,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(590,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(630,28): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(637,29): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(660,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(667,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(387,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(403,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(450,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(466,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(508,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(518,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(526,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(542,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [19x] -absolute-value
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
- [8x] -extern-initializer
  - src\sys\win32\win_input.c(211,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - 212,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(213,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(214,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(146,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(149,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(151,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(152,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
- [5x] -void-pointer-to-int-cast
  - src\client\cl_cgame.c(697,10): warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src\client\cl_cgame.c(699,10): warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src\client\cl_ui.c(1086,10): warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - src\client\cl_ui.c(1089,10): warning: cast to smaller integer type 'int' from 'void *' [-Wvoid-pointer-to-int-cast]
  - *dest, constsrc\sys\win32\win_input.c (c860h,a7r) :* swarning: rccast to smaller integer type 'unsigned long' from 'void *' [-Wvoid-pointer-to-int-cast],
- [5x] -pointer-bool-conversion
  - src\client\snd_dma.c(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.c(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.c(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai_cast_script_actions.c(1443,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.c(1142,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [5x] -int-to-pointer-cast
  - src\qcommon\common.c(1098,15): warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\server\sv_client.c(416,11): warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\game\g_main.c(324,41): warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\game\g_main.c(327,32): warning: cast to 'char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\game\g_main.c(327,46): warning: cast to 'animModelInfo_t **' from smaller integer type 'int' [-Wint-to-pointer-cast]
- [5x] -unused-variable
  - 225,18src\games\game\../game\../../qcommon/q_shared.h)(:724 ,warning: 45unused variable 'hInstDI' [-Wunused-variable])
  - *dsrc\sys\win32\win_input.ce(s249t,,21 )c:o nwarning: sunused variable 'df' [-Wunused-variable]t
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - glsrc\sys\win32\win_input.cC(o259n,f28i)g:. ewarning: xunused variable 'g_pMouse' [-Wunused-variable]t
  - src\sys\win32\win_main.c(708,22): warning: unused variable 'stream' [-Wunused-variable]
- [3x] -deprecated-declarations
  - 211 | DEFINE_GUID( GUID_SysMouse,   0x6F1D2B60,src\sys\win32\win_gamma.c0x(D1535,A20),:0 xwarning: 1'GetVersionExA' is deprecated [-Wdeprecated-declarations]1
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
- [1x] -strncat-size
  - src\client\cl_main.c(2837,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src\qcommon\common.c(1800,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] need to modify cg_event.c at "// check the sequencial list" if you change this
  - 995 |         { NETF( eventSequence ), 8 }, // warning: need to modify cg_event.c at "// check the sequencial list" if you change this
- [1x] -parentheses-equality
  - 1388 |         { PSF( src\qcommon\unzip.cv(e2066l,o45c)i:t y[warning: 1equality comparison with extraneous parentheses [-Wparentheses-equality]]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] -format
  - src\qcommon\vm.c(848,54): warning: format specifies type 'int' but the argument has type '__ptrdiff_t' (aka 'long long') [-Wformat]
- [1x] -cast-function-type-mismatch
  - src\sys\win32\win_syscon.c(283,21): warning: cast from 'LONG (*)(HWND, UINT, WPARAM, LPARAM) __attribute__((stdcall))' (aka 'long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') to 'WNDPROC' (aka 'long long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') converts to incompatible function type [-Wcast-function-type-mismatch]

## windows-latest-x86-debug

status: failure

errors: 64
warnings: 494 in 19 kinds

### errors

src\third-party\jpeg-6\../jpeg-6\../jpeg-6/jmorecfg.h(152,14): error: typedef redefinition with different types ('long' vs 'int')
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_image.c.obj] Error 1
src\client\snd_mix.c(89,23): error: unknown token in expression
src\client\snd_mix.c(89,14): error: use of undeclared label 'dword'
src\client\snd_mix.c(89,20): error: use of undeclared label 'ptr'
scons: *** [build\windows-x86-debug\client\obj\client\snd_mix.c.obj] Error 1
src\qcommon\q_math.c(745,2): error: non-ASM statement in naked function is not supported
scons: *** [build\windows-x86-debug\client\obj\qcommon\q_math.c.obj] Error 1
src\qcommon\vm_x86.c(77,2): error: non-ASM statement in naked function is not supported
scons: *** [build\windows-x86-debug\client\obj\qcommon\vm_x86.c.obj] Error 1
src\sys\win32\win_glimp.c(1544,3): error: incompatible pointer types passing 'int *' to parameter of type 'LPDWORD' (aka 'unsigned long *') [-Wincompatible-pointer-types]
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
src\sys\win32\win_net.c(485,40): error: incompatible pointer types passing 'qboolean *' to parameter of type 'u_long *' (aka 'unsigned long *') [-Wincompatible-pointer-types]
src\sys\win32\win_net.c(792,40): error: incompatible pointer types passing 'int *' to parameter of type 'u_long *' (aka 'unsigned long *') [-Wincompatible-pointer-types]
src\sys\win32\win_qgl.c(2939,42): error: incompatible function pointer types assigning to 'void (*)(GLenum, GLfloat) __attribute__((stdcall))' (aka 'void (*)(unsigned int, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2940,46): error: incompatible function pointer types assigning to 'void (*)(GLenum, GLclampf) __attribute__((stdcall))' (aka 'void (*)(unsigned int, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2941,56): error: incompatible function pointer types assigning to 'GLboolean (*)(GLsizei, const GLuint *, GLboolean *) __attribute__((stdcall))' (aka 'unsigned char (*)(int, const unsigned int *, unsigned char *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2942,49): error: incompatible function pointer types assigning to 'void (*)(GLint) __attribute__((stdcall))' (aka 'void (*)(int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2943,42): error: incompatible function pointer types assigning to 'void (*)(GLenum) __attribute__((stdcall))' (aka 'void (*)(unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2944,48): error: incompatible function pointer types assigning to 'void (*)(GLenum, GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2945,43): error: incompatible function pointer types assigning to 'void (*)(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *) __attribute__((stdcall))' (aka 'void (*)(int, int, float, float, float, float, const unsigned char *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2946,46): error: incompatible function pointer types assigning to 'void (*)(GLenum, GLenum) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2947,45): error: incompatible function pointer types assigning to 'void (*)(GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2948,46): error: incompatible function pointer types assigning to 'void (*)(GLsizei, GLenum, const GLvoid *) __attribute__((stdcall))' (aka 'void (*)(int, unsigned int, const void *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2949,42): error: incompatible function pointer types assigning to 'void (*)(GLbitfield) __attribute__((stdcall))' (aka 'void (*)(unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2950,47): error: incompatible function pointer types assigning to 'void (*)(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((stdcall))' (aka 'void (*)(float, float, float, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2951,47): error: incompatible function pointer types assigning to 'void (*)(GLclampf, GLclampf, GLclampf, GLclampf) __attribute__((stdcall))' (aka 'void (*)(float, float, float, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2952,47): error: incompatible function pointer types assigning to 'void (*)(GLclampd) __attribute__((stdcall))' (aka 'void (*)(double) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_net.c.obj] Error 1
src\sys\win32\win_qgl.c(2953,47): error: incompatible function pointer types assigning to 'void (*)(GLfloat) __attribute__((stdcall))' (aka 'void (*)(float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2954,49): error: incompatible function pointer types assigning to 'void (*)(GLint) __attribute__((stdcall))' (aka 'void (*)(int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2955,46): error: incompatible function pointer types assigning to 'void (*)(GLenum, const GLdouble *) __attribute__((stdcall))' (aka 'void (*)(unsigned int, const double *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2956,44): error: incompatible function pointer types assigning to 'void (*)(GLbyte, GLbyte, GLbyte) __attribute__((stdcall))' (aka 'void (*)(signed char, signed char, signed char) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2957,45): error: incompatible function pointer types assigning to 'void (*)(const GLbyte *) __attribute__((stdcall))' (aka 'void (*)(const signed char *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
fatal error: too many errors emitted, stopping now [-ferror-limit=]
src\sys\win32\win_shared.c(154,7): error: use of undeclared label 'good'
src\sys\win32\win_shared.c(155,7): error: use of undeclared label 'err'
68): error: incompatible pointer types passing 'DWORD **' (aka 'unsigned long **') to parameter of type 'LPVOID *' (aka 'void **') [-Wincompatible-pointer-types]
src\sys\win32\win_snd.c(340,14): error: incompatible pointer types passing 'DWORD **' (aka 'unsigned long **') to parameter of type 'LPVOID *' (aka 'void **') [-Wincompatible-pointer-types]
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_qgl.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_shared.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_snd.c.obj] Error 1
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\basetsd.h(77,29): error: typedef redefinition with different types ('int' vs 'long')
scons: *** [build\windows-x86-debug\client\obj\third-party\jpeg-6\jerror.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\third-party\jpeg-6\jmemnobs.c.obj] Error 1
scons: *** [build\windows-x86-debug\game\obj\qcommon\q_math.c.obj] Error 1
src\games\cgame\../ui/ui_shared.h(37,10): fatal error: '../../main/ui/menudef.h' file not found
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_consolecmds.c.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_draw.c.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_event.c.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_info.c.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_main.c.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_newDraw.c.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_servercmds.c.obj] Error 1
src\games\ui\ui_shared.h(37,10): fatal error: '../../main/ui/menudef.h' file not found
scons: *** [build\windows-x86-debug\cgame\obj\qcommon\q_math.c.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\games\ui\ui_shared.c.obj] Error 1
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_atoms.c.obj] Error 1
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_gameinfo.c.obj] Error 1
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_main.c.obj] Error 1
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_players.c.obj] Error 1
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_syscalls.c.obj] Error 1
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_shared.c.obj] Error 1
scons: *** [build\windows-x86-debug\ui\obj\qcommon\q_math.c.obj] Error 1

### warning kinds

- [183x] -missing-field-initializers
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
- [173x] -unused-but-set-variable
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
  - ,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(824,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
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
- [21x] -pointer-sign
  - src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1349,38): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1350,40): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1351,39): warning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_glimp.c(1352,42):  generatedwarning: passing 'const GLubyte *' (aka 'const unsigned char *') to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(265,31): warning: passing 'byte *' (aka 'unsigned char *') to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(583,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(590,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(630,28): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(637,29): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(660,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(667,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(387,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(403,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(450,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(466,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(508,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(518,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(526,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(542,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [19x] -absolute-value
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
  - src\games\game\ai_cast_script_actions.c(167,16): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_script_actions.c(352,16): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_funcs.c(2560,11): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_script_actions.c(1658,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botai\ai_main.c(361,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botai\ai_main.c(450,17): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\cgame\cg_flamethrower.c(1344,13): warning: using floating point absolute value function 'fabs' when argument is of integer type [-Wabsolute-value]
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
- [17x] -deprecated-copy-with-user-provided-copy
  - (src\splines\math_vector.h160(,16018,)18:) :warning:  definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]warning:
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - (src\splines\math_angles.h (a63n,g6l)e:s _warning: t definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]c
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
- [8x] -extern-initializer
  - src\sys\win32\win_input.c(211,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(212,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(213,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(214,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(146,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(149,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(151,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(152,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
- [6x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(600,13): warning: unused variable 'lastWarning' [-Wunused-variable]
  - src\sys\win32\win_main.c(708,22): warning: unused variable 'stream' [-Wunused-variable]
- [5x] -pointer-bool-conversion
  - src\client\snd_dma.c(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.c(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.c(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai_cast_script_actions.c(1443,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.c(1142,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
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
- [1x] -strncat-size
  - src\client\cl_main.c(2837,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src\qcommon\common.c(1800,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src\qcommon\unzip.c(2066,45): warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] -cast-calling-convention
  - src\sys\win32\win_glimp.c(1541,3): warning: cast between incompatible calling conventions 'cdecl' and 'stdcall'; calls through this pointer may abort at runtime [-Wcast-calling-convention]

## windows-latest-x86-release

status: failure

errors: 65
warnings: 496 in 19 kinds

### errors

src\third-party\jpeg-6\../jpeg-6\../jpeg-6/jmorecfg.h(152,14): error: typedef redefinition with different types ('long' vs 'int')
scons: *** [build\windows-x86-release\client\obj\renderer\tr_image.c.obj] Error 1
src\client\snd_mix.c(89,23): error: unknown token in expression
src\client\snd_mix.c(89,14): error: use of undeclared label 'dword'
src\client\snd_mix.c(89,20): error: use of undeclared label 'ptr'
scons: *** [build\windows-x86-release\client\obj\client\snd_mix.c.obj] Error 1
src\qcommon\q_math.c(745,2): error: non-ASM statement in naked function is not supported
scons: *** [build\windows-x86-release\client\obj\qcommon\q_math.c.obj] Error 1
src\qcommon\vm_x86.c(77,2): error: non-ASM statement in naked function is not supported
scons: *** [build\windows-x86-release\client\obj\qcommon\vm_x86.c.obj] Error 1
src\sys\win32\win_glimp.c(1544,3): error: incompatible pointer types passing 'int *' to parameter of type 'LPDWORD' (aka 'unsigned long *') [-Wincompatible-pointer-types]
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
src\sys\win32\win_net.c(485,40): error: incompatible pointer types passing 'qboolean *' to parameter of type 'u_long *' (aka 'unsigned long *') [-Wincompatible-pointer-types]
src\sys\win32\win_net.c(792,40): error: incompatible pointer types passing 'int *' to parameter of type 'u_long *' (aka 'unsigned long *') [-Wincompatible-pointer-types]
src\sys\win32\win_qgl.c(2939,42): error: incompatible function pointer types assigning to 'void (*)(GLenum, GLfloat) __attribute__((stdcall))' (aka 'void (*)(unsigned int, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2940,46): error: incompatible function pointer types assigning to 'void (*)(GLenum, GLclampf) __attribute__((stdcall))' (aka 'void (*)(unsigned int, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2941,56): error: incompatible function pointer types assigning to 'GLboolean (*)(GLsizei, const GLuint *, GLboolean *) __attribute__((stdcall))' (aka 'unsigned char (*)(int, const unsigned int *, unsigned char *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2942,49): error: incompatible function pointer types assigning to 'void (*)(GLint) __attribute__((stdcall))' (aka 'void (*)(int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2943,42): error: incompatible function pointer types assigning to 'void (*)(GLenum) __attribute__((stdcall))' (aka 'void (*)(unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2944,48): error: incompatible function pointer types assigning to 'void (*)(GLenum, GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2945,43): error: incompatible function pointer types assigning to 'void (*)(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *) __attribute__((stdcall))' (aka 'void (*)(int, int, float, float, float, float, const unsigned char *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2946,46): error: incompatible function pointer types assigning to 'void (*)(GLenum, GLenum) __attribute__((stdcall))' (aka 'void (*)(unsigned int, unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2947,45): error: incompatible function pointer types assigning to 'void (*)(GLuint) __attribute__((stdcall))' (aka 'void (*)(unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2948,46): error: incompatible function pointer types assigning to 'void (*)(GLsizei, GLenum, const GLvoid *) __attribute__((stdcall))' (aka 'void (*)(int, unsigned int, const void *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2949,42): error: incompatible function pointer types assigning to 'void (*)(GLbitfield) __attribute__((stdcall))' (aka 'void (*)(unsigned int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2950,47): error: incompatible function pointer types assigning to 'void (*)(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((stdcall))' (aka 'void (*)(float, float, float, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2951,47): error: incompatible function pointer types assigning to 'void (*)(GLclampf, GLclampf, GLclampf, GLclampf) __attribute__((stdcall))' (aka 'void (*)(float, float, float, float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
2951 |         qglClearCoscons: *** [build\windows-x86-release\client\obj\sys\win32\win_net.c.obj] Error 1
src\sys\win32\win_qgl.c(2952,47): error: incompatible function pointer types assigning to 'void (*)(GLclampd) __attribute__((stdcall))' (aka 'void (*)(double) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2953,47): error: incompatible function pointer types assigning to 'void (*)(GLfloat) __attribute__((stdcall))' (aka 'void (*)(float) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2954,49): error: incompatible function pointer types assigning to 'void (*)(GLint) __attribute__((stdcall))' (aka 'void (*)(int) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2955,46): error: incompatible function pointer types assigning to 'void (*)(GLenum, const GLdouble *) __attribute__((stdcall))' (aka 'void (*)(unsigned int, const double *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2956,44): error: incompatible function pointer types assigning to 'void (*)(GLbyte, GLbyte, GLbyte) __attribute__((stdcall))' (aka 'void (*)(signed char, signed char, signed char) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
src\sys\win32\win_qgl.c(2957,45): error: incompatible function pointer types assigning to 'void (*)(const GLbyte *) __attribute__((stdcall))' (aka 'void (*)(const signed char *) __attribute__((stdcall))') from 'FARPROC' (aka 'int (*)() __attribute__((stdcall))') [-Wincompatible-function-pointer-types]
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
src\sys\win32\win_shared.c(154,7): error: use of undeclared label 'good'
src\sys\win32\win_shared.c(155,7): error: use of undeclared label 'err'
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_shared.c.obj] Error 1
src\sys\win32\win_snd.c(339,68): error: incompatible pointer types passing 'DWORD **' (aka 'unsigned long **') to parameter of type 'LPVOID *' (aka 'void **') [-Wincompatible-pointer-types]
src\sys\win32\win_snd.c(340,14): error: incompatible pointer types passing 'DWORD **' (aka 'unsigned long **') to parameter of type 'LPVOID *' (aka 'void **') [-Wincompatible-pointer-types]
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_snd.c.obj] Error 1
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\shared\basetsd.h(77,29): error: typedef redefinition with different types ('int' vs 'long')
scons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jerror.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jmemnobs.c.obj] Error 1
scons: *** [build\windows-x86-release\game\obj\qcommon\q_math.c.obj] Error 1
src\games\cgame\../ui/ui_shared.h(37,10): fatal error: '../../main/ui/menudef.h' file not found
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_consolecmds.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_draw.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_event.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_info.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_main.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_newDraw.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_servercmds.c.obj] Error 1
src\games\ui\ui_shared.h ( 37 ,*10w)e:a pfatal error: o'../../main/ui/menudef.h' file not foundn
scons: *** [build\windows-x86-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\qcommon\q_math.c.obj] Error 1
src\games\ui\ui_shared.h(37,10): fatal error: '../../main/ui/menudef.h' file not found
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_atoms.c.obj] Error 1
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_gameinfo.c.obj] Error 1
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_players.c.obj] Error 1
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_main.c.obj] Error 1
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_shared.c.obj] Error 1
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_syscalls.c.obj] Error 1
scons: *** [build\windows-x86-release\ui\obj\qcommon\q_math.c.obj] Error 1

### warning kinds

- [183x] -missing-field-initializers
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
- [175x] -unused-but-set-variable
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
- [21x] -pointer-sign
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
  - src\games\cgame\cg_drawtools.c(387,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(403,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(450,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(466,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(508,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(518,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(526,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(542,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [19x] -absolute-value
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
  - src\games\game\ai_cast_script_actions.c(167,16): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_script_actions.c(352,16): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_funcs.c(2560,11): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\game\ai_cast_script_actions.c( 16582560 |                         ,        10        ):i f (warning:  using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botai\ai_main.c(361,10): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\botai\ai_main.c(450,17): warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src\games\cgame\cg_flamethrower.c(1344,13): warning: using floating point absolute value function 'fabs' when argument is of integer type [-Wabsolute-value]
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
- [8x] -extern-initializer
  - src\sys\win32\win_input.c(211,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(212,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_input.c(213,14): warning: 'extern' variable has an initializer [-Wextern-initializer]153
  - src\sys\win32\win_input.c(214,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(146,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(149,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(151,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
  - src\sys\win32\win_snd.c(152,14): warning: 'extern' variable has an initializer [-Wextern-initializer]
- [5x] -pointer-bool-conversion
  - src\client\snd_dma.c(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.c(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.c(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai_cast_script_actions.c(1443,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.c(1142,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [5x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(708,22): warning: unused variable 'stream' [-Wunused-variable]
- [3x] -deprecated-declarations
  - 153,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
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
- [1x] -strncat-size
  - src\client\cl_main.c(2837,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src\qcommon\common.c(1800,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src\qcommon\unzip.c(2066,45): warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] -cast-calling-convention
  - src\sys\win32\win_glimp.c(1541,3): warning: cast between incompatible calling conventions 'cdecl' and 'stdcall'; calls through this pointer may abort at runtime [-Wcast-calling-convention]

