# Build digest

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

## ubuntu-latest-x64-release

status: cancelled

errors: 3
warnings: 36 in 2 kinds

### errors

/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/../client/client.h:34:10: fatal error: ../ui/ui_public.h: No such file or directory
/usr/include/c++/15/cstdlib:167:11: error: ‘qsort’ has not been declared in ‘::’
/usr/include/c++/15/stdlib.h:74:12: error: ‘qsort’ has not been declared in ‘std’

### failure context


### warning kinds

- [31x] ‘CHAR_WIDTH’ redefined
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/cgame/cg_local.h:79:9: warning: ‘CHAR_WIDTH’ redefined
- [5x] -unused-result
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:187:14: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:197:22: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:246:14: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:256:22: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_qgl.cpp:2714:31: warning: ignoring return value of ‘char* getcwd(char*, size_t)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]

## ubuntu-latest-x86-debug

status: failure

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

## ubuntu-latest-x86-release

status: cancelled

errors: 3
warnings: 36 in 2 kinds

### errors

/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/../client/client.h:34:10: fatal error: ../ui/ui_public.h: No such file or directory
/usr/include/c++/15/cstdlib:167:11: error: ‘qsort’ has not been declared in ‘::’
/usr/include/c++/15/stdlib.h:74:12: error: ‘qsort’ has not been declared in ‘std’

### failure context


### warning kinds

- [31x] ‘CHAR_WIDTH’ redefined
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/cgame/cg_local.h:79:9: warning: ‘CHAR_WIDTH’ redefined
- [5x] -unused-result
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:187:14: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:197:22: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:246:14: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:256:22: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_qgl.cpp:2714:31: warning: ignoring return value of ‘char* getcwd(char*, size_t)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]

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

## windows-latest-x64-release

status: failure

errors: 142
warnings: 4 in 2 kinds

### errors

D:\a\RTCW-SP\RTCW-SP\src\client\client.h(34,10): error C1083: Cannot open include file: '../ui/ui_public.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\qcommon\common.cpp(1960,40): error C2065: 'CPUSTRING': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\qcommon\common.cpp(2073,34): error C2065: 'CPUSTRING': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\server\server.h(33,10): error C1083: Cannot open include file: '../game/g_public.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(69,2): error C4235: nonstandard extension used: '__asm' keyword not supported on this architecture [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(70,2): error C4235: nonstandard extension used: '__asm' keyword not supported on this architecture [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(69,8): error C2065: 'fld': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(69,12): error C2146: syntax error: missing ';' before identifier 'f' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(70,8): error C2146: syntax error: missing ';' before identifier 'fistp' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(71,2): error C4235: nonstandard extension used: '__asm' keyword not supported on this architecture [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(70,8): error C2065: 'fistp': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(70,14): error C2146: syntax error: missing ';' before identifier 'tmp' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(71,8): error C2146: syntax error: missing ';' before identifier 'mov' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(71,8): error C2065: 'mov': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(71,12): error C2146: syntax error: missing ';' before identifier 'eax' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(71,12): error C2065: 'eax': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(72,1): error C2143: syntax error: missing ';' before '}' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(79,2): error C4235: nonstandard extension used: '__asm' keyword not supported on this architecture [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(79,8): error C2065: 'fld': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(79,12): error C2146: syntax error: missing ';' before identifier 'f' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(80,2): error C4235: nonstandard extension used: '__asm' keyword not supported on this architecture [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(80,8): error C2065: 'fistp': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(80,14): error C2146: syntax error: missing ';' before identifier 'i' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(84,2): error C4235: nonstandard extension used: '__asm' keyword not supported on this architecture [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(84,8): error C2065: 'fld': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(84,12): error C2146: syntax error: missing ';' before identifier 'f' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(85,2): error C4235: nonstandard extension used: '__asm' keyword not supported on this architecture [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(85,8): error C2065: 'fistp': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(85,14): error C2146: syntax error: missing ';' before identifier 'i' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(89,2): error C4235: nonstandard extension used: '__asm' keyword not supported on this architecture [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(89,8): error C2065: 'fld': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(89,12): error C2146: syntax error: missing ';' before identifier 'f' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(90,2): error C4235: nonstandard extension used: '__asm' keyword not supported on this architecture [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(90,8): error C2065: 'fistp': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(90,14): error C2146: syntax error: missing ';' before identifier 'i' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(118,2): error C4235: nonstandard extension used: '__asm' keyword not supported on this architecture [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(118,8): error C2065: 'mov': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(118,12): error C2146: syntax error: missing ';' before identifier 'eax' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(118,12): error C2065: 'eax': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(119,2): error C4235: nonstandard extension used: '__asm' keyword not supported on this architecture [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(119,8): error C2146: syntax error: missing ';' before identifier '__emit' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(119,8): error C2065: '__emit': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(119,15): error C2143: syntax error: missing ';' before 'user-defined literal' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(119,15): error C3688: invalid literal suffix 'fh'; literal operator or literal operator template 'operator ""fh' not found [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(120,2): error C4235: nonstandard extension used: '__asm' keyword not supported on this architecture [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(120,8): error C2146: syntax error: missing ';' before identifier '__emit' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(120,8): error C2065: '__emit': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(120,15): error C2143: syntax error: missing ';' before 'user-defined literal' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(120,15): error C3688: invalid literal suffix 'a2h'; literal operator or literal operator template 'operator ""a2h' not found [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(121,2): error C4235: nonstandard extension used: '__asm' keyword not supported on this architecture [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(121,8): error C2146: syntax error: missing ';' before identifier 'mov' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(121,8): error C2065: 'mov': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(121,12): error C2146: syntax error: missing ';' before identifier 'regEAX' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(122,2): error C4235: nonstandard extension used: '__asm' keyword not supported on this architecture [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(121,20): error C2065: 'eax': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(122,8): error C2146: syntax error: missing ';' before identifier 'mov' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(122,8): error C2065: 'mov': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(122,12): error C2146: syntax error: missing ';' before identifier 'regEBX' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(123,2): error C4235: nonstandard extension used: '__asm' keyword not supported on this architecture [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(122,20): error C2065: 'ebx': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(123,8): error C2146: syntax error: missing ';' before identifier 'mov' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(123,8): error C2065: 'mov': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(123,12): error C2146: syntax error: missing ';' before identifier 'regECX' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(124,2): error C4235: nonstandard extension used: '__asm' keyword not supported on this architecture [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(123,20): error C2065: 'ecx': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(124,8): error C2146: syntax error: missing ';' before identifier 'mov' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(124,8): error C2065: 'mov': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(124,12): error C2146: syntax error: missing ';' before identifier 'regEDX' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(124,20): error C2065: 'edx': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(126,6): error C2146: syntax error: missing ';' before identifier 'regs' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(135,2): error C4235: nonstandard extension used: '__asm' keyword not supported on this architecture [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(137,3): error C2065: 'pushfd': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(138,3): error C2146: syntax error: missing ';' before identifier 'pop' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(138,3): error C2065: 'pop': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(138,7): error C2146: syntax error: missing ';' before identifier 'eax' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(138,7): error C2065: 'eax': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(139,3): error C2146: syntax error: missing ';' before identifier 'test' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(139,3): error C2065: 'test': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(139,8): error C2146: syntax error: missing ';' before identifier 'eax' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(139,8): error C2065: 'eax': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(140,3): error C2146: syntax error: missing ';' before identifier 'jz' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(140,3): error C2065: 'jz': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(140,6): error C2146: syntax error: missing ';' before identifier 'set21' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(140,6): error C2065: 'set21': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(141,3): error C2146: syntax error: missing ';' before identifier 'and' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(141,3): error C2065: 'and': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(141,11): error C2146: syntax error: missing ';' before identifier 'eax' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(141,11): error C2065: 'eax': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(142,3): error C2146: syntax error: missing ';' before identifier 'push' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(142,3): error C2065: 'push': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(142,8): error C2146: syntax error: missing ';' before identifier 'eax' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(142,8): error C2065: 'eax': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(143,3): error C2146: syntax error: missing ';' before identifier 'popfd' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(143,3): error C2065: 'popfd': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(144,3): error C2146: syntax error: missing ';' before identifier 'pushfd' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(144,3): error C2065: 'pushfd': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(145,3): error C2146: syntax error: missing ';' before identifier 'pop' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(145,3): error C2065: 'pop': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(145,7): error C2146: syntax error: missing ';' before identifier 'eax' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(145,7): error C2065: 'eax': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(146,3): error C2146: syntax error: missing ';' before identifier 'test' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(146,3): error C2065: 'test': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(146,8): error C2146: syntax error: missing ';' before identifier 'eax' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(146,8): error C2065: 'eax': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(147,3): error C2146: syntax error: missing ';' before identifier 'jz' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(147,3): error C2065: 'jz': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(147,6): error C2146: syntax error: missing ';' before identifier 'good' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(147,6): error C2065: 'good': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(148,3): error C2146: syntax error: missing ';' before identifier 'jmp' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(148,3): error C2065: 'jmp': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(148,7): error C2146: syntax error: missing ';' before identifier 'done' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(148,7): error C2065: 'done': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(149,1): error C2146: syntax error: missing ';' before identifier 'set21' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(150,3): error C2065: 'or': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(150,11): error C2146: syntax error: missing ';' before identifier 'eax' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(150,11): error C2065: 'eax': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(151,3): error C2146: syntax error: missing ';' before identifier 'push' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(151,3): error C2065: 'push': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(151,8): error C2146: syntax error: missing ';' before identifier 'eax' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(151,8): error C2065: 'eax': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(152,3): error C2146: syntax error: missing ';' before identifier 'popfd' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(152,3): error C2065: 'popfd': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_shared.cpp(152,3): error C1003: error count exceeds 100; stopping compilation [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(76,9): error C2039: 'SetCooperativeLevel': is not a member of 'IDirectSound' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(81,12): error C2039: 'Stop': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(82,12): error C2039: 'Release': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(88,13): error C2039: 'Release': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(96,8): error C2039: 'Release': is not a member of 'IDirectSound' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(175,17): error C2039: 'Initialize': is not a member of 'IDirectSound' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(181,21): error C2039: 'SetCooperativeLevel': is not a member of 'IDirectSound' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(225,21): error C2039: 'CreateSoundBuffer': is not a member of 'IDirectSound' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(233,22): error C2039: 'CreateSoundBuffer': is not a member of 'IDirectSound' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(242,24): error C2039: 'Play': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(249,24): error C2039: 'GetCaps': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(292,10): error C2039: 'GetCurrentPosition': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(322,15): error C2039: 'GetStatus': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(327,11): error C2039: 'Restore': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(331,11): error C2039: 'Play': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(339,30): error C2039: 'Lock': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(348,12): error C2039: 'Restore': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(369,11): error C2039: 'Unlock': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(386,21): error C2039: 'SetCooperativeLevel': is not a member of 'IDirectSound' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]

### failure context


### warning kinds

- [3x] C4101
  - D:\a\RTCW-SP\RTCW-SP\src\games\cgame\fx\FxScheduler.cpp(1010,9): warning C4101: 'origin': unreferenced local variable [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\cgame\fx\FxScheduler.cpp(1011,9): warning C4101: 'axis': unreferenced local variable [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_effects.cpp(166,57): warning C4101: 'ndir': unreferenced local variable [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
- [1x] C4723
  - D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_players.cpp(3546,1): warning C4723: potential divide by 0 [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]

## windows-latest-x86-debug

status: failure

errors: 23
warnings: 4 in 2 kinds

### errors

D:\a\RTCW-SP\RTCW-SP\src\client\client.h(34,10): error C1083: Cannot open include file: '../ui/ui_public.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\qcommon\common.cpp(1960,40): error C2065: 'CPUSTRING': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\qcommon\common.cpp(2073,34): error C2065: 'CPUSTRING': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\server\server.h(33,10): error C1083: Cannot open include file: '../game/g_public.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(76,9): error C2039: 'SetCooperativeLevel': is not a member of 'IDirectSound' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(81,12): error C2039: 'Stop': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(82,12): error C2039: 'Release': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(88,13): error C2039: 'Release': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(96,8): error C2039: 'Release': is not a member of 'IDirectSound' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(175,17): error C2039: 'Initialize': is not a member of 'IDirectSound' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(181,21): error C2039: 'SetCooperativeLevel': is not a member of 'IDirectSound' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(225,21): error C2039: 'CreateSoundBuffer': is not a member of 'IDirectSound' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(233,22): error C2039: 'CreateSoundBuffer': is not a member of 'IDirectSound' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(242,24): error C2039: 'Play': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(249,24): error C2039: 'GetCaps': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(292,10): error C2039: 'GetCurrentPosition': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(322,15): error C2039: 'GetStatus': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(327,11): error C2039: 'Restore': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(331,11): error C2039: 'Play': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(339,30): error C2039: 'Lock': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(348,12): error C2039: 'Restore': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(369,11): error C2039: 'Unlock': is not a member of 'IDirectSoundBuffer' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.cpp(386,21): error C2039: 'SetCooperativeLevel': is not a member of 'IDirectSound' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]

### failure context


### warning kinds

- [3x] C4101
  - D:\a\RTCW-SP\RTCW-SP\src\games\cgame\fx\FxScheduler.cpp(1010,9): warning C4101: 'origin': unreferenced local variable [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\cgame\fx\FxScheduler.cpp(1011,9): warning C4101: 'axis': unreferenced local variable [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_effects.cpp(166,57): warning C4101: 'ndir': unreferenced local variable [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
- [1x] C4723
  - D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_players.cpp(3546,1): warning C4723: potential divide by 0 [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]

## windows-latest-x86-release

status: cancelled

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

