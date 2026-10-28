# Build digest

commit: 5f984ed0316e

- ubuntu-latest-x64-debug: failure
- ubuntu-latest-x64-release: cancelled
- ubuntu-latest-x86-debug: cancelled
- ubuntu-latest-x86-release: failure
- uncrustify: success
- windows-latest-x64-debug: success
- windows-latest-x64-release: success
- windows-latest-x86-debug: success
- windows-latest-x86-release: success

## ubuntu-latest-x64-debug

status: failure

errors: 1
warnings: 0 in 0 kinds

### errors

/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/../client/client.h:34:10: fatal error: ../ui/ui_public.h: No such file or directory

### failure context


### warning kinds

## ubuntu-latest-x64-release

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x86-debug

status: cancelled

errors: 1
warnings: 0 in 0 kinds

### errors

/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/../client/client.h:34:10: fatal error: ../ui/ui_public.h: No such file or directory

### failure context


### warning kinds

## ubuntu-latest-x86-release

status: failure

errors: 1
warnings: 0 in 0 kinds

### errors

/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/../client/client.h:34:10: fatal error: ../ui/ui_public.h: No such file or directory

### failure context


### warning kinds

## uncrustify

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-debug

status: success

errors: 0
warnings: 6 in 2 kinds

### errors


### failure context


### warning kinds

- [3x] C4311
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_input.cpp(859,7): warning C4311: 'type cast': pointer truncation from 'void (__cdecl *)(HMIDIIN,UINT,DWORD,DWORD,DWORD)' to 'unsigned long' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_syscon.cpp(141,11): warning C4311: 'type cast': pointer truncation from 'HBRUSH' to 'long' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_syscon.cpp(151,11): warning C4311: 'type cast': pointer truncation from 'HBRUSH' to 'long' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
- [3x] C4302
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_input.cpp(859,7): warning C4302: 'type cast': truncation from 'void (__cdecl *)(HMIDIIN,UINT,DWORD,DWORD,DWORD)' to 'unsigned long' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_syscon.cpp(141,11): warning C4302: 'type cast': truncation from 'HBRUSH' to 'long' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_syscon.cpp(151,11): warning C4302: 'type cast': truncation from 'HBRUSH' to 'long' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]

## windows-latest-x64-release

status: success

errors: 0
warnings: 6 in 2 kinds

### errors


### failure context


### warning kinds

- [3x] C4311
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_input.cpp(859,7): warning C4311: 'type cast': pointer truncation from 'void (__cdecl *)(HMIDIIN,UINT,DWORD,DWORD,DWORD)' to 'unsigned long' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_syscon.cpp(141,11): warning C4311: 'type cast': pointer truncation from 'HBRUSH' to 'long' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_syscon.cpp(151,11): warning C4311: 'type cast': pointer truncation from 'HBRUSH' to 'long' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
- [3x] C4302
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_input.cpp(859,7): warning C4302: 'type cast': truncation from 'void (__cdecl *)(HMIDIIN,UINT,DWORD,DWORD,DWORD)' to 'unsigned long' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_syscon.cpp(141,11): warning C4302: 'type cast': truncation from 'HBRUSH' to 'long' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_syscon.cpp(151,11): warning C4302: 'type cast': truncation from 'HBRUSH' to 'long' [D:\a\RTCW-SP\RTCW-SP\build\wolf.vcxproj]

## windows-latest-x86-debug

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x86-release

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

