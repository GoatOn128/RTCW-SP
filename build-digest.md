# Build digest

commit: e431c12b5224

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

errors: 208
warnings: 18 in 3 kinds

### errors

src/renderer/tr_local.h:34:10: fatal error: In file included from src/renderer/tr_backend.c'../game/q_shared.h' file not found:
src/renderer/tr_local.h:34:10: fatal error: '../game/q_shared.h' file not found
insrc/renderer/tr_local.hnc:cl34lu:ud10de:e   "fatal error: ".'../game/q_shared.h' file not found..
:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_cmds.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_backend.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_animation.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_bsp.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_cmesh.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_flares.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_curve.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_font.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_init.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_light.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_image.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_main.c.o] Error 1
esrc/renderer/tr_local.h/:q34_:s10h:a rfatal error: e'../game/q_shared.h' file not foundd
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_mesh.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_marks.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_noise.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_model.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_scene.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_shade_calc.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_shade.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_shader.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_shadows.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_sky.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_surface.c.o] Error 1
src/client/client.h:31:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/client/cl_console.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_cgame.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_world.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_cin.c.o] Error 1
src/client/cl_net_chan.c:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/client/cl_input.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_keys.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_net_chan.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_main.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_scrn.c.o] Error 1
src/client/snd_local.h:32:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/client/cl_parse.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/cl_ui.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/snd_adpcm.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/snd_mem.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/snd_mix.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/snd_wavelet.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/client/snd_dma.c.o] Error 1
src/qcommon/cm_local.h:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_load.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_polylib.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_test.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_patch.c.o] Error 1
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
src/qcommon/../client/client.h:31:10: fatal error: '../game/q_shared.h' file not found
src/server/server.h:31:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/server/sv_bot.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_ccmds.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/unzip.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_game.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_client.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_init.c.o] Error 1
src/server/sv_net_chan.c:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/server/sv_main.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/game/q_shared.c.o] Source `src/games/game/q_shared.c' not found, needed by target `build/linux-x64-debug/client/obj/games/game/q_shared.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/game/q_math.c.o] Source `src/games/game/q_math.c' not found, needed by target `build/linux-x64-debug/client/obj/games/game/q_math.c.o'.
scons: *** [build/linux-x64-debug/client/obj/server/sv_net_chan.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_snapshot.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/server/sv_world.c.o] Error 1
src/qcommon/vm_local.h:29:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/qcommon/vm.c.o] Error 1
src/sys/unix/unix_net.c:31:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/qcommon/vm_interpreted.c.o] Error 1
src/sys/unix/unix_shared.c:39:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/sys/unix/unix_net.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/sys/unix/unix_shared.c.o] Error 1
src/sys/unix/unix_main.c:59:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/sys/unix/unix_main.c.o] Error 1
src/client/../client/client.h:31:10: fatal error: '../game/q_shared.h' file not found
src/client/../renderer/tr_local.h:34:10: fatal error: '../game/q_shared.h' file not found
src/sys/unix/linux_snd.c:45:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_joystick.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_snd.c.o] Error 1
error: error: invalid argument '-std=gnu89' not allowed with 'C++'invalid argument '-std=gnu89' not allowed with 'C++'
scons: *** [build/linux-x64-debug/client/obj/splines/math_angles.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/math_matrix.cpp.o] Error 1
error: error: invalid argument '-std=gnu89' not allowed with 'C++'
scons: *** [build/linux-x64-debug/client/obj/splines/math_vector.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/math_quaternion.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_qgl.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_glimp.c.o] Error 1
error: invalid argument '-std=gnu89' not allowed with 'C++'
scons: *** [build/linux-x64-debug/client/obj/splines/q_parse.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/q_shared.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/splines.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/splines/util_str.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/third-party/jpeg-6/jerror.c.o] Error 1
src/games/botlib/be_aas_bspq3.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_cluster.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_bspq3.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_cluster.c.o] Error 1
src/games/botlib/be_aas_debug.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_entity.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/third-party/jpeg-6/jmemnobs.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_debug.c.o] Error 1
src/games/botlib/be_aas_file.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_entity.c.o] Error 1
src/games/botlib/be_aas_main.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_file.c.o] Error 1
src/games/botlib/be_aas_move.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_optimize.c:39:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_main.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_move.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_optimize.c.o] Error 1
src/games/botlib/be_aas_reach.c:39:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_route.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_routealt.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_routetable.c:37:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_route.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_routealt.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_reach.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_routetable.c.o] Error 1
src/games/botlib/be_aas_sample.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_char.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_gen.c:38:10: fatal error: '../game/q_shared.h' file not found
38 | #include "src/games/botlib/be_ai_chat.c..:/g38a:m10e:/ qfatal error: _'../game/q_shared.h' file not founds
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_sample.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_char.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_gen.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_chat.c.o] Error 1
src/games/botlib/be_ai_goal.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_move.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_weap.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_weap.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_goal.c.o] Error 1
src/games/botlib/be_ai_weight.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_move.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_weight.c.o] Error 1
src/games/botlib/be_ea.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_interface.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ea.c.o] Error 1
src/games/botlib/l_crc.c:42:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_interface.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_crc.c.o] Error 1
src/games/botlib/l_libvar.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_libvar.c.o] Error 1
src/games/botlib/l_memory.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/l_precomp.c:63:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_memory.c.o] Error 1
src/games/botlib/l_script.c:58:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/l_log.c:42:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_log.c.o] Error 1
scons: *** Do not know how to make File target `build/linux-x64-debug/qagame' (/home/runner/work/RTCW-SP/RTCW-SP/build/linux-x64-debug/qagame).1 error generated.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_script.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_precomp.c.o] Error 1
src/games/botlib/l_struct.c:39:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_struct.c.o] Error 1
src/games/cgame/cg_local.h:40:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_drawtools.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_consolecmds.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_draw.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_effects.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_flamethrower.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_ents.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_info.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_event.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_marks.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_localents.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_main.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_newDraw.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_particles.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_playerstate.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_players.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_predict.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_scoreboard.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_servercmds.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_snapshot.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_sound.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_syscalls.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_trails.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_view.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_weapons.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/game/q_math.c.o] Source `src/games/game/q_math.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/game/q_math.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/game/q_shared.c.o] Source `src/games/game/q_shared.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/game/q_shared.c.o'.
src/games/ui/ui_shared.h:33:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-debug/ui/obj/games/game/q_math.c.o] Source `src/games/game/q_math.c' not found, needed by target `build/linux-x64-debug/ui/obj/games/game/q_math.c.o'.
scons: *** [build/linux-x64-debug/ui/obj/games/game/q_shared.c.o] Source `src/games/game/q_shared.c' not found, needed by target `build/linux-x64-debug/ui/obj/games/game/q_shared.c.o'.

### warning kinds

- [15x] -Wshift-negative-value
  - src/third-party/jpeg-6/jdhuff.c:383:15: warning: shifting a negative signed value is undefined [-Wshift-negative-value]
  - src/third-party/jpeg-6/jdhuff.c:383:36: warning: shifting a negative signed value is undefined [-Wshift-negative-value]
- [1x] -Wsizeof-array-argument
  - src/games/game/bg_animation.c:807:27: warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -Wsizeof-pointer-memaccess
  - src/games/game/bg_animation.c:807:29: warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.c:999:32: warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]

## ubuntu-latest-x64-release

status: failure

errors: 211
warnings: 18 in 3 kinds

### errors

src/renderer/tr_local.h:34:10In file included from :src/renderer/tr_animation.c :fatal error: '../game/q_shared.h' file not found30:
src/renderer/tr_local.h:34:10: fatal error: '../game/q_shared.h' file not foundIn file included from
src/renderer/tr_local.h:34:10: fatal error: '../game/q_shared.h' file not found
/qsrc/renderer/tr_local.h_:s34ha:r10e:d .fatal error: h"'../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/renderer/tr_animation.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_cmds.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_backend.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_bsp.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_cmesh.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_curve.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_flares.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_font.c.o] Error 1
| src/renderer/tr_local.h#:i34n:c10l:u dfatal error: e'../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/renderer/tr_init.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_main.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_light.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_image.c.o] Error 1
src/renderer/tr_local.h:34:10: fatal error: src/renderer/tr_mesh.c:33:
fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/renderer/tr_mesh.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_marks.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_noise.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_model.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_scene.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_shade.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_shade_calc.c.o] Error 1
src/renderer/tr_local.hsrc/renderer/tr_local.h::3434::1010::  fatal error: fatal error: '../game/q_shared.h' file not found'../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/renderer/tr_shader.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_shadows.c.o] Error 1
src/client/client.h:31:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/renderer/tr_sky.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_surface.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/renderer/tr_world.c.o] Error 1
src/client/cl_net_chan.c:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/cl_net_chan.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Error 1
src/client/client.hsrc/client/client.h::3131::1010::  fatal error: fatal error: '../game/q_shared.h' file not found'../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/client/cl_parse.c.o] Error 1
src/client/snd_local.h:32:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/client/snd_adpcm.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/cl_scrn.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/cl_ui.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/snd_mem.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/snd_mix.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/client/snd_wavelet.c.o] Error 1
src/qcommon/cm_local.h:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/client/snd_dma.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_polylib.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_load.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_patch.c.o] Error 1
10:src/qcommon/cm_local.h :fatal error: 30'../game/q_shared.h' file not found:
10: fatal error: '../game/q_shared.h' file not found
src/qcommon/common.c:31:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_test.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/cmd.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_trace.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/common.c.o] Error 1
src/qcommon/cvar.c:31:10: fatal error: '../game/q_shared.h' file not found
src/qcommon/huffman.c:34:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/qcommon/cvar.c.o] Error 1
src/qcommon/files.c:39:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/qcommon/huffman.c.o] Error 1
src/qcommon/msg.c:29:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/qcommon/files.c.o] Error 1
src/qcommon/net_chan.c:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/qcommon/msg.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/net_chan.c.o] Error 1
src/qcommon/../client/client.h:31:10: fatal error: '../game/q_shared.h' file not found
src/server/server.h:31:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/server/sv_ccmds.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/server/sv_bot.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/unzip.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/server/sv_client.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/server/sv_game.c.o] Error 1
src/server/sv_net_chan.c:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/server/sv_init.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/server/sv_net_chan.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/server/sv_main.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/games/game/q_shared.c.o] Source `src/games/game/q_shared.c' not found, needed by target `build/linux-x64-release/client/obj/games/game/q_shared.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/game/q_math.c.o] Source `src/games/game/q_math.c' not found, needed by target `build/linux-x64-release/client/obj/games/game/q_math.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_snapshot.c.o] Error 1
src/qcommon/vm_local.h:29:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/server/sv_world.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/vm.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/vm_interpreted.c.o] Error 1
src/sys/unix/unix_net.c:31:10: fatal error: '../game/q_shared.h' file not found
src/sys/unix/unix_shared.c:39:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/sys/unix/unix_net.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/sys/unix/unix_shared.c.o] Error 1
src/sys/unix/unix_main.c:59:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/sys/unix/unix_main.c.o] Error 1
src/client/../renderer/tr_local.h:34:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_qgl.c.o] Error 1
src/client/../client/client.h:31:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_joystick.c.o] Error 1
error: invalid argument '-std=gnu89' not allowed with 'C++'
scons: *** [build/linux-x64-release/client/obj/splines/math_angles.cpp.o] Error 1
src/sys/unix/linux_snd.c:45:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_snd.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/splines/math_matrix.cpp.o] Error 1
scons: *** [build/linux-x64-release/client/obj/splines/math_quaternion.cpp.o] Error 1
scons: *** [build/linux-x64-release/client/obj/splines/math_vector.cpp.o] Error 1
scons: *** [build/linux-x64-release/client/obj/splines/q_parse.cpp.o] Error 1
scons: *** [build/linux-x64-release/client/obj/splines/q_shared.cpp.o] Error 1
scons: *** [build/linux-x64-release/client/obj/splines/splines.cpp.o] Error 1
scons: *** [build/linux-x64-release/client/obj/splines/util_str.cpp.o] Error 1
scons: *** [build/linux-x64-release/client/obj/third-party/jpeg-6/jerror.c.o] Error 1
src/games/botlib/be_aas_bspq3.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_bspq3.c.o] Error 1
src/games/botlib/be_aas_cluster.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_debug.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/third-party/jpeg-6/jmemnobs.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_cluster.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_debug.c.o] Error 1
src/games/botlib/be_aas_entity.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_file.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_main.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_entity.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_file.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_main.c.o] Error 1
src/games/botlib/be_aas_move.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_optimize.c:39:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_reach.c:39:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_route.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_optimize.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_move.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_route.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_reach.c.o] Error 1
src/games/botlib/be_aas_routealt.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_routetable.c:37:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_routealt.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_routetable.c.o] Error 1
src/games/botlib/be_aas_sample.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_char.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_sample.c.o] Error 1
src/games/botlib/be_ai_chat.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_gen.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_char.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_gen.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_chat.c.o] Error 1
src/games/botlib/be_ai_weap.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_move.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_goal.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_weap.c.o] Error 1
src/games/botlib/be_ai_weight.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_move.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_weight.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_goal.c.o] Error 1
src/games/botlib/be_ea.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ea.c.o] Error 1
src/games/botlib/be_interface.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/l_libvar.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_libvar.c.o] Error 1
src/games/botlib/l_crc.c:42:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_interface.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_crc.c.o] Error 1
src/games/botlib/l_log.c:42:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/l_memory.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_log.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_memory.c.o] Error 1
scons: *** Do not know how to make File target `build/linux-x64-release/qagame' (/home/runner/work/RTCW-SP/RTCW-SP/build/linux-x64-release/qagame).
src/games/botlib/l_precomp.c:63:10: fatal error: '../game/q_shared.h' file not found
63src/games/botlib/l_script.c | #:in58c:l10u:de  fatal error: "'../game/q_shared.h' file not found.
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_script.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_precomp.c.o] Error 1
src/games/botlib/l_struct.c:39:10: fatal error: '../game/q_shared.h' file not found
src/games/cgame/cg_local.h:40:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_struct.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_consolecmds.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_drawtools.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_draw.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_effects.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_ents.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_event.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_flamethrower.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_info.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_main.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_localents.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_marks.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_newDraw.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_playerstate.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_particles.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_predict.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_servercmds.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_scoreboard.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_sound.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_snapshot.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_syscalls.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_trails.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_view.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_weapons.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/game/q_math.c.o] Source `src/games/game/q_math.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/game/q_math.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/game/q_shared.c.o] Source `src/games/game/q_shared.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/game/q_shared.c.o'.

### warning kinds

- [15x] -Wshift-negative-value
  - src/third-party/jpeg-6/jdhuff.c:383:15: warning: shifting a negative signed value is undefined [-Wshift-negative-value]
  - src/third-party/jpeg-6/jdhuff.c:383:36: warning: shifting a negative signed value is undefined [-Wshift-negative-value]
- [1x] -Wsizeof-array-argument
  - src/games/game/bg_animation.c:807:27: warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -Wsizeof-pointer-memaccess
  - src/games/game/bg_animation.c:807:29: warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.c:999:32: warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]

## ubuntu-latest-x86-debug

status: failure

errors: 212
warnings: 18 in 3 kinds

### errors

:src/renderer/tr_bsp.csrc/renderer/tr_local.h ::fatal error: 3431:'../game/q_shared.h' file not found:
src/renderer/tr_local.h:: 34fatal error: :10'../game/q_shared.h' file not found:
fatal error: '../game/q_shared.h' file not found
src/renderer/tr_local.h:34:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_animation.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_backend.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_cmds.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_bsp.c.o] Error 1
src/renderer/tr_local.hsrc/renderer/tr_local.h::3434::10:10 : fatal error: fatal error: '../game/q_shared.h' file not found'../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_flares.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_curve.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_cmesh.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_font.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_light.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_init.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_image.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_main.c.o] Error 1
| src/renderer/tr_local.h#:i34n:c10l:u dfatal error: e'../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_mesh.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_noise.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_model.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_marks.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_scene.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_shade.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_shade_calc.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_shader.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_shadows.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_sky.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_surface.c.o] Error 1
src/client/client.hsrc/client/client.h::3131::1010::  fatal error: fatal error: '../game/q_shared.h' file not found'../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/client/cl_cin.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/cl_cgame.c.o] Error 1
src/client/client.h:31:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/renderer/tr_world.c.o] Error 1
:src/client/client.h10::31 :fatal error: 10'../game/q_shared.h' file not found:
scons: *** [build/linux-x86-debug/client/obj/client/cl_console.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/cl_keys.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/cl_input.c.o] Error 1
src/client/cl_net_chan.c:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/client/cl_net_chan.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/cl_parse.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/cl_main.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/cl_scrn.c.o] Error 1
src/client/snd_local.h:32:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/client/snd_adpcm.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/cl_ui.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/snd_mem.c.o] Error 1
src/qcommon/cm_local.h:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/client/snd_mix.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/cm_load.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/snd_wavelet.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/client/snd_dma.c.o] Error 1
src/qcommon/cm_local.hsrc/qcommon/cm_local.h::3030::1010::  fatal error: fatal error: In file included from '../game/q_shared.h' file not foundsrc/qcommon/cm_patch.c'../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/qcommon/cm_test.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/cm_polylib.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/cm_patch.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/cm_trace.c.o] Error 1
src/qcommon/cmd.csrc/qcommon/common.c:31:10: fatal error: '../game/q_shared.h' file not found
:31:10: fatal error: '../game/q_shared.h' file not found
src/qcommon/cvar.c:31:10: fatal error: '../game/q_shared.h' file not found
src/qcommon/files.c:39:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/qcommon/cmd.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/cvar.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/common.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/files.c.o] Error 1
src/qcommon/huffman.c:34:10: fatal error: '../game/q_shared.h' file not found
src/qcommon/msg.c:29:10: fatal error: '../game/q_shared.h' file not found
src/qcommon/net_chan.c:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/qcommon/huffman.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/net_chan.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/msg.c.o] Error 1
src/qcommon/../client/client.h:31:10: fatal error: '../game/q_shared.h' file not found
src/server/server.h:31:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/server/sv_bot.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/server/sv_ccmds.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/unzip.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/server/sv_game.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/server/sv_client.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/server/sv_init.c.o] Error 1
31 | #:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/server/sv_net_chan.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/game/q_shared.c.o] Source `src/games/game/q_shared.c' not found, needed by target `build/linux-x86-debug/client/obj/games/game/q_shared.c.o'.
scons: *** [build/linux-x86-debug/client/obj/games/game/q_math.c.o] Source `src/games/game/q_math.c' not found, needed by target `build/linux-x86-debug/client/obj/games/game/q_math.c.o'.
scons: *** [build/linux-x86-debug/client/obj/server/sv_main.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/server/sv_snapshot.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/server/sv_world.c.o] Error 1
src/qcommon/vm_local.h:29:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/qcommon/vm.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/vm_interpreted.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/vm_x86.c.o] Error 1
src/sys/unix/unix_net.c:31:10: fatal error: '../game/q_shared.h' file not found
src/sys/unix/unix_shared.c:39:10: fatal error: '../game/q_shared.h' file not found
src/sys/unix/unix_main.c:59:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/sys/unix/unix_shared.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/sys/unix/unix_main.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/sys/unix/unix_net.c.o] Error 1
src/client/../renderer/tr_local.h:34:10: fatal error: '../game/q_shared.h' file not found
src/client/../client/client.h:31:10: fatal error: '../game/q_shared.h' file not found
src/sys/unix/linux_snd.c:45:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_joystick.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_snd.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_glimp.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_qgl.c.o] Error 1
error: invalid argument '-std=gnu89' not allowed with 'C++'
scons: *** [build/linux-x86-debug/client/obj/splines/math_angles.cpp.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/splines/math_matrix.cpp.o] Error 1
error: error: invalid argument '-std=gnu89' not allowed with 'C++'invalid argument '-std=gnu89' not allowed with 'C++'
scons: *** [build/linux-x86-debug/client/obj/splines/math_quaternion.cpp.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/splines/math_vector.cpp.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/splines/q_shared.cpp.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/splines/q_parse.cpp.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/splines/util_str.cpp.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/splines/splines.cpp.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/third-party/jpeg-6/jerror.c.o] Error 1
src/games/botlib/be_aas_bspq3.csrc/games/botlib/be_aas_cluster.c:38:10: fatal error: '../game/q_shared.h' file not found
:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_aas_cluster.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_aas_bspq3.c.o] Error 1
src/games/botlib/be_aas_debug.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/third-party/jpeg-6/jmemnobs.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_aas_debug.c.o] Error 1
src/games/botlib/be_aas_main.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_entity.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_file.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_aas_main.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_aas_entity.c.o] Error 1
src/games/botlib/be_aas_move.c:38:10: fatal error: '../game/q_shared.h' file not found
38 | #include "../game/q_shared.scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_aas_file.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_aas_move.c.o] Error 1
src/games/botlib/be_aas_optimize.c:39:10: fatal error: '../game/q_shared.h' file not found
:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_route.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_routealt.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_aas_optimize.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_aas_routealt.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_aas_route.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_aas_reach.c.o] Error 1
src/games/botlib/be_aas_routetable.c:37:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_sample.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_chat.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_char.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_aas_sample.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_aas_routetable.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_ai_char.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_ai_chat.c.o] Error 1
src/games/botlib/be_ai_gen.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_goal.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_move.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_weap.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_ai_gen.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_ai_weap.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_ai_goal.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_ai_move.c.o] Error 1
src/games/botlib/be_ea.csrc/games/botlib/be_ai_weight.c::3838::10:10 :fatal error:  '../game/q_shared.h' file not foundfatal error:
src/games/botlib/be_interface.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_ea.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_ai_weight.c.o] Error 1
src/games/botlib/l_crc.c:42:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/games/botlib/be_interface.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/botlib/l_crc.c.o] Error 1
src/games/botlib/l_libvar.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/l_memory.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/games/botlib/l_libvar.c.o] Error 1
src/games/botlib/l_log.c:42:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/l_precomp.c:63:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/games/botlib/l_memory.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/botlib/l_log.c.o] Error 1
scons: *** Do not know how to make File target `build/linux-x86-debug/qagame' (/home/runner/work/RTCW-SP/RTCW-SP/build/linux-x86-debug/qagame).
scons: *** [build/linux-x86-debug/client/obj/games/botlib/l_precomp.c.o] Error 1
src/games/botlib/l_struct.c:39:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/l_script.c:58:10: fatal error: '../game/q_shared.h' file not found
src/games/cgame/cg_local.h:40:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/client/obj/games/botlib/l_struct.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/games/botlib/l_script.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_consolecmds.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_draw.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_drawtools.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_effects.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_ents.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_info.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_event.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_flamethrower.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_localents.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_marks.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_main.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_newDraw.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_particles.c.o] Error 1
40:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_playerstate.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_predict.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_players.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_scoreboard.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_snapshot.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_servercmds.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_sound.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_syscalls.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_trails.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_view.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_weapons.c.o] Error 1
3 warningsscons: *** [build/linux-x86-debug/cgame/obj/games/game/q_math.c.o] Source `src/games/game/q_math.c' not found, needed by target `build/linux-x86-debug/cgame/obj/games/game/q_math.c.o'.

### warning kinds

- [15x] -Wshift-negative-value
  - src/third-party/jpeg-6/jdhuff.c:383:15: warning: shifting a negative signed value is undefined [-Wshift-negative-value]
  - src/third-party/jpeg-6/jdhuff.c:383:36: warning: shifting a negative signed value is undefined [-Wshift-negative-value]
- [1x] -Wsizeof-array-argument
  - src/games/game/bg_animation.c:807:27: warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -Wsizeof-pointer-memaccess
  - src/games/game/bg_animation.c:807:29: warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.c:999:32: warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]

## ubuntu-latest-x86-release

status: failure

errors: 207
warnings: 18 in 3 kinds

### errors

src/renderer/tr_local.h:34In file included from :src/renderer/tr_backend.c10:: 29fatal error: :
34:10: fatal error: '../game/q_shared.h' file not found
src/renderer/tr_local.h:34:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/renderer/tr_animation.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_cmds.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_bsp.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_backend.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_cmesh.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_flares.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_curve.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_font.c.o] Error 1
/src/renderer/tr_local.hg:a34m:e10/:q _fatal error: s'../game/q_shared.h' file not foundh
scons: *** [build/linux-x86-release/client/obj/renderer/tr_light.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_init.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_main.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_image.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_mesh.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_marks.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_noise.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_model.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_scene.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_shade.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_shade_calc.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_shader.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_shadows.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_sky.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_surface.c.o] Error 1
src/client/client.h:31:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/client/cl_cgame.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/renderer/tr_world.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/cl_cin.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/cl_console.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/cl_input.c.o] Error 1
src/client/cl_net_chan.c:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/client/cl_keys.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/cl_net_chan.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/cl_main.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/cl_parse.c.o] Error 1
src/client/snd_local.h:32:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/client/cl_scrn.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/snd_adpcm.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/cl_ui.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/snd_dma.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/snd_mem.c.o] Error 1
1scons: *** [build/linux-x86-release/client/obj/client/snd_mix.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/client/snd_wavelet.c.o] Error 1
src/qcommon/cm_local.h:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/qcommon/cm_load.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/cm_patch.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/cm_polylib.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/cm_test.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/cm_trace.c.o] Error 1
src/qcommon/cmd.c:31:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/qcommon/cmd.c.o] Error 1
src/qcommon/cvar.c:31:10: fatal error: '../game/q_shared.h' file not found
src/qcommon/common.c:31:10: fatal error: '../game/q_shared.h' file not found
src/qcommon/huffman.c:34:10: fatal error: '../game/q_shared.h' file not found
src/qcommon/files.c:39:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/qcommon/cvar.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/huffman.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/common.c.o] Error 1
src/qcommon/msg.c:29:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/qcommon/files.c.o] Error 1
src/qcommon/net_chan.c:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/qcommon/msg.c.o] Error 1
src/qcommon/../client/client.h:31:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/qcommon/net_chan.c.o] Error 1
src/server/server.h:31:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/server/sv_bot.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/server/sv_ccmds.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/unzip.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/server/sv_client.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/server/sv_init.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/server/sv_game.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/server/sv_main.c.o] Error 1
src/server/sv_net_chan.c:30:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/server/sv_net_chan.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/games/game/q_shared.c.o] Source `src/games/game/q_shared.c' not found, needed by target `build/linux-x86-release/client/obj/games/game/q_shared.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/game/q_math.c.o] Source `src/games/game/q_math.c' not found, needed by target `build/linux-x86-release/client/obj/games/game/q_math.c.o'.
scons: *** [build/linux-x86-release/client/obj/server/sv_world.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/server/sv_snapshot.c.o] Error 1
src/qcommon/vm_local.h:29:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/qcommon/vm_interpreted.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/vm.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/qcommon/vm_x86.c.o] Error 1
src/sys/unix/unix_net.c:31:10: fatal error: '../game/q_shared.h' file not found
src/sys/unix/unix_shared.c:39:10: fatal error: '../game/q_shared.h' file not found
src/sys/unix/unix_main.c:59:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/sys/unix/unix_shared.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/sys/unix/unix_net.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/sys/unix/unix_main.c.o] Error 1
src/client/../renderer/tr_local.h:34:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_qgl.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_glimp.c.o] Error 1
src/client/../client/client.h:31:10: fatal error: '../game/q_shared.h' file not found
src/sys/unix/linux_snd.c:45:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_joystick.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_snd.c.o] Error 1
error: invalid argument '-std=gnu89' not allowed with 'C++'
scons: *** [build/linux-x86-release/client/obj/splines/math_angles.cpp.o] Error 1
scons: *** [build/linux-x86-release/client/obj/splines/math_matrix.cpp.o] Error 1
scons: *** [build/linux-x86-release/client/obj/splines/math_quaternion.cpp.o] Error 1
scons: *** [build/linux-x86-release/client/obj/splines/math_vector.cpp.o] Error 1
scons: *** [build/linux-x86-release/client/obj/splines/q_parse.cpp.o] Error 1
scons: *** [build/linux-x86-release/client/obj/splines/q_shared.cpp.o] Error 1
error: error: invalid argument '-std=gnu89' not allowed with 'C++'invalid argument '-std=gnu89' not allowed with 'C++'
scons: *** [build/linux-x86-release/client/obj/splines/util_str.cpp.o] Error 1
scons: *** [build/linux-x86-release/client/obj/splines/splines.cpp.o] Error 1
scons: *** [build/linux-x86-release/client/obj/third-party/jpeg-6/jerror.c.o] Error 1
src/games/botlib/be_aas_bspq3.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_bspq3.c.o] Error 1
src/games/botlib/be_aas_cluster.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_debug.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/third-party/jpeg-6/jmemnobs.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_debug.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_cluster.c.o] Error 1
src/games/botlib/be_aas_entity.c:38:10: fatal error: '../game/q_shared.h' file not found
| src/games/botlib/be_aas_file.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_main.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_entity.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_main.c.o] Error 1
src/games/botlib/be_aas_move.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_file.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_move.c.o] Error 1
src/games/botlib/be_aas_optimize.c:39:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_reach.c:39:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_aas_route.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_optimize.c.o] Error 1
src/games/botlib/be_aas_routealt.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_routealt.c.o] Error 1
src/games/botlib/be_aas_routetable.c:37:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_reach.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_route.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_routetable.c.o] Error 1
src/games/botlib/be_aas_sample.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_chat.c:38:10: fatal error: '../game/q_shared.h' file not found
:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_sample.c.o] Error 1
src/games/botlib/be_ai_gen.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_ai_gen.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_ai_char.c.o] Error 1
src/games/botlib/be_ai_goal.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_ai_chat.c.o] Error 1
src/games/botlib/be_ai_weap.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ai_move.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_ai_goal.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_ai_weap.c.o] Error 1
src/games/botlib/be_ai_weight.c:38:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/be_ea.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_ai_move.c.o] Error 1
src/games/botlib/be_interface.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_ea.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_ai_weight.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_interface.c.o] Error 1
src/games/botlib/l_libvar.c:38:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/games/botlib/l_libvar.c.o] Error 1
src/games/botlib/l_crc.c:42:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/games/botlib/l_crc.c.o] Error 1
src/games/botlib/l_log.csrc/games/botlib/l_memory.c:38:10: fatal error: '../game/q_shared.h' file not found
:42:10: fatal error: '../game/q_shared.h' file not found
src/games/botlib/l_precomp.c:63:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/games/botlib/l_memory.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/games/botlib/l_log.c.o] Error 1
scons: *** Do not know how to make File target `build/linux-x86-release/qagame' (/home/runner/work/RTCW-SP/RTCW-SP/build/linux-x86-release/qagame).
src/games/botlib/l_script.c:58:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/games/botlib/l_precomp.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/games/botlib/l_script.c.o] Error 1
src/games/botlib/l_struct.c:39:10: fatal error: '../game/q_shared.h' file not found
src/games/cgame/cg_local.h:40:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/obj/games/botlib/l_struct.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_consolecmds.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_drawtools.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_draw.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_effects.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_ents.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_flamethrower.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_event.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_info.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_localents.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_marks.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_main.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_newDraw.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_particles.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_playerstate.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_players.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_predict.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_scoreboard.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_servercmds.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_snapshot.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_sound.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_syscalls.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_trails.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_view.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_weapons.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/game/q_math.c.o] Source `src/games/game/q_math.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/game/q_math.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/game/q_shared.c.o] Source `src/games/game/q_shared.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/game/q_shared.c.o'.
src/games/ui/ui_shared.h:33:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
scons: *** [build/linux-x86-release/ui/obj/games/game/q_math.c.o] Source `src/games/game/q_math.c' not found, needed by target `build/linux-x86-release/ui/obj/games/game/q_math.c.o'.
scons: *** [build/linux-x86-release/ui/obj/games/game/q_shared.c.o] Source `src/games/game/q_shared.c' not found, needed by target `build/linux-x86-release/ui/obj/games/game/q_shared.c.o'.

### warning kinds

- [15x] -Wshift-negative-value
  - src/third-party/jpeg-6/jdhuff.c:383:15: warning: shifting a negative signed value is undefined [-Wshift-negative-value]
  - src/third-party/jpeg-6/jdhuff.c:383:36: warning: shifting a negative signed value is undefined [-Wshift-negative-value]
- [1x] -Wsizeof-array-argument
  - src/games/game/bg_animation.c:807:27: warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -Wsizeof-pointer-memaccess
  - src/games/game/bg_animation.c:807:29: warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.c:999:32: warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]

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

errors: 232
warnings: 175 in 12 kinds

### errors

)src\renderer\tr_local.h:( 34,10)fatal error: :fatal error:  '../game/q_shared.h' file not foundfatal error:
): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_backend.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_cmds.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_animation.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_bsp.c.obj] Error 1
src\renderer\tr_local.h(34,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_curve.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_cmesh.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_flares.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_font.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_init.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_light.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_image.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_main.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_marks.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_mesh.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_noise.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_model.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_scene.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_shade_calc.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_shade.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_shader.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_shadows.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_sky.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_surface.c.obj] Error 1
src\client\client.h(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_world.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\cl_cgame.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\cl_cin.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\cl_console.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\cl_input.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\cl_keys.c.obj] Error 1
src\client\cl_net_chan.c(30,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\client\cl_main.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\cl_net_chan.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\cl_parse.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\cl_scrn.c.obj] Error 1
src\client\snd_local.h(32,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\client\snd_adpcm.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\cl_ui.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\snd_dma.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\snd_mem.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\snd_wavelet.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\client\snd_mix.c.obj] Error 1
src\qcommon\cm_local.h(30,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\qcommon\cm_load.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\cm_patch.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\cm_polylib.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\cm_test.c.obj] Error 1
src\qcommon\cmd.c(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\qcommon\cmd.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\cm_trace.c.obj] Error 1
src\qcommon\common.c(31,10): fatal error: '../game/q_shared.h' file not found
src\qcommon\cvar.c(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\qcommon\cvar.c.obj] Error 1
src\qcommon\files.c(39,10): fatal error: '../game/q_shared.h' file not found
src\qcommon\huffman.c(34,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\qcommon\common.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\huffman.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\files.c.obj] Error 1
src\qcommon\msg.c(29,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\qcommon\msg.c.obj] Error 1
src\qcommon\net_chan.c(30,10): fatal error: '../game/q_shared.h' file not found
src\qcommon\../client/client.h(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\qcommon\net_chan.c.obj] Error 1
src\server\server.h(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\qcommon\unzip.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\server\sv_bot.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\server\sv_ccmds.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\server\sv_client.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\server\sv_game.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\server\sv_init.c.obj] Error 1
src\server\sv_net_chan.c(30,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\server\sv_net_chan.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\games\game\q_shared.c.obj] Source `src\games\game\q_shared.c' not found, needed by target `build\windows-x64-debug\client\obj\games\game\q_shared.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\game\q_math.c.obj] Source `src\games\game\q_math.c' not found, needed by target `build\windows-x64-debug\client\obj\games\game\q_math.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\server\sv_main.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\server\sv_snapshot.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\server\sv_world.c.obj] Error 1
src\qcommon\vm_local.h(29,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\qcommon\vm.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\vm_interpreted.c.obj] Error 1
src\client\../renderer/tr_local.h(34,10): fatal error: '../game/q_shared.h' file not found
34src\client\../renderer/tr_local.h | (#34i,n10c)l:u dfatal error: e'../game/q_shared.h' file not found
src\client\../client/client.h(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_input.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
src\sys\win32\win_net.c(31,10): fatal error: '../game/q_shared.h' file not found
src\sys\win32\win_shared.c(30,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_main.c.obj] Error 1
src\client\../client/snd_local.h(32,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_net.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_qgl.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_shared.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_snd.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_syscon.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_wndproc.c.obj] Error 1
src\games\botlib\be_aas_bspq3.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_bspq3.c.obj] Error 1
src\games\botlib\be_aas_cluster.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_aas_debug.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_debug.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_cluster.c.obj] Error 1
src\games\botlib\be_aas_file.c(38,10):src\games\botlib\be_aas_entity.c (fatal error: 38'../game/q_shared.h' file not found,
10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_file.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_entity.c.obj] Error 1
src\games\botlib\be_aas_move.c(38,10): fatal error: '../game/q_shared.h' file not found
38 | #src\games\botlib\be_aas_main.ci(n38c,l10u)d:e  fatal error: "'../game/q_shared.h' file not found.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_main.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_move.c.obj] Error 1
src\games\botlib\be_aas_reach.c(39,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\third-party\jpeg-6\jerror.c.obj] Error 1
src\games\botlib\be_aas_optimize.c(39,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_reach.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_optimize.c.obj] Error 1
src\games\botlib\be_aas_route.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_aas_routealt.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_route.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\third-party\jpeg-6\jmemnobs.c.obj] Error 1
src\games\botlib\be_aas_routetable.c(37,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_routealt.c.obj] Error 1
src\games\botlib\be_aas_sample.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_ai_char.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_routetable.c.obj] Error 1
src\games\botlib\be_ai_chat.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_sample.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_ai_char.c.obj] Error 1
src\games\botlib\be_ai_gen.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_ai_chat.c.obj] Error 1
src\games\botlib\be_ai_goal.c(38,10): fatal error: '../game/q_shared.h' file not found
38 | #include "../gasrc\games\botlib\be_ai_move.cme(/38q,_10s)h:a refatal error: d'../game/q_shared.h' file not found.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_ai_gen.c.obj] Error 1
src\games\botlib\be_ai_weap.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_ai_goal.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_ai_move.c.obj] Error 1
src\games\botlib\be_ai_weight.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_ai_weap.c.obj] Error 1
src\games\botlib\be_ea.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_interface.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_ea.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_ai_weight.c.obj] Error 1
src\games\botlib\l_libvar.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\l_crc.c(42,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\games\botlib\l_libvar.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\games\botlib\l_crc.c.obj] Error 1
src\games\botlib\l_log.c(42,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\games\botlib\l_log.c.obj] Error 1
src\games\botlib\l_memory.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\l_precomp.c(63,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\games\botlib\l_memory.c.obj] Error 1
src\games\botlib\l_script.c(58,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\games\botlib\l_precomp.c.obj] Error 1
src\games\botlib\l_struct.c(39,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\obj\games\botlib\l_script.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\games\botlib\l_struct.c.obj] Error 1
src\games\game\ai_cast.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast.c.obj] Error 1
src\games\game\ai_cast_events.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_events.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_interface.c.obj] Error 1
src\games\game\ai_cast_fight.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_fight.c.obj] Error 1
src\games\game\ai_cast_func_attack.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_func_attack.c.obj] Error 1
src\games\game\ai_cast_func_boss1.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\game\ai_cast_funcs.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_func_boss1.c.obj] Error 1
src\games\game\ai_cast_script.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_funcs.c.obj] Error 1
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_script.c.obj] Error 1
src\games\game\ai_cast_script_actions.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\game\ai_cast_script_ents.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_script_actions.c.obj] Error 1
src\games\game\ai_cast_sight.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_script_ents.c.obj] Error 1
src\games\game\ai_cast_think.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_sight.c.obj] Error 1
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_think.c.obj] Error 1
src\games\game\g_save.c(35,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\game\obj\games\game\g_save.c.obj] Error 1
src\games\game\g_script.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\game\obj\games\game\g_script.c.obj] Error 1
src\games\game\g_script_actions.c(38,10): fatal error: '../game/q_shared.h' file not found
153 |         {"_color",  scons: *** [build\windows-x64-debug\game\obj\games\game\g_script_actions.c.obj] Error 1
scons: *** [build\windows-x64-debug\game\obj\games\game\q_math.c.obj] Source `src\games\game\q_math.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\q_math.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\q_shared.c.obj] Source `src\games\game\q_shared.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\q_shared.c.obj'.
src\games\botai\ai_main.c(39,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\game\obj\games\botai\ai_main.c.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\game\q_math.c.obj] Source `src\games\game\q_math.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\game\q_math.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\game\q_shared.c.obj] Source `src\games\game\q_shared.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\game\q_shared.c.obj'.
src\games\cgame\cg_local.h(40,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_consolecmds.c.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_draw.c.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_drawtools.c.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_effects.c.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_event.c.obj] Error 1

### warning kinds

- [1x] )src\splines\math_matrix.h:( 94warning: ,sizeof on array function parameter will return size of 'float (*)[3]' instead o
  - )src\splines\math_matrix.h:( 94warning: ,sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]26
- [7x] -Wsizeof-array-argument
  - ): warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
  - src\splines\math_matrix.h(94,26): warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
- [1x] src\splines\math_matrix.hsrc\splines\math_matrix.h((9494,,2828))::  warning: warning: 'memcpy' call operates on objects 
  - src\splines\math_matrix.hsrc\splines\math_matrix.h((9494,,2828))::  warning: warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
- [8x] -Wsizeof-pointer-memaccess
  - src\splines\math_matrix.h(94,28): warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
  - src\splines\math_matrix.h(94,28): warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
- [33x] -Wwritable-strings
  - src\splines\q_shared.cpp(757,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(774,12): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [15x] -Wshift-negative-value
  - src\third-party\jpeg-6\jdhuff.c(383,15): warning: shifting a negative signed value is undefined [-Wshift-negative-value]
  - src\third-party\jpeg-6\jdhuff.c(383,36): warning: shifting a negative signed value is undefined [-Wshift-negative-value]
- [98x] -Wpointer-to-int-cast
  - src\games\game\g_alarm.c(114,27): warning: cast to smaller integer type 'int' from 'char **' [-Wpointer-to-int-cast]
  - src\games\game\g_alarm.c(189,28): warning: cast to smaller integer type 'int' from 'char **' [-Wpointer-to-int-cast]
- [2x] -Wlogical-not-parentheses
  - src\games\game\g_client.c(1534,8): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src\games\game\g_client.c(1616,9): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [6x] -Wint-to-pointer-cast
  - src\games\game\g_main.c(318,33): warning: cast to 'float *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\game\g_main.c(318,54): warning: cast to 'float *' from smaller integer type 'int' [-Wint-to-pointer-cast]
- [1x] -Wimplicit-const-int-float-conversion
  - src\games\botai\ai_cmd.c(200,9): warning: implicit conversion from 'int' to 'float' changes value from 99999999 to 1.0E+8 [-Wimplicit-const-int-float-conversion]
- [2x] -Warray-bounds
  - src\games\botai\ai_cmd.c(1069,3): warning: array index 32 is past the end of the array (that has type 'char[32]') [-Warray-bounds]
  - src\games\botai\ai_team.c(548,4): warning: array index 32 is past the end of the array (that has type 'char[32]') [-Warray-bounds]
- [1x] -Wpointer-bool-conversion
  - src\games\botai\ai_dmq3.c(2121,8): warning: address of array 'classname' will always evaluate to 'true' [-Wpointer-bool-conversion]

## windows-latest-x64-release

status: failure

errors: 232
warnings: 177 in 11 kinds

### errors

src\renderer\tr_animation.c:fatal error: 30src\renderer\tr_local.h'../game/q_shared.h' file not found
(: 34,fatal error: 10'../game/q_shared.h' file not found)
fatal error: src\renderer\tr_local.h'../game/q_shared.h' file not found(
34,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\renderer\tr_cmds.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_animation.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_backend.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_bsp.c.obj] Error 1
src\renderer\tr_local.h(34,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\renderer\tr_flares.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_curve.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_cmesh.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_font.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_light.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_init.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_image.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_main.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_marks.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_mesh.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_noise.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_model.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_scene.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_shade.c.obj] Error 1
src\renderer\tr_local.h(34,10In file included from )src\renderer\tr_sky.c:: 30fatal error: :
(34,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\renderer\tr_shade_calc.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_shader.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_shadows.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_sky.c.obj] Error 1
src\client\client.h(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\renderer\tr_surface.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\renderer\tr_world.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Error 1
src\client\cl_net_chan.c(30,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\cl_scrn.c.obj] Error 1
src\client\snd_local.h(32,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\client\cl_ui.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\snd_adpcm.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\snd_mem.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\snd_dma.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\client\snd_wavelet.c.obj] Error 1
src\qcommon\cm_local.h(30,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\client\snd_mix.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_patch.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_load.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_test.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_polylib.c.obj] Error 1
src\qcommon\cmd.c(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\qcommon\cmd.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_trace.c.obj] Error 1
src\qcommon\common.c(31,10): fatal error: '../game/q_shared.h' file not found
src\qcommon\cvar.c(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\qcommon\cvar.c.obj] Error 1
src\qcommon\files.c(39,10): fatal error: '../game/q_shared.h' file not found
src\qcommon\huffman.c(34,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\qcommon\common.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\huffman.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\files.c.obj] Error 1
src\qcommon\msg.c(29,10): fatal error: '../game/q_shared.h' file not found
src\qcommon\net_chan.c(30,10): fatal error: '../game/q_shared.h' file not found
src\qcommon\../client/client.h(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\qcommon\net_chan.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\msg.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\unzip.c.obj] Error 1
src\server\server.h(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\server\sv_bot.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\server\sv_ccmds.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\server\sv_client.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\server\sv_init.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\server\sv_game.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\server\sv_main.c.obj] Error 1
src\server\sv_net_chan.c(30,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\game\q_shared.c.obj] Source `src\games\game\q_shared.c' not found, needed by target `build\windows-x64-release\client\obj\games\game\q_shared.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\game\q_math.c.obj] Source `src\games\game\q_math.c' not found, needed by target `build\windows-x64-release\client\obj\games\game\q_math.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_net_chan.c.obj] Error 1
src\qcommon\vm_local.h(29,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\server\sv_world.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\server\sv_snapshot.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\vm.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\qcommon\vm_interpreted.c.obj] Error 1
src\client\../client/client.h(31,10): fatal error: '../game/q_shared.h' file not found
src\client\../renderer/tr_local.h(34,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_input.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
src\sys\win32\win_net.c(31,10): fatal error: '../game/q_shared.h' file not found
src\sys\win32\win_shared.c(30,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_main.c.obj] Error 1
src\client\../client/snd_local.h(32,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_net.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_shared.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_wndproc.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_syscon.c.obj] Error 1
src\games\botlib\be_aas_bspq3.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_bspq3.c.obj] Error 1
src\games\botlib\be_aas_cluster.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_cluster.c.obj] Error 1
src\games\botlib\be_aas_debug.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_debug.c.obj] Error 1
src\games\botlib\be_aas_entity.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_aas_file.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_entity.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_file.c.obj] Error 1
src\games\botlib\be_aas_main.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_main.c.obj] Error 1
src\games\botlib\be_aas_move.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_move.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\third-party\jpeg-6\jerror.c.obj] Error 1
src\games\botlib\be_aas_optimize.c(39,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_optimize.c.obj] Error 1
src\games\botlib\be_aas_reach.c(39,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_aas_route.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_reach.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_route.c.obj] Error 1
src\games\botlib\be_aas_routealt.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_routealt.c.obj] Error 1
src\games\botlib\be_aas_routetable.c(37,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_aas_sample.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\third-party\jpeg-6\jmemnobs.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_routetable.c.obj] Error 1
src\games\botlib\be_ai_char.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_sample.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_char.c.obj] Error 1
src\games\botlib\be_ai_chat.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_ai_gen.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_ai_goal.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_gen.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_chat.c.obj] Error 1
src\games\botlib\be_ai_move.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_goal.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_move.c.obj] Error 1
src\games\botlib\be_ai_weap.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_ai_weight.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_ea.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_weap.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_weight.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ea.c.obj] Error 1
src\games\botlib\be_interface.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\l_libvar.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_libvar.c.obj] Error 1
src\games\botlib\l_crc.c(42,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\l_log.c(42,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_crc.c.obj] Error 1
src\games\botlib\l_memory.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_log.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_memory.c.obj] Error 1
src\games\botlib\l_precomp.c(63,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\l_script.c(58,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\l_struct.c(39,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_script.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_precomp.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_struct.c.obj] Error 1
src\games\game\ai_cast.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast.c.obj] Error 1
src\games\game\ai_cast_events.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_events.c.obj] Error 1
src\games\game\ai_cast_fight.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_interface.c.obj] Error 1
src\games\game\ai_cast_func_attack.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_fight.c.obj] Error 1
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_func_attack.c.obj] Error 1
src\games\game\ai_cast_func_boss1.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_func_boss1.c.obj] Error 1
src\games\game\ai_cast_funcs.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\game\ai_cast_script.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\game\ai_cast_script_actions.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_script.c.obj] Error 1
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_funcs.c.obj] Error 1
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_script_actions.c.obj] Error 1
src\games\game\ai_cast_script_ents.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_script_ents.c.obj] Error 1
src\games\game\ai_cast_sight.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\game\ai_cast_think.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_sight.c.obj] Error 1
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_think.c.obj] Error 1
src\games\game\g_save.c(35,10): fatal error: '../game/q_shared.h' file not found
src\games\game\g_script.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\game\obj\games\game\g_script.c.obj] Error 1
scons: *** [build\windows-x64-release\game\obj\games\game\g_save.c.obj] Error 1
src\games\game\g_script_actions.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\game\obj\games\game\g_script_actions.c.obj] Error 1
scons: *** [build\windows-x64-release\game\obj\games\game\q_math.c.obj] Source `src\games\game\q_math.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\q_math.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\q_shared.c.obj] Source `src\games\game\q_shared.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\q_shared.c.obj'.
src\games\botai\ai_main.c(39,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_main.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\game\q_math.c.obj] Source `src\games\game\q_math.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\q_math.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\game\q_shared.c.obj] Source `src\games\game\q_shared.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\q_shared.c.obj'.
src\games\cgame\cg_local.h(40,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_consolecmds.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_draw.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_drawtools.c.obj] Error 1

### warning kinds

- [8x] -Wsizeof-array-argument
  - src\splines\math_matrix.h(94,26): warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
  - src\splines\math_matrix.h(94,26): warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
- [10x] -Wsizeof-pointer-memaccess
  - src\splines\math_matrix.h(94,28): warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
  - src\splines\math_matrix.h(94,28): warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
- [33x] -Wwritable-strings
  - src\splines\q_shared.cpp(757,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(774,12): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [1x] -Wunused-value
  - src\splines\splines.cpp(592,17): warning: expression result unused [-Wunused-value]
- [15x] -Wshift-negative-value
  - src\third-party\jpeg-6\jdhuff.c(383,15): warning: shifting a negative signed value is undefined [-Wshift-negative-value]
  - src\third-party\jpeg-6\jdhuff.c(383,36): warning: shifting a negative signed value is undefined [-Wshift-negative-value]
- [98x] -Wpointer-to-int-cast
  - src\games\game\g_alarm.c(114,27): warning: cast to smaller integer type 'int' from 'char **' [-Wpointer-to-int-cast]
  - src\games\game\g_alarm.c(189,28): warning: cast to smaller integer type 'int' from 'char **' [-Wpointer-to-int-cast]
- [2x] -Wlogical-not-parentheses
  - src\games\game\g_client.c(1534,8): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src\games\game\g_client.c(1616,9): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [6x] -Wint-to-pointer-cast
  - src\games\game\g_main.c(318,33): warning: cast to 'float *' from smaller integer type 'int' [-Wint-to-pointer-cast]
  - src\games\game\g_main.c(318,54): warning: cast to 'float *' from smaller integer type 'int' [-Wint-to-pointer-cast]
- [1x] -Wimplicit-const-int-float-conversion
  - src\games\botai\ai_cmd.c(200,9): warning: implicit conversion from 'int' to 'float' changes value from 99999999 to 1.0E+8 [-Wimplicit-const-int-float-conversion]
- [2x] -Warray-bounds
  - src\games\botai\ai_cmd.c(1069,3): warning: array index 32 is past the end of the array (that has type 'char[32]') [-Warray-bounds]
  - src\games\botai\ai_team.c(548,4): warning: array index 32 is past the end of the array (that has type 'char[32]') [-Warray-bounds]
- [1x] -Wpointer-bool-conversion
  - src\games\botai\ai_dmq3.c(2121,8): warning: address of array 'classname' will always evaluate to 'true' [-Wpointer-bool-conversion]

## windows-latest-x86-debug

status: failure

errors: 229
warnings: 72 in 8 kinds

### errors

(34(,3410,)34src\renderer\tr_local.h,:10( 34,)1010)fatal error: ::'../game/q_shared.h' file not found ) :
fatal error: fatal error: fatal error: '../game/q_shared.h' file not found'../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_backend.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_cmds.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_animation.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_bsp.c.obj] Error 1
src\renderer\tr_local.h(34,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_curve.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_cmesh.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_flares.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_font.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_init.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_light.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_image.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_main.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_marks.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_mesh.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_model.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_noise.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_scene.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_shade.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_shader.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_shade_calc.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_shadows.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_surface.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_sky.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\renderer\tr_world.c.obj] Error 1
src\client\client.h(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\client\cl_cgame.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\cl_cin.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\cl_console.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\cl_input.c.obj] Error 1
src\client\cl_net_chan.c(30,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\client\cl_keys.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\cl_net_chan.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\cl_main.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\cl_parse.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\cl_scrn.c.obj] Error 1
src\client\snd_local.h(32,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\client\cl_ui.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\snd_adpcm.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\snd_dma.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\snd_mem.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\snd_mix.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\client\snd_wavelet.c.obj] Error 1
src\qcommon\cm_local.h(30,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\qcommon\cm_load.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\cm_patch.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\cm_polylib.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\cm_test.c.obj] Error 1
src\qcommon\cmd.c(31,10): fatal error: '../game/q_shared.h' file not found
src\qcommon\common.c(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\qcommon\cm_trace.c.obj] Error 1
src\qcommon\cvar.c(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\qcommon\cmd.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\cvar.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\common.c.obj] Error 1
src\qcommon\files.c(39,10): fatal error: '../game/q_shared.h' file not found
src\qcommon\huffman.c(34,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\qcommon\huffman.c.obj] Error 1
src\qcommon\msg.c(29,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\qcommon\files.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\msg.c.obj] Error 1
src\qcommon\net_chan.c(30,10): fatal error: '../game/q_shared.h' file not found
src\qcommon\../client/client.h(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\qcommon\net_chan.c.obj] Error 1
src\server\server.h(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\server\sv_bot.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\unzip.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\server\sv_ccmds.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\server\sv_client.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\server\sv_game.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\server\sv_init.c.obj] Error 1
src\server\sv_net_chan.c(30,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\server\sv_main.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\games\game\q_shared.c.obj] Source `src\games\game\q_shared.c' not found, needed by target `build\windows-x86-debug\client\obj\games\game\q_shared.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\game\q_math.c.obj] Source `src\games\game\q_math.c' not found, needed by target `build\windows-x86-debug\client\obj\games\game\q_math.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\server\sv_net_chan.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\server\sv_snapshot.c.obj] Error 1
src\qcommon\vm_local.h(29,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\server\sv_world.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\vm.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\vm_interpreted.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\qcommon\vm_x86.c.obj] Error 1
src\client\../renderer/tr_local.h(34,10): fatal error: '../game/q_shared.h' file not found
src\client\../client/client.h(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_input.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
src\sys\win32\win_net.c(31,10): fatal error: '../game/q_shared.h' file not found
src\sys\win32\win_shared.c(30,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_main.c.obj] Error 1
src\client\../client/snd_local.h(32,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_net.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_qgl.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_shared.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_snd.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_wndproc.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_syscon.c.obj] Error 1
src\games\botlib\be_aas_bspq3.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_bspq3.c.obj] Error 1
src\games\botlib\be_aas_cluster.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_cluster.c.obj] Error 1
src\games\botlib\be_aas_debug.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_debug.c.obj] Error 1
src\games\botlib\be_aas_entity.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_entity.c.obj] Error 1
src\games\botlib\be_aas_file.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_file.c.obj] Error 1
src\games\botlib\be_aas_main.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_aas_move.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_main.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_move.c.obj] Error 1
src\games\botlib\be_aas_optimize.c(39,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_aas_reach.c(39,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_optimize.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_reach.c.obj] Error 1
src\games\botlib\be_aas_route.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_aas_routealt.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_route.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\third-party\jpeg-6\jerror.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_routealt.c.obj] Error 1
src\games\botlib\be_aas_routetable.c(37,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_aas_sample.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_ai_char.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_routetable.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_sample.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ai_char.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\third-party\jpeg-6\jmemnobs.c.obj] Error 1
src\games\botlib\be_ai_chat.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_ai_gen.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_ai_goal.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ai_gen.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ai_chat.c.obj] Error 1
src\games\botlib\be_ai_move.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ai_goal.c.obj] Error 1
src\games\botlib\be_ai_weap.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ai_move.c.obj] Error 1
src\games\botlib\be_ai_weight.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_ea.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ai_weap.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ai_weight.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ea.c.obj] Error 1
src\games\botlib\be_interface.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\l_libvar.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\games\botlib\l_libvar.c.obj] Error 1
src\games\botlib\l_crc.c(42,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\l_memory.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\l_log.c(42,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\obj\games\botlib\l_memory.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\games\botlib\l_crc.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\games\botlib\l_log.c.obj] Error 1
src\games\botlib\l_precomp.c(63,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\l_script.c(58,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\l_struct.c(39,10):1  errorfatal error:  generated'../game/q_shared.h' file not found.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\l_script.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\games\botlib\l_precomp.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\games\botlib\l_struct.c.obj] Error 1
src\games\game\ai_cast.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast.c.obj] Error 1
src\games\game\ai_cast_events.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_events.c.obj] Error 1
src\games\game\ai_cast_fight.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\game\ai_cast_func_attack.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_func_attack.c.obj] Error 1
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_fight.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_interface.c.obj] Error 1
src\games\game\ai_cast_func_boss1.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_func_boss1.c.obj] Error 1
src\games\game\ai_cast_script.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\game\ai_cast_funcs.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_script.c.obj] Error 1
src\games\game\ai_cast_script_actions.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_funcs.c.obj] Error 1
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_script_actions.c.obj] Error 1
src\games\game\ai_cast_script_ents.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_script_ents.c.obj] Error 1
src\games\game\ai_cast_sight.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_sight.c.obj] Error 1
src\games\game\ai_cast_think.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_think.c.obj] Error 1
src\games\game\g_save.c(35,10): fatal error: '../game/q_shared.h' file not found
src\games\game\g_script.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\game\obj\games\game\g_save.c.obj] Error 1
scons: *** [build\windows-x86-debug\game\obj\games\game\g_script.c.obj] Error 1
src\games\game\g_script_actions.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\game\obj\games\game\g_script_actions.c.obj] Error 1
scons: *** [build\windows-x86-debug\game\obj\games\game\q_math.c.obj] Source `src\games\game\q_math.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\q_math.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\q_shared.c.obj] Source `src\games\game\q_shared.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\q_shared.c.obj'.
src\games\botai\ai_main.c(39,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\game\obj\games\botai\ai_main.c.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\games\game\q_math.c.obj] Source `src\games\game\q_math.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\game\q_math.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\game\q_shared.c.obj] Source `src\games\game\q_shared.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\game\q_shared.c.obj'.
src\games\cgame\cg_local.h(40,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_consolecmds.c.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_draw.c.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_drawtools.c.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_effects.c.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_event.c.obj] Error 1

### warning kinds

- [8x] -Wsizeof-array-argument
  - src\splines\math_matrix.h(94,26): warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
  - src\splines\math_matrix.h(94,26): warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
- [10x] -Wsizeof-pointer-memaccess
  - src\splines\math_matrix.h(94,28): warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
  - src\splines\math_matrix.h(94,28): warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
- [33x] -Wwritable-strings
  - src\splines\q_shared.cpp(757,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(774,12): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [15x] -Wshift-negative-value
  - src\third-party\jpeg-6\jdhuff.c(383,15): warning: shifting a negative signed value is undefined [-Wshift-negative-value]
  - src\third-party\jpeg-6\jdhuff.c(383,36): warning: shifting a negative signed value is undefined [-Wshift-negative-value]
- [2x] -Wlogical-not-parentheses
  - src\games\game\g_client.c(1534,8): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src\games\game\g_client.c(1616,9): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [1x] -Wimplicit-const-int-float-conversion
  - src\games\botai\ai_cmd.c(200,9): warning: implicit conversion from 'int' to 'float' changes value from 99999999 to 1.0E+8 [-Wimplicit-const-int-float-conversion]
- [2x] -Warray-bounds
  - src\games\botai\ai_cmd.c(1069,3): warning: array index 32 is past the end of the array (that has type 'char[32]') [-Warray-bounds]
  - src\games\botai\ai_team.c(548,4): warning: array index 32 is past the end of the array (that has type 'char[32]') [-Warray-bounds]
- [1x] -Wpointer-bool-conversion
  - src\games\botai\ai_dmq3.c(2121,8): warning: address of array 'classname' will always evaluate to 'true' [-Wpointer-bool-conversion]

## windows-latest-x86-release

status: failure

errors: 231
warnings: 73 in 9 kinds

### errors

)src\renderer\tr_local.h:( 34,10In file included from )fatal error: :src\renderer\tr_bsp.c '../game/q_shared.h' file not found:
fatal error: 31'../game/q_shared.h' file not found
fatal error: src\renderer\tr_local.h'../game/q_shared.h' file not found(
34,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\renderer\tr_cmds.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_backend.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_animation.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_bsp.c.obj] Error 1
src\renderer\tr_local.h(34,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\renderer\tr_cmesh.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_curve.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_flares.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_font.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_init.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_image.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_light.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_main.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_marks.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_mesh.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_model.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_noise.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_scene.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_shade.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_shade_calc.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_shader.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_shadows.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_surface.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\renderer\tr_sky.c.obj] Error 1
src\client\client.h(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\renderer\tr_world.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\cl_cgame.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\cl_cin.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\cl_console.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\cl_input.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\cl_keys.c.obj] Error 1
src\client\cl_net_chan.c(30,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\client\cl_main.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\cl_net_chan.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\cl_parse.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\cl_scrn.c.obj] Error 1
src\client\snd_local.h(32,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\client\snd_adpcm.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\cl_ui.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\snd_mem.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\snd_dma.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\client\snd_mix.c.obj] Error 1
src\qcommon\cm_local.h(30,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\client\snd_wavelet.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\cm_load.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\cm_patch.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\cm_polylib.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\cm_test.c.obj] Error 1
src\qcommon\cmd.c(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\qcommon\cm_trace.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\cmd.c.obj] Error 1
src\qcommon\common.c(31,10): fatal error: '../game/q_shared.h' file not found
src\qcommon\cvar.c(31,10): fatal error: '../game/q_shared.h' file not found
src\qcommon\files.c(39,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\qcommon\cvar.c.obj] Error 1
src\qcommon\huffman.c(34,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\qcommon\common.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\huffman.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\files.c.obj] Error 1
src\qcommon\msg.c(29,10): fatal error: '../game/q_shared.h' file not found
src\qcommon\net_chan.c(30,10): fatal error: '../game/q_shared.h' file not found
src\qcommon\../client/client.h(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\qcommon\msg.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\net_chan.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\unzip.c.obj] Error 1
src\server\server.h(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\server\sv_bot.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\server\sv_ccmds.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\server\sv_client.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\server\sv_init.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\server\sv_game.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\server\sv_main.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\game\q_shared.c.obj] Source `src\games\game\q_shared.c' not found, needed by target `build\windows-x86-release\client\obj\games\game\q_shared.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\game\q_math.c.obj] Source `src\games\game\q_math.c' not found, needed by target `build\windows-x86-release\client\obj\games\game\q_math.c.obj'.
src\server\sv_net_chan.c(30,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\server\sv_net_chan.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\server\sv_snapshot.c.obj] Error 1
src\qcommon\vm_local.h(29,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\server\sv_world.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\vm.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\vm_interpreted.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\qcommon\vm_x86.c.obj] Error 1
src\client\../renderer/tr_local.h(34,10): fatal error: '../game/q_shared.h' file not found
src\client\../client/client.h(31,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_input.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
src\sys\win32\win_net.c(31,10): fatal error: '../game/q_shared.h' file not found
src\sys\win32\win_shared.c(30,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_main.c.obj] Error 1
src\client\../client/snd_local.h(32,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_net.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_shared.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_snd.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_syscon.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_wndproc.c.obj] Error 1
src\games\botlib\be_aas_bspq3.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_aas_cluster.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_bspq3.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_cluster.c.obj] Error 1
src\games\botlib\be_aas_debug.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_aas_entity.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_debug.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_entity.c.obj] Error 1
src\games\botlib\be_aas_file.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_aas_main.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_file.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jerror.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_main.c.obj] Error 1
src\games\botlib\be_aas_move.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_aas_optimize.c(39,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_aas_reach.c(39,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_optimize.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_move.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_reach.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\third-party\jpeg-6\jmemnobs.c.obj] Error 1
src\games\botlib\be_aas_route.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_aas_routealt.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_aas_routetable.c(37,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_routealt.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_route.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_routetable.c.obj] Error 1
src\games\botlib\be_aas_sample.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_ai_char.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_sample.c.obj] Error 1
src\games\botlib\be_ai_chat.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_ai_gen.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ai_char.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ai_chat.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ai_gen.c.obj] Error 1
src\games\botlib\be_ai_goal.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_ai_move.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_ai_weap.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_ai_weight.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ai_goal.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ai_weap.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ai_move.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ai_weight.c.obj] Error 1
src\games\botlib\be_ea.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\be_interface.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\l_libvar.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ea.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\l_libvar.c.obj] Error 1
src\games\botlib\l_crc.c(42,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\l_memory.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\games\botlib\l_crc.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\l_memory.c.obj] Error 1
src\games\botlib\l_log.c(42,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\l_precomp.c(63,10): fatal error: '../game/q_shared.h' file not found
src\games\botlib\l_script.c(58,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\games\botlib\l_log.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\l_precomp.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\l_script.c.obj] Error 1
src\games\botlib\l_struct.c(39,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\obj\games\botlib\l_struct.c.obj] Error 1
src\games\game\ai_cast.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast.c.obj] Error 1
src\games\game\ai_cast_events.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\game\ai_cast_fight.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_events.c.obj] Error 1
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_fight.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_interface.c.obj] Error 1
src\games\game\ai_cast_func_attack.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_func_attack.c.obj] Error 1
src\games\game\ai_cast_script.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\game\ai_cast_func_boss1.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\game\ai_cast_funcs.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_script.c.obj] Error 1
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_func_boss1.c.obj] Error 1
src\games\game\ai_cast_script_actions.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_funcs.c.obj] Error 1
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_script_actions.c.obj] Error 1
src\games\game\ai_cast_sight.c(38,10): fatal error: '../game/q_shared.h' file not found
src\games\game\ai_cast_script_ents.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_sight.c.obj] Error 1
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_script_ents.c.obj] Error 1
src\games\game\ai_cast_think.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_think.c.obj] Error 1
src\games\game\g_save.c(35,10): fatal error: '../game/q_shared.h' file not found
src\games\game\g_script.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\game\obj\games\game\g_save.c.obj] Error 1
scons: *** [build\windows-x86-release\game\obj\games\game\g_script.c.obj] Error 1
src\games\game\g_script_actions.c(38,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\game\obj\games\game\g_script_actions.c.obj] Error 1
scons: *** [build\windows-x86-release\game\obj\games\game\q_math.c.obj] Source `src\games\game\q_math.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\q_math.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\q_shared.c.obj] Source `src\games\game\q_shared.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\q_shared.c.obj'.
src\games\botai\ai_main.c(39,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\game\obj\games\botai\ai_main.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\game\q_math.c.obj] Source `src\games\game\q_math.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\game\q_math.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\game\q_shared.c.obj] Source `src\games\game\q_shared.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\game\q_shared.c.obj'.
src\games\cgame\cg_local.h(40,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_consolecmds.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_draw.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_drawtools.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_effects.c.obj] Error 1

### warning kinds

- [8x] -Wsizeof-array-argument
  - src\splines\math_matrix.h(94,26): warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
  - src\splines\math_matrix.h(94,26): warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
- [10x] -Wsizeof-pointer-memaccess
  - src\splines\math_matrix.h(94,28): warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
  - src\splines\math_matrix.h(94,28): warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
- [33x] -Wwritable-strings
  - src\splines\q_shared.cpp(757,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(774,12): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [1x] -Wunused-value
  - src\splines\splines.cpp(592,17): warning: expression result unused [-Wunused-value]
- [15x] -Wshift-negative-value
  - src\third-party\jpeg-6\jdhuff.c(383,15): warning: shifting a negative signed value is undefined [-Wshift-negative-value]
  - src\third-party\jpeg-6\jdhuff.c(383,36): warning: shifting a negative signed value is undefined [-Wshift-negative-value]
- [2x] -Wlogical-not-parentheses
  - src\games\game\g_client.c(1534,8): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src\games\game\g_client.c(1616,9): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [1x] -Wimplicit-const-int-float-conversion
  - src\games\botai\ai_cmd.c(200,9): warning: implicit conversion from 'int' to 'float' changes value from 99999999 to 1.0E+8 [-Wimplicit-const-int-float-conversion]
- [2x] -Warray-bounds
  - src\games\botai\ai_cmd.c(1069,3): warning: array index 32 is past the end of the array (that has type 'char[32]') [-Warray-bounds]
  - src\games\botai\ai_team.c(548,4): warning: array index 32 is past the end of the array (that has type 'char[32]') [-Warray-bounds]
- [1x] -Wpointer-bool-conversion
  - src\games\botai\ai_dmq3.c(2121,8): warning: address of array 'classname' will always evaluate to 'true' [-Wpointer-bool-conversion]

