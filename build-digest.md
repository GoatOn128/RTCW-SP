# Build digest

commit: 7ab6c1a8a5d5

- ubuntu-latest-x64-debug: failure
- ubuntu-latest-x64-release: failure
- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: cancelled
- uncrustify: success
- windows-latest-x64-debug: failure
- windows-latest-x64-release: failure
- windows-latest-x86-debug: failure
- windows-latest-x86-release: failure

## ubuntu-latest-x64-debug

status: failure

errors: 21
warnings: 246 in 8 kinds

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

- [213x] -pointer-to-int-cast
  - src/client/cl_cin.c:1105:39: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1105:68: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1106:41: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1106:110: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/qcommon/cm_polylib.c:280:9: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/common.c:1098:29: warning: cast to smaller integer type 'int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:948:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:949:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:950:4: warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:951:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:952:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:953:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:954:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:955:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:956:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:957:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:958:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:959:4: warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:960:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:961:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:962:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:963:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:964:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:965:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:966:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:967:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:968:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:969:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:970:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:971:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
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
- [2x] -absolute-value
  - src/games/botlib/l_precomp.c:2436:31: warning: absolute value function 'abs' given an argument of type 'long' but has parameter of type 'int' which may cause truncation of value [-Wabsolute-value]
  - src/games/botlib/l_precomp.c:2542:31: warning: absolute value function 'abs' given an argument of type 'long' but has parameter of type 'int' which may cause truncation of value [-Wabsolute-value]
- [1x] -int-to-pointer-cast
  - src/qcommon/common.c:1098:15: warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
- [1x] need to modify cg_event.c at "// check the sequencial list" if you change this
  - 995 |         { NETF( eventSequence ), 8 }, // warning: need to modify cg_event.c at "// check the sequencial list" if you change this
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]

## ubuntu-latest-x64-release

status: failure

errors: 21
warnings: 246 in 8 kinds

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
src/client/cl_keys.c:1786:51: error: use of undeclared identifier 'cgvm'
 1786 |                 } else if ( cls.keyCatchers & KEYCATCH_CGAME && cgvm ) {
      |                                                                 ^~~~
src/client/cl_keys.c:1787:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                         ^
src/client/cl_keys.c:1787:13: error: use of undeclared identifier 'cgvm'
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                                  ^~~~
clang -o build/linux-x64-release/client/obj/client/cl_qgl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -Isrc -Isrc/games/game -Isrc/
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

- [213x] -pointer-to-int-cast
  - src/client/cl_cin.c:1105:39: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1105:68: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1106:41: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1106:110: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/qcommon/cm_polylib.c:280:9: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/common.c:1098:29: warning: cast to smaller integer type 'int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:948:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:949:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:950:4: warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:951:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:952:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:953:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:954:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:955:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:956:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:957:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:958:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:959:4: warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:960:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:961:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:962:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:963:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:964:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:965:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:966:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:967:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:968:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:969:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:970:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:971:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
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
- [2x] -absolute-value
  - src/games/botlib/l_precomp.c:2436:31: warning: absolute value function 'abs' given an argument of type 'long' but has parameter of type 'int' which may cause truncation of value [-Wabsolute-value]
  - src/games/botlib/l_precomp.c:2542:31: warning: absolute value function 'abs' given an argument of type 'long' but has parameter of type 'int' which may cause truncation of value [-Wabsolute-value]
- [1x] -int-to-pointer-cast
  - src/qcommon/common.c:1098:15: warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
- [1x] need to modify cg_event.c at "// check the sequencial list" if you change this
  - 995 |         { NETF( eventSequence ), 8 }, // warning: need to modify cg_event.c at "// check the sequencial list" if you change this
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]

## ubuntu-latest-x86-debug

status: failure

errors: 21
warnings: 29 in 4 kinds

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
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]

## ubuntu-latest-x86-release

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## uncrustify

status: success

errors: 2
warnings: 0 in 0 kinds

### errors

UNCRUSTIFY_FAILED: src/sys/unix/qasm.h
UNCRUSTIFY_FAILED: src/games/game/bg_pmove.c

### failure context


### warning kinds

## windows-latest-x64-debug

status: failure

errors: 21
warnings: 262 in 8 kinds

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
clang-cl /Fobuild\windows-x64-debug\client\obj\client\cl_qgl.c.obj /c src\client\cl_qgl.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_
scons: *** [build\windows-x64-debug\client\obj\client\cl_keys.c.obj] Error 1
```


### warning kinds

- [218x] -pointer-to-int-cast
  - src\client\cl_cin.c(1105,39): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1105,68): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1106,41): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1106,110): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\qcommon\cm_polylib.c(280,9): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\common.c(1098,29): warning: cast to smaller integer type 'int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(948,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(949,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(950,4): warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(951,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(952,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(953,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(954,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(955,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(956,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(957,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(958,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(959,4): warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(960,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(961,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(962,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(963,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(964,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(965,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(966,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(967,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(968,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(969,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(970,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(971,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
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
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
- [4x] -unused-function
  - src\sys\win32\win_shared.c(103,12): warning: unused function 'IsPentium' [-Wunused-function]
  - src\sys\win32\win_shared.c(107,12): warning: unused function 'Is3DNOW' [-Wunused-function]
  - src\sys\win32\win_shared.c(147,12): warning: unused function 'IsKNI' [-Wunused-function]
  - src\sys\win32\win_shared.c(161,12): warning: unused function 'IsMMX' [-Wunused-function]
- [1x] -int-to-pointer-cast
  - src\qcommon\common.c(1098,15): warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
- [1x] need to modify cg_event.c at "// check the sequencial list" if you change this
  - 995 |         { NETF( eventSequence ), 8 }, // warning: need to modify cg_event.c at "// check the sequencial list" if you change this
- [1x] -void-pointer-to-int-cast
  - src\sys\win32\win_input.c(860,7): warning: cast to smaller integer type 'unsigned long' from 'void *' [-Wvoid-pointer-to-int-cast]
- [1x] -cast-function-type-mismatch
  - src\sys\win32\win_syscon.c(283,21): warning: cast from 'LONG (*)(HWND, UINT, WPARAM, LPARAM) __attribute__((stdcall))' (aka 'long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') to 'WNDPROC' (aka 'long long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') converts to incompatible function type [-Wcast-function-type-mismatch]

## windows-latest-x64-release

status: failure

errors: 21
warnings: 262 in 8 kinds

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

- [218x] -pointer-to-int-cast
  - src\client\cl_cin.c(1105,39): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1105,68): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1106,41): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1106,110): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\qcommon\cm_polylib.c(280,9): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\common.c(1098,29): warning: cast to smaller integer type 'int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(948,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(949,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(950,4): warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(951,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(952,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(953,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(954,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(955,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(956,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(957,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(958,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(959,4): warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(960,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(961,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(962,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(963,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(964,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(965,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(966,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(967,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(968,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(969,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(970,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(971,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
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
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
- [4x] -unused-function
  - src\sys\win32\win_shared.c(103,12): warning: unused function 'IsPentium' [-Wunused-function]
  - src\sys\win32\win_shared.c(107,12): warning: unused function 'Is3DNOW' [-Wunused-function]
  - src\sys\win32\win_shared.c(147,12): warning: unused function 'IsKNI' [-Wunused-function]
  - src\sys\win32\win_shared.c(161,12): warning: unused function 'IsMMX' [-Wunused-function]
- [1x] -int-to-pointer-cast
  - src\qcommon\common.c(1098,15): warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
- [1x] need to modify cg_event.c at "// check the sequencial list" if you change this
  - 995 |         { NETF( eventSequence ), 8 }, // warning: need to modify cg_event.c at "// check the sequencial list" if you change this
- [1x] -void-pointer-to-int-cast
  - src\sys\win32\win_input.c(860,7): warning: cast to smaller integer type 'unsigned long' from 'void *' [-Wvoid-pointer-to-int-cast]
- [1x] -cast-function-type-mismatch
  - src\sys\win32\win_syscon.c(283,21): warning: cast from 'LONG (*)(HWND, UINT, WPARAM, LPARAM) __attribute__((stdcall))' (aka 'long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') to 'WNDPROC' (aka 'long long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') converts to incompatible function type [-Wcast-function-type-mismatch]

## windows-latest-x86-debug

status: failure

errors: 21
warnings: 36 in 2 kinds

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
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_qgl.c.obj /c src\client\cl_qgl.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_
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
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]

## windows-latest-x86-release

status: failure

errors: 21
warnings: 36 in 2 kinds

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
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]

