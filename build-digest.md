# Build digest

commit: 018e62b1d5e0

- ubuntu-latest-x64-debug-: failure
- ubuntu-latest-x64-release-: failure
- ubuntu-latest-x64-release-game,renderer: failure
- ubuntu-latest-x86-debug-: cancelled
- ubuntu-latest-x86-release-: failure
- uncrustify: success
- windows-latest-x64-debug-: failure
- windows-latest-x64-release-: failure
- windows-latest-x64-release-cgame: failure
- windows-latest-x64-release-game,renderer: failure
- windows-latest-x64-release-ui: failure
- windows-latest-x86-debug-: failure
- windows-latest-x86-release-: failure

## ubuntu-latest-x64-debug-

status: failure

errors: 256
warnings: 63 in 6 kinds

### errors

scons: *** [build/linux-x64-debug/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_net_chan.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_parse.c.o] Source `src/client/cl_parse.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_parse.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_qgl.c.o] Source `src/client/cl_qgl.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_qgl.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_scrn.c.o] Source `src/client/cl_scrn.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_scrn.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_ui.c.o] Source `src/client/cl_ui.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_ui.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/snd_adpcm.c.o] Source `src/client/snd_adpcm.c' not found, needed by target `build/linux-x64-debug/client/obj/client/snd_adpcm.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/snd_dma.c.o] Source `src/client/snd_dma.c' not found, needed by target `build/linux-x64-debug/client/obj/client/snd_dma.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/snd_mem.c.o] Source `src/client/snd_mem.c' not found, needed by target `build/linux-x64-debug/client/obj/client/snd_mem.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/snd_mix.c.o] Source `src/client/snd_mix.c' not found, needed by target `build/linux-x64-debug/client/obj/client/snd_mix.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/snd_wavelet.c.o] Source `src/client/snd_wavelet.c' not found, needed by target `build/linux-x64-debug/client/obj/client/snd_wavelet.c.o'.
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_load.c.o] Source `src/qcommon/cm_load.c' not found, needed by target `build/linux-x64-debug/client/obj/qcommon/cm_load.c.o'.
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_patch.c.o] Source `src/qcommon/cm_patch.c' not found, needed by target `build/linux-x64-debug/client/obj/qcommon/cm_patch.c.o'.
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_polylib.c.o] Source `src/qcommon/cm_polylib.c' not found, needed by target `build/linux-x64-debug/client/obj/qcommon/cm_polylib.c.o'.
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_test.c.o] Source `src/qcommon/cm_test.c' not found, needed by target `build/linux-x64-debug/client/obj/qcommon/cm_test.c.o'.
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_trace.c.o] Source `src/qcommon/cm_trace.c' not found, needed by target `build/linux-x64-debug/client/obj/qcommon/cm_trace.c.o'.
scons: *** [build/linux-x64-debug/client/obj/qcommon/cmd.c.o] Source `src/qcommon/cmd.c' not found, needed by target `build/linux-x64-debug/client/obj/qcommon/cmd.c.o'.
scons: *** [build/linux-x64-debug/client/obj/qcommon/common.c.o] Source `src/qcommon/common.c' not found, needed by target `build/linux-x64-debug/client/obj/qcommon/common.c.o'.
scons: *** [build/linux-x64-debug/client/obj/qcommon/cvar.c.o] Source `src/qcommon/cvar.c' not found, needed by target `build/linux-x64-debug/client/obj/qcommon/cvar.c.o'.
scons: *** [build/linux-x64-debug/client/obj/qcommon/files.c.o] Source `src/qcommon/files.c' not found, needed by target `build/linux-x64-debug/client/obj/qcommon/files.c.o'.
scons: *** [build/linux-x64-debug/client/obj/qcommon/huffman.c.o] Source `src/qcommon/huffman.c' not found, needed by target `build/linux-x64-debug/client/obj/qcommon/huffman.c.o'.
scons: *** [build/linux-x64-debug/client/obj/qcommon/md4.c.o] Source `src/qcommon/md4.c' not found, needed by target `build/linux-x64-debug/client/obj/qcommon/md4.c.o'.
scons: *** [build/linux-x64-debug/client/obj/qcommon/msg.c.o] Source `src/qcommon/msg.c' not found, needed by target `build/linux-x64-debug/client/obj/qcommon/msg.c.o'.
scons: *** [build/linux-x64-debug/client/obj/qcommon/net_chan.c.o] Source `src/qcommon/net_chan.c' not found, needed by target `build/linux-x64-debug/client/obj/qcommon/net_chan.c.o'.
scons: *** [build/linux-x64-debug/client/obj/qcommon/unzip.c.o] Source `src/qcommon/unzip.c' not found, needed by target `build/linux-x64-debug/client/obj/qcommon/unzip.c.o'.
scons: *** [build/linux-x64-debug/client/obj/server/sv_bot.c.o] Source `src/server/sv_bot.c' not found, needed by target `build/linux-x64-debug/client/obj/server/sv_bot.c.o'.
scons: *** [build/linux-x64-debug/client/obj/server/sv_ccmds.c.o] Source `src/server/sv_ccmds.c' not found, needed by target `build/linux-x64-debug/client/obj/server/sv_ccmds.c.o'.
scons: *** [build/linux-x64-debug/client/obj/server/sv_client.c.o] Source `src/server/sv_client.c' not found, needed by target `build/linux-x64-debug/client/obj/server/sv_client.c.o'.
scons: *** [build/linux-x64-debug/client/obj/server/sv_game.c.o] Source `src/server/sv_game.c' not found, needed by target `build/linux-x64-debug/client/obj/server/sv_game.c.o'.
scons: *** [build/linux-x64-debug/client/obj/server/sv_init.c.o] Source `src/server/sv_init.c' not found, needed by target `build/linux-x64-debug/client/obj/server/sv_init.c.o'.
scons: *** [build/linux-x64-debug/client/obj/server/sv_main.c.o] Source `src/server/sv_main.c' not found, needed by target `build/linux-x64-debug/client/obj/server/sv_main.c.o'.
scons: *** [build/linux-x64-debug/client/obj/server/sv_net_chan.c.o] Source `src/server/sv_net_chan.c' not found, needed by target `build/linux-x64-debug/client/obj/server/sv_net_chan.c.o'.
scons: *** [build/linux-x64-debug/client/obj/server/sv_snapshot.c.o] Source `src/server/sv_snapshot.c' not found, needed by target `build/linux-x64-debug/client/obj/server/sv_snapshot.c.o'.
scons: *** [build/linux-x64-debug/client/obj/server/sv_world.c.o] Source `src/server/sv_world.c' not found, needed by target `build/linux-x64-debug/client/obj/server/sv_world.c.o'.
scons: *** [build/linux-x64-debug/client/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x64-debug/client/obj/qcommon/q_shared.c.o'.
scons: *** [build/linux-x64-debug/client/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x64-debug/client/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x64-debug/client/obj/sys/unix/unix_main.c.o] Source `src/sys/unix/unix_main.c' not found, needed by target `build/linux-x64-debug/client/obj/sys/unix/unix_main.c.o'.
scons: *** [build/linux-x64-debug/client/obj/sys/unix/unix_net.c.o] Source `src/sys/unix/unix_net.c' not found, needed by target `build/linux-x64-debug/client/obj/sys/unix/unix_net.c.o'.
scons: *** [build/linux-x64-debug/client/obj/sys/unix/unix_shared.c.o] Source `src/sys/unix/unix_shared.c' not found, needed by target `build/linux-x64-debug/client/obj/sys/unix/unix_shared.c.o'.
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_common.c.o] Source `src/sys/unix/linux_common.c' not found, needed by target `build/linux-x64-debug/client/obj/sys/unix/linux_common.c.o'.
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_glimp.c.o] Source `src/sys/unix/linux_glimp.c' not found, needed by target `build/linux-x64-debug/client/obj/sys/unix/linux_glimp.c.o'.
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_joystick.c.o] Source `src/sys/unix/linux_joystick.c' not found, needed by target `build/linux-x64-debug/client/obj/sys/unix/linux_joystick.c.o'.
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_snd.c.o] Source `src/sys/unix/linux_snd.c' not found, needed by target `build/linux-x64-debug/client/obj/sys/unix/linux_snd.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_bspq3.c.o] Source `src/games/botlib/be_aas_bspq3.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_aas_bspq3.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_cluster.c.o] Source `src/games/botlib/be_aas_cluster.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_aas_cluster.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_debug.c.o] Source `src/games/botlib/be_aas_debug.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_aas_debug.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_entity.c.o] Source `src/games/botlib/be_aas_entity.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_aas_entity.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_file.c.o] Source `src/games/botlib/be_aas_file.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_aas_file.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_main.c.o] Source `src/games/botlib/be_aas_main.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_aas_main.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_move.c.o] Source `src/games/botlib/be_aas_move.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_aas_move.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_optimize.c.o] Source `src/games/botlib/be_aas_optimize.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_aas_optimize.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_reach.c.o] Source `src/games/botlib/be_aas_reach.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_aas_reach.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_route.c.o] Source `src/games/botlib/be_aas_route.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_aas_route.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_routealt.c.o] Source `src/games/botlib/be_aas_routealt.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_aas_routealt.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_routetable.c.o] Source `src/games/botlib/be_aas_routetable.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_aas_routetable.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_aas_sample.c.o] Source `src/games/botlib/be_aas_sample.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_aas_sample.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_char.c.o] Source `src/games/botlib/be_ai_char.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_ai_char.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_chat.c.o] Source `src/games/botlib/be_ai_chat.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_ai_chat.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_gen.c.o] Source `src/games/botlib/be_ai_gen.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_ai_gen.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_goal.c.o] Source `src/games/botlib/be_ai_goal.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_ai_goal.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_move.c.o] Source `src/games/botlib/be_ai_move.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_ai_move.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_weap.c.o] Source `src/games/botlib/be_ai_weap.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_ai_weap.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_weight.c.o] Source `src/games/botlib/be_ai_weight.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_ai_weight.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ea.c.o] Source `src/games/botlib/be_ea.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_ea.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_interface.c.o] Source `src/games/botlib/be_interface.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/be_interface.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_crc.c.o] Source `src/games/botlib/l_crc.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/l_crc.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_libvar.c.o] Source `src/games/botlib/l_libvar.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/l_libvar.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_log.c.o] Source `src/games/botlib/l_log.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/l_log.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_memory.c.o] Source `src/games/botlib/l_memory.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/l_memory.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_precomp.c.o] Source `src/games/botlib/l_precomp.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/l_precomp.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_script.c.o] Source `src/games/botlib/l_script.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/l_script.c.o'.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/l_struct.c.o] Source `src/games/botlib/l_struct.c' not found, needed by target `build/linux-x64-debug/client/obj/games/botlib/l_struct.c.o'.
scons: *** [build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o] Source `src/tools/extractfuncs/extractfuncs.c' not found, needed by target `build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o'.
scons: *** [build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o] Source `src/tools/extractfuncs/l_log.c' not found, needed by target `build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o'.
scons: *** [build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o] Source `src/tools/extractfuncs/l_memory.c' not found, needed by target `build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o'.
scons: *** [build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o] Source `src/tools/extractfuncs/l_precomp.c' not found, needed by target `build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o'.
scons: *** [build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_script.c.o] Source `src/tools/extractfuncs/l_script.c' not found, needed by target `build/linux-x64-debug/extractfuncs_tool/obj/tools/extractfuncs/l_script.c.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Heap.cpp.o] Source `src/idlib/Heap.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/Heap.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Str.cpp.o] Source `src/idlib/Str.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/Str.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Lib.cpp.o] Source `src/idlib/Lib.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/Lib.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Token.cpp.o] Source `src/idlib/Token.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/Token.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Lexer.cpp.o] Source `src/idlib/Lexer.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/Lexer.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/Parser.cpp.o] Source `src/idlib/Parser.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/Parser.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/sys/sys_assert.cpp.o] Source `src/idlib/sys/sys_assert.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/sys/sys_assert.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/containers/HashIndex.cpp.o] Source `src/idlib/containers/HashIndex.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/containers/HashIndex.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Math.cpp.o] Source `src/idlib/math/Math.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/math/Math.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Vector.cpp.o] Source `src/idlib/math/Vector.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/math/Vector.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Matrix.cpp.o] Source `src/idlib/math/Matrix.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/math/Matrix.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Angles.cpp.o] Source `src/idlib/math/Angles.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/math/Angles.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Quat.cpp.o] Source `src/idlib/math/Quat.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/math/Quat.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Plane.cpp.o] Source `src/idlib/math/Plane.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/math/Plane.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/Rotation.cpp.o] Source `src/idlib/math/Rotation.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/math/Rotation.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/VecX.cpp.o] Source `src/idlib/math/VecX.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/math/VecX.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/math/MatX.cpp.o] Source `src/idlib/math/MatX.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/math/MatX.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/bv/Bounds.cpp.o] Source `src/idlib/bv/Bounds.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/bv/Bounds.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/bv/Box.cpp.o] Source `src/idlib/bv/Box.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/bv/Box.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/bv/Sphere.cpp.o] Source `src/idlib/bv/Sphere.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/bv/Sphere.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/geometry/DrawVert.cpp.o] Source `src/idlib/geometry/DrawVert.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/geometry/DrawVert.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/geometry/JointTransform.cpp.o] Source `src/idlib/geometry/JointTransform.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/geometry/JointTransform.cpp.o'.
scons: *** [build/linux-x64-debug/idlib/obj/idlib/geometry/RenderMatrix.cpp.o] Source `src/idlib/geometry/RenderMatrix.cpp' not found, needed by target `build/linux-x64-debug/idlib/obj/idlib/geometry/RenderMatrix.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o] Source `src/renderer-bfg/RenderWorld.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o] Source `src/renderer-bfg/RenderEntity.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/ScreenRect.cpp.o] Source `src/renderer-bfg/ScreenRect.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/ScreenRect.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o] Source `src/renderer-bfg/RenderSystem.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/GLContext.cpp.o] Source `src/renderer-bfg/GLContext.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/GLContext.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/CVarSystem.cpp.o] Source `src/renderer-bfg/CVarSystem.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/CVarSystem.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/GLMatrix.cpp.o] Source `src/renderer-bfg/GLMatrix.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/GLMatrix.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o] Source `src/renderer-bfg/RenderLog.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o] Source `src/renderer-bfg/RenderProgs.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o] Source `src/renderer-bfg/RenderProgs_GLSL.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Q3Patch.cpp.o] Source `src/renderer-bfg/Q3Patch.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Q3Patch.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderWorld_load.cpp.o] Source `src/renderer-bfg/RenderWorld_load.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderWorld_load.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Model.cpp.o] Source `src/renderer-bfg/Model.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Model.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/ModelManager.cpp.o] Source `src/renderer-bfg/ModelManager.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/ModelManager.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Model_md3.cpp.o] Source `src/renderer-bfg/Model_md3.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Model_md3.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Model_mdc.cpp.o] Source `src/renderer-bfg/Model_mdc.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Model_mdc.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Model_mds.cpp.o] Source `src/renderer-bfg/Model_mds.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Model_mds.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Material.cpp.o] Source `src/renderer-bfg/Material.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Material.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o] Source `src/renderer-bfg/MaterialManager.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Source `src/renderer-bfg/Material_shader.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o] Source `src/renderer-bfg/Shadow.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Backend.cpp.o] Source `src/renderer-bfg/Backend.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Backend.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Tess.cpp.o] Source `src/renderer-bfg/Tess.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Tess.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Tess_calc.cpp.o] Source `src/renderer-bfg/Tess_calc.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Tess_calc.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Lighting.cpp.o] Source `src/renderer-bfg/Lighting.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Lighting.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Surface.cpp.o] Source `src/renderer-bfg/Surface.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Surface.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/ImageManager.cpp.o] Source `src/renderer-bfg/ImageManager.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/ImageManager.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Image_files.cpp.o] Source `src/renderer-bfg/Image_files.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Image_files.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Image_intrinsic.cpp.o] Source `src/renderer-bfg/Image_intrinsic.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Image_intrinsic.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Image_process.cpp.o] Source `src/renderer-bfg/Image_process.cpp' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Image_process.cpp.o'.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/third-party/glad/src/gl.c.o] Source `src/third-party/glad/src/gl.c' not found, needed by target `build/linux-x64-debug/renderer-bfg/obj/third-party/glad/src/gl.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/ai_cast.c.o] Source `src/games/game/ai_cast.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/ai_cast.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/ai_cast_characters.c.o] Source `src/games/game/ai_cast_characters.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/ai_cast_characters.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/ai_cast_debug.c.o] Source `src/games/game/ai_cast_debug.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/ai_cast_debug.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/ai_cast_events.c.o] Source `src/games/game/ai_cast_events.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/ai_cast_events.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/ai_cast_fight.c.o] Source `src/games/game/ai_cast_fight.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/ai_cast_fight.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/ai_cast_func_attack.c.o] Source `src/games/game/ai_cast_func_attack.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/ai_cast_func_attack.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/ai_cast_func_boss1.c.o] Source `src/games/game/ai_cast_func_boss1.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/ai_cast_func_boss1.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/ai_cast_funcs.c.o] Source `src/games/game/ai_cast_funcs.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/ai_cast_funcs.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/ai_cast_script.c.o] Source `src/games/game/ai_cast_script.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/ai_cast_script.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/ai_cast_script_actions.c.o] Source `src/games/game/ai_cast_script_actions.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/ai_cast_script_actions.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/ai_cast_script_ents.c.o] Source `src/games/game/ai_cast_script_ents.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/ai_cast_script_ents.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/ai_cast_sight.c.o] Source `src/games/game/ai_cast_sight.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/ai_cast_sight.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/ai_cast_think.c.o] Source `src/games/game/ai_cast_think.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/ai_cast_think.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/bg_animation.c.o] Source `src/games/game/bg_animation.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/bg_animation.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/bg_misc.c.o] Source `src/games/game/bg_misc.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/bg_misc.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/bg_pmove.c.o] Source `src/games/game/bg_pmove.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/bg_pmove.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/bg_slidemove.c.o] Source `src/games/game/bg_slidemove.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/bg_slidemove.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_active.c.o] Source `src/games/game/g_active.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_active.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_alarm.c.o] Source `src/games/game/g_alarm.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_alarm.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_bot.c.o] Source `src/games/game/g_bot.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_bot.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_client.c.o] Source `src/games/game/g_client.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_client.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_cmds.c.o] Source `src/games/game/g_cmds.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_cmds.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_combat.c.o] Source `src/games/game/g_combat.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_combat.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_items.c.o] Source `src/games/game/g_items.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_items.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_main.c.o] Source `src/games/game/g_main.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_main.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_mem.c.o] Source `src/games/game/g_mem.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_mem.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_misc.c.o] Source `src/games/game/g_misc.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_misc.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_missile.c.o] Source `src/games/game/g_missile.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_missile.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_mover.c.o] Source `src/games/game/g_mover.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_mover.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_props.c.o] Source `src/games/game/g_props.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_props.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_save.c.o] Source `src/games/game/g_save.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_save.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_script.c.o] Source `src/games/game/g_script.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_script.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_script_actions.c.o] Source `src/games/game/g_script_actions.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_script_actions.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_session.c.o] Source `src/games/game/g_session.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_session.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_spawn.c.o] Source `src/games/game/g_spawn.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_spawn.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_svcmds.c.o] Source `src/games/game/g_svcmds.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_svcmds.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_syscalls.c.o] Source `src/games/game/g_syscalls.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_syscalls.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_target.c.o] Source `src/games/game/g_target.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_target.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_team.c.o] Source `src/games/game/g_team.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_team.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_tramcar.c.o] Source `src/games/game/g_tramcar.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_tramcar.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_trigger.c.o] Source `src/games/game/g_trigger.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_trigger.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_utils.c.o] Source `src/games/game/g_utils.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_utils.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_weapon.c.o] Source `src/games/game/g_weapon.c' not found, needed by target `build/linux-x64-debug/game/obj/games/game/g_weapon.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/botai/ai_chat.c.o] Source `src/games/botai/ai_chat.c' not found, needed by target `build/linux-x64-debug/game/obj/games/botai/ai_chat.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/botai/ai_cmd.c.o] Source `src/games/botai/ai_cmd.c' not found, needed by target `build/linux-x64-debug/game/obj/games/botai/ai_cmd.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/botai/ai_dmnet.c.o] Source `src/games/botai/ai_dmnet.c' not found, needed by target `build/linux-x64-debug/game/obj/games/botai/ai_dmnet.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/botai/ai_dmq3.c.o] Source `src/games/botai/ai_dmq3.c' not found, needed by target `build/linux-x64-debug/game/obj/games/botai/ai_dmq3.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/botai/ai_main.c.o] Source `src/games/botai/ai_main.c' not found, needed by target `build/linux-x64-debug/game/obj/games/botai/ai_main.c.o'.
scons: *** [build/linux-x64-debug/game/obj/games/botai/ai_team.c.o] Source `src/games/botai/ai_team.c' not found, needed by target `build/linux-x64-debug/game/obj/games/botai/ai_team.c.o'.
scons: *** [build/linux-x64-debug/game/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x64-debug/game/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x64-debug/game/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x64-debug/game/obj/qcommon/q_shared.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/game/bg_animation.c.o] Source `src/games/game/bg_animation.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/game/bg_animation.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/game/bg_misc.c.o] Source `src/games/game/bg_misc.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/game/bg_misc.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/game/bg_pmove.c.o] Source `src/games/game/bg_pmove.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/game/bg_pmove.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/game/bg_slidemove.c.o] Source `src/games/game/bg_slidemove.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/game/bg_slidemove.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_consolecmds.c.o] Source `src/games/cgame/cg_consolecmds.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_consolecmds.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_draw.c.o] Source `src/games/cgame/cg_draw.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_draw.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_drawtools.c.o] Source `src/games/cgame/cg_drawtools.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_drawtools.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_effects.c.o] Source `src/games/cgame/cg_effects.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_effects.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_ents.c.o] Source `src/games/cgame/cg_ents.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_ents.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_event.c.o] Source `src/games/cgame/cg_event.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_event.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_flamethrower.c.o] Source `src/games/cgame/cg_flamethrower.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_flamethrower.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_info.c.o] Source `src/games/cgame/cg_info.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_info.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_localents.c.o] Source `src/games/cgame/cg_localents.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_localents.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_main.c.o] Source `src/games/cgame/cg_main.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_main.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_marks.c.o] Source `src/games/cgame/cg_marks.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_marks.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_newDraw.c.o] Source `src/games/cgame/cg_newDraw.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_newDraw.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_particles.c.o] Source `src/games/cgame/cg_particles.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_particles.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_players.c.o] Source `src/games/cgame/cg_players.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_players.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_playerstate.c.o] Source `src/games/cgame/cg_playerstate.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_playerstate.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_predict.c.o] Source `src/games/cgame/cg_predict.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_predict.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_scoreboard.c.o] Source `src/games/cgame/cg_scoreboard.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_scoreboard.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_servercmds.c.o] Source `src/games/cgame/cg_servercmds.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_servercmds.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_snapshot.c.o] Source `src/games/cgame/cg_snapshot.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_snapshot.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_sound.c.o] Source `src/games/cgame/cg_sound.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_sound.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_syscalls.c.o] Source `src/games/cgame/cg_syscalls.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_syscalls.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_trails.c.o] Source `src/games/cgame/cg_trails.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_trails.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_view.c.o] Source `src/games/cgame/cg_view.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_view.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_weapons.c.o] Source `src/games/cgame/cg_weapons.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/cgame/cg_weapons.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/games/ui/ui_shared.c.o] Source `src/games/ui/ui_shared.c' not found, needed by target `build/linux-x64-debug/cgame/obj/games/ui/ui_shared.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x64-debug/cgame/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x64-debug/cgame/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x64-debug/cgame/obj/qcommon/q_shared.c.o'.
scons: *** [build/linux-x64-debug/ui/obj/games/game/bg_misc.c.o] Source `src/games/game/bg_misc.c' not found, needed by target `build/linux-x64-debug/ui/obj/games/game/bg_misc.c.o'.
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_atoms.c.o] Source `src/games/ui/ui_atoms.c' not found, needed by target `build/linux-x64-debug/ui/obj/games/ui/ui_atoms.c.o'.
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_gameinfo.c.o] Source `src/games/ui/ui_gameinfo.c' not found, needed by target `build/linux-x64-debug/ui/obj/games/ui/ui_gameinfo.c.o'.
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_main.c.o] Source `src/games/ui/ui_main.c' not found, needed by target `build/linux-x64-debug/ui/obj/games/ui/ui_main.c.o'.
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_players.c.o] Source `src/games/ui/ui_players.c' not found, needed by target `build/linux-x64-debug/ui/obj/games/ui/ui_players.c.o'.
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_shared.c.o] Source `src/games/ui/ui_shared.c' not found, needed by target `build/linux-x64-debug/ui/obj/games/ui/ui_shared.c.o'.
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_syscalls.c.o] Source `src/games/ui/ui_syscalls.c' not found, needed by target `build/linux-x64-debug/ui/obj/games/ui/ui_syscalls.c.o'.
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_util.c.o] Source `src/games/ui/ui_util.c' not found, needed by target `build/linux-x64-debug/ui/obj/games/ui/ui_util.c.o'.
scons: *** [build/linux-x64-debug/ui/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x64-debug/ui/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x64-debug/ui/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x64-debug/ui/obj/qcommon/q_shared.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_animation.c.o] Source `src/renderer/tr_animation.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_animation.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_backend.c.o] Source `src/renderer/tr_backend.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_backend.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_bsp.c.o] Source `src/renderer/tr_bsp.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_bsp.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_cmds.c.o] Source `src/renderer/tr_cmds.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_cmds.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_cmesh.c.o] Source `src/renderer/tr_cmesh.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_cmesh.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_curve.c.o] Source `src/renderer/tr_curve.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_curve.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_flares.c.o] Source `src/renderer/tr_flares.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_flares.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_font.c.o] Source `src/renderer/tr_font.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_font.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_image.c.o] Source `src/renderer/tr_image.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_image.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_init.c.o] Source `src/renderer/tr_init.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_init.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_light.c.o] Source `src/renderer/tr_light.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_light.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_main.c.o] Source `src/renderer/tr_main.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_main.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_marks.c.o] Source `src/renderer/tr_marks.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_marks.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_mesh.c.o] Source `src/renderer/tr_mesh.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_mesh.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_model.c.o] Source `src/renderer/tr_model.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_model.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_noise.c.o] Source `src/renderer/tr_noise.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_noise.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_scene.c.o] Source `src/renderer/tr_scene.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_scene.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_shade.c.o] Source `src/renderer/tr_shade.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_shade.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_shade_calc.c.o] Source `src/renderer/tr_shade_calc.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_shade_calc.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_shader.c.o] Source `src/renderer/tr_shader.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_shader.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_shadows.c.o] Source `src/renderer/tr_shadows.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_shadows.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_sky.c.o] Source `src/renderer/tr_sky.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_sky.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_surface.c.o] Source `src/renderer/tr_surface.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_surface.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_world.c.o] Source `src/renderer/tr_world.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_world.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_module.c.o] Source `src/renderer/tr_module.c' not found, needed by target `build/linux-x64-debug/renderer/obj/renderer/tr_module.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x64-debug/renderer/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x64-debug/renderer/obj/qcommon/q_shared.c.o'.
scons: *** [build/linux-x64-debug/renderer/obj/third-party/glad/src/gl.c.o] Source `src/third-party/glad/src/gl.c' not found, needed by target `build/linux-x64-debug/renderer/obj/third-party/glad/src/gl.c.o'.

### failure context

- build/linux-x64-debug/client/obj/client/cl_cgame.c.o

```
Unpacking libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Selecting previously unselected package libxxf86dga-dev:amd64.
Preparing to unpack .../libxxf86dga-dev_2%3a1.1.5-1build2_amd64v3.deb ...
Unpacking libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Selecting previously unselected package libxxf86vm-dev:amd64.
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-debug/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cgame.c.o'.
```

- build/linux-x64-debug/client/obj/client/cl_cin.c.o

```
Selecting previously unselected package libxxf86dga-dev:amd64.
Preparing to unpack .../libxxf86dga-dev_2%3a1.1.5-1build2_amd64v3.deb ...
Unpacking libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Selecting previously unselected package libxxf86vm-dev:amd64.
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-debug/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cin.c.o'.
```

- build/linux-x64-debug/client/obj/client/cl_console.c.o

```
Preparing to unpack .../libxxf86dga-dev_2%3a1.1.5-1build2_amd64v3.deb ...
Unpacking libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Selecting previously unselected package libxxf86vm-dev:amd64.
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-debug/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_console.c.o'.
```

- build/linux-x64-debug/client/obj/client/cl_input.c.o

```
Unpacking libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Selecting previously unselected package libxxf86vm-dev:amd64.
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-debug/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_input.c.o'.
```

- build/linux-x64-debug/client/obj/client/cl_keys.c.o

```
Selecting previously unselected package libxxf86vm-dev:amd64.
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-debug/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_keys.c.o'.
```

- build/linux-x64-debug/client/obj/client/cl_main.c.o

```
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-debug/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_main.c.o'.
```

- build/linux-x64-debug/client/obj/client/cl_net_chan.c.o

```
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-debug/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_net_chan.c.o'.
```

- build/linux-x64-debug/client/obj/client/cl_parse.c.o

```
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-debug/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_net_chan.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_parse.c.o] Source `src/client/cl_parse.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_parse.c.o'.
```

- build/linux-x64-debug/client/obj/client/cl_qgl.c.o

```
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-debug/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_net_chan.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_parse.c.o] Source `src/client/cl_parse.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_parse.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_qgl.c.o] Source `src/client/cl_qgl.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_qgl.c.o'.
```

- build/linux-x64-debug/client/obj/client/cl_scrn.c.o

```
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-debug/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_net_chan.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_parse.c.o] Source `src/client/cl_parse.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_parse.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_qgl.c.o] Source `src/client/cl_qgl.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_qgl.c.o'.
scons: *** [build/linux-x64-debug/client/obj/client/cl_scrn.c.o] Source `src/client/cl_scrn.c' not found, needed by target `build/linux-x64-debug/client/obj/client/cl_scrn.c.o'.
```


### warning kinds

- [33x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings
  - src/splines/q_shared.cpp:757:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/q_shared.cpp:774:12: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/q_shared.cpp:799:9: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:471:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:475:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:479:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:552:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:556:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:565:38: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:568:25: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:853:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:856:36: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:859:41: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:960:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:962:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:964:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:966:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1244:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1247:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1250:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1253:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1256:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1266:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1269:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1272:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1275:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1279:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1286:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1289:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1296:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1299:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1301:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1308:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
- [7x] -unused-but-set-variable
  - src/splines/util_str.cpp:468:7: warning: variable 'ch' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:476:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:481:14: warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:483:14: warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1126:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1171:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1220:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
- [6x] -logical-op-parentheses
  - src/splines/math_quaternion.h:167:62: warning: '&&' within '||' [-Wlogical-op-parentheses]
- [6x] -sizeof-array-argument
  - src/splines/math_matrix.h:94:26: warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
- [6x] -sizeof-pointer-memaccess
  - src/splines/math_matrix.h:94:28: warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
- [5x] -macro-redefined
  - src/splines/q_splineshared.h:208:9: warning: 'CPUSTRING' macro redefined [-Wmacro-redefined]

## ubuntu-latest-x64-release-

status: failure

errors: 256
warnings: 65 in 7 kinds

### errors

scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_net_chan.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_parse.c.o] Source `src/client/cl_parse.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_parse.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_qgl.c.o] Source `src/client/cl_qgl.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_qgl.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_scrn.c.o] Source `src/client/cl_scrn.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_scrn.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_ui.c.o] Source `src/client/cl_ui.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_ui.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/snd_adpcm.c.o] Source `src/client/snd_adpcm.c' not found, needed by target `build/linux-x64-release/client/obj/client/snd_adpcm.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/snd_dma.c.o] Source `src/client/snd_dma.c' not found, needed by target `build/linux-x64-release/client/obj/client/snd_dma.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/snd_mem.c.o] Source `src/client/snd_mem.c' not found, needed by target `build/linux-x64-release/client/obj/client/snd_mem.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/snd_mix.c.o] Source `src/client/snd_mix.c' not found, needed by target `build/linux-x64-release/client/obj/client/snd_mix.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/snd_wavelet.c.o] Source `src/client/snd_wavelet.c' not found, needed by target `build/linux-x64-release/client/obj/client/snd_wavelet.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_load.c.o] Source `src/qcommon/cm_load.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/cm_load.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_patch.c.o] Source `src/qcommon/cm_patch.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/cm_patch.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_polylib.c.o] Source `src/qcommon/cm_polylib.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/cm_polylib.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_test.c.o] Source `src/qcommon/cm_test.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/cm_test.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_trace.c.o] Source `src/qcommon/cm_trace.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/cm_trace.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/cmd.c.o] Source `src/qcommon/cmd.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/cmd.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/common.c.o] Source `src/qcommon/common.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/common.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/cvar.c.o] Source `src/qcommon/cvar.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/cvar.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/files.c.o] Source `src/qcommon/files.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/files.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/huffman.c.o] Source `src/qcommon/huffman.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/huffman.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/md4.c.o] Source `src/qcommon/md4.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/md4.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/msg.c.o] Source `src/qcommon/msg.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/msg.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/net_chan.c.o] Source `src/qcommon/net_chan.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/net_chan.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/unzip.c.o] Source `src/qcommon/unzip.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/unzip.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_bot.c.o] Source `src/server/sv_bot.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_bot.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_ccmds.c.o] Source `src/server/sv_ccmds.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_ccmds.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_client.c.o] Source `src/server/sv_client.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_client.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_game.c.o] Source `src/server/sv_game.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_game.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_init.c.o] Source `src/server/sv_init.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_init.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_main.c.o] Source `src/server/sv_main.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_main.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_net_chan.c.o] Source `src/server/sv_net_chan.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_net_chan.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_snapshot.c.o] Source `src/server/sv_snapshot.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_snapshot.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_world.c.o] Source `src/server/sv_world.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_world.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/q_shared.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x64-release/client/obj/sys/unix/unix_main.c.o] Source `src/sys/unix/unix_main.c' not found, needed by target `build/linux-x64-release/client/obj/sys/unix/unix_main.c.o'.
scons: *** [build/linux-x64-release/client/obj/sys/unix/unix_net.c.o] Source `src/sys/unix/unix_net.c' not found, needed by target `build/linux-x64-release/client/obj/sys/unix/unix_net.c.o'.
scons: *** [build/linux-x64-release/client/obj/sys/unix/unix_shared.c.o] Source `src/sys/unix/unix_shared.c' not found, needed by target `build/linux-x64-release/client/obj/sys/unix/unix_shared.c.o'.
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_common.c.o] Source `src/sys/unix/linux_common.c' not found, needed by target `build/linux-x64-release/client/obj/sys/unix/linux_common.c.o'.
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.c.o] Source `src/sys/unix/linux_glimp.c' not found, needed by target `build/linux-x64-release/client/obj/sys/unix/linux_glimp.c.o'.
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_joystick.c.o] Source `src/sys/unix/linux_joystick.c' not found, needed by target `build/linux-x64-release/client/obj/sys/unix/linux_joystick.c.o'.
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_snd.c.o] Source `src/sys/unix/linux_snd.c' not found, needed by target `build/linux-x64-release/client/obj/sys/unix/linux_snd.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_bspq3.c.o] Source `src/games/botlib/be_aas_bspq3.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_bspq3.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_cluster.c.o] Source `src/games/botlib/be_aas_cluster.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_cluster.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_debug.c.o] Source `src/games/botlib/be_aas_debug.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_debug.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_entity.c.o] Source `src/games/botlib/be_aas_entity.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_entity.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_file.c.o] Source `src/games/botlib/be_aas_file.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_file.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_main.c.o] Source `src/games/botlib/be_aas_main.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_main.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_move.c.o] Source `src/games/botlib/be_aas_move.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_move.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_optimize.c.o] Source `src/games/botlib/be_aas_optimize.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_optimize.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_reach.c.o] Source `src/games/botlib/be_aas_reach.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_reach.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_route.c.o] Source `src/games/botlib/be_aas_route.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_route.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_routealt.c.o] Source `src/games/botlib/be_aas_routealt.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_routealt.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_routetable.c.o] Source `src/games/botlib/be_aas_routetable.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_routetable.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_sample.c.o] Source `src/games/botlib/be_aas_sample.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_sample.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_char.c.o] Source `src/games/botlib/be_ai_char.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_ai_char.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_chat.c.o] Source `src/games/botlib/be_ai_chat.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_ai_chat.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_gen.c.o] Source `src/games/botlib/be_ai_gen.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_ai_gen.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_goal.c.o] Source `src/games/botlib/be_ai_goal.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_ai_goal.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_move.c.o] Source `src/games/botlib/be_ai_move.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_ai_move.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_weap.c.o] Source `src/games/botlib/be_ai_weap.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_ai_weap.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_weight.c.o] Source `src/games/botlib/be_ai_weight.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_ai_weight.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ea.c.o] Source `src/games/botlib/be_ea.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_ea.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_interface.c.o] Source `src/games/botlib/be_interface.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_interface.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_crc.c.o] Source `src/games/botlib/l_crc.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/l_crc.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_libvar.c.o] Source `src/games/botlib/l_libvar.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/l_libvar.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_log.c.o] Source `src/games/botlib/l_log.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/l_log.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_memory.c.o] Source `src/games/botlib/l_memory.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/l_memory.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_precomp.c.o] Source `src/games/botlib/l_precomp.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/l_precomp.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_script.c.o] Source `src/games/botlib/l_script.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/l_script.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_struct.c.o] Source `src/games/botlib/l_struct.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/l_struct.c.o'.
scons: *** [build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o] Source `src/tools/extractfuncs/extractfuncs.c' not found, needed by target `build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o'.
scons: *** [build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o] Source `src/tools/extractfuncs/l_log.c' not found, needed by target `build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o'.
scons: *** [build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o] Source `src/tools/extractfuncs/l_memory.c' not found, needed by target `build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o'.
scons: *** [build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o] Source `src/tools/extractfuncs/l_precomp.c' not found, needed by target `build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o'.
scons: *** [build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_script.c.o] Source `src/tools/extractfuncs/l_script.c' not found, needed by target `build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_script.c.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o] Source `src/idlib/Heap.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Str.cpp.o] Source `src/idlib/Str.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/Str.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Lib.cpp.o] Source `src/idlib/Lib.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/Lib.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Token.cpp.o] Source `src/idlib/Token.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/Token.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Lexer.cpp.o] Source `src/idlib/Lexer.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/Lexer.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Parser.cpp.o] Source `src/idlib/Parser.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/Parser.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/sys/sys_assert.cpp.o] Source `src/idlib/sys/sys_assert.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/sys/sys_assert.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/containers/HashIndex.cpp.o] Source `src/idlib/containers/HashIndex.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/containers/HashIndex.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Math.cpp.o] Source `src/idlib/math/Math.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/Math.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Vector.cpp.o] Source `src/idlib/math/Vector.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/Vector.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Matrix.cpp.o] Source `src/idlib/math/Matrix.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/Matrix.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Angles.cpp.o] Source `src/idlib/math/Angles.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/Angles.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Quat.cpp.o] Source `src/idlib/math/Quat.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/Quat.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Plane.cpp.o] Source `src/idlib/math/Plane.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/Plane.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Rotation.cpp.o] Source `src/idlib/math/Rotation.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/Rotation.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/VecX.cpp.o] Source `src/idlib/math/VecX.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/VecX.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/MatX.cpp.o] Source `src/idlib/math/MatX.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/MatX.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/bv/Bounds.cpp.o] Source `src/idlib/bv/Bounds.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/bv/Bounds.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/bv/Box.cpp.o] Source `src/idlib/bv/Box.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/bv/Box.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/bv/Sphere.cpp.o] Source `src/idlib/bv/Sphere.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/bv/Sphere.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/geometry/DrawVert.cpp.o] Source `src/idlib/geometry/DrawVert.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/geometry/DrawVert.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/geometry/JointTransform.cpp.o] Source `src/idlib/geometry/JointTransform.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/geometry/JointTransform.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/geometry/RenderMatrix.cpp.o] Source `src/idlib/geometry/RenderMatrix.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/geometry/RenderMatrix.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o] Source `src/renderer-bfg/RenderWorld.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o] Source `src/renderer-bfg/RenderEntity.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ScreenRect.cpp.o] Source `src/renderer-bfg/ScreenRect.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ScreenRect.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o] Source `src/renderer-bfg/RenderSystem.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/GLContext.cpp.o] Source `src/renderer-bfg/GLContext.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/GLContext.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/CVarSystem.cpp.o] Source `src/renderer-bfg/CVarSystem.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/CVarSystem.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/GLMatrix.cpp.o] Source `src/renderer-bfg/GLMatrix.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/GLMatrix.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o] Source `src/renderer-bfg/RenderLog.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o] Source `src/renderer-bfg/RenderProgs.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o] Source `src/renderer-bfg/RenderProgs_GLSL.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Q3Patch.cpp.o] Source `src/renderer-bfg/Q3Patch.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Q3Patch.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderWorld_load.cpp.o] Source `src/renderer-bfg/RenderWorld_load.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderWorld_load.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model.cpp.o] Source `src/renderer-bfg/Model.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ModelManager.cpp.o] Source `src/renderer-bfg/ModelManager.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ModelManager.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_md3.cpp.o] Source `src/renderer-bfg/Model_md3.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_md3.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_mdc.cpp.o] Source `src/renderer-bfg/Model_mdc.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_mdc.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_mds.cpp.o] Source `src/renderer-bfg/Model_mds.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_mds.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material.cpp.o] Source `src/renderer-bfg/Material.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o] Source `src/renderer-bfg/MaterialManager.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Source `src/renderer-bfg/Material_shader.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o] Source `src/renderer-bfg/Shadow.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Backend.cpp.o] Source `src/renderer-bfg/Backend.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Backend.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Tess.cpp.o] Source `src/renderer-bfg/Tess.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Tess.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Tess_calc.cpp.o] Source `src/renderer-bfg/Tess_calc.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Tess_calc.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Lighting.cpp.o] Source `src/renderer-bfg/Lighting.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Lighting.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Surface.cpp.o] Source `src/renderer-bfg/Surface.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Surface.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ImageManager.cpp.o] Source `src/renderer-bfg/ImageManager.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ImageManager.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_files.cpp.o] Source `src/renderer-bfg/Image_files.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_files.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_intrinsic.cpp.o] Source `src/renderer-bfg/Image_intrinsic.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_intrinsic.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_process.cpp.o] Source `src/renderer-bfg/Image_process.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_process.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/third-party/glad/src/gl.c.o] Source `src/third-party/glad/src/gl.c' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/third-party/glad/src/gl.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast.c.o] Source `src/games/game/ai_cast.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_characters.c.o] Source `src/games/game/ai_cast_characters.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_characters.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_debug.c.o] Source `src/games/game/ai_cast_debug.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_debug.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_events.c.o] Source `src/games/game/ai_cast_events.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_events.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_fight.c.o] Source `src/games/game/ai_cast_fight.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_fight.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_func_attack.c.o] Source `src/games/game/ai_cast_func_attack.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_func_attack.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_func_boss1.c.o] Source `src/games/game/ai_cast_func_boss1.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_func_boss1.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_funcs.c.o] Source `src/games/game/ai_cast_funcs.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_funcs.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_script.c.o] Source `src/games/game/ai_cast_script.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_script.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_script_actions.c.o] Source `src/games/game/ai_cast_script_actions.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_script_actions.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_script_ents.c.o] Source `src/games/game/ai_cast_script_ents.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_script_ents.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_sight.c.o] Source `src/games/game/ai_cast_sight.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_sight.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_think.c.o] Source `src/games/game/ai_cast_think.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_think.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/bg_animation.c.o] Source `src/games/game/bg_animation.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/bg_animation.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/bg_misc.c.o] Source `src/games/game/bg_misc.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/bg_misc.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/bg_pmove.c.o] Source `src/games/game/bg_pmove.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/bg_pmove.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/bg_slidemove.c.o] Source `src/games/game/bg_slidemove.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/bg_slidemove.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_active.c.o] Source `src/games/game/g_active.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_active.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_alarm.c.o] Source `src/games/game/g_alarm.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_alarm.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_bot.c.o] Source `src/games/game/g_bot.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_bot.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_client.c.o] Source `src/games/game/g_client.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_client.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_cmds.c.o] Source `src/games/game/g_cmds.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_cmds.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_combat.c.o] Source `src/games/game/g_combat.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_combat.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_items.c.o] Source `src/games/game/g_items.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_items.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_main.c.o] Source `src/games/game/g_main.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_main.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_mem.c.o] Source `src/games/game/g_mem.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_mem.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_misc.c.o] Source `src/games/game/g_misc.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_misc.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_missile.c.o] Source `src/games/game/g_missile.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_missile.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_mover.c.o] Source `src/games/game/g_mover.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_mover.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_props.c.o] Source `src/games/game/g_props.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_props.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_save.c.o] Source `src/games/game/g_save.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_save.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_script.c.o] Source `src/games/game/g_script.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_script.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_script_actions.c.o] Source `src/games/game/g_script_actions.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_script_actions.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_session.c.o] Source `src/games/game/g_session.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_session.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_spawn.c.o] Source `src/games/game/g_spawn.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_spawn.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_svcmds.c.o] Source `src/games/game/g_svcmds.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_svcmds.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_syscalls.c.o] Source `src/games/game/g_syscalls.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_syscalls.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_target.c.o] Source `src/games/game/g_target.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_target.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_team.c.o] Source `src/games/game/g_team.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_team.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_tramcar.c.o] Source `src/games/game/g_tramcar.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_tramcar.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_trigger.c.o] Source `src/games/game/g_trigger.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_trigger.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_utils.c.o] Source `src/games/game/g_utils.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_utils.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_weapon.c.o] Source `src/games/game/g_weapon.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_weapon.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/botai/ai_chat.c.o] Source `src/games/botai/ai_chat.c' not found, needed by target `build/linux-x64-release/game/obj/games/botai/ai_chat.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/botai/ai_cmd.c.o] Source `src/games/botai/ai_cmd.c' not found, needed by target `build/linux-x64-release/game/obj/games/botai/ai_cmd.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/botai/ai_dmnet.c.o] Source `src/games/botai/ai_dmnet.c' not found, needed by target `build/linux-x64-release/game/obj/games/botai/ai_dmnet.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/botai/ai_dmq3.c.o] Source `src/games/botai/ai_dmq3.c' not found, needed by target `build/linux-x64-release/game/obj/games/botai/ai_dmq3.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/botai/ai_main.c.o] Source `src/games/botai/ai_main.c' not found, needed by target `build/linux-x64-release/game/obj/games/botai/ai_main.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/botai/ai_team.c.o] Source `src/games/botai/ai_team.c' not found, needed by target `build/linux-x64-release/game/obj/games/botai/ai_team.c.o'.
scons: *** [build/linux-x64-release/game/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x64-release/game/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x64-release/game/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x64-release/game/obj/qcommon/q_shared.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/game/bg_animation.c.o] Source `src/games/game/bg_animation.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/game/bg_animation.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/game/bg_misc.c.o] Source `src/games/game/bg_misc.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/game/bg_misc.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/game/bg_pmove.c.o] Source `src/games/game/bg_pmove.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/game/bg_pmove.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/game/bg_slidemove.c.o] Source `src/games/game/bg_slidemove.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/game/bg_slidemove.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_consolecmds.c.o] Source `src/games/cgame/cg_consolecmds.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_consolecmds.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_draw.c.o] Source `src/games/cgame/cg_draw.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_draw.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_drawtools.c.o] Source `src/games/cgame/cg_drawtools.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_drawtools.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_effects.c.o] Source `src/games/cgame/cg_effects.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_effects.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_ents.c.o] Source `src/games/cgame/cg_ents.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_ents.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_event.c.o] Source `src/games/cgame/cg_event.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_event.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_flamethrower.c.o] Source `src/games/cgame/cg_flamethrower.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_flamethrower.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_info.c.o] Source `src/games/cgame/cg_info.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_info.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_localents.c.o] Source `src/games/cgame/cg_localents.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_localents.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_main.c.o] Source `src/games/cgame/cg_main.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_main.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_marks.c.o] Source `src/games/cgame/cg_marks.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_marks.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_newDraw.c.o] Source `src/games/cgame/cg_newDraw.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_newDraw.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_particles.c.o] Source `src/games/cgame/cg_particles.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_particles.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o] Source `src/games/cgame/cg_players.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_playerstate.c.o] Source `src/games/cgame/cg_playerstate.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_playerstate.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_predict.c.o] Source `src/games/cgame/cg_predict.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_predict.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_scoreboard.c.o] Source `src/games/cgame/cg_scoreboard.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_scoreboard.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_servercmds.c.o] Source `src/games/cgame/cg_servercmds.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_servercmds.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_snapshot.c.o] Source `src/games/cgame/cg_snapshot.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_snapshot.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_sound.c.o] Source `src/games/cgame/cg_sound.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_sound.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_syscalls.c.o] Source `src/games/cgame/cg_syscalls.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_syscalls.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_trails.c.o] Source `src/games/cgame/cg_trails.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_trails.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_view.c.o] Source `src/games/cgame/cg_view.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_view.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_weapons.c.o] Source `src/games/cgame/cg_weapons.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_weapons.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o] Source `src/games/ui/ui_shared.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x64-release/cgame/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x64-release/cgame/obj/qcommon/q_shared.c.o'.
scons: *** [build/linux-x64-release/ui/obj/games/game/bg_misc.c.o] Source `src/games/game/bg_misc.c' not found, needed by target `build/linux-x64-release/ui/obj/games/game/bg_misc.c.o'.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_atoms.c.o] Source `src/games/ui/ui_atoms.c' not found, needed by target `build/linux-x64-release/ui/obj/games/ui/ui_atoms.c.o'.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_gameinfo.c.o] Source `src/games/ui/ui_gameinfo.c' not found, needed by target `build/linux-x64-release/ui/obj/games/ui/ui_gameinfo.c.o'.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_main.c.o] Source `src/games/ui/ui_main.c' not found, needed by target `build/linux-x64-release/ui/obj/games/ui/ui_main.c.o'.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_players.c.o] Source `src/games/ui/ui_players.c' not found, needed by target `build/linux-x64-release/ui/obj/games/ui/ui_players.c.o'.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o] Source `src/games/ui/ui_shared.c' not found, needed by target `build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o'.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_syscalls.c.o] Source `src/games/ui/ui_syscalls.c' not found, needed by target `build/linux-x64-release/ui/obj/games/ui/ui_syscalls.c.o'.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_util.c.o] Source `src/games/ui/ui_util.c' not found, needed by target `build/linux-x64-release/ui/obj/games/ui/ui_util.c.o'.
scons: *** [build/linux-x64-release/ui/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x64-release/ui/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x64-release/ui/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x64-release/ui/obj/qcommon/q_shared.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_animation.c.o] Source `src/renderer/tr_animation.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_animation.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_backend.c.o] Source `src/renderer/tr_backend.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_backend.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_bsp.c.o] Source `src/renderer/tr_bsp.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_bsp.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_cmds.c.o] Source `src/renderer/tr_cmds.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_cmds.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_cmesh.c.o] Source `src/renderer/tr_cmesh.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_cmesh.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_curve.c.o] Source `src/renderer/tr_curve.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_curve.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_flares.c.o] Source `src/renderer/tr_flares.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_flares.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_font.c.o] Source `src/renderer/tr_font.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_font.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_image.c.o] Source `src/renderer/tr_image.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_image.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_init.c.o] Source `src/renderer/tr_init.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_init.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_light.c.o] Source `src/renderer/tr_light.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_light.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_main.c.o] Source `src/renderer/tr_main.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_main.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_marks.c.o] Source `src/renderer/tr_marks.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_marks.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_mesh.c.o] Source `src/renderer/tr_mesh.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_mesh.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_model.c.o] Source `src/renderer/tr_model.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_model.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_noise.c.o] Source `src/renderer/tr_noise.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_noise.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_scene.c.o] Source `src/renderer/tr_scene.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_scene.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shade.c.o] Source `src/renderer/tr_shade.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_shade.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shade_calc.c.o] Source `src/renderer/tr_shade_calc.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_shade_calc.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o] Source `src/renderer/tr_shader.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shadows.c.o] Source `src/renderer/tr_shadows.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_shadows.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_sky.c.o] Source `src/renderer/tr_sky.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_sky.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_surface.c.o] Source `src/renderer/tr_surface.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_surface.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_world.c.o] Source `src/renderer/tr_world.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_world.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_module.c.o] Source `src/renderer/tr_module.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_module.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x64-release/renderer/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x64-release/renderer/obj/qcommon/q_shared.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/third-party/glad/src/gl.c.o] Source `src/third-party/glad/src/gl.c' not found, needed by target `build/linux-x64-release/renderer/obj/third-party/glad/src/gl.c.o'.

### failure context

- build/linux-x64-release/client/obj/client/cl_cgame.c.o

```
Unpacking libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Selecting previously unselected package libxxf86dga-dev:amd64.
Preparing to unpack .../libxxf86dga-dev_2%3a1.1.5-1build2_amd64v3.deb ...
Unpacking libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Selecting previously unselected package libxxf86vm-dev:amd64.
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_cin.c.o

```
Selecting previously unselected package libxxf86dga-dev:amd64.
Preparing to unpack .../libxxf86dga-dev_2%3a1.1.5-1build2_amd64v3.deb ...
Unpacking libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Selecting previously unselected package libxxf86vm-dev:amd64.
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_console.c.o

```
Preparing to unpack .../libxxf86dga-dev_2%3a1.1.5-1build2_amd64v3.deb ...
Unpacking libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Selecting previously unselected package libxxf86vm-dev:amd64.
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_input.c.o

```
Unpacking libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Selecting previously unselected package libxxf86vm-dev:amd64.
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_input.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_keys.c.o

```
Selecting previously unselected package libxxf86vm-dev:amd64.
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_keys.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_main.c.o

```
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_main.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_net_chan.c.o

```
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_net_chan.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_parse.c.o

```
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_net_chan.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_parse.c.o] Source `src/client/cl_parse.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_parse.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_qgl.c.o

```
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_net_chan.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_parse.c.o] Source `src/client/cl_parse.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_parse.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_qgl.c.o] Source `src/client/cl_qgl.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_qgl.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_scrn.c.o

```
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_net_chan.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_parse.c.o] Source `src/client/cl_parse.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_parse.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_qgl.c.o] Source `src/client/cl_qgl.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_qgl.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_scrn.c.o] Source `src/client/cl_scrn.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_scrn.c.o'.
```


### warning kinds

- [33x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings
  - src/splines/q_shared.cpp:757:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/q_shared.cpp:774:12: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/q_shared.cpp:799:9: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:471:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:475:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:479:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:552:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:556:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:565:38: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:568:25: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:853:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:856:36: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:859:41: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:960:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:962:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:964:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:966:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1244:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1247:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1250:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1253:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1256:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1266:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1269:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1272:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1275:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1279:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1286:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1289:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1296:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1299:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1301:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1308:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
- [8x] -unused-but-set-variable
  - src/splines/util_str.cpp:437:6: warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:468:7: warning: variable 'ch' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:476:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:481:14: warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:483:14: warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1126:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1171:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1220:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
- [6x] -logical-op-parentheses
  - src/splines/math_quaternion.h:167:62: warning: '&&' within '||' [-Wlogical-op-parentheses]
- [6x] -sizeof-array-argument
  - src/splines/math_matrix.h:94:26: warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
- [6x] -sizeof-pointer-memaccess
  - src/splines/math_matrix.h:94:28: warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
- [5x] -macro-redefined
  - src/splines/q_splineshared.h:208:9: warning: 'CPUSTRING' macro redefined [-Wmacro-redefined]
- [1x] -unused-value
  - src/splines/splines.cpp:580:17: warning: expression result unused [-Wunused-value]

## ubuntu-latest-x64-release-game,renderer

status: failure

errors: 251
warnings: 65 in 7 kinds

### errors

scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_net_chan.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_parse.c.o] Source `src/client/cl_parse.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_parse.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_qgl.c.o] Source `src/client/cl_qgl.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_qgl.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_scrn.c.o] Source `src/client/cl_scrn.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_scrn.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_ui.c.o] Source `src/client/cl_ui.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_ui.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/snd_adpcm.c.o] Source `src/client/snd_adpcm.c' not found, needed by target `build/linux-x64-release/client/obj/client/snd_adpcm.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/snd_dma.c.o] Source `src/client/snd_dma.c' not found, needed by target `build/linux-x64-release/client/obj/client/snd_dma.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/snd_mem.c.o] Source `src/client/snd_mem.c' not found, needed by target `build/linux-x64-release/client/obj/client/snd_mem.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/snd_mix.c.o] Source `src/client/snd_mix.c' not found, needed by target `build/linux-x64-release/client/obj/client/snd_mix.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/snd_wavelet.c.o] Source `src/client/snd_wavelet.c' not found, needed by target `build/linux-x64-release/client/obj/client/snd_wavelet.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_load.c.o] Source `src/qcommon/cm_load.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/cm_load.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_patch.c.o] Source `src/qcommon/cm_patch.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/cm_patch.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_polylib.c.o] Source `src/qcommon/cm_polylib.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/cm_polylib.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_test.c.o] Source `src/qcommon/cm_test.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/cm_test.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/cm_trace.c.o] Source `src/qcommon/cm_trace.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/cm_trace.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/cmd.c.o] Source `src/qcommon/cmd.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/cmd.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/common.c.o] Source `src/qcommon/common.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/common.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/cvar.c.o] Source `src/qcommon/cvar.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/cvar.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/files.c.o] Source `src/qcommon/files.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/files.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/huffman.c.o] Source `src/qcommon/huffman.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/huffman.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/md4.c.o] Source `src/qcommon/md4.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/md4.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/msg.c.o] Source `src/qcommon/msg.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/msg.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/net_chan.c.o] Source `src/qcommon/net_chan.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/net_chan.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/unzip.c.o] Source `src/qcommon/unzip.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/unzip.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_bot.c.o] Source `src/server/sv_bot.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_bot.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_ccmds.c.o] Source `src/server/sv_ccmds.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_ccmds.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_client.c.o] Source `src/server/sv_client.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_client.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_game.c.o] Source `src/server/sv_game.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_game.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_init.c.o] Source `src/server/sv_init.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_init.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_main.c.o] Source `src/server/sv_main.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_main.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_net_chan.c.o] Source `src/server/sv_net_chan.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_net_chan.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_snapshot.c.o] Source `src/server/sv_snapshot.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_snapshot.c.o'.
scons: *** [build/linux-x64-release/client/obj/server/sv_world.c.o] Source `src/server/sv_world.c' not found, needed by target `build/linux-x64-release/client/obj/server/sv_world.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/q_shared.c.o'.
scons: *** [build/linux-x64-release/client/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x64-release/client/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x64-release/client/obj/sys/unix/unix_main.c.o] Source `src/sys/unix/unix_main.c' not found, needed by target `build/linux-x64-release/client/obj/sys/unix/unix_main.c.o'.
scons: *** [build/linux-x64-release/client/obj/sys/unix/unix_net.c.o] Source `src/sys/unix/unix_net.c' not found, needed by target `build/linux-x64-release/client/obj/sys/unix/unix_net.c.o'.
scons: *** [build/linux-x64-release/client/obj/sys/unix/unix_shared.c.o] Source `src/sys/unix/unix_shared.c' not found, needed by target `build/linux-x64-release/client/obj/sys/unix/unix_shared.c.o'.
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_common.c.o] Source `src/sys/unix/linux_common.c' not found, needed by target `build/linux-x64-release/client/obj/sys/unix/linux_common.c.o'.
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.c.o] Source `src/sys/unix/linux_glimp.c' not found, needed by target `build/linux-x64-release/client/obj/sys/unix/linux_glimp.c.o'.
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_joystick.c.o] Source `src/sys/unix/linux_joystick.c' not found, needed by target `build/linux-x64-release/client/obj/sys/unix/linux_joystick.c.o'.
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_snd.c.o] Source `src/sys/unix/linux_snd.c' not found, needed by target `build/linux-x64-release/client/obj/sys/unix/linux_snd.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_bspq3.c.o] Source `src/games/botlib/be_aas_bspq3.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_bspq3.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_cluster.c.o] Source `src/games/botlib/be_aas_cluster.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_cluster.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_debug.c.o] Source `src/games/botlib/be_aas_debug.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_debug.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_entity.c.o] Source `src/games/botlib/be_aas_entity.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_entity.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_file.c.o] Source `src/games/botlib/be_aas_file.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_file.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_main.c.o] Source `src/games/botlib/be_aas_main.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_main.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_move.c.o] Source `src/games/botlib/be_aas_move.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_move.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_optimize.c.o] Source `src/games/botlib/be_aas_optimize.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_optimize.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_reach.c.o] Source `src/games/botlib/be_aas_reach.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_reach.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_route.c.o] Source `src/games/botlib/be_aas_route.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_route.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_routealt.c.o] Source `src/games/botlib/be_aas_routealt.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_routealt.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_routetable.c.o] Source `src/games/botlib/be_aas_routetable.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_routetable.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_aas_sample.c.o] Source `src/games/botlib/be_aas_sample.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_aas_sample.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_char.c.o] Source `src/games/botlib/be_ai_char.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_ai_char.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_chat.c.o] Source `src/games/botlib/be_ai_chat.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_ai_chat.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_gen.c.o] Source `src/games/botlib/be_ai_gen.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_ai_gen.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_goal.c.o] Source `src/games/botlib/be_ai_goal.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_ai_goal.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_move.c.o] Source `src/games/botlib/be_ai_move.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_ai_move.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_weap.c.o] Source `src/games/botlib/be_ai_weap.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_ai_weap.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_weight.c.o] Source `src/games/botlib/be_ai_weight.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_ai_weight.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ea.c.o] Source `src/games/botlib/be_ea.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_ea.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_interface.c.o] Source `src/games/botlib/be_interface.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/be_interface.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_crc.c.o] Source `src/games/botlib/l_crc.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/l_crc.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_libvar.c.o] Source `src/games/botlib/l_libvar.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/l_libvar.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_log.c.o] Source `src/games/botlib/l_log.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/l_log.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_memory.c.o] Source `src/games/botlib/l_memory.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/l_memory.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_precomp.c.o] Source `src/games/botlib/l_precomp.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/l_precomp.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_script.c.o] Source `src/games/botlib/l_script.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/l_script.c.o'.
scons: *** [build/linux-x64-release/client/obj/games/botlib/l_struct.c.o] Source `src/games/botlib/l_struct.c' not found, needed by target `build/linux-x64-release/client/obj/games/botlib/l_struct.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast.c.o] Source `src/games/game/ai_cast.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_characters.c.o] Source `src/games/game/ai_cast_characters.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_characters.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_debug.c.o] Source `src/games/game/ai_cast_debug.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_debug.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_events.c.o] Source `src/games/game/ai_cast_events.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_events.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_fight.c.o] Source `src/games/game/ai_cast_fight.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_fight.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_func_attack.c.o] Source `src/games/game/ai_cast_func_attack.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_func_attack.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_func_boss1.c.o] Source `src/games/game/ai_cast_func_boss1.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_func_boss1.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_funcs.c.o] Source `src/games/game/ai_cast_funcs.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_funcs.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_script.c.o] Source `src/games/game/ai_cast_script.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_script.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_script_actions.c.o] Source `src/games/game/ai_cast_script_actions.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_script_actions.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_script_ents.c.o] Source `src/games/game/ai_cast_script_ents.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_script_ents.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_sight.c.o] Source `src/games/game/ai_cast_sight.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_sight.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/ai_cast_think.c.o] Source `src/games/game/ai_cast_think.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/ai_cast_think.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/bg_animation.c.o] Source `src/games/game/bg_animation.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/bg_animation.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/bg_misc.c.o] Source `src/games/game/bg_misc.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/bg_misc.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/bg_pmove.c.o] Source `src/games/game/bg_pmove.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/bg_pmove.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/bg_slidemove.c.o] Source `src/games/game/bg_slidemove.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/bg_slidemove.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_active.c.o] Source `src/games/game/g_active.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_active.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_alarm.c.o] Source `src/games/game/g_alarm.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_alarm.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_bot.c.o] Source `src/games/game/g_bot.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_bot.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_client.c.o] Source `src/games/game/g_client.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_client.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_cmds.c.o] Source `src/games/game/g_cmds.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_cmds.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_combat.c.o] Source `src/games/game/g_combat.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_combat.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_items.c.o] Source `src/games/game/g_items.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_items.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_main.c.o] Source `src/games/game/g_main.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_main.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_mem.c.o] Source `src/games/game/g_mem.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_mem.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_misc.c.o] Source `src/games/game/g_misc.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_misc.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_missile.c.o] Source `src/games/game/g_missile.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_missile.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_mover.c.o] Source `src/games/game/g_mover.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_mover.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_props.c.o] Source `src/games/game/g_props.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_props.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_save.c.o] Source `src/games/game/g_save.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_save.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_script.c.o] Source `src/games/game/g_script.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_script.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_script_actions.c.o] Source `src/games/game/g_script_actions.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_script_actions.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_session.c.o] Source `src/games/game/g_session.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_session.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_spawn.c.o] Source `src/games/game/g_spawn.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_spawn.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_svcmds.c.o] Source `src/games/game/g_svcmds.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_svcmds.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_syscalls.c.o] Source `src/games/game/g_syscalls.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_syscalls.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_target.c.o] Source `src/games/game/g_target.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_target.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_team.c.o] Source `src/games/game/g_team.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_team.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_tramcar.c.o] Source `src/games/game/g_tramcar.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_tramcar.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_trigger.c.o] Source `src/games/game/g_trigger.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_trigger.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_utils.c.o] Source `src/games/game/g_utils.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_utils.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/game/g_weapon.c.o] Source `src/games/game/g_weapon.c' not found, needed by target `build/linux-x64-release/game/obj/games/game/g_weapon.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/botai/ai_chat.c.o] Source `src/games/botai/ai_chat.c' not found, needed by target `build/linux-x64-release/game/obj/games/botai/ai_chat.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/botai/ai_cmd.c.o] Source `src/games/botai/ai_cmd.c' not found, needed by target `build/linux-x64-release/game/obj/games/botai/ai_cmd.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/botai/ai_dmnet.c.o] Source `src/games/botai/ai_dmnet.c' not found, needed by target `build/linux-x64-release/game/obj/games/botai/ai_dmnet.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/botai/ai_dmq3.c.o] Source `src/games/botai/ai_dmq3.c' not found, needed by target `build/linux-x64-release/game/obj/games/botai/ai_dmq3.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/botai/ai_main.c.o] Source `src/games/botai/ai_main.c' not found, needed by target `build/linux-x64-release/game/obj/games/botai/ai_main.c.o'.
scons: *** [build/linux-x64-release/game/obj/games/botai/ai_team.c.o] Source `src/games/botai/ai_team.c' not found, needed by target `build/linux-x64-release/game/obj/games/botai/ai_team.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_animation.c.o] Source `src/renderer/tr_animation.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_animation.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_backend.c.o] Source `src/renderer/tr_backend.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_backend.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_bsp.c.o] Source `src/renderer/tr_bsp.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_bsp.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_cmds.c.o] Source `src/renderer/tr_cmds.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_cmds.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_cmesh.c.o] Source `src/renderer/tr_cmesh.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_cmesh.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_curve.c.o] Source `src/renderer/tr_curve.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_curve.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_flares.c.o] Source `src/renderer/tr_flares.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_flares.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_font.c.o] Source `src/renderer/tr_font.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_font.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_image.c.o] Source `src/renderer/tr_image.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_image.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_init.c.o] Source `src/renderer/tr_init.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_init.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_light.c.o] Source `src/renderer/tr_light.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_light.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_main.c.o] Source `src/renderer/tr_main.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_main.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_marks.c.o] Source `src/renderer/tr_marks.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_marks.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_mesh.c.o] Source `src/renderer/tr_mesh.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_mesh.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_model.c.o] Source `src/renderer/tr_model.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_model.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_noise.c.o] Source `src/renderer/tr_noise.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_noise.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_scene.c.o] Source `src/renderer/tr_scene.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_scene.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shade.c.o] Source `src/renderer/tr_shade.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_shade.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shade_calc.c.o] Source `src/renderer/tr_shade_calc.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_shade_calc.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o] Source `src/renderer/tr_shader.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shadows.c.o] Source `src/renderer/tr_shadows.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_shadows.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_sky.c.o] Source `src/renderer/tr_sky.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_sky.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_surface.c.o] Source `src/renderer/tr_surface.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_surface.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_world.c.o] Source `src/renderer/tr_world.c' not found, needed by target `build/linux-x64-release/renderer/obj/renderer/tr_world.c.o'.
scons: *** [build/linux-x64-release/renderer/obj/third-party/glad/src/gl.c.o] Source `src/third-party/glad/src/gl.c' not found, needed by target `build/linux-x64-release/renderer/obj/third-party/glad/src/gl.c.o'.
scons: *** [build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o] Source `src/tools/extractfuncs/extractfuncs.c' not found, needed by target `build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o'.
scons: *** [build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o] Source `src/tools/extractfuncs/l_log.c' not found, needed by target `build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o'.
scons: *** [build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o] Source `src/tools/extractfuncs/l_memory.c' not found, needed by target `build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o'.
scons: *** [build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o] Source `src/tools/extractfuncs/l_precomp.c' not found, needed by target `build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o'.
scons: *** [build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_script.c.o] Source `src/tools/extractfuncs/l_script.c' not found, needed by target `build/linux-x64-release/extractfuncs_tool/obj/tools/extractfuncs/l_script.c.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o] Source `src/idlib/Heap.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Str.cpp.o] Source `src/idlib/Str.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/Str.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Lib.cpp.o] Source `src/idlib/Lib.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/Lib.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Token.cpp.o] Source `src/idlib/Token.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/Token.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Lexer.cpp.o] Source `src/idlib/Lexer.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/Lexer.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/Parser.cpp.o] Source `src/idlib/Parser.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/Parser.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/sys/sys_assert.cpp.o] Source `src/idlib/sys/sys_assert.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/sys/sys_assert.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/containers/HashIndex.cpp.o] Source `src/idlib/containers/HashIndex.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/containers/HashIndex.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Math.cpp.o] Source `src/idlib/math/Math.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/Math.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Vector.cpp.o] Source `src/idlib/math/Vector.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/Vector.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Matrix.cpp.o] Source `src/idlib/math/Matrix.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/Matrix.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Angles.cpp.o] Source `src/idlib/math/Angles.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/Angles.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Quat.cpp.o] Source `src/idlib/math/Quat.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/Quat.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Plane.cpp.o] Source `src/idlib/math/Plane.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/Plane.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/Rotation.cpp.o] Source `src/idlib/math/Rotation.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/Rotation.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/VecX.cpp.o] Source `src/idlib/math/VecX.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/VecX.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/math/MatX.cpp.o] Source `src/idlib/math/MatX.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/math/MatX.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/bv/Bounds.cpp.o] Source `src/idlib/bv/Bounds.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/bv/Bounds.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/bv/Box.cpp.o] Source `src/idlib/bv/Box.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/bv/Box.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/bv/Sphere.cpp.o] Source `src/idlib/bv/Sphere.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/bv/Sphere.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/geometry/DrawVert.cpp.o] Source `src/idlib/geometry/DrawVert.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/geometry/DrawVert.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/geometry/JointTransform.cpp.o] Source `src/idlib/geometry/JointTransform.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/geometry/JointTransform.cpp.o'.
scons: *** [build/linux-x64-release/idlib/obj/idlib/geometry/RenderMatrix.cpp.o] Source `src/idlib/geometry/RenderMatrix.cpp' not found, needed by target `build/linux-x64-release/idlib/obj/idlib/geometry/RenderMatrix.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o] Source `src/renderer-bfg/RenderWorld.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o] Source `src/renderer-bfg/RenderEntity.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ScreenRect.cpp.o] Source `src/renderer-bfg/ScreenRect.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ScreenRect.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o] Source `src/renderer-bfg/RenderSystem.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/GLContext.cpp.o] Source `src/renderer-bfg/GLContext.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/GLContext.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/CVarSystem.cpp.o] Source `src/renderer-bfg/CVarSystem.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/CVarSystem.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/GLMatrix.cpp.o] Source `src/renderer-bfg/GLMatrix.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/GLMatrix.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o] Source `src/renderer-bfg/RenderLog.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o] Source `src/renderer-bfg/RenderProgs.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o] Source `src/renderer-bfg/RenderProgs_GLSL.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Q3Patch.cpp.o] Source `src/renderer-bfg/Q3Patch.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Q3Patch.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderWorld_load.cpp.o] Source `src/renderer-bfg/RenderWorld_load.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderWorld_load.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model.cpp.o] Source `src/renderer-bfg/Model.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ModelManager.cpp.o] Source `src/renderer-bfg/ModelManager.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ModelManager.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_md3.cpp.o] Source `src/renderer-bfg/Model_md3.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_md3.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_mdc.cpp.o] Source `src/renderer-bfg/Model_mdc.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_mdc.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_mds.cpp.o] Source `src/renderer-bfg/Model_mds.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_mds.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material.cpp.o] Source `src/renderer-bfg/Material.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o] Source `src/renderer-bfg/MaterialManager.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Source `src/renderer-bfg/Material_shader.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o] Source `src/renderer-bfg/Shadow.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Backend.cpp.o] Source `src/renderer-bfg/Backend.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Backend.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Tess.cpp.o] Source `src/renderer-bfg/Tess.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Tess.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Tess_calc.cpp.o] Source `src/renderer-bfg/Tess_calc.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Tess_calc.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Lighting.cpp.o] Source `src/renderer-bfg/Lighting.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Lighting.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Surface.cpp.o] Source `src/renderer-bfg/Surface.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Surface.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ImageManager.cpp.o] Source `src/renderer-bfg/ImageManager.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ImageManager.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_files.cpp.o] Source `src/renderer-bfg/Image_files.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_files.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_intrinsic.cpp.o] Source `src/renderer-bfg/Image_intrinsic.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_intrinsic.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_process.cpp.o] Source `src/renderer-bfg/Image_process.cpp' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_process.cpp.o'.
scons: *** [build/linux-x64-release/renderer-bfg/obj/third-party/glad/src/gl.c.o] Source `src/third-party/glad/src/gl.c' not found, needed by target `build/linux-x64-release/renderer-bfg/obj/third-party/glad/src/gl.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/game/bg_animation.c.o] Source `src/games/game/bg_animation.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/game/bg_animation.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/game/bg_misc.c.o] Source `src/games/game/bg_misc.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/game/bg_misc.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/game/bg_pmove.c.o] Source `src/games/game/bg_pmove.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/game/bg_pmove.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/game/bg_slidemove.c.o] Source `src/games/game/bg_slidemove.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/game/bg_slidemove.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_consolecmds.c.o] Source `src/games/cgame/cg_consolecmds.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_consolecmds.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_draw.c.o] Source `src/games/cgame/cg_draw.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_draw.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_drawtools.c.o] Source `src/games/cgame/cg_drawtools.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_drawtools.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_effects.c.o] Source `src/games/cgame/cg_effects.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_effects.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_ents.c.o] Source `src/games/cgame/cg_ents.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_ents.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_event.c.o] Source `src/games/cgame/cg_event.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_event.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_flamethrower.c.o] Source `src/games/cgame/cg_flamethrower.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_flamethrower.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_info.c.o] Source `src/games/cgame/cg_info.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_info.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_localents.c.o] Source `src/games/cgame/cg_localents.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_localents.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_main.c.o] Source `src/games/cgame/cg_main.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_main.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_marks.c.o] Source `src/games/cgame/cg_marks.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_marks.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_newDraw.c.o] Source `src/games/cgame/cg_newDraw.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_newDraw.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_particles.c.o] Source `src/games/cgame/cg_particles.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_particles.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o] Source `src/games/cgame/cg_players.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_playerstate.c.o] Source `src/games/cgame/cg_playerstate.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_playerstate.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_predict.c.o] Source `src/games/cgame/cg_predict.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_predict.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_scoreboard.c.o] Source `src/games/cgame/cg_scoreboard.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_scoreboard.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_servercmds.c.o] Source `src/games/cgame/cg_servercmds.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_servercmds.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_snapshot.c.o] Source `src/games/cgame/cg_snapshot.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_snapshot.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_sound.c.o] Source `src/games/cgame/cg_sound.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_sound.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_syscalls.c.o] Source `src/games/cgame/cg_syscalls.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_syscalls.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_trails.c.o] Source `src/games/cgame/cg_trails.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_trails.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_view.c.o] Source `src/games/cgame/cg_view.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_view.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_weapons.c.o] Source `src/games/cgame/cg_weapons.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/cgame/cg_weapons.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o] Source `src/games/ui/ui_shared.c' not found, needed by target `build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x64-release/cgame/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x64-release/cgame/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x64-release/cgame/obj/qcommon/q_shared.c.o'.
scons: *** [build/linux-x64-release/ui/obj/games/game/bg_misc.c.o] Source `src/games/game/bg_misc.c' not found, needed by target `build/linux-x64-release/ui/obj/games/game/bg_misc.c.o'.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_atoms.c.o] Source `src/games/ui/ui_atoms.c' not found, needed by target `build/linux-x64-release/ui/obj/games/ui/ui_atoms.c.o'.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_gameinfo.c.o] Source `src/games/ui/ui_gameinfo.c' not found, needed by target `build/linux-x64-release/ui/obj/games/ui/ui_gameinfo.c.o'.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_main.c.o] Source `src/games/ui/ui_main.c' not found, needed by target `build/linux-x64-release/ui/obj/games/ui/ui_main.c.o'.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_players.c.o] Source `src/games/ui/ui_players.c' not found, needed by target `build/linux-x64-release/ui/obj/games/ui/ui_players.c.o'.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o] Source `src/games/ui/ui_shared.c' not found, needed by target `build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o'.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_syscalls.c.o] Source `src/games/ui/ui_syscalls.c' not found, needed by target `build/linux-x64-release/ui/obj/games/ui/ui_syscalls.c.o'.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_util.c.o] Source `src/games/ui/ui_util.c' not found, needed by target `build/linux-x64-release/ui/obj/games/ui/ui_util.c.o'.
scons: *** [build/linux-x64-release/ui/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x64-release/ui/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x64-release/ui/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x64-release/ui/obj/qcommon/q_shared.c.o'.

### failure context

- build/linux-x64-release/client/obj/client/cl_cgame.c.o

```
Unpacking libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Selecting previously unselected package libxxf86dga-dev:amd64.
Preparing to unpack .../libxxf86dga-dev_2%3a1.1.5-1build2_amd64v3.deb ...
Unpacking libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Selecting previously unselected package libxxf86vm-dev:amd64.
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_cin.c.o

```
Selecting previously unselected package libxxf86dga-dev:amd64.
Preparing to unpack .../libxxf86dga-dev_2%3a1.1.5-1build2_amd64v3.deb ...
Unpacking libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Selecting previously unselected package libxxf86vm-dev:amd64.
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_console.c.o

```
Preparing to unpack .../libxxf86dga-dev_2%3a1.1.5-1build2_amd64v3.deb ...
Unpacking libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Selecting previously unselected package libxxf86vm-dev:amd64.
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_input.c.o

```
Unpacking libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Selecting previously unselected package libxxf86vm-dev:amd64.
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_input.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_keys.c.o

```
Selecting previously unselected package libxxf86vm-dev:amd64.
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_keys.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_main.c.o

```
Preparing to unpack .../libxxf86vm-dev_1%3a1.1.4-2_amd64v3.deb ...
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_main.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_net_chan.c.o

```
Unpacking libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_net_chan.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_parse.c.o

```
Setting up libxxf86vm-dev:amd64 (1:1.1.4-2) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_net_chan.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_parse.c.o] Source `src/client/cl_parse.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_parse.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_qgl.c.o

```
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_net_chan.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_parse.c.o] Source `src/client/cl_parse.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_parse.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_qgl.c.o] Source `src/client/cl_qgl.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_qgl.c.o'.
```

- build/linux-x64-release/client/obj/client/cl_scrn.c.o

```
Setting up libxext-dev:amd64 (2:1.3.4-1build3) ...
Setting up libxxf86dga-dev:amd64 (2:1.1.5-1build2) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...

Service restarts being deferred:
 systemctl restart hosted-compute-agent.service

No containers need to be restarted.

No user sessions are running outdated binaries.

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x64-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_net_chan.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_parse.c.o] Source `src/client/cl_parse.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_parse.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_qgl.c.o] Source `src/client/cl_qgl.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_qgl.c.o'.
scons: *** [build/linux-x64-release/client/obj/client/cl_scrn.c.o] Source `src/client/cl_scrn.c' not found, needed by target `build/linux-x64-release/client/obj/client/cl_scrn.c.o'.
```


### warning kinds

- [33x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings
  - src/splines/q_shared.cpp:757:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/q_shared.cpp:774:12: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/q_shared.cpp:799:9: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:471:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:475:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:479:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:552:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:556:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:565:38: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:568:25: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:853:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:856:36: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:859:41: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:960:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:962:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:964:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:966:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1244:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1247:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1250:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1253:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1256:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1266:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1269:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1272:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1275:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1279:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1286:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1289:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1296:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1299:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1301:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1308:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
- [8x] -unused-but-set-variable
  - src/splines/util_str.cpp:437:6: warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:468:7: warning: variable 'ch' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:476:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:481:14: warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:483:14: warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1126:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1171:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1220:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
- [6x] -logical-op-parentheses
  - src/splines/math_quaternion.h:167:62: warning: '&&' within '||' [-Wlogical-op-parentheses]
- [6x] -sizeof-array-argument
  - src/splines/math_matrix.h:94:26: warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
- [6x] -sizeof-pointer-memaccess
  - src/splines/math_matrix.h:94:28: warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
- [5x] -macro-redefined
  - src/splines/q_splineshared.h:208:9: warning: 'CPUSTRING' macro redefined [-Wmacro-redefined]
- [1x] -unused-value
  - src/splines/splines.cpp:580:17: warning: expression result unused [-Wunused-value]

## ubuntu-latest-x86-debug-

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x86-release-

status: failure

errors: 256
warnings: 65 in 7 kinds

### errors

scons: *** [build/linux-x86-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_net_chan.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_parse.c.o] Source `src/client/cl_parse.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_parse.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_qgl.c.o] Source `src/client/cl_qgl.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_qgl.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_scrn.c.o] Source `src/client/cl_scrn.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_scrn.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_ui.c.o] Source `src/client/cl_ui.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_ui.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/snd_adpcm.c.o] Source `src/client/snd_adpcm.c' not found, needed by target `build/linux-x86-release/client/obj/client/snd_adpcm.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/snd_dma.c.o] Source `src/client/snd_dma.c' not found, needed by target `build/linux-x86-release/client/obj/client/snd_dma.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/snd_mem.c.o] Source `src/client/snd_mem.c' not found, needed by target `build/linux-x86-release/client/obj/client/snd_mem.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/snd_mix.c.o] Source `src/client/snd_mix.c' not found, needed by target `build/linux-x86-release/client/obj/client/snd_mix.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/snd_wavelet.c.o] Source `src/client/snd_wavelet.c' not found, needed by target `build/linux-x86-release/client/obj/client/snd_wavelet.c.o'.
scons: *** [build/linux-x86-release/client/obj/qcommon/cm_load.c.o] Source `src/qcommon/cm_load.c' not found, needed by target `build/linux-x86-release/client/obj/qcommon/cm_load.c.o'.
scons: *** [build/linux-x86-release/client/obj/qcommon/cm_patch.c.o] Source `src/qcommon/cm_patch.c' not found, needed by target `build/linux-x86-release/client/obj/qcommon/cm_patch.c.o'.
scons: *** [build/linux-x86-release/client/obj/qcommon/cm_polylib.c.o] Source `src/qcommon/cm_polylib.c' not found, needed by target `build/linux-x86-release/client/obj/qcommon/cm_polylib.c.o'.
scons: *** [build/linux-x86-release/client/obj/qcommon/cm_test.c.o] Source `src/qcommon/cm_test.c' not found, needed by target `build/linux-x86-release/client/obj/qcommon/cm_test.c.o'.
scons: *** [build/linux-x86-release/client/obj/qcommon/cm_trace.c.o] Source `src/qcommon/cm_trace.c' not found, needed by target `build/linux-x86-release/client/obj/qcommon/cm_trace.c.o'.
scons: *** [build/linux-x86-release/client/obj/qcommon/cmd.c.o] Source `src/qcommon/cmd.c' not found, needed by target `build/linux-x86-release/client/obj/qcommon/cmd.c.o'.
scons: *** [build/linux-x86-release/client/obj/qcommon/common.c.o] Source `src/qcommon/common.c' not found, needed by target `build/linux-x86-release/client/obj/qcommon/common.c.o'.
scons: *** [build/linux-x86-release/client/obj/qcommon/cvar.c.o] Source `src/qcommon/cvar.c' not found, needed by target `build/linux-x86-release/client/obj/qcommon/cvar.c.o'.
scons: *** [build/linux-x86-release/client/obj/qcommon/files.c.o] Source `src/qcommon/files.c' not found, needed by target `build/linux-x86-release/client/obj/qcommon/files.c.o'.
scons: *** [build/linux-x86-release/client/obj/qcommon/huffman.c.o] Source `src/qcommon/huffman.c' not found, needed by target `build/linux-x86-release/client/obj/qcommon/huffman.c.o'.
scons: *** [build/linux-x86-release/client/obj/qcommon/md4.c.o] Source `src/qcommon/md4.c' not found, needed by target `build/linux-x86-release/client/obj/qcommon/md4.c.o'.
scons: *** [build/linux-x86-release/client/obj/qcommon/msg.c.o] Source `src/qcommon/msg.c' not found, needed by target `build/linux-x86-release/client/obj/qcommon/msg.c.o'.
scons: *** [build/linux-x86-release/client/obj/qcommon/net_chan.c.o] Source `src/qcommon/net_chan.c' not found, needed by target `build/linux-x86-release/client/obj/qcommon/net_chan.c.o'.
scons: *** [build/linux-x86-release/client/obj/qcommon/unzip.c.o] Source `src/qcommon/unzip.c' not found, needed by target `build/linux-x86-release/client/obj/qcommon/unzip.c.o'.
scons: *** [build/linux-x86-release/client/obj/server/sv_bot.c.o] Source `src/server/sv_bot.c' not found, needed by target `build/linux-x86-release/client/obj/server/sv_bot.c.o'.
scons: *** [build/linux-x86-release/client/obj/server/sv_ccmds.c.o] Source `src/server/sv_ccmds.c' not found, needed by target `build/linux-x86-release/client/obj/server/sv_ccmds.c.o'.
scons: *** [build/linux-x86-release/client/obj/server/sv_client.c.o] Source `src/server/sv_client.c' not found, needed by target `build/linux-x86-release/client/obj/server/sv_client.c.o'.
scons: *** [build/linux-x86-release/client/obj/server/sv_game.c.o] Source `src/server/sv_game.c' not found, needed by target `build/linux-x86-release/client/obj/server/sv_game.c.o'.
scons: *** [build/linux-x86-release/client/obj/server/sv_init.c.o] Source `src/server/sv_init.c' not found, needed by target `build/linux-x86-release/client/obj/server/sv_init.c.o'.
scons: *** [build/linux-x86-release/client/obj/server/sv_main.c.o] Source `src/server/sv_main.c' not found, needed by target `build/linux-x86-release/client/obj/server/sv_main.c.o'.
scons: *** [build/linux-x86-release/client/obj/server/sv_net_chan.c.o] Source `src/server/sv_net_chan.c' not found, needed by target `build/linux-x86-release/client/obj/server/sv_net_chan.c.o'.
scons: *** [build/linux-x86-release/client/obj/server/sv_snapshot.c.o] Source `src/server/sv_snapshot.c' not found, needed by target `build/linux-x86-release/client/obj/server/sv_snapshot.c.o'.
scons: *** [build/linux-x86-release/client/obj/server/sv_world.c.o] Source `src/server/sv_world.c' not found, needed by target `build/linux-x86-release/client/obj/server/sv_world.c.o'.
scons: *** [build/linux-x86-release/client/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x86-release/client/obj/qcommon/q_shared.c.o'.
scons: *** [build/linux-x86-release/client/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x86-release/client/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x86-release/client/obj/sys/unix/unix_main.c.o] Source `src/sys/unix/unix_main.c' not found, needed by target `build/linux-x86-release/client/obj/sys/unix/unix_main.c.o'.
scons: *** [build/linux-x86-release/client/obj/sys/unix/unix_net.c.o] Source `src/sys/unix/unix_net.c' not found, needed by target `build/linux-x86-release/client/obj/sys/unix/unix_net.c.o'.
scons: *** [build/linux-x86-release/client/obj/sys/unix/unix_shared.c.o] Source `src/sys/unix/unix_shared.c' not found, needed by target `build/linux-x86-release/client/obj/sys/unix/unix_shared.c.o'.
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_common.c.o] Source `src/sys/unix/linux_common.c' not found, needed by target `build/linux-x86-release/client/obj/sys/unix/linux_common.c.o'.
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_glimp.c.o] Source `src/sys/unix/linux_glimp.c' not found, needed by target `build/linux-x86-release/client/obj/sys/unix/linux_glimp.c.o'.
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_joystick.c.o] Source `src/sys/unix/linux_joystick.c' not found, needed by target `build/linux-x86-release/client/obj/sys/unix/linux_joystick.c.o'.
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_snd.c.o] Source `src/sys/unix/linux_snd.c' not found, needed by target `build/linux-x86-release/client/obj/sys/unix/linux_snd.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_bspq3.c.o] Source `src/games/botlib/be_aas_bspq3.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_aas_bspq3.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_cluster.c.o] Source `src/games/botlib/be_aas_cluster.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_aas_cluster.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_debug.c.o] Source `src/games/botlib/be_aas_debug.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_aas_debug.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_entity.c.o] Source `src/games/botlib/be_aas_entity.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_aas_entity.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_file.c.o] Source `src/games/botlib/be_aas_file.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_aas_file.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_main.c.o] Source `src/games/botlib/be_aas_main.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_aas_main.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_move.c.o] Source `src/games/botlib/be_aas_move.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_aas_move.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_optimize.c.o] Source `src/games/botlib/be_aas_optimize.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_aas_optimize.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_reach.c.o] Source `src/games/botlib/be_aas_reach.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_aas_reach.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_route.c.o] Source `src/games/botlib/be_aas_route.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_aas_route.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_routealt.c.o] Source `src/games/botlib/be_aas_routealt.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_aas_routealt.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_routetable.c.o] Source `src/games/botlib/be_aas_routetable.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_aas_routetable.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_aas_sample.c.o] Source `src/games/botlib/be_aas_sample.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_aas_sample.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_ai_char.c.o] Source `src/games/botlib/be_ai_char.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_ai_char.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_ai_chat.c.o] Source `src/games/botlib/be_ai_chat.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_ai_chat.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_ai_gen.c.o] Source `src/games/botlib/be_ai_gen.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_ai_gen.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_ai_goal.c.o] Source `src/games/botlib/be_ai_goal.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_ai_goal.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_ai_move.c.o] Source `src/games/botlib/be_ai_move.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_ai_move.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_ai_weap.c.o] Source `src/games/botlib/be_ai_weap.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_ai_weap.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_ai_weight.c.o] Source `src/games/botlib/be_ai_weight.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_ai_weight.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_ea.c.o] Source `src/games/botlib/be_ea.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_ea.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/be_interface.c.o] Source `src/games/botlib/be_interface.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/be_interface.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/l_crc.c.o] Source `src/games/botlib/l_crc.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/l_crc.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/l_libvar.c.o] Source `src/games/botlib/l_libvar.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/l_libvar.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/l_log.c.o] Source `src/games/botlib/l_log.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/l_log.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/l_memory.c.o] Source `src/games/botlib/l_memory.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/l_memory.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/l_precomp.c.o] Source `src/games/botlib/l_precomp.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/l_precomp.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/l_script.c.o] Source `src/games/botlib/l_script.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/l_script.c.o'.
scons: *** [build/linux-x86-release/client/obj/games/botlib/l_struct.c.o] Source `src/games/botlib/l_struct.c' not found, needed by target `build/linux-x86-release/client/obj/games/botlib/l_struct.c.o'.
scons: *** [build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o] Source `src/tools/extractfuncs/extractfuncs.c' not found, needed by target `build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/extractfuncs.c.o'.
scons: *** [build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o] Source `src/tools/extractfuncs/l_log.c' not found, needed by target `build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_log.c.o'.
scons: *** [build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o] Source `src/tools/extractfuncs/l_memory.c' not found, needed by target `build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_memory.c.o'.
scons: *** [build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o] Source `src/tools/extractfuncs/l_precomp.c' not found, needed by target `build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_precomp.c.o'.
scons: *** [build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_script.c.o] Source `src/tools/extractfuncs/l_script.c' not found, needed by target `build/linux-x86-release/extractfuncs_tool/obj/tools/extractfuncs/l_script.c.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/Heap.cpp.o] Source `src/idlib/Heap.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/Heap.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/Str.cpp.o] Source `src/idlib/Str.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/Str.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/Lib.cpp.o] Source `src/idlib/Lib.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/Lib.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/Token.cpp.o] Source `src/idlib/Token.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/Token.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/Lexer.cpp.o] Source `src/idlib/Lexer.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/Lexer.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/Parser.cpp.o] Source `src/idlib/Parser.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/Parser.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/sys/sys_assert.cpp.o] Source `src/idlib/sys/sys_assert.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/sys/sys_assert.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/containers/HashIndex.cpp.o] Source `src/idlib/containers/HashIndex.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/containers/HashIndex.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Math.cpp.o] Source `src/idlib/math/Math.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/math/Math.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Vector.cpp.o] Source `src/idlib/math/Vector.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/math/Vector.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Matrix.cpp.o] Source `src/idlib/math/Matrix.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/math/Matrix.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Angles.cpp.o] Source `src/idlib/math/Angles.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/math/Angles.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Quat.cpp.o] Source `src/idlib/math/Quat.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/math/Quat.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Plane.cpp.o] Source `src/idlib/math/Plane.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/math/Plane.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/Rotation.cpp.o] Source `src/idlib/math/Rotation.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/math/Rotation.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/VecX.cpp.o] Source `src/idlib/math/VecX.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/math/VecX.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/math/MatX.cpp.o] Source `src/idlib/math/MatX.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/math/MatX.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/bv/Bounds.cpp.o] Source `src/idlib/bv/Bounds.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/bv/Bounds.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/bv/Box.cpp.o] Source `src/idlib/bv/Box.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/bv/Box.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/bv/Sphere.cpp.o] Source `src/idlib/bv/Sphere.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/bv/Sphere.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/geometry/DrawVert.cpp.o] Source `src/idlib/geometry/DrawVert.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/geometry/DrawVert.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/geometry/JointTransform.cpp.o] Source `src/idlib/geometry/JointTransform.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/geometry/JointTransform.cpp.o'.
scons: *** [build/linux-x86-release/idlib/obj/idlib/geometry/RenderMatrix.cpp.o] Source `src/idlib/geometry/RenderMatrix.cpp' not found, needed by target `build/linux-x86-release/idlib/obj/idlib/geometry/RenderMatrix.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o] Source `src/renderer-bfg/RenderWorld.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o] Source `src/renderer-bfg/RenderEntity.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/ScreenRect.cpp.o] Source `src/renderer-bfg/ScreenRect.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/ScreenRect.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o] Source `src/renderer-bfg/RenderSystem.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/GLContext.cpp.o] Source `src/renderer-bfg/GLContext.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/GLContext.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/CVarSystem.cpp.o] Source `src/renderer-bfg/CVarSystem.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/CVarSystem.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/GLMatrix.cpp.o] Source `src/renderer-bfg/GLMatrix.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/GLMatrix.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o] Source `src/renderer-bfg/RenderLog.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o] Source `src/renderer-bfg/RenderProgs.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o] Source `src/renderer-bfg/RenderProgs_GLSL.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Q3Patch.cpp.o] Source `src/renderer-bfg/Q3Patch.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Q3Patch.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderWorld_load.cpp.o] Source `src/renderer-bfg/RenderWorld_load.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderWorld_load.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Model.cpp.o] Source `src/renderer-bfg/Model.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Model.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/ModelManager.cpp.o] Source `src/renderer-bfg/ModelManager.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/ModelManager.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Model_md3.cpp.o] Source `src/renderer-bfg/Model_md3.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Model_md3.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Model_mdc.cpp.o] Source `src/renderer-bfg/Model_mdc.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Model_mdc.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Model_mds.cpp.o] Source `src/renderer-bfg/Model_mds.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Model_mds.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Material.cpp.o] Source `src/renderer-bfg/Material.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Material.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o] Source `src/renderer-bfg/MaterialManager.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Source `src/renderer-bfg/Material_shader.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o] Source `src/renderer-bfg/Shadow.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Backend.cpp.o] Source `src/renderer-bfg/Backend.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Backend.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Tess.cpp.o] Source `src/renderer-bfg/Tess.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Tess.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Tess_calc.cpp.o] Source `src/renderer-bfg/Tess_calc.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Tess_calc.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Lighting.cpp.o] Source `src/renderer-bfg/Lighting.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Lighting.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Surface.cpp.o] Source `src/renderer-bfg/Surface.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Surface.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/ImageManager.cpp.o] Source `src/renderer-bfg/ImageManager.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/ImageManager.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Image_files.cpp.o] Source `src/renderer-bfg/Image_files.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Image_files.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Image_intrinsic.cpp.o] Source `src/renderer-bfg/Image_intrinsic.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Image_intrinsic.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Image_process.cpp.o] Source `src/renderer-bfg/Image_process.cpp' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Image_process.cpp.o'.
scons: *** [build/linux-x86-release/renderer-bfg/obj/third-party/glad/src/gl.c.o] Source `src/third-party/glad/src/gl.c' not found, needed by target `build/linux-x86-release/renderer-bfg/obj/third-party/glad/src/gl.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/ai_cast.c.o] Source `src/games/game/ai_cast.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/ai_cast.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/ai_cast_characters.c.o] Source `src/games/game/ai_cast_characters.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/ai_cast_characters.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/ai_cast_debug.c.o] Source `src/games/game/ai_cast_debug.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/ai_cast_debug.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/ai_cast_events.c.o] Source `src/games/game/ai_cast_events.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/ai_cast_events.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/ai_cast_fight.c.o] Source `src/games/game/ai_cast_fight.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/ai_cast_fight.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/ai_cast_func_attack.c.o] Source `src/games/game/ai_cast_func_attack.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/ai_cast_func_attack.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/ai_cast_func_boss1.c.o] Source `src/games/game/ai_cast_func_boss1.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/ai_cast_func_boss1.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/ai_cast_funcs.c.o] Source `src/games/game/ai_cast_funcs.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/ai_cast_funcs.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/ai_cast_script.c.o] Source `src/games/game/ai_cast_script.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/ai_cast_script.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/ai_cast_script_actions.c.o] Source `src/games/game/ai_cast_script_actions.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/ai_cast_script_actions.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/ai_cast_script_ents.c.o] Source `src/games/game/ai_cast_script_ents.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/ai_cast_script_ents.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/ai_cast_sight.c.o] Source `src/games/game/ai_cast_sight.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/ai_cast_sight.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/ai_cast_think.c.o] Source `src/games/game/ai_cast_think.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/ai_cast_think.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/bg_animation.c.o] Source `src/games/game/bg_animation.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/bg_animation.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/bg_misc.c.o] Source `src/games/game/bg_misc.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/bg_misc.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/bg_pmove.c.o] Source `src/games/game/bg_pmove.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/bg_pmove.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/bg_slidemove.c.o] Source `src/games/game/bg_slidemove.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/bg_slidemove.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_active.c.o] Source `src/games/game/g_active.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_active.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_alarm.c.o] Source `src/games/game/g_alarm.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_alarm.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_bot.c.o] Source `src/games/game/g_bot.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_bot.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_client.c.o] Source `src/games/game/g_client.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_client.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_cmds.c.o] Source `src/games/game/g_cmds.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_cmds.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_combat.c.o] Source `src/games/game/g_combat.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_combat.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_items.c.o] Source `src/games/game/g_items.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_items.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_main.c.o] Source `src/games/game/g_main.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_main.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_mem.c.o] Source `src/games/game/g_mem.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_mem.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_misc.c.o] Source `src/games/game/g_misc.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_misc.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_missile.c.o] Source `src/games/game/g_missile.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_missile.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_mover.c.o] Source `src/games/game/g_mover.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_mover.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_props.c.o] Source `src/games/game/g_props.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_props.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_save.c.o] Source `src/games/game/g_save.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_save.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_script.c.o] Source `src/games/game/g_script.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_script.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_script_actions.c.o] Source `src/games/game/g_script_actions.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_script_actions.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_session.c.o] Source `src/games/game/g_session.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_session.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_spawn.c.o] Source `src/games/game/g_spawn.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_spawn.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_svcmds.c.o] Source `src/games/game/g_svcmds.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_svcmds.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_syscalls.c.o] Source `src/games/game/g_syscalls.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_syscalls.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_target.c.o] Source `src/games/game/g_target.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_target.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_team.c.o] Source `src/games/game/g_team.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_team.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_tramcar.c.o] Source `src/games/game/g_tramcar.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_tramcar.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_trigger.c.o] Source `src/games/game/g_trigger.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_trigger.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_utils.c.o] Source `src/games/game/g_utils.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_utils.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/game/g_weapon.c.o] Source `src/games/game/g_weapon.c' not found, needed by target `build/linux-x86-release/game/obj/games/game/g_weapon.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/botai/ai_chat.c.o] Source `src/games/botai/ai_chat.c' not found, needed by target `build/linux-x86-release/game/obj/games/botai/ai_chat.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/botai/ai_cmd.c.o] Source `src/games/botai/ai_cmd.c' not found, needed by target `build/linux-x86-release/game/obj/games/botai/ai_cmd.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/botai/ai_dmnet.c.o] Source `src/games/botai/ai_dmnet.c' not found, needed by target `build/linux-x86-release/game/obj/games/botai/ai_dmnet.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/botai/ai_dmq3.c.o] Source `src/games/botai/ai_dmq3.c' not found, needed by target `build/linux-x86-release/game/obj/games/botai/ai_dmq3.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/botai/ai_main.c.o] Source `src/games/botai/ai_main.c' not found, needed by target `build/linux-x86-release/game/obj/games/botai/ai_main.c.o'.
scons: *** [build/linux-x86-release/game/obj/games/botai/ai_team.c.o] Source `src/games/botai/ai_team.c' not found, needed by target `build/linux-x86-release/game/obj/games/botai/ai_team.c.o'.
scons: *** [build/linux-x86-release/game/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x86-release/game/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x86-release/game/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x86-release/game/obj/qcommon/q_shared.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/game/bg_animation.c.o] Source `src/games/game/bg_animation.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/game/bg_animation.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/game/bg_misc.c.o] Source `src/games/game/bg_misc.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/game/bg_misc.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/game/bg_pmove.c.o] Source `src/games/game/bg_pmove.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/game/bg_pmove.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/game/bg_slidemove.c.o] Source `src/games/game/bg_slidemove.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/game/bg_slidemove.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_consolecmds.c.o] Source `src/games/cgame/cg_consolecmds.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_consolecmds.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_draw.c.o] Source `src/games/cgame/cg_draw.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_draw.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_drawtools.c.o] Source `src/games/cgame/cg_drawtools.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_drawtools.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_effects.c.o] Source `src/games/cgame/cg_effects.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_effects.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_ents.c.o] Source `src/games/cgame/cg_ents.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_ents.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_event.c.o] Source `src/games/cgame/cg_event.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_event.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_flamethrower.c.o] Source `src/games/cgame/cg_flamethrower.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_flamethrower.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_info.c.o] Source `src/games/cgame/cg_info.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_info.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_localents.c.o] Source `src/games/cgame/cg_localents.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_localents.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_main.c.o] Source `src/games/cgame/cg_main.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_main.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_marks.c.o] Source `src/games/cgame/cg_marks.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_marks.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_newDraw.c.o] Source `src/games/cgame/cg_newDraw.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_newDraw.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_particles.c.o] Source `src/games/cgame/cg_particles.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_particles.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_players.c.o] Source `src/games/cgame/cg_players.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_players.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_playerstate.c.o] Source `src/games/cgame/cg_playerstate.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_playerstate.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_predict.c.o] Source `src/games/cgame/cg_predict.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_predict.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_scoreboard.c.o] Source `src/games/cgame/cg_scoreboard.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_scoreboard.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_servercmds.c.o] Source `src/games/cgame/cg_servercmds.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_servercmds.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_snapshot.c.o] Source `src/games/cgame/cg_snapshot.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_snapshot.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_sound.c.o] Source `src/games/cgame/cg_sound.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_sound.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_syscalls.c.o] Source `src/games/cgame/cg_syscalls.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_syscalls.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_trails.c.o] Source `src/games/cgame/cg_trails.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_trails.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_view.c.o] Source `src/games/cgame/cg_view.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_view.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_weapons.c.o] Source `src/games/cgame/cg_weapons.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/cgame/cg_weapons.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/games/ui/ui_shared.c.o] Source `src/games/ui/ui_shared.c' not found, needed by target `build/linux-x86-release/cgame/obj/games/ui/ui_shared.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x86-release/cgame/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x86-release/cgame/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x86-release/cgame/obj/qcommon/q_shared.c.o'.
scons: *** [build/linux-x86-release/ui/obj/games/game/bg_misc.c.o] Source `src/games/game/bg_misc.c' not found, needed by target `build/linux-x86-release/ui/obj/games/game/bg_misc.c.o'.
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_atoms.c.o] Source `src/games/ui/ui_atoms.c' not found, needed by target `build/linux-x86-release/ui/obj/games/ui/ui_atoms.c.o'.
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_gameinfo.c.o] Source `src/games/ui/ui_gameinfo.c' not found, needed by target `build/linux-x86-release/ui/obj/games/ui/ui_gameinfo.c.o'.
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_main.c.o] Source `src/games/ui/ui_main.c' not found, needed by target `build/linux-x86-release/ui/obj/games/ui/ui_main.c.o'.
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_players.c.o] Source `src/games/ui/ui_players.c' not found, needed by target `build/linux-x86-release/ui/obj/games/ui/ui_players.c.o'.
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_shared.c.o] Source `src/games/ui/ui_shared.c' not found, needed by target `build/linux-x86-release/ui/obj/games/ui/ui_shared.c.o'.
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_syscalls.c.o] Source `src/games/ui/ui_syscalls.c' not found, needed by target `build/linux-x86-release/ui/obj/games/ui/ui_syscalls.c.o'.
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_util.c.o] Source `src/games/ui/ui_util.c' not found, needed by target `build/linux-x86-release/ui/obj/games/ui/ui_util.c.o'.
scons: *** [build/linux-x86-release/ui/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x86-release/ui/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x86-release/ui/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x86-release/ui/obj/qcommon/q_shared.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_animation.c.o] Source `src/renderer/tr_animation.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_animation.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_backend.c.o] Source `src/renderer/tr_backend.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_backend.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_bsp.c.o] Source `src/renderer/tr_bsp.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_bsp.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_cmds.c.o] Source `src/renderer/tr_cmds.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_cmds.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_cmesh.c.o] Source `src/renderer/tr_cmesh.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_cmesh.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_curve.c.o] Source `src/renderer/tr_curve.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_curve.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_flares.c.o] Source `src/renderer/tr_flares.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_flares.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_font.c.o] Source `src/renderer/tr_font.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_font.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_image.c.o] Source `src/renderer/tr_image.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_image.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_init.c.o] Source `src/renderer/tr_init.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_init.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_light.c.o] Source `src/renderer/tr_light.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_light.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_main.c.o] Source `src/renderer/tr_main.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_main.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_marks.c.o] Source `src/renderer/tr_marks.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_marks.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_mesh.c.o] Source `src/renderer/tr_mesh.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_mesh.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_model.c.o] Source `src/renderer/tr_model.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_model.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_noise.c.o] Source `src/renderer/tr_noise.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_noise.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_scene.c.o] Source `src/renderer/tr_scene.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_scene.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_shade.c.o] Source `src/renderer/tr_shade.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_shade.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_shade_calc.c.o] Source `src/renderer/tr_shade_calc.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_shade_calc.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_shader.c.o] Source `src/renderer/tr_shader.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_shader.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_shadows.c.o] Source `src/renderer/tr_shadows.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_shadows.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_sky.c.o] Source `src/renderer/tr_sky.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_sky.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_surface.c.o] Source `src/renderer/tr_surface.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_surface.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_world.c.o] Source `src/renderer/tr_world.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_world.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_module.c.o] Source `src/renderer/tr_module.c' not found, needed by target `build/linux-x86-release/renderer/obj/renderer/tr_module.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/qcommon/q_math.c.o] Source `src/qcommon/q_math.c' not found, needed by target `build/linux-x86-release/renderer/obj/qcommon/q_math.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/qcommon/q_shared.c.o] Source `src/qcommon/q_shared.c' not found, needed by target `build/linux-x86-release/renderer/obj/qcommon/q_shared.c.o'.
scons: *** [build/linux-x86-release/renderer/obj/third-party/glad/src/gl.c.o] Source `src/third-party/glad/src/gl.c' not found, needed by target `build/linux-x86-release/renderer/obj/third-party/glad/src/gl.c.o'.

### failure context

- build/linux-x86-release/client/obj/client/cl_cgame.c.o

```
Setting up libgl1:i386 (1.7.0-3) ...
Setting up libglx-dev:i386 (1.7.0-3) ...
Setting up libgl-dev:i386 (1.7.0-3) ...
Processing triggers for systemd (259.5-0ubuntu3.4) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc6-i386 (2.43-2ubuntu2.4) ...
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...
 systemctl restart packagekit.service php8.5-fpm.service polkit.service rsyslog.service ssh.service systemd-journald.service systemd-networkd.service systemd-resolved.service udisks2.service

Service restarts being deferred:
 systemctl restart ModemManager.service
 systemctl restart hosted-compute-agent.service
 systemctl restart networkd-dispatcher.service
 systemctl restart systemd-logind.service
 systemctl restart walinuxagent.service

No containers need to be restarted.

User sessions running outdated binaries:
 runner @ user manager: (sd-pam)[1182]

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x86-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cgame.c.o'.
```

- build/linux-x86-release/client/obj/client/cl_cin.c.o

```
Setting up libglx-dev:i386 (1.7.0-3) ...
Setting up libgl-dev:i386 (1.7.0-3) ...
Processing triggers for systemd (259.5-0ubuntu3.4) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc6-i386 (2.43-2ubuntu2.4) ...
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...
 systemctl restart packagekit.service php8.5-fpm.service polkit.service rsyslog.service ssh.service systemd-journald.service systemd-networkd.service systemd-resolved.service udisks2.service

Service restarts being deferred:
 systemctl restart ModemManager.service
 systemctl restart hosted-compute-agent.service
 systemctl restart networkd-dispatcher.service
 systemctl restart systemd-logind.service
 systemctl restart walinuxagent.service

No containers need to be restarted.

User sessions running outdated binaries:
 runner @ user manager: (sd-pam)[1182]

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x86-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cin.c.o'.
```

- build/linux-x86-release/client/obj/client/cl_console.c.o

```
Setting up libgl-dev:i386 (1.7.0-3) ...
Processing triggers for systemd (259.5-0ubuntu3.4) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc6-i386 (2.43-2ubuntu2.4) ...
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...
 systemctl restart packagekit.service php8.5-fpm.service polkit.service rsyslog.service ssh.service systemd-journald.service systemd-networkd.service systemd-resolved.service udisks2.service

Service restarts being deferred:
 systemctl restart ModemManager.service
 systemctl restart hosted-compute-agent.service
 systemctl restart networkd-dispatcher.service
 systemctl restart systemd-logind.service
 systemctl restart walinuxagent.service

No containers need to be restarted.

User sessions running outdated binaries:
 runner @ user manager: (sd-pam)[1182]

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x86-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_console.c.o'.
```

- build/linux-x86-release/client/obj/client/cl_input.c.o

```
Processing triggers for systemd (259.5-0ubuntu3.4) ...
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc6-i386 (2.43-2ubuntu2.4) ...
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...
 systemctl restart packagekit.service php8.5-fpm.service polkit.service rsyslog.service ssh.service systemd-journald.service systemd-networkd.service systemd-resolved.service udisks2.service

Service restarts being deferred:
 systemctl restart ModemManager.service
 systemctl restart hosted-compute-agent.service
 systemctl restart networkd-dispatcher.service
 systemctl restart systemd-logind.service
 systemctl restart walinuxagent.service

No containers need to be restarted.

User sessions running outdated binaries:
 runner @ user manager: (sd-pam)[1182]

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x86-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_input.c.o'.
```

- build/linux-x86-release/client/obj/client/cl_keys.c.o

```
Processing triggers for man-db (2.13.1-1build1) ...
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc6-i386 (2.43-2ubuntu2.4) ...
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...
 systemctl restart packagekit.service php8.5-fpm.service polkit.service rsyslog.service ssh.service systemd-journald.service systemd-networkd.service systemd-resolved.service udisks2.service

Service restarts being deferred:
 systemctl restart ModemManager.service
 systemctl restart hosted-compute-agent.service
 systemctl restart networkd-dispatcher.service
 systemctl restart systemd-logind.service
 systemctl restart walinuxagent.service

No containers need to be restarted.

User sessions running outdated binaries:
 runner @ user manager: (sd-pam)[1182]

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x86-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_keys.c.o'.
```

- build/linux-x86-release/client/obj/client/cl_main.c.o

```
Not building database; man-db/auto-update is not 'true'.
Processing triggers for libc6-i386 (2.43-2ubuntu2.4) ...
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...
 systemctl restart packagekit.service php8.5-fpm.service polkit.service rsyslog.service ssh.service systemd-journald.service systemd-networkd.service systemd-resolved.service udisks2.service

Service restarts being deferred:
 systemctl restart ModemManager.service
 systemctl restart hosted-compute-agent.service
 systemctl restart networkd-dispatcher.service
 systemctl restart systemd-logind.service
 systemctl restart walinuxagent.service

No containers need to be restarted.

User sessions running outdated binaries:
 runner @ user manager: (sd-pam)[1182]

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x86-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_main.c.o'.
```

- build/linux-x86-release/client/obj/client/cl_net_chan.c.o

```
Processing triggers for libc6-i386 (2.43-2ubuntu2.4) ...
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...
 systemctl restart packagekit.service php8.5-fpm.service polkit.service rsyslog.service ssh.service systemd-journald.service systemd-networkd.service systemd-resolved.service udisks2.service

Service restarts being deferred:
 systemctl restart ModemManager.service
 systemctl restart hosted-compute-agent.service
 systemctl restart networkd-dispatcher.service
 systemctl restart systemd-logind.service
 systemctl restart walinuxagent.service

No containers need to be restarted.

User sessions running outdated binaries:
 runner @ user manager: (sd-pam)[1182]

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x86-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_net_chan.c.o'.
```

- build/linux-x86-release/client/obj/client/cl_parse.c.o

```
Processing triggers for libc-bin (2.43-2ubuntu2.4) ...

Running kernel seems to be up-to-date.

Restarting services...
 systemctl restart packagekit.service php8.5-fpm.service polkit.service rsyslog.service ssh.service systemd-journald.service systemd-networkd.service systemd-resolved.service udisks2.service

Service restarts being deferred:
 systemctl restart ModemManager.service
 systemctl restart hosted-compute-agent.service
 systemctl restart networkd-dispatcher.service
 systemctl restart systemd-logind.service
 systemctl restart walinuxagent.service

No containers need to be restarted.

User sessions running outdated binaries:
 runner @ user manager: (sd-pam)[1182]

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x86-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_net_chan.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_parse.c.o] Source `src/client/cl_parse.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_parse.c.o'.
```

- build/linux-x86-release/client/obj/client/cl_qgl.c.o

```

Running kernel seems to be up-to-date.

Restarting services...
 systemctl restart packagekit.service php8.5-fpm.service polkit.service rsyslog.service ssh.service systemd-journald.service systemd-networkd.service systemd-resolved.service udisks2.service

Service restarts being deferred:
 systemctl restart ModemManager.service
 systemctl restart hosted-compute-agent.service
 systemctl restart networkd-dispatcher.service
 systemctl restart systemd-logind.service
 systemctl restart walinuxagent.service

No containers need to be restarted.

User sessions running outdated binaries:
 runner @ user manager: (sd-pam)[1182]

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x86-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_net_chan.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_parse.c.o] Source `src/client/cl_parse.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_parse.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_qgl.c.o] Source `src/client/cl_qgl.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_qgl.c.o'.
```

- build/linux-x86-release/client/obj/client/cl_scrn.c.o

```
Running kernel seems to be up-to-date.

Restarting services...
 systemctl restart packagekit.service php8.5-fpm.service polkit.service rsyslog.service ssh.service systemd-journald.service systemd-networkd.service systemd-resolved.service udisks2.service

Service restarts being deferred:
 systemctl restart ModemManager.service
 systemctl restart hosted-compute-agent.service
 systemctl restart networkd-dispatcher.service
 systemctl restart systemd-logind.service
 systemctl restart walinuxagent.service

No containers need to be restarted.

User sessions running outdated binaries:
 runner @ user manager: (sd-pam)[1182]

No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build/linux-x86-release/client/obj/client/cl_cgame.c.o] Source `src/client/cl_cgame.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cgame.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_cin.c.o] Source `src/client/cl_cin.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_cin.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_console.c.o] Source `src/client/cl_console.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_console.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_input.c.o] Source `src/client/cl_input.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_input.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_keys.c.o] Source `src/client/cl_keys.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_keys.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_main.c.o] Source `src/client/cl_main.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_main.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_net_chan.c.o] Source `src/client/cl_net_chan.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_net_chan.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_parse.c.o] Source `src/client/cl_parse.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_parse.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_qgl.c.o] Source `src/client/cl_qgl.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_qgl.c.o'.
scons: *** [build/linux-x86-release/client/obj/client/cl_scrn.c.o] Source `src/client/cl_scrn.c' not found, needed by target `build/linux-x86-release/client/obj/client/cl_scrn.c.o'.
```


### warning kinds

- [33x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings
  - src/splines/q_shared.cpp:757:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/q_shared.cpp:774:12: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/q_shared.cpp:799:9: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:471:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:475:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:479:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:552:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:556:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:565:38: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:568:25: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:853:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:856:36: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:859:41: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:960:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:962:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:964:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:966:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1244:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1247:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1250:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1253:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1256:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1266:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1269:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1272:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1275:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1279:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1286:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1289:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1296:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1299:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1301:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1308:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
- [8x] -unused-but-set-variable
  - src/splines/util_str.cpp:437:6: warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:468:7: warning: variable 'ch' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:476:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:481:14: warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:483:14: warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1126:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1171:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1220:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
- [6x] -sizeof-array-argument
  - src/splines/math_matrix.h:94:26: warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
- [6x] -sizeof-pointer-memaccess
  - src/splines/math_matrix.h:94:28: warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
- [6x] -logical-op-parentheses
  - src/splines/math_quaternion.h:167:62: warning: '&&' within '||' [-Wlogical-op-parentheses]
- [5x] -macro-redefined
  - src/splines/q_splineshared.h:204:9: warning: 'CPUSTRING' macro redefined [-Wmacro-redefined]
- [1x] -unused-value
  - src/splines/splines.cpp:580:17: warning: expression result unused [-Wunused-value]

## uncrustify

status: success

errors: 1
warnings: 0 in 0 kinds

### errors

UNCRUSTIFY_FAILED: src/games/game/bg_pmove.cpp

### failure context


### warning kinds

## windows-latest-x64-debug-

status: failure

errors: 258
warnings: 81 in 7 kinds

### errors

scons: *** [build\windows-x64-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_qgl.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_scrn.c.obj] Source `src\client\cl_scrn.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_scrn.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_ui.c.obj] Source `src\client\cl_ui.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_ui.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\snd_adpcm.c.obj] Source `src\client\snd_adpcm.c' not found, needed by target `build\windows-x64-debug\client\obj\client\snd_adpcm.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\snd_dma.c.obj] Source `src\client\snd_dma.c' not found, needed by target `build\windows-x64-debug\client\obj\client\snd_dma.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\snd_mem.c.obj] Source `src\client\snd_mem.c' not found, needed by target `build\windows-x64-debug\client\obj\client\snd_mem.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\snd_mix.c.obj] Source `src\client\snd_mix.c' not found, needed by target `build\windows-x64-debug\client\obj\client\snd_mix.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\snd_wavelet.c.obj] Source `src\client\snd_wavelet.c' not found, needed by target `build\windows-x64-debug\client\obj\client\snd_wavelet.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\qcommon\cm_load.c.obj] Source `src\qcommon\cm_load.c' not found, needed by target `build\windows-x64-debug\client\obj\qcommon\cm_load.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\qcommon\cm_patch.c.obj] Source `src\qcommon\cm_patch.c' not found, needed by target `build\windows-x64-debug\client\obj\qcommon\cm_patch.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\qcommon\cm_polylib.c.obj] Source `src\qcommon\cm_polylib.c' not found, needed by target `build\windows-x64-debug\client\obj\qcommon\cm_polylib.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\qcommon\cm_test.c.obj] Source `src\qcommon\cm_test.c' not found, needed by target `build\windows-x64-debug\client\obj\qcommon\cm_test.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\qcommon\cm_trace.c.obj] Source `src\qcommon\cm_trace.c' not found, needed by target `build\windows-x64-debug\client\obj\qcommon\cm_trace.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\qcommon\cmd.c.obj] Source `src\qcommon\cmd.c' not found, needed by target `build\windows-x64-debug\client\obj\qcommon\cmd.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\qcommon\common.c.obj] Source `src\qcommon\common.c' not found, needed by target `build\windows-x64-debug\client\obj\qcommon\common.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\qcommon\cvar.c.obj] Source `src\qcommon\cvar.c' not found, needed by target `build\windows-x64-debug\client\obj\qcommon\cvar.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\qcommon\files.c.obj] Source `src\qcommon\files.c' not found, needed by target `build\windows-x64-debug\client\obj\qcommon\files.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\qcommon\huffman.c.obj] Source `src\qcommon\huffman.c' not found, needed by target `build\windows-x64-debug\client\obj\qcommon\huffman.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\qcommon\md4.c.obj] Source `src\qcommon\md4.c' not found, needed by target `build\windows-x64-debug\client\obj\qcommon\md4.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\qcommon\msg.c.obj] Source `src\qcommon\msg.c' not found, needed by target `build\windows-x64-debug\client\obj\qcommon\msg.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\qcommon\net_chan.c.obj] Source `src\qcommon\net_chan.c' not found, needed by target `build\windows-x64-debug\client\obj\qcommon\net_chan.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\qcommon\unzip.c.obj] Source `src\qcommon\unzip.c' not found, needed by target `build\windows-x64-debug\client\obj\qcommon\unzip.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\server\sv_bot.c.obj] Source `src\server\sv_bot.c' not found, needed by target `build\windows-x64-debug\client\obj\server\sv_bot.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\server\sv_ccmds.c.obj] Source `src\server\sv_ccmds.c' not found, needed by target `build\windows-x64-debug\client\obj\server\sv_ccmds.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\server\sv_client.c.obj] Source `src\server\sv_client.c' not found, needed by target `build\windows-x64-debug\client\obj\server\sv_client.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\server\sv_game.c.obj] Source `src\server\sv_game.c' not found, needed by target `build\windows-x64-debug\client\obj\server\sv_game.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\server\sv_init.c.obj] Source `src\server\sv_init.c' not found, needed by target `build\windows-x64-debug\client\obj\server\sv_init.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\server\sv_main.c.obj] Source `src\server\sv_main.c' not found, needed by target `build\windows-x64-debug\client\obj\server\sv_main.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\server\sv_net_chan.c.obj] Source `src\server\sv_net_chan.c' not found, needed by target `build\windows-x64-debug\client\obj\server\sv_net_chan.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\server\sv_snapshot.c.obj] Source `src\server\sv_snapshot.c' not found, needed by target `build\windows-x64-debug\client\obj\server\sv_snapshot.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\server\sv_world.c.obj] Source `src\server\sv_world.c' not found, needed by target `build\windows-x64-debug\client\obj\server\sv_world.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-debug\client\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-debug\client\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_gamma.c.obj] Source `src\sys\win32\win_gamma.c' not found, needed by target `build\windows-x64-debug\client\obj\sys\win32\win_gamma.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_glimp.c.obj] Source `src\sys\win32\win_glimp.c' not found, needed by target `build\windows-x64-debug\client\obj\sys\win32\win_glimp.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_input.c.obj] Source `src\sys\win32\win_input.c' not found, needed by target `build\windows-x64-debug\client\obj\sys\win32\win_input.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_main.c.obj] Source `src\sys\win32\win_main.c' not found, needed by target `build\windows-x64-debug\client\obj\sys\win32\win_main.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_net.c.obj] Source `src\sys\win32\win_net.c' not found, needed by target `build\windows-x64-debug\client\obj\sys\win32\win_net.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_shared.c.obj] Source `src\sys\win32\win_shared.c' not found, needed by target `build\windows-x64-debug\client\obj\sys\win32\win_shared.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_snd.c.obj] Source `src\sys\win32\win_snd.c' not found, needed by target `build\windows-x64-debug\client\obj\sys\win32\win_snd.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_syscon.c.obj] Source `src\sys\win32\win_syscon.c' not found, needed by target `build\windows-x64-debug\client\obj\sys\win32\win_syscon.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_wndproc.c.obj] Source `src\sys\win32\win_wndproc.c' not found, needed by target `build\windows-x64-debug\client\obj\sys\win32\win_wndproc.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_bspq3.c.obj] Source `src\games\botlib\be_aas_bspq3.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_aas_bspq3.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_cluster.c.obj] Source `src\games\botlib\be_aas_cluster.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_aas_cluster.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_debug.c.obj] Source `src\games\botlib\be_aas_debug.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_aas_debug.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_entity.c.obj] Source `src\games\botlib\be_aas_entity.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_aas_entity.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_file.c.obj] Source `src\games\botlib\be_aas_file.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_aas_file.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_main.c.obj] Source `src\games\botlib\be_aas_main.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_aas_main.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_move.c.obj] Source `src\games\botlib\be_aas_move.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_aas_move.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_optimize.c.obj] Source `src\games\botlib\be_aas_optimize.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_aas_optimize.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_reach.c.obj] Source `src\games\botlib\be_aas_reach.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_aas_reach.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_route.c.obj] Source `src\games\botlib\be_aas_route.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_aas_route.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_routealt.c.obj] Source `src\games\botlib\be_aas_routealt.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_aas_routealt.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_routetable.c.obj] Source `src\games\botlib\be_aas_routetable.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_aas_routetable.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_aas_sample.c.obj] Source `src\games\botlib\be_aas_sample.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_aas_sample.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_ai_char.c.obj] Source `src\games\botlib\be_ai_char.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_ai_char.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_ai_chat.c.obj] Source `src\games\botlib\be_ai_chat.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_ai_chat.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_ai_gen.c.obj] Source `src\games\botlib\be_ai_gen.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_ai_gen.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_ai_goal.c.obj] Source `src\games\botlib\be_ai_goal.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_ai_goal.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_ai_move.c.obj] Source `src\games\botlib\be_ai_move.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_ai_move.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_ai_weap.c.obj] Source `src\games\botlib\be_ai_weap.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_ai_weap.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_ai_weight.c.obj] Source `src\games\botlib\be_ai_weight.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_ai_weight.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_ea.c.obj] Source `src\games\botlib\be_ea.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_ea.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\be_interface.c.obj] Source `src\games\botlib\be_interface.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\be_interface.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\l_crc.c.obj] Source `src\games\botlib\l_crc.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\l_crc.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\l_libvar.c.obj] Source `src\games\botlib\l_libvar.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\l_libvar.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\l_log.c.obj] Source `src\games\botlib\l_log.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\l_log.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\l_memory.c.obj] Source `src\games\botlib\l_memory.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\l_memory.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\l_precomp.c.obj] Source `src\games\botlib\l_precomp.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\l_precomp.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\l_script.c.obj] Source `src\games\botlib\l_script.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\l_script.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\games\botlib\l_struct.c.obj] Source `src\games\botlib\l_struct.c' not found, needed by target `build\windows-x64-debug\client\obj\games\botlib\l_struct.c.obj'.
scons: *** [build\windows-x64-debug\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj] Source `src\tools\extractfuncs\extractfuncs.c' not found, needed by target `build\windows-x64-debug\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj'.
scons: *** [build\windows-x64-debug\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj] Source `src\tools\extractfuncs\l_log.c' not found, needed by target `build\windows-x64-debug\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj'.
scons: *** [build\windows-x64-debug\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj] Source `src\tools\extractfuncs\l_memory.c' not found, needed by target `build\windows-x64-debug\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj'.
scons: *** [build\windows-x64-debug\extractfuncs_tool\obj\tools\extractfuncs\l_precomp.c.obj] Source `src\tools\extractfuncs\l_precomp.c' not found, needed by target `build\windows-x64-debug\extractfuncs_tool\obj\tools\extractfuncs\l_precomp.c.obj'.
scons: *** [build\windows-x64-debug\extractfuncs_tool\obj\tools\extractfuncs\l_script.c.obj] Source `src\tools\extractfuncs\l_script.c' not found, needed by target `build\windows-x64-debug\extractfuncs_tool\obj\tools\extractfuncs\l_script.c.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Heap.cpp.obj] Source `src\idlib\Heap.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\Heap.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Str.cpp.obj] Source `src\idlib\Str.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\Str.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Lib.cpp.obj] Source `src\idlib\Lib.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\Lib.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Token.cpp.obj] Source `src\idlib\Token.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\Token.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Lexer.cpp.obj] Source `src\idlib\Lexer.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\Lexer.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Parser.cpp.obj] Source `src\idlib\Parser.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\Parser.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\sys\sys_assert.cpp.obj] Source `src\idlib\sys\sys_assert.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\sys\sys_assert.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj] Source `src\idlib\containers\HashIndex.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Math.cpp.obj] Source `src\idlib\math\Math.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\math\Math.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Vector.cpp.obj] Source `src\idlib\math\Vector.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\math\Vector.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Matrix.cpp.obj] Source `src\idlib\math\Matrix.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\math\Matrix.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Angles.cpp.obj] Source `src\idlib\math\Angles.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\math\Angles.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Quat.cpp.obj] Source `src\idlib\math\Quat.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\math\Quat.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Plane.cpp.obj] Source `src\idlib\math\Plane.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\math\Plane.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Rotation.cpp.obj] Source `src\idlib\math\Rotation.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\math\Rotation.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\VecX.cpp.obj] Source `src\idlib\math\VecX.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\math\VecX.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\MatX.cpp.obj] Source `src\idlib\math\MatX.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\math\MatX.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\bv\Bounds.cpp.obj] Source `src\idlib\bv\Bounds.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\bv\Bounds.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\bv\Box.cpp.obj] Source `src\idlib\bv\Box.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\bv\Box.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\bv\Sphere.cpp.obj] Source `src\idlib\bv\Sphere.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\bv\Sphere.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\geometry\DrawVert.cpp.obj] Source `src\idlib\geometry\DrawVert.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\geometry\DrawVert.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\geometry\JointTransform.cpp.obj] Source `src\idlib\geometry\JointTransform.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\geometry\JointTransform.cpp.obj'.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj] Source `src\idlib\geometry\RenderMatrix.cpp' not found, needed by target `build\windows-x64-debug\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj] Source `src\renderer-bfg\RenderWorld.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj] Source `src\renderer-bfg\RenderEntity.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj] Source `src\renderer-bfg\ScreenRect.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj] Source `src\renderer-bfg\RenderSystem.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj] Source `src\renderer-bfg\GLContext.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj] Source `src\renderer-bfg\CVarSystem.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj] Source `src\renderer-bfg\GLMatrix.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj] Source `src\renderer-bfg\RenderLog.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj] Source `src\renderer-bfg\RenderProgs.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj] Source `src\renderer-bfg\RenderProgs_GLSL.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj] Source `src\renderer-bfg\Q3Patch.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj] Source `src\renderer-bfg\RenderWorld_load.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Model.cpp.obj] Source `src\renderer-bfg\Model.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Model.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj] Source `src\renderer-bfg\ModelManager.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj] Source `src\renderer-bfg\Model_md3.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj] Source `src\renderer-bfg\Model_mdc.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj] Source `src\renderer-bfg\Model_mds.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Material.cpp.obj] Source `src\renderer-bfg\Material.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Material.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj] Source `src\renderer-bfg\MaterialManager.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj] Source `src\renderer-bfg\Material_shader.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj] Source `src\renderer-bfg\Shadow.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj] Source `src\renderer-bfg\Backend.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj] Source `src\renderer-bfg\Tess.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj] Source `src\renderer-bfg\Tess_calc.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj] Source `src\renderer-bfg\Lighting.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj] Source `src\renderer-bfg\Surface.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj] Source `src\renderer-bfg\ImageManager.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj] Source `src\renderer-bfg\Image_files.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj] Source `src\renderer-bfg\Image_intrinsic.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj] Source `src\renderer-bfg\Image_process.cpp' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj'.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\third-party\glad\src\gl.c.obj] Source `src\third-party\glad\src\gl.c' not found, needed by target `build\windows-x64-debug\renderer-bfg\obj\third-party\glad\src\gl.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast.c.obj] Source `src\games\game\ai_cast.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\ai_cast.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_characters.c.obj] Source `src\games\game\ai_cast_characters.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\ai_cast_characters.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_debug.c.obj] Source `src\games\game\ai_cast_debug.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\ai_cast_debug.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_events.c.obj] Source `src\games\game\ai_cast_events.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\ai_cast_events.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_fight.c.obj] Source `src\games\game\ai_cast_fight.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\ai_cast_fight.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_func_attack.c.obj] Source `src\games\game\ai_cast_func_attack.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\ai_cast_func_attack.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_func_boss1.c.obj] Source `src\games\game\ai_cast_func_boss1.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\ai_cast_func_boss1.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_funcs.c.obj] Source `src\games\game\ai_cast_funcs.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\ai_cast_funcs.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_script.c.obj] Source `src\games\game\ai_cast_script.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\ai_cast_script.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_script_actions.c.obj] Source `src\games\game\ai_cast_script_actions.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\ai_cast_script_actions.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_script_ents.c.obj] Source `src\games\game\ai_cast_script_ents.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\ai_cast_script_ents.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_sight.c.obj] Source `src\games\game\ai_cast_sight.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\ai_cast_sight.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\ai_cast_think.c.obj] Source `src\games\game\ai_cast_think.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\ai_cast_think.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\bg_animation.c.obj] Source `src\games\game\bg_animation.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\bg_animation.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\bg_pmove.c.obj] Source `src\games\game\bg_pmove.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\bg_pmove.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\bg_slidemove.c.obj] Source `src\games\game\bg_slidemove.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\bg_slidemove.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_active.c.obj] Source `src\games\game\g_active.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_active.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_alarm.c.obj] Source `src\games\game\g_alarm.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_alarm.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_bot.c.obj] Source `src\games\game\g_bot.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_bot.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_client.c.obj] Source `src\games\game\g_client.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_client.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_cmds.c.obj] Source `src\games\game\g_cmds.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_cmds.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_combat.c.obj] Source `src\games\game\g_combat.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_combat.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_items.c.obj] Source `src\games\game\g_items.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_items.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_main.c.obj] Source `src\games\game\g_main.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_main.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_mem.c.obj] Source `src\games\game\g_mem.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_mem.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_misc.c.obj] Source `src\games\game\g_misc.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_misc.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_missile.c.obj] Source `src\games\game\g_missile.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_missile.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_mover.c.obj] Source `src\games\game\g_mover.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_mover.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_props.c.obj] Source `src\games\game\g_props.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_props.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_save.c.obj] Source `src\games\game\g_save.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_save.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_script.c.obj] Source `src\games\game\g_script.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_script.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_script_actions.c.obj] Source `src\games\game\g_script_actions.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_script_actions.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_session.c.obj] Source `src\games\game\g_session.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_session.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_spawn.c.obj] Source `src\games\game\g_spawn.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_spawn.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_svcmds.c.obj] Source `src\games\game\g_svcmds.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_svcmds.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_syscalls.c.obj] Source `src\games\game\g_syscalls.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_syscalls.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_target.c.obj] Source `src\games\game\g_target.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_target.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_team.c.obj] Source `src\games\game\g_team.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_team.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_tramcar.c.obj] Source `src\games\game\g_tramcar.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_tramcar.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_trigger.c.obj] Source `src\games\game\g_trigger.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_trigger.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_utils.c.obj] Source `src\games\game\g_utils.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_utils.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_weapon.c.obj] Source `src\games\game\g_weapon.c' not found, needed by target `build\windows-x64-debug\game\obj\games\game\g_weapon.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\botai\ai_chat.c.obj] Source `src\games\botai\ai_chat.c' not found, needed by target `build\windows-x64-debug\game\obj\games\botai\ai_chat.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\botai\ai_cmd.c.obj] Source `src\games\botai\ai_cmd.c' not found, needed by target `build\windows-x64-debug\game\obj\games\botai\ai_cmd.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\botai\ai_dmnet.c.obj] Source `src\games\botai\ai_dmnet.c' not found, needed by target `build\windows-x64-debug\game\obj\games\botai\ai_dmnet.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\botai\ai_dmq3.c.obj] Source `src\games\botai\ai_dmq3.c' not found, needed by target `build\windows-x64-debug\game\obj\games\botai\ai_dmq3.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\botai\ai_main.c.obj] Source `src\games\botai\ai_main.c' not found, needed by target `build\windows-x64-debug\game\obj\games\botai\ai_main.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\games\botai\ai_team.c.obj] Source `src\games\botai\ai_team.c' not found, needed by target `build\windows-x64-debug\game\obj\games\botai\ai_team.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-debug\game\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-debug\game\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-debug\game\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\game\bg_animation.c.obj] Source `src\games\game\bg_animation.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\game\bg_animation.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\game\bg_pmove.c.obj] Source `src\games\game\bg_pmove.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\game\bg_pmove.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\game\bg_slidemove.c.obj] Source `src\games\game\bg_slidemove.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\game\bg_slidemove.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_consolecmds.c.obj] Source `src\games\cgame\cg_consolecmds.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_consolecmds.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_draw.c.obj] Source `src\games\cgame\cg_draw.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_draw.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_drawtools.c.obj] Source `src\games\cgame\cg_drawtools.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_drawtools.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_effects.c.obj] Source `src\games\cgame\cg_effects.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_effects.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_ents.c.obj] Source `src\games\cgame\cg_ents.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_ents.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_event.c.obj] Source `src\games\cgame\cg_event.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_event.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_flamethrower.c.obj] Source `src\games\cgame\cg_flamethrower.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_flamethrower.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_info.c.obj] Source `src\games\cgame\cg_info.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_info.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_localents.c.obj] Source `src\games\cgame\cg_localents.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_localents.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_main.c.obj] Source `src\games\cgame\cg_main.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_main.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_marks.c.obj] Source `src\games\cgame\cg_marks.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_marks.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_newDraw.c.obj] Source `src\games\cgame\cg_newDraw.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_newDraw.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_particles.c.obj] Source `src\games\cgame\cg_particles.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_particles.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_players.c.obj] Source `src\games\cgame\cg_players.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_players.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_playerstate.c.obj] Source `src\games\cgame\cg_playerstate.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_playerstate.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_predict.c.obj] Source `src\games\cgame\cg_predict.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_predict.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_scoreboard.c.obj] Source `src\games\cgame\cg_scoreboard.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_scoreboard.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_servercmds.c.obj] Source `src\games\cgame\cg_servercmds.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_servercmds.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_snapshot.c.obj] Source `src\games\cgame\cg_snapshot.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_snapshot.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_sound.c.obj] Source `src\games\cgame\cg_sound.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_sound.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_syscalls.c.obj] Source `src\games\cgame\cg_syscalls.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_syscalls.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_trails.c.obj] Source `src\games\cgame\cg_trails.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_trails.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_view.c.obj] Source `src\games\cgame\cg_view.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_view.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_weapons.c.obj] Source `src\games\cgame\cg_weapons.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\cgame\cg_weapons.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\games\ui\ui_shared.c.obj] Source `src\games\ui\ui_shared.c' not found, needed by target `build\windows-x64-debug\cgame\obj\games\ui\ui_shared.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-debug\cgame\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-debug\cgame\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-debug\cgame\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-debug\ui\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x64-debug\ui\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_atoms.c.obj] Source `src\games\ui\ui_atoms.c' not found, needed by target `build\windows-x64-debug\ui\obj\games\ui\ui_atoms.c.obj'.
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_gameinfo.c.obj] Source `src\games\ui\ui_gameinfo.c' not found, needed by target `build\windows-x64-debug\ui\obj\games\ui\ui_gameinfo.c.obj'.
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_main.c.obj] Source `src\games\ui\ui_main.c' not found, needed by target `build\windows-x64-debug\ui\obj\games\ui\ui_main.c.obj'.
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_players.c.obj] Source `src\games\ui\ui_players.c' not found, needed by target `build\windows-x64-debug\ui\obj\games\ui\ui_players.c.obj'.
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_shared.c.obj] Source `src\games\ui\ui_shared.c' not found, needed by target `build\windows-x64-debug\ui\obj\games\ui\ui_shared.c.obj'.
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_syscalls.c.obj] Source `src\games\ui\ui_syscalls.c' not found, needed by target `build\windows-x64-debug\ui\obj\games\ui\ui_syscalls.c.obj'.
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_util.c.obj] Source `src\games\ui\ui_util.c' not found, needed by target `build\windows-x64-debug\ui\obj\games\ui\ui_util.c.obj'.
scons: *** [build\windows-x64-debug\ui\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-debug\ui\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-debug\ui\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-debug\ui\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_animation.c.obj] Source `src\renderer\tr_animation.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_animation.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_backend.c.obj] Source `src\renderer\tr_backend.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_backend.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_bsp.c.obj] Source `src\renderer\tr_bsp.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_bsp.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_cmds.c.obj] Source `src\renderer\tr_cmds.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_cmds.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_cmesh.c.obj] Source `src\renderer\tr_cmesh.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_cmesh.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_curve.c.obj] Source `src\renderer\tr_curve.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_curve.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_flares.c.obj] Source `src\renderer\tr_flares.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_flares.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_font.c.obj] Source `src\renderer\tr_font.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_font.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_image.c.obj] Source `src\renderer\tr_image.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_image.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_init.c.obj] Source `src\renderer\tr_init.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_init.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_light.c.obj] Source `src\renderer\tr_light.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_light.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_main.c.obj] Source `src\renderer\tr_main.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_main.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_marks.c.obj] Source `src\renderer\tr_marks.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_marks.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_mesh.c.obj] Source `src\renderer\tr_mesh.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_mesh.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_model.c.obj] Source `src\renderer\tr_model.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_model.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_noise.c.obj] Source `src\renderer\tr_noise.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_noise.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_scene.c.obj] Source `src\renderer\tr_scene.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_scene.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_shade.c.obj] Source `src\renderer\tr_shade.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_shade.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_shade_calc.c.obj] Source `src\renderer\tr_shade_calc.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_shade_calc.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_shader.c.obj] Source `src\renderer\tr_shader.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_shader.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_shadows.c.obj] Source `src\renderer\tr_shadows.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_shadows.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_sky.c.obj] Source `src\renderer\tr_sky.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_sky.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_surface.c.obj] Source `src\renderer\tr_surface.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_surface.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_world.c.obj] Source `src\renderer\tr_world.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_world.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_module.c.obj] Source `src\renderer\tr_module.c' not found, needed by target `build\windows-x64-debug\renderer\obj\renderer\tr_module.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-debug\renderer\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-debug\renderer\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-debug\renderer\obj\third-party\glad\src\gl.c.obj] Source `src\third-party\glad\src\gl.c' not found, needed by target `build\windows-x64-debug\renderer\obj\third-party\glad\src\gl.c.obj'.

### failure context

- build\windows-x64-debug\client\obj\client\cl_cgame.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 40.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cgame.c.obj'.
```

- build\windows-x64-debug\client\obj\client\cl_cin.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 40.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cin.c.obj'.
```

- build\windows-x64-debug\client\obj\client\cl_console.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 40.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_console.c.obj'.
```

- build\windows-x64-debug\client\obj\client\cl_input.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 40.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_input.c.obj'.
```

- build\windows-x64-debug\client\obj\client\cl_keys.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 40.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_keys.c.obj'.
```

- build\windows-x64-debug\client\obj\client\cl_main.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 40.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_main.c.obj'.
```

- build\windows-x64-debug\client\obj\client\cl_net_chan.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 40.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_net_chan.c.obj'.
```

- build\windows-x64-debug\client\obj\client\cl_parse.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 40.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_parse.c.obj'.
```

- build\windows-x64-debug\client\obj\client\cl_qgl.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 40.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_qgl.c.obj'.
```

- build\windows-x64-debug\client\obj\client\cl_scrn.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 40.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_qgl.c.obj'.
scons: *** [build\windows-x64-debug\client\obj\client\cl_scrn.c.obj] Source `src\client\cl_scrn.c' not found, needed by target `build\windows-x64-debug\client\obj\client\cl_scrn.c.obj'.
```


### warning kinds

- [33x] -writable-strings
  - src\splines\q_shared.cpp(757,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(774,12): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(799,9): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(471,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(475,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(479,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(552,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(556,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(565,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(568,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(853,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(856,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(859,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(960,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(962,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(964,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(966,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1244,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1247,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1250,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1253,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1256,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1266,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1269,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1272,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1275,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1279,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1286,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1289,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1296,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1299,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1301,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1308,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
- [7x] -unused-but-set-variable
  - src\splines\util_str.cpp(468,7): warning: variable 'ch' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(476,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(481,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(483,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1126,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1171,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1220,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
- [6x] -logical-op-parentheses
  - src\splines\math_quaternion.h(167,62): warning: '&&' within '||' [-Wlogical-op-parentheses]
- [6x] -sizeof-array-argument
  - src\splines\math_matrix.h(94,26): warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
- [6x] -sizeof-pointer-memaccess
  - src\splines\math_matrix.h(94,28): warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
- [5x] -macro-redefined
  - src\splines\q_splineshared.h(94,9): warning: 'QDECL' macro redefined [-Wmacro-redefined]

## windows-latest-x64-release-

status: failure

errors: 258
warnings: 83 in 8 kinds

### errors

scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_qgl.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_scrn.c.obj] Source `src\client\cl_scrn.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_scrn.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_ui.c.obj] Source `src\client\cl_ui.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_ui.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_adpcm.c.obj] Source `src\client\snd_adpcm.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_adpcm.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_dma.c.obj] Source `src\client\snd_dma.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_dma.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_mem.c.obj] Source `src\client\snd_mem.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_mem.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_mix.c.obj] Source `src\client\snd_mix.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_mix.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_wavelet.c.obj] Source `src\client\snd_wavelet.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_wavelet.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_load.c.obj] Source `src\qcommon\cm_load.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_load.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_patch.c.obj] Source `src\qcommon\cm_patch.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_patch.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_polylib.c.obj] Source `src\qcommon\cm_polylib.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_polylib.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_test.c.obj] Source `src\qcommon\cm_test.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_test.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_trace.c.obj] Source `src\qcommon\cm_trace.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_trace.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cmd.c.obj] Source `src\qcommon\cmd.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cmd.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\common.c.obj] Source `src\qcommon\common.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\common.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cvar.c.obj] Source `src\qcommon\cvar.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cvar.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\files.c.obj] Source `src\qcommon\files.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\files.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\huffman.c.obj] Source `src\qcommon\huffman.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\huffman.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\md4.c.obj] Source `src\qcommon\md4.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\md4.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\msg.c.obj] Source `src\qcommon\msg.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\msg.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\net_chan.c.obj] Source `src\qcommon\net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\unzip.c.obj] Source `src\qcommon\unzip.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\unzip.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_bot.c.obj] Source `src\server\sv_bot.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_bot.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_ccmds.c.obj] Source `src\server\sv_ccmds.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_ccmds.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_client.c.obj] Source `src\server\sv_client.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_client.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_game.c.obj] Source `src\server\sv_game.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_game.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_init.c.obj] Source `src\server\sv_init.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_init.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_main.c.obj] Source `src\server\sv_main.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_net_chan.c.obj] Source `src\server\sv_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_snapshot.c.obj] Source `src\server\sv_snapshot.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_snapshot.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_world.c.obj] Source `src\server\sv_world.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_world.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Source `src\sys\win32\win_gamma.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Source `src\sys\win32\win_glimp.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_input.c.obj] Source `src\sys\win32\win_input.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_main.c.obj] Source `src\sys\win32\win_main.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_net.c.obj] Source `src\sys\win32\win_net.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_net.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_shared.c.obj] Source `src\sys\win32\win_shared.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_shared.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj] Source `src\sys\win32\win_snd.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_syscon.c.obj] Source `src\sys\win32\win_syscon.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_syscon.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_wndproc.c.obj] Source `src\sys\win32\win_wndproc.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_wndproc.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_bspq3.c.obj] Source `src\games\botlib\be_aas_bspq3.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_bspq3.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_cluster.c.obj] Source `src\games\botlib\be_aas_cluster.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_cluster.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_debug.c.obj] Source `src\games\botlib\be_aas_debug.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_debug.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_entity.c.obj] Source `src\games\botlib\be_aas_entity.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_entity.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_file.c.obj] Source `src\games\botlib\be_aas_file.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_file.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_main.c.obj] Source `src\games\botlib\be_aas_main.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_move.c.obj] Source `src\games\botlib\be_aas_move.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_move.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_optimize.c.obj] Source `src\games\botlib\be_aas_optimize.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_optimize.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_reach.c.obj] Source `src\games\botlib\be_aas_reach.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_reach.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_route.c.obj] Source `src\games\botlib\be_aas_route.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_route.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_routealt.c.obj] Source `src\games\botlib\be_aas_routealt.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_routealt.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_routetable.c.obj] Source `src\games\botlib\be_aas_routetable.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_routetable.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_sample.c.obj] Source `src\games\botlib\be_aas_sample.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_sample.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_char.c.obj] Source `src\games\botlib\be_ai_char.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_char.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_chat.c.obj] Source `src\games\botlib\be_ai_chat.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_chat.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_gen.c.obj] Source `src\games\botlib\be_ai_gen.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_gen.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_goal.c.obj] Source `src\games\botlib\be_ai_goal.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_goal.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_move.c.obj] Source `src\games\botlib\be_ai_move.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_move.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_weap.c.obj] Source `src\games\botlib\be_ai_weap.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_weap.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_weight.c.obj] Source `src\games\botlib\be_ai_weight.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_weight.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ea.c.obj] Source `src\games\botlib\be_ea.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ea.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_interface.c.obj] Source `src\games\botlib\be_interface.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_interface.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_crc.c.obj] Source `src\games\botlib\l_crc.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_crc.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_libvar.c.obj] Source `src\games\botlib\l_libvar.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_libvar.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_log.c.obj] Source `src\games\botlib\l_log.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_log.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_memory.c.obj] Source `src\games\botlib\l_memory.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_memory.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_precomp.c.obj] Source `src\games\botlib\l_precomp.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_precomp.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_script.c.obj] Source `src\games\botlib\l_script.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_script.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_struct.c.obj] Source `src\games\botlib\l_struct.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_struct.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj] Source `src\tools\extractfuncs\extractfuncs.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj] Source `src\tools\extractfuncs\l_log.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj] Source `src\tools\extractfuncs\l_memory.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_precomp.c.obj] Source `src\tools\extractfuncs\l_precomp.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_precomp.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_script.c.obj] Source `src\tools\extractfuncs\l_script.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_script.c.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Heap.cpp.obj] Source `src\idlib\Heap.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Heap.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Str.cpp.obj] Source `src\idlib\Str.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Str.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Lib.cpp.obj] Source `src\idlib\Lib.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Lib.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Token.cpp.obj] Source `src\idlib\Token.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Token.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Lexer.cpp.obj] Source `src\idlib\Lexer.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Lexer.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Parser.cpp.obj] Source `src\idlib\Parser.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Parser.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\sys\sys_assert.cpp.obj] Source `src\idlib\sys\sys_assert.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\sys\sys_assert.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\containers\HashIndex.cpp.obj] Source `src\idlib\containers\HashIndex.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\containers\HashIndex.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Math.cpp.obj] Source `src\idlib\math\Math.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Math.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Vector.cpp.obj] Source `src\idlib\math\Vector.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Vector.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Matrix.cpp.obj] Source `src\idlib\math\Matrix.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Matrix.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Angles.cpp.obj] Source `src\idlib\math\Angles.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Angles.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Quat.cpp.obj] Source `src\idlib\math\Quat.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Quat.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Plane.cpp.obj] Source `src\idlib\math\Plane.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Plane.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Rotation.cpp.obj] Source `src\idlib\math\Rotation.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Rotation.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\VecX.cpp.obj] Source `src\idlib\math\VecX.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\VecX.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\MatX.cpp.obj] Source `src\idlib\math\MatX.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\MatX.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\bv\Bounds.cpp.obj] Source `src\idlib\bv\Bounds.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\bv\Bounds.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\bv\Box.cpp.obj] Source `src\idlib\bv\Box.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\bv\Box.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\bv\Sphere.cpp.obj] Source `src\idlib\bv\Sphere.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\bv\Sphere.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\geometry\DrawVert.cpp.obj] Source `src\idlib\geometry\DrawVert.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\geometry\DrawVert.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\geometry\JointTransform.cpp.obj] Source `src\idlib\geometry\JointTransform.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\geometry\JointTransform.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj] Source `src\idlib\geometry\RenderMatrix.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj] Source `src\renderer-bfg\RenderWorld.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj] Source `src\renderer-bfg\RenderEntity.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj] Source `src\renderer-bfg\ScreenRect.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj] Source `src\renderer-bfg\RenderSystem.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj] Source `src\renderer-bfg\GLContext.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj] Source `src\renderer-bfg\CVarSystem.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj] Source `src\renderer-bfg\GLMatrix.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj] Source `src\renderer-bfg\RenderLog.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj] Source `src\renderer-bfg\RenderProgs.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj] Source `src\renderer-bfg\RenderProgs_GLSL.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj] Source `src\renderer-bfg\Q3Patch.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj] Source `src\renderer-bfg\RenderWorld_load.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model.cpp.obj] Source `src\renderer-bfg\Model.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj] Source `src\renderer-bfg\ModelManager.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj] Source `src\renderer-bfg\Model_md3.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj] Source `src\renderer-bfg\Model_mdc.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj] Source `src\renderer-bfg\Model_mds.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material.cpp.obj] Source `src\renderer-bfg\Material.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj] Source `src\renderer-bfg\MaterialManager.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj] Source `src\renderer-bfg\Material_shader.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj] Source `src\renderer-bfg\Shadow.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj] Source `src\renderer-bfg\Backend.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj] Source `src\renderer-bfg\Tess.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj] Source `src\renderer-bfg\Tess_calc.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj] Source `src\renderer-bfg\Lighting.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj] Source `src\renderer-bfg\Surface.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj] Source `src\renderer-bfg\ImageManager.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj] Source `src\renderer-bfg\Image_files.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj] Source `src\renderer-bfg\Image_intrinsic.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj] Source `src\renderer-bfg\Image_process.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj] Source `src\third-party\glad\src\gl.c' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast.c.obj] Source `src\games\game\ai_cast.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_characters.c.obj] Source `src\games\game\ai_cast_characters.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_characters.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_debug.c.obj] Source `src\games\game\ai_cast_debug.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_debug.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_events.c.obj] Source `src\games\game\ai_cast_events.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_events.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_fight.c.obj] Source `src\games\game\ai_cast_fight.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_fight.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_func_attack.c.obj] Source `src\games\game\ai_cast_func_attack.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_func_attack.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_func_boss1.c.obj] Source `src\games\game\ai_cast_func_boss1.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_func_boss1.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_funcs.c.obj] Source `src\games\game\ai_cast_funcs.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_funcs.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_script.c.obj] Source `src\games\game\ai_cast_script.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_script.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_script_actions.c.obj] Source `src\games\game\ai_cast_script_actions.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_script_actions.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_script_ents.c.obj] Source `src\games\game\ai_cast_script_ents.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_script_ents.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_sight.c.obj] Source `src\games\game\ai_cast_sight.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_sight.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_think.c.obj] Source `src\games\game\ai_cast_think.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_think.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_animation.c.obj] Source `src\games\game\bg_animation.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\bg_animation.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_pmove.c.obj] Source `src\games\game\bg_pmove.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\bg_pmove.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_slidemove.c.obj] Source `src\games\game\bg_slidemove.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\bg_slidemove.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_active.c.obj] Source `src\games\game\g_active.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_active.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_alarm.c.obj] Source `src\games\game\g_alarm.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_alarm.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_bot.c.obj] Source `src\games\game\g_bot.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_bot.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_client.c.obj] Source `src\games\game\g_client.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_client.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_cmds.c.obj] Source `src\games\game\g_cmds.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_cmds.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_combat.c.obj] Source `src\games\game\g_combat.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_combat.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_items.c.obj] Source `src\games\game\g_items.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_items.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_main.c.obj] Source `src\games\game\g_main.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_main.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_mem.c.obj] Source `src\games\game\g_mem.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_mem.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_misc.c.obj] Source `src\games\game\g_misc.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_misc.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_missile.c.obj] Source `src\games\game\g_missile.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_missile.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_mover.c.obj] Source `src\games\game\g_mover.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_mover.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_props.c.obj] Source `src\games\game\g_props.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_props.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_save.c.obj] Source `src\games\game\g_save.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_save.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_script.c.obj] Source `src\games\game\g_script.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_script.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_script_actions.c.obj] Source `src\games\game\g_script_actions.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_script_actions.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_session.c.obj] Source `src\games\game\g_session.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_session.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_spawn.c.obj] Source `src\games\game\g_spawn.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_spawn.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_svcmds.c.obj] Source `src\games\game\g_svcmds.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_svcmds.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_syscalls.c.obj] Source `src\games\game\g_syscalls.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_syscalls.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_target.c.obj] Source `src\games\game\g_target.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_target.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_team.c.obj] Source `src\games\game\g_team.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_team.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_tramcar.c.obj] Source `src\games\game\g_tramcar.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_tramcar.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_trigger.c.obj] Source `src\games\game\g_trigger.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_trigger.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_utils.c.obj] Source `src\games\game\g_utils.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_utils.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_weapon.c.obj] Source `src\games\game\g_weapon.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_weapon.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_chat.c.obj] Source `src\games\botai\ai_chat.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_chat.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_cmd.c.obj] Source `src\games\botai\ai_cmd.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_cmd.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_dmnet.c.obj] Source `src\games\botai\ai_dmnet.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_dmnet.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_dmq3.c.obj] Source `src\games\botai\ai_dmq3.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_dmq3.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_main.c.obj] Source `src\games\botai\ai_main.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_main.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_team.c.obj] Source `src\games\botai\ai_team.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_team.c.obj'.
scons: *** [build\windows-x64-release\game\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-release\game\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-release\game\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-release\game\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_animation.c.obj] Source `src\games\game\bg_animation.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\bg_animation.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_pmove.c.obj] Source `src\games\game\bg_pmove.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\bg_pmove.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_slidemove.c.obj] Source `src\games\game\bg_slidemove.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\bg_slidemove.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_consolecmds.c.obj] Source `src\games\cgame\cg_consolecmds.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_consolecmds.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_draw.c.obj] Source `src\games\cgame\cg_draw.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_draw.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_drawtools.c.obj] Source `src\games\cgame\cg_drawtools.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_drawtools.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_effects.c.obj] Source `src\games\cgame\cg_effects.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_effects.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj] Source `src\games\cgame\cg_ents.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_event.c.obj] Source `src\games\cgame\cg_event.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_event.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_flamethrower.c.obj] Source `src\games\cgame\cg_flamethrower.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_flamethrower.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_info.c.obj] Source `src\games\cgame\cg_info.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_info.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_localents.c.obj] Source `src\games\cgame\cg_localents.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_localents.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_main.c.obj] Source `src\games\cgame\cg_main.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_main.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_marks.c.obj] Source `src\games\cgame\cg_marks.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_marks.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_newDraw.c.obj] Source `src\games\cgame\cg_newDraw.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_newDraw.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_particles.c.obj] Source `src\games\cgame\cg_particles.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_particles.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj] Source `src\games\cgame\cg_players.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_playerstate.c.obj] Source `src\games\cgame\cg_playerstate.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_playerstate.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_predict.c.obj] Source `src\games\cgame\cg_predict.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_predict.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_scoreboard.c.obj] Source `src\games\cgame\cg_scoreboard.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_scoreboard.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_servercmds.c.obj] Source `src\games\cgame\cg_servercmds.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_servercmds.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_snapshot.c.obj] Source `src\games\cgame\cg_snapshot.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_snapshot.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_sound.c.obj] Source `src\games\cgame\cg_sound.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_sound.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_syscalls.c.obj] Source `src\games\cgame\cg_syscalls.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_syscalls.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_trails.c.obj] Source `src\games\cgame\cg_trails.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_trails.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_view.c.obj] Source `src\games\cgame\cg_view.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_view.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_weapons.c.obj] Source `src\games\cgame\cg_weapons.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_weapons.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Source `src\games\ui\ui_shared.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-release\cgame\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-release\cgame\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_atoms.c.obj] Source `src\games\ui\ui_atoms.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_atoms.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_gameinfo.c.obj] Source `src\games\ui\ui_gameinfo.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_gameinfo.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj] Source `src\games\ui\ui_main.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_players.c.obj] Source `src\games\ui\ui_players.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_players.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj] Source `src\games\ui\ui_shared.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_syscalls.c.obj] Source `src\games\ui\ui_syscalls.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_syscalls.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_util.c.obj] Source `src\games\ui\ui_util.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_util.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-release\ui\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-release\ui\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_animation.c.obj] Source `src\renderer\tr_animation.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_animation.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_backend.c.obj] Source `src\renderer\tr_backend.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_backend.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_bsp.c.obj] Source `src\renderer\tr_bsp.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_bsp.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_cmds.c.obj] Source `src\renderer\tr_cmds.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_cmds.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj] Source `src\renderer\tr_cmesh.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_curve.c.obj] Source `src\renderer\tr_curve.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_curve.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_flares.c.obj] Source `src\renderer\tr_flares.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_flares.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_font.c.obj] Source `src\renderer\tr_font.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_font.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_image.c.obj] Source `src\renderer\tr_image.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_image.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_init.c.obj] Source `src\renderer\tr_init.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_init.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_light.c.obj] Source `src\renderer\tr_light.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_light.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_main.c.obj] Source `src\renderer\tr_main.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_main.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_marks.c.obj] Source `src\renderer\tr_marks.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_marks.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj] Source `src\renderer\tr_mesh.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Source `src\renderer\tr_model.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_noise.c.obj] Source `src\renderer\tr_noise.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_noise.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_scene.c.obj] Source `src\renderer\tr_scene.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_scene.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj] Source `src\renderer\tr_shade.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj] Source `src\renderer\tr_shade_calc.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj] Source `src\renderer\tr_shader.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shadows.c.obj] Source `src\renderer\tr_shadows.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_shadows.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_sky.c.obj] Source `src\renderer\tr_sky.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_sky.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_surface.c.obj] Source `src\renderer\tr_surface.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_surface.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_world.c.obj] Source `src\renderer\tr_world.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_world.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_module.c.obj] Source `src\renderer\tr_module.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_module.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-release\renderer\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-release\renderer\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\third-party\glad\src\gl.c.obj] Source `src\third-party\glad\src\gl.c' not found, needed by target `build\windows-x64-release\renderer\obj\third-party\glad\src\gl.c.obj'.

### failure context

- build\windows-x64-release\client\obj\client\cl_cgame.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 16.7 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_cin.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 16.7 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_console.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 16.7 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_input.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 16.7 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_keys.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 16.7 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 16.7 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_net_chan.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 16.7 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_parse.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 16.7 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_parse.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_qgl.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 16.7 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_qgl.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_scrn.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 16.7 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_qgl.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_scrn.c.obj] Source `src\client\cl_scrn.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_scrn.c.obj'.
```


### warning kinds

- [33x] -writable-strings
  - src\splines\q_shared.cpp(757,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(774,12): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(799,9): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(471,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(475,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(479,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(552,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(556,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(565,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(568,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(853,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(856,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(859,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(960,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(962,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(964,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(966,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1244,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1247,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1250,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1253,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1256,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1266,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1269,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1272,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1275,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1279,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1286,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1289,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1296,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1299,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1301,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1308,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
- [8x] -unused-but-set-variable
  - src\splines\util_str.cpp(437,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(468,7): warning: variable 'ch' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(476,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(481,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(483,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1126,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1171,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1220,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
- [6x] -logical-op-parentheses
  - src\splines\math_quaternion.h(167,62): warning: '&&' within '||' [-Wlogical-op-parentheses]
- [6x] -sizeof-array-argument
  - src\splines\math_matrix.h(94,26): warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
- [6x] -sizeof-pointer-memaccess
  - src\splines\math_matrix.h(94,28): warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
- [5x] -macro-redefined
  - src\splines\q_splineshared.h(94,9): warning: 'QDECL' macro redefined [-Wmacro-redefined]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]

## windows-latest-x64-release-cgame

status: failure

errors: 256
warnings: 83 in 8 kinds

### errors

scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_qgl.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_scrn.c.obj] Source `src\client\cl_scrn.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_scrn.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_ui.c.obj] Source `src\client\cl_ui.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_ui.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_adpcm.c.obj] Source `src\client\snd_adpcm.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_adpcm.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_dma.c.obj] Source `src\client\snd_dma.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_dma.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_mem.c.obj] Source `src\client\snd_mem.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_mem.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_mix.c.obj] Source `src\client\snd_mix.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_mix.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_wavelet.c.obj] Source `src\client\snd_wavelet.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_wavelet.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_load.c.obj] Source `src\qcommon\cm_load.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_load.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_patch.c.obj] Source `src\qcommon\cm_patch.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_patch.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_polylib.c.obj] Source `src\qcommon\cm_polylib.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_polylib.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_test.c.obj] Source `src\qcommon\cm_test.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_test.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_trace.c.obj] Source `src\qcommon\cm_trace.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_trace.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cmd.c.obj] Source `src\qcommon\cmd.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cmd.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\common.c.obj] Source `src\qcommon\common.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\common.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cvar.c.obj] Source `src\qcommon\cvar.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cvar.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\files.c.obj] Source `src\qcommon\files.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\files.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\huffman.c.obj] Source `src\qcommon\huffman.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\huffman.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\md4.c.obj] Source `src\qcommon\md4.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\md4.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\msg.c.obj] Source `src\qcommon\msg.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\msg.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\net_chan.c.obj] Source `src\qcommon\net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\unzip.c.obj] Source `src\qcommon\unzip.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\unzip.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_bot.c.obj] Source `src\server\sv_bot.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_bot.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_ccmds.c.obj] Source `src\server\sv_ccmds.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_ccmds.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_client.c.obj] Source `src\server\sv_client.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_client.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_game.c.obj] Source `src\server\sv_game.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_game.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_init.c.obj] Source `src\server\sv_init.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_init.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_main.c.obj] Source `src\server\sv_main.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_net_chan.c.obj] Source `src\server\sv_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_snapshot.c.obj] Source `src\server\sv_snapshot.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_snapshot.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_world.c.obj] Source `src\server\sv_world.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_world.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Source `src\sys\win32\win_gamma.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Source `src\sys\win32\win_glimp.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_input.c.obj] Source `src\sys\win32\win_input.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_main.c.obj] Source `src\sys\win32\win_main.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_net.c.obj] Source `src\sys\win32\win_net.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_net.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_shared.c.obj] Source `src\sys\win32\win_shared.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_shared.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj] Source `src\sys\win32\win_snd.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_syscon.c.obj] Source `src\sys\win32\win_syscon.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_syscon.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_wndproc.c.obj] Source `src\sys\win32\win_wndproc.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_wndproc.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_bspq3.c.obj] Source `src\games\botlib\be_aas_bspq3.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_bspq3.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_cluster.c.obj] Source `src\games\botlib\be_aas_cluster.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_cluster.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_debug.c.obj] Source `src\games\botlib\be_aas_debug.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_debug.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_entity.c.obj] Source `src\games\botlib\be_aas_entity.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_entity.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_file.c.obj] Source `src\games\botlib\be_aas_file.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_file.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_main.c.obj] Source `src\games\botlib\be_aas_main.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_move.c.obj] Source `src\games\botlib\be_aas_move.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_move.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_optimize.c.obj] Source `src\games\botlib\be_aas_optimize.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_optimize.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_reach.c.obj] Source `src\games\botlib\be_aas_reach.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_reach.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_route.c.obj] Source `src\games\botlib\be_aas_route.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_route.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_routealt.c.obj] Source `src\games\botlib\be_aas_routealt.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_routealt.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_routetable.c.obj] Source `src\games\botlib\be_aas_routetable.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_routetable.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_sample.c.obj] Source `src\games\botlib\be_aas_sample.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_sample.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_char.c.obj] Source `src\games\botlib\be_ai_char.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_char.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_chat.c.obj] Source `src\games\botlib\be_ai_chat.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_chat.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_gen.c.obj] Source `src\games\botlib\be_ai_gen.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_gen.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_goal.c.obj] Source `src\games\botlib\be_ai_goal.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_goal.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_move.c.obj] Source `src\games\botlib\be_ai_move.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_move.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_weap.c.obj] Source `src\games\botlib\be_ai_weap.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_weap.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_weight.c.obj] Source `src\games\botlib\be_ai_weight.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_weight.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ea.c.obj] Source `src\games\botlib\be_ea.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ea.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_interface.c.obj] Source `src\games\botlib\be_interface.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_interface.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_crc.c.obj] Source `src\games\botlib\l_crc.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_crc.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_libvar.c.obj] Source `src\games\botlib\l_libvar.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_libvar.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_log.c.obj] Source `src\games\botlib\l_log.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_log.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_memory.c.obj] Source `src\games\botlib\l_memory.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_memory.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_precomp.c.obj] Source `src\games\botlib\l_precomp.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_precomp.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_script.c.obj] Source `src\games\botlib\l_script.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_script.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_struct.c.obj] Source `src\games\botlib\l_struct.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_struct.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_animation.c.obj] Source `src\games\game\bg_animation.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\bg_animation.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_pmove.c.obj] Source `src\games\game\bg_pmove.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\bg_pmove.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_slidemove.c.obj] Source `src\games\game\bg_slidemove.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\bg_slidemove.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_consolecmds.c.obj] Source `src\games\cgame\cg_consolecmds.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_consolecmds.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_draw.c.obj] Source `src\games\cgame\cg_draw.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_draw.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_drawtools.c.obj] Source `src\games\cgame\cg_drawtools.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_drawtools.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_effects.c.obj] Source `src\games\cgame\cg_effects.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_effects.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj] Source `src\games\cgame\cg_ents.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_event.c.obj] Source `src\games\cgame\cg_event.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_event.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_flamethrower.c.obj] Source `src\games\cgame\cg_flamethrower.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_flamethrower.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_info.c.obj] Source `src\games\cgame\cg_info.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_info.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_localents.c.obj] Source `src\games\cgame\cg_localents.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_localents.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_main.c.obj] Source `src\games\cgame\cg_main.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_main.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_marks.c.obj] Source `src\games\cgame\cg_marks.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_marks.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_newDraw.c.obj] Source `src\games\cgame\cg_newDraw.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_newDraw.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_particles.c.obj] Source `src\games\cgame\cg_particles.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_particles.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj] Source `src\games\cgame\cg_players.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_playerstate.c.obj] Source `src\games\cgame\cg_playerstate.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_playerstate.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_predict.c.obj] Source `src\games\cgame\cg_predict.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_predict.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_scoreboard.c.obj] Source `src\games\cgame\cg_scoreboard.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_scoreboard.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_servercmds.c.obj] Source `src\games\cgame\cg_servercmds.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_servercmds.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_snapshot.c.obj] Source `src\games\cgame\cg_snapshot.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_snapshot.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_sound.c.obj] Source `src\games\cgame\cg_sound.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_sound.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_syscalls.c.obj] Source `src\games\cgame\cg_syscalls.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_syscalls.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_trails.c.obj] Source `src\games\cgame\cg_trails.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_trails.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_view.c.obj] Source `src\games\cgame\cg_view.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_view.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_weapons.c.obj] Source `src\games\cgame\cg_weapons.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_weapons.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Source `src\games\ui\ui_shared.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj] Source `src\tools\extractfuncs\extractfuncs.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj] Source `src\tools\extractfuncs\l_log.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj] Source `src\tools\extractfuncs\l_memory.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_precomp.c.obj] Source `src\tools\extractfuncs\l_precomp.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_precomp.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_script.c.obj] Source `src\tools\extractfuncs\l_script.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_script.c.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Heap.cpp.obj] Source `src\idlib\Heap.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Heap.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Str.cpp.obj] Source `src\idlib\Str.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Str.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Lib.cpp.obj] Source `src\idlib\Lib.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Lib.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Token.cpp.obj] Source `src\idlib\Token.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Token.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Lexer.cpp.obj] Source `src\idlib\Lexer.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Lexer.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Parser.cpp.obj] Source `src\idlib\Parser.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Parser.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\sys\sys_assert.cpp.obj] Source `src\idlib\sys\sys_assert.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\sys\sys_assert.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\containers\HashIndex.cpp.obj] Source `src\idlib\containers\HashIndex.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\containers\HashIndex.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Math.cpp.obj] Source `src\idlib\math\Math.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Math.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Vector.cpp.obj] Source `src\idlib\math\Vector.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Vector.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Matrix.cpp.obj] Source `src\idlib\math\Matrix.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Matrix.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Angles.cpp.obj] Source `src\idlib\math\Angles.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Angles.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Quat.cpp.obj] Source `src\idlib\math\Quat.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Quat.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Plane.cpp.obj] Source `src\idlib\math\Plane.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Plane.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Rotation.cpp.obj] Source `src\idlib\math\Rotation.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Rotation.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\VecX.cpp.obj] Source `src\idlib\math\VecX.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\VecX.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\MatX.cpp.obj] Source `src\idlib\math\MatX.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\MatX.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\bv\Bounds.cpp.obj] Source `src\idlib\bv\Bounds.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\bv\Bounds.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\bv\Box.cpp.obj] Source `src\idlib\bv\Box.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\bv\Box.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\bv\Sphere.cpp.obj] Source `src\idlib\bv\Sphere.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\bv\Sphere.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\geometry\DrawVert.cpp.obj] Source `src\idlib\geometry\DrawVert.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\geometry\DrawVert.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\geometry\JointTransform.cpp.obj] Source `src\idlib\geometry\JointTransform.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\geometry\JointTransform.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj] Source `src\idlib\geometry\RenderMatrix.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj] Source `src\renderer-bfg\RenderWorld.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj] Source `src\renderer-bfg\RenderEntity.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj] Source `src\renderer-bfg\ScreenRect.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj] Source `src\renderer-bfg\RenderSystem.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj] Source `src\renderer-bfg\GLContext.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj] Source `src\renderer-bfg\CVarSystem.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj] Source `src\renderer-bfg\GLMatrix.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj] Source `src\renderer-bfg\RenderLog.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj] Source `src\renderer-bfg\RenderProgs.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj] Source `src\renderer-bfg\RenderProgs_GLSL.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj] Source `src\renderer-bfg\Q3Patch.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj] Source `src\renderer-bfg\RenderWorld_load.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model.cpp.obj] Source `src\renderer-bfg\Model.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj] Source `src\renderer-bfg\ModelManager.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj] Source `src\renderer-bfg\Model_md3.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj] Source `src\renderer-bfg\Model_mdc.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj] Source `src\renderer-bfg\Model_mds.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material.cpp.obj] Source `src\renderer-bfg\Material.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj] Source `src\renderer-bfg\MaterialManager.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj] Source `src\renderer-bfg\Material_shader.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj] Source `src\renderer-bfg\Shadow.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj] Source `src\renderer-bfg\Backend.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj] Source `src\renderer-bfg\Tess.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj] Source `src\renderer-bfg\Tess_calc.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj] Source `src\renderer-bfg\Lighting.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj] Source `src\renderer-bfg\Surface.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj] Source `src\renderer-bfg\ImageManager.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj] Source `src\renderer-bfg\Image_files.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj] Source `src\renderer-bfg\Image_intrinsic.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj] Source `src\renderer-bfg\Image_process.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj] Source `src\third-party\glad\src\gl.c' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast.c.obj] Source `src\games\game\ai_cast.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_characters.c.obj] Source `src\games\game\ai_cast_characters.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_characters.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_debug.c.obj] Source `src\games\game\ai_cast_debug.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_debug.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_events.c.obj] Source `src\games\game\ai_cast_events.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_events.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_fight.c.obj] Source `src\games\game\ai_cast_fight.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_fight.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_func_attack.c.obj] Source `src\games\game\ai_cast_func_attack.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_func_attack.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_func_boss1.c.obj] Source `src\games\game\ai_cast_func_boss1.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_func_boss1.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_funcs.c.obj] Source `src\games\game\ai_cast_funcs.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_funcs.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_script.c.obj] Source `src\games\game\ai_cast_script.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_script.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_script_actions.c.obj] Source `src\games\game\ai_cast_script_actions.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_script_actions.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_script_ents.c.obj] Source `src\games\game\ai_cast_script_ents.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_script_ents.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_sight.c.obj] Source `src\games\game\ai_cast_sight.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_sight.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_think.c.obj] Source `src\games\game\ai_cast_think.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_think.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_animation.c.obj] Source `src\games\game\bg_animation.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\bg_animation.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_pmove.c.obj] Source `src\games\game\bg_pmove.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\bg_pmove.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_slidemove.c.obj] Source `src\games\game\bg_slidemove.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\bg_slidemove.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_active.c.obj] Source `src\games\game\g_active.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_active.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_alarm.c.obj] Source `src\games\game\g_alarm.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_alarm.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_bot.c.obj] Source `src\games\game\g_bot.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_bot.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_client.c.obj] Source `src\games\game\g_client.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_client.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_cmds.c.obj] Source `src\games\game\g_cmds.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_cmds.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_combat.c.obj] Source `src\games\game\g_combat.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_combat.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_items.c.obj] Source `src\games\game\g_items.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_items.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_main.c.obj] Source `src\games\game\g_main.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_main.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_mem.c.obj] Source `src\games\game\g_mem.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_mem.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_misc.c.obj] Source `src\games\game\g_misc.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_misc.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_missile.c.obj] Source `src\games\game\g_missile.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_missile.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_mover.c.obj] Source `src\games\game\g_mover.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_mover.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_props.c.obj] Source `src\games\game\g_props.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_props.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_save.c.obj] Source `src\games\game\g_save.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_save.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_script.c.obj] Source `src\games\game\g_script.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_script.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_script_actions.c.obj] Source `src\games\game\g_script_actions.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_script_actions.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_session.c.obj] Source `src\games\game\g_session.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_session.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_spawn.c.obj] Source `src\games\game\g_spawn.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_spawn.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_svcmds.c.obj] Source `src\games\game\g_svcmds.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_svcmds.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_syscalls.c.obj] Source `src\games\game\g_syscalls.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_syscalls.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_target.c.obj] Source `src\games\game\g_target.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_target.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_team.c.obj] Source `src\games\game\g_team.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_team.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_tramcar.c.obj] Source `src\games\game\g_tramcar.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_tramcar.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_trigger.c.obj] Source `src\games\game\g_trigger.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_trigger.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_utils.c.obj] Source `src\games\game\g_utils.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_utils.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_weapon.c.obj] Source `src\games\game\g_weapon.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_weapon.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_chat.c.obj] Source `src\games\botai\ai_chat.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_chat.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_cmd.c.obj] Source `src\games\botai\ai_cmd.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_cmd.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_dmnet.c.obj] Source `src\games\botai\ai_dmnet.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_dmnet.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_dmq3.c.obj] Source `src\games\botai\ai_dmq3.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_dmq3.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_main.c.obj] Source `src\games\botai\ai_main.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_main.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_team.c.obj] Source `src\games\botai\ai_team.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_team.c.obj'.
scons: *** [build\windows-x64-release\game\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-release\game\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-release\game\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-release\game\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_atoms.c.obj] Source `src\games\ui\ui_atoms.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_atoms.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_gameinfo.c.obj] Source `src\games\ui\ui_gameinfo.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_gameinfo.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj] Source `src\games\ui\ui_main.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_players.c.obj] Source `src\games\ui\ui_players.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_players.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj] Source `src\games\ui\ui_shared.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_syscalls.c.obj] Source `src\games\ui\ui_syscalls.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_syscalls.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_util.c.obj] Source `src\games\ui\ui_util.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_util.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-release\ui\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-release\ui\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_animation.c.obj] Source `src\renderer\tr_animation.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_animation.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_backend.c.obj] Source `src\renderer\tr_backend.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_backend.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_bsp.c.obj] Source `src\renderer\tr_bsp.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_bsp.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_cmds.c.obj] Source `src\renderer\tr_cmds.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_cmds.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj] Source `src\renderer\tr_cmesh.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_curve.c.obj] Source `src\renderer\tr_curve.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_curve.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_flares.c.obj] Source `src\renderer\tr_flares.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_flares.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_font.c.obj] Source `src\renderer\tr_font.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_font.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_image.c.obj] Source `src\renderer\tr_image.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_image.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_init.c.obj] Source `src\renderer\tr_init.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_init.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_light.c.obj] Source `src\renderer\tr_light.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_light.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_main.c.obj] Source `src\renderer\tr_main.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_main.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_marks.c.obj] Source `src\renderer\tr_marks.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_marks.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj] Source `src\renderer\tr_mesh.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Source `src\renderer\tr_model.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_noise.c.obj] Source `src\renderer\tr_noise.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_noise.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_scene.c.obj] Source `src\renderer\tr_scene.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_scene.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj] Source `src\renderer\tr_shade.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj] Source `src\renderer\tr_shade_calc.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj] Source `src\renderer\tr_shader.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shadows.c.obj] Source `src\renderer\tr_shadows.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_shadows.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_sky.c.obj] Source `src\renderer\tr_sky.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_sky.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_surface.c.obj] Source `src\renderer\tr_surface.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_surface.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_world.c.obj] Source `src\renderer\tr_world.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_world.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_module.c.obj] Source `src\renderer\tr_module.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_module.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-release\renderer\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-release\renderer\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\third-party\glad\src\gl.c.obj] Source `src\third-party\glad\src\gl.c' not found, needed by target `build\windows-x64-release\renderer\obj\third-party\glad\src\gl.c.obj'.

### failure context

- build\windows-x64-release\client\obj\client\cl_cgame.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 80.8 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_cin.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 80.8 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_console.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 80.8 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_input.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 80.8 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_keys.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 80.8 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 80.8 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_net_chan.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 80.8 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_parse.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 80.8 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_parse.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_qgl.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 80.8 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_qgl.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_scrn.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 80.8 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_qgl.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_scrn.c.obj] Source `src\client\cl_scrn.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_scrn.c.obj'.
```


### warning kinds

- [33x] -writable-strings
  - src\splines\q_shared.cpp(757,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(774,12): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(799,9): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(471,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(475,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(479,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(552,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(556,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(565,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(568,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(853,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(856,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(859,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(960,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(962,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(964,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(966,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1244,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1247,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1250,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1253,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1256,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1266,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1269,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1272,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1275,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1279,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1286,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1289,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1296,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1299,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1301,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1308,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
- [8x] -unused-but-set-variable
  - src\splines\util_str.cpp(437,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(468,7): warning: variable 'ch' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(476,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(481,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(483,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1126,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1171,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1220,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
- [6x] -logical-op-parentheses
  - src\splines\math_quaternion.h(167,62): warning: '&&' within '||' [-Wlogical-op-parentheses]
- [6x] -sizeof-array-argument
  - src\splines\math_matrix.h(94,26): warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
- [6x] -sizeof-pointer-memaccess
  - src\splines\math_matrix.h(94,28): warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
- [5x] -macro-redefined
  - src\splines\q_splineshared.h(94,9): warning: 'QDECL' macro redefined [-Wmacro-redefined]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]

## windows-latest-x64-release-game,renderer

status: failure

errors: 253
warnings: 83 in 8 kinds

### errors

scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_qgl.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_scrn.c.obj] Source `src\client\cl_scrn.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_scrn.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_ui.c.obj] Source `src\client\cl_ui.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_ui.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_adpcm.c.obj] Source `src\client\snd_adpcm.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_adpcm.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_dma.c.obj] Source `src\client\snd_dma.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_dma.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_mem.c.obj] Source `src\client\snd_mem.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_mem.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_mix.c.obj] Source `src\client\snd_mix.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_mix.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_wavelet.c.obj] Source `src\client\snd_wavelet.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_wavelet.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_load.c.obj] Source `src\qcommon\cm_load.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_load.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_patch.c.obj] Source `src\qcommon\cm_patch.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_patch.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_polylib.c.obj] Source `src\qcommon\cm_polylib.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_polylib.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_test.c.obj] Source `src\qcommon\cm_test.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_test.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_trace.c.obj] Source `src\qcommon\cm_trace.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_trace.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cmd.c.obj] Source `src\qcommon\cmd.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cmd.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\common.c.obj] Source `src\qcommon\common.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\common.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cvar.c.obj] Source `src\qcommon\cvar.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cvar.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\files.c.obj] Source `src\qcommon\files.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\files.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\huffman.c.obj] Source `src\qcommon\huffman.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\huffman.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\md4.c.obj] Source `src\qcommon\md4.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\md4.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\msg.c.obj] Source `src\qcommon\msg.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\msg.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\net_chan.c.obj] Source `src\qcommon\net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\unzip.c.obj] Source `src\qcommon\unzip.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\unzip.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_bot.c.obj] Source `src\server\sv_bot.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_bot.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_ccmds.c.obj] Source `src\server\sv_ccmds.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_ccmds.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_client.c.obj] Source `src\server\sv_client.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_client.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_game.c.obj] Source `src\server\sv_game.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_game.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_init.c.obj] Source `src\server\sv_init.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_init.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_main.c.obj] Source `src\server\sv_main.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_net_chan.c.obj] Source `src\server\sv_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_snapshot.c.obj] Source `src\server\sv_snapshot.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_snapshot.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_world.c.obj] Source `src\server\sv_world.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_world.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Source `src\sys\win32\win_gamma.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Source `src\sys\win32\win_glimp.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_input.c.obj] Source `src\sys\win32\win_input.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_main.c.obj] Source `src\sys\win32\win_main.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_net.c.obj] Source `src\sys\win32\win_net.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_net.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_shared.c.obj] Source `src\sys\win32\win_shared.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_shared.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj] Source `src\sys\win32\win_snd.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_syscon.c.obj] Source `src\sys\win32\win_syscon.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_syscon.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_wndproc.c.obj] Source `src\sys\win32\win_wndproc.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_wndproc.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_bspq3.c.obj] Source `src\games\botlib\be_aas_bspq3.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_bspq3.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_cluster.c.obj] Source `src\games\botlib\be_aas_cluster.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_cluster.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_debug.c.obj] Source `src\games\botlib\be_aas_debug.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_debug.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_entity.c.obj] Source `src\games\botlib\be_aas_entity.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_entity.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_file.c.obj] Source `src\games\botlib\be_aas_file.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_file.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_main.c.obj] Source `src\games\botlib\be_aas_main.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_move.c.obj] Source `src\games\botlib\be_aas_move.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_move.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_optimize.c.obj] Source `src\games\botlib\be_aas_optimize.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_optimize.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_reach.c.obj] Source `src\games\botlib\be_aas_reach.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_reach.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_route.c.obj] Source `src\games\botlib\be_aas_route.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_route.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_routealt.c.obj] Source `src\games\botlib\be_aas_routealt.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_routealt.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_routetable.c.obj] Source `src\games\botlib\be_aas_routetable.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_routetable.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_sample.c.obj] Source `src\games\botlib\be_aas_sample.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_sample.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_char.c.obj] Source `src\games\botlib\be_ai_char.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_char.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_chat.c.obj] Source `src\games\botlib\be_ai_chat.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_chat.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_gen.c.obj] Source `src\games\botlib\be_ai_gen.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_gen.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_goal.c.obj] Source `src\games\botlib\be_ai_goal.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_goal.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_move.c.obj] Source `src\games\botlib\be_ai_move.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_move.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_weap.c.obj] Source `src\games\botlib\be_ai_weap.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_weap.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_weight.c.obj] Source `src\games\botlib\be_ai_weight.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_weight.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ea.c.obj] Source `src\games\botlib\be_ea.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ea.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_interface.c.obj] Source `src\games\botlib\be_interface.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_interface.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_crc.c.obj] Source `src\games\botlib\l_crc.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_crc.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_libvar.c.obj] Source `src\games\botlib\l_libvar.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_libvar.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_log.c.obj] Source `src\games\botlib\l_log.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_log.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_memory.c.obj] Source `src\games\botlib\l_memory.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_memory.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_precomp.c.obj] Source `src\games\botlib\l_precomp.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_precomp.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_script.c.obj] Source `src\games\botlib\l_script.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_script.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_struct.c.obj] Source `src\games\botlib\l_struct.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_struct.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast.c.obj] Source `src\games\game\ai_cast.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_characters.c.obj] Source `src\games\game\ai_cast_characters.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_characters.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_debug.c.obj] Source `src\games\game\ai_cast_debug.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_debug.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_events.c.obj] Source `src\games\game\ai_cast_events.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_events.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_fight.c.obj] Source `src\games\game\ai_cast_fight.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_fight.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_func_attack.c.obj] Source `src\games\game\ai_cast_func_attack.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_func_attack.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_func_boss1.c.obj] Source `src\games\game\ai_cast_func_boss1.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_func_boss1.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_funcs.c.obj] Source `src\games\game\ai_cast_funcs.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_funcs.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_script.c.obj] Source `src\games\game\ai_cast_script.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_script.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_script_actions.c.obj] Source `src\games\game\ai_cast_script_actions.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_script_actions.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_script_ents.c.obj] Source `src\games\game\ai_cast_script_ents.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_script_ents.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_sight.c.obj] Source `src\games\game\ai_cast_sight.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_sight.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_think.c.obj] Source `src\games\game\ai_cast_think.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_think.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_animation.c.obj] Source `src\games\game\bg_animation.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\bg_animation.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_pmove.c.obj] Source `src\games\game\bg_pmove.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\bg_pmove.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_slidemove.c.obj] Source `src\games\game\bg_slidemove.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\bg_slidemove.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_active.c.obj] Source `src\games\game\g_active.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_active.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_alarm.c.obj] Source `src\games\game\g_alarm.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_alarm.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_bot.c.obj] Source `src\games\game\g_bot.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_bot.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_client.c.obj] Source `src\games\game\g_client.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_client.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_cmds.c.obj] Source `src\games\game\g_cmds.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_cmds.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_combat.c.obj] Source `src\games\game\g_combat.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_combat.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_items.c.obj] Source `src\games\game\g_items.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_items.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_main.c.obj] Source `src\games\game\g_main.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_main.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_mem.c.obj] Source `src\games\game\g_mem.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_mem.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_misc.c.obj] Source `src\games\game\g_misc.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_misc.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_missile.c.obj] Source `src\games\game\g_missile.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_missile.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_mover.c.obj] Source `src\games\game\g_mover.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_mover.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_props.c.obj] Source `src\games\game\g_props.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_props.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_save.c.obj] Source `src\games\game\g_save.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_save.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_script.c.obj] Source `src\games\game\g_script.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_script.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_script_actions.c.obj] Source `src\games\game\g_script_actions.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_script_actions.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_session.c.obj] Source `src\games\game\g_session.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_session.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_spawn.c.obj] Source `src\games\game\g_spawn.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_spawn.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_svcmds.c.obj] Source `src\games\game\g_svcmds.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_svcmds.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_syscalls.c.obj] Source `src\games\game\g_syscalls.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_syscalls.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_target.c.obj] Source `src\games\game\g_target.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_target.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_team.c.obj] Source `src\games\game\g_team.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_team.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_tramcar.c.obj] Source `src\games\game\g_tramcar.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_tramcar.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_trigger.c.obj] Source `src\games\game\g_trigger.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_trigger.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_utils.c.obj] Source `src\games\game\g_utils.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_utils.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_weapon.c.obj] Source `src\games\game\g_weapon.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_weapon.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_chat.c.obj] Source `src\games\botai\ai_chat.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_chat.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_cmd.c.obj] Source `src\games\botai\ai_cmd.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_cmd.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_dmnet.c.obj] Source `src\games\botai\ai_dmnet.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_dmnet.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_dmq3.c.obj] Source `src\games\botai\ai_dmq3.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_dmq3.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_main.c.obj] Source `src\games\botai\ai_main.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_main.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_team.c.obj] Source `src\games\botai\ai_team.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_team.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_animation.c.obj] Source `src\renderer\tr_animation.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_animation.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_backend.c.obj] Source `src\renderer\tr_backend.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_backend.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_bsp.c.obj] Source `src\renderer\tr_bsp.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_bsp.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_cmds.c.obj] Source `src\renderer\tr_cmds.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_cmds.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj] Source `src\renderer\tr_cmesh.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_curve.c.obj] Source `src\renderer\tr_curve.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_curve.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_flares.c.obj] Source `src\renderer\tr_flares.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_flares.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_font.c.obj] Source `src\renderer\tr_font.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_font.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_image.c.obj] Source `src\renderer\tr_image.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_image.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_init.c.obj] Source `src\renderer\tr_init.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_init.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_light.c.obj] Source `src\renderer\tr_light.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_light.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_main.c.obj] Source `src\renderer\tr_main.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_main.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_marks.c.obj] Source `src\renderer\tr_marks.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_marks.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj] Source `src\renderer\tr_mesh.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Source `src\renderer\tr_model.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_noise.c.obj] Source `src\renderer\tr_noise.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_noise.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_scene.c.obj] Source `src\renderer\tr_scene.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_scene.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj] Source `src\renderer\tr_shade.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj] Source `src\renderer\tr_shade_calc.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj] Source `src\renderer\tr_shader.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shadows.c.obj] Source `src\renderer\tr_shadows.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_shadows.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_sky.c.obj] Source `src\renderer\tr_sky.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_sky.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_surface.c.obj] Source `src\renderer\tr_surface.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_surface.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_world.c.obj] Source `src\renderer\tr_world.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_world.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\third-party\glad\src\gl.c.obj] Source `src\third-party\glad\src\gl.c' not found, needed by target `build\windows-x64-release\renderer\obj\third-party\glad\src\gl.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj] Source `src\tools\extractfuncs\extractfuncs.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj] Source `src\tools\extractfuncs\l_log.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj] Source `src\tools\extractfuncs\l_memory.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_precomp.c.obj] Source `src\tools\extractfuncs\l_precomp.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_precomp.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_script.c.obj] Source `src\tools\extractfuncs\l_script.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_script.c.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Heap.cpp.obj] Source `src\idlib\Heap.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Heap.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Str.cpp.obj] Source `src\idlib\Str.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Str.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Lib.cpp.obj] Source `src\idlib\Lib.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Lib.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Token.cpp.obj] Source `src\idlib\Token.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Token.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Lexer.cpp.obj] Source `src\idlib\Lexer.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Lexer.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Parser.cpp.obj] Source `src\idlib\Parser.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Parser.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\sys\sys_assert.cpp.obj] Source `src\idlib\sys\sys_assert.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\sys\sys_assert.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\containers\HashIndex.cpp.obj] Source `src\idlib\containers\HashIndex.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\containers\HashIndex.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Math.cpp.obj] Source `src\idlib\math\Math.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Math.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Vector.cpp.obj] Source `src\idlib\math\Vector.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Vector.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Matrix.cpp.obj] Source `src\idlib\math\Matrix.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Matrix.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Angles.cpp.obj] Source `src\idlib\math\Angles.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Angles.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Quat.cpp.obj] Source `src\idlib\math\Quat.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Quat.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Plane.cpp.obj] Source `src\idlib\math\Plane.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Plane.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Rotation.cpp.obj] Source `src\idlib\math\Rotation.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Rotation.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\VecX.cpp.obj] Source `src\idlib\math\VecX.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\VecX.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\MatX.cpp.obj] Source `src\idlib\math\MatX.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\MatX.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\bv\Bounds.cpp.obj] Source `src\idlib\bv\Bounds.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\bv\Bounds.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\bv\Box.cpp.obj] Source `src\idlib\bv\Box.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\bv\Box.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\bv\Sphere.cpp.obj] Source `src\idlib\bv\Sphere.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\bv\Sphere.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\geometry\DrawVert.cpp.obj] Source `src\idlib\geometry\DrawVert.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\geometry\DrawVert.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\geometry\JointTransform.cpp.obj] Source `src\idlib\geometry\JointTransform.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\geometry\JointTransform.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj] Source `src\idlib\geometry\RenderMatrix.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj] Source `src\renderer-bfg\RenderWorld.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj] Source `src\renderer-bfg\RenderEntity.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj] Source `src\renderer-bfg\ScreenRect.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj] Source `src\renderer-bfg\RenderSystem.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj] Source `src\renderer-bfg\GLContext.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj] Source `src\renderer-bfg\CVarSystem.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj] Source `src\renderer-bfg\GLMatrix.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj] Source `src\renderer-bfg\RenderLog.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj] Source `src\renderer-bfg\RenderProgs.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj] Source `src\renderer-bfg\RenderProgs_GLSL.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj] Source `src\renderer-bfg\Q3Patch.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj] Source `src\renderer-bfg\RenderWorld_load.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model.cpp.obj] Source `src\renderer-bfg\Model.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj] Source `src\renderer-bfg\ModelManager.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj] Source `src\renderer-bfg\Model_md3.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj] Source `src\renderer-bfg\Model_mdc.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj] Source `src\renderer-bfg\Model_mds.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material.cpp.obj] Source `src\renderer-bfg\Material.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj] Source `src\renderer-bfg\MaterialManager.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj] Source `src\renderer-bfg\Material_shader.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj] Source `src\renderer-bfg\Shadow.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj] Source `src\renderer-bfg\Backend.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj] Source `src\renderer-bfg\Tess.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj] Source `src\renderer-bfg\Tess_calc.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj] Source `src\renderer-bfg\Lighting.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj] Source `src\renderer-bfg\Surface.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj] Source `src\renderer-bfg\ImageManager.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj] Source `src\renderer-bfg\Image_files.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj] Source `src\renderer-bfg\Image_intrinsic.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj] Source `src\renderer-bfg\Image_process.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj] Source `src\third-party\glad\src\gl.c' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_animation.c.obj] Source `src\games\game\bg_animation.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\bg_animation.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_pmove.c.obj] Source `src\games\game\bg_pmove.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\bg_pmove.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_slidemove.c.obj] Source `src\games\game\bg_slidemove.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\bg_slidemove.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_consolecmds.c.obj] Source `src\games\cgame\cg_consolecmds.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_consolecmds.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_draw.c.obj] Source `src\games\cgame\cg_draw.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_draw.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_drawtools.c.obj] Source `src\games\cgame\cg_drawtools.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_drawtools.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_effects.c.obj] Source `src\games\cgame\cg_effects.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_effects.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj] Source `src\games\cgame\cg_ents.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_event.c.obj] Source `src\games\cgame\cg_event.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_event.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_flamethrower.c.obj] Source `src\games\cgame\cg_flamethrower.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_flamethrower.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_info.c.obj] Source `src\games\cgame\cg_info.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_info.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_localents.c.obj] Source `src\games\cgame\cg_localents.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_localents.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_main.c.obj] Source `src\games\cgame\cg_main.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_main.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_marks.c.obj] Source `src\games\cgame\cg_marks.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_marks.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_newDraw.c.obj] Source `src\games\cgame\cg_newDraw.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_newDraw.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_particles.c.obj] Source `src\games\cgame\cg_particles.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_particles.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj] Source `src\games\cgame\cg_players.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_playerstate.c.obj] Source `src\games\cgame\cg_playerstate.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_playerstate.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_predict.c.obj] Source `src\games\cgame\cg_predict.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_predict.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_scoreboard.c.obj] Source `src\games\cgame\cg_scoreboard.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_scoreboard.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_servercmds.c.obj] Source `src\games\cgame\cg_servercmds.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_servercmds.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_snapshot.c.obj] Source `src\games\cgame\cg_snapshot.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_snapshot.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_sound.c.obj] Source `src\games\cgame\cg_sound.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_sound.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_syscalls.c.obj] Source `src\games\cgame\cg_syscalls.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_syscalls.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_trails.c.obj] Source `src\games\cgame\cg_trails.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_trails.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_view.c.obj] Source `src\games\cgame\cg_view.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_view.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_weapons.c.obj] Source `src\games\cgame\cg_weapons.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_weapons.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Source `src\games\ui\ui_shared.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-release\cgame\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-release\cgame\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_atoms.c.obj] Source `src\games\ui\ui_atoms.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_atoms.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_gameinfo.c.obj] Source `src\games\ui\ui_gameinfo.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_gameinfo.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj] Source `src\games\ui\ui_main.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_players.c.obj] Source `src\games\ui\ui_players.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_players.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj] Source `src\games\ui\ui_shared.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_syscalls.c.obj] Source `src\games\ui\ui_syscalls.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_syscalls.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_util.c.obj] Source `src\games\ui\ui_util.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_util.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-release\ui\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-release\ui\obj\qcommon\q_shared.c.obj'.

### failure context

- build\windows-x64-release\client\obj\client\cl_cgame.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 42.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_cin.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 42.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_console.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 42.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_input.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 42.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_keys.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 42.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 42.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_net_chan.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 42.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_parse.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 42.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_parse.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_qgl.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 42.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_qgl.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_scrn.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 42.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_qgl.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_scrn.c.obj] Source `src\client\cl_scrn.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_scrn.c.obj'.
```


### warning kinds

- [33x] -writable-strings
  - src\splines\q_shared.cpp(757,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(774,12): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(799,9): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(471,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(475,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(479,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(552,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(556,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(565,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(568,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(853,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(856,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(859,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(960,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(962,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(964,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(966,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1244,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1247,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1250,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1253,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1256,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1266,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1269,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1272,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1275,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1279,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1286,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1289,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1296,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1299,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1301,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1308,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
- [8x] -unused-but-set-variable
  - src\splines\util_str.cpp(437,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(468,7): warning: variable 'ch' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(476,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(481,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(483,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1126,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1171,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1220,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
- [6x] -logical-op-parentheses
  - src\splines\math_quaternion.h(167,62): warning: '&&' within '||' [-Wlogical-op-parentheses]
- [6x] -sizeof-array-argument
  - src\splines\math_matrix.h(94,26): warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
- [6x] -sizeof-pointer-memaccess
  - src\splines\math_matrix.h(94,28): warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
- [5x] -macro-redefined
  - src\splines\q_splineshared.h(94,9): warning: 'QDECL' macro redefined [-Wmacro-redefined]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]

## windows-latest-x64-release-ui

status: failure

errors: 256
warnings: 83 in 8 kinds

### errors

scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_qgl.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_scrn.c.obj] Source `src\client\cl_scrn.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_scrn.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_ui.c.obj] Source `src\client\cl_ui.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_ui.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_adpcm.c.obj] Source `src\client\snd_adpcm.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_adpcm.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_dma.c.obj] Source `src\client\snd_dma.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_dma.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_mem.c.obj] Source `src\client\snd_mem.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_mem.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_mix.c.obj] Source `src\client\snd_mix.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_mix.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\snd_wavelet.c.obj] Source `src\client\snd_wavelet.c' not found, needed by target `build\windows-x64-release\client\obj\client\snd_wavelet.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_load.c.obj] Source `src\qcommon\cm_load.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_load.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_patch.c.obj] Source `src\qcommon\cm_patch.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_patch.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_polylib.c.obj] Source `src\qcommon\cm_polylib.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_polylib.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_test.c.obj] Source `src\qcommon\cm_test.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_test.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cm_trace.c.obj] Source `src\qcommon\cm_trace.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cm_trace.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cmd.c.obj] Source `src\qcommon\cmd.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cmd.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\common.c.obj] Source `src\qcommon\common.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\common.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\cvar.c.obj] Source `src\qcommon\cvar.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\cvar.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\files.c.obj] Source `src\qcommon\files.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\files.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\huffman.c.obj] Source `src\qcommon\huffman.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\huffman.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\md4.c.obj] Source `src\qcommon\md4.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\md4.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\msg.c.obj] Source `src\qcommon\msg.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\msg.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\net_chan.c.obj] Source `src\qcommon\net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\unzip.c.obj] Source `src\qcommon\unzip.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\unzip.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_bot.c.obj] Source `src\server\sv_bot.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_bot.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_ccmds.c.obj] Source `src\server\sv_ccmds.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_ccmds.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_client.c.obj] Source `src\server\sv_client.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_client.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_game.c.obj] Source `src\server\sv_game.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_game.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_init.c.obj] Source `src\server\sv_init.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_init.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_main.c.obj] Source `src\server\sv_main.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_net_chan.c.obj] Source `src\server\sv_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_snapshot.c.obj] Source `src\server\sv_snapshot.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_snapshot.c.obj'.
scons: *** [build\windows-x64-release\client\obj\server\sv_world.c.obj] Source `src\server\sv_world.c' not found, needed by target `build\windows-x64-release\client\obj\server\sv_world.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-release\client\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-release\client\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Source `src\sys\win32\win_gamma.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Source `src\sys\win32\win_glimp.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_input.c.obj] Source `src\sys\win32\win_input.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_main.c.obj] Source `src\sys\win32\win_main.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_net.c.obj] Source `src\sys\win32\win_net.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_net.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_shared.c.obj] Source `src\sys\win32\win_shared.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_shared.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj] Source `src\sys\win32\win_snd.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_syscon.c.obj] Source `src\sys\win32\win_syscon.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_syscon.c.obj'.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_wndproc.c.obj] Source `src\sys\win32\win_wndproc.c' not found, needed by target `build\windows-x64-release\client\obj\sys\win32\win_wndproc.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_bspq3.c.obj] Source `src\games\botlib\be_aas_bspq3.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_bspq3.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_cluster.c.obj] Source `src\games\botlib\be_aas_cluster.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_cluster.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_debug.c.obj] Source `src\games\botlib\be_aas_debug.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_debug.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_entity.c.obj] Source `src\games\botlib\be_aas_entity.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_entity.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_file.c.obj] Source `src\games\botlib\be_aas_file.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_file.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_main.c.obj] Source `src\games\botlib\be_aas_main.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_move.c.obj] Source `src\games\botlib\be_aas_move.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_move.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_optimize.c.obj] Source `src\games\botlib\be_aas_optimize.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_optimize.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_reach.c.obj] Source `src\games\botlib\be_aas_reach.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_reach.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_route.c.obj] Source `src\games\botlib\be_aas_route.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_route.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_routealt.c.obj] Source `src\games\botlib\be_aas_routealt.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_routealt.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_routetable.c.obj] Source `src\games\botlib\be_aas_routetable.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_routetable.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_aas_sample.c.obj] Source `src\games\botlib\be_aas_sample.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_aas_sample.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_char.c.obj] Source `src\games\botlib\be_ai_char.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_char.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_chat.c.obj] Source `src\games\botlib\be_ai_chat.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_chat.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_gen.c.obj] Source `src\games\botlib\be_ai_gen.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_gen.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_goal.c.obj] Source `src\games\botlib\be_ai_goal.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_goal.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_move.c.obj] Source `src\games\botlib\be_ai_move.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_move.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_weap.c.obj] Source `src\games\botlib\be_ai_weap.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_weap.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ai_weight.c.obj] Source `src\games\botlib\be_ai_weight.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ai_weight.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_ea.c.obj] Source `src\games\botlib\be_ea.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_ea.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\be_interface.c.obj] Source `src\games\botlib\be_interface.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\be_interface.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_crc.c.obj] Source `src\games\botlib\l_crc.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_crc.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_libvar.c.obj] Source `src\games\botlib\l_libvar.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_libvar.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_log.c.obj] Source `src\games\botlib\l_log.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_log.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_memory.c.obj] Source `src\games\botlib\l_memory.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_memory.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_precomp.c.obj] Source `src\games\botlib\l_precomp.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_precomp.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_script.c.obj] Source `src\games\botlib\l_script.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_script.c.obj'.
scons: *** [build\windows-x64-release\client\obj\games\botlib\l_struct.c.obj] Source `src\games\botlib\l_struct.c' not found, needed by target `build\windows-x64-release\client\obj\games\botlib\l_struct.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_atoms.c.obj] Source `src\games\ui\ui_atoms.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_atoms.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_gameinfo.c.obj] Source `src\games\ui\ui_gameinfo.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_gameinfo.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj] Source `src\games\ui\ui_main.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_players.c.obj] Source `src\games\ui\ui_players.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_players.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj] Source `src\games\ui\ui_shared.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_syscalls.c.obj] Source `src\games\ui\ui_syscalls.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_syscalls.c.obj'.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_util.c.obj] Source `src\games\ui\ui_util.c' not found, needed by target `build\windows-x64-release\ui\obj\games\ui\ui_util.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj] Source `src\tools\extractfuncs\extractfuncs.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj] Source `src\tools\extractfuncs\l_log.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj] Source `src\tools\extractfuncs\l_memory.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_precomp.c.obj] Source `src\tools\extractfuncs\l_precomp.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_precomp.c.obj'.
scons: *** [build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_script.c.obj] Source `src\tools\extractfuncs\l_script.c' not found, needed by target `build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_script.c.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Heap.cpp.obj] Source `src\idlib\Heap.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Heap.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Str.cpp.obj] Source `src\idlib\Str.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Str.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Lib.cpp.obj] Source `src\idlib\Lib.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Lib.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Token.cpp.obj] Source `src\idlib\Token.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Token.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Lexer.cpp.obj] Source `src\idlib\Lexer.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Lexer.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Parser.cpp.obj] Source `src\idlib\Parser.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\Parser.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\sys\sys_assert.cpp.obj] Source `src\idlib\sys\sys_assert.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\sys\sys_assert.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\containers\HashIndex.cpp.obj] Source `src\idlib\containers\HashIndex.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\containers\HashIndex.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Math.cpp.obj] Source `src\idlib\math\Math.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Math.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Vector.cpp.obj] Source `src\idlib\math\Vector.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Vector.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Matrix.cpp.obj] Source `src\idlib\math\Matrix.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Matrix.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Angles.cpp.obj] Source `src\idlib\math\Angles.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Angles.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Quat.cpp.obj] Source `src\idlib\math\Quat.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Quat.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Plane.cpp.obj] Source `src\idlib\math\Plane.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Plane.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Rotation.cpp.obj] Source `src\idlib\math\Rotation.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\Rotation.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\VecX.cpp.obj] Source `src\idlib\math\VecX.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\VecX.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\MatX.cpp.obj] Source `src\idlib\math\MatX.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\math\MatX.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\bv\Bounds.cpp.obj] Source `src\idlib\bv\Bounds.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\bv\Bounds.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\bv\Box.cpp.obj] Source `src\idlib\bv\Box.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\bv\Box.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\bv\Sphere.cpp.obj] Source `src\idlib\bv\Sphere.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\bv\Sphere.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\geometry\DrawVert.cpp.obj] Source `src\idlib\geometry\DrawVert.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\geometry\DrawVert.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\geometry\JointTransform.cpp.obj] Source `src\idlib\geometry\JointTransform.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\geometry\JointTransform.cpp.obj'.
scons: *** [build\windows-x64-release\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj] Source `src\idlib\geometry\RenderMatrix.cpp' not found, needed by target `build\windows-x64-release\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj] Source `src\renderer-bfg\RenderWorld.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj] Source `src\renderer-bfg\RenderEntity.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj] Source `src\renderer-bfg\ScreenRect.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj] Source `src\renderer-bfg\RenderSystem.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj] Source `src\renderer-bfg\GLContext.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj] Source `src\renderer-bfg\CVarSystem.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj] Source `src\renderer-bfg\GLMatrix.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj] Source `src\renderer-bfg\RenderLog.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj] Source `src\renderer-bfg\RenderProgs.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj] Source `src\renderer-bfg\RenderProgs_GLSL.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj] Source `src\renderer-bfg\Q3Patch.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj] Source `src\renderer-bfg\RenderWorld_load.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model.cpp.obj] Source `src\renderer-bfg\Model.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj] Source `src\renderer-bfg\ModelManager.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj] Source `src\renderer-bfg\Model_md3.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj] Source `src\renderer-bfg\Model_mdc.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj] Source `src\renderer-bfg\Model_mds.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material.cpp.obj] Source `src\renderer-bfg\Material.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj] Source `src\renderer-bfg\MaterialManager.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj] Source `src\renderer-bfg\Material_shader.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj] Source `src\renderer-bfg\Shadow.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj] Source `src\renderer-bfg\Backend.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj] Source `src\renderer-bfg\Tess.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj] Source `src\renderer-bfg\Tess_calc.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj] Source `src\renderer-bfg\Lighting.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj] Source `src\renderer-bfg\Surface.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj] Source `src\renderer-bfg\ImageManager.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj] Source `src\renderer-bfg\Image_files.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj] Source `src\renderer-bfg\Image_intrinsic.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj] Source `src\renderer-bfg\Image_process.cpp' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj'.
scons: *** [build\windows-x64-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj] Source `src\third-party\glad\src\gl.c' not found, needed by target `build\windows-x64-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast.c.obj] Source `src\games\game\ai_cast.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_characters.c.obj] Source `src\games\game\ai_cast_characters.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_characters.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_debug.c.obj] Source `src\games\game\ai_cast_debug.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_debug.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_events.c.obj] Source `src\games\game\ai_cast_events.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_events.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_fight.c.obj] Source `src\games\game\ai_cast_fight.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_fight.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_func_attack.c.obj] Source `src\games\game\ai_cast_func_attack.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_func_attack.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_func_boss1.c.obj] Source `src\games\game\ai_cast_func_boss1.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_func_boss1.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_funcs.c.obj] Source `src\games\game\ai_cast_funcs.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_funcs.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_script.c.obj] Source `src\games\game\ai_cast_script.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_script.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_script_actions.c.obj] Source `src\games\game\ai_cast_script_actions.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_script_actions.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_script_ents.c.obj] Source `src\games\game\ai_cast_script_ents.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_script_ents.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_sight.c.obj] Source `src\games\game\ai_cast_sight.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_sight.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\ai_cast_think.c.obj] Source `src\games\game\ai_cast_think.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\ai_cast_think.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_animation.c.obj] Source `src\games\game\bg_animation.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\bg_animation.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_pmove.c.obj] Source `src\games\game\bg_pmove.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\bg_pmove.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_slidemove.c.obj] Source `src\games\game\bg_slidemove.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\bg_slidemove.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_active.c.obj] Source `src\games\game\g_active.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_active.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_alarm.c.obj] Source `src\games\game\g_alarm.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_alarm.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_bot.c.obj] Source `src\games\game\g_bot.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_bot.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_client.c.obj] Source `src\games\game\g_client.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_client.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_cmds.c.obj] Source `src\games\game\g_cmds.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_cmds.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_combat.c.obj] Source `src\games\game\g_combat.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_combat.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_items.c.obj] Source `src\games\game\g_items.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_items.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_main.c.obj] Source `src\games\game\g_main.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_main.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_mem.c.obj] Source `src\games\game\g_mem.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_mem.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_misc.c.obj] Source `src\games\game\g_misc.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_misc.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_missile.c.obj] Source `src\games\game\g_missile.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_missile.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_mover.c.obj] Source `src\games\game\g_mover.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_mover.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_props.c.obj] Source `src\games\game\g_props.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_props.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_save.c.obj] Source `src\games\game\g_save.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_save.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_script.c.obj] Source `src\games\game\g_script.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_script.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_script_actions.c.obj] Source `src\games\game\g_script_actions.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_script_actions.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_session.c.obj] Source `src\games\game\g_session.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_session.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_spawn.c.obj] Source `src\games\game\g_spawn.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_spawn.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_svcmds.c.obj] Source `src\games\game\g_svcmds.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_svcmds.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_syscalls.c.obj] Source `src\games\game\g_syscalls.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_syscalls.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_target.c.obj] Source `src\games\game\g_target.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_target.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_team.c.obj] Source `src\games\game\g_team.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_team.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_tramcar.c.obj] Source `src\games\game\g_tramcar.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_tramcar.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_trigger.c.obj] Source `src\games\game\g_trigger.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_trigger.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_utils.c.obj] Source `src\games\game\g_utils.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_utils.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\game\g_weapon.c.obj] Source `src\games\game\g_weapon.c' not found, needed by target `build\windows-x64-release\game\obj\games\game\g_weapon.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_chat.c.obj] Source `src\games\botai\ai_chat.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_chat.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_cmd.c.obj] Source `src\games\botai\ai_cmd.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_cmd.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_dmnet.c.obj] Source `src\games\botai\ai_dmnet.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_dmnet.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_dmq3.c.obj] Source `src\games\botai\ai_dmq3.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_dmq3.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_main.c.obj] Source `src\games\botai\ai_main.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_main.c.obj'.
scons: *** [build\windows-x64-release\game\obj\games\botai\ai_team.c.obj] Source `src\games\botai\ai_team.c' not found, needed by target `build\windows-x64-release\game\obj\games\botai\ai_team.c.obj'.
scons: *** [build\windows-x64-release\game\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-release\game\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-release\game\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-release\game\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_animation.c.obj] Source `src\games\game\bg_animation.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\bg_animation.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_pmove.c.obj] Source `src\games\game\bg_pmove.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\bg_pmove.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_slidemove.c.obj] Source `src\games\game\bg_slidemove.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\game\bg_slidemove.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_consolecmds.c.obj] Source `src\games\cgame\cg_consolecmds.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_consolecmds.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_draw.c.obj] Source `src\games\cgame\cg_draw.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_draw.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_drawtools.c.obj] Source `src\games\cgame\cg_drawtools.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_drawtools.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_effects.c.obj] Source `src\games\cgame\cg_effects.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_effects.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj] Source `src\games\cgame\cg_ents.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_event.c.obj] Source `src\games\cgame\cg_event.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_event.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_flamethrower.c.obj] Source `src\games\cgame\cg_flamethrower.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_flamethrower.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_info.c.obj] Source `src\games\cgame\cg_info.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_info.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_localents.c.obj] Source `src\games\cgame\cg_localents.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_localents.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_main.c.obj] Source `src\games\cgame\cg_main.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_main.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_marks.c.obj] Source `src\games\cgame\cg_marks.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_marks.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_newDraw.c.obj] Source `src\games\cgame\cg_newDraw.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_newDraw.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_particles.c.obj] Source `src\games\cgame\cg_particles.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_particles.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj] Source `src\games\cgame\cg_players.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_playerstate.c.obj] Source `src\games\cgame\cg_playerstate.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_playerstate.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_predict.c.obj] Source `src\games\cgame\cg_predict.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_predict.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_scoreboard.c.obj] Source `src\games\cgame\cg_scoreboard.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_scoreboard.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_servercmds.c.obj] Source `src\games\cgame\cg_servercmds.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_servercmds.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_snapshot.c.obj] Source `src\games\cgame\cg_snapshot.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_snapshot.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_sound.c.obj] Source `src\games\cgame\cg_sound.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_sound.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_syscalls.c.obj] Source `src\games\cgame\cg_syscalls.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_syscalls.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_trails.c.obj] Source `src\games\cgame\cg_trails.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_trails.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_view.c.obj] Source `src\games\cgame\cg_view.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_view.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_weapons.c.obj] Source `src\games\cgame\cg_weapons.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\cgame\cg_weapons.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Source `src\games\ui\ui_shared.c' not found, needed by target `build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-release\cgame\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-release\cgame\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-release\cgame\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_animation.c.obj] Source `src\renderer\tr_animation.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_animation.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_backend.c.obj] Source `src\renderer\tr_backend.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_backend.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_bsp.c.obj] Source `src\renderer\tr_bsp.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_bsp.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_cmds.c.obj] Source `src\renderer\tr_cmds.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_cmds.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj] Source `src\renderer\tr_cmesh.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_curve.c.obj] Source `src\renderer\tr_curve.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_curve.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_flares.c.obj] Source `src\renderer\tr_flares.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_flares.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_font.c.obj] Source `src\renderer\tr_font.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_font.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_image.c.obj] Source `src\renderer\tr_image.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_image.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_init.c.obj] Source `src\renderer\tr_init.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_init.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_light.c.obj] Source `src\renderer\tr_light.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_light.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_main.c.obj] Source `src\renderer\tr_main.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_main.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_marks.c.obj] Source `src\renderer\tr_marks.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_marks.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj] Source `src\renderer\tr_mesh.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Source `src\renderer\tr_model.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_noise.c.obj] Source `src\renderer\tr_noise.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_noise.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_scene.c.obj] Source `src\renderer\tr_scene.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_scene.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj] Source `src\renderer\tr_shade.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj] Source `src\renderer\tr_shade_calc.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj] Source `src\renderer\tr_shader.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shadows.c.obj] Source `src\renderer\tr_shadows.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_shadows.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_sky.c.obj] Source `src\renderer\tr_sky.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_sky.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_surface.c.obj] Source `src\renderer\tr_surface.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_surface.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_world.c.obj] Source `src\renderer\tr_world.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_world.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_module.c.obj] Source `src\renderer\tr_module.c' not found, needed by target `build\windows-x64-release\renderer\obj\renderer\tr_module.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x64-release\renderer\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x64-release\renderer\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x64-release\renderer\obj\third-party\glad\src\gl.c.obj] Source `src\third-party\glad\src\gl.c' not found, needed by target `build\windows-x64-release\renderer\obj\third-party\glad\src\gl.c.obj'.

### failure context

- build\windows-x64-release\client\obj\client\cl_cgame.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 33.6 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_cin.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 33.6 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_console.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 33.6 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_input.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 33.6 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_keys.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 33.6 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 33.6 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_net_chan.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 33.6 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_parse.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 33.6 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_parse.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_qgl.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 33.6 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_qgl.c.obj'.
```

- build\windows-x64-release\client\obj\client\cl_scrn.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 33.6 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x64-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_qgl.c.obj'.
scons: *** [build\windows-x64-release\client\obj\client\cl_scrn.c.obj] Source `src\client\cl_scrn.c' not found, needed by target `build\windows-x64-release\client\obj\client\cl_scrn.c.obj'.
```


### warning kinds

- [33x] -writable-strings
  - src\splines\q_shared.cpp(757,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(774,12): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(799,9): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(471,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(475,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(479,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(552,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(556,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(565,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(568,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(853,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(856,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(859,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(960,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(962,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(964,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(966,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1244,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1247,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1250,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1253,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1256,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1266,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1269,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1272,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1275,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1279,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1286,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1289,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1296,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1299,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1301,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1308,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
- [8x] -unused-but-set-variable
  - src\splines\util_str.cpp(437,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(468,7): warning: variable 'ch' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(476,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(481,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(483,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1126,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1171,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1220,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
- [6x] -logical-op-parentheses
  - src\splines\math_quaternion.h(167,62): warning: '&&' within '||' [-Wlogical-op-parentheses]
- [6x] -sizeof-array-argument
  - src\splines\math_matrix.h(94,26): warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
- [6x] -sizeof-pointer-memaccess
  - src\splines\math_matrix.h(94,28): warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
- [5x] -macro-redefined
  - src\splines\q_splineshared.h(94,9): warning: 'QDECL' macro redefined [-Wmacro-redefined]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]

## windows-latest-x86-debug-

status: failure

errors: 258
warnings: 81 in 7 kinds

### errors

scons: *** [build\windows-x86-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_qgl.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_scrn.c.obj] Source `src\client\cl_scrn.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_scrn.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_ui.c.obj] Source `src\client\cl_ui.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_ui.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\snd_adpcm.c.obj] Source `src\client\snd_adpcm.c' not found, needed by target `build\windows-x86-debug\client\obj\client\snd_adpcm.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\snd_dma.c.obj] Source `src\client\snd_dma.c' not found, needed by target `build\windows-x86-debug\client\obj\client\snd_dma.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\snd_mem.c.obj] Source `src\client\snd_mem.c' not found, needed by target `build\windows-x86-debug\client\obj\client\snd_mem.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\snd_mix.c.obj] Source `src\client\snd_mix.c' not found, needed by target `build\windows-x86-debug\client\obj\client\snd_mix.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\snd_wavelet.c.obj] Source `src\client\snd_wavelet.c' not found, needed by target `build\windows-x86-debug\client\obj\client\snd_wavelet.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\qcommon\cm_load.c.obj] Source `src\qcommon\cm_load.c' not found, needed by target `build\windows-x86-debug\client\obj\qcommon\cm_load.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\qcommon\cm_patch.c.obj] Source `src\qcommon\cm_patch.c' not found, needed by target `build\windows-x86-debug\client\obj\qcommon\cm_patch.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\qcommon\cm_polylib.c.obj] Source `src\qcommon\cm_polylib.c' not found, needed by target `build\windows-x86-debug\client\obj\qcommon\cm_polylib.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\qcommon\cm_test.c.obj] Source `src\qcommon\cm_test.c' not found, needed by target `build\windows-x86-debug\client\obj\qcommon\cm_test.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\qcommon\cm_trace.c.obj] Source `src\qcommon\cm_trace.c' not found, needed by target `build\windows-x86-debug\client\obj\qcommon\cm_trace.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\qcommon\cmd.c.obj] Source `src\qcommon\cmd.c' not found, needed by target `build\windows-x86-debug\client\obj\qcommon\cmd.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\qcommon\common.c.obj] Source `src\qcommon\common.c' not found, needed by target `build\windows-x86-debug\client\obj\qcommon\common.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\qcommon\cvar.c.obj] Source `src\qcommon\cvar.c' not found, needed by target `build\windows-x86-debug\client\obj\qcommon\cvar.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\qcommon\files.c.obj] Source `src\qcommon\files.c' not found, needed by target `build\windows-x86-debug\client\obj\qcommon\files.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\qcommon\huffman.c.obj] Source `src\qcommon\huffman.c' not found, needed by target `build\windows-x86-debug\client\obj\qcommon\huffman.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\qcommon\md4.c.obj] Source `src\qcommon\md4.c' not found, needed by target `build\windows-x86-debug\client\obj\qcommon\md4.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\qcommon\msg.c.obj] Source `src\qcommon\msg.c' not found, needed by target `build\windows-x86-debug\client\obj\qcommon\msg.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\qcommon\net_chan.c.obj] Source `src\qcommon\net_chan.c' not found, needed by target `build\windows-x86-debug\client\obj\qcommon\net_chan.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\qcommon\unzip.c.obj] Source `src\qcommon\unzip.c' not found, needed by target `build\windows-x86-debug\client\obj\qcommon\unzip.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\server\sv_bot.c.obj] Source `src\server\sv_bot.c' not found, needed by target `build\windows-x86-debug\client\obj\server\sv_bot.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\server\sv_ccmds.c.obj] Source `src\server\sv_ccmds.c' not found, needed by target `build\windows-x86-debug\client\obj\server\sv_ccmds.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\server\sv_client.c.obj] Source `src\server\sv_client.c' not found, needed by target `build\windows-x86-debug\client\obj\server\sv_client.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\server\sv_game.c.obj] Source `src\server\sv_game.c' not found, needed by target `build\windows-x86-debug\client\obj\server\sv_game.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\server\sv_init.c.obj] Source `src\server\sv_init.c' not found, needed by target `build\windows-x86-debug\client\obj\server\sv_init.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\server\sv_main.c.obj] Source `src\server\sv_main.c' not found, needed by target `build\windows-x86-debug\client\obj\server\sv_main.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\server\sv_net_chan.c.obj] Source `src\server\sv_net_chan.c' not found, needed by target `build\windows-x86-debug\client\obj\server\sv_net_chan.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\server\sv_snapshot.c.obj] Source `src\server\sv_snapshot.c' not found, needed by target `build\windows-x86-debug\client\obj\server\sv_snapshot.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\server\sv_world.c.obj] Source `src\server\sv_world.c' not found, needed by target `build\windows-x86-debug\client\obj\server\sv_world.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x86-debug\client\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x86-debug\client\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_gamma.c.obj] Source `src\sys\win32\win_gamma.c' not found, needed by target `build\windows-x86-debug\client\obj\sys\win32\win_gamma.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_glimp.c.obj] Source `src\sys\win32\win_glimp.c' not found, needed by target `build\windows-x86-debug\client\obj\sys\win32\win_glimp.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_input.c.obj] Source `src\sys\win32\win_input.c' not found, needed by target `build\windows-x86-debug\client\obj\sys\win32\win_input.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_main.c.obj] Source `src\sys\win32\win_main.c' not found, needed by target `build\windows-x86-debug\client\obj\sys\win32\win_main.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_net.c.obj] Source `src\sys\win32\win_net.c' not found, needed by target `build\windows-x86-debug\client\obj\sys\win32\win_net.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_shared.c.obj] Source `src\sys\win32\win_shared.c' not found, needed by target `build\windows-x86-debug\client\obj\sys\win32\win_shared.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_snd.c.obj] Source `src\sys\win32\win_snd.c' not found, needed by target `build\windows-x86-debug\client\obj\sys\win32\win_snd.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_syscon.c.obj] Source `src\sys\win32\win_syscon.c' not found, needed by target `build\windows-x86-debug\client\obj\sys\win32\win_syscon.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_wndproc.c.obj] Source `src\sys\win32\win_wndproc.c' not found, needed by target `build\windows-x86-debug\client\obj\sys\win32\win_wndproc.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_bspq3.c.obj] Source `src\games\botlib\be_aas_bspq3.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_aas_bspq3.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_cluster.c.obj] Source `src\games\botlib\be_aas_cluster.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_aas_cluster.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_debug.c.obj] Source `src\games\botlib\be_aas_debug.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_aas_debug.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_entity.c.obj] Source `src\games\botlib\be_aas_entity.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_aas_entity.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_file.c.obj] Source `src\games\botlib\be_aas_file.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_aas_file.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_main.c.obj] Source `src\games\botlib\be_aas_main.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_aas_main.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_move.c.obj] Source `src\games\botlib\be_aas_move.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_aas_move.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_optimize.c.obj] Source `src\games\botlib\be_aas_optimize.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_aas_optimize.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_reach.c.obj] Source `src\games\botlib\be_aas_reach.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_aas_reach.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_route.c.obj] Source `src\games\botlib\be_aas_route.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_aas_route.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_routealt.c.obj] Source `src\games\botlib\be_aas_routealt.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_aas_routealt.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_routetable.c.obj] Source `src\games\botlib\be_aas_routetable.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_aas_routetable.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_aas_sample.c.obj] Source `src\games\botlib\be_aas_sample.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_aas_sample.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ai_char.c.obj] Source `src\games\botlib\be_ai_char.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_ai_char.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ai_chat.c.obj] Source `src\games\botlib\be_ai_chat.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_ai_chat.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ai_gen.c.obj] Source `src\games\botlib\be_ai_gen.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_ai_gen.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ai_goal.c.obj] Source `src\games\botlib\be_ai_goal.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_ai_goal.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ai_move.c.obj] Source `src\games\botlib\be_ai_move.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_ai_move.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ai_weap.c.obj] Source `src\games\botlib\be_ai_weap.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_ai_weap.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ai_weight.c.obj] Source `src\games\botlib\be_ai_weight.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_ai_weight.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_ea.c.obj] Source `src\games\botlib\be_ea.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_ea.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\be_interface.c.obj] Source `src\games\botlib\be_interface.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\be_interface.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\l_crc.c.obj] Source `src\games\botlib\l_crc.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\l_crc.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\l_libvar.c.obj] Source `src\games\botlib\l_libvar.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\l_libvar.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\l_log.c.obj] Source `src\games\botlib\l_log.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\l_log.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\l_memory.c.obj] Source `src\games\botlib\l_memory.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\l_memory.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\l_precomp.c.obj] Source `src\games\botlib\l_precomp.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\l_precomp.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\l_script.c.obj] Source `src\games\botlib\l_script.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\l_script.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\games\botlib\l_struct.c.obj] Source `src\games\botlib\l_struct.c' not found, needed by target `build\windows-x86-debug\client\obj\games\botlib\l_struct.c.obj'.
scons: *** [build\windows-x86-debug\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj] Source `src\tools\extractfuncs\extractfuncs.c' not found, needed by target `build\windows-x86-debug\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj'.
scons: *** [build\windows-x86-debug\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj] Source `src\tools\extractfuncs\l_log.c' not found, needed by target `build\windows-x86-debug\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj'.
scons: *** [build\windows-x86-debug\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj] Source `src\tools\extractfuncs\l_memory.c' not found, needed by target `build\windows-x86-debug\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj'.
scons: *** [build\windows-x86-debug\extractfuncs_tool\obj\tools\extractfuncs\l_precomp.c.obj] Source `src\tools\extractfuncs\l_precomp.c' not found, needed by target `build\windows-x86-debug\extractfuncs_tool\obj\tools\extractfuncs\l_precomp.c.obj'.
scons: *** [build\windows-x86-debug\extractfuncs_tool\obj\tools\extractfuncs\l_script.c.obj] Source `src\tools\extractfuncs\l_script.c' not found, needed by target `build\windows-x86-debug\extractfuncs_tool\obj\tools\extractfuncs\l_script.c.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Heap.cpp.obj] Source `src\idlib\Heap.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\Heap.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Str.cpp.obj] Source `src\idlib\Str.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\Str.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Lib.cpp.obj] Source `src\idlib\Lib.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\Lib.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Token.cpp.obj] Source `src\idlib\Token.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\Token.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Lexer.cpp.obj] Source `src\idlib\Lexer.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\Lexer.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Parser.cpp.obj] Source `src\idlib\Parser.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\Parser.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\sys\sys_assert.cpp.obj] Source `src\idlib\sys\sys_assert.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\sys\sys_assert.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj] Source `src\idlib\containers\HashIndex.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Math.cpp.obj] Source `src\idlib\math\Math.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\math\Math.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Vector.cpp.obj] Source `src\idlib\math\Vector.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\math\Vector.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Matrix.cpp.obj] Source `src\idlib\math\Matrix.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\math\Matrix.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Angles.cpp.obj] Source `src\idlib\math\Angles.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\math\Angles.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Quat.cpp.obj] Source `src\idlib\math\Quat.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\math\Quat.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Plane.cpp.obj] Source `src\idlib\math\Plane.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\math\Plane.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Rotation.cpp.obj] Source `src\idlib\math\Rotation.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\math\Rotation.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\VecX.cpp.obj] Source `src\idlib\math\VecX.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\math\VecX.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\MatX.cpp.obj] Source `src\idlib\math\MatX.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\math\MatX.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\bv\Bounds.cpp.obj] Source `src\idlib\bv\Bounds.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\bv\Bounds.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\bv\Box.cpp.obj] Source `src\idlib\bv\Box.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\bv\Box.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\bv\Sphere.cpp.obj] Source `src\idlib\bv\Sphere.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\bv\Sphere.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\geometry\DrawVert.cpp.obj] Source `src\idlib\geometry\DrawVert.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\geometry\DrawVert.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\geometry\JointTransform.cpp.obj] Source `src\idlib\geometry\JointTransform.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\geometry\JointTransform.cpp.obj'.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj] Source `src\idlib\geometry\RenderMatrix.cpp' not found, needed by target `build\windows-x86-debug\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj] Source `src\renderer-bfg\RenderWorld.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj] Source `src\renderer-bfg\RenderEntity.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj] Source `src\renderer-bfg\ScreenRect.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj] Source `src\renderer-bfg\RenderSystem.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj] Source `src\renderer-bfg\GLContext.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj] Source `src\renderer-bfg\CVarSystem.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj] Source `src\renderer-bfg\GLMatrix.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj] Source `src\renderer-bfg\RenderLog.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj] Source `src\renderer-bfg\RenderProgs.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj] Source `src\renderer-bfg\RenderProgs_GLSL.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj] Source `src\renderer-bfg\Q3Patch.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj] Source `src\renderer-bfg\RenderWorld_load.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Model.cpp.obj] Source `src\renderer-bfg\Model.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Model.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj] Source `src\renderer-bfg\ModelManager.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj] Source `src\renderer-bfg\Model_md3.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj] Source `src\renderer-bfg\Model_mdc.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj] Source `src\renderer-bfg\Model_mds.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Material.cpp.obj] Source `src\renderer-bfg\Material.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Material.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj] Source `src\renderer-bfg\MaterialManager.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj] Source `src\renderer-bfg\Material_shader.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj] Source `src\renderer-bfg\Shadow.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj] Source `src\renderer-bfg\Backend.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj] Source `src\renderer-bfg\Tess.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj] Source `src\renderer-bfg\Tess_calc.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj] Source `src\renderer-bfg\Lighting.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj] Source `src\renderer-bfg\Surface.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj] Source `src\renderer-bfg\ImageManager.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj] Source `src\renderer-bfg\Image_files.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj] Source `src\renderer-bfg\Image_intrinsic.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj] Source `src\renderer-bfg\Image_process.cpp' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj'.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\third-party\glad\src\gl.c.obj] Source `src\third-party\glad\src\gl.c' not found, needed by target `build\windows-x86-debug\renderer-bfg\obj\third-party\glad\src\gl.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast.c.obj] Source `src\games\game\ai_cast.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\ai_cast.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_characters.c.obj] Source `src\games\game\ai_cast_characters.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\ai_cast_characters.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_debug.c.obj] Source `src\games\game\ai_cast_debug.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\ai_cast_debug.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_events.c.obj] Source `src\games\game\ai_cast_events.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\ai_cast_events.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_fight.c.obj] Source `src\games\game\ai_cast_fight.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\ai_cast_fight.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_func_attack.c.obj] Source `src\games\game\ai_cast_func_attack.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\ai_cast_func_attack.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_func_boss1.c.obj] Source `src\games\game\ai_cast_func_boss1.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\ai_cast_func_boss1.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_funcs.c.obj] Source `src\games\game\ai_cast_funcs.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\ai_cast_funcs.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_script.c.obj] Source `src\games\game\ai_cast_script.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\ai_cast_script.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_script_actions.c.obj] Source `src\games\game\ai_cast_script_actions.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\ai_cast_script_actions.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_script_ents.c.obj] Source `src\games\game\ai_cast_script_ents.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\ai_cast_script_ents.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_sight.c.obj] Source `src\games\game\ai_cast_sight.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\ai_cast_sight.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\ai_cast_think.c.obj] Source `src\games\game\ai_cast_think.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\ai_cast_think.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\bg_animation.c.obj] Source `src\games\game\bg_animation.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\bg_animation.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\bg_pmove.c.obj] Source `src\games\game\bg_pmove.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\bg_pmove.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\bg_slidemove.c.obj] Source `src\games\game\bg_slidemove.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\bg_slidemove.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_active.c.obj] Source `src\games\game\g_active.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_active.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_alarm.c.obj] Source `src\games\game\g_alarm.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_alarm.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_bot.c.obj] Source `src\games\game\g_bot.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_bot.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_client.c.obj] Source `src\games\game\g_client.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_client.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_cmds.c.obj] Source `src\games\game\g_cmds.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_cmds.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_combat.c.obj] Source `src\games\game\g_combat.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_combat.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_items.c.obj] Source `src\games\game\g_items.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_items.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_main.c.obj] Source `src\games\game\g_main.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_main.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_mem.c.obj] Source `src\games\game\g_mem.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_mem.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_misc.c.obj] Source `src\games\game\g_misc.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_misc.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_missile.c.obj] Source `src\games\game\g_missile.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_missile.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_mover.c.obj] Source `src\games\game\g_mover.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_mover.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_props.c.obj] Source `src\games\game\g_props.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_props.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_save.c.obj] Source `src\games\game\g_save.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_save.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_script.c.obj] Source `src\games\game\g_script.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_script.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_script_actions.c.obj] Source `src\games\game\g_script_actions.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_script_actions.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_session.c.obj] Source `src\games\game\g_session.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_session.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_spawn.c.obj] Source `src\games\game\g_spawn.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_spawn.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_svcmds.c.obj] Source `src\games\game\g_svcmds.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_svcmds.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_syscalls.c.obj] Source `src\games\game\g_syscalls.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_syscalls.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_target.c.obj] Source `src\games\game\g_target.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_target.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_team.c.obj] Source `src\games\game\g_team.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_team.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_tramcar.c.obj] Source `src\games\game\g_tramcar.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_tramcar.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_trigger.c.obj] Source `src\games\game\g_trigger.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_trigger.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_utils.c.obj] Source `src\games\game\g_utils.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_utils.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_weapon.c.obj] Source `src\games\game\g_weapon.c' not found, needed by target `build\windows-x86-debug\game\obj\games\game\g_weapon.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\botai\ai_chat.c.obj] Source `src\games\botai\ai_chat.c' not found, needed by target `build\windows-x86-debug\game\obj\games\botai\ai_chat.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\botai\ai_cmd.c.obj] Source `src\games\botai\ai_cmd.c' not found, needed by target `build\windows-x86-debug\game\obj\games\botai\ai_cmd.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\botai\ai_dmnet.c.obj] Source `src\games\botai\ai_dmnet.c' not found, needed by target `build\windows-x86-debug\game\obj\games\botai\ai_dmnet.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\botai\ai_dmq3.c.obj] Source `src\games\botai\ai_dmq3.c' not found, needed by target `build\windows-x86-debug\game\obj\games\botai\ai_dmq3.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\botai\ai_main.c.obj] Source `src\games\botai\ai_main.c' not found, needed by target `build\windows-x86-debug\game\obj\games\botai\ai_main.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\games\botai\ai_team.c.obj] Source `src\games\botai\ai_team.c' not found, needed by target `build\windows-x86-debug\game\obj\games\botai\ai_team.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x86-debug\game\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x86-debug\game\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x86-debug\game\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\game\bg_animation.c.obj] Source `src\games\game\bg_animation.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\game\bg_animation.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\game\bg_pmove.c.obj] Source `src\games\game\bg_pmove.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\game\bg_pmove.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\game\bg_slidemove.c.obj] Source `src\games\game\bg_slidemove.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\game\bg_slidemove.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_consolecmds.c.obj] Source `src\games\cgame\cg_consolecmds.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_consolecmds.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_draw.c.obj] Source `src\games\cgame\cg_draw.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_draw.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_drawtools.c.obj] Source `src\games\cgame\cg_drawtools.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_drawtools.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_effects.c.obj] Source `src\games\cgame\cg_effects.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_effects.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_ents.c.obj] Source `src\games\cgame\cg_ents.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_ents.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_event.c.obj] Source `src\games\cgame\cg_event.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_event.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_flamethrower.c.obj] Source `src\games\cgame\cg_flamethrower.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_flamethrower.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_info.c.obj] Source `src\games\cgame\cg_info.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_info.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_localents.c.obj] Source `src\games\cgame\cg_localents.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_localents.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_main.c.obj] Source `src\games\cgame\cg_main.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_main.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_marks.c.obj] Source `src\games\cgame\cg_marks.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_marks.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_newDraw.c.obj] Source `src\games\cgame\cg_newDraw.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_newDraw.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_particles.c.obj] Source `src\games\cgame\cg_particles.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_particles.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_players.c.obj] Source `src\games\cgame\cg_players.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_players.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_playerstate.c.obj] Source `src\games\cgame\cg_playerstate.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_playerstate.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_predict.c.obj] Source `src\games\cgame\cg_predict.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_predict.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_scoreboard.c.obj] Source `src\games\cgame\cg_scoreboard.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_scoreboard.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_servercmds.c.obj] Source `src\games\cgame\cg_servercmds.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_servercmds.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_snapshot.c.obj] Source `src\games\cgame\cg_snapshot.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_snapshot.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_sound.c.obj] Source `src\games\cgame\cg_sound.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_sound.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_syscalls.c.obj] Source `src\games\cgame\cg_syscalls.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_syscalls.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_trails.c.obj] Source `src\games\cgame\cg_trails.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_trails.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_view.c.obj] Source `src\games\cgame\cg_view.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_view.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_weapons.c.obj] Source `src\games\cgame\cg_weapons.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\cgame\cg_weapons.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\games\ui\ui_shared.c.obj] Source `src\games\ui\ui_shared.c' not found, needed by target `build\windows-x86-debug\cgame\obj\games\ui\ui_shared.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x86-debug\cgame\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x86-debug\cgame\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x86-debug\cgame\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x86-debug\ui\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x86-debug\ui\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_atoms.c.obj] Source `src\games\ui\ui_atoms.c' not found, needed by target `build\windows-x86-debug\ui\obj\games\ui\ui_atoms.c.obj'.
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_gameinfo.c.obj] Source `src\games\ui\ui_gameinfo.c' not found, needed by target `build\windows-x86-debug\ui\obj\games\ui\ui_gameinfo.c.obj'.
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_main.c.obj] Source `src\games\ui\ui_main.c' not found, needed by target `build\windows-x86-debug\ui\obj\games\ui\ui_main.c.obj'.
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_players.c.obj] Source `src\games\ui\ui_players.c' not found, needed by target `build\windows-x86-debug\ui\obj\games\ui\ui_players.c.obj'.
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_shared.c.obj] Source `src\games\ui\ui_shared.c' not found, needed by target `build\windows-x86-debug\ui\obj\games\ui\ui_shared.c.obj'.
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_syscalls.c.obj] Source `src\games\ui\ui_syscalls.c' not found, needed by target `build\windows-x86-debug\ui\obj\games\ui\ui_syscalls.c.obj'.
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_util.c.obj] Source `src\games\ui\ui_util.c' not found, needed by target `build\windows-x86-debug\ui\obj\games\ui\ui_util.c.obj'.
scons: *** [build\windows-x86-debug\ui\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x86-debug\ui\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x86-debug\ui\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x86-debug\ui\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_animation.c.obj] Source `src\renderer\tr_animation.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_animation.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_backend.c.obj] Source `src\renderer\tr_backend.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_backend.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_bsp.c.obj] Source `src\renderer\tr_bsp.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_bsp.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_cmds.c.obj] Source `src\renderer\tr_cmds.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_cmds.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_cmesh.c.obj] Source `src\renderer\tr_cmesh.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_cmesh.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_curve.c.obj] Source `src\renderer\tr_curve.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_curve.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_flares.c.obj] Source `src\renderer\tr_flares.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_flares.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_font.c.obj] Source `src\renderer\tr_font.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_font.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_image.c.obj] Source `src\renderer\tr_image.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_image.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_init.c.obj] Source `src\renderer\tr_init.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_init.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_light.c.obj] Source `src\renderer\tr_light.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_light.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_main.c.obj] Source `src\renderer\tr_main.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_main.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_marks.c.obj] Source `src\renderer\tr_marks.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_marks.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_mesh.c.obj] Source `src\renderer\tr_mesh.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_mesh.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_model.c.obj] Source `src\renderer\tr_model.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_model.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_noise.c.obj] Source `src\renderer\tr_noise.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_noise.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_scene.c.obj] Source `src\renderer\tr_scene.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_scene.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_shade.c.obj] Source `src\renderer\tr_shade.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_shade.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_shade_calc.c.obj] Source `src\renderer\tr_shade_calc.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_shade_calc.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_shader.c.obj] Source `src\renderer\tr_shader.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_shader.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_shadows.c.obj] Source `src\renderer\tr_shadows.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_shadows.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_sky.c.obj] Source `src\renderer\tr_sky.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_sky.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_surface.c.obj] Source `src\renderer\tr_surface.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_surface.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_world.c.obj] Source `src\renderer\tr_world.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_world.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_module.c.obj] Source `src\renderer\tr_module.c' not found, needed by target `build\windows-x86-debug\renderer\obj\renderer\tr_module.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x86-debug\renderer\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x86-debug\renderer\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x86-debug\renderer\obj\third-party\glad\src\gl.c.obj] Source `src\third-party\glad\src\gl.c' not found, needed by target `build\windows-x86-debug\renderer\obj\third-party\glad\src\gl.c.obj'.

### failure context

- build\windows-x86-debug\client\obj\client\cl_cgame.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 50.2 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cgame.c.obj'.
```

- build\windows-x86-debug\client\obj\client\cl_cin.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 50.2 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cin.c.obj'.
```

- build\windows-x86-debug\client\obj\client\cl_console.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 50.2 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_console.c.obj'.
```

- build\windows-x86-debug\client\obj\client\cl_input.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 50.2 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_input.c.obj'.
```

- build\windows-x86-debug\client\obj\client\cl_keys.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 50.2 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_keys.c.obj'.
```

- build\windows-x86-debug\client\obj\client\cl_main.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 50.2 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_main.c.obj'.
```

- build\windows-x86-debug\client\obj\client\cl_net_chan.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 50.2 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_net_chan.c.obj'.
```

- build\windows-x86-debug\client\obj\client\cl_parse.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 50.2 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_parse.c.obj'.
```

- build\windows-x86-debug\client\obj\client\cl_qgl.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 50.2 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_qgl.c.obj'.
```

- build\windows-x86-debug\client\obj\client\cl_scrn.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  122G   29G  82% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 50.2 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-debug\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_qgl.c.obj'.
scons: *** [build\windows-x86-debug\client\obj\client\cl_scrn.c.obj] Source `src\client\cl_scrn.c' not found, needed by target `build\windows-x86-debug\client\obj\client\cl_scrn.c.obj'.
```


### warning kinds

- [33x] -writable-strings
  - src\splines\q_shared.cpp(757,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(774,12): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(799,9): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(471,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(475,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(479,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(552,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(556,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(565,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(568,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(853,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(856,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(859,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(960,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(962,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(964,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(966,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1244,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1247,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1250,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1253,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1256,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1266,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1269,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1272,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1275,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1279,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1286,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1289,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1296,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1299,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1301,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1308,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
- [7x] -unused-but-set-variable
  - src\splines\util_str.cpp(468,7): warning: variable 'ch' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(476,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(481,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(483,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1126,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1171,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1220,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
- [6x] -logical-op-parentheses
  - src\splines\math_quaternion.h(167,62): warning: '&&' within '||' [-Wlogical-op-parentheses]
- [6x] -sizeof-array-argument
  - src\splines\math_matrix.h(94,26): warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
- [6x] -sizeof-pointer-memaccess
  - src\splines\math_matrix.h(94,28): warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
- [5x] -macro-redefined
  - src\splines\q_splineshared.h(94,9): warning: 'QDECL' macro redefined [-Wmacro-redefined]

## windows-latest-x86-release-

status: failure

errors: 258
warnings: 83 in 8 kinds

### errors

scons: *** [build\windows-x86-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_qgl.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_scrn.c.obj] Source `src\client\cl_scrn.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_scrn.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_ui.c.obj] Source `src\client\cl_ui.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_ui.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\snd_adpcm.c.obj] Source `src\client\snd_adpcm.c' not found, needed by target `build\windows-x86-release\client\obj\client\snd_adpcm.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\snd_dma.c.obj] Source `src\client\snd_dma.c' not found, needed by target `build\windows-x86-release\client\obj\client\snd_dma.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\snd_mem.c.obj] Source `src\client\snd_mem.c' not found, needed by target `build\windows-x86-release\client\obj\client\snd_mem.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\snd_mix.c.obj] Source `src\client\snd_mix.c' not found, needed by target `build\windows-x86-release\client\obj\client\snd_mix.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\snd_wavelet.c.obj] Source `src\client\snd_wavelet.c' not found, needed by target `build\windows-x86-release\client\obj\client\snd_wavelet.c.obj'.
scons: *** [build\windows-x86-release\client\obj\qcommon\cm_load.c.obj] Source `src\qcommon\cm_load.c' not found, needed by target `build\windows-x86-release\client\obj\qcommon\cm_load.c.obj'.
scons: *** [build\windows-x86-release\client\obj\qcommon\cm_patch.c.obj] Source `src\qcommon\cm_patch.c' not found, needed by target `build\windows-x86-release\client\obj\qcommon\cm_patch.c.obj'.
scons: *** [build\windows-x86-release\client\obj\qcommon\cm_polylib.c.obj] Source `src\qcommon\cm_polylib.c' not found, needed by target `build\windows-x86-release\client\obj\qcommon\cm_polylib.c.obj'.
scons: *** [build\windows-x86-release\client\obj\qcommon\cm_test.c.obj] Source `src\qcommon\cm_test.c' not found, needed by target `build\windows-x86-release\client\obj\qcommon\cm_test.c.obj'.
scons: *** [build\windows-x86-release\client\obj\qcommon\cm_trace.c.obj] Source `src\qcommon\cm_trace.c' not found, needed by target `build\windows-x86-release\client\obj\qcommon\cm_trace.c.obj'.
scons: *** [build\windows-x86-release\client\obj\qcommon\cmd.c.obj] Source `src\qcommon\cmd.c' not found, needed by target `build\windows-x86-release\client\obj\qcommon\cmd.c.obj'.
scons: *** [build\windows-x86-release\client\obj\qcommon\common.c.obj] Source `src\qcommon\common.c' not found, needed by target `build\windows-x86-release\client\obj\qcommon\common.c.obj'.
scons: *** [build\windows-x86-release\client\obj\qcommon\cvar.c.obj] Source `src\qcommon\cvar.c' not found, needed by target `build\windows-x86-release\client\obj\qcommon\cvar.c.obj'.
scons: *** [build\windows-x86-release\client\obj\qcommon\files.c.obj] Source `src\qcommon\files.c' not found, needed by target `build\windows-x86-release\client\obj\qcommon\files.c.obj'.
scons: *** [build\windows-x86-release\client\obj\qcommon\huffman.c.obj] Source `src\qcommon\huffman.c' not found, needed by target `build\windows-x86-release\client\obj\qcommon\huffman.c.obj'.
scons: *** [build\windows-x86-release\client\obj\qcommon\md4.c.obj] Source `src\qcommon\md4.c' not found, needed by target `build\windows-x86-release\client\obj\qcommon\md4.c.obj'.
scons: *** [build\windows-x86-release\client\obj\qcommon\msg.c.obj] Source `src\qcommon\msg.c' not found, needed by target `build\windows-x86-release\client\obj\qcommon\msg.c.obj'.
scons: *** [build\windows-x86-release\client\obj\qcommon\net_chan.c.obj] Source `src\qcommon\net_chan.c' not found, needed by target `build\windows-x86-release\client\obj\qcommon\net_chan.c.obj'.
scons: *** [build\windows-x86-release\client\obj\qcommon\unzip.c.obj] Source `src\qcommon\unzip.c' not found, needed by target `build\windows-x86-release\client\obj\qcommon\unzip.c.obj'.
scons: *** [build\windows-x86-release\client\obj\server\sv_bot.c.obj] Source `src\server\sv_bot.c' not found, needed by target `build\windows-x86-release\client\obj\server\sv_bot.c.obj'.
scons: *** [build\windows-x86-release\client\obj\server\sv_ccmds.c.obj] Source `src\server\sv_ccmds.c' not found, needed by target `build\windows-x86-release\client\obj\server\sv_ccmds.c.obj'.
scons: *** [build\windows-x86-release\client\obj\server\sv_client.c.obj] Source `src\server\sv_client.c' not found, needed by target `build\windows-x86-release\client\obj\server\sv_client.c.obj'.
scons: *** [build\windows-x86-release\client\obj\server\sv_game.c.obj] Source `src\server\sv_game.c' not found, needed by target `build\windows-x86-release\client\obj\server\sv_game.c.obj'.
scons: *** [build\windows-x86-release\client\obj\server\sv_init.c.obj] Source `src\server\sv_init.c' not found, needed by target `build\windows-x86-release\client\obj\server\sv_init.c.obj'.
scons: *** [build\windows-x86-release\client\obj\server\sv_main.c.obj] Source `src\server\sv_main.c' not found, needed by target `build\windows-x86-release\client\obj\server\sv_main.c.obj'.
scons: *** [build\windows-x86-release\client\obj\server\sv_net_chan.c.obj] Source `src\server\sv_net_chan.c' not found, needed by target `build\windows-x86-release\client\obj\server\sv_net_chan.c.obj'.
scons: *** [build\windows-x86-release\client\obj\server\sv_snapshot.c.obj] Source `src\server\sv_snapshot.c' not found, needed by target `build\windows-x86-release\client\obj\server\sv_snapshot.c.obj'.
scons: *** [build\windows-x86-release\client\obj\server\sv_world.c.obj] Source `src\server\sv_world.c' not found, needed by target `build\windows-x86-release\client\obj\server\sv_world.c.obj'.
scons: *** [build\windows-x86-release\client\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x86-release\client\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x86-release\client\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x86-release\client\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_gamma.c.obj] Source `src\sys\win32\win_gamma.c' not found, needed by target `build\windows-x86-release\client\obj\sys\win32\win_gamma.c.obj'.
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj] Source `src\sys\win32\win_glimp.c' not found, needed by target `build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj'.
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_input.c.obj] Source `src\sys\win32\win_input.c' not found, needed by target `build\windows-x86-release\client\obj\sys\win32\win_input.c.obj'.
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_main.c.obj] Source `src\sys\win32\win_main.c' not found, needed by target `build\windows-x86-release\client\obj\sys\win32\win_main.c.obj'.
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_net.c.obj] Source `src\sys\win32\win_net.c' not found, needed by target `build\windows-x86-release\client\obj\sys\win32\win_net.c.obj'.
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_shared.c.obj] Source `src\sys\win32\win_shared.c' not found, needed by target `build\windows-x86-release\client\obj\sys\win32\win_shared.c.obj'.
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_snd.c.obj] Source `src\sys\win32\win_snd.c' not found, needed by target `build\windows-x86-release\client\obj\sys\win32\win_snd.c.obj'.
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_syscon.c.obj] Source `src\sys\win32\win_syscon.c' not found, needed by target `build\windows-x86-release\client\obj\sys\win32\win_syscon.c.obj'.
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_wndproc.c.obj] Source `src\sys\win32\win_wndproc.c' not found, needed by target `build\windows-x86-release\client\obj\sys\win32\win_wndproc.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_bspq3.c.obj] Source `src\games\botlib\be_aas_bspq3.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_aas_bspq3.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_cluster.c.obj] Source `src\games\botlib\be_aas_cluster.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_aas_cluster.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_debug.c.obj] Source `src\games\botlib\be_aas_debug.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_aas_debug.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_entity.c.obj] Source `src\games\botlib\be_aas_entity.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_aas_entity.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_file.c.obj] Source `src\games\botlib\be_aas_file.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_aas_file.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_main.c.obj] Source `src\games\botlib\be_aas_main.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_aas_main.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_move.c.obj] Source `src\games\botlib\be_aas_move.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_aas_move.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_optimize.c.obj] Source `src\games\botlib\be_aas_optimize.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_aas_optimize.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_reach.c.obj] Source `src\games\botlib\be_aas_reach.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_aas_reach.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_route.c.obj] Source `src\games\botlib\be_aas_route.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_aas_route.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_routealt.c.obj] Source `src\games\botlib\be_aas_routealt.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_aas_routealt.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_routetable.c.obj] Source `src\games\botlib\be_aas_routetable.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_aas_routetable.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_aas_sample.c.obj] Source `src\games\botlib\be_aas_sample.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_aas_sample.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ai_char.c.obj] Source `src\games\botlib\be_ai_char.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_ai_char.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ai_chat.c.obj] Source `src\games\botlib\be_ai_chat.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_ai_chat.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ai_gen.c.obj] Source `src\games\botlib\be_ai_gen.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_ai_gen.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ai_goal.c.obj] Source `src\games\botlib\be_ai_goal.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_ai_goal.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ai_move.c.obj] Source `src\games\botlib\be_ai_move.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_ai_move.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ai_weap.c.obj] Source `src\games\botlib\be_ai_weap.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_ai_weap.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ai_weight.c.obj] Source `src\games\botlib\be_ai_weight.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_ai_weight.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_ea.c.obj] Source `src\games\botlib\be_ea.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_ea.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\be_interface.c.obj] Source `src\games\botlib\be_interface.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\be_interface.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\l_crc.c.obj] Source `src\games\botlib\l_crc.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\l_crc.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\l_libvar.c.obj] Source `src\games\botlib\l_libvar.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\l_libvar.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\l_log.c.obj] Source `src\games\botlib\l_log.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\l_log.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\l_memory.c.obj] Source `src\games\botlib\l_memory.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\l_memory.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\l_precomp.c.obj] Source `src\games\botlib\l_precomp.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\l_precomp.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\l_script.c.obj] Source `src\games\botlib\l_script.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\l_script.c.obj'.
scons: *** [build\windows-x86-release\client\obj\games\botlib\l_struct.c.obj] Source `src\games\botlib\l_struct.c' not found, needed by target `build\windows-x86-release\client\obj\games\botlib\l_struct.c.obj'.
scons: *** [build\windows-x86-release\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj] Source `src\tools\extractfuncs\extractfuncs.c' not found, needed by target `build\windows-x86-release\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj'.
scons: *** [build\windows-x86-release\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj] Source `src\tools\extractfuncs\l_log.c' not found, needed by target `build\windows-x86-release\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj'.
scons: *** [build\windows-x86-release\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj] Source `src\tools\extractfuncs\l_memory.c' not found, needed by target `build\windows-x86-release\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj'.
scons: *** [build\windows-x86-release\extractfuncs_tool\obj\tools\extractfuncs\l_precomp.c.obj] Source `src\tools\extractfuncs\l_precomp.c' not found, needed by target `build\windows-x86-release\extractfuncs_tool\obj\tools\extractfuncs\l_precomp.c.obj'.
scons: *** [build\windows-x86-release\extractfuncs_tool\obj\tools\extractfuncs\l_script.c.obj] Source `src\tools\extractfuncs\l_script.c' not found, needed by target `build\windows-x86-release\extractfuncs_tool\obj\tools\extractfuncs\l_script.c.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\Heap.cpp.obj] Source `src\idlib\Heap.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\Heap.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\Str.cpp.obj] Source `src\idlib\Str.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\Str.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\Lib.cpp.obj] Source `src\idlib\Lib.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\Lib.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\Token.cpp.obj] Source `src\idlib\Token.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\Token.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\Lexer.cpp.obj] Source `src\idlib\Lexer.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\Lexer.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\Parser.cpp.obj] Source `src\idlib\Parser.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\Parser.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\sys\sys_assert.cpp.obj] Source `src\idlib\sys\sys_assert.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\sys\sys_assert.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\containers\HashIndex.cpp.obj] Source `src\idlib\containers\HashIndex.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\containers\HashIndex.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Math.cpp.obj] Source `src\idlib\math\Math.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\math\Math.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Vector.cpp.obj] Source `src\idlib\math\Vector.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\math\Vector.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Matrix.cpp.obj] Source `src\idlib\math\Matrix.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\math\Matrix.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Angles.cpp.obj] Source `src\idlib\math\Angles.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\math\Angles.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Quat.cpp.obj] Source `src\idlib\math\Quat.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\math\Quat.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Plane.cpp.obj] Source `src\idlib\math\Plane.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\math\Plane.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Rotation.cpp.obj] Source `src\idlib\math\Rotation.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\math\Rotation.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\VecX.cpp.obj] Source `src\idlib\math\VecX.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\math\VecX.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\MatX.cpp.obj] Source `src\idlib\math\MatX.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\math\MatX.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\bv\Bounds.cpp.obj] Source `src\idlib\bv\Bounds.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\bv\Bounds.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\bv\Box.cpp.obj] Source `src\idlib\bv\Box.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\bv\Box.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\bv\Sphere.cpp.obj] Source `src\idlib\bv\Sphere.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\bv\Sphere.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\geometry\DrawVert.cpp.obj] Source `src\idlib\geometry\DrawVert.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\geometry\DrawVert.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\geometry\JointTransform.cpp.obj] Source `src\idlib\geometry\JointTransform.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\geometry\JointTransform.cpp.obj'.
scons: *** [build\windows-x86-release\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj] Source `src\idlib\geometry\RenderMatrix.cpp' not found, needed by target `build\windows-x86-release\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj] Source `src\renderer-bfg\RenderWorld.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj] Source `src\renderer-bfg\RenderEntity.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj] Source `src\renderer-bfg\ScreenRect.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj] Source `src\renderer-bfg\RenderSystem.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj] Source `src\renderer-bfg\GLContext.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj] Source `src\renderer-bfg\CVarSystem.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj] Source `src\renderer-bfg\GLMatrix.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj] Source `src\renderer-bfg\RenderLog.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj] Source `src\renderer-bfg\RenderProgs.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj] Source `src\renderer-bfg\RenderProgs_GLSL.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj] Source `src\renderer-bfg\Q3Patch.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj] Source `src\renderer-bfg\RenderWorld_load.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Model.cpp.obj] Source `src\renderer-bfg\Model.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Model.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj] Source `src\renderer-bfg\ModelManager.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj] Source `src\renderer-bfg\Model_md3.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj] Source `src\renderer-bfg\Model_mdc.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj] Source `src\renderer-bfg\Model_mds.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Material.cpp.obj] Source `src\renderer-bfg\Material.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Material.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj] Source `src\renderer-bfg\MaterialManager.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj] Source `src\renderer-bfg\Material_shader.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj] Source `src\renderer-bfg\Shadow.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj] Source `src\renderer-bfg\Backend.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj] Source `src\renderer-bfg\Tess.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj] Source `src\renderer-bfg\Tess_calc.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj] Source `src\renderer-bfg\Lighting.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj] Source `src\renderer-bfg\Surface.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj] Source `src\renderer-bfg\ImageManager.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj] Source `src\renderer-bfg\Image_files.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj] Source `src\renderer-bfg\Image_intrinsic.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj] Source `src\renderer-bfg\Image_process.cpp' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj'.
scons: *** [build\windows-x86-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj] Source `src\third-party\glad\src\gl.c' not found, needed by target `build\windows-x86-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast.c.obj] Source `src\games\game\ai_cast.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\ai_cast.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_characters.c.obj] Source `src\games\game\ai_cast_characters.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\ai_cast_characters.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_debug.c.obj] Source `src\games\game\ai_cast_debug.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\ai_cast_debug.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_events.c.obj] Source `src\games\game\ai_cast_events.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\ai_cast_events.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_fight.c.obj] Source `src\games\game\ai_cast_fight.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\ai_cast_fight.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_func_attack.c.obj] Source `src\games\game\ai_cast_func_attack.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\ai_cast_func_attack.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_func_boss1.c.obj] Source `src\games\game\ai_cast_func_boss1.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\ai_cast_func_boss1.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_funcs.c.obj] Source `src\games\game\ai_cast_funcs.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\ai_cast_funcs.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_script.c.obj] Source `src\games\game\ai_cast_script.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\ai_cast_script.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_script_actions.c.obj] Source `src\games\game\ai_cast_script_actions.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\ai_cast_script_actions.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_script_ents.c.obj] Source `src\games\game\ai_cast_script_ents.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\ai_cast_script_ents.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_sight.c.obj] Source `src\games\game\ai_cast_sight.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\ai_cast_sight.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\ai_cast_think.c.obj] Source `src\games\game\ai_cast_think.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\ai_cast_think.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\bg_animation.c.obj] Source `src\games\game\bg_animation.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\bg_animation.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\bg_pmove.c.obj] Source `src\games\game\bg_pmove.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\bg_pmove.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\bg_slidemove.c.obj] Source `src\games\game\bg_slidemove.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\bg_slidemove.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_active.c.obj] Source `src\games\game\g_active.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_active.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_alarm.c.obj] Source `src\games\game\g_alarm.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_alarm.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_bot.c.obj] Source `src\games\game\g_bot.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_bot.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_client.c.obj] Source `src\games\game\g_client.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_client.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_cmds.c.obj] Source `src\games\game\g_cmds.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_cmds.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_combat.c.obj] Source `src\games\game\g_combat.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_combat.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_items.c.obj] Source `src\games\game\g_items.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_items.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_main.c.obj] Source `src\games\game\g_main.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_main.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_mem.c.obj] Source `src\games\game\g_mem.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_mem.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_misc.c.obj] Source `src\games\game\g_misc.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_misc.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_missile.c.obj] Source `src\games\game\g_missile.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_missile.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_mover.c.obj] Source `src\games\game\g_mover.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_mover.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_props.c.obj] Source `src\games\game\g_props.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_props.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_save.c.obj] Source `src\games\game\g_save.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_save.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_script.c.obj] Source `src\games\game\g_script.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_script.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_script_actions.c.obj] Source `src\games\game\g_script_actions.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_script_actions.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_session.c.obj] Source `src\games\game\g_session.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_session.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_spawn.c.obj] Source `src\games\game\g_spawn.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_spawn.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_svcmds.c.obj] Source `src\games\game\g_svcmds.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_svcmds.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_syscalls.c.obj] Source `src\games\game\g_syscalls.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_syscalls.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_target.c.obj] Source `src\games\game\g_target.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_target.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_team.c.obj] Source `src\games\game\g_team.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_team.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_tramcar.c.obj] Source `src\games\game\g_tramcar.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_tramcar.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_trigger.c.obj] Source `src\games\game\g_trigger.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_trigger.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_utils.c.obj] Source `src\games\game\g_utils.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_utils.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\game\g_weapon.c.obj] Source `src\games\game\g_weapon.c' not found, needed by target `build\windows-x86-release\game\obj\games\game\g_weapon.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\botai\ai_chat.c.obj] Source `src\games\botai\ai_chat.c' not found, needed by target `build\windows-x86-release\game\obj\games\botai\ai_chat.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\botai\ai_cmd.c.obj] Source `src\games\botai\ai_cmd.c' not found, needed by target `build\windows-x86-release\game\obj\games\botai\ai_cmd.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\botai\ai_dmnet.c.obj] Source `src\games\botai\ai_dmnet.c' not found, needed by target `build\windows-x86-release\game\obj\games\botai\ai_dmnet.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\botai\ai_dmq3.c.obj] Source `src\games\botai\ai_dmq3.c' not found, needed by target `build\windows-x86-release\game\obj\games\botai\ai_dmq3.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\botai\ai_main.c.obj] Source `src\games\botai\ai_main.c' not found, needed by target `build\windows-x86-release\game\obj\games\botai\ai_main.c.obj'.
scons: *** [build\windows-x86-release\game\obj\games\botai\ai_team.c.obj] Source `src\games\botai\ai_team.c' not found, needed by target `build\windows-x86-release\game\obj\games\botai\ai_team.c.obj'.
scons: *** [build\windows-x86-release\game\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x86-release\game\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x86-release\game\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x86-release\game\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\game\bg_animation.c.obj] Source `src\games\game\bg_animation.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\game\bg_animation.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\game\bg_pmove.c.obj] Source `src\games\game\bg_pmove.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\game\bg_pmove.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\game\bg_slidemove.c.obj] Source `src\games\game\bg_slidemove.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\game\bg_slidemove.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_consolecmds.c.obj] Source `src\games\cgame\cg_consolecmds.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_consolecmds.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_draw.c.obj] Source `src\games\cgame\cg_draw.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_draw.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_drawtools.c.obj] Source `src\games\cgame\cg_drawtools.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_drawtools.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_effects.c.obj] Source `src\games\cgame\cg_effects.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_effects.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_ents.c.obj] Source `src\games\cgame\cg_ents.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_ents.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_event.c.obj] Source `src\games\cgame\cg_event.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_event.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_flamethrower.c.obj] Source `src\games\cgame\cg_flamethrower.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_flamethrower.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_info.c.obj] Source `src\games\cgame\cg_info.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_info.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_localents.c.obj] Source `src\games\cgame\cg_localents.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_localents.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_main.c.obj] Source `src\games\cgame\cg_main.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_main.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_marks.c.obj] Source `src\games\cgame\cg_marks.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_marks.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_newDraw.c.obj] Source `src\games\cgame\cg_newDraw.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_newDraw.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_particles.c.obj] Source `src\games\cgame\cg_particles.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_particles.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_players.c.obj] Source `src\games\cgame\cg_players.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_players.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_playerstate.c.obj] Source `src\games\cgame\cg_playerstate.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_playerstate.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_predict.c.obj] Source `src\games\cgame\cg_predict.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_predict.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_scoreboard.c.obj] Source `src\games\cgame\cg_scoreboard.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_scoreboard.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_servercmds.c.obj] Source `src\games\cgame\cg_servercmds.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_servercmds.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_snapshot.c.obj] Source `src\games\cgame\cg_snapshot.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_snapshot.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_sound.c.obj] Source `src\games\cgame\cg_sound.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_sound.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_syscalls.c.obj] Source `src\games\cgame\cg_syscalls.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_syscalls.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_trails.c.obj] Source `src\games\cgame\cg_trails.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_trails.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_view.c.obj] Source `src\games\cgame\cg_view.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_view.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_weapons.c.obj] Source `src\games\cgame\cg_weapons.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\cgame\cg_weapons.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\games\ui\ui_shared.c.obj] Source `src\games\ui\ui_shared.c' not found, needed by target `build\windows-x86-release\cgame\obj\games\ui\ui_shared.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x86-release\cgame\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x86-release\cgame\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x86-release\cgame\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x86-release\ui\obj\games\game\bg_misc.c.obj] Source `src\games\game\bg_misc.c' not found, needed by target `build\windows-x86-release\ui\obj\games\game\bg_misc.c.obj'.
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_atoms.c.obj] Source `src\games\ui\ui_atoms.c' not found, needed by target `build\windows-x86-release\ui\obj\games\ui\ui_atoms.c.obj'.
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_gameinfo.c.obj] Source `src\games\ui\ui_gameinfo.c' not found, needed by target `build\windows-x86-release\ui\obj\games\ui\ui_gameinfo.c.obj'.
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_main.c.obj] Source `src\games\ui\ui_main.c' not found, needed by target `build\windows-x86-release\ui\obj\games\ui\ui_main.c.obj'.
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_players.c.obj] Source `src\games\ui\ui_players.c' not found, needed by target `build\windows-x86-release\ui\obj\games\ui\ui_players.c.obj'.
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_shared.c.obj] Source `src\games\ui\ui_shared.c' not found, needed by target `build\windows-x86-release\ui\obj\games\ui\ui_shared.c.obj'.
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_syscalls.c.obj] Source `src\games\ui\ui_syscalls.c' not found, needed by target `build\windows-x86-release\ui\obj\games\ui\ui_syscalls.c.obj'.
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_util.c.obj] Source `src\games\ui\ui_util.c' not found, needed by target `build\windows-x86-release\ui\obj\games\ui\ui_util.c.obj'.
scons: *** [build\windows-x86-release\ui\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x86-release\ui\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x86-release\ui\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x86-release\ui\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_animation.c.obj] Source `src\renderer\tr_animation.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_animation.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_backend.c.obj] Source `src\renderer\tr_backend.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_backend.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_bsp.c.obj] Source `src\renderer\tr_bsp.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_bsp.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_cmds.c.obj] Source `src\renderer\tr_cmds.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_cmds.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_cmesh.c.obj] Source `src\renderer\tr_cmesh.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_cmesh.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_curve.c.obj] Source `src\renderer\tr_curve.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_curve.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_flares.c.obj] Source `src\renderer\tr_flares.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_flares.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_font.c.obj] Source `src\renderer\tr_font.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_font.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_image.c.obj] Source `src\renderer\tr_image.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_image.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_init.c.obj] Source `src\renderer\tr_init.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_init.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_light.c.obj] Source `src\renderer\tr_light.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_light.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_main.c.obj] Source `src\renderer\tr_main.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_main.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_marks.c.obj] Source `src\renderer\tr_marks.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_marks.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_mesh.c.obj] Source `src\renderer\tr_mesh.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_mesh.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_model.c.obj] Source `src\renderer\tr_model.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_model.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_noise.c.obj] Source `src\renderer\tr_noise.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_noise.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_scene.c.obj] Source `src\renderer\tr_scene.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_scene.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_shade.c.obj] Source `src\renderer\tr_shade.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_shade.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_shade_calc.c.obj] Source `src\renderer\tr_shade_calc.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_shade_calc.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_shader.c.obj] Source `src\renderer\tr_shader.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_shader.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_shadows.c.obj] Source `src\renderer\tr_shadows.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_shadows.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_sky.c.obj] Source `src\renderer\tr_sky.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_sky.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_surface.c.obj] Source `src\renderer\tr_surface.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_surface.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_world.c.obj] Source `src\renderer\tr_world.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_world.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_module.c.obj] Source `src\renderer\tr_module.c' not found, needed by target `build\windows-x86-release\renderer\obj\renderer\tr_module.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\qcommon\q_math.c.obj] Source `src\qcommon\q_math.c' not found, needed by target `build\windows-x86-release\renderer\obj\qcommon\q_math.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\qcommon\q_shared.c.obj] Source `src\qcommon\q_shared.c' not found, needed by target `build\windows-x86-release\renderer\obj\qcommon\q_shared.c.obj'.
scons: *** [build\windows-x86-release\renderer\obj\third-party\glad\src\gl.c.obj] Source `src\third-party\glad\src\gl.c' not found, needed by target `build\windows-x86-release\renderer\obj\third-party\glad\src\gl.c.obj'.

### failure context

- build\windows-x86-release\client\obj\client\cl_cgame.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 57.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cgame.c.obj'.
```

- build\windows-x86-release\client\obj\client\cl_cin.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 57.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cin.c.obj'.
```

- build\windows-x86-release\client\obj\client\cl_console.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 57.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_console.c.obj'.
```

- build\windows-x86-release\client\obj\client\cl_input.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 57.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_input.c.obj'.
```

- build\windows-x86-release\client\obj\client\cl_keys.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 57.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_keys.c.obj'.
```

- build\windows-x86-release\client\obj\client\cl_main.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 57.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_main.c.obj'.
```

- build\windows-x86-release\client\obj\client\cl_net_chan.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 57.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_net_chan.c.obj'.
```

- build\windows-x86-release\client\obj\client\cl_parse.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 57.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_parse.c.obj'.
```

- build\windows-x86-release\client\obj\client\cl_qgl.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 57.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_qgl.c.obj'.
```

- build\windows-x86-release\client\obj\client\cl_scrn.c.obj

```
Filesystem      Size  Used Avail Use% Mounted on
C:              150G  120G   31G  80% /c
Collecting scons
  Downloading scons-4.11.1-py3-none-any.whl.metadata (9.2 kB)
Downloading scons-4.11.1-py3-none-any.whl (4.1 MB)
   ---------------------------------------- 4.1/4.1 MB 57.1 MB/s  0:00:00
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
scons: *** [build\windows-x86-release\client\obj\client\cl_cgame.c.obj] Source `src\client\cl_cgame.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cgame.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_cin.c.obj] Source `src\client\cl_cin.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_cin.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_console.c.obj] Source `src\client\cl_console.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_console.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_input.c.obj] Source `src\client\cl_input.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_input.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_keys.c.obj] Source `src\client\cl_keys.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_keys.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_main.c.obj] Source `src\client\cl_main.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_main.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_net_chan.c.obj] Source `src\client\cl_net_chan.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_net_chan.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_parse.c.obj] Source `src\client\cl_parse.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_parse.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_qgl.c.obj] Source `src\client\cl_qgl.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_qgl.c.obj'.
scons: *** [build\windows-x86-release\client\obj\client\cl_scrn.c.obj] Source `src\client\cl_scrn.c' not found, needed by target `build\windows-x86-release\client\obj\client\cl_scrn.c.obj'.
```


### warning kinds

- [33x] -writable-strings
  - src\splines\q_shared.cpp(757,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(774,12): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\q_shared.cpp(799,9): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(471,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(475,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(479,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(552,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(556,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(565,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(568,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(853,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(856,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(859,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(960,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(962,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(964,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(966,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1244,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1247,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1250,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1253,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1256,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1266,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1269,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1272,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1275,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1279,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1286,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1289,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1296,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1299,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1301,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1308,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
- [8x] -unused-but-set-variable
  - src\splines\util_str.cpp(437,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(468,7): warning: variable 'ch' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(476,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(481,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(483,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1126,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1171,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1220,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
- [6x] -logical-op-parentheses
  - src\splines\math_quaternion.h(167,62): warning: '&&' within '||' [-Wlogical-op-parentheses]
- [6x] -sizeof-array-argument
  - src\splines\math_matrix.h(94,26): warning: sizeof on array function parameter will return size of 'float (*)[3]' instead of 'float[3][3]' [-Wsizeof-array-argument]
- [6x] -sizeof-pointer-memaccess
  - src\splines\math_matrix.h(94,28): warning: 'memcpy' call operates on objects of type 'float[3]' while the size is based on a different type 'float (*)[3]' [-Wsizeof-pointer-memaccess]
- [5x] -macro-redefined
  - src\splines\q_splineshared.h(94,9): warning: 'QDECL' macro redefined [-Wmacro-redefined]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]

