# Build digest

commit: 5b6b03fc238a

- uncrustify: failure

## uncrustify

status: failure

errors: 1243
warnings: 552 in 12 kinds

### errors

src/renderer/tr_local.hfatal error: :29'../game/q_shared.h' file not found34:
:src/renderer/tr_local.h10:: 34fatal error: :'../game/q_shared.h' file not found10
: fatal error: '../game/q_shared.h' file not found
src/renderer/tr_local.h:34:10: fatal error:       '../game/q_shared.h' file not found3434    |
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_animation.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_cmds.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_backend.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_bsp.c.o] Error 1
src/renderer/tr_local.hsrc/renderer/tr_local.h::3434::1010:: fatal error:  '../game/q_shared.h' file not foundfatal error:
src/renderer/tr_local.h:34:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_flares.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_cmesh.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_curve.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_font.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_init.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_light.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_main.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_image.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_marks.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_mesh.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_noise.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_model.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_scene.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_shade.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_shade_calc.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_shader.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_shadows.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_sky.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_surface.c.o] Error 1
src/client/client.h:31:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/client/cl_cgame.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_world.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_console.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_cin.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_input.c.o] Error 1
src/client/cl_net_chan.c:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/client/cl_net_chan.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_keys.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_main.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_parse.c.o] Error 1
src/client/snd_local.h:32:10: fatal error: '../game/q_shared.h' file not found
32 | #incscons: *** [build/linux-x64-debug/client/obj/client/cl_scrn.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_ui.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/snd_adpcm.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/snd_mem.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/snd_mix.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/snd_dma.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/snd_wavelet.c.o] Error 1
src/qcommon/cm_local.h:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_load.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_polylib.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_patch.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_test.c.o] Error 1
src/qcommon/cmd.c:31:10: fatal error: '../game/q_shared.h' file not found
src/qcommon/common.c:31:10: fatal error: '../game/q_shared.h' file not found
src/qcommon/cvar.c:31:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_trace.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/cmd.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/cvar.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/common.c.o] Error 1
src/qcommon/files.c:39:10: fatal error: '../game/q_shared.h' file not found
src/qcommon/huffman.c:34:10: fatal error: '../game/q_shared.h' file not found
src/qcommon/msg.c:29:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/qcommon/huffman.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/files.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/msg.c.o] Error 1
src/qcommon/net_chan.c:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/qcommon/net_chan.c.o] Error 1
src/server/server.h:31:10: fatal error: '../game/q_shared.h' file not found
src/qcommon/../client/client.h:31:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/server/sv_bot.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/unzip.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_ccmds.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_client.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_init.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_game.c.o] Error 1
src/server/sv_net_chan.c:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/server/sv_main.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_net_chan.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/game/q_shared.c.o] Source `src/games/game/q_shared.c' not found, needed by target `build/linux-x64-debug/client/obj/games/game/q_shared.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/game/q_math.c.o] Source `src/games/game/q_math.c' not found, needed by target `build/linux-x64-debug/client/obj/games/game/q_math.c.o'.
scons: *** [build/linux-x64-debug/client/obj/server/sv_snapshot.c.o] Error 1
src/qcommon/vm_local.h:29:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/server/sv_world.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/vm_interpreted.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/vm.c.o] Error 1
src/sys/unix/unix_net.c:31:10: fatal error: '../game/q_shared.h' file not found
src/sys/unix/unix_shared.c:39:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/sys/unix/unix_shared.c.o] Error 1
src/sys/unix/unix_main.c:59:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/sys/unix/unix_main.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/sys/unix/unix_net.c.o] Error 1
src/client/../renderer/tr_local.h:34:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_glimp.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_qgl.c.o] Error 1
src/client/../client/client.h:31:10: fatal error: '../game/q_shared.h' file not found
src/sys/unix/linux_snd.c:45:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_joystick.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_snd.c.o] Error 1
error: invalid argument '-std=gnu89' not allowed with 'C++'
scons: *** [build/linux-x64-debug/client/obj/splines/math_matrix.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/math_angles.cpp.o] Error 1
error: error: invalid argument '-std=gnu89' not allowed with 'C++'
scons: *** [build/linux-x64-debug/client/obj/splines/math_vector.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/math_quaternion.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/q_parse.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/q_shared.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/splines.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/util_str.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/third-party/jpeg-6/jerror.c.o] Error 1
src/games/botlib/be_aas_bspq3.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_bspq3.c.o] Error 1
src/games/botlib/be_aas_cluster.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_debug.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_cluster.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_debug.c.o] Error 1
src/games/botlib/be_aas_entity.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_file.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_entity.c.o] Error 1
src/games/botlib/be_aas_main.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/third-party/jpeg-6/jmemnobs.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_main.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_file.c.o] Error 1
src/games/botlib/be_aas_move.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_optimize.c:39:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_move.c.o] Error 1
src/games/botlib/be_aas_reach.c:39:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_route.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_optimize.c.o] Error 1
src/games/botlib/be_aas_routealt.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_routealt.c.o] Error 1
src/games/botlib/be_aas_routetable.c:37:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_route.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_reach.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_routetable.c.o] Error 1
src/games/botlib/be_aas_sample.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_char.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_chat.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_sample.c.o] Error 1
src/games/botlib/be_ai_gen.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_char.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_gen.c.o] Error 1
src/games/botlib/be_ai_goal.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_chat.c.o] Error 1
src/games/botlib/be_ai_move.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_weap.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_goal.c.o] Error 1
src/games/botlib/be_ai_weight.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_weap.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_move.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_weight.c.o] Error 1
src/games/botlib/be_ea.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_interface.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ea.c.o] Error 1
src/games/botlib/l_libvar.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_libvar.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_interface.c.o] Error 1
src/games/botlib/l_crc.c:42:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_crc.c.o] Error 1
src/games/botlib/l_memory.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/l_precomp.c:63:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_memory.c.o] Error 1
src/games/botlib/l_log.c:42:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/l_script.c:58:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_log.c.o] Error 1
scons: *** Do not know how to make File target `build/linux-x64-debug/qagame' (/home/runner/work/RTCW-SP/RTCW-SP/build/linux-x64-debug/qagame).
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_script.c.o] Error 1
src/games/botlib/l_struct.c:39:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_precomp.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_struct.c.o] Error 1
src/games/cgame/cg_local.h:40:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_consolecmds.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_drawtools.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_draw.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_effects.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_ents.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_flamethrower.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_event.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_info.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_localents.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_marks.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_main.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_newDraw.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_particles.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_playerstate.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_scoreboard.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_predict.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_players.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_servercmds.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_sound.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_snapshot.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_syscalls.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_trails.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_view.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_weapons.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/game/q_math.c.o] Source `src/games/game/q_math.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/game/q_math.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/game/q_shared.c.o] Source `src/games/game/q_shared.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/game/q_shared.c.o'.
scons: *** [build/linux-x64-debug/ui/obj/games/game/q_math.c.o] Source `src/games/game/q_math.c' not found, needed by target `build/linux-x64-debug/ui/obj/games/game/q_math.c.o'.
scons: *** [build/linux-x64-debug/ui/obj/games/game/q_shared.c.o] Source `src/games/game/q_shared.c' not found, needed by target `build/linux-x64-debug/ui/obj/games/game/q_shared.c.o'.
src/games/ui/ui_shared.h:33:10: fatal error: '../game/q_shared.h' file not found

### warning kinds

- [105x] -Wshift-negative-value
  - src/third-party/jpeg-6/jdhuff.c:383:15: warning: shifting a negative signed value is undefined [-Wshift-negative-value]
  - src/third-party/jpeg-6/jdhuff.c:383:36: warning: shifting a negative signed value is undefined [-Wshift-negative-value]
- [35x] -Wsizeof-array-argument
  - src/games/game/bg_animation.c:807:27: warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
  - src/games/game/bg_animation.c:807:27: warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [46x] -Wsizeof-pointer-memaccess
  - src/games/game/bg_animation.c:807:29: warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.c:999:32: warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]
- [132x] -Wwritable-strings
  - src\splines\q_shared.cpp(757,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(774,12): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [195x] -Wpointer-to-int-cast
  - src\games\game\g_alarm.c(114,27): warning: cast to smaller integer type 'int' from 'char **' [-Wpointer-to-int-cast]
  - src\games\game\g_alarm.c(189,28): warning: cast to smaller integer type 'int' from 'char **' [-Wpointer-to-int-cast]
- [8x] -Wlogical-not-parentheses
  - src\games\game\g_client.c(1534,8): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src\games\game\g_client.c(1616,9): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [12x] -Wint-to-pointer-cast
  - src\games\game\g_main.c(318,33): warning: cast to 'float *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\game\g_main.c(318,54): warning: cast to 'float *' from smaller integer type 'int' [-Wint-to-pointer-cast]
- [1x] (1940,26 )1082: |  #warning: dcast to smaller integer type 'int' from 'char **' [-Wpointer-to-int-cast]e
  - (1940,26 )1082: |  #warning: dcast to smaller integer type 'int' from 'char **' [-Wpointer-to-int-cast]e
- [4x] -Wimplicit-const-int-float-conversion
  - src\games\botai\ai_cmd.c(200,9): warning: implicit conversion from 'int' to 'float' changes value from 99999999 to 1.0E+8 [-Wimplicit-const-int-float-conversion]
  - src\games\botai\ai_cmd.c(200,9): warning: implicit conversion from 'int' to 'float' changes value from 99999999 to 1.0E+8 [-Wimplicit-const-int-float-conversion]
- [8x] -Warray-bounds
  - src\games\botai\ai_cmd.c(1069,3): warning: array index 32 is past the end of the array (that has type 'char[32]') [-Warray-bounds]
  - src\games\botai\ai_team.c(548,4): warning: array index 32 is past the end of the array (that has type 'char[32]') [-Warray-bounds]
- [4x] -Wpointer-bool-conversion
  - src\games\botai\ai_dmq3.c(2121,8): warning: address of array 'classname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\botai\ai_dmq3.c(2121,8): warning: address of array 'classname' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [2x] -Wunused-value
  - src\splines\splines.cpp(592,17): warning: expression result unused [-Wunused-value]
  - src\splines\splines.cpp(592,17): warning: expression result unused [-Wunused-value]

