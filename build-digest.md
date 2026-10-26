# Build digest

commit: 246fcc7851e4

- uncrustify: failure

## uncrustify

status: failure

errors: 40
warnings: 0

### errors

build/linux-x86-release/client/src/renderer/tr_local.h:34:In file included from 10build/linux-x86-release/client/src/renderer/tr_animation.c:: fatal error: 30'../game/q_shared.h' file not found:
build/linux-x86-release/client/src/renderer/tr_local.h:34:10In file included from : build/linux-x86-release/client/src/renderer/tr_backend.cfatal error: :'../game/q_shared.h' file not found
build/linux-x86-release/client/src/renderer/tr_local.hfatal error: :'../game/q_shared.h' file not found34
:10: fatal error: '../game/q_shared.h' file not found
scons: *** [build/linux-x86-release/client/src/renderer/tr_cmds.o] Error 1
scons: *** [build/linux-x86-release/client/src/renderer/tr_animation.o] Error 1
scons: *** [build/linux-x86-release/client/src/renderer/tr_backend.o] Error 1
scons: *** [build/linux-x86-release/client/src/renderer/tr_bsp.o] Error 1
:build\windows-x64-debug\client\src\renderer\tr_local.h,(10 )34:, build\windows-x64-debug\client\src\renderer\tr_local.h10()34:,fatal error: fatal error: '../game/q_shared.h' file not found
10fatal error: '../game/q_shared.h' file not found)
: '../game/q_shared.h' file not foundfatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x64-debug\client\src\renderer\tr_cmds.obj] Error 1
scons: *** [build\windows-x64-debug\client\src\renderer\tr_backend.obj] Error 1
scons: *** [build\windows-x64-debug\client\src\renderer\tr_animation.obj] Error 1
scons: *** [build\windows-x64-debug\client\src\renderer\tr_bsp.obj] Error 1
In file included from fatal error: ,'../game/q_shared.h' file not found
build\windows-x64-release\client\src\renderer\tr_local.h10)(34:build\windows-x64-release\client\src\renderer\tr_bsp.c: fatal error: 31:
(34,10): fatal error: '../game/q_shared.h' file not found
,10):    34fatal error:       '../game/q_shared.h' file not found3434 |  | ##
scons: *** [build\windows-x64-release\client\src\renderer\tr_cmds.obj] Error 1
scons: *** [build\windows-x64-release\client\src\renderer\tr_backend.obj] Error 1
scons: *** [build\windows-x64-release\client\src\renderer\tr_animation.obj] Error 1
scons: *** [build\windows-x64-release\client\src\renderer\tr_bsp.obj] Error 1
(build\windows-x86-debug\client\src\renderer\tr_local.h,build\windows-x86-debug\client\src\renderer\tr_local.h10(34()34:34 ,,,1010))10:fatal error:  '../game/q_shared.h' file not foundfatal error:
'../game/q_shared.h' file not found: ):fatal error:  '../game/q_shared.h' file not found
fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-debug\client\src\renderer\tr_cmds.obj] Error 1
scons: *** [build\windows-x86-debug\client\src\renderer\tr_backend.obj] Error 1
scons: *** [build\windows-x86-debug\client\src\renderer\tr_animation.obj] Error 1
scons: *** [build\windows-x86-debug\client\src\renderer\tr_bsp.obj] Error 1
build\windows-x86-release\client\src\renderer\tr_bsp.cbuild\windows-x86-release\client\src\renderer\tr_local.h:(31fatal error: 34'../game/q_shared.h' file not found:
build\windows-x86-release\client\src\renderer\tr_local.h,(1034),:10 ):fatal error:  '../game/q_shared.h' file not found
fatal error: '../game/q_shared.h' file not found
(34,10): fatal error: '../game/q_shared.h' file not found
scons: *** [build\windows-x86-release\client\src\renderer\tr_cmds.obj] Error 1
scons: *** [build\windows-x86-release\client\src\renderer\tr_backend.obj] Error 1
scons: *** [build\windows-x86-release\client\src\renderer\tr_animation.obj] Error 1
scons: *** [build\windows-x86-release\client\src\renderer\tr_bsp.obj] Error 1
UNCRUSTIFY_FAILED: src/sys/unix/qasm.h
UNCRUSTIFY_FAILED: src/games/game/bg_pmove.c

### warnings

