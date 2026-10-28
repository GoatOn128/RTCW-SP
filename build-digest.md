# Build digest

commit: 33e0568afbd0

- ubuntu-latest-x64-debug-: failure
- ubuntu-latest-x64-release-: failure
- ubuntu-latest-x64-release-game: failure
- ubuntu-latest-x86-debug-: failure
- ubuntu-latest-x86-release-: cancelled
- uncrustify: success
- windows-latest-x64-debug-: success
- windows-latest-x64-release-: success
- windows-latest-x64-release-cgame: success
- windows-latest-x64-release-game: success
- windows-latest-x64-release-ui: cancelled
- windows-latest-x86-debug-: failure
- windows-latest-x86-release-: failure

## ubuntu-latest-x64-debug-

status: failure

errors: 4
warnings: 0 in 0 kinds

### errors

/home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_cgame.cpp:802:(.text+0x53b5): undefined reference to `Sys_SnapVector(float*)'
/home/runner/work/RTCW-SP/RTCW-SP/src/server/sv_game.cpp:489:(.text+0x46c5): undefined reference to `Sys_SnapVector(float*)'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [bin/WolfSP_x64] Error 1

### failure context

- bin/WolfSP_x64

```
Compiling 'src/games/botlib/l_script.cpp'
Compiling 'src/games/botlib/l_struct.cpp'
Compiling 'src/third-party/stb/stb_impl.c'
Compiling 'src/third-party/recast/Detour/Source/DetourAlloc.cpp'
Compiling 'src/third-party/recast/Detour/Source/DetourAssert.cpp'
Compiling 'src/third-party/recast/Detour/Source/DetourCommon.cpp'
Compiling 'src/third-party/recast/Detour/Source/DetourNavMesh.cpp'
Compiling 'src/third-party/recast/Detour/Source/DetourNavMeshBuilder.cpp'
Compiling 'src/third-party/recast/Detour/Source/DetourNavMeshQuery.cpp'
Compiling 'src/third-party/recast/Detour/Source/DetourNode.cpp'
Compiling 'src/tools/extractfuncs/extractfuncs.cpp'
Compiling 'src/tools/extractfuncs/l_log.cpp'
Compiling 'src/tools/extractfuncs/l_memory.cpp'
Compiling 'src/tools/extractfuncs/l_precomp.cpp'
Linking 'bin/WolfSP_x64'
Compiling 'src/tools/extractfuncs/l_script.cpp'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-debug/client/obj/sys/unix/unix_main.cpp.o:(.bss+0x0): multiple definition of `re'; build/linux-x64-debug/client/obj/client/cl_main.cpp.o:(.bss+0x1dbd68): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-debug/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0xac8): multiple definition of `qglLockArraysEXT'; build/linux-x64-debug/client/obj/renderer/tr_init.cpp.o:(.bss+0x2088): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-debug/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0xad0): multiple definition of `qglUnlockArraysEXT'; build/linux-x64-debug/client/obj/renderer/tr_init.cpp.o:(.bss+0x2090): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-debug/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0xab8): multiple definition of `qglActiveTextureARB'; build/linux-x64-debug/client/obj/renderer/tr_init.cpp.o:(.bss+0x2078): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-debug/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0xac0): multiple definition of `qglClientActiveTextureARB'; build/linux-x64-debug/client/obj/renderer/tr_init.cpp.o:(.bss+0x2080): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-debug/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0xab0): multiple definition of `qglMultiTexCoord2fARB'; build/linux-x64-debug/client/obj/renderer/tr_init.cpp.o:(.bss+0x2070): first defined here
Compiling 'src/games/game/bg_animation.cpp'
Compiling 'src/games/game/bg_misc.cpp'
Linking 'build/linux-x64-debug/extractfuncs'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-debug/client/obj/client/cl_cgame.cpp.o: in function `CL_CreateCGameImports()::$_94::operator()(float*) const':
/home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_cgame.cpp:802:(.text+0x53b5): undefined reference to `Sys_SnapVector(float*)'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-debug/client/obj/server/sv_game.cpp.o: in function `SV_CreateGameImports()::$_47::operator()(float*) const':
/home/runner/work/RTCW-SP/RTCW-SP/src/server/sv_game.cpp:489:(.text+0x46c5): undefined reference to `Sys_SnapVector(float*)'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [bin/WolfSP_x64] Error 1
```


### warning kinds

## ubuntu-latest-x64-release-

status: failure

errors: 4
warnings: 0 in 0 kinds

### errors

cl_cgame.cpp:(.text+0x2111): undefined reference to `Sys_SnapVector(float*)'
sv_game.cpp:(.text+0x18c1): undefined reference to `Sys_SnapVector(float*)'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [bin/WolfSP_x64] Error 1

### failure context

- bin/WolfSP_x64

```
Compiling 'src/games/game/g_misc.cpp'
Compiling 'src/games/game/g_missile.cpp'
Compiling 'src/games/game/g_mover.cpp'
Compiling 'src/games/game/g_props.cpp'
Compiling 'src/games/game/g_save.cpp'
Compiling 'src/games/game/g_script.cpp'
Compiling 'src/games/game/g_script_actions.cpp'
Compiling 'src/games/game/g_session.cpp'
Compiling 'src/games/game/g_spawn.cpp'
Compiling 'src/games/game/g_svcmds.cpp'
Compiling 'src/games/game/g_syscalls.cpp'
Compiling 'src/games/game/g_target.cpp'
Compiling 'src/games/game/g_team.cpp'
Compiling 'src/games/game/g_tramcar.cpp'
Compiling 'src/games/game/g_trigger.cpp'
Compiling 'src/games/game/g_utils.cpp'
Linking 'bin/WolfSP_x64'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/sys/unix/unix_main.cpp.o:(.bss+0x0): multiple definition of `re'; build/linux-x64-release/client/obj/client/cl_main.cpp.o:(.bss+0x1dbd68): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0xac8): multiple definition of `qglLockArraysEXT'; build/linux-x64-release/client/obj/renderer/tr_init.cpp.o:(.bss+0x2088): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0xad0): multiple definition of `qglUnlockArraysEXT'; build/linux-x64-release/client/obj/renderer/tr_init.cpp.o:(.bss+0x2090): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0xab8): multiple definition of `qglActiveTextureARB'; build/linux-x64-release/client/obj/renderer/tr_init.cpp.o:(.bss+0x2078): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0xac0): multiple definition of `qglClientActiveTextureARB'; build/linux-x64-release/client/obj/renderer/tr_init.cpp.o:(.bss+0x2080): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0xab0): multiple definition of `qglMultiTexCoord2fARB'; build/linux-x64-release/client/obj/renderer/tr_init.cpp.o:(.bss+0x2070): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/client/cl_cgame.cpp.o: in function `CL_CreateCGameImports()::$_94::__invoke(float*)':
cl_cgame.cpp:(.text+0x2111): undefined reference to `Sys_SnapVector(float*)'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/server/sv_game.cpp.o: in function `SV_CreateGameImports()::$_47::__invoke(float*)':
sv_game.cpp:(.text+0x18c1): undefined reference to `Sys_SnapVector(float*)'
Compiling 'src/games/game/g_weapon.cpp'
Compiling 'src/games/game/ai/ai_actor.cpp'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [bin/WolfSP_x64] Error 1
```


### warning kinds

## ubuntu-latest-x64-release-game

status: failure

errors: 4
warnings: 0 in 0 kinds

### errors

cl_cgame.cpp:(.text+0x2111): undefined reference to `Sys_SnapVector(float*)'
sv_game.cpp:(.text+0x18c1): undefined reference to `Sys_SnapVector(float*)'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [bin/WolfSP_x64] Error 1

### failure context

- bin/WolfSP_x64

```
Compiling 'src/games/game/ai/fsm/ai_combat.cpp'
Compiling 'src/games/game/ai/fsm/ai_monster_blackguard.cpp'
Compiling 'src/games/game/ai/fsm/ai_monster_loper.cpp'
Compiling 'src/games/game/ai/fsm/ai_monster_reject.cpp'
Compiling 'src/games/game/ai/fsm/ai_monster_stimsoldier.cpp'
Compiling 'src/games/game/ai/fsm/ai_monster_warzombie.cpp'
Compiling 'src/games/game/ai/fsm/ai_monster_zombie.cpp'
Compiling 'src/games/game/ai/fsm/ai_state_legacy.cpp'
Compiling 'src/games/game/ai/fsm/ai_state_machine.cpp'
Compiling 'src/tools/extractfuncs/extractfuncs.cpp'
Compiling 'src/tools/extractfuncs/l_log.cpp'
Compiling 'src/tools/extractfuncs/l_memory.cpp'
Compiling 'src/tools/extractfuncs/l_precomp.cpp'
Linking 'bin/WolfSP_x64'
Compiling 'src/tools/extractfuncs/l_script.cpp'
Compiling 'src/games/game/bg_animation.cpp'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/sys/unix/unix_main.cpp.o:(.bss+0x0): multiple definition of `re'; build/linux-x64-release/client/obj/client/cl_main.cpp.o:(.bss+0x1dbd68): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0xac8): multiple definition of `qglLockArraysEXT'; build/linux-x64-release/client/obj/renderer/tr_init.cpp.o:(.bss+0x2088): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0xad0): multiple definition of `qglUnlockArraysEXT'; build/linux-x64-release/client/obj/renderer/tr_init.cpp.o:(.bss+0x2090): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0xab8): multiple definition of `qglActiveTextureARB'; build/linux-x64-release/client/obj/renderer/tr_init.cpp.o:(.bss+0x2078): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0xac0): multiple definition of `qglClientActiveTextureARB'; build/linux-x64-release/client/obj/renderer/tr_init.cpp.o:(.bss+0x2080): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0xab0): multiple definition of `qglMultiTexCoord2fARB'; build/linux-x64-release/client/obj/renderer/tr_init.cpp.o:(.bss+0x2070): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/game/obj/games/game/g_main.cpp.o:(.bss+0x1e5788): multiple definition of `g_gametype'; build/linux-x64-release/client/obj/games/botlib/be_ai_goal.cpp.o:(.bss+0x440): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/game/obj/games/game/g_main.cpp.o:(.bss+0x1e5898): multiple definition of `g_gameskill'; build/linux-x64-release/client/obj/games/botlib/be_ai_goal.cpp.o:(.bss+0x444): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/client/cl_cgame.cpp.o: in function `CL_CreateCGameImports()::$_94::__invoke(float*)':
cl_cgame.cpp:(.text+0x2111): undefined reference to `Sys_SnapVector(float*)'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/server/sv_game.cpp.o: in function `SV_CreateGameImports()::$_47::__invoke(float*)':
sv_game.cpp:(.text+0x18c1): undefined reference to `Sys_SnapVector(float*)'
Compiling 'src/games/game/bg_misc.cpp'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [bin/WolfSP_x64] Error 1
```


### warning kinds

## ubuntu-latest-x86-debug-

status: failure

errors: 12
warnings: 0 in 0 kinds

### errors

/home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_cgame.cpp:802:(.text+0x6a4e): undefined reference to `Sys_SnapVector(float*)'
/home/runner/work/RTCW-SP/RTCW-SP/src/client/snd_mix.cpp:163:(.text+0xc0): undefined reference to `S_WriteLinearBlastStereo16()'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_test.cpp:162:(.text+0x3bb): undefined reference to `BoxOnPlaneSide(float*, float*, cplane_s*)'
/home/runner/work/RTCW-SP/RTCW-SP/src/server/sv_game.cpp:489:(.text+0x565e): undefined reference to `Sys_SnapVector(float*)'
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_marks.cpp:157:(.text+0x77): undefined reference to `BoxOnPlaneSide(float*, float*, cplane_s*)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_marks.cpp:191:(.text+0x1ad): undefined reference to `BoxOnPlaneSide(float*, float*, cplane_s*)'
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_world.cpp:427:(.text+0x803): undefined reference to `BoxOnPlaneSide(float*, float*, cplane_s*)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_world.cpp:437:(.text+0x85f): undefined reference to `BoxOnPlaneSide(float*, float*, cplane_s*)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_world.cpp:447:(.text+0x8bb): undefined reference to `BoxOnPlaneSide(float*, float*, cplane_s*)'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/renderer/tr_world.cpp.o:/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_world.cpp:457: more undefined references to `BoxOnPlaneSide(float*, float*, cplane_s*)' follow
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [bin/WolfSP_x86] Error 1

### failure context

- bin/WolfSP_x86

```
Compiling 'src/tools/extractfuncs/l_precomp.cpp'
Compiling 'src/tools/extractfuncs/l_script.cpp'
Linking 'bin/WolfSP_x86'
Compiling 'src/games/game/bg_animation.cpp'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/sys/unix/unix_main.cpp.o:(.bss+0x0): multiple definition of `re'; build/linux-x86-debug/client/obj/client/cl_main.cpp.o:(.bss+0x1dbcc8): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0x564): multiple definition of `qglLockArraysEXT'; build/linux-x86-debug/client/obj/renderer/tr_init.cpp.o:(.bss+0x1e80): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0x568): multiple definition of `qglUnlockArraysEXT'; build/linux-x86-debug/client/obj/renderer/tr_init.cpp.o:(.bss+0x1e84): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0x55c): multiple definition of `qglActiveTextureARB'; build/linux-x86-debug/client/obj/renderer/tr_init.cpp.o:(.bss+0x1e78): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0x560): multiple definition of `qglClientActiveTextureARB'; build/linux-x86-debug/client/obj/renderer/tr_init.cpp.o:(.bss+0x1e7c): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/sys/unix/linux_qgl.cpp.o:(.bss+0x558): multiple definition of `qglMultiTexCoord2fARB'; build/linux-x86-debug/client/obj/renderer/tr_init.cpp.o:(.bss+0x1e74): first defined here
Compiling 'src/games/game/bg_misc.cpp'
Linking 'build/linux-x86-debug/extractfuncs'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/client/cl_cgame.cpp.o: in function `CL_CreateCGameImports()::$_94::operator()(float*) const':
/home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_cgame.cpp:802:(.text+0x6a4e): undefined reference to `Sys_SnapVector(float*)'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/client/snd_mix.cpp.o: in function `S_TransferStereo16(unsigned long*, int)':
/home/runner/work/RTCW-SP/RTCW-SP/src/client/snd_mix.cpp:163:(.text+0xc0): undefined reference to `S_WriteLinearBlastStereo16()'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/qcommon/cm_test.cpp.o: in function `CM_BoxLeafnums_r(leafList_s*, int)':
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_test.cpp:162:(.text+0x3bb): undefined reference to `BoxOnPlaneSide(float*, float*, cplane_s*)'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/server/sv_game.cpp.o: in function `SV_CreateGameImports()::$_47::operator()(float*) const':
/home/runner/work/RTCW-SP/RTCW-SP/src/server/sv_game.cpp:489:(.text+0x565e): undefined reference to `Sys_SnapVector(float*)'
Compiling 'src/games/game/bg_pmove.cpp'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/renderer/tr_marks.cpp.o: in function `R_BoxSurfaces_r(mnode_s*, float*, float*, surfaceType_t**, int, int*, float*)':
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_marks.cpp:157:(.text+0x77): undefined reference to `BoxOnPlaneSide(float*, float*, cplane_s*)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_marks.cpp:191:(.text+0x1ad): undefined reference to `BoxOnPlaneSide(float*, float*, cplane_s*)'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/renderer/tr_world.cpp.o: in function `R_RecursiveWorldNode(mnode_s*, int, int)':
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_world.cpp:427:(.text+0x803): undefined reference to `BoxOnPlaneSide(float*, float*, cplane_s*)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_world.cpp:437:(.text+0x85f): undefined reference to `BoxOnPlaneSide(float*, float*, cplane_s*)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_world.cpp:447:(.text+0x8bb): undefined reference to `BoxOnPlaneSide(float*, float*, cplane_s*)'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-debug/client/obj/renderer/tr_world.cpp.o:/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_world.cpp:457: more undefined references to `BoxOnPlaneSide(float*, float*, cplane_s*)' follow
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [bin/WolfSP_x86] Error 1
```


### warning kinds

## ubuntu-latest-x86-release-

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## uncrustify

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-debug-

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-release-

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-release-cgame

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-release-game

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-release-ui

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x86-debug-

status: failure

errors: 13
warnings: 0 in 0 kinds

### errors

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase0
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase1
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase2
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase3
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase4
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase5
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase6
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase7
scons: *** [bin\WolfSP_x86.exe] Error 1
scons: *** [bin\main\qagame_x86.dll] Error 1
scons: *** [bin\main\cgame_x86.dll] Error 1
scons: *** [bin\main\ui_x86.dll] Error 1

### failure context

- bin\WolfSP_x86.exe

```
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\client\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase1
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\client\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase2
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\client\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase3
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\client\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase4
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\client\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase5
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\client\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase6
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\client\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase7
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\client\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))
scons: *** [bin\WolfSP_x86.exe] Error 1
```

- bin\main\qagame_x86.dll

```
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase1
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase2
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase3
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase4
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase5
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase6
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase7
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))
scons: *** [bin\main\qagame_x86.dll] Error 1
```

- bin\main\cgame_x86.dll

```
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase1
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase2
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase3
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase4
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase5
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase6
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase7
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))
scons: *** [bin\main\cgame_x86.dll] Error 1
```

- bin\main\ui_x86.dll

```
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\ui\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase1
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\ui\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase2
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\ui\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase3
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\ui\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase4
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\ui\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase5
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\ui\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase6
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\ui\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase7
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_math.cpp:748
>>>               build\windows-x86-debug\ui\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))
scons: *** [bin\main\ui_x86.dll] Error 1
```


### warning kinds

## windows-latest-x86-release-

status: failure

errors: 16
warnings: 0 in 0 kinds

### errors

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase0
>>> referenced by build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase1
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase2
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase3
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase4
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase5
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase6
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase7
scons: *** [bin\WolfSP_x86.exe] Error 1
>>> referenced by build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))
scons: *** [bin\main\qagame_x86.dll] Error 1
>>> referenced by build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))
scons: *** [bin\main\cgame_x86.dll] Error 1
>>> referenced by build\windows-x86-release\ui\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))
scons: *** [bin\main\ui_x86.dll] Error 1

### failure context

- bin\WolfSP_x86.exe

```
Compiling 'src\games\game\g_missile.cpp'
Compiling 'src\games\game\g_mover.cpp'
Compiling 'src\games\game\g_props.cpp'
Linking 'bin\WolfSP_x86.exe'
Compiling 'src\games\game\g_save.cpp'
Compiling 'src\games\game\g_script.cpp'
Compiling 'src\games\game\g_script_actions.cpp'
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase0
>>> referenced by build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase1
>>> referenced by build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase2
>>> referenced by build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase3
>>> referenced by build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase4
>>> referenced by build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase5
>>> referenced by build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase6
>>> referenced by build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase7
>>> referenced by build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))
scons: *** [bin\WolfSP_x86.exe] Error 1
```

- bin\main\qagame_x86.dll

```
Compiling 'src\games\game\ai\fsm\ai_state_machine.cpp'
Compiling 'src\qcommon\q_math.cpp'
Compiling 'src\qcommon\q_shared.cpp'
Compiling 'src\games\game\bg_animation.cpp'
Compiling 'src\games\game\bg_misc.cpp'
Compiling 'src\games\game\bg_pmove.cpp'
Linking 'bin\main\qagame_x86.dll'
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase0
>>> referenced by build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase1
>>> referenced by build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase2
>>> referenced by build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase3
>>> referenced by build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase4
>>> referenced by build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase5
>>> referenced by build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase6
>>> referenced by build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase7
>>> referenced by build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))
scons: *** [bin\main\qagame_x86.dll] Error 1
```

- bin\main\cgame_x86.dll

```
Compiling 'src\games\game\bg_misc.cpp'
Compiling 'src\games\ui\ui_atoms.cpp'
Compiling 'src\games\ui\ui_gameinfo.cpp'
Compiling 'src\games\ui\ui_main.cpp'
Compiling 'src\games\ui\ui_players.cpp'
Compiling 'src\games\ui\ui_shared.cpp'
Linking 'bin\main\cgame_x86.dll'
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase0
>>> referenced by build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase1
>>> referenced by build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase2
>>> referenced by build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase3
>>> referenced by build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase4
>>> referenced by build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase5
>>> referenced by build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase6
>>> referenced by build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase7
>>> referenced by build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))
scons: *** [bin\main\cgame_x86.dll] Error 1
```

- bin\main\ui_x86.dll

```
>>> referenced by build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))
scons: *** [bin\main\cgame_x86.dll] Error 1
Compiling 'src\games\ui\ui_syscalls.cpp'
Compiling 'src\games\ui\ui_util.cpp'
Compiling 'src\qcommon\q_math.cpp'
Compiling 'src\qcommon\q_shared.cpp'
Linking 'bin\main\ui_x86.dll'
lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase0
>>> referenced by build\windows-x86-release\ui\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase1
>>> referenced by build\windows-x86-release\ui\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase2
>>> referenced by build\windows-x86-release\ui\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase3
>>> referenced by build\windows-x86-release\ui\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase4
>>> referenced by build\windows-x86-release\ui\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase5
>>> referenced by build\windows-x86-release\ui\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase6
>>> referenced by build\windows-x86-release\ui\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))

lld-link: error: undefined symbol: __MSASMLABEL_.0__Lcase7
>>> referenced by build\windows-x86-release\ui\obj\qcommon\q_math.cpp.obj:(int __cdecl BoxOnPlaneSide(float *const, float *const, struct cplane_s *))
scons: *** [bin\main\ui_x86.dll] Error 1
```


### warning kinds

