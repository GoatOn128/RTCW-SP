# Compact build digest

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

