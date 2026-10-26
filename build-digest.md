# Build digest

commit: 6db001044867

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

errors: 99
warnings: 182 in 11 kinds

### errors

3232src/renderer/../qcommon/../qcommon/cm_public.h::10:10:32: : fatal error: 10fatal error: :'../cgame/tr_types.h' file not found'../cgame/tr_types.h' file not found
fatal error: '../cgame/tr_types.h' file not found
src/renderer/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_cmds.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_bsp.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_animation.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_backend.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_cmesh.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_flares.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_curve.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_font.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_init.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_main.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_light.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_image.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_mesh.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_marks.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_noise.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_model.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_shade.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_scene.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_shade_calc.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_shader.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_shadows.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_sky.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_surface.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_world.c.o] Error 1
src/client/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x64-debug/client/obj/client/cl_cgame.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_cin.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_console.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_input.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_keys.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_parse.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_net_chan.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_main.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_scrn.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/snd_adpcm.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_ui.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/snd_dma.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/snd_mem.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/snd_mix.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/snd_wavelet.c.o] Error 1
src/qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
32 | #inscons: *** [build/linux-x64-debug/client/obj/qcommon/cm_load.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_patch.c.o] Error 1
32 | #include "../cgame/tr_typscons: *** [build/linux-x64-debug/client/obj/qcommon/cm_polylib.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_test.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_trace.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/cmd.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/cvar.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/common.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/huffman.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/files.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/msg.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/net_chan.c.o] Error 1
src/qcommon/../client/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
src/server/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x64-debug/client/obj/server/sv_ccmds.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/unzip.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_bot.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_client.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_game.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_init.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_net_chan.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_main.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_world.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_snapshot.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/vm.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/vm_interpreted.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/sys/unix/unix_main.c.o] Error 1
src/client/../renderer/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x64-debug/client/obj/sys/unix/unix_net.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/sys/unix/unix_shared.c.o] Error 1
src/client/../client/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_snd.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_qgl.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_joystick.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_glimp.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/third-party/jpeg-6/jerror.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/third-party/jpeg-6/jmemnobs.c.o] Error 1
scons: *** Do not know how to make File target `build/linux-x64-debug/qagame' (/home/runner/work/RTCW-SP/RTCW-SP/build/linux-x64-debug/qagame).
src/games/cgame/../ui/ui_shared.h:34:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_consolecmds.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_draw.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_event.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_info.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_main.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_newDraw.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_servercmds.c.o] Error 1
src/games/ui/ui_shared.h:34:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x64-debug/cgame/obj/games/ui/ui_shared.c.o] Error 1
src/games/ui/ui_local.h:37:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_atoms.c.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_gameinfo.c.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_players.c.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_main.c.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_syscalls.c.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_shared.c.o] Error 1

### warning kinds

- [67x] -Wunused-but-set-variable
  - src/qcommon/q_shared.c:434:9: warning: variable 'pc' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:468:7: warning: variable 'ch' set but not used [-Wunused-but-set-variable]
- [6x] -Wlogical-op-parentheses
  - src/splines/math_quaternion.h:167:62: warning: '&&' within '||' [-Wlogical-op-parentheses]
  - src/splines/math_quaternion.h:167:62: warning: '&&' within '||' [-Wlogical-op-parentheses]
- [33x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/q_shared.cpp:757:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/q_shared.cpp:774:12: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
- [12x] -Wabsolute-value
  - src/games/botlib/be_aas_entity.c:355:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_entity.c:356:9: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
- [2x] -Wimplicit-const-int-float-conversion
  - src/games/botlib/be_aas_route.c:570:13: warning: implicit conversion from 'int' to 'float' changes value from 999999999 to 1.0E+9 [-Wimplicit-const-int-float-conversion]
  - :606:13: warning: implicit conversion from 'int' to 'float' changes value from 999999999 to 1.0E+9 [-Wimplicit-const-int-float-conversion]
- [1x] 570 |         besttime = 999src/games/botlib/be_aas_reach.c:961:34: warning: variable 'invgravitydot' set but not used [
  - 570 |         besttime = 999src/games/botlib/be_aas_reach.c:961:34: warning: variable 'invgravitydot' set but not used [-Wunused-but-set-variable]
- [45x] -Wpointer-to-int-cast
  - src/games/botlib/be_aas_route.c:2033:20: warning: cast to smaller integer type 'int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_goal.c:144:11: warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
- [1x] -Wint-to-pointer-cast
  - src/games/botlib/be_aas_route.c:2033:8: warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
- [10x] -Wpointer-sign
  - src/games/botlib/l_precomp.c:725:20: warning: passing 'unsigned long *' to parameter of type 'const time_t *' (aka 'const long *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/games/botlib/l_precomp.c:740:20: warning: passing 'unsigned long *' to parameter of type 'const time_t *' (aka 'const long *') converts between pointers to integer types with different sign [-Wpointer-sign]
- [3x] -Wpointer-bool-conversion
  - src/games/cgame/cg_drawtools.c:148:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_ents.c:411:14: warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [2x] -Wself-assign
  - src/games/cgame/cg_view.c:873:11: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src/games/cgame/cg_view.c:1385:12: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]

## ubuntu-latest-x64-release

status: failure

errors: 99
warnings: 183 in 10 kinds

### errors

src/renderer/../qcommon/../qcommon/cm_public.h:32:In file included from 10src/renderer/tr_animation.c:: 30fatal error: :
src/renderer/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
e"src/renderer/../qcommon/../qcommon/cm_public.h. ."/:.c32.g:/a10mc:ge a/fatal error: tmre'../cgame/tr_types.h' file not found_/
scons: *** [build/linux-x64-release/client/obj/renderer/tr_animation.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_backend.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_bsp.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_cmds.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_cmesh.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_flares.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_curve.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_font.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_light.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_init.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_main.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_image.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_marks.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_model.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_noise.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_mesh.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_scene.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_shade_calc.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_shade.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_shader.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_shadows.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_sky.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_world.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_surface.c.o] Error 1
src/client/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/cl_parse.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/cl_net_chan.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/cl_scrn.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/snd_adpcm.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/cl_ui.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/snd_dma.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/snd_mem.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/snd_mix.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/snd_wavelet.c.o] Error 1
src/qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_load.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_polylib.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_patch.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_test.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_trace.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/cmd.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/cvar.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/common.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/files.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/huffman.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/msg.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/net_chan.c.o] Error 1
src/qcommon/../client/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
src/server/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x64-release/client/obj/server/sv_bot.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/unzip.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/server/sv_ccmds.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/server/sv_client.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/server/sv_game.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/server/sv_init.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/server/sv_main.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/server/sv_net_chan.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/server/sv_snapshot.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/server/sv_world.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/vm.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/vm_interpreted.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/sys/unix/unix_main.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/sys/unix/unix_net.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/sys/unix/unix_shared.c.o] Error 1
src/client/../renderer/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
src/client/../client/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_snd.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_qgl.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_joystick.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/third-party/jpeg-6/jerror.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/third-party/jpeg-6/jmemnobs.c.o] Error 1
scons: *** Do not know how to make File target `build/linux-x64-release/qagame' (/home/runner/work/RTCW-SP/RTCW-SP/build/linux-x64-release/qagame).
src/games/cgame/../ui/ui_shared.h:34:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_consolecmds.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_draw.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_event.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_info.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_main.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_newDraw.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_servercmds.c.o] Error 1
src/games/ui/ui_shared.h:34:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
src/games/ui/ui_local.h:37:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_atoms.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_gameinfo.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_players.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_main.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_syscalls.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o] Error 1

### warning kinds

- [69x] -Wunused-but-set-variable
  - src/qcommon/q_shared.c:434:9: warning: variable 'pc' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:437:6: warning: variable 'len' set but not used [-Wunused-but-set-variable]
- [6x] -Wlogical-op-parentheses
  - src/splines/math_quaternion.h:167:62: warning: '&&' within '||' [-Wlogical-op-parentheses]
  - src/splines/math_quaternion.h:167:62: warning: '&&' within '||' [-Wlogical-op-parentheses]
- [33x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/q_shared.cpp:757:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/q_shared.cpp:774:12: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
- [12x] -Wabsolute-value
  - src/games/botlib/be_aas_entity.c:355:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_entity.c:356:9: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
- [2x] -Wimplicit-const-int-float-conversion
  - src/games/botlib/be_aas_route.c:570:13: warning: implicit conversion from 'int' to 'float' changes value from 999999999 to 1.0E+9 [-Wimplicit-const-int-float-conversion]
  - src/games/botlib/be_aas_route.c:606:13: warning: implicit conversion from 'int' to 'float' changes value from 999999999 to 1.0E+9 [-Wimplicit-const-int-float-conversion]
- [45x] -Wpointer-to-int-cast
  - src/games/botlib/be_aas_route.c:2033:20: warning: cast to smaller integer type 'int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_goal.c:144:11: warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
- [1x] -Wint-to-pointer-cast
  - src/games/botlib/be_aas_route.c:2033:8: warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
- [10x] -Wpointer-sign
  - src/games/botlib/l_precomp.c:725:20: warning: passing 'unsigned long *' to parameter of type 'const time_t *' (aka 'const long *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/games/botlib/l_precomp.c:740:20: warning: passing 'unsigned long *' to parameter of type 'const time_t *' (aka 'const long *') converts between pointers to integer types with different sign [-Wpointer-sign]
- [3x] -Wpointer-bool-conversion
  - src/games/cgame/cg_drawtools.c:148:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_ents.c:411:14: warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [2x] -Wself-assign
  - src/games/cgame/cg_view.c:873:11: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src/games/cgame/cg_view.c:1385:12: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]

## ubuntu-latest-x86-debug

status: failure

errors: 103
warnings: 134 in 8 kinds

### errors

:src/renderer/../qcommon/../qcommon/cm_public.hIn file included from 10:src/renderer/../qcommon/qcommon.h:32: :33fatal error: 10:
src/renderer/tr_bsp.c:fatal error: :32'../cgame/tr_types.h' file not found31:
10In file included from :src/renderer/tr_local.h :fatal error: 36'../cgame/tr_types.h' file not found:
src/renderer/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_animation.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_backend.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_bsp.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_cmds.c.o] Error 1
src/renderer/../qcommon/../qcommon/cm_public.hsrc/renderer/../qcommon/../qcommon/cm_public.h:32:10:: 32fatal error: :'../cgame/tr_types.h' file not found10
: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_flares.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_cmesh.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_curve.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_font.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_init.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_light.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_main.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_image.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_marks.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_mesh.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_noise.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_model.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_scene.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_shade_calc.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_shade.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_shader.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_shadows.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_sky.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_surface.c.o] Error 1
src/client/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_world.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/cl_cgame.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/cl_console.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/cl_cin.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/cl_input.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/cl_keys.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/cl_net_chan.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/cl_main.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/cl_parse.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/cl_scrn.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/cl_ui.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/snd_adpcm.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/snd_mem.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/snd_dma.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/snd_mix.c.o] Error 1
src/qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-debug/client/obj/client/snd_wavelet.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/cm_load.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/cm_patch.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/cm_test.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/cm_polylib.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/cm_trace.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/cmd.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/cvar.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/common.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/huffman.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/files.c.o] Error 1
src/qcommon/../client/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-debug/client/obj/qcommon/msg.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/net_chan.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/unzip.c.o] Error 1
src/server/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-debug/client/obj/server/sv_client.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/server/sv_bot.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/server/sv_ccmds.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/server/sv_game.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/server/sv_init.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/server/sv_main.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/server/sv_snapshot.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/server/sv_net_chan.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/server/sv_world.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/vm.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/vm_interpreted.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/vm_x86.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/sys/unix/unix_net.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/sys/unix/unix_main.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/sys/unix/unix_shared.c.o] Error 1
src/client/../client/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
src/client/../renderer/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_snd.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_joystick.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_qgl.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_glimp.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/third-party/jpeg-6/jerror.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/third-party/jpeg-6/jmemnobs.c.o] Error 1
scons: *** Do not know how to make File target `build/linux-x86-debug/qagame' (/home/runner/work/RTCW-SP/RTCW-SP/build/linux-x86-debug/qagame).
src/games/cgame/../ui/ui_shared.h:34:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_consolecmds.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_draw.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_event.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_info.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_main.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_newDraw.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_servercmds.c.o] Error 1
src/games/ui/ui_shared.h:34:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-debug/cgame/obj/games/ui/ui_shared.c.o] Error 1
src/games/ui/ui_local.h:37:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-debug/ui/obj/games/ui/ui_atoms.c.o] Error 1
scons: *** [build/linux-x86-debug/ui/obj/games/ui/ui_gameinfo.c.o] Error 1
scons: *** [build/linux-x86-debug/ui/obj/games/ui/ui_players.c.o] Error 1
scons: *** [build/linux-x86-debug/ui/obj/games/ui/ui_syscalls.c.o] Error 1
scons: *** [build/linux-x86-debug/ui/obj/games/ui/ui_shared.c.o] Error 1
scons: *** [build/linux-x86-debug/ui/obj/games/ui/ui_main.c.o] Error 1

### warning kinds

- [68x] -Wunused-but-set-variable
  - src/qcommon/q_shared.c:434:9: warning: variable 'pc' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:468:7: warning: variable 'ch' set but not used [-Wunused-but-set-variable]
- [6x] -Wlogical-op-parentheses
  - src/splines/math_quaternion.h:167:62: warning: '&&' within '||' [-Wlogical-op-parentheses]
  - src/splines/math_quaternion.h:167:62: warning: '&&' within '||' [-Wlogical-op-parentheses]
- [33x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/q_shared.cpp:757:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/q_shared.cpp:774:12: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
- [10x] -Wabsolute-value
  - src/games/botlib/be_aas_entity.c:355:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_entity.c:356:9: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
- [2x] -Wimplicit-const-int-float-conversion
  - src/games/botlib/be_aas_route.c:570:13: warning: implicit conversion from 'int' to 'float' changes value from 999999999 to 1.0E+9 [-Wimplicit-const-int-float-conversion]
  - src/games/botlib/be_aas_route.c:606:13: warning: implicit conversion from 'int' to 'float' changes value from 999999999 to 1.0E+9 [-Wimplicit-const-int-float-conversion]
- [10x] -Wpointer-sign
  - src/games/botlib/l_precomp.c:725:20: warning: passing 'unsigned long *' to parameter of type 'const time_t *' (aka 'const long *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/games/botlib/l_precomp.c:740:20: warning: passing 'unsigned long *' to parameter of type 'const time_t *' (aka 'const long *') converts between pointers to integer types with different sign [-Wpointer-sign]
- [3x] -Wpointer-bool-conversion
  - src/games/cgame/cg_drawtools.c:148:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_ents.c:411:14: warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [2x] -Wself-assign
  - src/games/cgame/cg_view.c:873:11: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src/games/cgame/cg_view.c:1385:12: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]

## ubuntu-latest-x86-release

status: failure

errors: 104
warnings: 135 in 8 kinds

### errors

src/renderer/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
:src/renderer/../qcommon/../qcommon/cm_public.h :fatal error: 32:'../cgame/tr_types.h' file not found10
: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-release/client/obj/renderer/tr_cmds.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_bsp.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_animation.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_backend.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_flares.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_curve.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_font.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_cmesh.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_light.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_init.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_image.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_main.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_mesh.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_noise.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_marks.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_model.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_scene.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_shade.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_shade_calc.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_shader.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_shadows.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_sky.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_surface.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_world.c.o] Error 1
src/client/../qcommon/../qcommon/cm_public.hsrc/client/../qcommon/../qcommon/cm_public.h:32:10: fatal error: :32'../cgame/tr_types.h' file not found:
10: fatal error: '../cgame/tr_types.h' file not found
src/client/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-release/client/obj/client/cl_input.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/cl_cin.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/cl_cgame.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/cl_console.c.o] Error 1
src/client/../qcommon/../qcommon/cm_public.h:32:10   :32  | fatal error: #'../cgame/tr_types.h' file not foundi
scons: *** [build/linux-x86-release/client/obj/client/cl_net_chan.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/cl_parse.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/cl_keys.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/cl_main.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/cl_scrn.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/snd_adpcm.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/cl_ui.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/snd_dma.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/snd_mix.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/snd_wavelet.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/snd_mem.c.o] Error 1
src/qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-release/client/obj/qcommon/cm_load.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/cm_polylib.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/cm_test.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/cm_patch.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/cm_trace.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/cmd.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/cvar.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/common.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/files.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/huffman.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/msg.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/net_chan.c.o] Error 1
src/qcommon/../client/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
src/server/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-release/client/obj/server/sv_ccmds.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/unzip.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/server/sv_bot.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/server/sv_game.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/server/sv_client.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/server/sv_init.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/server/sv_main.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/server/sv_net_chan.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/server/sv_snapshot.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/server/sv_world.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/vm.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/vm_interpreted.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/vm_x86.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/sys/unix/unix_main.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/sys/unix/unix_net.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/sys/unix/unix_shared.c.o] Error 1
src/client/../renderer/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_qgl.c.o] Error 1
src/client/../client/../qcommon/../qcommon/cm_public.h:32:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_snd.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_joystick.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_glimp.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/third-party/jpeg-6/jerror.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/third-party/jpeg-6/jmemnobs.c.o] Error 1
scons: *** Do not know how to make File target `build/linux-x86-release/qagame' (/home/runner/work/RTCW-SP/RTCW-SP/build/linux-x86-release/qagame).
src/games/cgame/../ui/ui_shared.h:34:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_consolecmds.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_draw.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_event.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_info.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_main.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_newDraw.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_servercmds.c.o] Error 1
src/games/ui/ui_shared.h:34:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
src/games/ui/ui_local.h:37:10: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_atoms.c.o] Error 1
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_gameinfo.c.o] Error 1
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_main.c.o] Error 1
fatal error: '../cgame/tr_types.h' file not found
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_players.c.o] Error 1
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_syscalls.c.o] Error 1
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_shared.c.o] Error 1

### warning kinds

- [69x] -Wunused-but-set-variable
  - src/qcommon/q_shared.c:434:9: warning: variable 'pc' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:437:6: warning: variable 'len' set but not used [-Wunused-but-set-variable]
- [6x] -Wlogical-op-parentheses
  - src/splines/math_quaternion.h:167:62: warning: '&&' within '||' [-Wlogical-op-parentheses]
  - src/splines/math_quaternion.h:167:62: warning: '&&' within '||' [-Wlogical-op-parentheses]
- [33x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/q_shared.cpp:757:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/q_shared.cpp:774:12: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
- [10x] -Wabsolute-value
  - src/games/botlib/be_aas_entity.c:355:8: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
  - src/games/botlib/be_aas_entity.c:356:9: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
- [2x] -Wimplicit-const-int-float-conversion
  - src/games/botlib/be_aas_route.c:570:13: warning: implicit conversion from 'int' to 'float' changes value from 999999999 to 1.0E+9 [-Wimplicit-const-int-float-conversion]
  - src/games/botlib/be_aas_route.c:606:13: warning: implicit conversion from 'int' to 'float' changes value from 999999999 to 1.0E+9 [-Wimplicit-const-int-float-conversion]
- [10x] -Wpointer-sign
  - src/games/botlib/l_precomp.c:725:20: warning: passing 'unsigned long *' to parameter of type 'const time_t *' (aka 'const long *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/games/botlib/l_precomp.c:740:20: warning: passing 'unsigned long *' to parameter of type 'const time_t *' (aka 'const long *') converts between pointers to integer types with different sign [-Wpointer-sign]
- [3x] -Wpointer-bool-conversion
  - src/games/cgame/cg_drawtools.c:148:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_ents.c:411:14: warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [2x] -Wself-assign
  - src/games/cgame/cg_view.c:873:11: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src/games/cgame/cg_view.c:1385:12: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]

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

errors: 157
warnings: 27362 in 8559 kinds

### errors

10src\renderer\../qcommon\../qcommon/cm_public.h:32 (,32,)10fatal error: )10):: '../cgame/tr_types.h' file not found
fatal error: fatal error: '../cgame/tr_types.h' file not found'../cgame/tr_types.h' file not found
: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_cmds.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_backend.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_animation.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_bsp.c.obj] Error 1
src\renderer\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_cmesh.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_curve.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_flares.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_font.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_init.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_image.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_light.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_main.c.obj] Error 1
,src\renderer\../qcommon\../qcommon/cm_public.h (f32l,o10a)t:  scalfatal error: e'../cgame/tr_types.h' file not found,
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_mesh.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_marks.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_noise.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_model.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_scene.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_shade.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_shade_calc.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_shader.c.obj] Error 1
src\renderer\../qcommon\../qcommon/cm_public.h(32   ,3010 | )#:d efatal error: f'../cgame/tr_types.h' file not foundi
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_shadows.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_surface.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_sky.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_world.c.obj] Error 1
src\client\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x64-debug\client\obj\client\cl_cgame.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\cl_cin.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\cl_console.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\cl_input.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\cl_keys.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\cl_net_chan.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\cl_main.c.obj] Error 1
550 | void _VectorAdd( const vec3_t vescons: *** [build\windows-x64-debug\client\obj\client\cl_parse.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\cl_scrn.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\snd_adpcm.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\cl_ui.c.obj] Error 1
Asrc\client\../qcommon\../qcommon/cm_public.hd(d32(, 10c)o:n sfatal error: t'../cgame/tr_types.h' file not found
src\client\../qcommon\../qcommon/cm_public.h(32,10):src\games\game\../game\../../qcommon/q_shared.h (fatal error: 553'../cgame/tr_types.h' file not found,
scons: *** [build\windows-x64-debug\client\obj\client\snd_dma.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\snd_mem.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\snd_mix.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\snd_wavelet.c.obj] Error 1
src\qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x64-debug\client\obj\qcommon\cm_load.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\cm_patch.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\cm_test.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\cm_polylib.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\cmd.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\cm_trace.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\cvar.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\common.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\huffman.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\files.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\msg.c.obj] Error 1
src\qcommon\../client\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x64-debug\client\obj\qcommon\net_chan.c.obj] Error 1
src\server\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x64-debug\client\obj\server\sv_bot.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\server\sv_ccmds.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\unzip.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\server\sv_client.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\server\sv_game.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\server\sv_init.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\server\sv_main.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\server\sv_net_chan.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\server\sv_snapshot.c.obj] Error 1
879 |         l1 = strlen( descons: *** [build\windows-x64-debug\client\obj\server\sv_world.c.obj] Error 1
0src\qcommon\../qcommon/cm_public.h0(0320,010}),:  {fatal error: -'../cgame/tr_types.h' file not found0
97 |         {0.809017, 0.309017, -0.500000}, {0.951056scons: *** [build\windows-x64-debug\client\obj\qcommon\vm.c.obj] Error 1
507 | #define VectorSubtract( a,b,c )   ( ( c )[0] = ( a )[0] - ( b )[0],( c )[1] = ( a )[1] - ( b )[1],( c )[2] = ( a )scons: *** [build\windows-x64-debug\client\obj\qcommon\vm_interpreted.c.obj] Error 1
src\client\../renderer\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
ssrc\client\../renderer\../qcommon\../qcommon/cm_public.hc(a32l,e10 )*:  vfatal error: e'../cgame/tr_types.h' file not foundc
src\client\../client\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_input.c.obj] Error 1
lsrc\client\../qcommon\../qcommon/cm_public.ho(a32t, 10s)c:a lfatal error: e'../cgame/tr_types.h' file not found, vec3_t out );
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_main.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_net.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_qgl.c.obj] Error 1
src\client\../client\../qcommon\../qcommon\qfiles.h(30,9)scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_shared.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_snd.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_syscon.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_wndproc.c.obj] Error 1
60 | void operator=( quscons: *** [build\windows-x64-debug\client\obj\splines\q_parse.cpp.obj] Error 1
377 | int LongNoSwap( int lscons: *** [build\windows-x64-debug\client\obj\splines\util_str.cpp.obj] Error 1
src\third-party\jpeg-6\jchuff.c(429,40): warning: empty expression statement has no effect; remove unnecessary ';' to silence this warning [-Wextra-semi-stmt]scons: *** [build\windows-x64-debug\client\obj\third-party\jpeg-6\jcapimin.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\third-party\jpeg-6\jcinit.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\third-party\jpeg-6\jchuff.c.obj] Error 1
652 | idSplinePosition( long time ) : idCameraPosition( time ) {32scons: *** [build\windows-x64-debug\client\obj\third-party\jpeg-6\jcphuff.c.obj] Error 1
C:\Program Files\Microsoft Visual Studio\18\Enterprise\VC\Tools\Llvm\x64\lib\clang\22\include\__stddef_null.hIn file included from scons: *** [build\windows-x64-debug\client\obj\third-party\jpeg-6\jcmarker.c.obj] Error 1
313 |         const jpeg_scan_info * scan_info; /* script for multi-scan file, src\third-party\jpeg-6\jcmaster.csrc\splines\splines.cppscons: *** [build\windows-x64-debug\client\obj\third-party\jpeg-6\jcomapi.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\third-party\jpeg-6\jcparam.c.obj] Error 1
238 |                                 expand_bottom_edge( prep->color_buf[ci], cinfoscons: *** [build\windows-x64-debug\client\obj\third-party\jpeg-6\jcmaster.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\splines\splines.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\third-party\jpeg-6\jdmarker.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\third-party\jpeg-6\jidctflt.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\third-party\jpeg-6\jmemmgr.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\third-party\jpeg-6\jerror.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\third-party\jpeg-6\jmemnobs.c.obj] Error 1
150 |                 ( *aasworld ).reachability[i].edgenum = LittleLong( ( *aasworld ).rscons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_entity.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_debug.c.obj] Error 1
389 | flscons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_main.c.obj] Error 1
509 | #define VectorCopy(scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_optimize.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_routetable.c.obj] Error 1
|                                                                             ^~~~~scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_sample.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_reach.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_ai_move.c.obj] Error 1
src\games\botlib\l_precomp.c(725,20): error: incompatible pointer types passing 'unsigned long *' to parameter of type 'const time_t *' (aka 'const long long *') [-Wincompatible-pointer-types]
src\games\botlib\l_precomp.c(740,20): error: incompatible pointer types passing 'unsigned long *' to parameter of type 'const time_t *' (aka 'const long long *') [-Wincompatible-pointer-types]
scons: *** [build\windows-x64-debug\client\obj\games\botlib\l_precomp.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_interface.c.obj] Error 1
554 |         src\games\game\ai_cast_characters.c        (t359r,a4v) :=  stwarning: arimplicit conversion loses floating-point precision: 'double' to 'float' [-Wimplicit-float-conversion]tscons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_events.c.obj] Error 1
258 |                         200,   scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast.c.obj] Error 1
536 |                 VectorScale( vec, LOPER_LEAP_VELOCITY_START + changeTime * ( LOPER_LEAP_VELOCITY_END - LOPER_LEAP_VELOCITY_STAscons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_characters.c.obj] Error 1
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_func_boss1.c.obj] Error 1
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_fight.c.obj] Error 1
b!o(o lcesa-n>  t1247 | l        ecrhaadape_rGNru m   >e= t0  T)   & a *g&p( rc es-i>lcanstt cEnemlyi e>n=t N0ua m&c&,h  egcsh; _a er  n*t agNat imtei,e /so[/cr ise->nsttartilioanns_gt tEo f* n eamlyscons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_script.c.obj] Error 1
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_funcs.c.obj] Error 1
scons: *** [build\windows-x64-debug\game\obj\games\game\g_props.c.obj] Error 1
src\games\game\g_weapon.c(428,3): warning: scons: *** [build\windows-x64-debug\game\obj\games\game\g_utils.c.obj] Error 1
512 | #define VectorMA( v, s, b, o )    ( ( o )[0] = ( v )[0] + ( b scons: *** [build\windows-x64-debug\game\obj\games\botai\ai_chat.c.obj] Error 1
clang-cl: error: clang frontend command failed due to signal (use -v to see invocation)
fatal error: error in backend: IO failure on output stream: no space on device
scons: *** [build\windows-x64-debug\game\obj\games\game\g_trigger.c.obj] Error 1
src\games\cgame\../ui/ui_shared.h(34,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_consolecmds.c.obj] Error 1
1149 |                 charWidth = propMap[ch][2scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_draw.c.obj] Error 1
(34,10): fatal error: src\games\cgame\cg_ents.c'../cgame/tr_types.h' file not found(
511 | #define Vecscons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_event.c.obj] Error 1
torMA( v  ,960  | s        ,         fbo,v Roa d)i u s [ 1(]  (=  ot a)n[(0 ]D E=G 2(R AvDsrc\games\cgame\../ui/ui_shared.h (( )(34[,010 )r:]  +fatal error: o '../cgame/tr_types.h' file not foundl
imes  [923i | ]                 -V eccgt.otriCmoep,y (c epnlta-y>ebroOlrtigCirna,w loDriirgisnscons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_info.c.obj] Error 1
fatal error: '../cgame/tr_types.h' file not found
src\games\cgame\cg_marks.c(232,16)scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_main.c.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_newDraw.c.obj] Error 1
(t34o,r10C)o:p yfatal error: ('../cgame/tr_types.h' file not found
* scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_servercmds.c.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_snapshot.c.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_players.c.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_scoreboard.c.obj] Error 1
src\games\ui\ui_shared.h(34,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x64-debug\cgame\obj\games\ui\ui_shared.c.obj] Error 1
]src\games\ui\ui_local.h (=37 ,(10 )a:  )fatal error: ['../cgame/tr_types.h' file not found1
511 | #define VectorScale( v, s, o )    ( ( o )[0] = ( scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_atoms.c.obj] Error 1
tsrc\games\ui\ui_local.h (v37e,c103)_: fatal error: '../cgame/tr_types.h' file not found
src\games\ui\ui_local.h(37,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_gameinfo.c.obj] Error 1
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_players.c.obj] Error 1
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_main.c.obj] Error 1
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_syscalls.c.obj] Error 1
146 |         {-0.587785, -0.425325, -0.688191}, {-0.688191, -0.5scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_shared.c.obj] Error 1

### warning kinds

- [333x] -Wreserved-macro-identifier
  - src\games\game\../game\../../qcommon/q_shared.h(30,9): warning: macro name is a reserved identifier [-Wreserved-macro-identifier]
  - src\games\game\../game\../../qcommon/q_shared.h(30,9): warning: macro name is a reserved identifier [-Wreserved-macro-identifier]
- [1x] macro name is a reserved identifier [-Wreserved-macro-identifier]In file included from
  - src\games\game\../game\../../qcommon/q_shared.h(30,9): warning: macro name is a reserved identifier [-Wreserved-macro-identifier]In file included from
- [1x] isrc\games\game\../game\../../qcommon/q_shared.hn(e30 ,_9_)Q:_ Swarning: Hmacro name is a reserved identifier [-Wreserve
  - isrc\games\game\../game\../../qcommon/q_shared.hn(e30 ,_9_)Q:_ Swarning: Hmacro name is a reserved identifier [-Wreserved-macro-identifier]A
- [1x] src\games\game\../game\../../qcommon/q_shared.hsrc\games\game\../game\../../qcommon/q_shared.h((548src\games\game\../gam
  - src\games\game\../game\../../qcommon/q_shared.hsrc\games\game\../game\../../qcommon/q_shared.h((548src\games\game\../game\../../qcommon/q_shared.hsrc\games\game\../game\../../qcommon/q_shared.h(548(,5487,)7:) :warning:  identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier],warning:
- [1x]     identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
  - ): warning:     identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]548
- [1x] | v548e | cv  _548t |  evce_c_548D_o,tt  __D7o)tDPortoPdruoctdPurctto(d(u ccot:n  warning: sctidentifier '_DotProduct' i
  - | v548e | cv  _548t |  evce_c_548D_o,tt  __D7o)tDPortoPdruoctdPurctto(d(u ccot:n  warning: sctidentifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]o
- [1x] src\games\game\../game\../../qcommon/q_shared.hsrc\games\game\../game\../../qcommon/q_shared.hsrc\games\game\../game\../
  - src\games\game\../game\../../qcommon/q_shared.h(549,6): warning: src\games\game\../game\../../qcommon/q_shared.hsrc\games\game\../game\../../qcommon/q_shared.hsrc\games\game\../game\../../qcommon/q_shared.h(identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]549((549549,,66))::
- [1040x] -Wreserved-identifier
  - warning: warning: identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
  - src\games\game\../game\../../qcommon/q_shared.h(1511,14): warning: identifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier]
- [1x] 6  )549: |  v |   549warning:  | ovoiidd  __VVeeccttidentifier '_VectorSubtract' is reserved because it starts with '_' 
  - 6  )549: |  v |   549warning:  | ovoiidd  __VVeeccttidentifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]ovrSo
- [1x] src\games\game\../game\../../qcommon/q_shared.h| ( 550warning: ,identifier '_VectorAdd' is reserved because it starts wi
  - src\games\game\../game\../../qcommon/q_shared.h| ( 550warning: ,identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]     ^
- [1x] 6)  :550  | warning: videntifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wres
  - 6)  :550  | warning: videntifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]o
- [1x] isrc\games\game\../game\../../qcommon/q_shared.hd( 550_  ,V5506e ctovercb, vA)dedc(3:_ twarning:  identifier '_VectorAdd
  - isrc\games\game\../game\../../qcommon/q_shared.hd( 550_  ,V5506e ctovercb, vA)dedc(3:_ twarning:  identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]o
- [1x] 3_te vcec3b_,t  vveeccsrc\games\game\../game\../../qcommon/q_shared.ha3(_551,,6t  co)u:t  warning: )identifier '_VectorC
  - 3_te vcec3b_,t  vveeccsrc\games\game\../game\../../qcommon/q_shared.ha3(_551,,6t  co)u:t  warning: )identifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier];
- [1x] viedc 3__Vte cvteocr,src\games\game\../game\../../qcommon/q_shared.hC(6)b551o:p, 6y)( warning: c:o identifier '_VectorAd
  - viedc 3__Vte cvteocr,src\games\game\../game\../../qcommon/q_shared.hC(6)b551o:p, 6y)( warning: c:o identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]warning:
- [1x] , src\games\game\../game\../../qcommon/q_shared.hv(e551c,36_src\games\game\../game\../../qcommon/q_shared.ht() 552o,:u t
  - , src\games\game\../game\../../qcommon/q_shared.hv(e551c,36_src\games\game\../game\../../qcommon/q_shared.ht() 552o,:u twarning: 6 identifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier])
- [1x] warning: |        ^551identifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wr
  - warning: |        ^551identifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier] |
- [1x] voi  d552  | _vVsrc\games\game\../game\../../qcommon/q_shared.heocitdo r_CoVe(552c,t6)o:r Swarning: cidentifier '_Vector
  - voi  d552  | _vVsrc\games\game\../game\../../qcommon/q_shared.heocitdo r_CoVe(552c,t6)o:r Swarning: cidentifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]a
- [1x] t vec3_t vsrc\games\game\../game\../../qcommon/q_shared.he(src\games\game\../game\../../qcommon/q_shared.hc(a553,, 6c)o:
  - t vec3_t vsrc\games\game\../game\../../qcommon/q_shared.he(src\games\game\../game\../../qcommon/q_shared.hc(a553,, 6c)o:n swarning: tidentifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] vec3_  t553  | vv553o,i6de )c:b ,warning:  identifier '_VectorMA' is reserved because it starts with '_' followed by a c
  - vec3_  t553  | vv553o,i6de )c:b ,warning:  identifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]v_
- [1x] ncsotsrc\games\game\../game\../../qcommon/q_shared.hn(s tve cv3src\games\game\../game\../../qcommon/q_shared.h(e551c,552
  - ncsotsrc\games\game\../game\../../qcommon/q_shared.hn(s tve cv3src\games\game\../game\../../qcommon/q_shared.h(e551c,5526_3t) _,:t  6warning: )v:v identifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]warning: eidentifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]e
- [1x] casrc\games\game\../game\../../qcommon/q_shared.hl(e552(, 6c)o:n swarning: tidentifier '_VectorScale' is reserved becaus
  - casrc\games\game\../game\../../qcommon/q_shared.hl(e552(, 6c)o:n swarning: tidentifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] float scasrc\games\game\../game\../../qcommon/q_shared.hl(e553,, 6v)e:c 3warning: _identifier '_VectorMA' is reserved be
  - float scasrc\games\game\../game\../../qcommon/q_shared.hl(e553,, 6v)e:c 3warning: _identifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]t
- [1x] _VectorMAsrc\games\game\../game\../../qcommon/q_shared.h(( 553c,o6n)s:t  warning: videntifier '_VectorMA' is reserved be
  - _VectorMAsrc\games\game\../game\../../qcommon/q_shared.h(( 553c,o6n)s:t  warning: videntifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]e
- [1x] 1511 | typedef esrc\games\game\../game\../../qcommon/q_shared.hnu(m1511 ,_14f)l:a gwarning: _identifier '_flag_status' i
  - 1511 | typedef esrc\games\game\../game\../../qcommon/q_shared.hnu(m1511 ,_14f)l:a gwarning: _identifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier]s
- [1x] 1511 | typedef enum src\games\game\../game\../../qcommon/q_shared.h_(f1511l,a14g)_:s twarning: aidentifier '_flag_status
  - 1511 | typedef enum src\games\game\../game\../../qcommon/q_shared.h_(f1511l,a14g)_:s twarning: aidentifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier]t
- [1x] 9src\renderer\../qcommon/qfiles.h)(:30 ,warning: 9macro name is a reserved identifier [-Wreserved-macro-identifier])
  - 9src\renderer\../qcommon/qfiles.h)(:30 ,warning: 9macro name is a reserved identifier [-Wreserved-macro-identifier])
- [1x] : warning:    macro name is a reserved identifier [-Wreserved-macro-identifier]30
  - : warning:    macro name is a reserved identifier [-Wreserved-macro-identifier]30
- [1x] src\renderer\../qcommon/qfiles.h(102src\renderer\../qcommon/qfiles.h,(16102),:16 )warning: :identifier '_TargaHeader' is
  - src\renderer\../qcommon/qfiles.h(102src\renderer\../qcommon/qfiles.h,(16102),:16 )warning: :identifier '_TargaHeader' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] warning: identifier '_TargaHeader' is reserved because it starts with '_' followed by a capital letter [-Wreserved-ident
  - warning: identifier '_TargaHeader' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] 551 | void _VectorCopy( const vec3_tsrc\games\game\../game\../../qcommon/q_shared.h (i548n,,7 )v:e cwarning: 3identifier
  - 551 | void _VectorCopy( const vec3_tsrc\games\game\../game\../../qcommon/q_shared.h (i548n,,7 )v:e cwarning: 3identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]_
- [1x] DotProduct( conssrc\games\game\../game\../../qcommon/q_shared.ht( 552v,e6c)3:_ twarning:  identifier '_VectorScale' is r
  - DotProduct( conssrc\games\game\../game\../../qcommon/q_shared.ht( 552v,e6c)3:_ twarning:  identifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]v
- [1x] 551,src\renderer\../qcommon/qcommon.h6()31:, 9warning: )identifier '_VectorCopy' is reserved because it starts with '_' 
  - 551,src\renderer\../qcommon/qcommon.h6()31:, 9warning: )identifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]:
- [1x] warning:   macro name is a reserved identifier [-Wreserved-macro-identifier]551
  - warning:   macro name is a reserved identifier [-Wreserved-macro-identifier]551
- [1x] src\games\game\../game\../../qcommon/q_shared.h   (30553 | ,#6d)e:f iwarning: nidentifier '_VectorMA' is reserved becaus
  - src\games\game\../game\../../qcommon/q_shared.h   (30553 | ,#6d)e:f iwarning: nidentifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]e
- [1x] rMA( const vec3_t veca, float scale, const vec3src\renderer\../qcommon/qfiles.h_(t102 ,v16e)c:b ,warning:  identifier '_
  - rMA( const vec3_t veca, float scale, const vec3src\renderer\../qcommon/qfiles.h_(t102 ,v16e)c:b ,warning:  identifier '_TargaHeader' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]v
- [1x] _src\renderer\../qcommon/qcommon.hV(31e,c9t)o:r Awarning: dmacro name is a reserved identifier [-Wreserved-macro-identif
  - _src\renderer\../qcommon/qcommon.hV(31e,c9t)o:r Awarning: dmacro name is a reserved identifier [-Wreserved-macro-identifier]d
- [1x] 31 | #src\renderer\../qcommon/qfiles.hd(e102f,i16n)e:  _warning: Qidentifier '_TargaHeader' is reserved because it start
  - 31 | #src\renderer\../qcommon/qfiles.hd(e102f,i16n)e:  _warning: Qidentifier '_TargaHeader' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]C
- [1x] rsrc\renderer\../qcommon/qcommon.ho(d31u,c9t)(:  cwarning: omacro name is a reserved identifier [-Wreserved-macro-identi
  - rsrc\renderer\../qcommon/qcommon.ho(d31u,c9t)(:  cwarning: omacro name is a reserved identifier [-Wreserved-macro-identifier]n
- [1x] "../cgamesrc\games\game\../game\../../qcommon/q_shared.h/(t553r,_6t)y:p ewarning: sidentifier '_VectorMA' is reserved be
  - "../cgamesrc\games\game\../game\../../qcommon/q_shared.h/(t553r,_6t)y:p ewarning: sidentifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier].
- [1x] src\games\game\../game\../../qcommon/q_shared.h(1511src\games\game\../game\../../qcommon/q_shared.h,(14551),:6 )warning:
  - src\games\game\../game\../../qcommon/q_shared.h(1511src\games\game\../game\../../qcommon/q_shared.h,(14551),:6 )warning: :identifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier]
- [1x] warning: identifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identi
  - warning: identifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] 31 | #defisrc\games\game\../game\../../qcommon/q_shared.hne( _1511Q,C14O)M:M Owarning: Nidentifier '_flag_status' is res
  - 31 | #defisrc\games\game\../game\../../qcommon/q_shared.hne( _1511Q,C14O)M:M Owarning: Nidentifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier]_
- [1x] 553 | void _VectorMA( const vec3_src\games\game\../game\../../qcommon/q_shared.ht (v548e,c7a),:  fwarning: lidentifier '
  - 553 | void _VectorMA( const vec3_src\games\game\../game\../../qcommon/q_shared.ht (v548e,c7a),:  fwarning: lidentifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]o
- [1x] src\renderer\../qcommon/qcommon.hwarning: (31identifier '_VectorScale' is reserved because it starts with '_' followed b
  - src\renderer\../qcommon/qcommon.hwarning: (31identifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier],
- [1x] 9):   warning: 552macro name is a reserved identifier [-Wreserved-macro-identifier] | void _VectorScale( const vec3_t in
  - 9):   warning: 552macro name is a reserved identifier [-Wreserved-macro-identifier] | void _VectorScale( const vec3_t in, float scale, vec3
- [1x] _src\renderer\../qcommon/qfiles.hQ(C30O,M9M)O: Nwarning: _macro name is a reserved identifier [-Wreserved-macro-identifi
  - _src\renderer\../qcommon/qfiles.hQ(C30O,M9M)O: Nwarning: _macro name is a reserved identifier [-Wreserved-macro-identifier]H
- [1x] 553 | vosrc\renderer\../qcommon/qfiles.hi(d102 ,_16V)e:c twarning: oidentifier '_TargaHeader' is reserved because it sta
  - 553 | vosrc\renderer\../qcommon/qfiles.hi(d102 ,_16V)e:c twarning: oidentifier '_TargaHeader' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]r
- [1x] )In file included from :src\renderer\../qcommon/qcommon.h :warning: 33macro name is a reserved identifier [-Wreserved-ma
  - )In file included from :src\renderer\../qcommon/qcommon.h :warning: 33macro name is a reserved identifier [-Wreserved-macro-identifier]:
- [1x] :src\client\../qcommon/qcommon.h (warning: 31identifier '_VectorCopy' is reserved because it starts with '_' followed by
  - :src\client\../qcommon/qcommon.h (warning: 31identifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier],
- [1x] 9):   warning: 551macro name is a reserved identifier [-Wreserved-macro-identifier] |
  - 9):   warning: 551macro name is a reserved identifier [-Wreserved-macro-identifier] |
- [1x] 11identifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier] warning
  - src\games\game\../game\../../qcommon/q_shared.h(1511,14): warning: 11identifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier] warning
- [1x] 6):    warning: 32identifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved
  - 6):    warning: 32identifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier] |
- [1x] src\games\game\../game\../../qcommon/q_shared.h(30,In file included from 9):src\qcommon\cm_polylib.c :warning: 33macro n
  - src\games\game\../game\../../qcommon/q_shared.h(30,In file included from 9):src\qcommon\cm_polylib.c :warning: 33macro name is a reserved identifier [-Wreserved-macro-identifier]
- [1x] #src\games\game\../game\../../qcommon/q_shared.hd(e30f,i9n)e:  _warning: _macro name is a reserved identifier [-Wreserve
  - #src\games\game\../game\../../qcommon/q_shared.hd(e30f,i9n)e:  _warning: _macro name is a reserved identifier [-Wreserved-macro-identifier]Q
- [1x] 549 | void _VectorSubtract( const vec3_t veca, constsrc\games\game\../game\../../qcommon/q_shared.h v(e1511c,314_)t:  vw
  - 549 | void _VectorSubtract( const vec3_t veca, constsrc\games\game\../game\../../qcommon/q_shared.h v(e1511c,314_)t:  vwarning: eidentifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier]c
- [1x] macro name is a reserved identifier [-Wreserved-macro-identifier]src\games\game\../game\../../qcommon/q_shared.h
  - (31,9): warning: macro name is a reserved identifier [-Wreserved-macro-identifier]src\games\game\../game\../../qcommon/q_shared.h
- [1x] (552,   631) | :# dwarning: eidentifier '_VectorScale' is reserved because it starts with '_' followed by a capital lett
  - (552,   631) | :# dwarning: eidentifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]f
- [6x] -Winvalid-utf8
  - src\qcommon\md4.c(52,88): warning: invalid UTF-8 in comment [-Winvalid-utf8]
  - src\qcommon\md4.c(52,141): warning: invalid UTF-8 in comment [-Winvalid-utf8]
- [34x] -Wcast-qual
  - src\qcommon\md4.c(154,58): warning: cast from 'const unsigned char *' to 'unsigned char *' drops const qualifier [-Wcast-qual]
  - src\qcommon\md4.c(166,57): warning: cast from 'const unsigned char *' to 'unsigned char *' drops const qualifier [-Wcast-qual]
- [88x] -Wextra-semi-stmt
  - src\qcommon\md4.c(201,30): warning: empty expression statement has no effect; remove unnecessary ';' to silence this warning [-Wextra-semi-stmt]
  - src\qcommon\md4.c(202,30): warning: empty expression statement has no effect; remove unnecessary ';' to silence this warning [-Wextra-semi-stmt]

## windows-latest-x64-release

status: failure

errors: 149
warnings: 27406 in 8583 kinds

### errors

32fatal error: '../cgame/tr_types.h' file not foundIn file included from
10src\renderer\../qcommon\../qcommon/cm_public.h)(:32 ,10)fatal error: :'../cgame/tr_types.h' file not found
l32u | d#In file included from ifatal error: src\renderer\tr_local.h:e36:
tr_typesu.fatal error: h'../cgame/tr_types.h' file not found"
scons: *** [build\windows-x64-release\client\obj\renderer\tr_cmds.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_backend.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_animation.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_bsp.c.obj] Error 1
src\renderer\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
ssrc\renderer\../qcommon\../qcommon/cm_public.ht( 32v,e10c)3:_ t vfatal error: 1'../cgame/tr_types.h' file not found,
scons: *** [build\windows-x64-release\client\obj\renderer\tr_cmesh.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_curve.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_flares.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_font.c.obj] Error 1
src\renderer\../qcommon\../qcommon/cm_public.h(src\games\game\../game\../../qcommon/q_shared.h32(,55010,)6:) :fatal error:  '../cgame/tr_types.h' file not foundwarning:
scons: *** [build\windows-x64-release\client\obj\renderer\tr_light.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_init.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_image.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_main.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_mesh.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_marks.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_model.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_noise.c.obj] Error 1
rsrc\renderer\../qcommon\../qcommon/cm_public.hA(d32d,(10 )c:o nfatal error: s'../cgame/tr_types.h' file not foundt
scons: *** [build\windows-x64-release\client\obj\renderer\tr_scene.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_shade.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_shade_calc.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_shader.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_sky.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_shadows.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_surface.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_world.c.obj] Error 1
src\client\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Error 1
fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\cl_scrn.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\cl_ui.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\snd_adpcm.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\snd_dma.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\snd_mem.c.obj] Error 1
553 | void _VectorMA( const vec3_t veca, float scale, const vec3_t vecb, vescons: *** [build\windows-x64-release\client\obj\client\snd_mix.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\snd_wavelet.c.obj] Error 1
src\qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_load.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_patch.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_polylib.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_test.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_trace.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\cmd.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\cvar.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\common.c.obj] Error 1
concerning either the merchantability of this software or the suitabilscons: *** [build\windows-x64-release\client\obj\qcommon\files.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\huffman.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\msg.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\net_chan.c.obj] Error 1
src\qcommon\../client\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
src\server\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
553 | void _VectorMA( const vec3_t veca, float scale, const vec3_tscons: *** [build\windows-x64-release\client\obj\qcommon\unzip.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\server\sv_bot.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\server\sv_ccmds.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\server\sv_client.c.obj] Error 1
csrc\server\../qcommon\../qcommon/cm_public.ha(,32 ,c10o)n:s tfatal error:  '../cgame/tr_types.h' file not foundv
scons: *** [build\windows-x64-release\client\obj\server\sv_game.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\server\sv_init.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\server\sv_main.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\server\sv_net_chan.c.obj] Error 1
src\qcommon\q_shared.c(549,scons: *** [build\windows-x64-release\client\obj\server\sv_snapshot.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\server\sv_world.c.obj] Error 1
src\qcommon\../qcommon/cm_public.h-(032.,6108)8:1 9fatal error: 1'../cgame/tr_types.h' file not found
src\qcommon\q_math.c(src\qcommon\../qcommon/cm_public.h96(,3235,)10:) :warning:  implicit conversion loses floating-point precision: 'double' to 'vec_t' (aka 'float') [-Wimplicit-float-conversion]fatal error:
90 |         {0.809017, 0.309017, 0.500000}, {0.681718, 0.147621, 0.716scons: *** [build\windows-x64-release\client\obj\qcommon\vm.c.obj] Error 1
80 |         {0.000000, 0.850651, -0.525731}, {-0.238856, 0.864188, -0.44scons: *** [build\windows-x64-release\client\obj\qcommon\vm_interpreted.c.obj] Error 1
src\client\../client\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
src\client\../renderer\../qcommon\../qcommon/cm_public.h=( 32v,e10c)a:[ 2fatal error: ]'../cgame/tr_types.h' file not found
src\client\../renderer\../qcommon\../qcommon/cm_public.h)([322,]10 )-:  (fatal error:  '../cgame/tr_types.h' file not foundb
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_input.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\q_math.c.obj] Error 1
src\client\../renderer\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_net.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_main.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_shared.c.obj] Error 1
src\splines\math_matrix.cpp(76,14): warning: implicit conversion increases floating-point precision: 'const float' to 'double' [-Wdouble-promotion]scons: *** [build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj] Error 1
src\splines\math_vector.hscons: *** [build\windows-x64-release\client\obj\sys\win32\win_syscon.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\splines\math_quaternion.cpp.obj] Error 1
44 | idVec3 vec_zero( 0.0f, 0.0f,scons: *** [build\windows-x64-release\client\obj\sys\win32\win_wndproc.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\splines\q_parse.cpp.obj] Error 1
298 |                           *wosrc\splines\splines.hrscons: *** [build\windows-x64-release\client\obj\third-party\jpeg-6\jfdctflt.c.obj] Error 1
src\splines\splines.cpp(487,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]scons: *** [build\windows-x64-release\client\obj\third-party\jpeg-6\jcmainct.c.obj] Error 1
src\splines\math_quaternion.h(97,9): warning: unsafe buffer access [-Wunsafe-buffer-usage]scons: *** [build\windows-x64-release\client\obj\third-party\jpeg-6\jcmarker.c.obj] Error 1
src\third-party\jpeg-6\jpeglib.h(440,16): warning: padding struct 'struct jpeg_decompress_struct' with 1 byte to align 'dither_mode' [-Wpadded]scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\third-party\jpeg-6\jddctmgr.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\third-party\jpeg-6\jdmarker.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\third-party\jpeg-6\jerror.c.obj] Error 1
171 warningscons: *** [build\windows-x64-release\client\obj\third-party\jpeg-6\jmemnobs.c.obj] Error 1
122 |                         optimized->vertexoptimizeindex[edge->v[i]] = optimized->numvertexes;192scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_file.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_move.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_optimize.c.obj] Error 1
clang-cl: error: clang frontend command failed due to signal (use -v to see invocation)
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_char.c.obj] Error 3221225477
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_route.c.obj] Error 1
fatal error: error in backend: IO failure on output stream: no space on device
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_sample.c.obj] Error 1
src\games\botlib\../game\../../qcommon/q_shared.h(scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_reach.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_weap.c.obj] Error 1
src\games\botlib\l_precomp.c(725,20): error: incompatible pointer types passing 'unsigned long *' to parameter of type 'const time_t *' (aka 'const long long *') [-Wincompatible-pointer-types]
src\games\botlib\l_precomp.c(rsrc\games\botlib\l_struct.ci(740p272,t20_)t:  ,error: *19incompatible pointer types passing 'unsigned long *' to parameter of type 'const time_t *' (aka 'const long long *') [-Wincompatible-pointer-types]s
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_precomp.c.obj] Error 1
scons: *** [build\windows-x64-release\game\obj\games\game\bg_pmove.c.obj] Error 1
|                                        ^~~~~~~~~~~~~~~~~~~~~~~scons: *** [build\windows-x64-release\game\obj\games\game\g_missile.c.obj] Error 1
scons: *** [build\windows-x64-release\game\obj\games\game\g_mover.c.obj] Error 1
928 |                         trap_SendServerCommand( other scons: *** [build\windows-x64-release\game\obj\games\game\g_team.c.obj] Error 1
nscons: *** [build\windows-x64-release\game\obj\games\game\g_utils.c.obj] Error 1
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_chat.c.obj] Error 1
,10): fatal error:  '../cgame/tr_types.h' file not found3941
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_consolecmds.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj] Error 1
src\games\cgame\../ui/ui_shared.h(34,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_draw.c.obj] Error 1
VectorMA( v, s, b, o )    ( ( o )[0] = ( v )[0] + ( scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_drawtools.c.obj] Error 1
157 | #define GET_FLAME_BLUE_SIZE_SPEED( x )    ( ( (float)x / FLAME_LIFETIME ) / 1.0 ) // scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_event.c.obj] Error 1
462 |                                 scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_effects.c.obj] Error 1
585 | void CG_FreeFlameChunk( flameChunk_t scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_info.c.obj] Error 1
1075scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_main.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_flamethrower.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_newDraw.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_servercmds.c.obj] Error 1
512 | #define VectorMA( v, s, b, o )    ( ( o )[0] = ( v )[0] scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj] Error 1
csrc\games\ui\ui_shared.hi(t34y,,10 )d:i rfatal error: ['../cgame/tr_types.h' file not found0
,   141o |          ){ - 0  ( .( o86418 8, )-[00.]4 4=2 8(6 3v, scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
src\games\ui\ui_local.h(37,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_atoms.c.obj] Error 1
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_gameinfo.c.obj] Error 1
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_players.c.obj] Error 1
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj] Error 1
src\games\ui\ui_shared.h(34,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj] Error 1
(src\games\ui\ui_local.h30(,379,)10:) :warning:  macro name is a reserved identifier [-Wreserved-macro-identifier]fatal error:
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_syscalls.c.obj] Error 1

### warning kinds

- [332x] -Wreserved-macro-identifier
  - src\games\game\../game\../../qcommon/q_shared.h(30,9): warning: macro name is a reserved identifier [-Wreserved-macro-identifier]
  - src\games\game\../game\../../qcommon/q_shared.h(30,9): warning: macro name is a reserved identifier [-Wreserved-macro-identifier]
- [1x] macro name is a reserved identifier [-Wreserved-macro-identifier]34
  - 9): warning: macro name is a reserved identifier [-Wreserved-macro-identifier]34
- [1x] src\games\game\../game\../../qcommon/q_shared.h(   3030,9 | )#:d ewarning: fmacro name is a reserved identifier [-Wreser
  - src\games\game\../game\../../qcommon/q_shared.h(   3030,9 | )#:d ewarning: fmacro name is a reserved identifier [-Wreserved-macro-identifier]i
- [1x] src\games\game\../game\../../qcommon/q_shared.hsrc\games\game\../game\../../qcommon/q_shared.hsrc\games\game\../game\../
  - src\games\game\../game\../../qcommon/q_shared.hsrc\games\game\../game\../../qcommon/q_shared.hsrc\games\game\../game\../../qcommon/q_shared.hsrc\games\game\../game\../../qcommon/q_shared.h(548,7): (warning: 548(,5487identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier],)
- [1x] :7( )warning: :identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-
  - :7( )warning: :identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] warning:   identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-iden
  - warning:   identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]548
- [1x] | v  e548c |   548_,548vt7): warning: identifier '_DotProduct' is reserved because it starts with '_' followed by a capi
  - | v  e548c |   548_,548vt7): warning: identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] warning: src\games\game\../game\../../qcommon/q_shared.hidentifier '_VectorSubtract' is reserved because it starts with 
  - warning: src\games\game\../game\../../qcommon/q_shared.hidentifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier](
- [1x] 549,6  )549: |  vwarning: oidentifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital let
  - 549,6  )549: |  vwarning: oidentifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] src\games\game\../game\../../qcommon/q_shared.hi(d549 ,_6V)e:c twarning: o  rSidentifier '_VectorSubtract' is reserved b
  - src\games\game\../game\../../qcommon/q_shared.hi(d549 ,_6V)e:c twarning: o  rSidentifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]u
- [1x] n s549tv,e cv3_etc 36o_ut) :v src\games\game\../game\../../qcommon/q_shared.hetc a),;(550warning: ,
  - n s549tv,e cv3_etc 36o_ut) :v src\games\game\../game\../../qcommon/q_shared.hetc a),;(550warning: ,
- [1x] :s twarning:  identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-id
  - :s twarning:  identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]v
- [1x] 549e | cv  3550_o | isrc\games\game\../game\../../qcommon/q_shared.hd( t550 ,vvo6e)c:bi,  warning: videntifier '_VectorA
  - 549e | cv  3550_o | isrc\games\game\../game\../../qcommon/q_shared.hd( t550 ,vvo6e)c:bi,  warning: videntifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]e
- [1x] o_cratA,d  dc(on scto nsvte c3v_src\games\game\../game\../../qcommon/q_shared.hv(eetc 550v,ecc63)_:tb  warning: ,identif
  - o_cratA,d  dc(on scto nsvte c3v_src\games\game\../game\../../qcommon/q_shared.hv(eetc 550v,ecc63)_:tb  warning: ,identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]v
- [1x] :      :  | warning:      ^identifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter 
  - :      :  | warning:      ^identifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [2x] warning:
  - warning:
  - warning:
- [1x] 551e |   c550 | voisrc\games\game\../game\../../qcommon/q_shared.hd( _551b,V,e 6vce)ct3o_rvt :o iwarning: d identifier '
  - 551e |   c550 | voisrc\games\game\../game\../../qcommon/q_shared.hd( _551b,V,e 6vce)ct3o_rvt :o iwarning: d identifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]_
- [1x] src\games\game\../game\../../qcommon/q_shared.h      (_551,6):V ewarning: cidentifier '_VectorCopy' is reserved because 
  - src\games\game\../game\../../qcommon/q_shared.h      (_551,6):V ewarning: cidentifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]t o
- [1x] : warning: identifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-iden
  - : warning: identifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] 6)  :551  | src\games\game\../game\../../qcommon/q_shared.hv(o552i,d6 _)V:ewarning:  identifier '_VectorScale' is reserv
  - 6)  :551  | src\games\game\../game\../../qcommon/q_shared.hv(o552i,d6 _)V:ewarning:  identifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]warning: c
- [1x] vee(c 3c_otn sint,  vfelc3oa_src\games\game\../game\../../qcommon/q_shared.ht( 552i,tn6,) :f lwarning: identifier '_Vect
  - vee(c 3c_otn sint,  vfelc3oa_src\games\game\../game\../../qcommon/q_shared.ht( 552i,tn6,) :f lwarning: identifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]o
- [1x] st vec3_t insrc\games\game\../game\../../qcommon/q_shared.h,( 553f,l6o)a:t  warning: sidentifier '_VectorMA' is reserved
  - st vec3_t insrc\games\game\../game\../../qcommon/q_shared.h,( 553f,l6o)a:t  warning: sidentifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]c
- [1x] ):s cwarning: aidentifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-id
  - ):s cwarning: aidentifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]l
- [1x] e,,6 )  c553o | nvsoti :v edc warning: 3identifier '_VectorMA' is reserved because it starts with '_' followed by a capi
  - e,,6 )  c553o | nvsoti :v edc warning: 3identifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]__Vte cvte
- [1x] v_src\games\game\../game\../../qcommon/q_shared.hVeec(a552,c,t 6of)lr:o awarning: tidentifier '_VectorScale' is reserved
  - v_src\games\game\../game\../../qcommon/q_shared.hVeec(a552,c,t 6of)lr:o awarning: tidentifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] eca, flsrc\games\game\../game\../../qcommon/q_shared.ho(a553t, 6s)c:a lwarning: eidentifier '_VectorMA' is reserved beca
  - eca, flsrc\games\game\../game\../../qcommon/q_shared.ho(a553t, 6s)c:a lwarning: eidentifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier],
- [1079x] -Wreserved-identifier
  - src\games\game\../game\../../qcommon/q_shared.h(1511,14): warning: identifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier]
  - src\games\game\../game\../../qcommon/q_shared.h(1511,14): warning: identifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier]
- [1x] warning: In file included from src\renderer\tr_local.hidentifier '_TargaHeader' is reserved because it starts with '_' f
  - warning: In file included from src\renderer\tr_local.hidentifier '_TargaHeader' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]:
- [1x] src\renderer\../qcommon/qfiles.h(30,#9d)e:f inwarning: e macro name is a reserved identifier [-Wreserved-macro-identifie
  - src\renderer\../qcommon/qfiles.h(30,#9d)e:f inwarning: e macro name is a reserved identifier [-Wreserved-macro-identifier]
- [1x] 102 | typedef struct src\renderer\../qcommon/qfiles.h_(T102a,r16g)a:H ewarning: aidentifier '_TargaHeader' is reserved b
  - 102 | typedef struct src\renderer\../qcommon/qfiles.h_(T102a,r16g)a:H ewarning: aidentifier '_TargaHeader' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]d
- [1x] 1511src\games\game\../game\../../qcommon/q_shared.h | (t553y,p6e): warning: identifier '_VectorMA' is reserved because i
  - 1511src\games\game\../game\../../qcommon/q_shared.h | (t553y,p6e): warning: identifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] macro name is a reserved identifier [-Wreserved-macro-identifier]In file included from
  - src\renderer\../qcommon/qcommon.h(31,9): warning: macro name is a reserved identifier [-Wreserved-macro-identifier]In file included from
- [1x] #src\renderer\../qcommon/qfiles.h(d30e,f9i)n:e  warning: _macro name is a reserved identifier [-Wreserved-macro-identifi
  - #src\renderer\../qcommon/qfiles.h(d30e,f9i)n:e  warning: _macro name is a reserved identifier [-Wreserved-macro-identifier]Q
- [1x] 6      )| :         ^~~~~~~~~~~~~~~~~~~~~ warning: identifier '_VectorSubtract' is reserved because it starts with '_' f
  - 6      )| :         ^~~~~~~~~~~~~~~~~~~~~ warning: identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] src\renderer\../qcommon\../qcommon/cm_public.h(src\games\game\../game\../../qcommon/q_shared.h32(,55010,)6:) :fatal erro
  - src\renderer\../qcommon\../qcommon/cm_public.h(src\games\game\../game\../../qcommon/q_shared.h32(,55010,)6:) :fatal error:  '../cgame/tr_types.h' file not foundwarning:
- [1x] src\games\game\../game\../../qcommon/q_shared.h   (30548 | ,#7d)e:f iwarning: nidentifier '_DotProduct' is reserved beca
  - src\games\game\../game\../../qcommon/q_shared.h   (30548 | ,#7d)e:f iwarning: nidentifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]e
- [1x] src\games\game\../game\../../qcommon/q_shared.h102( | 549t,y6p)e:d ewarning: fidentifier '_VectorSubtract' is reserved b
  - src\games\game\../game\../../qcommon/q_shared.h102( | 549t,y6p)e:d ewarning: fidentifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] warning:       macro name is a reserved identifier [-Wreserved-macro-identifier]|
  - warning:       macro name is a reserved identifier [-Wreserved-macro-identifier]|
- [2x] warning: | identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-
  - warning: | identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]        ^
  - warning: | identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]         ^
- [1x] (src\qcommon\../qcommon\qfiles.h (c30o,n9s)t:  vwarning: emacro name is a reserved identifier [-Wreserved-macro-identifi
  - (src\qcommon\../qcommon\qfiles.h (c30o,n9s)t:  vwarning: emacro name is a reserved identifier [-Wreserved-macro-identifier]c
- [6x] -Winvalid-utf8
  - src\qcommon\md4.c(52,88): warning: invalid UTF-8 in comment [-Winvalid-utf8]
  - src\qcommon\md4.c(52,141): warning: invalid UTF-8 in comment [-Winvalid-utf8]
- [1x] tsrc\games\game\../game\../../qcommon/q_shared.ha( 30S,e9c)u:r iwarning: tmacro name is a reserved identifier [-Wreserve
  - tsrc\games\game\../game\../../qcommon/q_shared.ha( 30S,e9c)u:r iwarning: tmacro name is a reserved identifier [-Wreserved-macro-identifier]y
- [37x] -Wcast-qual
  - src\qcommon\md4.c(154,58): warning: cast from 'const unsigned char *' to 'unsigned char *' drops const qualifier [-Wcast-qual]
  - src\qcommon\md4.c(166,57): warning: cast from 'const unsigned char *' to 'unsigned char *' drops const qualifier [-Wcast-qual]
- [74x] -Wextra-semi-stmt
  - src\qcommon\md4.c(201,30): warning: empty expression statement has no effect; remove unnecessary ';' to silence this warning [-Wextra-semi-stmt]
  - src\qcommon\md4.c(202,30): warning: empty expression statement has no effect; remove unnecessary ';' to silence this warning [-Wextra-semi-stmt]
- [267x] -Wsign-conversion
  - src\qcommon\md4.c(293,44): warning: implicit conversion changes signedness: 'int' to 'unsigned int' [-Wsign-conversion]
  - src\qcommon\md4.c(296,42): warning: implicit conversion changes signedness: 'int' to 'unsigned int' [-Wsign-conversion]
- [1055x] -Wmissing-prototypes
  - src\qcommon\md4.c(287,10): warning: no previous prototype for function 'Com_BlockChecksum' [-Wmissing-prototypes]
  - src\qcommon\md4.c(301,10): warning: no previous prototype for function 'Com_BlockChecksumKey' [-Wmissing-prototypes]
- [7296x] -Wunsafe-buffer-usage
  - src\qcommon\md4.c(154,25): warning: unsafe buffer access [-Wunsafe-buffer-usage]
  - src\qcommon\md4.c(158,35): warning: unsafe buffer access [-Wunsafe-buffer-usage]
- [1x] )src\games\game\../game\../../qcommon/q_shared.h:( 30warning: ,macro name is a reserved identifier [-Wreserved-macro-ide
  - )src\games\game\../game\../../qcommon/q_shared.h:( 30warning: ,macro name is a reserved identifier [-Wreserved-macro-identifier]9
- [1x] ):    31warning:  | macro name is a reserved identifier [-Wreserved-macro-identifier]#
  - ):    31warning:  | macro name is a reserved identifier [-Wreserved-macro-identifier]#
- [1x] src\qcommon\../qcommon\qfiles.h(30,930 | #define _)_:Q _warning: Smacro name is a reserved identifier [-Wreserved-macro-
  - src\qcommon\../qcommon\qfiles.h(30,930 | #define _)_:Q _warning: Smacro name is a reserved identifier [-Wreserved-macro-identifier]H
- [1x] 550 | void _Vectorsrc\games\game\../game\../../qcommon/q_shared.hAd(d1511(, 14c)o:n warning: identifier '_flag_status' i
  - 550 | void _Vectorsrc\games\game\../game\../../qcommon/q_shared.hAd(d1511(, 14c)o:n warning: identifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier]
- [1x] vsrc\server\../qcommon/qcommon.he(c313,_9t) :v ewarning: cmacro name is a reserved identifier [-Wreserved-macro-identifi
  - vsrc\server\../qcommon/qcommon.he(c313,_9t) :v ewarning: cmacro name is a reserved identifier [-Wreserved-macro-identifier]
- [47x] -Wshadow-header
  - src\qcommon\q_shared.c(32,10): warning: multiple candidates for header 'q_shared.h' found; directory 'src\qcommon' chosen, ignoring others including 'src\games\game' [-Wshadow-header]
  - src\qcommon\q_math.c(32,10): warning: multiple candidates for header 'q_shared.h' found; directory 'src\qcommon' chosen, ignoring others including 'src\games\game' [-Wshadow-header]
- [1x] 30src\games\game\../game\../../qcommon/q_shared.h,(930),:9 )warning: : macro name is a reserved identifier [-Wreserved-m
  - 30src\games\game\../game\../../qcommon/q_shared.h,(930),:9 )warning: : macro name is a reserved identifier [-Wreserved-macro-identifier]warning:
- [2x] identifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]src\
  - src\games\game\../game\../../qcommon/q_shared.h(551,6): warning: identifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]src\qcommon\q_shared.h
  - src\games\game\../../qcommon/q_shared.h(551,6): warning: identifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]src\games\game\g_script_actions.c
- [1x] (1511,  14551) | :v owarning: iidentifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreser
  - (1511,  14551) | :v owarning: iidentifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier]d
- [118x] -Wshorten-64-to-32
  - src\qcommon\q_shared.c(87,23): warning: implicit conversion loses integer precision: '__size_t' (aka 'unsigned long long') to 'int' [-Wshorten-64-to-32]
  - src\qcommon\q_shared.c(879,7): warning: implicit conversion loses integer precision: '__size_t' (aka 'unsigned long long') to 'int' [-Wshorten-64-to-32]
- [1x] src\games\game\../game\../../qcommon/q_shared.himplicit conversion from 'int' to enumeration type 'qboolean' is invalid 
  - 42): warning: src\games\game\../game\../../qcommon/q_shared.himplicit conversion from 'int' to enumeration type 'qboolean' is invalid in C++ [-Wimplicit-int-enum-cast](
- [1x] 552,6):   warning: 135 | identifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [
  - 552,6):   warning: 135 | identifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] // (SA) heh, src\games\game\../game\../../qcommon/q_shared.hw(h553o,o6p)s:.  warning: :identifier '_VectorMA' is reserve
  - // (SA) heh, src\games\game\../game\../../qcommon/q_shared.hw(h553o,o6p)s:.  warning: :identifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier])

## windows-latest-x86-debug

status: failure

errors: 155
warnings: 24537 in 6866 kinds

### errors

src\renderer\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_cmds.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_animation.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_bsp.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_backend.c.obj] Error 1
src\renderer\../qcommon\../qcommon/cm_public.h(32,10): src\games\game\../game\../../qcommon/q_shared.hfatal error: ('../cgame/tr_types.h' file not found549
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_cmesh.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_curve.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_flares.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_font.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_init.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_light.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_image.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_main.c.obj] Error 1
)      :|               ^fatal error:
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_marks.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_mesh.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_noise.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_model.c.obj] Error 1
src\renderer\../qcommon\../qcommon/cm_public.hc(o32n,s10t) :v ec3fatal error: _'../cgame/tr_types.h' file not foundt
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_scene.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_shade.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_shade_calc.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_shader.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_shadows.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_sky.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_surface.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_world.c.obj] Error 1
src\client\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x86-debug\client\obj\client\cl_cgame.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\cl_cin.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\cl_console.c.obj] Error 1
549 | void _VectorSubtract( const vec3_t veca, conscons: *** [build\windows-x86-debug\client\obj\client\cl_input.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\cl_keys.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\cl_main.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\cl_parse.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\cl_net_chan.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\cl_scrn.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\cl_ui.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\snd_adpcm.c.obj] Error 1
549 | void _VectorSubtract( const vec3_t veca, const vec3_t scons: *** [build\windows-x86-debug\client\obj\client\snd_dma.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\snd_mem.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\snd_mix.c.obj] Error 1
src\qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x86-debug\client\obj\client\snd_wavelet.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\cm_load.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\cm_patch.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\cm_polylib.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\cm_test.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\cm_trace.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\cmd.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\common.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\cvar.c.obj] Error 1
(208,   3031) | :# dwarning: eempty expression statement has no effect; remove unnecessary ';' to silence this warning [-Wextra-semi-stmt]fscons: *** [build\windows-x86-debug\client\obj\qcommon\files.c.obj] Error 1
iscons: *** [build\windows-x86-debug\cl  208 |         FF( nbe,  _cQ,C d, a,O x[ 7]M, S1M4 O)N;_ H _
src\qcommon\../qcommon/cm_public.h    ( /32*, 102)1:  *fatal error: /'../cgame/tr_types.h' file not found
154 |                 Com_Memcpy( (POINTER)&contextscons: *** [build\windows-x86-debug\client\obj\qcommon\huffman.c.obj] Error 1
In file included from scons: *** [build\windows-x86-debug\client\obj\qcommon\md4.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\msg.c.obj] Error 1
src\qcommon\../client\../qcommon\../qcommon\qfiles.h(scons: *** [build\windows-x86-debug\client\obj\qcommon\net_chan.c.obj] Error 1
src\qcommon\../client\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
warning: macro name is a reserved identifier [-Wreserved-macro-identifier]scons: *** [build\windows-x86-debug\client\obj\qcommon\unzip.c.obj] Error 1
src\server\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
src\server\../qcommon\../qcommon\qfiles.hscons: *** [build\windows-x86-debug\client\obj\server\sv_bot.c.obj] Error 1
src\server\../qcommon\../qcommon\qfiles.h(102,16): warning: identifier '_TargaHeader' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]scons: *** [build\windows-x86-debug\client\obj\server\sv_ccmds.c.obj] Error 1
30 | #define __QFILES_H_scons: *** [build\windows-x86-debug\client\obj\server\sv_client.c.obj] Error 1
src\server\../qcommon\../qcommon/cm_public.h(32,10):scons: *** [build\windows-x86-debug\client\obj\server\sv_game.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\server\sv_init.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\server\sv_main.c.obj] Error 1
: fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x86-debug\client\obj\server\sv_net_chan.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\server\sv_snapshot.c.obj] Error 1
src\server\../qcommon\../qcommon/cm_public.h(32  ,20510 | )s:h ofatal error: r'../cgame/tr_types.h' file not foundt
src\qcommon\q_shared.c(434,9): warning: In file included from scons: *** [build\windows-x86-debug\client\obj\server\sv_world.c.obj] Error 1
src\qcommon\../qcommon/cm_public.h(32,  10136) | :         {fatal error: 0'../cgame/tr_types.h' file not found.
-src\qcommon\qcommon.hscons: *** [build\windows-x86-debug\client\obj\qcommon\vm.c.obj] Error 1
0src\qcommon\../qcommon/cm_public.h.(4322,5103)2:5 }fatal error: ,'../cgame/tr_types.h' file not found
|         ~           ^~~~~~~~~scons: *** [build\windows-x86-debug\client\obj\qcommon\q_shared.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\vm_interpreted.c.obj] Error 1
src\qcommon\../qcommon/cm_public.h-(032.,410253)25: fatal error: '../cgame/tr_types.h' file not found}
2src\client\../renderer\../qcommon\../qcommon/cm_public.h4((32549,62),:  warning: 0,.100)0:0 identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]fatal error:
scons: *** [build\windows-x86-debug\client\obj\qcommon\vm_x86.c.obj] Error 1
,src\client\../renderer\../qcommon\../qcommon/cm_public.h (032.,1106)2:4 6fatal error: 0'../cgame/tr_types.h' file not found}
src\client\../client\../qcommon\../qcommon/cm_public.h(src\qcommon\q_math.c32(,395,1041))::  fatal error: warning: '../cgame/tr_types.h' file not foundimplicit conversion increases floating-point precision: 'vec_t' (aka 'float') to 'double' [-Wdouble-promotion]
src\qcommon\q_math.c(745,2): error: non-ASM statement in naked function is not supported
scons: *** [build\windows-x86-debug\client\obj\qcommon\q_math.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
src\client\../client\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_input.c.obj] Error 1
src\client\../renderer\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_main.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_net.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_qgl.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_shared.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_snd.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_syscon.c.obj] Error 1
229 | ID_INLINE voIn file included from scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_wndproc.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\third-party\jpeg-6\jcapimin.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\splines\util_str.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\third-party\jpeg-6\jccoefct.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\third-party\jpeg-6\jccolor.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\splines\splines.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\third-party\jpeg-6\jdcoefct.c.obj] Error 1
|                         ^~~~~fatal error:
ptr->mem_buffer[undef_row], bytespscons: *** [build\windows-x86-debug\client\obj\third-party\jpeg-6\jidctflt.c.obj] Error 1
509 | #define VectorCopy( a,b )         ( ( b )[0] = ( a )[0],( b )[1]scons: *** [build\windows-x86-debug\client\obj\third-party\jpeg-6\jerror.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\third-party\jpeg-6\jmemnobs.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ai_goal.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ai_move.c.obj] Error 1
src\games\botlib\l_precomp.c(725,20): error: incompatible pointer types passing 'unsigned long *' to parameter of type 'const time_t *' (aka 'const long long *') [-Wincompatible-pointer-types]
error: | incompatible pointer types passing 'unsigned long *' to parameter of type 'const time_t *' (aka 'const long long *') [-Wincompatible-pointer-types]              ^
src\games\botlib\l_struct.c(scons: *** [build\windows-x86-debug\client\obj\games\botlib\l_precomp.c.obj] Error 1
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_funcs.c.obj] Error 1
scons: *** [build\windows-x86-debug\game\obj\games\game\g_misc.c.obj] Error 1
src\games\game\../game\../../qcommon/q_shared.hscons: *** [build\windows-x86-debug\game\obj\games\game\g_mover.c.obj] Error 1
scons: *** [build\windows-x86-debug\game\obj\games\botai\ai_dmnet.c.obj] Error 1
scons: *** [build\windows-x86-debug\game\obj\games\botai\ai_dmq3.c.obj] Error 1
scons: *** [build\windows-x86-debug\game\obj\qcommon\q_math.c.obj] Error 1
src\games\cgame\../ui/ui_shared.h(34,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_consolecmds.c.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_draw.c.obj] Error 1
583 | #define random()    ( ( rand(src\games\cgame\../ui/ui_shared.h(34,)10 )&:  0xfatal error: 7f'../cgame/tr_types.h' file not foundf
i warningtsrc\games\cgame\../game\../../qcommon/q_shared.hes(m584 -, 31b and )1g error: generated _.
src\games\cgame\../game\../../qcommon/q_shared.hscons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_event.c.obj] Error 1
1653 |                                 cent->boltTimes[i] = cg.time + rand() % cent->currentState.time2;     // hold this position for ~1 second ('stickytime' value is src\games\cgame\../ui/ui_shared.hst(o34r,10ed) :i nfatal error:  '../cgame/tr_types.h' file not found.
_SIZ E1696_ | S        PrEeEcDo(i lx[ Y)A W ]   =(  c(r (]fl o+a t() xb  /) [F0L]A M*E _(L IsF E)T,I(M Eo  )) [/1 ]1 .=0  ()  v/ /) [x1 ]i s+  t(h eb  c)u[r1r]scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_info.c.obj] Error 1
( s )   )scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
dTisrc\games\cgame\../game\../../qcommon/q_shared.hm(e509 scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_effects.c.obj] Error 1
1671 |                 light = (floatsrc\games\cgame\../ui/ui_shared.h)((34 ,c10g).:t ifatal error: m'../cgame/tr_types.h' file not founde
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_main.c.obj] Error 1
263 |                 memcpy( mark->vertsscons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_localents.c.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_marks.c.obj] Error 1
250scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_newDraw.c.obj] Error 1
512 | #define VectorMA( v, s, b, o )    ( ( o )[0] = ( v )[0] + ( b )src\games\cgame\../ui/ui_shared.h(34,10): fatal error: '../cgame/tr_types.h' file not found
4019 |                                 radius = ( minDist + sin( M_PI * 2 * (floatscons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_servercmds.c.obj] Error 1
302 |         le->endTime = le->startTime + ( cg_brassTime.integer * 8 ) + ( cg_scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_view.c.obj] Error 1
512 | #define VectorMA( v, s, b, o )    ( ( o )[0] = ( v )[0] + ( b )[0] * ( s ),( o )[1] = ( v )[1] + ( b )[1] * ( s ),( o )[2] = ( scons: *** [build\windows-x86-debug\cgame\obj\games\ui\ui_shared.c.obj] Error 1
42 | isrc\qcommon\q_math.cnt( 745p,r2o)p:e lerror: lnon-ASM statement in naked function is not supportede
512 | #define Vescons: *** [build\windows-x86-debug\cgame\obj\qcommon\q_math.c.obj] Error 1
src\games\ui\ui_local.hsrc\games\game\../../qcommon/q_shared.h((37537,,1074))::  fatal error: note: '../cgame/tr_types.h' file not foundexpanded from macro 'VectorNegate'
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_atoms.c.obj] Error 1
src\games\cgame\cg_weapons.csrc\games\ui\ui_local.h((545537,,410))::  warning: fatal error: unsafe buffer access [-Wunsafe-buffer-usage]'../cgame/tr_types.h' file not found
|                                                                                       ^~~~~scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_gameinfo.c.obj] Error 1
src\games\ui\ui_local.h-( 37(, 10b) :) [fatal error: 0'../cgame/tr_types.h' file not found]
)      :|                  ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~fatal error:
ties   [s30o | u#rdcefeiEnnet i_t_Qy_SNHscons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_players.c.obj] Error 1
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_main.c.obj] Error 1
src\games\ui\ui_shared.h(34,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_weapons.c.obj] Error 1
src\games\ui\ui_local.h(37,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_shared.c.obj] Error 1
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_syscalls.c.obj] Error 1
scons: *** [build\windows-x86-debug\ui\obj\qcommon\q_math.c.obj] Error 1

### warning kinds

- [324x] -Wreserved-macro-identifier
  - src\games\game\../game\../../qcommon/q_shared.h(30,9): warning: macro name is a reserved identifier [-Wreserved-macro-identifier]
  - src\games\game\../game\../../qcommon/q_shared.h(30,9): warning: macro name is a reserved identifier [-Wreserved-macro-identifier]
- [1x] 9In file included from )src\renderer\tr_local.h:: 34warning: :
  - 9In file included from )src\renderer\tr_local.h:: 34warning: :
- [1x] src\games\game\../game\../../qcommon/q_shared.h(30,   930): |  #warning: dmacro name is a reserved identifier [-Wreserve
  - src\games\game\../game\../../qcommon/q_shared.h(30,   930): |  #warning: dmacro name is a reserved identifier [-Wreserved-macro-identifier]e
- [1045x] -Wreserved-identifier
  - src\games\game\../game\../../qcommon/q_shared.h(548,7): warning: identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
  - src\games\game\../game\../../qcommon/q_shared.h(549,6): warning: identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [3x] identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
  - 550 | src\games\game\../game\../../qcommon/q_shared.hsrc\games\game\../game\../../qcommon/q_shared.h(548,7): warning: identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
  - 1908 | const char *CG_Getsrc\games\cgame\../game\../../qcommon/q_shared.h(548,7): warning: identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] (548,7  )548: |  vwarning: eidentifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter
  - (548,7  )548: |  vwarning: eidentifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]c
- [1x] onst vec3_tsrc\games\game\../game\../../qcommon/q_shared.h (v549e,c6b),:  vwarning: eidentifier '_VectorSubtract' is res
  - onst vec3_tsrc\games\game\../game\../../qcommon/q_shared.h (v549e,c6b),:  vwarning: eidentifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]c
- [1x] _      V| e(c549,t6o)r:S uwarning: bidentifier '_VectorSubtract' is reserved because it starts with '_' followed by a ca
  - _      V| e(c549,t6o)r:S uwarning: bidentifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]t
- [1x] )u:t  warning: )identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-
  - )u:t  warning: )identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier];
- [1x] 550 | vosrc\games\game\../game\../../qcommon/q_shared.hi(d551 src\games\game\../game\../../qcommon/q_shared.h_(550Ve,c6t
  - 550 | vosrc\games\game\../game\../../qcommon/q_shared.hi(d551 src\games\game\../game\../../qcommon/q_shared.h_(550Ve,c6t)o:r Awarning: didentifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]d
- [1x] vecb, vec3src\games\game\../game\../../qcommon/q_shared.h_(t551 ,o6u)t:  )warning: ;identifier '_VectorCopy' is reserved
  - vecb, vec3src\games\game\../game\../../qcommon/q_shared.h_(t551 ,o6u)t:  )warning: ;identifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] 551 | void _Vesrc\games\game\../game\../../qcommon/q_shared.hct(o551r,C6o)p:y (warning:  identifier '_VectorCopy' is res
  - 551 | void _Vesrc\games\game\../game\../../qcommon/q_shared.hct(o551r,C6o)p:y (warning:  identifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]c
- [1x] onst   551v | evco3i_dt  _iVne,,6): c vwarning: teoidentifier '_VectorCopy' is reserved because it starts with '_' follo
  - onst   551v | evco3i_dt  _iVne,,6): c vwarning: teoidentifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]cr
- [1x] Vcec3t_otr Cionp,src\games\game\../game\../../qcommon/q_shared.hy (v552(e,c6 )c3:_ owarning: nidentifier '_VectorScale' 
  - Vcec3t_otr Cionp,src\games\game\../game\../../qcommon/q_shared.hy (v552(e,c6 )c3:_ owarning: nidentifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]stt
- [1x] 548,7src\games\game\../game\../../qcommon/q_shared.h):( 552warning: ,identifier '_DotProduct' is reserved because it sta
  - 548,7src\games\game\../game\../../qcommon/q_shared.h):( 552warning: ,identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]6
- [1x] )src\games\game\../game\../../qcommon/q_shared.h:( 552warning: ,identifier '_VectorScale' is reserved because it starts 
  - )src\games\game\../game\../../qcommon/q_shared.h:( 552warning: ,identifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] 6548a | )  :552  | warning: vveoci_dt  __VDeotcPtroordSuclaceidentifier '_VectorScale' is reserved because it starts wit
  - 6548a | )  :552  | warning: vveoci_dt  __VDeotcPtroordSuclaceidentifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier](
- [1x] :       | warning:      ^cidentifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-W
  - :       | warning:      ^cidentifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]on st vec3
- [1x] v       oviedsrc\games\game\../game\../../qcommon/q_shared.h (_553c,36_)V:|  ewarning: cidentifier '_VectorMA' is reserv
  - v       oviedsrc\games\game\../game\../../qcommon/q_shared.h (_553c,36_)V:|  ewarning: cidentifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]t      ^t
- [1x] overcMaA,(  fcloonsrc\games\game\../game\../../qcommon/q_shared.hs(ta553 ,v6e)c:3 _warning: tidentifier '_VectorMA' is r
  - overcMaA,(  fcloonsrc\games\game\../game\../../qcommon/q_shared.hs(ta553 ,v6e)c:3 _warning: tidentifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] MA( csrc\games\game\../game\../../qcommon/q_shared.ho(n550s,t6 )v:e cwarning: 3identifier '_VectorAdd' is reserved becau
  - MA( csrc\games\game\../game\../../qcommon/q_shared.ho(n550s,t6 )v:e cwarning: 3identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]_
- [1x] src\games\game\../game\../../qcommon/q_shared.h(1511,14):src\games\game\../game\../../qcommon/q_shared.h warning: (ident
  - src\games\game\../game\../../qcommon/q_shared.h(1511,14):src\games\game\../game\../../qcommon/q_shared.h warning: (identifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier]1511
- [1x] ,14) :1511  | warning: tidentifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-ide
  - ,14) :1511  | warning: tidentifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier]y
- [1x] Qsrc\renderer\../qcommon/qfiles.hFI(L30E,S9_)H:_ warning: _macro name is a reserved identifier [-Wreserved-macro-identif
  - Qsrc\renderer\../qcommon/qfiles.hFI(L30E,S9_)H:_ warning: _macro name is a reserved identifier [-Wreserved-macro-identifier]
- [1x] 553 | void _Vectsrc\games\game\../game\../../qcommon/q_shared.ho(r548M,A7() :c owarning: nidentifier '_DotProduct' is re
  - 553 | void _Vectsrc\games\game\../game\../../qcommon/q_shared.ho(r548M,A7() :c owarning: nidentifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]s
- [1x] Add( const vec3_t veca, consrc\renderer\../qcommon/qfiles.hs(t102 ,v16e)c:3 _warning: tidentifier '_TargaHeader' is rese
  - Add( const vec3_t veca, consrc\renderer\../qcommon/qfiles.hs(t102 ,v16e)c:3 _warning: tidentifier '_TargaHeader' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] src\renderer\../qcommon/qfiles.h"(.30.,/9c)g:a me/trwarning: _tmacro name is a reserved identifier [-Wreserved-macro-ide
  - src\renderer\../qcommon/qfiles.h"(.30.,/9c)g:a me/trwarning: _tmacro name is a reserved identifier [-Wreserved-macro-identifier]y
- [1x] )      :|                 ^warning:
  - )      :|                 ^warning:
- [1x] src\games\game\../game\../../qcommon/q_shared.h(548,7):src\games\game\../game\../../qcommon/q_shared.h (warning: 553iden
  - src\games\game\../game\../../qcommon/q_shared.h(548,7):src\games\game\../game\../../qcommon/q_shared.h (warning: 553identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier],
- [1x] 6):   warning: 548identifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved
  - 6):   warning: 548identifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier] |
- [1x] t vec3_tsrc\games\game\../game\../../qcommon/q_shared.h (v549e,c6b),:  vwarning: ecidentifier '_VectorSubtract' is reser
  - t vec3_tsrc\games\game\../game\../../qcommon/q_shared.h (v549e,c6b),:  vwarning: ecidentifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]3
- [1x] 553 | void _VectorMA( const vec3_t veca, float scale, const vec3_t vecb, vsrc\games\game\../game\../../qcommon/q_shared.
  - 553 | void _VectorMA( const vec3_t veca, float scale, const vec3_t vecb, vsrc\games\game\../game\../../qcommon/q_shared.he(c15113,_14t) :v ewarning: cidentifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier]c
- [1x] t vec3_t in, src\games\game\../game\../../qcommon/q_shared.hf(l550o,a6t) :s cwarning: aidentifier '_VectorAdd' is reserv
  - t vec3_t in, src\games\game\../game\../../qcommon/q_shared.hf(l550o,a6t) :s cwarning: aidentifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]l
- [1x] d( const vecsrc\games\game\../game\../../qcommon/q_shared.h3(_553t, 6v)e:c awarning: ,identifier '_VectorMA' is reserved
  - d( const vecsrc\games\game\../game\../../qcommon/q_shared.h3(_553t, 6v)e:c awarning: ,identifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] veca, flsrc\games\game\../game\../../qcommon/q_shared.ho(a551t, 6s)c:a lwarning: eidentifier '_VectorCopy' is reserved b
  - veca, flsrc\games\game\../game\../../qcommon/q_shared.ho(a551t, 6s)c:a lwarning: eidentifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier],
- [3x] warning: identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identi
  - warning: identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
  - warning: identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] 548 | src\games\game\../game\../../qcommon/q_shared.hv(e552c,_6t) :_ Dwarning: oidentifier '_VectorScale' is reserved be
  - 548 | src\games\game\../game\../../qcommon/q_shared.hv(e552c,_6t) :_ Dwarning: oidentifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]t
- [1x] 553 | src\games\game\../game\../../qcommon/q_shared.hv(o549i,d6 )_:V ewarning: cidentifier '_VectorSubtract' is reserved
  - 553 | src\games\game\../game\../../qcommon/q_shared.hv(o549i,d6 )_:V ewarning: cidentifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]t
- [1x] 551 | void _VectorCopy( const vec3_t in, vsrc\games\game\../game\../../qcommon/q_shared.he(c5483,_7t) :o uwarning: tiden
  - 551 | void _VectorCopy( const vec3_t in, vsrc\games\game\../game\../../qcommon/q_shared.he(c5483,_7t) :o uwarning: tidentifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] vsrc\client\../qcommon/qcommon.he(c31a,,9 )f:l owarning: amacro name is a reserved identifier [-Wreserved-macro-identifi
  - vsrc\client\../qcommon/qcommon.he(c31a,,9 )f:l owarning: amacro name is a reserved identifier [-Wreserved-macro-identifier]
- [6x] -Winvalid-utf8
  - src\qcommon\md4.c(52,88): warning: invalid UTF-8 in comment [-Winvalid-utf8]
  - src\qcommon\md4.c(52,141): warning: invalid UTF-8 in comment [-Winvalid-utf8]
- [34x] -Wcast-qual
  - (154,58): warning: cast from 'const unsigned char *' to 'unsigned char *' drops const qualifier [-Wcast-qual]
  - src\qcommon\q_shared.c(766,13): warning: cast from 'const char *' to 'char *' drops const qualifier [-Wcast-qual]
- [1x] om(_550M,e6m)c:p ywarning: (identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter 
  - om(_550M,e6m)c:p ywarning: (identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] 553 | void _VectorMA( const vec3_t veca, flosrc\qcommon\md4.ca(t166 ,s57c)a:l ewarning: ,cast from 'const unsigned char 
  - 553 | void _VectorMA( const vec3_t veca, flosrc\qcommon\md4.ca(t166 ,s57c)a:l ewarning: ,cast from 'const unsigned char *' to 'unsigned char *' drops const qualifier [-Wcast-qual]
- [81x] -Wextra-semi-stmt
  - src\qcommon\md4.c(201,30): warning: empty expression statement has no effect; remove unnecessary ';' to silence this warning [-Wextra-semi-stmt]
  - src\qcommon\md4.c(202,30): warning: empty expression statement has no effect; remove unnecessary ';' to silence this warning [-Wextra-semi-stmt]
- [1x] src\qcommon\md4.csrc\games\game\../game\../../qcommon/q_shared.h(205(,151130,)14:) :warning:  empty expression statement
  - src\qcommon\md4.csrc\games\game\../game\../../qcommon/q_shared.h(205(,151130,)14:) :warning:  empty expression statement has no effect; remove unnecessary ';' to silence this warning [-Wextra-semi-stmt]warning:
- [1x] macro name is a reserved identifier [-Wreserved-macro-identifier]src\qcommon\md4.c
  - 31,9): warning: macro name is a reserved identifier [-Wreserved-macro-identifier]src\qcommon\md4.c
- [1x] (208,   3031) | :# dwarning: eempty expression statement has no effect; remove unnecessary ';' to silence this warning [
  - (208,   3031) | :# dwarning: eempty expression statement has no effect; remove unnecessary ';' to silence this warning [-Wextra-semi-stmt]fscons: *** [build\windows-x86-debug\client\obj\qcommon\files.c.obj] Error 1
- [1x] warning: In file included from empty expression statement has no effect; remove unnecessary ';' to silence this warning 
  - warning: In file included from empty expression statement has no effect; remove unnecessary ';' to silence this warning [-Wextra-semi-stmt]src\qcommon\qcommon.h
- [1x] Fsrc\qcommon\../qcommon\qfiles.hF((30 ,a9,) :b ,warning:  macro name is a reserved identifier [-Wreserved-macro-identifi
  - Fsrc\qcommon\../qcommon\qfiles.hF((30 ,a9,) :b ,warning:  macro name is a reserved identifier [-Wreserved-macro-identifier]c
- [1x] src\qcommon\../qcommon\qfiles.hsrc\qcommon\md4.c((102214,,1630))::  warning: warning: identifier '_TargaHeader' is reser
  - src\qcommon\../qcommon\qfiles.hsrc\qcommon\md4.c((102214,,1630))::  warning: warning: identifier '_TargaHeader' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]empty expression statement has no effect; remove unnecessary ';' to silence this warning [-Wextra-semi-stmt]
- [1x] empty expression statement has no effect; remove unnecessary ';' to silence this warning [-Wextra-semi-stmt]In file incl
  - src\qcommon\md4.c(226,30): warning: empty expression statement has no effect; remove unnecessary ';' to silence this warning [-Wextra-semi-stmt]In file included from
- [1x] (src\games\game\../game\../../qcommon/q_shared.h (b30,, 9c),:  dwarning: ,macro name is a reserved identifier [-Wreserve
  - (src\games\game\../game\../../qcommon/q_shared.h (b30,, 9c),:  dwarning: ,macro name is a reserved identifier [-Wreserved-macro-identifier]
- [364x] -Wsign-conversion
  - src\qcommon\md4.c(293,44): warning: implicit conversion changes signedness: 'int' to 'unsigned int' [-Wsign-conversion]
  - src\qcommon\md4.c(296,42): warning: implicit conversion changes signedness: 'int' to 'unsigned int' [-Wsign-conversion]
- [990x] -Wmissing-prototypes
  - src\qcommon\md4.c(287,10): warning: no previous prototype for function 'Com_BlockChecksum' [-Wmissing-prototypes]
  - src\qcommon\md4.c(301,10): warning: no previous prototype for function 'Com_BlockChecksumKey' [-Wmissing-prototypes]
- [6835x] -Wunsafe-buffer-usage
  - src\qcommon\md4.c(154,25): warning: unsafe buffer access [-Wunsafe-buffer-usage]
  - src\qcommon\md4.c(158,35): warning: unsafe buffer access [-Wunsafe-buffer-usage]
- [1x] src\games\game\../game\../../qcommon/q_shared.h(549,6)11: warning swarning:  and identifier '_VectorSubtract' is reserve
  - src\games\game\../game\../../qcommon/q_shared.h(549,6)11: warning swarning:  and identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]1
- [1x] macro name is a reserved identifier [-Wreserved-macro-identifier]In file included from
  - src\server\../qcommon\../qcommon\qfiles.h(30,9): warning: macro name is a reserved identifier [-Wreserved-macro-identifier]In file included from
- [1x] warning: macro name is a reserved identifier [-Wreserved-macro-identifier]scons: *** [build\windows-x86-debug\client\obj
  - warning: macro name is a reserved identifier [-Wreserved-macro-identifier]scons: *** [build\windows-x86-debug\client\obj\qcommon\unzip.c.obj] Error 1
- [1x] In file included from (102,16)src\server\sv_game.c:: 31warning: :
  - In file included from (102,16)src\server\sv_game.c:: 31warning: :

## windows-latest-x86-release

status: failure

errors: 162
warnings: 24471 in 7447 kinds

### errors

(src\renderer\../qcommon\../qcommon/cm_public.h32(,3210,)10:) : fatal error: fatal error: '../cgame/tr_types.h' file not found'../cgame/tr_types.h' file not found
,src\renderer\../qcommon\../qcommon/cm_public.h10.(/32,c10g)a:m e/fatal error: t)r:'../cgame/tr_types.h' file not found_
t yfatal error: p'../cgame/tr_types.h' file not founde
scons: *** [build\windows-x86-release\client\obj\renderer\tr_cmds.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_backend.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_animation.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_bsp.c.obj] Error 1
src\renderer\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x86-release\client\obj\renderer\tr_flares.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_cmesh.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_curve.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_font.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_init.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_main.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_image.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_light.c.obj] Error 1
dsrc\renderer\../qcommon\../qcommon/cm_public.h(( 32c,o10n)s:t  fatal error: v'../cgame/tr_types.h' file not founde
scons: *** [build\windows-x86-release\client\obj\renderer\tr_mesh.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_marks.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_noise.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_model.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_scene.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_shade_calc.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_shade.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_shader.c.obj] Error 1
src\renderer\../qcommon\../qcommon/cm_public.h(32,10  )553: |  vfatal error: o'../cgame/tr_types.h' file not foundi
scons: *** [build\windows-x86-release\client\obj\renderer\tr_shadows.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_surface.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_sky.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_world.c.obj] Error 1
src\client\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x86-release\client\obj\client\cl_cgame.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\cl_cin.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\cl_console.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\cl_input.c.obj] Error 1
fatal error: o'../cgame/tr_types.h' file not foundrS
fatal error: src\client\../qcommon\../qcommon/cm_public.h'../cgame/tr_types.h' file not found(
32,10):    32fatal error:  | '../cgame/tr_types.h' file not found#
scons: *** [build\windows-x86-release\client\obj\client\cl_net_chan.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\cl_keys.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\cl_main.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\cl_parse.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\cl_scrn.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\snd_adpcm.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\cl_ui.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\snd_dma.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\snd_mem.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\snd_wavelet.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\snd_mix.c.obj] Error 1
src\qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x86-release\client\obj\qcommon\cm_load.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\cm_patch.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\cm_polylib.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\cm_test.c.obj] Error 1
Asrc\qcommon\../qcommon/cm_public.h(( 32c,o10ns)t:  vefatal error: c'../cgame/tr_types.h' file not found3
src\qcommon\../qcommon/cm_public.h(32,10): 11 warningfatal error: s'../cgame/tr_types.h' file not found and
scons: *** [build\windows-x86-release\client\obj\qcommon\cmd.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\cm_trace.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\cvar.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\common.c.obj] Error 1
fatal error: In file included from '../cgame/tr_types.h' file not foundsrc\qcommon\qcommon.h
src\qcommon\../qcommon/cm_public.h   (3232 | ,#10i)n:c lfatal error: u'../cgame/tr_types.h' file not foundd
scons: *** [build\windows-x86-release\client\obj\qcommon\huffman.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\files.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\msg.c.obj] Error 1
src\qcommon\../client\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x86-release\client\obj\qcommon\net_chan.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\unzip.c.obj] Error 1
src\server\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x86-release\client\obj\server\sv_bot.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\server\sv_ccmds.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\server\sv_client.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\server\sv_game.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\server\sv_init.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\server\sv_main.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\server\sv_net_chan.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\server\sv_snapshot.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\server\sv_world.c.obj] Error 1
fatal error: '../cgame/tr_types.h' file not foundsrc\qcommon\q_math.c
src\qcommon\q_math.c(745,2): error: non-ASM statement in naked function is not supported
scons: *** [build\windows-x86-release\client\obj\qcommon\vm_interpreted.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\vm.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\q_math.c.obj] Error 1
src\client\../renderer\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x86-release\client\obj\qcommon\vm_x86.c.obj] Error 1
src\client\../client\../qcommon\../qcommon/cm_public.h(32,10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_input.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_main.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_net.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_shared.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_snd.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_wndproc.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_syscon.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\splines\q_parse.cpp.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jchuff.c.obj] Error 1
266 | scons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jcprepct.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jcsample.c.obj] Error 1
scons: *** [build\windows-x86-release\client\oIn file included from src\third-party\jpeg-6\jdatasrc.c:20:
scons: *** [build\windows-x86-release\client\obj\splines\splines.cpp.obj] Error 1
src\third-party\jpeg-6\jdcolor.cscons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jdcoefct.c.obj] Error 1
179 |                         dtbl->22scons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jdcolor.c.obj] Error 1
src\third-party\jpeg-6\jpeglib.hsrc\third-party\jpeg-6\jdhuff.cscons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jddctmgr.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jdinput.c.obj] Error 1
src\third-party\jpeg-6\jdmarker.cscons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jdhuff.c.obj] Error 1
src\third-party\jpeg-6\jidctflt.c(121,22)scons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jdmarker.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jdsample.c.obj] Error 1
683 |                         In file included from scons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jidctflt.c.obj] Error 1
Jsrc\client\../renderer\../qcommon\../qcommon/cm_public.hD(I32M,E10N)S:I Ofatal error: N) ( max_'../cgame/tr_types.h' file not foundmin
scons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jmemmgr.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jerror.c.obj] Error 1
src\games\botlib\be_aas_debug.c(369scons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jmemnobs.c.obj] Error 1
src\games\botlib\be_aas_file.c(457,32): warning: implicit conversion changes signedness: 'int' to '__size_t' (aka 'unsigned int') [-Wsign-conversion]scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_entity.c.obj] Error 1
|               ~~~~~~~~~~~~~~~~scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_debug.c.obj] Error 1
src\games\botlib\../game\../../qcommon/q_shared.hscons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_file.c.obj] Error 1
509 | #src\games\botlib\be_aas_sample.cde(f534i,n42e) :V ewarning: cimplicit conversion loses floating-point precision: 'double' to 'float' [-Wimplicit-float-conversion]tscons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_routetable.c.obj] Error 1
src\games\botlib\be_ai_char.c(619,7): warning: scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_route.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_reach.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ai_goal.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ai_chat.c.obj] Error 1
src\games\botlib\l_precomp.c(725,20): error: incompatible pointer types passing 'unsigned long *' to parameter of type 'const time_t *' (aka 'const long long *') [-Wincompatible-pointer-types]
src\games\botlib\l_precomp.c(740,20): error: incompatible pointer types passing 'unsigned long *' to parameter of type 'const time_t *' (aka 'const long long *') [-Wincompatible-pointer-types]
scons: *** [build\windows-x86-release\client\obj\games\botlib\l_precomp.c.obj] Error 1
mmand->asrc\games\game\bg_misc.cnscons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_funcs.c.obj] Error 1
474 | scons: *** [build\windows-x86-release\game\obj\games\game\bg_animation.c.obj] Error 1
scons: *** [build\windows-x86-release\game\obj\qcommon\q_math.c.obj] Error 1
src\games\cgame\../ui/ui_shared.h(34,10): fatal error: '../cgame/tr_types.h' file not found
fatal error: | '../cgame/tr_types.h' file not found                        ^
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_consolecmds.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_draw.c.obj] Error 1
++ ) VectorScale( re->axis[i]src\games\cgame\../ui/ui_shared.h, (s34i,z10): fatal error: '../cgame/tr_types.h' file not found
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_event.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_info.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_effects.c.obj] Error 1
686 |                 scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_main.c.obj] Error 1
512 | #define VectorMA( v, s, b, o )    ( ( o )[0] = ( v )[0] + ( b )[0]scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_flamethrower.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_newDraw.c.obj] Error 1
src\games\cgame\cg_local.h(1899,25): warning: a function declaration without a prototype is deprecated in all versions of C [-Wstrict-prototypes]In file included from src\games\cgame\cg_particles.cscons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_localents.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_predict.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_scoreboard.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_particles.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_servercmds.c.obj] Error 1
src\games\cgame\cg_trails.cscons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_sound.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_players.c.obj] Error 1
src\games\ui\ui_shared.h(34,10): fatal error: '../cgame/tr_types.h' file not found
2464 |         return ( cent->currentState.aiChar == aiChar ) && ( cent->currentStscons: *** [build\windows-x86-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
1857 |         src\qcommon\q_math.cV(e745c,t2o)r:M Aerror: (non-ASM statement in naked function is not supported
4059 |                 phase = VectorLength( tr->trscons: *** [build\windows-x86-release\cgame\obj\qcommon\q_math.c.obj] Error 1
src\games\ui\ui_local.h)([371,]10 )+:  ( fatal error: b '../cgame/tr_types.h' file not found)
507 | #define VectorSubtract( a,b,c )   ( ( c )[0] = ( a )[0] - ( b )[0],( c )[1] = ( a )[1] - ( b )[(scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_atoms.c.obj] Error 1
&src\games\ui\ui_local.h (E37F,_10M)G:4 2fatal error: _'../cgame/tr_types.h' file not foundA
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_gameinfo.c.obj] Error 1
src\games\ui\ui_local.h(37,10): fatal error: '../cgame/tr_types.h' file not found
| src\games\ui\ui_local.h#(i37n,c10l)u:d efatal error:  '../cgame/tr_types.h' file not found".
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_main.c.obj] Error 1
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_players.c.obj] Error 1
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_shared.c.obj] Error 1
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_syscalls.c.obj] Error 1
scons: *** [build\windows-x86-release\ui\obj\qcommon\q_math.c.obj] Error 1

### warning kinds

- [326x] -Wreserved-macro-identifier
  - src\games\game\../game\../../qcommon/q_shared.h(30,9): warning: macro name is a reserved identifier [-Wreserved-macro-identifier]
  - src\games\game\../game\../../qcommon/q_shared.h(30,9): warning: macro name is a reserved identifier [-Wreserved-macro-identifier]
- [1x] src\games\game\../game\../../qcommon/q_shared.h(30,9):In file included from  src\renderer\tr_cmds.cwarning: :macro name 
  - src\games\game\../game\../../qcommon/q_shared.h(30,9):In file included from  src\renderer\tr_cmds.cwarning: :macro name is a reserved identifier [-Wreserved-macro-identifier]29
- [1x] #src\games\game\../game\../../qcommon/q_shared.hd(e30f,i9n)e:  _warning: _macro name is a reserved identifier [-Wreserve
  - #src\games\game\../game\../../qcommon/q_shared.hd(e30f,i9n)e:  _warning: _macro name is a reserved identifier [-Wreserved-macro-identifier]Q
- [1x] src\games\game\../game\../../qcommon/q_shared.hsrc\games\game\../game\../../qcommon/q_shared.h(548src\games\game\../game
  - src\games\game\../game\../../qcommon/q_shared.hsrc\games\game\../game\../../qcommon/q_shared.h(548src\games\game\../game\../../qcommon/q_shared.h,(7()548:, 548src\games\game\../game\../../qcommon/q_shared.h,7(warning: )identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]548
- [1x] ,: 7warning: )identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-i
  - ,: 7warning: )identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] 548: |  vwarning: eidentifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreser
  - 548: |  vwarning: eidentifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] 548 |   7v)c:548  | warning: eidentifier '_DotProduct' is reserved because it starts with '_' followed by a capital lett
  - 548 |   7v)c:548  | warning: eidentifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]c
- [1x] :6 )warning: :identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserv
  - :6 )warning: :identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [3x] warning: identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-id
  - warning: identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
  - warning: identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]src\games\game\g_client.c
- [1x] 549 |   v549o | ivdo i_dV src\games\game\../game\../../qcommon/q_shared.he_cV(ec549,t6to)orrSSu:b uwarning: tidentifier 
  - 549 |   v549o | ivdo i_dV src\games\game\../game\../../qcommon/q_shared.he_cV(ec549,t6to)orrSSu:b uwarning: tidentifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] ec3a_, tc cvoencsbsrc\games\game\../game\../../qcommon/q_shared.h_(t550,,t6  )_vDe:oct3 Pwarning: ridentifier '_VectorAd
  - ec3a_, tc cvoencsbsrc\games\game\../game\../../qcommon/q_shared.h_(t550,,t6  )_vDe:oct3 Pwarning: ridentifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]_
- [1x] t549 ,o6u)t:  )warning: ;identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital lette
  - t549 ,o6u)t:  )warning: ;identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] 550  ,5496 | )vsrc\games\game\../game\../../qcommon/q_shared.h:o(id551 , 6_Vwarning: )eidentifier '_VectorAdd' is reserv
  - 550  ,5496 | )vsrc\games\game\../game\../../qcommon/q_shared.h:o(id551 , 6_Vwarning: )eidentifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]c
- [1x] tor  Su550b | tvroiadc t_(V eccotnosrtA dvde(c 3c:o nwarning: sidentifier '_VectorCopy' is reserved because it starts wi
  - tor  Su550b | tvroiadc t_(V eccotnosrtA dvde(c 3c:o nwarning: sidentifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]t_ tv evec3c_at,  vceoceacbn,,s  cvonts tec vv3ee_ct3 _otu tcv e3)_;t
- [1x] cb, vec3_src\games\game\../game\../../qcommon/q_shared.ht( 550o,u6t) :) ;warning:
  - cb, vec3_src\games\game\../game\../../qcommon/q_shared.ht( 550o,u6t) :) ;warning:
- [1x] 550 | voisrc\games\game\../game\../../qcommon/q_shared.hd( 551_,V6e)c:t owarning: ridentifier '_VectorCopy' is reserved 
  - 550 | voisrc\games\game\../game\../../qcommon/q_shared.hd( 551_,V6e)c:t owarning: ridentifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]A
- [1x] py( consrc\games\game\../game\../../qcommon/q_shared.hs(552t, 6v)e:c 3warning: _identifier '_VectorScale' is reserved be
  - py( consrc\games\game\../game\../../qcommon/q_shared.hs(552t, 6v)e:c 3warning: _identifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]t
- [1x] e( ccbo,nsrc\games\game\../game\../../qcommon/q_shared.h svtec(3552_,t6 )o:u twarning:  identifier '_VectorScale' is res
  - e( ccbo,nsrc\games\game\../game\../../qcommon/q_shared.h svtec(3552_,t6 )o:u twarning:  identifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]) ;ve
- [1x] 3i_nt,  floasrc\games\game\../game\../../qcommon/q_shared.hto(u550t  s,c6a)l:e ,)warning: ;identifier '_VectorAdd' is re
  - 3i_nt,  floasrc\games\game\../game\../../qcommon/q_shared.hto(u550t  s,c6a)l:e ,)warning: ;identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] t        _warning: oidentifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wrese
  - t        _warning: oidentifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]|
- [1x] od(r Sccoanlsesrc\games\game\../game\../../qcommon/q_shared.h(( 553cto ,v6n)s:t  warning: videntifier '_VectorMA' is res
  - od(r Sccoanlsesrc\games\game\../game\../../qcommon/q_shared.h(( 553cto ,v6n)s:t  warning: videntifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]e
- [1x] eca, float src\games\game\../game\../../qcommon/q_shared.hs(c553a,l6e),:  cwarning: oidentifier '_VectorMA' is reserved 
  - eca, float src\games\game\../game\../../qcommon/q_shared.hs(c553a,l6e),:  cwarning: oidentifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]n
- [1x] opy( const vesrc\games\game\../game\../../qcommon/q_shared.hr(Mc5513,_6At)(:   icwarning: noidentifier '_VectorCopy' is 
  - opy( const vesrc\games\game\../game\../../qcommon/q_shared.hr(Mc5513,_6At)(:   icwarning: noidentifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier],
- [1x] Copy( const src\games\game\../game\../../qcommon/q_shared.hv(3e552c,_36t) _vte cian,,  f:v ewarning: cidentifier '_Vecto
  - Copy( const src\games\game\../game\../../qcommon/q_shared.hv(3e552c,_36t) _vte cian,,  f:v ewarning: cidentifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]3
- [1x] S_cta lvee(c bc,o nsrc\games\game\../game\../../qcommon/q_shared.hs(t552 ,v6e)c:3 _vwarning: eidentifier '_VectorScale' 
  - S_cta lvee(c bc,o nsrc\games\game\../game\../../qcommon/q_shared.hs(t552 ,v6e)c:3 _vwarning: eidentifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]c3
- [1x] ec3_t insrc\games\game\../game\../../qcommon/q_shared.h,( 553f,l6o)a:t  warning: sidentifier '_VectorMA' is reserved bec
  - ec3_t insrc\games\game\../game\../../qcommon/q_shared.h,( 553f,l6o)a:t  warning: sidentifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]c
- [1x] const vecsrc\games\game\../game\../../qcommon/q_shared.h3(_553t, 6v)e:c awarning: ,identifier '_VectorMA' is reserved be
  - const vecsrc\games\game\../game\../../qcommon/q_shared.h3(_553t, 6v)e:c awarning: ,identifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1057x] -Wreserved-identifier
  - src\games\game\../game\../../qcommon/q_shared.h(1511,14): warning: identifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier]
  - src\games\game\../game\../../qcommon/q_shared.h(1511,14): warning: identifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier]
- [1x] src\games\game\../game\../../qcommon/q_shared.hsrc\games\game\../game\../../qcommon/q_shared.h((15111511,,1414))::  warn
  - src\games\game\../game\../../qcommon/q_shared.hsrc\games\game\../game\../../qcommon/q_shared.h((15111511,,1414))::  warning: warning: identifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier]identifier '_flag_status' is reserved because it starts with '_' at global scope [-Wreserved-identifier]
- [1x] In file included from warning: src\renderer\tr_local.hidentifier '_TargaHeader' is reserved because it starts with '_' f
  - In file included from warning: src\renderer\tr_local.hidentifier '_TargaHeader' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]:
- [1x] warning: tmacro name is a reserved identifier [-Wreserved-macro-identifier] src\renderer\tr_local.h
  - warning: tmacro name is a reserved identifier [-Wreserved-macro-identifier] src\renderer\tr_local.h
- [1x] ,src\renderer\../qcommon/qfiles.h9g)a:H ewarning: a(demacro name is a reserved identifier [-Wreserved-macro-identifier]
  - ,src\renderer\../qcommon/qfiles.h9g)a:H ewarning: a(demacro name is a reserved identifier [-Wreserved-macro-identifier]
- [4x] warning: macro name is a reserved identifier [-Wreserved-macro-identifier]
  - warning: macro name is a reserved identifier [-Wreserved-macro-identifier]
  - warning: macro name is a reserved identifier [-Wreserved-macro-identifier]
- [1x] 102 | typedef struct _Tsrc\renderer\../qcommon/qfiles.ha(r102g,a16H)e:a dwarning: eidentifier '_TargaHeader' is reserved
  - 102 | typedef struct _Tsrc\renderer\../qcommon/qfiles.ha(r102g,a16H)e:a dwarning: eidentifier '_TargaHeader' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]r
- [3x] )      :|          ^warning:
  - )      :|          ^warning:
  - )      :|          ^warning:
- [1x] identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]src\
  - src\games\game\../game\../../qcommon/q_shared.h(548,7): warning: identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]src\games\game\../game\../../qcommon/q_shared.h
- [1x] (548,7):   548warning:  | identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [
  - (548,7):   548warning:  | identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]v
- [1x] src\games\game\../game\../../qcommon/q_shared.h(549,6):src\games\game\../game\../../qcommon/q_shared.h (warning: 549iden
  - src\games\game\../game\../../qcommon/q_shared.h(549,6):src\games\game\../game\../../qcommon/q_shared.h (warning: 549identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier],
- [1x] 6):   warning: 549identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wre
  - 6):   warning: 549identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier] |
- [1x] src\games\game\../game\../../qcommon/q_shared.h(550,6src\games\game\../game\../../qcommon/q_shared.h)(:550 ,warning: 6id
  - src\games\game\../game\../../qcommon/q_shared.h(550,6src\games\game\../game\../../qcommon/q_shared.h)(:550 ,warning: 6identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier])
- [1x] : warning: identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-ident
  - : warning: identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] 6)  :551  | warning: videntifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wre
  - 6)  :551  | warning: videntifier '_VectorCopy' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]o
- [1x] 552 | voisrc\games\game\../game\../../qcommon/q_shared.hd( 552_,V6ec): warning: tidentifier '_VectorScale' is reserved b
  - 552 | voisrc\games\game\../game\../../qcommon/q_shared.hd( 552_,V6ec): warning: tidentifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] : warning: identifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identi
  - : warning: identifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] src\games\game\../game\../../qcommon/q_shared.h553( | 553v,o6i)d:  _warning: Veidentifier '_VectorMA' is reserved becaus
  - src\games\game\../game\../../qcommon/q_shared.h553( | 553v,o6i)d:  _warning: Veidentifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]c
- [1x] src\games\game\../game\../../qcommon/q_shared.h(552,src\games\game\../game\../../qcommon/q_shared.h6()548:, 7warning: )i
  - src\games\game\../game\../../qcommon/q_shared.h(552,src\games\game\../game\../../qcommon/q_shared.h6()548:, 7warning: )identifier '_VectorScale' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]:
- [4x] warning: identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identi
  - warning: identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
  - warning: identifier '_DotProduct' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] src\games\game\../game\../../qcommon/q_shared.h(549src\games\game\../game\../../qcommon/q_shared.h,(6553):, 6warning: )i
  - src\games\game\../game\../../qcommon/q_shared.h(549src\games\game\../game\../../qcommon/q_shared.h,(6553):, 6warning: )identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]:
- [3x] warning: identifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifi
  - warning: identifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
  - warning: identifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [4x] warning: identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identif
  - warning: identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
  - warning: identifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]
- [1x] (src\renderer\../qcommon/qcommon.h549(,316,)9:) :warning:  identifier '_VectorSubtract' is reserved because it starts wi
  - (src\renderer\../qcommon/qcommon.h549(,316,)9:) :warning:  identifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]warning:
- [1x] ( src\renderer\../qcommon/qcommon.hc(o31n,s9t) :v ewarning: cmacro name is a reserved identifier [-Wreserved-macro-ident
  - ( src\renderer\../qcommon/qcommon.hc(o31n,s9t) :v ewarning: cmacro name is a reserved identifier [-Wreserved-macro-identifier]3
- [1x] csrc\renderer\../qcommon/qcommon.ha(,31 ,c9o)n:s twarning:  macro name is a reserved identifier [-Wreserved-macro-identi
  - csrc\renderer\../qcommon/qcommon.ha(,31 ,c9o)n:s twarning:  macro name is a reserved identifier [-Wreserved-macro-identifier]v
- [1x] src\renderer\../qcommon/qfiles.h(src\games\game\../game\../../qcommon/q_shared.h30(,5499,)6:) :warning:  macro name is a
  - src\renderer\../qcommon/qfiles.h(src\games\game\../game\../../qcommon/q_shared.h30(,5499,)6:) :warning:  macro name is a reserved identifier [-Wreserved-macro-identifier]warning:
- [1x] ( const vec3_t veca, const vec3_t vecb, vesrc\renderer\../qcommon/qfiles.hc(3102_,t16 )o:u twarning:  identifier '_Targa
  - ( const vec3_t veca, const vec3_t vecb, vesrc\renderer\../qcommon/qfiles.hc(3102_,t16 )o:u twarning:  identifier '_TargaHeader' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier])
- [1x] ypedef ssrc\games\game\../game\../../qcommon/q_shared.ht(r550u,c6t) :_ Twarning: aridentifier '_VectorAdd' is reserved b
  - ypedef ssrc\games\game\../game\../../qcommon/q_shared.ht(r550u,c6t) :_ Twarning: aridentifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]g
- [1x] )In file included from :src\renderer\../qcommon/qcommon.h :warning: 33identifier '_VectorMA' is reserved because it star
  - )In file included from :src\renderer\../qcommon/qcommon.h :warning: 33identifier '_VectorMA' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]:
- [1x] src\games\game\../game\../../qcommon/q_shared.h(549,6548): |  vwarning: eidentifier '_VectorSubtract' is reserved becaus
  - src\games\game\../game\../../qcommon/q_shared.h(549,6548): |  vwarning: eidentifier '_VectorSubtract' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]c
- [1x] ec3_t vecb, vec3_src\games\game\../game\../../qcommon/q_shared.ht( 549o,u6t) :) ;warning:
  - ec3_t vecb, vec3_src\games\game\../game\../../qcommon/q_shared.ht( 549o,u6t) :) ;warning:
- [1x] 549 | void _Vesrc\games\game\../game\../../qcommon/q_shared.hc(t550o,r6S)u:b twarning: ridentifier '_VectorAdd' is reser
  - 549 | void _Vesrc\games\game\../game\../../qcommon/q_shared.hc(t550o,r6S)u:b twarning: ridentifier '_VectorAdd' is reserved because it starts with '_' followed by a capital letter [-Wreserved-identifier]a

