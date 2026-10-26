# Build digest

commit: 00d424d744ec

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

errors: 21
warnings: 27 in 2 kinds

### errors

src/client/cl_keys.c:1731:25: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1731:31: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src/client/cl_keys.c:1746:13: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1746:19: error: use of undeclared identifier 'CG_EVENT_HANDLING'
src/client/cl_keys.c:1752:14: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1752:20: error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src/client/cl_keys.c:1756:14: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1756:20: error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src/client/cl_keys.c:1765:12: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1765:18: error: use of undeclared identifier 'UI_KEY_EVENT'
src/client/cl_keys.c:1784:41: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1785:13: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1785:19: error: use of undeclared identifier 'UI_KEY_EVENT'
src/client/cl_keys.c:1786:51: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1787:13: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1787:19: error: use of undeclared identifier 'CG_KEY_EVENT'
src/client/cl_keys.c:1813:20: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1813:26: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src/client/cl_keys.c:1825:8: error: use of undeclared identifier 'uivm'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build/linux-x64-debug/client/obj/client/cl_keys.c.o] Error 1

### failure context

- build/linux-x64-debug/client/obj/client/cl_keys.c.o

```
src/client/cl_keys.c:1786:51: error: use of undeclared identifier 'cgvm'
 1786 |                 } else if ( cls.keyCatchers & KEYCATCH_CGAME && cgvm ) {
      |                                                                 ^~~~
src/client/cl_keys.c:1787:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                         ^
src/client/cl_keys.c:1787:13: error: use of undeclared identifier 'cgvm'
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                                  ^~~~
src/client/cl_keys.c:1787:19: error: use of undeclared identifier 'CG_KEY_EVENT'
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                                        ^~~~~~~~~~~~
src/client/cl_keys.c:1813:11: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                              ^
src/client/cl_keys.c:1813:20: error: use of undeclared identifier 'uivm'
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                                       ^~~~
src/client/cl_keys.c:1813:26: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                                             ^~~~~~~~~~~~~~~~~~
src/client/cl_keys.c:1825:8: error: use of undeclared identifier 'uivm'
 1825 |                 if ( uivm ) {
      |                      ^~~~
src/client/cl_keys.c:1826:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1826 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                         ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
27 warnings and 20 errors generated.
clang -o build/linux-x64-debug/client/obj/client/cl_ui.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/ren
scons: *** [build/linux-x64-debug/client/obj/client/cl_keys.c.o] Error 1
```


### warning kinds

- [18x] -invalid-source-encoding
  - src/client/cl_keys.c:197:5: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:450:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:452:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:469:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:470:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:474:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:475:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:476:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:477:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:478:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:535:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:541:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:570:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:595:9: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:607:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:666:16: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:667:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:680:4: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [9x] -implicit-function-declaration
  - src/client/cl_keys.c:1731:16: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1746:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1752:5: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1756:5: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1765:3: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1785:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1787:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1813:11: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1826:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]

## ubuntu-latest-x64-release

status: failure

errors: 21
warnings: 27 in 2 kinds

### errors

src/client/cl_keys.c:1731:25: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1731:31: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src/client/cl_keys.c:1746:13: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1746:19: error: use of undeclared identifier 'CG_EVENT_HANDLING'
src/client/cl_keys.c:1752:14: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1752:20: error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src/client/cl_keys.c:1756:14: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1756:20: error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src/client/cl_keys.c:1765:12: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1765:18: error: use of undeclared identifier 'UI_KEY_EVENT'
src/client/cl_keys.c:1784:41: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1785:13: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1785:19: error: use of undeclared identifier 'UI_KEY_EVENT'
src/client/cl_keys.c:1786:51: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1787:13: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1787:19: error: use of undeclared identifier 'CG_KEY_EVENT'
src/client/cl_keys.c:1813:20: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1813:26: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src/client/cl_keys.c:1825:8: error: use of undeclared identifier 'uivm'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Error 1

### failure context

- build/linux-x64-release/client/obj/client/cl_keys.c.o

```
      |                                        ^~~~~~~~~~~~
src/client/cl_keys.c:1786:51: error: use of undeclared identifier 'cgvm'
 1786 |                 } else if ( cls.keyCatchers & KEYCATCH_CGAME && cgvm ) {
      |                                                                 ^~~~
src/client/cl_keys.c:1787:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                         ^
src/client/cl_keys.c:1787:13: error: use of undeclared identifier 'cgvm'
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                                  ^~~~
src/client/cl_keys.c:1787:19: error: use of undeclared identifier 'CG_KEY_EVENT'
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                                        ^~~~~~~~~~~~
src/client/cl_keys.c:1813:11: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                              ^
src/client/cl_keys.c:1813:20: error: use of undeclared identifier 'uivm'
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                                       ^~~~
src/client/cl_keys.c:1813:26: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                                             ^~~~~~~~~~~~~~~~~~
src/client/cl_keys.c:1825:8: error: use of undeclared identifier 'uivm'
 1825 |                 if ( uivm ) {
      |                      ^~~~
src/client/cl_keys.c:1826:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1826 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                         ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
27 warnings and 20 errors generated.
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Error 1
```


### warning kinds

- [18x] -invalid-source-encoding
  - src/client/cl_keys.c:197:5: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:450:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:452:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:469:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:470:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:474:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:475:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:476:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:477:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:478:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:535:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:541:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:570:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:595:9: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:607:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:666:16: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:667:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:680:4: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [9x] -implicit-function-declaration
  - src/client/cl_keys.c:1731:16: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1746:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1752:5: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1756:5: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1765:3: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1785:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1787:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1813:11: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1826:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]

## ubuntu-latest-x86-debug

status: failure

errors: 21
warnings: 27 in 2 kinds

### errors

src/client/cl_keys.c:1731:25: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1731:31: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src/client/cl_keys.c:1746:13: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1746:19: error: use of undeclared identifier 'CG_EVENT_HANDLING'
src/client/cl_keys.c:1752:14: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1752:20: error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src/client/cl_keys.c:1756:14: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1756:20: error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src/client/cl_keys.c:1765:12: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1765:18: error: use of undeclared identifier 'UI_KEY_EVENT'
src/client/cl_keys.c:1784:41: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1785:13: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1785:19: error: use of undeclared identifier 'UI_KEY_EVENT'
src/client/cl_keys.c:1786:51: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1787:13: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1787:19: error: use of undeclared identifier 'CG_KEY_EVENT'
src/client/cl_keys.c:1813:20: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1813:26: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src/client/cl_keys.c:1825:8: error: use of undeclared identifier 'uivm'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build/linux-x86-debug/client/obj/client/cl_keys.c.o] Error 1

### failure context

- build/linux-x86-debug/client/obj/client/cl_keys.c.o

```
src/client/cl_keys.c:1786:51: error: use of undeclared identifier 'cgvm'
 1786 |                 } else if ( cls.keyCatchers & KEYCATCH_CGAME && cgvm ) {
      |                                                                 ^~~~
src/client/cl_keys.c:1787:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                         ^
src/client/cl_keys.c:1787:13: error: use of undeclared identifier 'cgvm'
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                                  ^~~~
src/client/cl_keys.c:1787:19: error: use of undeclared identifier 'CG_KEY_EVENT'
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                                        ^~~~~~~~~~~~
src/client/cl_keys.c:1813:11: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                              ^
src/client/cl_keys.c:1813:20: error: use of undeclared identifier 'uivm'
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                                       ^~~~
clang -o build/linux-x86-debug/client/obj/client/cl_scrn.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/r
src/client/cl_keys.c:1813:26: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                                             ^~~~~~~~~~~~~~~~~~
src/client/cl_keys.c:1825:8: error: use of undeclared identifier 'uivm'
 1825 |                 if ( uivm ) {
      |                      ^~~~
src/client/cl_keys.c:1826:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1826 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                         ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
27 warnings and 20 errors generated.
scons: *** [build/linux-x86-debug/client/obj/client/cl_keys.c.o] Error 1
```


### warning kinds

- [18x] -invalid-source-encoding
  - src/client/cl_keys.c:197:5: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:450:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:452:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:469:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:470:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:474:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:475:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:476:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:477:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:478:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:535:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:541:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:570:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:595:9: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:607:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:666:16: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:667:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:680:4: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [9x] -implicit-function-declaration
  - src/client/cl_keys.c:1731:16: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1746:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1752:5: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1756:5: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1765:3: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1785:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1787:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1813:11: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1826:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]

## ubuntu-latest-x86-release

status: failure

errors: 21
warnings: 27 in 2 kinds

### errors

src/client/cl_keys.c:1731:25: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1731:31: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src/client/cl_keys.c:1746:13: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1746:19: error: use of undeclared identifier 'CG_EVENT_HANDLING'
src/client/cl_keys.c:1752:14: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1752:20: error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src/client/cl_keys.c:1756:14: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1756:20: error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src/client/cl_keys.c:1765:12: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1765:18: error: use of undeclared identifier 'UI_KEY_EVENT'
src/client/cl_keys.c:1784:41: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1785:13: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1785:19: error: use of undeclared identifier 'UI_KEY_EVENT'
src/client/cl_keys.c:1786:51: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1787:13: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1787:19: error: use of undeclared identifier 'CG_KEY_EVENT'
src/client/cl_keys.c:1813:20: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1813:26: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src/client/cl_keys.c:1825:8: error: use of undeclared identifier 'uivm'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build/linux-x86-release/client/obj/client/cl_keys.c.o] Error 1

### failure context

- build/linux-x86-release/client/obj/client/cl_keys.c.o

```
      |                                        ^~~~~~~~~~~~
src/client/cl_keys.c:1786:51: error: use of undeclared identifier 'cgvm'
 1786 |                 } else if ( cls.keyCatchers & KEYCATCH_CGAME && cgvm ) {
      |                                                                 ^~~~
src/client/cl_keys.c:1787:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                         ^
src/client/cl_keys.c:1787:13: error: use of undeclared identifier 'cgvm'
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                                  ^~~~
src/client/cl_keys.c:1787:19: error: use of undeclared identifier 'CG_KEY_EVENT'
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                                        ^~~~~~~~~~~~
src/client/cl_keys.c:1813:11: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                              ^
src/client/cl_keys.c:1813:20: error: use of undeclared identifier 'uivm'
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                                       ^~~~
src/client/cl_keys.c:1813:26: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                                             ^~~~~~~~~~~~~~~~~~
src/client/cl_keys.c:1825:8: error: use of undeclared identifier 'uivm'
 1825 |                 if ( uivm ) {
      |                      ^~~~
src/client/cl_keys.c:1826:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1826 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                         ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
27 warnings and 20 errors generated.
scons: *** [build/linux-x86-release/client/obj/client/cl_keys.c.o] Error 1
```


### warning kinds

- [18x] -invalid-source-encoding
  - src/client/cl_keys.c:197:5: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:450:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:452:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:469:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:470:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:474:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:475:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:476:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:477:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:478:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:535:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:541:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:570:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:595:9: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:607:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:666:16: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:667:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:680:4: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [9x] -implicit-function-declaration
  - src/client/cl_keys.c:1731:16: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1746:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1752:5: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1756:5: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1765:3: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1785:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1787:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1813:11: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1826:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]

## uncrustify

status: success

errors: 1
warnings: 0 in 0 kinds

### errors

src/client/cl_keys.c(1,1): error: the engine patch step failed, see the raw uncrustify leg log

### failure context


### warning kinds

## windows-latest-x64-debug

status: failure

errors: 21
warnings: 18 in 1 kinds

### errors

src\client\cl_keys.c(1731,16): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1731,25): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1731,31): error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src\client\cl_keys.c(1746,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1746,13): error: use of undeclared identifier 'cgvm'
src\client\cl_keys.c(1746,19): error: use of undeclared identifier 'CG_EVENT_HANDLING'
src\client\cl_keys.c(1752,5): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1752,14): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1752,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src\client\cl_keys.c(1756,5): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1756,14): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1756,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src\client\cl_keys.c(1765,3): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1765,12): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1765,18): error: use of undeclared identifier 'UI_KEY_EVENT'
src\client\cl_keys.c(1784,41): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1785,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1785,13): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1785,19): error: use of undeclared identifier 'UI_KEY_EVENT'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x64-debug\client\obj\client\cl_keys.c.obj] Error 1

### failure context

- build\windows-x64-debug\client\obj\client\cl_keys.c.obj

```
      |                                 ^
src\client\cl_keys.c(1756,14): error: use of undeclared identifier 'uivm'
 1756 |                                 VM_Call( uivm, UI_SET_ACTIVE_MENU, UIMENU_MAIN );
      |                                          ^~~~
src\client\cl_keys.c(1756,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
 1756 |                                 VM_Call( uivm, UI_SET_ACTIVE_MENU, UIMENU_MAIN );
      |                                                ^~~~~~~~~~~~~~~~~~
src\client\cl_keys.c(1765,3): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                 ^
src\client\cl_keys.c(1765,12): error: use of undeclared identifier 'uivm'
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                          ^~~~
src\client\cl_keys.c(1765,18): error: use of undeclared identifier 'UI_KEY_EVENT'
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                ^~~~~~~~~~~~
src\client\cl_keys.c(1784,41): error: use of undeclared identifier 'uivm'
 1784 |                 if ( cls.keyCatchers & KEYCATCH_UI && uivm ) {
      |                                                       ^~~~
src\client\cl_keys.c(1785,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                         ^
src\client\cl_keys.c(1785,13): error: use of undeclared identifier 'uivm'
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                  ^~~~
src\client\cl_keys.c(1785,19): error: use of undeclared identifier 'UI_KEY_EVENT'
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                        ^~~~~~~~~~~~
fatal error: too many errors emitted, stopping now [-ferror-limit=]
18 warnings and 20 errors generated.
scons: *** [build\windows-x64-debug\client\obj\client\cl_keys.c.obj] Error 1
```


### warning kinds

- [18x] -invalid-source-encoding
  - src\client\cl_keys.c(197,5): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(450,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(452,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(469,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(470,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(474,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(475,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(476,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(477,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(478,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(535,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(541,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(570,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(595,9): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(607,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(666,16): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(667,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(680,4): warning: illegal character encoding in string literal [-Winvalid-source-encoding]

## windows-latest-x64-release

status: failure

errors: 21
warnings: 18 in 1 kinds

### errors

src\client\cl_keys.c(1731,16): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1731,25): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1731,31): error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src\client\cl_keys.c(1746,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1746,13): error: use of undeclared identifier 'cgvm'
src\client\cl_keys.c(1746,19): error: use of undeclared identifier 'CG_EVENT_HANDLING'
src\client\cl_keys.c(1752,5): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1752,14): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1752,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src\client\cl_keys.c(1756,5): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1756,14): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1756,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src\client\cl_keys.c(1765,3): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1765,12): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1765,18): error: use of undeclared identifier 'UI_KEY_EVENT'
src\client\cl_keys.c(1784,41): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1785,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1785,13): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1785,19): error: use of undeclared identifier 'UI_KEY_EVENT'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_keys.c.obj

```
      |                                 ^
src\client\cl_keys.c(1756,14): error: use of undeclared identifier 'uivm'
 1756 |                                 VM_Call( uivm, UI_SET_ACTIVE_MENU, UIMENU_MAIN );
      |                                          ^~~~
src\client\cl_keys.c(1756,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
 1756 |                                 VM_Call( uivm, UI_SET_ACTIVE_MENU, UIMENU_MAIN );
      |                                                ^~~~~~~~~~~~~~~~~~
src\client\cl_keys.c(1765,3): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                 ^
src\client\cl_keys.c(1765,12): error: use of undeclared identifier 'uivm'
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                          ^~~~
src\client\cl_keys.c(1765,18): error: use of undeclared identifier 'UI_KEY_EVENT'
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                ^~~~~~~~~~~~
src\client\cl_keys.c(1784,41): error: use of undeclared identifier 'uivm'
 1784 |                 if ( cls.keyCatchers & KEYCATCH_UI && uivm ) {
      |                                                       ^~~~
src\client\cl_keys.c(1785,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                         ^
src\client\cl_keys.c(1785,13): error: use of undeclared identifier 'uivm'
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                  ^~~~
src\client\cl_keys.c(1785,19): error: use of undeclared identifier 'UI_KEY_EVENT'
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                        ^~~~~~~~~~~~
fatal error: too many errors emitted, stopping now [-ferror-limit=]
18 warnings and 20 errors generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Error 1
```


### warning kinds

- [18x] -invalid-source-encoding
  - src\client\cl_keys.c(197,5): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(450,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(452,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(469,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(470,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(474,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(475,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(476,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(477,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(478,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(535,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(541,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(570,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(595,9): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(607,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(666,16): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(667,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(680,4): warning: illegal character encoding in string literal [-Winvalid-source-encoding]

## windows-latest-x86-debug

status: failure

errors: 21
warnings: 18 in 1 kinds

### errors

src\client\cl_keys.c(1731,16): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1731,25): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1731,31): error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src\client\cl_keys.c(1746,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1746,13): error: use of undeclared identifier 'cgvm'
src\client\cl_keys.c(1746,19): error: use of undeclared identifier 'CG_EVENT_HANDLING'
src\client\cl_keys.c(1752,5): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1752,14): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1752,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src\client\cl_keys.c(1756,5): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1756,14): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1756,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src\client\cl_keys.c(1765,3): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1765,12): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1765,18): error: use of undeclared identifier 'UI_KEY_EVENT'
src\client\cl_keys.c(1784,41): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1785,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1785,13): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1785,19): error: use of undeclared identifier 'UI_KEY_EVENT'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x86-debug\client\obj\client\cl_keys.c.obj] Error 1

### failure context

- build\windows-x86-debug\client\obj\client\cl_keys.c.obj

```
      |                                 ^
src\client\cl_keys.c(1756,14): error: use of undeclared identifier 'uivm'
 1756 |                                 VM_Call( uivm, UI_SET_ACTIVE_MENU, UIMENU_MAIN );
      |                                          ^~~~
src\client\cl_keys.c(1756,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
 1756 |                                 VM_Call( uivm, UI_SET_ACTIVE_MENU, UIMENU_MAIN );
      |                                                ^~~~~~~~~~~~~~~~~~
src\client\cl_keys.c(1765,3): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                 ^
src\client\cl_keys.c(1765,12): error: use of undeclared identifier 'uivm'
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                          ^~~~
src\client\cl_keys.c(1765,18): error: use of undeclared identifier 'UI_KEY_EVENT'
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                ^~~~~~~~~~~~
src\client\cl_keys.c(1784,41): error: use of undeclared identifier 'uivm'
 1784 |                 if ( cls.keyCatchers & KEYCATCH_UI && uivm ) {
      |                                                       ^~~~
src\client\cl_keys.c(1785,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                         ^
src\client\cl_keys.c(1785,13): error: use of undeclared identifier 'uivm'
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                  ^~~~
src\client\cl_keys.c(1785,19): error: use of undeclared identifier 'UI_KEY_EVENT'
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                        ^~~~~~~~~~~~
fatal error: too many errors emitted, stopping now [-ferror-limit=]
18 warnings and 20 errors generated.
scons: *** [build\windows-x86-debug\client\obj\client\cl_keys.c.obj] Error 1
```


### warning kinds

- [18x] -invalid-source-encoding
  - src\client\cl_keys.c(197,5): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(450,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(452,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(469,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(470,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(474,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(475,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(476,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(477,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(478,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(535,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(541,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(570,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(595,9): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(607,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(666,16): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(667,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(680,4): warning: illegal character encoding in string literal [-Winvalid-source-encoding]

## windows-latest-x86-release

status: failure

errors: 21
warnings: 18 in 1 kinds

### errors

src\client\cl_keys.c(1731,16): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1731,25): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1731,31): error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src\client\cl_keys.c(1746,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1746,13): error: use of undeclared identifier 'cgvm'
src\client\cl_keys.c(1746,19): error: use of undeclared identifier 'CG_EVENT_HANDLING'
src\client\cl_keys.c(1752,5): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1752,14): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1752,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src\client\cl_keys.c(1756,5): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1756,14): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1756,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src\client\cl_keys.c(1765,3): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1765,12): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1765,18): error: use of undeclared identifier 'UI_KEY_EVENT'
src\client\cl_keys.c(1784,41): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1785,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1785,13): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1785,19): error: use of undeclared identifier 'UI_KEY_EVENT'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x86-release\client\obj\client\cl_keys.c.obj] Error 1

### failure context

- build\windows-x86-release\client\obj\client\cl_keys.c.obj

```
      |                                 ^
src\client\cl_keys.c(1756,14): error: use of undeclared identifier 'uivm'
 1756 |                                 VM_Call( uivm, UI_SET_ACTIVE_MENU, UIMENU_MAIN );
      |                                          ^~~~
src\client\cl_keys.c(1756,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
 1756 |                                 VM_Call( uivm, UI_SET_ACTIVE_MENU, UIMENU_MAIN );
      |                                                ^~~~~~~~~~~~~~~~~~
src\client\cl_keys.c(1765,3): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                 ^
src\client\cl_keys.c(1765,12): error: use of undeclared identifier 'uivm'
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                          ^~~~
src\client\cl_keys.c(1765,18): error: use of undeclared identifier 'UI_KEY_EVENT'
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                ^~~~~~~~~~~~
src\client\cl_keys.c(1784,41): error: use of undeclared identifier 'uivm'
 1784 |                 if ( cls.keyCatchers & KEYCATCH_UI && uivm ) {
      |                                                       ^~~~
src\client\cl_keys.c(1785,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                         ^
src\client\cl_keys.c(1785,13): error: use of undeclared identifier 'uivm'
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                  ^~~~
src\client\cl_keys.c(1785,19): error: use of undeclared identifier 'UI_KEY_EVENT'
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                        ^~~~~~~~~~~~
fatal error: too many errors emitted, stopping now [-ferror-limit=]
18 warnings and 20 errors generated.
scons: *** [build\windows-x86-release\client\obj\client\cl_keys.c.obj] Error 1
```


### warning kinds

- [18x] -invalid-source-encoding
  - src\client\cl_keys.c(197,5): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(450,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(452,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(469,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(470,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(474,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(475,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(476,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(477,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(478,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(535,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(541,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(570,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(595,9): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(607,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(666,16): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(667,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(680,4): warning: illegal character encoding in string literal [-Winvalid-source-encoding]

