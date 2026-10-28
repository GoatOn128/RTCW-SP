# Build digest

commit: 1a1fc459671c

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

errors: 520
warnings: 6952 in 6 kinds

### errors

/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:536:25: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:924:25: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:996:33: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:1251:100: error: expected ‘,’ or ‘...’ before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:1491:69: error: expected ‘,’ or ‘...’ before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:95:38: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:95:40: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:95:63: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:95:65: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:96:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:96:43: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_renderprog.cpp:380:59: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_renderprog.cpp:380:61: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:553:59: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:553:61: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:554:59: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:554:61: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:555:59: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:555:61: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:556:66: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:556:68: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1010:104: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1010:107: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1014:122: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1014:125: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1024:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1024:44: error: expected primary-expression before ‘=’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1030:114: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1030:117: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1033:49: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1033:51: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1078:17: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1078:20: error: expected primary-expression before ‘=’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1079:90: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1079:93: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:42:38: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:42:40: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:42:63: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:42:65: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:43:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:43:43: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:57:67: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:57:69: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:58:68: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:58:70: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:82:55: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:82:57: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:82:98: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:82:100: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:83:51: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:83:53: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:83:92: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:83:94: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:144:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:198:33: error: ‘image’ was not declared in this scope; did you mean ‘XImage’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:207:76: error: ‘image’ was not declared in this scope; did you mean ‘XImage’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:211:73: error: ‘image’ was not declared in this scope; did you mean ‘XImage’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:429:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:460:25: error: ‘points’ was not declared in this scope; did you mean ‘printf’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:464:25: error: ‘points’ was not declared in this scope; did you mean ‘printf’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:467:60: error: ‘points’ was not declared in this scope; did you mean ‘printf’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:471:55: error: ‘points’ was not declared in this scope; did you mean ‘printf’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_flares.cpp:137:48: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_flares.cpp:137:50: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_flares.cpp:205:51: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_flares.cpp:205:53: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:374:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:379:25: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:405:55: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:413:57: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:450:48: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:467:43: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:475:27: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:532:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:547:122: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:557:25: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:567:41: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:588:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:603:126: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:613:25: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:623:41: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:49:67: error: expected ‘,’ or ‘...’ before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:54:45: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:54:47: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:55:56: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:55:58: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:56:56: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:56:58: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:57:56: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:57:58: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:75:75: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:75:78: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:336:32: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:336:34: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:337:52: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:337:54: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:338:52: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:338:54: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:339:52: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:339:54: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:113: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:115: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:113: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:115: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:113: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:115: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:449:42: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:449:44: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:450:42: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:450:44: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:451:42: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:451:44: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:531:65: error: expected ‘,’ or ‘...’ before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:537:18: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:537:21: error: expected primary-expression before ‘=’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:541:36: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:541:38: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:543:37: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:543:39: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:544:37: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:544:39: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:545:37: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:545:39: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:547:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:547:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:548:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:548:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:549:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:549:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:550:24: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:550:26: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:552:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:552:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:553:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:553:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:554:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:554:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:555:24: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:555:26: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:557:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:557:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:558:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:558:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:559:24: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:559:26: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:560:24: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:560:26: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:567:65: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:567:67: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:571:36: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:571:38: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:571:47: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:571:49: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:585:9: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:585:11: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:585:48: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:585:50: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:586:9: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:586:11: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:586:48: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:586:50: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:587:9: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:587:11: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:587:48: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:587:50: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:601:21: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:601:23: error: expected primary-expression before ‘,’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:601:39: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:601:42: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:602:12: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:602:14: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:603:12: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:603:14: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:604:12: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:604:14: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:605:48: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:605:50: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:605:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:605:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:608:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:608:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:610:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:610:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:611:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:611:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:612:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:612:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:615:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:615:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:616:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:616:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:617:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:617:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:620:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:620:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:621:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:621:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:622:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:622:43: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:632:56: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:632:58: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:634:33: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:634:35: error: expected primary-expression before ‘;’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:797:49: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:797:51: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:881:35: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:881:37: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:882:68: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:882:70: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:884:35: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:884:37: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:885:69: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:885:71: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:891:35: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:891:37: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:892:68: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:892:70: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:894:35: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:894:37: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:895:69: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:895:71: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:899:73: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:899:75: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1009:73: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1009:76: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1014:80: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1014:82: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1017:96: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1017:98: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1124:73: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1124:76: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1129:80: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1129:82: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1132:96: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1132:98: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1202:57: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1202:59: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1234:73: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1234:75: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1301:33: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1301:35: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1301:72: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1301:74: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1306:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1306:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1306:74: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1306:76: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1307:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1307:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1307:74: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1307:76: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1308:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1308:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1308:74: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1308:76: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1712:68: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1712:71: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:42:38: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:42:40: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:42:63: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:42:65: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:43:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:43:43: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_scene.cpp:526:40: error: expected unqualified-id before ‘or’ token

### failure context


### warning kinds

- [6914x] -write-strings
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:155:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:156:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:175:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:177:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:235:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:453:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:567:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:571:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:633:16: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:95:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:96:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:98:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:100:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:102:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:103:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:104:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:105:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:106:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:107:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:109:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:110:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:111:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:112:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:113:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:114:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:115:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:117:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:118:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:119:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:120:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:121:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:123:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:125:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:126:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:128:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:129:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:130:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:131:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:132:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:133:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:135:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:136:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:137:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:138:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:140:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:141:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:142:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:144:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:146:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:147:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:149:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:151:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:153:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:154:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:155:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:156:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:157:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:158:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:160:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:162:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:164:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:225:16: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:412:48: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:421:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:433:48: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:473:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:515:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:520:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:549:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:658:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:678:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:697:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:753:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:768:40: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:839:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:918:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:936:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:941:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:956:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:976:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1005:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1011:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1015:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1030:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1176:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1196:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:72:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:75:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:326:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:371:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:421:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:467:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:472:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:480:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:487:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:491:48: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:501:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:508:72: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:523:72: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:618:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:621:36: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:623:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:756:17: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:757:17: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:758:17: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:759:17: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:927:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:934:64: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:960:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1059:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1063:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1090:48: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1093:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1101:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1115:40: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1187:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1192:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1202:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1251:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1256:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1267:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1270:40: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1303:52: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1307:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1312:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1317:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1331:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1340:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1355:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1370:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1391:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1584:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1589:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1630:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1634:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1651:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1774:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1779:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1789:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1721:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1819:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1832:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1863:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1874:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1885:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1896:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1936:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1944:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1731:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1967:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1978:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1982:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2016:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2086:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2107:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2205:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2241:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2260:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2309:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2313:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2350:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2377:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2417:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2451:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2465:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2477:32: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2560:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2561:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2562:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2563:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2564:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2565:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2566:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2567:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2568:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2569:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2570:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2571:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2572:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2573:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2583:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2589:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2602:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2674:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2675:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2685:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2691:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2705:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2843:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2848:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2863:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2884:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2913:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2919:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2933:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:93:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:97:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:111:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:112:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:113:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:118:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:119:43: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:120:44: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:123:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:149:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:153:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:167:31: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:197:112: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/l_memory.h:45:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:218:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:222:145: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/l_memory.h:46:76: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:233:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:249:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:257:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:264:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:289:124: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:295:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:325:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:391:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:400:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:403:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:409:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:413:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:415:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:59:33: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:423:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:431:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:439:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:447:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:455:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:459:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:473:71: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:508:150: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:528:107: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:556:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:592:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:596:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:629:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:649:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:688:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:708:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:745:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_gen.cpp:107:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_gen.cpp:119:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:228:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:232:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:251:43: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:251:59: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:253:176: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/l_memory.h:53:80: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:348:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:639:67: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:644:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:660:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:664:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:673:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:696:85: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:703:78: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:721:85: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:723:89: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:731:83: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:734:85: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:740:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:747:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:757:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:761:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:912:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:920:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:928:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:935:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:938:51: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:941:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1001:67: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1006:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1016:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1035:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1036:65: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1040:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1063:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1066:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1184:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1190:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1197:108: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1208:108: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1231:148: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1242:64: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1250:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1258:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1296:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1306:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1314:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1328:117: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1337:76: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1343:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1351:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1359:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1360:65: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1369:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1484:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1566:60: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1567:140: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1578:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1755:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1764:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1770:97: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1778:105: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1785:59: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1787:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1791:59: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1793:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1795:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1797:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1799:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1801:74: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1807:64: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1822:72: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1823:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1828:103: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1840:105: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1844:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1845:57: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1847:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1855:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1862:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1869:145: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1880:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1888:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1903:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1906:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1907:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1908:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1911:36: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1913:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1915:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1945:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1950:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1969:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1987:78: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1993:89: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2010:87: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2053:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2062:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2067:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2074:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2113:31: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2134:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2141:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2144:31: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2189:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2211:77: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2234:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2238:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2248:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2257:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2288:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2289:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2370:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2371:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2372:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2403:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2454:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2458:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2460:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2464:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2466:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2468:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2470:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2472:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2476:71: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2477:72: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2479:71: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2482:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2485:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2488:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2489:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2491:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2623:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2628:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2671:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2672:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2769:108: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2787:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2791:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2795:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2820:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2820:41: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2822:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2822:41: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2824:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2824:43: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2827:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2827:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2828:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2828:51: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2835:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:144:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:145:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:146:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:147:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
- [24x] -register
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:635:22: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:635:28: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/l_precomp.cpp:544:22: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/l_precomp.cpp:544:28: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/game/bg_lib.cpp:101:40: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/game/bg_lib.cpp:102:40: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/game/bg_lib.cpp:104:47: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/common.cpp:694:22: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/common.cpp:694:28: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
- [10x] missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:67:32: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:137:9: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:146:32: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:239:9: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:248:40: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:271:17: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:285:32: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:306:9: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:322:40: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:340:17: warning: missing terminating " character
- [2x] format ‘%d’ expects argument of type ‘int’, but argument 3 has type ‘long int’ [-Wformat=]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2517:34: warning: format ‘%d’ expects argument of type ‘int’, but argument 3 has type ‘long int’ [-Wformat=]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2623:34: warning: format ‘%d’ expects argument of type ‘int’, but argument 3 has type ‘long int’ [-Wformat=]
- [1x] ‘char* strncat(char*, const char*, size_t)’ specified bound 64 equals destination size [-Wstringop-o
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1087:32: warning: ‘char* strncat(char*, const char*, size_t)’ specified bound 64 equals destination size [-Wstringop-overflow=]
- [1x] ‘char* strncat(char*, const char*, size_t)’ specified bound 1024 equals destination size [-Wstringop
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/l_precomp.cpp:996:32: warning: ‘char* strncat(char*, const char*, size_t)’ specified bound 1024 equals destination size [-Wstringop-overflow=]

## ubuntu-latest-x64-release

status: failure

errors: 472
warnings: 2846 in 5 kinds

### errors

/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:536:25: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:924:25: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:996:33: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:1251:100: error: expected ‘,’ or ‘...’ before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:1491:69: error: expected ‘,’ or ‘...’ before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:95:38: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:95:40: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:95:63: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:95:65: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:96:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:96:43: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:553:59: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:553:61: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:554:59: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:554:61: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:555:59: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:555:61: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:556:66: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:556:68: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1010:104: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1010:107: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1014:122: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1014:125: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1024:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1024:44: error: expected primary-expression before ‘=’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1030:114: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1030:117: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1033:49: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1033:51: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1078:17: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1078:20: error: expected primary-expression before ‘=’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1079:90: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1079:93: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_renderprog.cpp:380:59: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_renderprog.cpp:380:61: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:144:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:198:33: error: ‘image’ was not declared in this scope; did you mean ‘XImage’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:207:76: error: ‘image’ was not declared in this scope; did you mean ‘XImage’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:211:73: error: ‘image’ was not declared in this scope; did you mean ‘XImage’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:429:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:460:25: error: ‘points’ was not declared in this scope; did you mean ‘printf’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:464:25: error: ‘points’ was not declared in this scope; did you mean ‘printf’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:467:60: error: ‘points’ was not declared in this scope; did you mean ‘printf’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:471:55: error: ‘points’ was not declared in this scope; did you mean ‘printf’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:57:67: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:57:69: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:58:68: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:58:70: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:82:55: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:82:57: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:82:98: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:82:100: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:83:51: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:83:53: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:83:92: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:83:94: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:42:38: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:42:40: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:42:63: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:42:65: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:43:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:43:43: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_flares.cpp:137:48: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_flares.cpp:137:50: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_flares.cpp:205:51: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_flares.cpp:205:53: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:374:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:379:25: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:405:55: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:413:57: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:450:48: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:467:43: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:475:27: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:532:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:547:122: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:557:25: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:567:41: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:588:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:603:126: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:613:25: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:623:41: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:49:67: error: expected ‘,’ or ‘...’ before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:54:45: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:54:47: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:55:56: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:55:58: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:56:56: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:56:58: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:57:56: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:57:58: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:75:75: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:75:78: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:336:32: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:336:34: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:337:52: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:337:54: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:338:52: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:338:54: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:339:52: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:339:54: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:113: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:115: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:113: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:115: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:113: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:115: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:449:42: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:449:44: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:450:42: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:450:44: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:451:42: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:451:44: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:531:65: error: expected ‘,’ or ‘...’ before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:537:18: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:537:21: error: expected primary-expression before ‘=’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:541:36: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:541:38: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:543:37: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:543:39: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:544:37: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:544:39: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:545:37: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:545:39: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:547:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:547:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:548:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:548:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:549:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:549:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:550:24: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:550:26: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:552:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:552:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:553:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:553:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:554:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:554:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:555:24: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:555:26: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:557:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:557:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:558:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:558:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:559:24: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:559:26: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:560:24: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:560:26: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:567:65: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:567:67: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:571:36: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:571:38: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:571:47: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:571:49: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:585:9: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:585:11: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:585:48: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:585:50: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:586:9: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:586:11: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:586:48: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:586:50: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:587:9: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:587:11: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:587:48: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:587:50: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:601:21: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:601:23: error: expected primary-expression before ‘,’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:601:39: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:601:42: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:602:12: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:602:14: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:603:12: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:603:14: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:604:12: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:604:14: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:605:48: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:605:50: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:605:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:605:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:608:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:608:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:610:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:610:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:611:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:611:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:612:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:612:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:615:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:615:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:616:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:616:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:617:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:617:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:620:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:620:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:621:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:621:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:622:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:622:43: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:632:56: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:632:58: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:634:33: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:634:35: error: expected primary-expression before ‘;’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:797:49: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:797:51: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:881:35: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:881:37: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:882:68: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:882:70: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:884:35: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:884:37: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:885:69: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:885:71: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:891:35: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:891:37: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:892:68: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:892:70: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:894:35: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:894:37: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:895:69: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:895:71: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:899:73: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:899:75: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1009:73: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1009:76: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1014:80: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1014:82: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1017:96: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1017:98: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1124:73: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1124:76: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1129:80: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1129:82: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1132:96: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1132:98: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1202:57: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1202:59: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1234:73: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1234:75: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1301:33: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1301:35: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1301:72: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1301:74: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1306:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1306:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1306:74: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1306:76: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1307:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1307:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1307:74: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1307:76: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1308:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1308:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1308:74: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1308:76: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1712:68: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1712:71: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:42:38: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:42:40: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:42:63: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:42:65: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:43:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:43:43: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_scene.cpp:526:40: error: expected unqualified-id before ‘or’ token

### failure context


### warning kinds

- [2821x] -write-strings
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:155:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:156:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:175:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:177:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:235:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:453:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:567:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:571:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:633:16: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:95:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:96:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:98:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:100:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:102:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:103:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:104:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:105:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:106:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:107:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:109:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:110:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:111:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:112:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:113:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:114:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:115:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:117:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:118:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:119:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:120:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:121:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:123:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:125:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:126:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:128:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:129:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:130:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:131:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:132:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:133:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:135:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:136:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:137:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:138:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:140:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:141:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:142:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:144:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:146:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:147:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:149:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:151:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:153:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:154:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:155:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:156:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:157:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:158:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:160:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:162:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:164:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:225:16: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:412:48: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:421:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:433:48: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:473:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:515:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:520:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:549:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:658:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:678:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:697:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:753:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:768:40: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:839:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:918:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:936:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:941:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:956:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:976:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1005:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1011:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1015:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1030:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1176:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1196:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:72:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:75:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:326:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:371:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:421:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:467:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:472:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:480:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:487:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:491:48: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:501:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:508:72: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:523:72: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:618:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:621:36: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:623:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:756:17: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:757:17: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:758:17: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:759:17: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:927:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:934:64: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:960:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1059:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1063:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1090:48: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1093:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1101:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1115:40: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1187:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1192:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1202:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1251:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1256:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1267:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1270:40: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1303:52: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1307:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1312:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1317:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1331:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1340:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1355:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1370:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1391:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1584:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1589:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1630:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1634:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1651:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1774:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1779:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1789:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1721:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1819:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1832:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1863:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1874:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1885:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1896:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1936:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1944:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1731:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1967:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1978:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1982:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2016:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2086:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2107:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2205:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2241:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2260:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2309:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2313:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2350:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2377:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2417:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2451:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2465:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2477:32: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2560:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2561:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2562:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2563:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2564:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2565:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2566:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2567:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2568:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2569:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2570:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2571:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2572:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2573:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2583:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2589:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2602:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2674:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2675:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2685:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2691:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2705:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2843:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2848:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2863:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2884:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2913:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2919:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2933:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:93:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:97:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:111:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:112:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:113:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:118:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:119:43: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:120:44: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:123:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:149:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:153:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:167:31: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:218:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:233:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:249:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:257:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:264:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:295:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:325:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:391:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:400:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:409:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:413:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:415:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:59:33: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:423:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:431:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:439:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:447:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:455:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:459:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:473:71: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:556:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:592:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:596:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:629:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:649:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:688:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:708:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:745:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_gen.cpp:107:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_gen.cpp:119:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:144:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:145:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:146:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:147:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:148:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:149:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:150:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:151:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:208:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:212:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:273:43: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:273:59: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:275:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:277:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:277:44: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:283:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:296:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:320:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:329:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:331:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:351:36: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:369:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:369:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:391:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:478:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:485:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:486:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:495:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:497:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:498:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:499:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:500:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:501:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:504:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:515:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:516:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:556:36: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:562:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:567:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:578:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:588:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:589:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:590:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:594:87: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:611:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:617:36: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:620:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:681:36: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:1004:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:1021:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:1508:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:1567:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:1571:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:1588:35: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:1588:49: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:1590:34: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:1590:48: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:1594:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:228:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:232:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:251:43: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:251:59: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:348:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:644:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:660:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:664:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:673:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:696:85: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:703:78: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:721:85: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:723:89: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:731:83: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:734:85: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:740:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:747:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:757:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:761:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:912:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:920:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:928:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:935:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:938:51: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:941:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1006:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1016:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1035:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1036:65: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1040:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1063:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1184:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1190:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1242:64: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1250:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1258:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1296:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1306:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1314:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1337:76: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1343:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1351:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1359:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1360:65: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1369:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1484:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1566:60: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1578:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1755:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1764:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1785:59: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1787:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1791:59: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1793:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1795:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1797:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1799:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1801:74: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1807:64: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1822:72: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1823:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1844:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1845:57: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1847:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1855:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1862:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1880:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1888:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1903:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1906:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1907:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1908:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1911:36: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1913:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1915:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1950:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1969:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1987:78: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1993:89: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2010:87: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2053:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2062:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2067:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2113:31: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2134:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2141:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2144:31: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2189:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2211:77: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2234:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2238:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2248:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2257:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2288:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2289:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2370:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2371:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2372:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2454:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2458:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2460:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2464:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2466:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2468:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2470:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
- [16x] -register
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:635:22: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:635:28: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/l_precomp.cpp:544:22: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/l_precomp.cpp:544:28: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/game/bg_lib.cpp:101:40: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/game/bg_lib.cpp:102:40: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/game/bg_lib.cpp:104:47: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
- [5x] -unused-result
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:187:14: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:197:22: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:246:14: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:256:22: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_qgl.cpp:2714:31: warning: ignoring return value of ‘char* getcwd(char*, size_t)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
- [2x] format ‘%d’ expects argument of type ‘int’, but argument 3 has type ‘long int’ [-Wformat=]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2517:34: warning: format ‘%d’ expects argument of type ‘int’, but argument 3 has type ‘long int’ [-Wformat=]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2623:34: warning: format ‘%d’ expects argument of type ‘int’, but argument 3 has type ‘long int’ [-Wformat=]
- [2x] ‘char* __builtin___strncat_chk(char*, const char*, long unsigned int, long unsigned int)’ specified 
  - /usr/include/x86_64-linux-gnu/bits/string_fortified.h:161:34: warning: ‘char* __builtin___strncat_chk(char*, const char*, long unsigned int, long unsigned int)’ specified bound 64 equals destination size [-Wstringop-overflow=]
  - /usr/include/x86_64-linux-gnu/bits/string_fortified.h:161:34: warning: ‘char* __builtin___strncat_chk(char*, const char*, long unsigned int, long unsigned int)’ specified bound 1024 equals destination size [-Wstringop-overflow=]

## ubuntu-latest-x86-debug

status: failure

errors: 520
warnings: 6952 in 6 kinds

### errors

/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:536:25: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:924:25: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:996:33: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:1251:100: error: expected ‘,’ or ‘...’ before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:1491:69: error: expected ‘,’ or ‘...’ before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:95:38: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:95:40: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:95:63: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:95:65: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:96:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:96:43: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_renderprog.cpp:380:59: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_renderprog.cpp:380:61: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:553:59: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:553:61: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:554:59: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:554:61: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:555:59: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:555:61: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:556:66: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:556:68: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1010:104: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1010:107: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1014:122: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1014:125: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1024:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1024:44: error: expected primary-expression before ‘=’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1030:114: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1030:117: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1033:49: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1033:51: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1078:17: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1078:20: error: expected primary-expression before ‘=’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1079:90: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1079:93: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:57:67: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:57:69: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:58:68: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:58:70: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:82:55: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:82:57: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:82:98: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:82:100: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:83:51: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:83:53: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:83:92: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:83:94: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:42:38: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:42:40: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:42:63: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:42:65: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:43:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:43:43: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:144:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:198:33: error: ‘image’ was not declared in this scope; did you mean ‘XImage’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:207:76: error: ‘image’ was not declared in this scope; did you mean ‘XImage’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:211:73: error: ‘image’ was not declared in this scope; did you mean ‘XImage’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:429:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:460:25: error: ‘points’ was not declared in this scope; did you mean ‘printf’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:464:25: error: ‘points’ was not declared in this scope; did you mean ‘printf’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:467:60: error: ‘points’ was not declared in this scope; did you mean ‘printf’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:471:55: error: ‘points’ was not declared in this scope; did you mean ‘printf’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_flares.cpp:137:48: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_flares.cpp:137:50: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_flares.cpp:205:51: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_flares.cpp:205:53: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:374:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:379:25: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:405:55: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:413:57: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:450:48: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:467:43: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:475:27: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:532:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:547:122: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:557:25: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:567:41: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:588:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:603:126: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:613:25: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:623:41: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:49:67: error: expected ‘,’ or ‘...’ before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:54:45: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:54:47: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:55:56: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:55:58: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:56:56: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:56:58: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:57:56: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:57:58: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:75:75: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:75:78: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:336:32: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:336:34: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:337:52: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:337:54: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:338:52: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:338:54: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:339:52: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:339:54: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:113: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:115: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:113: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:115: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:113: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:115: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:449:42: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:449:44: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:450:42: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:450:44: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:451:42: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:451:44: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:531:65: error: expected ‘,’ or ‘...’ before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:537:18: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:537:21: error: expected primary-expression before ‘=’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:541:36: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:541:38: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:543:37: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:543:39: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:544:37: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:544:39: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:545:37: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:545:39: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:547:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:547:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:548:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:548:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:549:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:549:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:550:24: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:550:26: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:552:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:552:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:553:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:553:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:554:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:554:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:555:24: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:555:26: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:557:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:557:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:558:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:558:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:559:24: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:559:26: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:560:24: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:560:26: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:567:65: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:567:67: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:571:36: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:571:38: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:571:47: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:571:49: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:585:9: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:585:11: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:585:48: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:585:50: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:586:9: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:586:11: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:586:48: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:586:50: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:587:9: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:587:11: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:587:48: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:587:50: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:601:21: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:601:23: error: expected primary-expression before ‘,’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:601:39: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:601:42: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:602:12: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:602:14: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:603:12: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:603:14: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:604:12: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:604:14: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:605:48: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:605:50: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:605:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:605:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:608:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:608:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:610:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:610:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:611:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:611:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:612:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:612:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:615:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:615:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:616:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:616:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:617:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:617:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:620:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:620:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:621:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:621:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:622:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:622:43: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:632:56: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:632:58: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:634:33: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:634:35: error: expected primary-expression before ‘;’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:797:49: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:797:51: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:881:35: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:881:37: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:882:68: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:882:70: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:884:35: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:884:37: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:885:69: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:885:71: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:891:35: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:891:37: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:892:68: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:892:70: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:894:35: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:894:37: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:895:69: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:895:71: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:899:73: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:899:75: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1009:73: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1009:76: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1014:80: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1014:82: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1017:96: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1017:98: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1124:73: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1124:76: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1129:80: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1129:82: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1132:96: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1132:98: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1202:57: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1202:59: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1234:73: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1234:75: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1301:33: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1301:35: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1301:72: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1301:74: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1306:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1306:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1306:74: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1306:76: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1307:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1307:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1307:74: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1307:76: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1308:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1308:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1308:74: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1308:76: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1712:68: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1712:71: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:42:38: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:42:40: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:42:63: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:42:65: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:43:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:43:43: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_scene.cpp:526:40: error: expected unqualified-id before ‘or’ token

### failure context


### warning kinds

- [6914x] -write-strings
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:95:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:96:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:98:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:100:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:102:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:103:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:104:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:105:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:106:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:107:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:109:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:110:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:111:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:112:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:113:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:114:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:115:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:117:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:118:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:119:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:120:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:121:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:123:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:125:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:126:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:128:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:129:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:130:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:131:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:132:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:133:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:135:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:136:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:137:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:138:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:140:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:141:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:142:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:144:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:146:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:147:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:149:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:151:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:153:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:154:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:155:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:156:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:157:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:158:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:160:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:162:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:164:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:225:16: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:412:48: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:421:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:433:48: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:473:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:515:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:520:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:549:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:658:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:678:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:697:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:753:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:768:40: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:839:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:918:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:936:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:941:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:956:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:976:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1005:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1011:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1015:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1030:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1176:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1196:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:155:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:156:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:175:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:177:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:235:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:453:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:567:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:571:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:633:16: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:72:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:75:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:326:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:371:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:421:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:467:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:472:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:480:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:487:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:491:48: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:501:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:508:72: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:523:72: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:618:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:621:36: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:623:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:756:17: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:757:17: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:758:17: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:759:17: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:927:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:934:64: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:960:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1059:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1063:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1090:48: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1093:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1101:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1115:40: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1187:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1192:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1202:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1251:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1256:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1267:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1270:40: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1303:52: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1307:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1312:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1317:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1331:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1340:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1355:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1370:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1391:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1584:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1589:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1630:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1634:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1651:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1774:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1779:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1789:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1721:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1819:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1832:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1863:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1874:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1885:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1896:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1936:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1944:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1731:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1967:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1978:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1982:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2016:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2086:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2107:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2205:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2241:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2260:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2309:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2313:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2350:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2377:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2417:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2451:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2465:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2477:32: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2560:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2561:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2562:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2563:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2564:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2565:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2566:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2567:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2568:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2569:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2570:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2571:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2572:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2573:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2583:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2589:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2602:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2674:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2675:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2685:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2691:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2705:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2843:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2848:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2863:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2884:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2913:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2919:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2933:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:93:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:97:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:111:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:112:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:113:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:118:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:119:43: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:120:44: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:123:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:149:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:153:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:167:31: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:197:112: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/l_memory.h:45:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:218:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:222:145: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/l_memory.h:46:76: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:233:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:249:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:257:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:264:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:289:124: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:295:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:325:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:391:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:400:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:403:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:409:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:413:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:415:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:59:33: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:423:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:431:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:439:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:447:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:455:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:459:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:473:71: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:508:150: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:528:107: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:556:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:592:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:596:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:629:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:649:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:688:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:708:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:745:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:228:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:232:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:251:43: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:251:59: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:253:176: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/l_memory.h:53:80: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:348:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:639:67: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:644:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:660:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:664:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:673:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:696:85: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:703:78: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:721:85: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:723:89: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:731:83: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:734:85: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:740:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:747:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:757:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:761:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:912:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:920:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:928:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:935:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:938:51: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:941:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1001:67: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1006:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1016:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1035:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1036:65: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1040:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1063:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1066:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1184:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1190:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1197:108: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1208:108: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1231:148: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1242:64: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1250:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1258:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1296:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1306:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1314:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1328:117: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1337:76: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1343:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1351:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1359:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1360:65: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1369:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1484:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1566:60: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1567:140: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1578:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1755:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1764:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1770:97: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1778:105: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1785:59: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1787:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1791:59: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1793:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1795:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1797:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1799:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1801:74: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1807:64: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1822:72: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1823:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1828:103: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1840:105: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1844:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1845:57: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1847:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1855:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1862:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1869:145: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1880:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1888:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1903:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1906:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1907:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1908:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1911:36: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1913:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1915:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1945:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1950:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1969:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1987:78: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1993:89: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2010:87: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2053:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2062:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2067:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2074:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2113:31: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2134:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2141:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2144:31: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2189:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2211:77: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2234:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2238:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2248:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2257:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2288:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2289:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2370:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2371:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2372:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2403:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2454:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2458:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2460:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2464:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2466:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2468:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2470:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2472:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2476:71: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2477:72: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2479:71: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2482:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2485:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2488:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2489:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2491:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2623:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2628:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2671:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2672:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2769:108: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2787:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2791:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2795:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2820:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2820:41: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2822:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2822:41: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2824:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2824:43: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2827:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2827:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2828:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2828:51: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2835:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_gen.cpp:107:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_gen.cpp:119:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:144:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:145:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:146:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:147:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
- [24x] -register
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:635:22: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:635:28: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/l_precomp.cpp:544:22: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/l_precomp.cpp:544:28: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/game/bg_lib.cpp:101:40: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/game/bg_lib.cpp:102:40: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/game/bg_lib.cpp:104:47: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/common.cpp:694:22: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/common.cpp:694:28: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
- [10x] missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:67:32: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:137:9: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:146:32: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:239:9: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:248:40: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:271:17: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:285:32: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:306:9: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:322:40: warning: missing terminating " character
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_common.cpp:340:17: warning: missing terminating " character
- [2x] format ‘%d’ expects argument of type ‘int’, but argument 3 has type ‘long int’ [-Wformat=]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2517:34: warning: format ‘%d’ expects argument of type ‘int’, but argument 3 has type ‘long int’ [-Wformat=]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2623:34: warning: format ‘%d’ expects argument of type ‘int’, but argument 3 has type ‘long int’ [-Wformat=]
- [1x] ‘char* strncat(char*, const char*, size_t)’ specified bound 64 equals destination size [-Wstringop-o
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1087:32: warning: ‘char* strncat(char*, const char*, size_t)’ specified bound 64 equals destination size [-Wstringop-overflow=]
- [1x] ‘char* strncat(char*, const char*, size_t)’ specified bound 1024 equals destination size [-Wstringop
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/l_precomp.cpp:996:32: warning: ‘char* strncat(char*, const char*, size_t)’ specified bound 1024 equals destination size [-Wstringop-overflow=]

## ubuntu-latest-x86-release

status: cancelled

errors: 472
warnings: 2846 in 6 kinds

### errors

/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:536:25: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:924:25: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:996:33: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:1251:100: error: expected ‘,’ or ‘...’ before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_local.h:1491:69: error: expected ‘,’ or ‘...’ before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:95:38: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:95:40: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:95:63: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:95:65: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:96:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_animation.cpp:96:43: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_renderprog.cpp:380:59: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_renderprog.cpp:380:61: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:553:59: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:553:61: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:554:59: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:554:61: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:555:59: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:555:61: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:556:66: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:556:68: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1010:104: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1010:107: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1014:122: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1014:125: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1024:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1024:44: error: expected primary-expression before ‘=’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1030:114: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1030:117: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1033:49: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1033:51: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1078:17: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1078:20: error: expected primary-expression before ‘=’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1079:90: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_backend.cpp:1079:93: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:57:67: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:57:69: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:58:68: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:58:70: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:82:55: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:82:57: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:82:98: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:82:100: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:83:51: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:83:53: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:83:92: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_vfx.cpp:83:94: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:42:38: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:42:40: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:42:63: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:42:65: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:43:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_cmesh.cpp:43:43: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:144:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:198:33: error: ‘image’ was not declared in this scope; did you mean ‘XImage’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:207:76: error: ‘image’ was not declared in this scope; did you mean ‘XImage’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:211:73: error: ‘image’ was not declared in this scope; did you mean ‘XImage’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:429:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:460:25: error: ‘points’ was not declared in this scope; did you mean ‘printf’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:464:25: error: ‘points’ was not declared in this scope; did you mean ‘printf’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:467:60: error: ‘points’ was not declared in this scope; did you mean ‘printf’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:471:55: error: ‘points’ was not declared in this scope; did you mean ‘printf’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_flares.cpp:137:48: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_flares.cpp:137:50: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_flares.cpp:205:51: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_flares.cpp:205:53: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:374:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:379:25: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:405:55: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:413:57: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:450:48: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:467:43: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:475:27: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:532:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:547:122: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:557:25: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:567:41: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:588:9: error: ‘MAC_STATIC’ was not declared in this scope; did you mean ‘TAG_STATIC’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:603:126: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:613:25: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:623:41: error: ‘ctrl’ was not declared in this scope; did you mean ‘tr’?
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:49:67: error: expected ‘,’ or ‘...’ before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:54:45: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:54:47: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:55:56: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:55:58: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:56:56: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:56:58: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:57:56: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:57:58: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:75:75: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:75:78: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:336:32: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:336:34: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:337:52: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:337:54: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:338:52: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:338:54: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:339:52: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:339:54: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:425:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:426:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:427:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:113: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:437:115: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:113: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:438:115: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:64: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:66: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:94: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:96: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:113: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:439:115: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:449:42: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:449:44: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:450:42: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:450:44: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:451:42: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:451:44: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:531:65: error: expected ‘,’ or ‘...’ before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:537:18: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:537:21: error: expected primary-expression before ‘=’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:541:36: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:541:38: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:543:37: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:543:39: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:544:37: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:544:39: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:545:37: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:545:39: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:547:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:547:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:548:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:548:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:549:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:549:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:550:24: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:550:26: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:552:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:552:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:553:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:553:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:554:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:554:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:555:24: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:555:26: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:557:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:557:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:558:23: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:558:25: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:559:24: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:559:26: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:560:24: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:560:26: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:567:65: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:567:67: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:571:36: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:571:38: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:571:47: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:571:49: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:585:9: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:585:11: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:585:48: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:585:50: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:586:9: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:586:11: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:586:48: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:586:50: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:587:9: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:587:11: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:587:48: error: expected primary-expression before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:587:50: error: expected primary-expression before ‘->’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:601:21: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:601:23: error: expected primary-expression before ‘,’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:601:39: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:601:42: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:602:12: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:602:14: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:603:12: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:603:14: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:604:12: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:604:14: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:605:48: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:605:50: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:605:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:605:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:608:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:608:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:610:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:610:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:611:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:611:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:612:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:612:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:615:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:615:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:616:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:616:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:617:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:617:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:620:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:620:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:621:40: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:621:42: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:622:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:622:43: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:632:56: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:632:58: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:634:33: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:634:35: error: expected primary-expression before ‘;’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:797:49: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:797:51: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:881:35: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:881:37: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:882:68: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:882:70: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:884:35: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:884:37: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:885:69: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:885:71: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:891:35: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:891:37: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:892:68: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:892:70: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:894:35: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:894:37: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:895:69: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:895:71: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:899:73: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:899:75: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1009:73: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1009:76: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1014:80: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1014:82: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1017:96: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1017:98: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1124:73: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1124:76: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1129:80: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1129:82: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1132:96: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1132:98: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1202:57: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1202:59: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1234:73: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1234:75: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1301:33: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1301:35: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1301:72: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1301:74: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1306:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1306:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1306:74: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1306:76: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1307:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1307:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1307:74: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1307:76: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1308:34: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1308:36: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1308:74: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1308:76: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1712:68: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_main.cpp:1712:71: error: expected primary-expression before ‘)’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:42:38: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:42:40: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:42:63: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:42:65: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:43:41: error: expected unqualified-id before ‘or’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_mesh.cpp:43:43: error: expected primary-expression before ‘.’ token
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_scene.cpp:526:40: error: expected unqualified-id before ‘or’ token

### failure context


### warning kinds

- [2821x] -write-strings
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:155:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:156:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:175:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:177:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:235:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:453:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:567:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:571:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:633:16: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:95:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:96:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:98:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:100:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:102:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:103:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:104:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:105:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:106:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:107:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:109:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:110:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:111:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:112:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:113:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:114:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:115:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:117:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:118:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:119:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:120:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:121:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:123:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:125:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:126:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:128:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:129:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:130:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:131:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:132:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:133:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:135:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:136:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:137:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:138:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:140:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:141:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:142:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:144:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:146:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:147:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:149:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:151:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:153:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:154:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:155:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:156:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:157:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:158:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:160:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:162:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:164:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:225:16: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:412:48: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:421:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:433:48: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:473:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:515:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:520:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:549:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:658:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:678:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:697:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:753:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:768:40: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:839:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:918:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:936:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:941:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:956:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:976:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1005:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1011:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1015:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1030:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1176:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_script.cpp:1196:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:72:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:75:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:326:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:371:24: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:421:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:467:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:472:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:480:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:487:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:491:48: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:501:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:508:72: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:523:72: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:618:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:621:36: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:623:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:756:17: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:757:17: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:758:17: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:759:17: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:927:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:934:64: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:960:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1059:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1063:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1090:48: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1093:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1101:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1115:40: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1187:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1192:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1202:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1251:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1256:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1267:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1270:40: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1303:52: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1307:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1312:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1317:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1331:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1340:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1355:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1370:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1391:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1584:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1589:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1630:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1634:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1651:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1774:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1779:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1789:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1721:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1819:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1832:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1863:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1874:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1885:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1896:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1936:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1944:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1731:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1967:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1978:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:1982:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2016:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2086:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2107:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2205:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2241:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2260:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2309:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2313:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2350:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2377:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2417:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2451:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2465:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2477:32: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2560:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2561:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2562:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2563:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2564:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2565:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2566:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2567:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2568:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2569:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2570:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2571:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2572:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2573:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2583:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2589:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2602:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2674:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2675:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2685:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2691:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2705:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2843:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2848:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2863:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2884:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2913:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2919:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2933:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:93:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:97:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:111:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:112:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:113:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:118:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:119:43: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:120:44: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:123:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:149:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:153:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:167:31: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:218:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:233:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:249:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:257:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:264:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:295:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:325:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:391:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:400:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:409:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:413:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:415:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:59:33: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:423:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:431:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:439:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:447:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:455:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:459:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:473:71: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:556:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:592:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:596:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:629:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:649:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:688:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:708:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_char.cpp:745:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:228:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:232:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:251:43: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:251:59: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:348:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:644:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:660:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:664:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:673:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:696:85: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:703:78: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:721:85: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:723:89: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:731:83: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:734:85: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:740:70: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:747:62: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:757:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:761:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:912:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:920:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:928:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:935:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:938:51: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:941:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1006:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1016:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1035:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1036:65: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1040:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1063:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1184:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1190:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1242:64: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1250:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1258:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1296:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1306:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1314:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1337:76: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1343:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1351:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1359:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1360:65: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1369:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1484:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1566:60: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1578:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1755:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1764:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1785:59: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1787:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1791:59: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1793:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1795:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1797:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1799:66: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1801:74: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1807:64: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1822:72: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1823:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1844:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1845:57: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1847:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1855:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1862:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1880:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1888:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1903:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1906:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1907:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1908:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1911:36: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1913:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1915:20: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1950:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1969:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1987:78: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:1993:89: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2010:87: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2053:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2062:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2067:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2113:31: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2134:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2141:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2144:31: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2189:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2211:77: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2234:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2238:69: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2248:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2257:61: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2288:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2289:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2370:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2371:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2372:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2454:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2458:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2460:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2464:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2466:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2468:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2470:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2472:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2476:71: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2477:72: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2479:71: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2482:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2485:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2488:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2489:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2491:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2623:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2628:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2671:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2672:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2787:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2791:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2795:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2820:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2820:41: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2822:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2822:41: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2824:30: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2824:43: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2827:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2827:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2828:38: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_chat.cpp:2828:51: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_gen.cpp:107:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_gen.cpp:119:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:144:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:145:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:146:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:147:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:148:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:149:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:150:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:151:10: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:208:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:212:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:273:43: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:273:59: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:275:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:277:28: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:277:44: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:283:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:296:54: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:320:46: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:329:47: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:331:39: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:351:36: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:369:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:369:63: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:391:45: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:478:53: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:485:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:486:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:495:56: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:497:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:498:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:499:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/be_ai_goal.cpp:500:55: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
- [16x] -register
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:635:22: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:635:28: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/l_precomp.cpp:544:22: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/botlib/l_precomp.cpp:544:28: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/game/bg_lib.cpp:101:40: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/game/bg_lib.cpp:102:40: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/games/game/bg_lib.cpp:104:47: warning: ISO C++17 does not allow ‘register’ storage class specifier [-Wregister]
- [5x] -unused-result
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:187:14: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:197:22: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:246:14: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/extractfuncs.cpp:256:22: warning: ignoring return value of ‘size_t fread(void*, size_t, size_t, FILE*)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_qgl.cpp:2714:31: warning: ignoring return value of ‘char* getcwd(char*, size_t)’ declared with attribute ‘warn_unused_result’ [-Wunused-result]
- [2x] format ‘%d’ expects argument of type ‘int’, but argument 3 has type ‘long int’ [-Wformat=]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2517:34: warning: format ‘%d’ expects argument of type ‘int’, but argument 3 has type ‘long int’ [-Wformat=]
  - /home/runner/work/RTCW-SP/RTCW-SP/src/tools/extractfuncs/l_precomp.cpp:2623:34: warning: format ‘%d’ expects argument of type ‘int’, but argument 3 has type ‘long int’ [-Wformat=]
- [1x] ‘char* __builtin___strncat_chk(char*, const char*, unsigned int, unsigned int)’ specified bound 64 e
  - /usr/include/bits/string_fortified.h:161:34: warning: ‘char* __builtin___strncat_chk(char*, const char*, unsigned int, unsigned int)’ specified bound 64 equals destination size [-Wstringop-overflow=]
- [1x] ‘char* __builtin___strncat_chk(char*, const char*, unsigned int, unsigned int)’ specified bound 1024
  - /usr/include/bits/string_fortified.h:161:34: warning: ‘char* __builtin___strncat_chk(char*, const char*, unsigned int, unsigned int)’ specified bound 1024 equals destination size [-Wstringop-overflow=]

## uncrustify

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-debug

status: failure

errors: 24
warnings: 156 in 4 kinds

### errors

D:\a\RTCW-SP\RTCW-SP\src\tools\bspc\navmesh_builder.cpp(84,2): error C2143: syntax error: missing ';' before '}' [D:\a\RTCW-SP\RTCW-SP\build\tools\bspc\bspc.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx.cpp(1,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\fx\FxWolf.h(9,10): error C1083: Cannot open include file: 'cg_local.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_local.h(42,10): error C1083: Cannot open include file: 'tr_types.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_flame.cpp(37,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_entities.cpp(31,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_marks.cpp(30,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_particles.cpp(30,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_trails.cpp(2,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\ui\ui_shared.h(37,10): error C1083: Cannot open include file: '../../main/ui/menudef.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(144,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(144,13): error C2146: syntax error: missing ';' before identifier 'byte' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(429,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(429,13): error C2146: syntax error: missing ';' before identifier 'drawVert_t' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(374,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(374,13): error C2146: syntax error: missing ';' before identifier 'drawVert_t' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(532,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(532,13): error C2146: syntax error: missing ';' before identifier 'drawVert_t' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(588,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(588,13): error C2146: syntax error: missing ';' before identifier 'drawVert_t' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade.cpp(434,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade.cpp(434,13): error C2144: syntax error: 'float' should be preceded by ';' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shader.cpp(78,18): error C2065: 'PATH_SEP': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\ui\ui_shared.h(37,10): error C1083: Cannot open include file: '../../main/ui/menudef.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]

### failure context


### warning kinds

- [152x] C4267
  - D:\a\RTCW-SP\RTCW-SP\src\splines\q_parse.cpp(339,13): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\q_shared.cpp(124,23): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.h(181,15): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.h(253,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.h(267,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.h(281,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.h(310,18): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.h(406,15): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.h(443,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(105,22): warning C4267: 'argument': conversion from 'size_t' to 'GLsizei', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.cpp(236,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_char.cpp(197,37): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_char.cpp(289,44): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_char.cpp(528,38): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(484,23): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(517,23): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(707,64): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(1020,64): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(1046,72): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(1231,41): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(1436,50): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(1567,32): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(1828,28): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(1840,28): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(1869,40): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2030,74): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2215,19): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2242,18): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2411,31): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2415,31): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2419,31): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2423,31): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2427,31): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2431,31): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2435,31): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2439,31): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2593,42): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2597,42): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2601,42): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2605,42): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2609,42): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2613,42): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2617,42): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2621,42): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2653,15): warning C4267: 'return': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_weight.cpp(363,56): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_libvar.cpp(88,19): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_libvar.cpp(193,23): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_libvar.cpp(244,23): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(675,25): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(722,26): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(737,26): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(751,26): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(1193,24): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(1300,43): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(1427,27): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_script.cpp(830,15): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_script.cpp(1291,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_struct.cpp(367,12): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(470,30): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(1298,42): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(1326,42): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(1420,42): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(1448,42): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(87,29): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(879,13): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(1008,21): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\extractfuncs.cpp(378,109): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(766,85): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(813,25): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(828,25): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(842,25): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(1284,79): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(1391,43): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(1518,82): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_script.cpp(810,15): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_script.cpp(1271,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\ai_debug.cpp(139,50): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\ai_script.cpp(408,58): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\ai_script.cpp(409,60): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\ai_script.cpp(476,97): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\ai_script.cpp(477,99): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(470,30): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(1298,42): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(1326,42): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(1420,42): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(1448,42): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_cmds.cpp(71,13): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_cmds.cpp(130,16): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_main.cpp(1900,31): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(1327,76): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(1366,26): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(2631,65): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(2632,67): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(2634,53): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(2635,55): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_save.cpp(329,32): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_save.cpp(377,34): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_save.cpp(398,32): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_save.cpp(410,34): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_save.cpp(1233,12): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_save.cpp(1238,39): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_save.cpp(1260,12): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_save.cpp(1269,39): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_script.cpp(385,59): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_script.cpp(386,60): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_script.cpp(446,98): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_script.cpp(447,99): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_script_actions.cpp(1003,51): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_script_actions.cpp(1004,51): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_spawn.cpp(749,23): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_spawn.cpp(890,12): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_svcmds.cpp(145,60): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_team.cpp(803,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(87,29): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(879,13): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(1008,21): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(147,5): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(155,18): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(162,2): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(170,5): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(178,5): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(186,3): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(195,5): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(202,6): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(319,19): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(2090,38): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(2104,38): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_image.cpp(1385,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_image.cpp(1395,16): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_model.cpp(831,13): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_model.cpp(1045,13): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade_calc.cpp(350,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(147,5): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(155,18): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(162,2): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(170,5): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(178,5): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(186,3): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(195,5): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(202,6): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(319,19): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(87,29): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(879,13): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(1008,21): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
- [2x] C4996
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_gamma.cpp(153,2): warning C4996: 'GetVersionExA': was declared deprecated [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_glimp.cpp(1111,7): warning C4996: 'GetVersionExA': was declared deprecated [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
- [1x] C4244
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.h(426,12): warning C4244: 'initializing': conversion from '__int64' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
- [1x] C5033
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(544,6): warning C5033: 'register' is no longer a supported storage class [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]

## windows-latest-x64-release

status: failure

errors: 24
warnings: 310 in 14 kinds

### errors

D:\a\RTCW-SP\RTCW-SP\src\tools\bspc\navmesh_builder.cpp(84,2): error C2143: syntax error: missing ';' before '}' [D:\a\RTCW-SP\RTCW-SP\build\tools\bspc\bspc.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx.cpp(1,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\fx\FxWolf.h(9,10): error C1083: Cannot open include file: 'cg_local.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_local.h(42,10): error C1083: Cannot open include file: 'tr_types.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_flame.cpp(37,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_entities.cpp(31,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_marks.cpp(30,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_particles.cpp(30,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_trails.cpp(2,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\ui\ui_shared.h(37,10): error C1083: Cannot open include file: '../../main/ui/menudef.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(144,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(144,13): error C2146: syntax error: missing ';' before identifier 'byte' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(429,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(429,13): error C2146: syntax error: missing ';' before identifier 'drawVert_t' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(374,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(374,13): error C2146: syntax error: missing ';' before identifier 'drawVert_t' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(532,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(532,13): error C2146: syntax error: missing ';' before identifier 'drawVert_t' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(588,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(588,13): error C2146: syntax error: missing ';' before identifier 'drawVert_t' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade.cpp(434,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade.cpp(434,13): error C2144: syntax error: 'float' should be preceded by ';' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shader.cpp(78,18): error C2065: 'PATH_SEP': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\ui\ui_shared.h(37,10): error C1083: Cannot open include file: '../../main/ui/menudef.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]

### failure context


### warning kinds

- [152x] C4267
  - D:\a\RTCW-SP\RTCW-SP\src\splines\q_parse.cpp(339,13): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\q_shared.cpp(124,23): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.h(181,15): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.h(253,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.h(267,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.h(281,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.h(310,18): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.h(406,15): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.h(443,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(105,22): warning C4267: 'argument': conversion from 'size_t' to 'GLsizei', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.cpp(236,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_char.cpp(197,87): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_char.cpp(289,78): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_char.cpp(528,82): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(484,23): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(517,23): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(707,64): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(1020,64): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(1046,72): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(1231,116): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(1436,50): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(1567,94): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(1828,71): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(1840,73): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(1869,120): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2030,74): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2215,19): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2242,18): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2411,31): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2415,31): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2419,31): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2423,31): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2427,31): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2431,31): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2435,31): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2439,31): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2593,42): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2597,42): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2601,42): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2605,42): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2609,42): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2613,42): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2617,42): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2621,42): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_chat.cpp(2653,15): warning C4267: 'return': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_weight.cpp(363,97): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_libvar.cpp(88,70): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_libvar.cpp(193,50): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_libvar.cpp(244,50): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(675,85): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(722,26): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(737,26): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(751,26): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(1193,79): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(1300,43): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(1427,82): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_script.cpp(830,15): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_script.cpp(1291,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_struct.cpp(367,12): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(470,30): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(1298,42): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(1326,42): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(1420,42): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(1448,42): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(87,29): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(879,13): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(1008,21): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\extractfuncs.cpp(378,109): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(766,85): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(813,25): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(828,25): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(842,25): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(1284,79): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(1391,43): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(1518,82): warning C4267: 'argument': conversion from 'size_t' to 'unsigned long', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_script.cpp(810,15): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_script.cpp(1271,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\ai_debug.cpp(139,50): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\ai_script.cpp(408,58): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\ai_script.cpp(409,60): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\ai_script.cpp(476,97): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\ai_script.cpp(477,99): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(470,30): warning C4267: '+=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(1298,42): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(1326,42): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(1420,42): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_animation.cpp(1448,42): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_cmds.cpp(71,13): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_cmds.cpp(130,16): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_main.cpp(1900,31): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(1327,76): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(1366,26): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(2631,65): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(2632,67): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(2634,53): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(2635,55): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_save.cpp(329,32): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_save.cpp(377,34): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_save.cpp(398,32): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_save.cpp(410,34): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_save.cpp(1233,12): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_save.cpp(1238,39): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_save.cpp(1260,12): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_save.cpp(1269,39): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_script.cpp(385,59): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_script.cpp(386,60): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_script.cpp(446,98): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_script.cpp(447,99): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_script_actions.cpp(1003,51): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_script_actions.cpp(1004,51): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_spawn.cpp(749,23): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_spawn.cpp(890,12): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_svcmds.cpp(145,60): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_team.cpp(803,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(87,29): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(879,13): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(1008,21): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(147,5): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(155,18): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(162,2): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(170,5): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(178,5): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(186,3): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(195,5): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(202,6): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(319,19): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(2090,38): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(2104,38): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_image.cpp(1385,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_image.cpp(1395,16): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_model.cpp(831,13): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_model.cpp(1045,13): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade_calc.cpp(350,14): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(147,5): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(155,18): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(162,2): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(170,5): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(178,5): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(186,3): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(195,5): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(202,6): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(319,19): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(87,29): warning C4267: 'argument': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(879,13): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\qcommon\q_shared.cpp(1008,21): warning C4267: '=': conversion from 'size_t' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
- [73x] C4458
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_vector.h(229,41): warning C4458: declaration of 'x' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_vector.h(229,56): warning C4458: declaration of 'y' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_vector.h(229,71): warning C4458: declaration of 'z' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_angles.h(121,34): warning C4458: declaration of 'pitch' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_angles.h(121,47): warning C4458: declaration of 'yaw' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_angles.h(121,58): warning C4458: declaration of 'roll' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_quaternion.h(105,32): warning C4458: declaration of 'x' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_quaternion.h(105,41): warning C4458: declaration of 'y' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_quaternion.h(105,50): warning C4458: declaration of 'z' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_quaternion.h(105,59): warning C4458: declaration of 'w' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.h(275,37): warning C4458: declaration of 'time' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.h(284,37): warning C4458: declaration of 'time' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.h(452,25): warning C4458: declaration of 'editMode' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.h(545,25): warning C4458: declaration of 'editMode' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.h(613,25): warning C4458: declaration of 'editMode' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.h(690,25): warning C4458: declaration of 'editMode' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.h(954,41): warning C4458: declaration of 'name' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.h(1009,17): warning C4458: declaration of 'editMode' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(241,31): warning C4458: declaration of 'editMode' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(487,96): warning C4458: declaration of 'fov' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(632,9): warning C4458: declaration of 'startTime' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(667,9): warning C4458: declaration of 'startTime' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(1319,42): warning C4458: declaration of 'name' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
- [37x] C4459
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\ai_system.cpp(296,91): warning C4459: declaration of 'weaponInfo' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_main.cpp(1362,27): warning C4459: declaration of 'level' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(1588,9): warning C4459: declaration of 'forward' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(1867,9): warning C4459: declaration of 'forward' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(1867,18): warning C4459: declaration of 'right' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(1867,25): warning C4459: declaration of 'up' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(2649,20): warning C4459: declaration of 'right' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1336,9): warning C4459: declaration of 'forward' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1336,18): warning C4459: declaration of 'right' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1336,25): warning C4459: declaration of 'up' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1549,11): warning C4459: declaration of 'right' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1597,58): warning C4459: declaration of 'forward' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1597,74): warning C4459: declaration of 'right' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1597,88): warning C4459: declaration of 'up' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1642,57): warning C4459: declaration of 'forward' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1642,73): warning C4459: declaration of 'right' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1642,87): warning C4459: declaration of 'up' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1866,11): warning C4459: declaration of 'forward' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(143,15): warning C4459: declaration of 'oldFrame' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(144,9): warning C4459: declaration of 'frameSize' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(241,14): warning C4459: declaration of 'lodScale' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(416,87): warning C4459: declaration of 'tr' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(428,102): warning C4459: declaration of 'tr' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(434,106): warning C4459: declaration of 'tr' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(440,109): warning C4459: declaration of 'tr' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(446,105): warning C4459: declaration of 'tr' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(464,40): warning C4459: declaration of 'angles' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(477,61): warning C4459: declaration of 'vec' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(527,121): warning C4459: declaration of 't' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(581,52): warning C4459: declaration of 't' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(601,86): warning C4459: declaration of 't' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(616,111): warning C4459: declaration of 't' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(1000,11): warning C4459: declaration of 'boneRefs' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_cmds.cpp(260,16): warning C4459: declaration of 'colorWhite' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_cmds.cpp(324,16): warning C4459: declaration of 'colorWhite' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shader.cpp(2830,15): warning C4459: declaration of 'shader' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shadows.cpp(55,40): warning C4459: declaration of 'facing' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
- [15x] C4456
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(444,16): warning C4456: declaration of 'token' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(937,16): warning C4456: declaration of 'token' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(1047,16): warning C4456: declaration of 'token' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(1397,10): warning C4456: declaration of 'percent' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\fsm\ai_boss_heinrich.cpp(535,7): warning C4456: declaration of 'rnd' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\fsm\ai_behavior_pursuit.cpp(89,10): warning C4456: declaration of 'dir' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\fsm\ai_behavior_cover.cpp(644,10): warning C4456: declaration of 'vec' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\fsm\ai_behavior_cover.cpp(645,9): warning C4456: declaration of 'dist' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\fsm\ai_behavior_grenades.cpp(99,12): warning C4456: declaration of 'vec' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\fsm\ai_behavior_grenades.cpp(460,11): warning C4456: declaration of 'dir' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\fsm\ai_behavior_grenades.cpp(883,10): warning C4456: declaration of 'vec' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\fsm\ai_behavior_grenades.cpp(883,15): warning C4456: declaration of 'dir' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_combat.cpp(545,14): warning C4456: declaration of 'i' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(399,12): warning C4456: declaration of 'dir' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_marks.cpp(681,10): warning C4456: declaration of 'texCoordScale' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
- [8x] C4389
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_char.cpp(240,37): warning C4389: '==': signed/unsigned mismatch [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_backend.cpp(930,23): warning C4389: '==': signed/unsigned mismatch [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade.cpp(96,26): warning C4389: '==': signed/unsigned mismatch [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade.cpp(96,59): warning C4389: '==': signed/unsigned mismatch [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade.cpp(122,19): warning C4389: '==': signed/unsigned mismatch [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade.cpp(122,52): warning C4389: '==': signed/unsigned mismatch [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade_calc.cpp(565,38): warning C4389: '==': signed/unsigned mismatch [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade_calc.cpp(566,42): warning C4389: '==': signed/unsigned mismatch [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
- [7x] C4244
  - D:\a\RTCW-SP\RTCW-SP\src\splines\util_str.h(426,12): warning C4244: 'initializing': conversion from '__int64' to 'int', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(138,15): warning C4244: '=': conversion from 'int' to 'char', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(149,15): warning C4244: '=': conversion from 'int' to 'char', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(1840,21): warning C4244: '=': conversion from 'long double' to 'double', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(1845,22): warning C4244: '=': conversion from 'long double' to 'double', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_script.cpp(443,8): warning C4244: '=': conversion from 'int' to 'char', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_script.cpp(527,25): warning C4244: '=': conversion from 'int' to 'char', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
- [4x] C4701
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\extractfuncs.cpp(228,1): warning C4701: potentially uninitialized local variable 'newbuf' used [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\extractfuncs.cpp(491,1): warning C4701: potentially uninitialized local variable 'lasttoken' used [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(750,1): warning C4701: potentially uninitialized local variable 'c' used [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(750,1): warning C4701: potentially uninitialized local variable 'c' used [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
- [3x] C4457
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(551,11): warning C4457: declaration of 'time' hides function parameter [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(555,11): warning C4457: declaration of 'time' hides function parameter [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_cmds.cpp(1967,14): warning C4457: declaration of 'ent' hides function parameter [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
- [3x] C4100
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(229,35): warning C4100: 'source': unreferenced parameter [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(252,37): warning C4100: 'source': unreferenced parameter [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(1514,36): warning C4100: 'source': unreferenced parameter [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
- [2x] C4706
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\extractfuncs.cpp(192,9): warning C4706: assignment used as a condition [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\extractfuncs.cpp(251,9): warning C4706: assignment used as a condition [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
- [2x] C4702
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(2788,1): warning C4702: unreachable code [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(2789,1): warning C4702: unreachable code [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
- [2x] C4996
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_gamma.cpp(153,2): warning C4996: 'GetVersionExA': was declared deprecated [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_glimp.cpp(1111,7): warning C4996: 'GetVersionExA': was declared deprecated [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
- [1x] C5033
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(544,6): warning C5033: 'register' is no longer a supported storage class [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
- [1x] C4703
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\extractfuncs.cpp(228,1): warning C4703: potentially uninitialized local pointer variable 'newbuf' used [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]

## windows-latest-x86-debug

status: failure

errors: 24
warnings: 3 in 2 kinds

### errors

D:\a\RTCW-SP\RTCW-SP\src\tools\bspc\navmesh_builder.cpp(84,2): error C2143: syntax error: missing ';' before '}' [D:\a\RTCW-SP\RTCW-SP\build\tools\bspc\bspc.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx.cpp(1,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\fx\FxWolf.h(9,10): error C1083: Cannot open include file: 'cg_local.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_local.h(42,10): error C1083: Cannot open include file: 'tr_types.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_flame.cpp(37,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_entities.cpp(31,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_marks.cpp(30,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_particles.cpp(30,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_trails.cpp(2,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\ui\ui_shared.h(37,10): error C1083: Cannot open include file: '../../main/ui/menudef.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(144,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(144,13): error C2146: syntax error: missing ';' before identifier 'byte' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(429,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(429,13): error C2146: syntax error: missing ';' before identifier 'drawVert_t' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(374,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(374,13): error C2146: syntax error: missing ';' before identifier 'drawVert_t' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(532,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(532,13): error C2146: syntax error: missing ';' before identifier 'drawVert_t' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(588,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(588,13): error C2146: syntax error: missing ';' before identifier 'drawVert_t' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade.cpp(434,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade.cpp(434,13): error C2144: syntax error: 'float' should be preceded by ';' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shader.cpp(78,18): error C2065: 'PATH_SEP': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\ui\ui_shared.h(37,10): error C1083: Cannot open include file: '../../main/ui/menudef.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]

### failure context


### warning kinds

- [2x] C4996
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_gamma.cpp(153,2): warning C4996: 'GetVersionExA': was declared deprecated [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_glimp.cpp(1111,7): warning C4996: 'GetVersionExA': was declared deprecated [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
- [1x] C5033
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(544,6): warning C5033: 'register' is no longer a supported storage class [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]

## windows-latest-x86-release

status: failure

errors: 24
warnings: 157 in 13 kinds

### errors

D:\a\RTCW-SP\RTCW-SP\src\tools\bspc\navmesh_builder.cpp(84,2): error C2143: syntax error: missing ';' before '}' [D:\a\RTCW-SP\RTCW-SP\build\tools\bspc\bspc.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx.cpp(1,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\fx\FxWolf.h(9,10): error C1083: Cannot open include file: 'cg_local.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_local.h(42,10): error C1083: Cannot open include file: 'tr_types.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_flame.cpp(37,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_entities.cpp(31,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_marks.cpp(30,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_particles.cpp(30,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\cgame\cg_fx_trails.cpp(2,10): error C1083: Cannot open include file: 'FxScheduler.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\ui\ui_shared.h(37,10): error C1083: Cannot open include file: '../../main/ui/menudef.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\cgame.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(144,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(144,13): error C2146: syntax error: missing ';' before identifier 'byte' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(429,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_bsp.cpp(429,13): error C2146: syntax error: missing ';' before identifier 'drawVert_t' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(374,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(374,13): error C2146: syntax error: missing ';' before identifier 'drawVert_t' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(532,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(532,13): error C2146: syntax error: missing ';' before identifier 'drawVert_t' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(588,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(588,13): error C2146: syntax error: missing ';' before identifier 'drawVert_t' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade.cpp(434,2): error C2065: 'MAC_STATIC': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade.cpp(434,13): error C2144: syntax error: 'float' should be preceded by ';' [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shader.cpp(78,18): error C2065: 'PATH_SEP': undeclared identifier [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
D:\a\RTCW-SP\RTCW-SP\src\games\ui\ui_shared.h(37,10): error C1083: Cannot open include file: '../../main/ui/menudef.h': No such file or directory [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]

### failure context


### warning kinds

- [73x] C4458
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_vector.h(229,41): warning C4458: declaration of 'x' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_vector.h(229,56): warning C4458: declaration of 'y' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_vector.h(229,71): warning C4458: declaration of 'z' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_angles.h(121,34): warning C4458: declaration of 'pitch' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_angles.h(121,47): warning C4458: declaration of 'yaw' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_angles.h(121,58): warning C4458: declaration of 'roll' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_quaternion.h(105,32): warning C4458: declaration of 'x' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_quaternion.h(105,41): warning C4458: declaration of 'y' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_quaternion.h(105,50): warning C4458: declaration of 'z' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\math_quaternion.h(105,59): warning C4458: declaration of 'w' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.h(275,37): warning C4458: declaration of 'time' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.h(284,37): warning C4458: declaration of 'time' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.h(452,25): warning C4458: declaration of 'editMode' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.h(545,25): warning C4458: declaration of 'editMode' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.h(613,25): warning C4458: declaration of 'editMode' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.h(690,25): warning C4458: declaration of 'editMode' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.h(954,41): warning C4458: declaration of 'name' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.h(1009,17): warning C4458: declaration of 'editMode' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(241,31): warning C4458: declaration of 'editMode' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(487,96): warning C4458: declaration of 'fov' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(632,9): warning C4458: declaration of 'startTime' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(667,9): warning C4458: declaration of 'startTime' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(1319,42): warning C4458: declaration of 'name' hides class member [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
- [37x] C4459
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\ai_system.cpp(296,91): warning C4459: declaration of 'weaponInfo' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_main.cpp(1362,27): warning C4459: declaration of 'level' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(1588,9): warning C4459: declaration of 'forward' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(1867,9): warning C4459: declaration of 'forward' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(1867,18): warning C4459: declaration of 'right' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(1867,25): warning C4459: declaration of 'up' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_misc.cpp(2649,20): warning C4459: declaration of 'right' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1336,9): warning C4459: declaration of 'forward' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1336,18): warning C4459: declaration of 'right' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1336,25): warning C4459: declaration of 'up' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1549,11): warning C4459: declaration of 'right' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1597,58): warning C4459: declaration of 'forward' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1597,74): warning C4459: declaration of 'right' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1597,88): warning C4459: declaration of 'up' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1642,57): warning C4459: declaration of 'forward' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1642,73): warning C4459: declaration of 'right' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1642,87): warning C4459: declaration of 'up' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_weapon.cpp(1866,11): warning C4459: declaration of 'forward' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(143,15): warning C4459: declaration of 'oldFrame' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(144,9): warning C4459: declaration of 'frameSize' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(241,14): warning C4459: declaration of 'lodScale' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(416,87): warning C4459: declaration of 'tr' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(428,102): warning C4459: declaration of 'tr' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(434,106): warning C4459: declaration of 'tr' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(440,109): warning C4459: declaration of 'tr' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(446,105): warning C4459: declaration of 'tr' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(464,40): warning C4459: declaration of 'angles' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(477,61): warning C4459: declaration of 'vec' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(527,121): warning C4459: declaration of 't' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(581,52): warning C4459: declaration of 't' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(601,86): warning C4459: declaration of 't' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(616,111): warning C4459: declaration of 't' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_animation.cpp(1000,11): warning C4459: declaration of 'boneRefs' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_cmds.cpp(260,16): warning C4459: declaration of 'colorWhite' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_cmds.cpp(324,16): warning C4459: declaration of 'colorWhite' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shader.cpp(2830,15): warning C4459: declaration of 'shader' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shadows.cpp(55,40): warning C4459: declaration of 'facing' hides global declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
- [15x] C4456
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(444,16): warning C4456: declaration of 'token' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(937,16): warning C4456: declaration of 'token' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(1047,16): warning C4456: declaration of 'token' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(1397,10): warning C4456: declaration of 'percent' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\fsm\ai_boss_heinrich.cpp(535,7): warning C4456: declaration of 'rnd' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\fsm\ai_behavior_pursuit.cpp(89,10): warning C4456: declaration of 'dir' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\fsm\ai_behavior_cover.cpp(644,10): warning C4456: declaration of 'vec' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\fsm\ai_behavior_cover.cpp(645,9): warning C4456: declaration of 'dist' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\fsm\ai_behavior_grenades.cpp(99,12): warning C4456: declaration of 'vec' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\fsm\ai_behavior_grenades.cpp(460,11): warning C4456: declaration of 'dir' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\fsm\ai_behavior_grenades.cpp(883,10): warning C4456: declaration of 'vec' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\ai\fsm\ai_behavior_grenades.cpp(883,15): warning C4456: declaration of 'dir' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_combat.cpp(545,14): warning C4456: declaration of 'i' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_curve.cpp(399,12): warning C4456: declaration of 'dir' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_marks.cpp(681,10): warning C4456: declaration of 'texCoordScale' hides previous local declaration [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
- [8x] C4389
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\be_ai_char.cpp(240,37): warning C4389: '==': signed/unsigned mismatch [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_backend.cpp(930,23): warning C4389: '==': signed/unsigned mismatch [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade.cpp(96,26): warning C4389: '==': signed/unsigned mismatch [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade.cpp(96,59): warning C4389: '==': signed/unsigned mismatch [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade.cpp(122,19): warning C4389: '==': signed/unsigned mismatch [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade.cpp(122,52): warning C4389: '==': signed/unsigned mismatch [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade_calc.cpp(565,38): warning C4389: '==': signed/unsigned mismatch [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shade_calc.cpp(566,42): warning C4389: '==': signed/unsigned mismatch [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
- [6x] C4244
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(138,15): warning C4244: '=': conversion from 'int' to 'char', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(149,15): warning C4244: '=': conversion from 'int' to 'char', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(1840,21): warning C4244: '=': conversion from 'long double' to 'double', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(1845,22): warning C4244: '=': conversion from 'long double' to 'double', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_script.cpp(443,8): warning C4244: '=': conversion from 'int' to 'char', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_script.cpp(527,25): warning C4244: '=': conversion from 'int' to 'char', possible loss of data [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
- [4x] C4701
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\extractfuncs.cpp(228,1): warning C4701: potentially uninitialized local variable 'newbuf' used [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\extractfuncs.cpp(491,1): warning C4701: potentially uninitialized local variable 'lasttoken' used [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(750,1): warning C4701: potentially uninitialized local variable 'c' used [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\bg_lib.cpp(750,1): warning C4701: potentially uninitialized local variable 'c' used [D:\a\RTCW-SP\RTCW-SP\build\ui.vcxproj]
- [3x] C4457
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(551,11): warning C4457: declaration of 'time' hides function parameter [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp(555,11): warning C4457: declaration of 'time' hides function parameter [D:\a\RTCW-SP\RTCW-SP\build\Splines.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\games\game\g_cmds.cpp(1967,14): warning C4457: declaration of 'ent' hides function parameter [D:\a\RTCW-SP\RTCW-SP\build\game.vcxproj]
- [3x] C4100
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(229,35): warning C4100: 'source': unreferenced parameter [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(252,37): warning C4100: 'source': unreferenced parameter [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(1514,36): warning C4100: 'source': unreferenced parameter [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
- [2x] C4706
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\extractfuncs.cpp(192,9): warning C4706: assignment used as a condition [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\extractfuncs.cpp(251,9): warning C4706: assignment used as a condition [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
- [2x] C4702
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(2788,1): warning C4702: unreachable code [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\l_precomp.cpp(2789,1): warning C4702: unreachable code [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]
- [2x] C4996
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_gamma.cpp(153,2): warning C4996: 'GetVersionExA': was declared deprecated [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
  - D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_glimp.cpp(1111,7): warning C4996: 'GetVersionExA': was declared deprecated [D:\a\RTCW-SP\RTCW-SP\build\renderer.vcxproj]
- [1x] C5033
  - D:\a\RTCW-SP\RTCW-SP\src\games\botlib\l_precomp.cpp(544,6): warning C5033: 'register' is no longer a supported storage class [D:\a\RTCW-SP\RTCW-SP\build\botlib.vcxproj]
- [1x] C4703
  - D:\a\RTCW-SP\RTCW-SP\src\tools\extractfuncs\extractfuncs.cpp(228,1): warning C4703: potentially uninitialized local pointer variable 'newbuf' used [D:\a\RTCW-SP\RTCW-SP\build\extractfuncs.vcxproj]

