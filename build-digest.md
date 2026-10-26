# Build digest

commit: e59def22c65f

- ubuntu-latest-x64-debug: failure
- ubuntu-latest-x64-release: failure
- ubuntu-latest-x86-debug: cancelled
- ubuntu-latest-x86-release: failure
- uncrustify: failure
- windows-latest-x64-debug: failure
- windows-latest-x64-release: failure
- windows-latest-x86-debug: failure
- windows-latest-x86-release: failure

## ubuntu-latest-x64-debug

status: failure

errors: 21
warnings: 80 in 3 kinds

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
scons: *** [build/linux-x64-debug/client/obj/client/cl_keys.c.o] Error 1
```


### warning kinds

- [53x] -pointer-to-int-cast
  - src/games/botlib/be_ai_weap.c:63:13: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:64:11: warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:65:12: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:66:12: warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:67:18: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:68:12: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:69:17: warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:70:21: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:71:14: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:72:14: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:73:12: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:74:19: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:75:13: warning: cast to smaller integer type 'int' from 'vec3_t *' (aka 'float (*)[3]') [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:76:13: warning: cast to smaller integer type 'int' from 'vec3_t *' (aka 'float (*)[3]') [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:77:18: warning: cast to smaller integer type 'int' from 'vec3_t *' (aka 'float (*)[3]') [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:78:21: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:79:17: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:80:16: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:81:15: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:82:13: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:83:13: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:84:15: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:91:11: warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:92:12: warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:93:12: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:94:14: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:95:13: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:96:13: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:97:16: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:98:17: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:99:16: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:100:11: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:101:17: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:102:13: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:103:17: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:104:17: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:148:3: warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:149:3: warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:150:3: warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *, int, vec_t *)' (aka 'void (**)(struct gentity_s *, struct gentity_s *, int, float *)') [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:151:3: warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *, int, int)' (aka 'void (**)(struct gentity_s *, struct gentity_s *, int, int)') [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:152:3: warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *, int)' (aka 'void (**)(struct gentity_s *, struct gentity_s *, int)') [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:153:3: warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *)' (aka 'void (**)(struct gentity_s *, struct gentity_s *)') [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:154:3: warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *)' (aka 'void (**)(struct gentity_s *, struct gentity_s *)') [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:155:3: warning: cast to smaller integer type 'int' from 'void (**)(int, int)' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:156:3: warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:157:3: warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:158:3: warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:193:3: warning: cast to smaller integer type 'int' from 'bot_state_t **' (aka 'struct bot_state_s **') [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:194:3: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:195:3: warning: cast to smaller integer type 'int' from 'cast_script_event_t **' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:196:3: warning: cast to smaller integer type 'int' from 'cast_weapon_info_t **' [-Wpointer-to-int-cast]
  - src/renderer/tr_bsp.c:379:14: warning: cast to smaller integer type 'int' from 'float (*)[8]' [-Wpointer-to-int-cast]
  - src/renderer/tr_init.c:1095:7: warning: cast to smaller integer type 'int' from 'vec4_t *' (aka 'float (*)[4]') [-Wpointer-to-int-cast]
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
warnings: 80 in 3 kinds

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

- [53x] -pointer-to-int-cast
  - src/games/botlib/be_ai_weap.c:63:13: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:64:11: warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:65:12: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:66:12: warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:67:18: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:68:12: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:69:17: warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:70:21: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:71:14: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:72:14: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:73:12: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:74:19: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:75:13: warning: cast to smaller integer type 'int' from 'vec3_t *' (aka 'float (*)[3]') [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:76:13: warning: cast to smaller integer type 'int' from 'vec3_t *' (aka 'float (*)[3]') [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:77:18: warning: cast to smaller integer type 'int' from 'vec3_t *' (aka 'float (*)[3]') [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:78:21: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:79:17: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:80:16: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:81:15: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:82:13: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:83:13: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:84:15: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:91:11: warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:92:12: warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:93:12: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:94:14: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:95:13: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:96:13: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:97:16: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:98:17: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:99:16: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:100:11: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:101:17: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:102:13: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:103:17: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/botlib/be_ai_weap.c:104:17: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:148:3: warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:149:3: warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:150:3: warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *, int, vec_t *)' (aka 'void (**)(struct gentity_s *, struct gentity_s *, int, float *)') [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:151:3: warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *, int, int)' (aka 'void (**)(struct gentity_s *, struct gentity_s *, int, int)') [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:152:3: warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *, int)' (aka 'void (**)(struct gentity_s *, struct gentity_s *, int)') [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:153:3: warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *)' (aka 'void (**)(struct gentity_s *, struct gentity_s *)') [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:154:3: warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *)' (aka 'void (**)(struct gentity_s *, struct gentity_s *)') [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:155:3: warning: cast to smaller integer type 'int' from 'void (**)(int, int)' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:156:3: warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:157:3: warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:158:3: warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:193:3: warning: cast to smaller integer type 'int' from 'bot_state_t **' (aka 'struct bot_state_s **') [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:194:3: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:195:3: warning: cast to smaller integer type 'int' from 'cast_script_event_t **' [-Wpointer-to-int-cast]
  - src/games/game/g_save.c:196:3: warning: cast to smaller integer type 'int' from 'cast_weapon_info_t **' [-Wpointer-to-int-cast]
  - src/renderer/tr_bsp.c:379:14: warning: cast to smaller integer type 'int' from 'float (*)[8]' [-Wpointer-to-int-cast]
  - src/renderer/tr_init.c:1095:7: warning: cast to smaller integer type 'int' from 'vec4_t *' (aka 'float (*)[4]') [-Wpointer-to-int-cast]
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

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

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

status: failure

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-debug

status: failure

errors: 21
warnings: 75 in 2 kinds

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

- [57x] -pointer-to-int-cast
  - src\sys\win32\win_main.c(1255,39): warning: cast to smaller integer type 'int' from 'HINSTANCE' (aka 'struct HINSTANCE__ *') [-Wpointer-to-int-cast]
  - src\sys\win32\win_main.c(1256,37): warning: cast to smaller integer type 'int' from 'LONG (*)(HWND, UINT, WPARAM, LPARAM) __attribute__((stdcall))' (aka 'long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') [-Wpointer-to-int-cast]
  - src\sys\win32\win_syscon.c(141,11): warning: cast to smaller integer type 'long' from 'HBRUSH' (aka 'struct HBRUSH__ *') [-Wpointer-to-int-cast]
  - src\sys\win32\win_syscon.c(151,11): warning: cast to smaller integer type 'long' from 'HBRUSH' (aka 'struct HBRUSH__ *') [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(63,13): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(64,11): warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(65,12): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(66,12): warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(67,18): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(68,12): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(69,17): warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(70,21): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(71,14): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(72,14): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(73,12): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(74,19): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(75,13): warning: cast to smaller integer type 'int' from 'vec3_t *' (aka 'float (*)[3]') [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(76,13): warning: cast to smaller integer type 'int' from 'vec3_t *' (aka 'float (*)[3]') [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(77,18): warning: cast to smaller integer type 'int' from 'vec3_t *' (aka 'float (*)[3]') [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(78,21): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(79,17): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(80,16): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(81,15): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(82,13): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(83,13): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(84,15): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(91,11): warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(92,12): warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(93,12): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(94,14): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(95,13): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(96,13): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(97,16): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(98,17): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(99,16): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(100,11): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(101,17): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(102,13): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(103,17): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(104,17): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(148,3): warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(149,3): warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(150,3): warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *, int, vec_t *)' (aka 'void (**)(struct gentity_s *, struct gentity_s *, int, float *)') [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(151,3): warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *, int, int)' (aka 'void (**)(struct gentity_s *, struct gentity_s *, int, int)') [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(152,3): warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *, int)' (aka 'void (**)(struct gentity_s *, struct gentity_s *, int)') [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(153,3): warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *)' (aka 'void (**)(struct gentity_s *, struct gentity_s *)') [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(154,3): warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *)' (aka 'void (**)(struct gentity_s *, struct gentity_s *)') [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(155,3): warning: cast to smaller integer type 'int' from 'void (**)(int, int)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(156,3): warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(157,3): warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(158,3): warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(193,3): warning: cast to smaller integer type 'int' from 'bot_state_t **' (aka 'struct bot_state_s **') [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(194,3): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(195,3): warning: cast to smaller integer type 'int' from 'cast_script_event_t **' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(196,3): warning: cast to smaller integer type 'int' from 'cast_weapon_info_t **' [-Wpointer-to-int-cast]
  - src\renderer\tr_bsp.c(379,14): warning: cast to smaller integer type 'int' from 'float (*)[8]' [-Wpointer-to-int-cast]
  - src\renderer\tr_init.c(1095,7): warning: cast to smaller integer type 'int' from 'vec4_t *' (aka 'float (*)[4]') [-Wpointer-to-int-cast]
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
warnings: 75 in 2 kinds

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

- [57x] -pointer-to-int-cast
  - src\sys\win32\win_main.c(1255,39): warning: cast to smaller integer type 'int' from 'HINSTANCE' (aka 'struct HINSTANCE__ *') [-Wpointer-to-int-cast]
  - src\sys\win32\win_main.c(1256,37): warning: cast to smaller integer type 'int' from 'LONG (*)(HWND, UINT, WPARAM, LPARAM) __attribute__((stdcall))' (aka 'long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') [-Wpointer-to-int-cast]
  - src\sys\win32\win_syscon.c(141,11): warning: cast to smaller integer type 'long' from 'HBRUSH' (aka 'struct HBRUSH__ *') [-Wpointer-to-int-cast]
  - src\sys\win32\win_syscon.c(151,11): warning: cast to smaller integer type 'long' from 'HBRUSH' (aka 'struct HBRUSH__ *') [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(63,13): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(64,11): warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(65,12): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(66,12): warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(67,18): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(68,12): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(69,17): warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(70,21): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(71,14): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(72,14): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(73,12): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(74,19): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(75,13): warning: cast to smaller integer type 'int' from 'vec3_t *' (aka 'float (*)[3]') [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(76,13): warning: cast to smaller integer type 'int' from 'vec3_t *' (aka 'float (*)[3]') [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(77,18): warning: cast to smaller integer type 'int' from 'vec3_t *' (aka 'float (*)[3]') [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(78,21): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(79,17): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(80,16): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(81,15): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(82,13): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(83,13): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(84,15): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(91,11): warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(92,12): warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(93,12): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(94,14): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(95,13): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(96,13): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(97,16): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(98,17): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(99,16): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(100,11): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(101,17): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(102,13): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(103,17): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.c(104,17): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(148,3): warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(149,3): warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(150,3): warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *, int, vec_t *)' (aka 'void (**)(struct gentity_s *, struct gentity_s *, int, float *)') [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(151,3): warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *, int, int)' (aka 'void (**)(struct gentity_s *, struct gentity_s *, int, int)') [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(152,3): warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *, int)' (aka 'void (**)(struct gentity_s *, struct gentity_s *, int)') [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(153,3): warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *)' (aka 'void (**)(struct gentity_s *, struct gentity_s *)') [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(154,3): warning: cast to smaller integer type 'int' from 'void (**)(gentity_t *, gentity_t *)' (aka 'void (**)(struct gentity_s *, struct gentity_s *)') [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(155,3): warning: cast to smaller integer type 'int' from 'void (**)(int, int)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(156,3): warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(157,3): warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(158,3): warning: cast to smaller integer type 'int' from 'char *(**)(struct cast_state_s *)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(193,3): warning: cast to smaller integer type 'int' from 'bot_state_t **' (aka 'struct bot_state_s **') [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(194,3): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(195,3): warning: cast to smaller integer type 'int' from 'cast_script_event_t **' [-Wpointer-to-int-cast]
  - src\games\game\g_save.c(196,3): warning: cast to smaller integer type 'int' from 'cast_weapon_info_t **' [-Wpointer-to-int-cast]
  - src\renderer\tr_bsp.c(379,14): warning: cast to smaller integer type 'int' from 'float (*)[8]' [-Wpointer-to-int-cast]
  - src\renderer\tr_init.c(1095,7): warning: cast to smaller integer type 'int' from 'vec4_t *' (aka 'float (*)[4]') [-Wpointer-to-int-cast]
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

