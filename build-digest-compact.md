# Compact build digest

commit: 705164c409c3

- ubuntu-latest-x64-debug: cancelled
- ubuntu-latest-x64-release: cancelled
- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: cancelled
- uncrustify: success
- windows-latest-x64-debug: failure
- windows-latest-x64-release: failure
- windows-latest-x86-debug: failure
- windows-latest-x86-release: cancelled

## ubuntu-latest-x64-debug

status: cancelled

errors: 6
warnings: 31 in 1 kinds

### errors

/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/../client/client.h:34:10: fatal error: ../ui/ui_public.h: No such file or directory
/usr/include/c++/15/cstdlib:167:11: error: ‘qsort’ has not been declared in ‘::’
/usr/include/c++/15/stdlib.h:74:12: error: ‘qsort’ has not been declared in ‘std’
/home/runner/work/RTCW-SP/RTCW-SP/src/client/client.h:34:10: fatal error: ../ui/ui_public.h: No such file or directory
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/common.cpp:1960:47: error: ‘CPUSTRING’ was not declared in this scope; did you mean ‘TT_STRING’?
/home/runner/work/RTCW-SP/RTCW-SP/src/server/server.h:33:10: fatal error: ../game/g_public.h: No such file or directory

### failure context


### warning kinds

- [31x] ‘CHAR_WIDTH’ redefined
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/cgame/cg_local.h:79:9: warning: ‘CHAR_WIDTH’ redefined

## uncrustify

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-debug

status: failure

errors: 0
warnings: 4 in 2 kinds

### errors


### failure context


### warning kinds

- [3x] C4101
  - D:\a\RTCW-SP\RTCW-SP\src\games\cgame\fx\FxScheduler.cpp(1010,9): warning C4101: 'origin': unreferenced local variable [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\cgame\fx\FxScheduler.cpp(1011,9): warning C4101: 'axis': unreferenced local variable [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_effects.cpp(166,57): warning C4101: 'ndir': unreferenced local variable [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
- [1x] C4723
  - D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_players.cpp(3546,1): warning C4723: potential divide by 0 [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]

