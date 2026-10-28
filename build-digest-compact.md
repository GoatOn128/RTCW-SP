# Compact build digest

commit: 0e47993600b9

- ubuntu-latest-x64-debug-: failure
- ubuntu-latest-x64-release-: failure
- ubuntu-latest-x64-release-game: failure
- ubuntu-latest-x86-debug-: failure
- ubuntu-latest-x86-release-: failure
- uncrustify: success
- windows-latest-x64-debug-: cancelled
- windows-latest-x64-release-: cancelled
- windows-latest-x64-release-cgame: failure
- windows-latest-x64-release-game: cancelled
- windows-latest-x64-release-ui: failure
- windows-latest-x86-debug-: failure
- windows-latest-x86-release-: cancelled

## ubuntu-latest-x64-debug-

status: failure

errors: 290
warnings: 7271 in 25 kinds

### errors

src/client/cl_cin.cpp:1105:39: error: cast from pointer to smaller type 'unsigned int' loses information
src/client/cl_cin.cpp:1105:68: error: cast from pointer to smaller type 'unsigned int' loses information
src/client/cl_cin.cpp:1106:41: error: cast from pointer to smaller type 'unsigned int' loses information
src/client/cl_cin.cpp:1106:110: error: cast from pointer to smaller type 'unsigned int' loses information
scons: *** [build/linux-x64-debug/client/obj/client/cl_cin.cpp.o] Error 1
src/qcommon/cm_polylib.cpp:280:15: error: unknown type name 'intptr_t'; did you mean '__intptr_t'?
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_polylib.cpp.o] Error 1
src/qcommon/common.cpp:1098:29: error: cast from pointer to smaller type 'int' loses information
scons: *** [build/linux-x64-debug/client/obj/qcommon/common.cpp.o] Error 1
src/qcommon/msg.cpp:578:38: error: constant expression evaluates to 4294967295 which cannot be narrowed to type 'int' [-Wc++11-narrowing]
src/qcommon/msg.cpp:948:4: error: cast from pointer to smaller type 'int' loses information
src/qcommon/msg.cpp:949:4: error: cast from pointer to smaller type 'int' loses information
src/qcommon/msg.cpp:950:4: error: cast from pointer to smaller type 'int' loses information
src/qcommon/msg.cpp:951:4: error: cast from pointer to smaller type 'int' loses information
src/qcommon/msg.cpp:952:4: error: cast from pointer to smaller type 'int' loses information
src/qcommon/msg.cpp:953:4: error: cast from pointer to smaller type 'int' loses information
src/qcommon/msg.cpp:954:4: error: cast from pointer to smaller type 'int' loses information
src/qcommon/msg.cpp:955:4: error: cast from pointer to smaller type 'int' loses information
src/qcommon/msg.cpp:956:4: error: cast from pointer to smaller type 'int' loses information
src/qcommon/msg.cpp:957:4: error: cast from pointer to smaller type 'int' loses information
src/qcommon/msg.cpp:958:4: error: cast from pointer to smaller type 'int' loses information
src/qcommon/msg.cpp:959:4: error: cast from pointer to smaller type 'int' loses information
src/qcommon/msg.cpp:960:4: error: cast from pointer to smaller type 'int' loses information
src/qcommon/msg.cpp:961:4: error: cast from pointer to smaller type 'int' loses information
src/qcommon/msg.cpp:962:4: error: cast from pointer to smaller type 'int' loses information
src/qcommon/msg.cpp:963:4: error: cast from pointer to smaller type 'int' loses information
src/qcommon/msg.cpp:964:4: error: cast from pointer to smaller type 'int' loses information
src/qcommon/msg.cpp:965:4: error: cast from pointer to smaller type 'int' loses information
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build/linux-x64-debug/client/obj/qcommon/msg.cpp.o] Error 1
src/renderer/tr_bsp.cpp:379:14: error: cast from pointer to smaller type 'int' loses information
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_bsp.cpp.o] Error 1
src/renderer/tr_image.cpp:1584:36: error: member reference type 'jpgOutputBuffer_t' is not a pointer; did you mean to use '.'?
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_image.cpp.o] Error 1
src/renderer/tr_init.cpp:1175:7: error: cast from pointer to smaller type 'int' loses information
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_init.cpp.o] Error 1
src/renderer/tr_model.cpp:764:13: error: assigning to 'byte *' (aka 'unsigned char *') from incompatible type 'void *'
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_model.cpp.o] Error 1
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/stl_algobase.h:234:9: error: expected unqualified-id
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/stl_algobase.h:234:9: error: expected ')'
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/stl_algobase.h:234:5: error: expected ')'
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/stl_algobase.h:258:9: error: expected unqualified-id
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/stl_algobase.h:258:9: error: expected ')'
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/stl_algobase.h:258:5: error: expected ')'
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/stl_algobase.h:282:41: error: too many arguments provided to function-like macro invocation
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/stl_algobase.h:285:7: error: expected expression
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/stl_algobase.h:288:6: error: expected ';' after top level declarator
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/stl_algobase.h:304:41: error: too many arguments provided to function-like macro invocation
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/stl_algobase.h:1394:34: error: expected unqualified-id
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/stl_vector.h:2207:41: error: no member named 'max' in namespace 'std'; did you mean 'fmax'?
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/stl_vector.h:2230:15: error: use of variable template 'std::min' requires template arguments
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/stl_bvector.h:1740:40: error: expected unqualified-id
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/basic_string.h:1186:15: error: use of variable template 'std::min' requires template arguments
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/basic_string.h:3465:31: error: expected unqualified-id
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/basic_string.h:3561:31: error: expected unqualified-id
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_md5.cpp.o] Error 1
src/renderer/tr_shader.cpp:1278:27: error: constant expression evaluates to 2147483648 which cannot be narrowed to type 'int' [-Wc++11-narrowing]
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_shader.cpp.o] Error 1
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/algorithmfwd.h:414:9: error: expected unqualified-id
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/algorithmfwd.h:414:9: error: expected ')'
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/algorithmfwd.h:414:5: error: expected ')'
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/algorithmfwd.h:419:33: error: too many arguments provided to function-like macro invocation
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/algorithmfwd.h:419:5: error: declaration of reference variable 'max' requires an initializer
src/sys/unix/unix_main.cpp:1:1: error: unknown type name 'Title'
src/sys/unix/unix_main.cpp:1:7: error: expected unqualified-id
/usr/include/x86_64-linux-gnu/bits/types/sig_atomic_t.h:8:9: error: unknown type name '__sig_atomic_t'
/usr/include/x86_64-linux-gnu/bits/types/time_t.h:10:9: error: unknown type name '__time_t'
/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h:16:3: error: unknown type name '__time_t'
/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h:21:3: error: unknown type name '__syscall_slong_t'
/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h:58:6: error: unknown type name '__pid_t'
/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h:59:6: error: unknown type name '__uid_t'
/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h:73:6: error: unknown type name '__pid_t'
/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h:74:6: error: unknown type name '__uid_t'
/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h:81:6: error: unknown type name '__pid_t'
/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h:82:6: error: unknown type name '__uid_t'
/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h:84:6: error: unknown type name '__clock_t'
/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h:85:6: error: unknown type name '__clock_t'
/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h:103:3: error: unknown type name '__uint32_t'; did you mean '__uint128_t'?
/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h:34:2: error: unknown type name '__pid_t'
/usr/include/signal.h:112:18: error: unknown type name '__pid_t'
/usr/include/signal.h:119:20: error: unknown type name '__pid_t'
/usr/include/signal.h:292:22: error: unknown type name '__pid_t'
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_vfx.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/sys/unix/unix_main.cpp.o] Error 1
src/sys/unix/linux_glimp.cpp:814:8: error: assigning to 'rserr_t' from incompatible type 'int'
src/sys/unix/linux_glimp.cpp:1104:13: error: assigning to 'const char *' from 'const GLubyte *' (aka 'const unsigned char *') converts between pointers to integer types where one is of the unique plain 'char' type and the other is not
src/sys/unix/linux_glimp.cpp:1397:2: error: no matching function for call to 'Q_strncpyz'
src/sys/unix/linux_glimp.cpp:1398:2: error: no matching function for call to 'Q_strncpyz'
src/sys/unix/linux_glimp.cpp:1402:2: error: no matching function for call to 'Q_strncpyz'
src/sys/unix/linux_glimp.cpp:1403:2: error: no matching function for call to 'Q_strncpyz'
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_glimp.cpp.o] Error 1
src/sys/unix/linux_qgl.cpp:2726:44: error: assigning to 'void (*)(GLenum, GLfloat)' (aka 'void (*)(unsigned int, float)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2727:48: error: assigning to 'void (*)(GLenum, GLclampf)' (aka 'void (*)(unsigned int, float)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2728:58: error: assigning to 'GLboolean (*)(GLsizei, const GLuint *, GLboolean *)' (aka 'unsigned char (*)(int, const unsigned int *, unsigned char *)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2729:51: error: assigning to 'void (*)(GLint)' (aka 'void (*)(int)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2730:44: error: assigning to 'void (*)(GLenum)' (aka 'void (*)(unsigned int)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2731:50: error: assigning to 'void (*)(GLenum, GLuint)' (aka 'void (*)(unsigned int, unsigned int)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2732:45: error: assigning to 'void (*)(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *)' (aka 'void (*)(int, int, float, float, float, float, const unsigned char *)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2733:48: error: assigning to 'void (*)(GLenum, GLenum)' (aka 'void (*)(unsigned int, unsigned int)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2734:47: error: assigning to 'void (*)(GLuint)' (aka 'void (*)(unsigned int)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2735:48: error: assigning to 'void (*)(GLsizei, GLenum, const GLvoid *)' (aka 'void (*)(int, unsigned int, const void *)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2736:44: error: assigning to 'void (*)(GLbitfield)' (aka 'void (*)(unsigned int)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2737:49: error: assigning to 'void (*)(GLfloat, GLfloat, GLfloat, GLfloat)' (aka 'void (*)(float, float, float, float)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2738:49: error: assigning to 'void (*)(GLclampf, GLclampf, GLclampf, GLclampf)' (aka 'void (*)(float, float, float, float)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2739:49: error: assigning to 'void (*)(GLclampd)' (aka 'void (*)(double)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2740:49: error: assigning to 'void (*)(GLfloat)' (aka 'void (*)(float)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2741:51: error: assigning to 'void (*)(GLint)' (aka 'void (*)(int)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2742:48: error: assigning to 'void (*)(GLenum, const GLdouble *)' (aka 'void (*)(unsigned int, const double *)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2743:46: error: assigning to 'void (*)(GLbyte, GLbyte, GLbyte)' (aka 'void (*)(signed char, signed char, signed char)') from 'void *' converts between void pointer and function pointer
src/sys/unix/linux_qgl.cpp:2744:47: error: assigning to 'void (*)(const GLbyte *)' (aka 'void (*)(const signed char *)') from 'void *' converts between void pointer and function pointer
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_qgl.cpp.o] Error 1
src/games/botlib/be_ai_goal.cpp:144:11: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_goal.cpp:145:12: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_goal.cpp:146:17: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_goal.cpp:147:11: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_goal.cpp:148:12: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_goal.cpp:149:18: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_goal.cpp:150:11: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_goal.cpp:151:11: error: cast from pointer to smaller type 'int' loses information
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_goal.cpp.o] Error 1
src/games/botlib/be_ai_weap.cpp:63:13: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:64:11: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:65:12: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:66:12: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:67:18: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:68:12: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:69:17: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:70:21: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:71:14: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:72:14: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:73:12: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:74:19: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:75:13: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:76:13: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:77:18: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:78:21: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:79:17: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:80:16: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:81:15: error: cast from pointer to smaller type 'int' loses information
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_weap.cpp.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_nav_interface.cpp.o] Error 1
src/games/game/bg_misc.cpp:3520:21: error: incompatible integer to pointer conversion assigning to 'gitem_t *' (aka 'gitem_s *') from 'weapon_t'
scons: *** [build/linux-x64-debug/game/obj/games/game/bg_misc.cpp.o] Error 1
src/games/game/g_save.cpp:147:3: error: cast from pointer to smaller type 'int' loses information
src/games/game/g_save.cpp:148:3: error: cast from pointer to smaller type 'int' loses information
src/games/game/g_save.cpp:149:3: error: cast from pointer to smaller type 'int' loses information
src/games/game/g_save.cpp:150:3: error: cast from pointer to smaller type 'int' loses information
src/games/game/g_save.cpp:151:3: error: cast from pointer to smaller type 'int' loses information
src/games/game/g_save.cpp:152:3: error: cast from pointer to smaller type 'int' loses information
src/games/game/g_save.cpp:153:3: error: cast from pointer to smaller type 'int' loses information
src/games/game/g_save.cpp:154:3: error: cast from pointer to smaller type 'int' loses information
src/games/game/g_save.cpp:189:3: error: cast from pointer to smaller type 'int' loses information
src/games/game/g_save.cpp:190:3: error: cast from pointer to smaller type 'int' loses information
src/games/game/g_save.cpp:191:3: error: cast from pointer to smaller type 'int' loses information
src/games/game/g_save.cpp:192:3: error: cast from pointer to smaller type 'int' loses information
src/games/game/g_funcs.h:524:20: error: address of overloaded function 'G_Find' does not match required type 'unsigned char'
scons: *** [build/linux-x64-debug/game/obj/games/game/g_save.cpp.o] Error 1
src/games/game/ai/ai_events.cpp:370:3: error: no matching function for call to 'AICast_ScriptEvent'
scons: *** [build/linux-x64-debug/game/obj/games/game/ai/ai_events.cpp.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/game/bg_misc.cpp.o] Error 1
src/games/cgame/../ui/ui_shared.h:50:1: error: expected unqualified-id
src/games/cgame/../ui/ui_shared.h:121:3: error: a type specifier is required for all declarations
src/games/cgame/../ui/ui_shared.h:140:2: error: unknown type name 't'
src/games/cgame/../ui/ui_shared.h:140:11: error: expected ';' at end of declaration list
src/games/cgame/../ui/ui_shared.h:194:11: error: expected ';' at end of declaration list
src/games/cgame/../ui/ui_shared.h:302:2: error: unknown type name 'key'
src/games/cgame/../ui/ui_shared.h:302:8: error: expected ';' at end of declaration list
src/games/cgame/../ui/ui_shared.h:398:5: error: expected ')'
src/games/cgame/../ui/ui_shared.h:462:1: error: unknown type name 'q'
src/games/cgame/../ui/ui_shared.h:463:8: error: expected ';' after top level declarator
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_consolecmds.cpp.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_draw.cpp.o] Error 1
src/games/cgame/cg_event.cpp:561:16: error: cast from pointer to smaller type 'int' loses information
src/games/cgame/cg_event.cpp:562:20: error: cast from pointer to smaller type 'int' loses information
src/games/cgame/cg_event.cpp:563:20: error: cast from pointer to smaller type 'int' loses information
src/games/cgame/cg_event.cpp:564:19: error: cast from pointer to smaller type 'int' loses information
src/games/cgame/cg_event.cpp:565:20: error: cast from pointer to smaller type 'int' loses information
src/games/cgame/cg_event.cpp:566:19: error: cast from pointer to smaller type 'int' loses information
src/games/cgame/cg_event.cpp:567:20: error: cast from pointer to smaller type 'int' loses information
src/games/cgame/cg_ents.cpp:1708:19: error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
src/games/cgame/cg_ents.cpp:1708:63: error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
src/games/cgame/cg_ents.cpp:1708:109: error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_event.cpp.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_ents.cpp.o] Error 1
src/games/cgame/fx/FxScheduler.h:420:11: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/cg_fx_entities.cpp:467:31: error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
src/games/cgame/cg_fx_entities.cpp:467:82: error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
src/games/cgame/cg_fx_entities.cpp:467:135: error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
src/games/cgame/cg_fx_entities.cpp:467:198: error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
src/games/cgame/cg_fx_entities.cpp:467:250: error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
src/games/cgame/cg_fx_entities.cpp:467:302: error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_fx.cpp.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_fx_entities.cpp.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_fx_marks.cpp.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_fx_flame.cpp.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_info.cpp.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_main.cpp.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_fx_particles.cpp.o] Error 1
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/stl_deque.h:647:40: error: expected unqualified-id
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/deque.tcc:1126:17: error: expected unqualified-id
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/deque.tcc:1233:13: error: expected unqualified-id
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/deque.tcc:1362:40: error: expected unqualified-id
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/deque.tcc:1429:13: error: expected unqualified-id
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/deque.tcc:1468:33: error: expected unqualified-id
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/deque.tcc:1533:33: error: expected unqualified-id
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/algorithmfwd.h:419:5: error: redefinition of 'max' as different kind of symbol
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/algorithmfwd.h:427:9: error: expected unqualified-id
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/algorithmfwd.h:427:9: error: expected ')'
/usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/c++/15/bits/algorithmfwd.h:427:5: error: expected ')'
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_newDraw.cpp.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_fx_trails.cpp.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_servercmds.cpp.o] Error 1
src/games/cgame/fx/FxScheduler.cpp:272:9: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxScheduler.cpp:274:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxScheduler.cpp:276:17: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxScheduler.cpp:276:52: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxScheduler.cpp:278:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxScheduler.cpp:280:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxScheduler.cpp:282:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxScheduler.cpp:284:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxScheduler.cpp:286:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxScheduler.cpp:288:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxScheduler.cpp:290:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxScheduler.cpp:292:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxScheduler.cpp:292:58: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxScheduler.cpp:294:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxScheduler.cpp:296:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxScheduler.cpp:298:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxScheduler.cpp:300:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxScheduler.cpp:322:10: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/fx/FxPrimitives.cpp.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/fx/FxScheduler.cpp.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/fx/FxSystem.cpp.o] Error 1
src/games/ui/ui_shared.h:50:1: error: expected unqualified-id
src/games/ui/ui_shared.h:121:3: error: a type specifier is required for all declarations
src/games/ui/ui_shared.h:140:2: error: unknown type name 't'
src/games/ui/ui_shared.h:140:11: error: expected ';' at end of declaration list
src/games/ui/ui_shared.h:194:11: error: expected ';' at end of declaration list
src/games/ui/ui_shared.h:302:2: error: unknown type name 'key'
src/games/ui/ui_shared.h:302:8: error: expected ';' at end of declaration list
src/games/ui/ui_shared.h:398:5: error: expected ')'
src/games/ui/ui_shared.h:462:1: error: unknown type name 'q'
src/games/ui/ui_shared.h:463:8: error: expected ';' after top level declarator
src/games/ui/ui_shared.cpp:760:41: error: no member named 'cinematicName' in '(unnamed struct at src/games/ui/ui_shared.h:134:9)'
src/games/ui/ui_shared.cpp:1494:8: error: no member named 'feederAddItem' in 'displayContextDef_t'
src/games/ui/ui_shared.cpp:1681:50: error: no member named 'elementHeight' in 'listBoxDef_s'
src/games/ui/ui_shared.cpp:1887:60: error: no member named 'elementHeight' in 'listBoxDef_s'
src/games/ui/ui_shared.cpp:1916:50: error: expected expression
src/games/ui/ui_shared.cpp:1918:43: error: expected expression
src/games/ui/ui_shared.cpp:1928:50: error: expected expression
src/games/ui/ui_shared.cpp:1930:43: error: expected expression
src/games/ui/ui_shared.cpp:1964:42: error: expected expression
scons: *** [build/linux-x64-debug/cgame/obj/games/ui/ui_shared.cpp.o] Error 1
src/games/cgame/fx/FxTemplate.cpp:268:9: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxTemplate.cpp:270:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxTemplate.cpp:272:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxTemplate.cpp:274:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxTemplate.cpp:276:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxTemplate.cpp:646:9: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxTemplate.cpp:648:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxTemplate.cpp:650:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxTemplate.cpp:652:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxTemplate.cpp:654:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxTemplate.cpp:656:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxTemplate.cpp:658:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxTemplate.cpp:660:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxTemplate.cpp:662:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxTemplate.cpp:664:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxTemplate.cpp:666:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxTemplate.cpp:701:9: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/FxTemplate.cpp:703:15: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/fx/FxTemplate.cpp.o] Error 1
src/games/cgame/fx/genericparser2.cpp:312:14: error: use of undeclared identifier 'strcmpi'; did you mean 'strcmp'?
src/games/cgame/fx/genericparser2.cpp:508:9: error: use of undeclared identifier 'strcmpi'; did you mean 'strcmp'?
src/games/cgame/fx/genericparser2.cpp:579:9: error: use of undeclared identifier 'stricmp'; did you mean 'strcmp'?
src/games/cgame/fx/genericparser2.cpp:604:14: error: use of undeclared identifier 'strcmpi'; did you mean 'strcmp'?
src/games/cgame/fx/genericparser2.cpp:612:8: error: use of undeclared identifier 'strcmpi'; did you mean 'strcmp'?
src/games/cgame/fx/genericparser2.cpp:618:14: error: use of undeclared identifier 'strcmpi'; did you mean 'strcmp'?
src/games/cgame/fx/genericparser2.cpp:680:8: error: use of undeclared identifier 'strcmpi'; did you mean 'strcmp'?
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/fx/genericparser2.cpp.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/fx/FxUtil.cpp.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_atoms.cpp.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_gameinfo.cpp.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/game/bg_misc.cpp.o] Error 1
src/games/ui/ui_main.cpp:3056:16: error: no matching function for call to 'va'
src/games/ui/ui_main.cpp:6569:14: error: no member named 'feederAddItem' in 'displayContextDef_t'
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_main.cpp.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_shared.cpp.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_players.cpp.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_syscalls.cpp.o] Error 1

### failure context

- build/linux-x64-debug/client/obj/client/cl_cin.cpp.o

```
No VM guests are running outdated hypervisor (qemu) binaries on this host.
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
Compiling 'src/client/cl_cgame.cpp'
Compiling 'src/client/cl_cin.cpp'
Compiling 'src/client/cl_console.cpp'
Compiling 'src/client/cl_input.cpp'
src/client/cl_cin.cpp:1105:39: error: cast from pointer to smaller type 'unsigned int' loses information
 1105 |         cinTable[currentHandle].t[0] = ( 0 - (unsigned int)cin.linbuf ) + (unsigned int)cin.linbuf + cinTable[currentHandle].screenDelta;
      |                                              ^~~~~~~~~~~~~~~~~~~~~~~~
src/client/cl_cin.cpp:1105:68: error: cast from pointer to smaller type 'unsigned int' loses information
 1105 |         cinTable[currentHandle].t[0] = ( 0 - (unsigned int)cin.linbuf ) + (unsigned int)cin.linbuf + cinTable[currentHandle].screenDelta;
      |                                                                           ^~~~~~~~~~~~~~~~~~~~~~~~
src/client/cl_cin.cpp:1106:41: error: cast from pointer to smaller type 'unsigned int' loses information
 1106 |         cinTable[currentHandle].t[1] = ( 0 - ( (unsigned int)cin.linbuf + cinTable[currentHandle].screenDelta ) ) + (unsigned int)cin.linbuf;
      |                                                ^~~~~~~~~~~~~~~~~~~~~~~~
src/client/cl_cin.cpp:1106:110: error: cast from pointer to smaller type 'unsigned int' loses information
 1106 |         cinTable[currentHandle].t[1] = ( 0 - ( (unsigned int)cin.linbuf + cinTable[currentHandle].screenDelta ) ) + (unsigned int)cin.linbuf;
      |                                                                                                                     ^~~~~~~~~~~~~~~~~~~~~~~~
src/client/cl_input.cpp:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src/client/cl_cin.cpp:1436:39: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1436 |                         Cbuf_ExecuteText( EXEC_APPEND, va( "%s\n", s ) );
      |                                                            ^
src/client/cl_cin.cpp:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
2 warnings and 4 errors generated.
scons: *** [build/linux-x64-debug/client/obj/client/cl_cin.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/qcommon/cm_polylib.cpp.o

```
  224 |         FindChunk( "RIFF" );
      |                    ^
src/client/snd_mem.cpp:234:13: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  234 |         FindChunk( "fmt " );
      |                    ^
src/client/snd_mem.cpp:253:13: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  253 |         FindChunk( "data" );
      |                    ^
3 warnings generated.
6 warnings generated.
Compiling 'src/client/snd_wavelet.cpp'
8 warnings generated.
Compiling 'src/qcommon/cm_load.cpp'
Compiling 'src/qcommon/cm_patch.cpp'
src/client/snd_mix.cpp:793:10: warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  793 |                                         int talkcnt, talktime;
      |                                             ^
1 warning generated.
Compiling 'src/qcommon/cm_polylib.cpp'
Compiling 'src/qcommon/cm_test.cpp'
Compiling 'src/qcommon/cm_trace.cpp'
Compiling 'src/qcommon/cmd.cpp'
src/qcommon/cm_polylib.cpp:280:15: error: unknown type name 'intptr_t'; did you mean '__intptr_t'?
  280 |         size = (int)(intptr_t)( (winding_t *)0 )->p[w->numpoints];
      |                      ^~~~~~~~
      |                      __intptr_t
/usr/include/x86_64-linux-gnu/bits/types.h:207:25: note: '__intptr_t' declared here
  207 | __STD_TYPE __SWORD_TYPE __intptr_t;
      |                         ^
1 error generated.
scons: *** [build/linux-x64-debug/client/obj/qcommon/cm_polylib.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/qcommon/common.cpp.o

```
      |             ^
src/qcommon/common.cpp:1014:12: warning: variable 'locsize' set but not used [-Wunused-but-set-variable]
 1014 |         int size, locsize, numBlocks;
      |                   ^
src/qcommon/common.cpp:1079:10: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1079 |                 pMsg = "Minimum com_hunkMegs for a dedicated server is %i, allocating %i megs.\n";
      |                        ^
src/qcommon/common.cpp:1082:10: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1082 |                 pMsg = "Minimum com_hunkMegs is %i, allocating %i megs.\n";
      |                        ^
src/qcommon/common.cpp:1098:29: error: cast from pointer to smaller type 'int' loses information
 1098 |         s_hunkData = ( byte * )( ( (int)s_hunkData + 31 ) & ~31 );
      |                                    ^~~~~~~~~~~~~~~
src/qcommon/common.cpp:1192:32: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1192 |         Cvar_Set( "com_hunkused", va( "%i", hunk_low.permanent + hunk_high.permanent ) );
      |                                       ^
src/qcommon/common.cpp:1280:33: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1280 |                 Cvar_Set( "com_hunkused", va( "%i", hunk_low.permanent + hunk_high.permanent ) );
      |                                               ^
src/qcommon/common.cpp:1799:2: warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
 1799 |         *( int * ) 0 = 0x12345678;
      |         ^~~~~~~~~~~~
src/qcommon/common.cpp:1799:2: note: consider using __builtin_trap() or qualifying pointer with 'volatile'
src/qcommon/common.cpp:2073:10: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                 ^
src/qcommon/common.cpp:2270:6: warning: variable 'key' set but not used [-Wunused-but-set-variable]
 2270 |         int key;
      |             ^
16 warnings and 1 error generated.
scons: *** [build/linux-x64-debug/client/obj/qcommon/common.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/qcommon/msg.cpp.o

```
src/qcommon/msg.cpp:944:23: note: expanded from macro 'NETF'
  944 | #define NETF( x ) # x,(int)&( (entityState_t*)0 )->x
      |                       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/qcommon/msg.cpp:962:4: error: cast from pointer to smaller type 'int' loses information
  962 |         { NETF( apos.trBase[0] ), 0 },
      |           ^~~~~~~~~~~~~~~~~~~~~~
src/qcommon/msg.cpp:944:23: note: expanded from macro 'NETF'
  944 | #define NETF( x ) # x,(int)&( (entityState_t*)0 )->x
      |                       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/qcommon/msg.cpp:963:4: error: cast from pointer to smaller type 'int' loses information
  963 |         { NETF( apos.trBase[1] ), 0 },
      |           ^~~~~~~~~~~~~~~~~~~~~~
src/qcommon/msg.cpp:944:23: note: expanded from macro 'NETF'
  944 | #define NETF( x ) # x,(int)&( (entityState_t*)0 )->x
      |                       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/qcommon/msg.cpp:964:4: error: cast from pointer to smaller type 'int' loses information
  964 |         { NETF( apos.trBase[2] ), 0 },
      |           ^~~~~~~~~~~~~~~~~~~~~~
src/qcommon/msg.cpp:944:23: note: expanded from macro 'NETF'
  944 | #define NETF( x ) # x,(int)&( (entityState_t*)0 )->x
      |                       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/qcommon/msg.cpp:965:4: error: cast from pointer to smaller type 'int' loses information
  965 |         { NETF( apos.trDelta[0] ), 0 },
      |           ^~~~~~~~~~~~~~~~~~~~~~~
src/qcommon/msg.cpp:944:23: note: expanded from macro 'NETF'
  944 | #define NETF( x ) # x,(int)&( (entityState_t*)0 )->x
      |                       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
fatal error: too many errors emitted, stopping now [-ferror-limit=]
4 warnings generated.
20 errors generated.
scons: *** [build/linux-x64-debug/client/obj/qcommon/msg.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/renderer/tr_bsp.cpp.o

```
  586 | static char *zombieFxFleshHitSurfaceNames[2] = {"u_body","l_legs"};
      |                                                 ^
src/renderer/tr_backend.cpp:586:58: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  586 | static char *zombieFxFleshHitSurfaceNames[2] = {"u_body","l_legs"};
      |                                                          ^
src/renderer/tr_backend.cpp:1577:20: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1577 |         GLimp_LogComment( "***************** RB_SwapBuffers *****************\n\n\n" );
      |                           ^
7 warnings generated.
Compiling 'src/renderer/tr_decals.cpp'
src/renderer/tr_bsp.cpp:211:40: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  211 |                 tr.lightmaps[i] = R_CreateImage( va( "*lightmap%d",i ), image,
      |                                                      ^
src/renderer/tr_bsp.cpp:147:9: warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  147 |         double sumIntensity = 0;
      |                ^
src/renderer/tr_bsp.cpp:379:14: error: cast from pointer to smaller type 'int' loses information
  379 |         sfaceSize = ( int ) &( (srfSurfaceFace_t *)0 )->points[numPoints];
      |                     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/renderer/tr_cmds.cpp:410:44: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  410 |                                 ri.Cvar_Set( "r_ati_truform_tess", va( "%d",glConfig.ATIMaxTruformTess ) );
      |                                                                        ^
1 warning generated.
src/renderer/tr_bsp.cpp:2089:7: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 2089 |                 s = "vertexremapshader";
      |                     ^
src/renderer/tr_bsp.cpp:2103:7: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 2103 |                 s = "remapshader";
      |                     ^
4 warnings and 1 error generated.
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_bsp.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/renderer/tr_image.cpp.o

```
      |          ^
src/renderer/tr_image.cpp:128:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  128 |         {"GL_LINEAR_MIPMAP_LINEAR", GL_LINEAR_MIPMAP_LINEAR, GL_LINEAR}
      |          ^
src/renderer/tr_image.cpp:1584:36: error: member reference type 'jpgOutputBuffer_t' is not a pointer; did you mean to use '.'?
 1584 |         out.buffer = ( byte * )malloc( out->capacity );
      |                                        ~~~^~
      |                                           .
src/renderer/tr_image.cpp:1662:37: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1662 |                 ri.Cmd_ExecuteText( EXEC_NOW, va( "cache_usedfile image %s %i %i %i %i\n", name, mipmap, allowPicmip, characterMIP, glWrapClampMode ) );
      |                                                   ^
src/renderer/tr_image.cpp:1837:8: warning: variable 'g' set but not used [-Wunused-but-set-variable]
 1837 |         float g;
      |               ^
src/renderer/tr_image.cpp:2144:10: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 2144 |                 return "";
      |                        ^
src/renderer/tr_image.cpp:3079:8: warning: variable 'name' set but not used [-Wunused-but-set-variable]
 3079 |         char *name;
      |               ^
src/renderer/tr_image.cpp:3237:20: warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
 3237 |         image_t *bImage, *bImagePrev;
      |                           ^
src/renderer/tr_image.cpp:3346:59: warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
 3346 |                 R_FindImageFileExt( name, parms[0], parms[1], parms[2], parms[3] );
      |                                                                         ^     ~
src/renderer/tr_image.cpp:3324:2: note: array 'parms' declared here
 3324 |         int parms[3], i;
      |         ^
12 warnings and 1 error generated.
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_image.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/renderer/tr_init.cpp.o

```
 3346 |                 R_FindImageFileExt( name, parms[0], parms[1], parms[2], parms[3] );
      |                                                                         ^     ~
src/renderer/tr_image.cpp:3324:2: note: array 'parms' declared here
 3324 |         int parms[3], i;
      |         ^
12 warnings and 1 error generated.
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_image.cpp.o] Error 1
Compiling 'src/renderer/tr_marks.cpp'
src/renderer/tr_init.cpp:261:31: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  261 |                         ri.Cvar_Set( cv->name, va( "%d", cv->integer ) );
      |                                                    ^
src/renderer/tr_init.cpp:267:30: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  267 |                 ri.Cvar_Set( cv->name, va( "%f", minVal ) );
      |                                            ^
src/renderer/tr_init.cpp:270:30: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  270 |                 ri.Cvar_Set( cv->name, va( "%f", maxVal ) );
      |                                            ^
src/renderer/tr_init.cpp:805:43: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  805 |                         ri.Cvar_Set( "r_ati_truform_tess", va( "%d", maxtess ) );
      |                                                                ^
src/renderer/tr_init.cpp:1136:46: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1136 |         r_maxpolys = ri.Cvar_Get( "r_maxpolys", va( "%d", MAX_POLYS ), 0 );
      |                                                     ^
src/renderer/tr_init.cpp:1137:54: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1137 |         r_maxpolyverts = ri.Cvar_Get( "r_maxpolyverts", va( "%d", MAX_POLYVERTS ), 0 );
      |                                                             ^
src/renderer/tr_init.cpp:1175:7: error: cast from pointer to smaller type 'int' loses information
 1175 |         if ( (int)tess.xyz & 15 ) {
      |              ^~~~~~~~~~~~~
6 warnings and 1 error generated.
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_init.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/renderer/tr_model.cpp.o

```
 1137 |         r_maxpolyverts = ri.Cvar_Get( "r_maxpolyverts", va( "%d", MAX_POLYVERTS ), 0 );
      |                                                             ^
src/renderer/tr_init.cpp:1175:7: error: cast from pointer to smaller type 'int' loses information
 1175 |         if ( (int)tess.xyz & 15 ) {
      |              ^~~~~~~~~~~~~
6 warnings and 1 error generated.
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_init.cpp.o] Error 1
Compiling 'src/renderer/tr_md5.cpp'
src/renderer/tr_main.cpp:1181:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
 1181 |         unsigned int pointOr = 0;
      |                      ^
Compiling 'src/renderer/tr_mesh.cpp'
1 warning generated.
Compiling 'src/renderer/tr_model.cpp'
src/renderer/tr_marks.cpp:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  500 |         float texCoordScale;
      |               ^
1 warning generated.
Compiling 'src/renderer/tr_noise.cpp'
Compiling 'src/renderer/tr_renderprog.cpp'
src/renderer/tr_model.cpp:113:37: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  113 |                 ri.Cmd_ExecuteText( EXEC_NOW, va( "cache_usedfile model %s\n", name ) );
      |                                                   ^
src/renderer/tr_model.cpp:764:13: error: assigning to 'byte *' (aka 'unsigned char *') from incompatible type 'void *'
  764 |                 membase = malloc( maxsize );
      |                           ^~~~~~~~~~~~~~~~~
src/renderer/tr_model.cpp:911:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  911 |         static int lastPurged = 0;
      |                    ^
2 warnings and 1 error generated.
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_model.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/renderer/tr_md5.cpp.o

```
src/renderer/tr_shade_calc.cpp:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
src/renderer/tr_shade_calc.cpp:679:2: warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
  679 |         invModulate[3] = 255 - backEnd.currentEntity->e.shaderRGBA[3];  // this trashes alpha, but the AGEN block fixes it
      |         ^           ~
src/renderer/tr_shade_calc.cpp:669:2: note: array 'invModulate' declared here
  669 |         unsigned char invModulate[3];
      |         ^
2 warnings generated.
Compiling 'src/renderer/tr_sky.cpp'
src/renderer/tr_shader.cpp:551:13: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  551 |                                 token = "map";   // use this map
      |                                         ^
src/renderer/tr_shader.cpp:558:13: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  558 |                                 token = "map";   // use this map
      |                                         ^
src/renderer/tr_shader.cpp:565:13: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  565 |                                 token = "map";   // use this map
      |                                         ^
src/renderer/tr_shader.cpp:572:13: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  572 |                                 token = "map";   // use this map
      |                                         ^
src/renderer/tr_shader.cpp:579:13: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  579 |                                 token = "animmap";   // use this map
      |                                         ^
src/renderer/tr_shader.cpp:587:13: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  587 |                                 token = "animmap";   // use this map
      |                                         ^
20 errors generated.
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_md5.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/renderer/tr_shader.cpp.o

```
src/renderer/tr_shader.cpp:1329:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1329 |         {"nodlight", 0,  SURF_NODLIGHT, 0 },     // don't ever add dynamic lights
      |          ^
src/renderer/tr_shader.cpp:1331:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1331 |         {"monsterslicknorth",    0, SURF_MONSLICK_N,0},
      |          ^
src/renderer/tr_shader.cpp:1332:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1332 |         {"monsterslickeast", 0, SURF_MONSLICK_E,0},
      |          ^
src/renderer/tr_shader.cpp:1333:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1333 |         {"monsterslicksouth",    0, SURF_MONSLICK_S,0},
      |          ^
src/renderer/tr_shader.cpp:1334:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1334 |         {"monsterslickwest", 0, SURF_MONSLICK_W,0}
      |          ^
src/renderer/tr_shader.cpp:1640:38: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1640 |                         ri.Cvar_Set( "r_mapFogColor", va( "0 %d %f %f %f %f 0", fogFar, fogDensity, fogColor[0], fogColor[1], fogColor[2] ) );
      |                                                           ^
src/renderer/tr_shader.cpp:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
 1898 |         if ( stages[0].alphaGen == CGEN_WAVEFORM ) {
      |              ~~~~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
src/renderer/tr_shadows.cpp:103:6: warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  103 |         int c_edges, c_rejected;
      |             ^
src/renderer/tr_shadows.cpp:103:15: warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  103 |         int c_edges, c_rejected;
      |                      ^
2 warnings generated.
Compiling 'src/renderer/tr_vfx.cpp'
64 warnings and 1 error generated.
scons: *** [build/linux-x64-debug/client/obj/renderer/tr_shader.cpp.o] Error 1
```


### warning kinds

- [6968x] -writable-strings
  - src/client/cl_cin.cpp:1436:39: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:67:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:68:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:69:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:70:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:71:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:72:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:73:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:74:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:75:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:77:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:78:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:79:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:81:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:84:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:85:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:86:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:87:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:88:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:89:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:90:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:91:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:92:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:93:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:94:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:95:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:97:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:98:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:99:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:100:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:101:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:102:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:104:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:105:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:106:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:107:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:108:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:110:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:111:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:113:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:114:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:115:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:116:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:117:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:118:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:119:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:120:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:121:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:122:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:123:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:124:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:125:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:126:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:127:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:128:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:129:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:130:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:131:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:132:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:133:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:134:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:135:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:136:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:137:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:138:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:139:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:140:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:141:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:142:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:143:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:144:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:146:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:147:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:148:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:149:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:150:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:151:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:152:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:153:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:154:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:155:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:156:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:157:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:158:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:159:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:160:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:161:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:163:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:164:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:165:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:166:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:167:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:168:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:169:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:170:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:171:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:172:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:173:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:174:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:175:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:176:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:177:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:178:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:179:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:180:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:182:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:184:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:186:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:193:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:194:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:195:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:196:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:197:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:198:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:199:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:200:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:201:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:203:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:204:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:205:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:207:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:209:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:210:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:211:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:212:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:213:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:214:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:215:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:216:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:217:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:218:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:219:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:220:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:222:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:223:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:224:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:225:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:226:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:227:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:229:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:230:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:231:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:232:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:233:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:235:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:236:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:238:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:239:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:240:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:241:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:242:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:243:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:244:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:245:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:246:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:247:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:248:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:249:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:250:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:251:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:252:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:253:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:254:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:255:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:256:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:257:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:258:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:259:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:260:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:261:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:262:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:263:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:264:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:265:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:266:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:267:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:268:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:269:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:271:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:272:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:273:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:274:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:275:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:276:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:277:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:278:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:279:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:280:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:281:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:282:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:283:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:284:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:285:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:286:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:288:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:289:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:290:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:291:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:292:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:293:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:294:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:295:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:296:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:297:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:298:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:299:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:300:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:301:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:302:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:303:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:304:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:305:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:307:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:309:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:315:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:316:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:317:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:318:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:319:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:320:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:321:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:322:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:323:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:325:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:326:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:327:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:329:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:331:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:332:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:333:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:334:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:335:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:336:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:337:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:338:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:339:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:340:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:341:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:342:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:344:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:345:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:346:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:347:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:348:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:349:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:351:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:352:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:353:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:354:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:355:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:357:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:358:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:360:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:361:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:362:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:363:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:364:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:365:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:366:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:367:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:368:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:369:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:370:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:371:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:372:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:373:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:374:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:375:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:376:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:377:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:378:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:379:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:380:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:381:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:382:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:383:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:384:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:385:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:386:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:387:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:388:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:389:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:390:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:391:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:393:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:394:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:395:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:396:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:397:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:398:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:399:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:400:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:401:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:402:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:403:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:404:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:405:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:406:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:407:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:408:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:410:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:411:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:412:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:413:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:414:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:415:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:416:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:417:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:418:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:419:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:420:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:421:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:422:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:423:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:424:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:425:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:426:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:427:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:429:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:431:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:438:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:439:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:440:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:441:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:442:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:443:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:444:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:445:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:446:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:448:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:449:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:450:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:452:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:454:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:455:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:456:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:457:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:458:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:459:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:460:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:461:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:462:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:463:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:464:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:465:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:467:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:468:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:469:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:470:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:471:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:472:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:474:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:475:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:476:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:477:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:478:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:480:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:481:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:483:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:484:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:485:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:486:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:487:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:488:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:489:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:490:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:491:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:492:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:493:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:494:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:495:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:496:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:497:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:498:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:499:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:500:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:501:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:502:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:503:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:504:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:505:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:506:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:507:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:508:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:509:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:510:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:511:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:512:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:513:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:514:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:516:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:517:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:518:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:519:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:520:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:521:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:522:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:523:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:524:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src/client/cl_keys.cpp:525:3: warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [165x] -unused-but-set-variable
  - src/client/cl_input.cpp:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.cpp:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.cpp:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.cpp:1106:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.cpp:186:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.cpp:2749:10: warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.cpp:2853:18: warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.cpp:3552:12: warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.cpp:3553:6: warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.cpp:3554:6: warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
  - src/client/cl_scrn.cpp:386:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/client/snd_dma.cpp:558:8: warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src/client/snd_mix.cpp:793:10: warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.cpp:738:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.cpp:824:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cmd.cpp:247:6: warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src/qcommon/common.cpp:945:6: warning: variable 'sum' set but not used [-Wunused-but-set-variable]
  - src/qcommon/common.cpp:1014:12: warning: variable 'locsize' set but not used [-Wunused-but-set-variable]
  - src/qcommon/common.cpp:2270:6: warning: variable 'key' set but not used [-Wunused-but-set-variable]
  - src/qcommon/files.cpp:2766:20: warning: variable 'badchecksum' set but not used [-Wunused-but-set-variable]
  - src/qcommon/net_chan.cpp:318:6: warning: variable 'qport' set but not used [-Wunused-but-set-variable]
  - src/qcommon/unzip.cpp:2139:16: warning: variable 'bufBefore' set but not used [-Wunused-but-set-variable]
  - src/server/sv_game.cpp:195:6: warning: variable 'area1' set but not used [-Wunused-but-set-variable]
  - src/server/sv_game.cpp:195:13: warning: variable 'area2' set but not used [-Wunused-but-set-variable]
  - src/server/sv_snapshot.cpp:303:6: warning: variable 'c_fullsend' set but not used [-Wunused-but-set-variable]
  - src/server/sv_world.cpp:406:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/server/sv_world.cpp:701:15: warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_bsp.cpp:147:9: warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_font.cpp:351:8: warning: variable 'glyphScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_flares.cpp:128:23: warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.cpp:1837:8: warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.cpp:3079:8: warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.cpp:3237:20: warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_main.cpp:1181:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.cpp:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.cpp:911:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade.cpp:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade_calc.cpp:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.cpp:103:6: warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.cpp:103:15: warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src/qcommon/q_shared.cpp:434:9: warning: variable 'pc' set but not used [-Wunused-but-set-variable]
  - src/sys/unix/unix_shared.cpp:183:6: warning: variable 'extLen' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_gen.cpp:59:13: warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_chat.cpp:2782:19: warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_goal.cpp:241:19: warning: variable 'gs' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.cpp:1553:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.cpp:3013:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/l_script.cpp:389:14: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/l_precomp.cpp:1661:6: warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_active.cpp:577:8: warning: variable 'fallSoundMul' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_active.cpp:1568:23: warning: variable 'pers' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_cmds.cpp:2019:6: warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_combat.cpp:898:6: warning: variable 'save' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_main.cpp:405:35: warning: variable 'oldHintType' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_main.cpp:2371:6: warning: variable 'msec' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_missile.cpp:432:6: warning: variable 'etype' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_mover.cpp:1698:8: warning: variable 'distance' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_mover.cpp:2150:6: warning: variable 'soundrange' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_props.cpp:888:11: warning: variable 'prop_hits' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_target.cpp:990:17: warning: variable 'dayaw' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_tramcar.cpp:212:8: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.cpp:160:13: warning: variable 'ent2' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.cpp:867:13: warning: variable 'sniperEnt' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.cpp:1078:8: warning: variable 'oldHealth' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.cpp:1337:6: warning: variable 'oldScore' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_danger.cpp:97:21: warning: variable 'dcs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_events.cpp:480:28: warning: variable 'activator' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_events.cpp:481:13: warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_input.cpp:104:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_movement.cpp:290:43: warning: variable 'bestyaw' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_movement.cpp:296:27: warning: variable 'besttraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_movement.cpp:300:16: warning: variable 'simTime' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_input.cpp:378:18: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_input.cpp:378:25: warning: variable 'clCount' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_navigation.cpp:291:8: warning: variable 'attack_skill' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_navigation.cpp:291:22: warning: variable 'croucher' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_perception.cpp:472:21: warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_perception.cpp:827:17: warning: variable 'destcount' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_script_actions_animation.cpp:75:29: warning: variable 'setAngles' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_script_actions_mission.cpp:1309:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_targeting.cpp:40:16: warning: variable 'oldPauseTime' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_weapons.cpp:404:13: warning: variable 'oldweap' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/ai_weapons.cpp:472:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_behavior_doors.cpp:35:21: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_behavior_cover.cpp:36:14: warning: variable 'moveDist' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_behavior_cover.cpp:40:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_behavior_cover.cpp:361:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_behavior_grenades.cpp:267:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_behavior_grenades.cpp:606:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_behavior_grenades.cpp:612:6: warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_behavior_grenades.cpp:917:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_behavior_investigate.cpp:358:13: warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_behavior_pursuit.cpp:501:19: warning: variable 'shouldAttack' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_behavior_pursuit.cpp:432:25: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_behavior_pursuit.cpp:433:21: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_behavior_pursuit.cpp:439:16: warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_behavior_pursuit.cpp:440:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_boss_heinrich.cpp:194:16: warning: variable 'ecs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_boss_heinrich.cpp:627:20: warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_boss_heinrich.cpp:702:20: warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_boss_heinrich.cpp:764:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_combat.cpp:34:6: warning: variable 'tfl' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_boss_helga.cpp:42:21: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_combat.cpp:438:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_combat.cpp:513:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_combat.cpp:536:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_combat.cpp:613:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_monster_zombie.cpp:46:21: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai/fsm/ai_monster_zombie.cpp:165:21: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_effects.cpp:313:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.cpp:174:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.cpp:182:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.cpp:393:6: warning: variable 'offsetwhole' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.cpp:739:15: warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.cpp:946:8: warning: variable 'scale' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.cpp:1073:6: warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.cpp:1364:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.cpp:1800:23: warning: variable 'traplf' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_fx_entities.cpp:370:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_fx_entities.cpp:397:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_fx_flame.cpp:672:6: warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_fx_flame.cpp:1054:26: warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_fx_flame.cpp:1400:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_info.cpp:210:8: warning: variable 'formatStr' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.cpp:190:6: warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.cpp:202:15: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.cpp:391:19: warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.cpp:1780:26: warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.cpp:2444:15: warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.cpp:2601:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.cpp:4526:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_sound.cpp:238:6: warning: variable 's' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_view.cpp:198:18: warning: variable 'lbdiff' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_view.cpp:976:8: warning: variable 'redFlash' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.cpp:402:6: warning: variable 'contents' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.cpp:403:6: warning: variable 'lastContents' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.cpp:1876:8: warning: variable 'ramp' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.cpp:2795:19: warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.cpp:2798:13: warning: variable 'oldtime' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.cpp:3609:8: warning: variable 'shake' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.cpp:4030:6: warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.cpp:4933:6: warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.cpp:5857:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.cpp:5904:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.cpp:1289:8: warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.cpp:1790:16: warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.cpp:1792:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.cpp:2481:14: warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.cpp:2481:17: warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.cpp:5098:43: warning: variable 'game' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.cpp:5101:13: warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.cpp:5411:23: warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.cpp:5724:33: warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.cpp:1275:15: warning: variable 'text_p' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.cpp:1275:24: warning: variable 'prev' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.cpp:1277:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.cpp:1278:15: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.cpp:1279:8: warning: variable 'fps' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.cpp:1280:6: warning: variable 'skip' set but not used [-Wunused-but-set-variable]
- [31x] -macro-redefined
  - src/games/cgame/cg_local.h:79:9: warning: 'CHAR_WIDTH' macro redefined [-Wmacro-redefined]
- [22x] -inconsistent-missing-override
  - src/games/cgame/fx/FxPrimitives.h:273:14: warning: 'Die' overrides a member function but is not marked 'override' [-Winconsistent-missing-override]
  - src/games/cgame/fx/FxPrimitives.h:274:14: warning: 'Update' overrides a member function but is not marked 'override' [-Winconsistent-missing-override]
- [18x] -invalid-source-encoding
  - src/client/cl_keys.cpp:197:5: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.cpp:450:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.cpp:452:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.cpp:469:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.cpp:470:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.cpp:474:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.cpp:475:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.cpp:476:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.cpp:477:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.cpp:478:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.cpp:535:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.cpp:541:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.cpp:570:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.cpp:595:9: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.cpp:607:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.cpp:666:16: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.cpp:667:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.cpp:680:4: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [12x] -pointer-bool-conversion
  - src/client/snd_dma.cpp:1857:19: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.cpp:2171:11: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.cpp:2487:15: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/game/ai/ai_script_actions_combat.cpp:533:45: warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_drawtools.cpp:148:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_ents.cpp:397:14: warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:948:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:960:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:972:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_weapons.cpp:1005:10: warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.cpp:1449:7: warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.cpp:1507:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [12x] -deprecated-register
  - src/qcommon/common.cpp:694:6: warning: 'register' storage class specifier is deprecated and incompatible with C++17 [-Wdeprecated-register]
  - src/qcommon/unzip.cpp:3146:2: warning: 'register' storage class specifier is deprecated and incompatible with C++17 [-Wdeprecated-register]
  - src/qcommon/unzip.cpp:3147:2: warning: 'register' storage class specifier is deprecated and incompatible with C++17 [-Wdeprecated-register]
  - src/qcommon/unzip.cpp:3148:2: warning: 'register' storage class specifier is deprecated and incompatible with C++17 [-Wdeprecated-register]
  - src/qcommon/unzip.cpp:3151:2: warning: 'register' storage class specifier is deprecated and incompatible with C++17 [-Wdeprecated-register]
  - src/qcommon/unzip.cpp:3155:2: warning: 'register' storage class specifier is deprecated and incompatible with C++17 [-Wdeprecated-register]
  - src/sys/unix/linux_glimp.cpp:150:2: warning: 'register' storage class specifier is deprecated and incompatible with C++17 [-Wdeprecated-register]
  - src/sys/unix/linux_glimp.cpp:151:2: warning: 'register' storage class specifier is deprecated and incompatible with C++17 [-Wdeprecated-register]
  - src/games/botlib/l_precomp.cpp:544:6: warning: 'register' storage class specifier is deprecated and incompatible with C++17 [-Wdeprecated-register]
- [12x] -unknown-pragmas
  - src/games/cgame/fx/genericparser2.h:11:9: warning: unknown pragma ignored [-Wunknown-pragmas]
- [6x] -sizeof-pointer-memaccess
  - src/qcommon/cvar.cpp:764:28: warning: 'memset' call operates on objects of type 'cvar_t' (aka 'cvar_s') while the size is based on a different type 'cvar_t *' (aka 'cvar_s *') [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.cpp:807:29: warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.cpp:999:32: warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]
  - src/games/game/ai/ai_system.cpp:458:33: warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'cast_state_s *') [-Wsizeof-pointer-memaccess]
- [3x] -tautological-constant-out-of-range-compare
  - src/games/ui/ui_players.cpp:773:25: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1615:21: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1628:20: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [2x] -array-bounds
  - src/renderer/tr_image.cpp:3346:59: warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src/renderer/tr_shade_calc.cpp:679:2: warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src/renderer/tr_shader.cpp:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src/renderer/tr_shader.cpp:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -format
  - src/games/botlib/l_precomp.cpp:2441:31: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
  - src/games/botlib/l_precomp.cpp:2547:31: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [2x] -sizeof-array-argument
  - src/games/game/bg_animation.cpp:807:27: warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -logical-not-parentheses
  - src/games/game/g_client.cpp:1531:8: warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src/games/game/g_client.cpp:1608:9: warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [2x] -unused-variable
  - src/games/cgame/cg_effects.cpp:166:57: warning: unused variable 'ndir' [-Wunused-variable]
  - src/games/cgame/cg_fx_entities.cpp:67:16: warning: unused variable 'col' [-Wunused-variable]
- [2x] -self-assign
  - src/games/cgame/cg_view.cpp:875:11: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src/games/cgame/cg_view.cpp:1387:12: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
- [1x] -strncat-size
  - src/client/cl_main.cpp:2841:25: warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src/qcommon/common.cpp:1799:2: warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src/qcommon/unzip.cpp:2066:45: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -unused-const-variable
  - src/qcommon/unzip.cpp:3045:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
- [1x] nested namespace definition is a C++17 extension; define each namespace separately [-Wc++17-extensio
  - src/games/botlib/../../qcommon/wolf_nav.h:5:15: warning: nested namespace definition is a C++17 extension; define each namespace separately [-Wc++17-extensions]
- [1x] -char-subscripts
  - src/games/cgame/cg_newDraw.cpp:1830:24: warning: array subscript is of type 'char' [-Wchar-subscripts]

## uncrustify

status: success

errors: 1
warnings: 0 in 0 kinds

### errors

UNCRUSTIFY_FAILED: src/games/game/bg_pmove.cpp

### failure context


### warning kinds

## windows-latest-x64-debug-

status: cancelled

errors: 91
warnings: 6541 in 28 kinds

### errors

src\qcommon\msg.cpp(578,38): error: constant expression evaluates to 4294967295 which cannot be narrowed to type 'int' [-Wc++11-narrowing]
scons: *** [build\windows-x64-debug\client\obj\qcommon\msg.cpp.obj] Error 1
src\renderer\tr_image.cpp(1584,36): error: member reference type 'jpgOutputBuffer_t' is not a pointer; did you mean to use '.'?
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_image.cpp.obj] Error 1
src\renderer\tr_shader.cpp(1278,27): error: constant expression evaluates to 2147483648 which cannot be narrowed to type 'int' [-Wc++11-narrowing]
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_shader.cpp.obj] Error 1
src\renderer\tr_md5.cpp(16,3): error: cannot use 'throw' with exceptions disabled
src\renderer\tr_md5.cpp(102,22): error: no member named 'from_chars' in namespace 'std'
src\renderer\tr_md5.cpp(102,58): error: no member named 'chars_format' in namespace 'std'
src\renderer\tr_md5.cpp(103,26): error: no member named 'errc' in namespace 'std'; did you mean 'erfc'?
src\renderer\tr_md5.cpp(103,31): error: too few arguments to function call, single argument '_X' was not specified
src\renderer\tr_md5.cpp(104,4): error: cannot use 'throw' with exceptions disabled
src\renderer\tr_md5.cpp(469,6): error: cannot use 'throw' with exceptions disabled
src\renderer\tr_md5.cpp(496,9): error: cannot use 'throw' with exceptions disabled
src\renderer\tr_md5.cpp(530,7): error: cannot use 'throw' with exceptions disabled
src\renderer\tr_md5.cpp(541,5): error: cannot use 'throw' with exceptions disabled
src\renderer\tr_md5.cpp(462,4): error: cannot use 'try' with exceptions disabled
src\renderer\tr_md5.cpp(316,2): error: cannot use 'try' with exceptions disabled
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_md5.cpp.obj] Error 1
src\sys\win32\win_snd.cpp(76,9): error: no member named 'lpVtbl' in 'IDirectSound'
src\sys\win32\win_snd.cpp(81,12): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
src\sys\win32\win_snd.cpp(82,12): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
src\sys\win32\win_snd.cpp(88,13): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
src\sys\win32\win_snd.cpp(96,8): error: no member named 'lpVtbl' in 'IDirectSound'
src\sys\win32\win_snd.cpp(175,17): error: no member named 'lpVtbl' in 'IDirectSound'
src\sys\win32\win_snd.cpp(181,21): error: no member named 'lpVtbl' in 'IDirectSound'
src\sys\win32\win_snd.cpp(225,21): error: no member named 'lpVtbl' in 'IDirectSound'
src\sys\win32\win_snd.cpp(233,22): error: no member named 'lpVtbl' in 'IDirectSound'
src\sys\win32\win_snd.cpp(242,24): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
src\sys\win32\win_snd.cpp(249,24): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
src\sys\win32\win_snd.cpp(292,10): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
src\sys\win32\win_snd.cpp(322,15): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
src\sys\win32\win_snd.cpp(327,11): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
src\sys\win32\win_snd.cpp(331,11): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
src\sys\win32\win_shared.cpp(154,7): error: use of undeclared label 'good'
src\sys\win32\win_shared.cpp(155,7): error: use of undeclared label 'err'
src\sys\win32\win_snd.cpp(339,30): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
src\sys\win32\win_snd.cpp(348,12): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
src\sys\win32\win_snd.cpp(369,11): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
src\sys\win32\win_snd.cpp(386,21): error: no member named 'lpVtbl' in 'IDirectSound'
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_snd.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_shared.cpp.obj] Error 1
src\sys\win32\win_syscon.cpp(394,78): error: use of undeclared identifier 'GWL_WNDPROC'
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_syscon.cpp.obj] Error 1
src\games\game\bg_misc.cpp(3520,21): error: incompatible integer to pointer conversion assigning to 'gitem_t *' (aka 'struct gitem_s *') from 'weapon_t'
scons: *** [build\windows-x64-debug\game\obj\games\game\bg_misc.cpp.obj] Error 1
src\games\game\g_save.cpp(147,3): error: non-constant-expression cannot be narrowed from type 'int' to 'size_t' (aka 'unsigned long long') in initializer list [-Wc++11-narrowing]
src\games\game\g_save.cpp(148,3): error: non-constant-expression cannot be narrowed from type 'int' to 'size_t' (aka 'unsigned long long') in initializer list [-Wc++11-narrowing]
src\games\game\g_save.cpp(149,3): error: non-constant-expression cannot be narrowed from type 'int' to 'size_t' (aka 'unsigned long long') in initializer list [-Wc++11-narrowing]
src\games\game\g_save.cpp(150,3): error: non-constant-expression cannot be narrowed from type 'int' to 'size_t' (aka 'unsigned long long') in initializer list [-Wc++11-narrowing]
src\games\game\g_save.cpp(151,3): error: non-constant-expression cannot be narrowed from type 'int' to 'size_t' (aka 'unsigned long long') in initializer list [-Wc++11-narrowing]
src\games\game\g_save.cpp(152,3): error: non-constant-expression cannot be narrowed from type 'int' to 'size_t' (aka 'unsigned long long') in initializer list [-Wc++11-narrowing]
src\games\game\g_save.cpp(153,3): error: non-constant-expression cannot be narrowed from type 'int' to 'size_t' (aka 'unsigned long long') in initializer list [-Wc++11-narrowing]
src\games\game\g_save.cpp(154,3): error: non-constant-expression cannot be narrowed from type 'int' to 'size_t' (aka 'unsigned long long') in initializer list [-Wc++11-narrowing]
src\games\game\g_save.cpp(189,3): error: non-constant-expression cannot be narrowed from type 'int' to 'size_t' (aka 'unsigned long long') in initializer list [-Wc++11-narrowing]
src\games\game\g_save.cpp(190,3): error: non-constant-expression cannot be narrowed from type 'int' to 'size_t' (aka 'unsigned long long') in initializer list [-Wc++11-narrowing]
src\games\game\g_save.cpp(191,3): error: non-constant-expression cannot be narrowed from type 'int' to 'size_t' (aka 'unsigned long long') in initializer list [-Wc++11-narrowing]
src\games\game\g_save.cpp(192,3): error: non-constant-expression cannot be narrowed from type 'int' to 'size_t' (aka 'unsigned long long') in initializer list [-Wc++11-narrowing]
src\games\game\g_funcs.h(524,20): error: address of overloaded function 'G_Find' does not match required type 'unsigned char'
scons: *** [build\windows-x64-debug\game\obj\games\game\g_save.cpp.obj] Error 1
src\games\game\ai\ai_events.cpp(370,3): error: no matching function for call to 'AICast_ScriptEvent'
scons: *** [build\windows-x64-debug\game\obj\games\game\ai\ai_events.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\game\bg_misc.cpp.obj] Error 1
src\games\cgame\../ui/ui_shared.h(50,1): error: expected unqualified-id
src\games\cgame\../ui/ui_shared.h(121,3): error: a type specifier is required for all declarations
src\games\cgame\../ui/ui_shared.h(140,2): error: unknown type name 't'
src\games\cgame\../ui/ui_shared.h(140,11): error: expected ';' at end of declaration list
src\games\cgame\../ui/ui_shared.h(194,11): error: expected ';' at end of declaration list
src\games\cgame\../ui/ui_shared.h(302,2): error: unknown type name 'key'
src\games\cgame\../ui/ui_shared.h(302,8): error: expected ';' at end of declaration list
src\games\cgame\../ui/ui_shared.h(398,5): error: expected ')'
src\games\cgame\../ui/ui_shared.h(462,1): error: unknown type name 'q'
src\games\cgame\../ui/ui_shared.h(463,8): error: expected ';' after top level declarator
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_consolecmds.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_draw.cpp.obj] Error 1
src\games\cgame\cg_ents.cpp(1708,19): error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
src\games\cgame\cg_ents.cpp(1708,63): error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
src\games\cgame\cg_ents.cpp(1708,109): error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_ents.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_event.cpp.obj] Error 1
src\games\cgame\cg_fx_entities.cpp(467,31): error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
src\games\cgame\cg_fx_entities.cpp(467,82): error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
src\games\cgame\cg_fx_entities.cpp(467,135): error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
src\games\cgame\cg_fx_entities.cpp(467,198): error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
src\games\cgame\cg_fx_entities.cpp(467,250): error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
src\games\cgame\cg_fx_entities.cpp(467,302): error: non-constant-expression cannot be narrowed from type 'int' to 'vec_t' (aka 'float') in initializer list [-Wc++11-narrowing]
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_fx_entities.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_info.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_main.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_newDraw.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_servercmds.cpp.obj] Error 1

### failure context

- build\windows-x64-debug\client\obj\qcommon\msg.cpp.obj

```
src\server\sv_ccmds.cpp(902,15): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  902 |         SV_Shutdown( "killserver" );
      |                      ^
 1452 |         { PSF( serverCursorHint ), 8}, //----(SA)       added
      |           ^
src\qcommon\msg.cpp(1375,18): note: expanded from macro 'PSF'
 1375 | #define PSF( x ) # x,(int)&( (playerState_t*)0 )->x
      |                  ^
<scratch space>(79,1): note: expanded from here
   79 | "serverCursorHint"
      | ^
src\qcommon\msg.cpp(1453,4): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1453 |         { PSF( serverCursorHintVal ), 8}, //----(SA)    added
      |           ^
src\qcommon\msg.cpp(1375,18): note: expanded from macro 'PSF'
 1375 | #define PSF( x ) # x,(int)&( (playerState_t*)0 )->x
      |                  ^
<scratch space>(80,1): note: expanded from here
   80 | "serverCursorHintVal"
      | ^
src\qcommon\msg.cpp(1456,4): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1456 |         { PSF( footstepCount ), 0},
      |           ^
src\qcommon\msg.cpp(1375,18): note: expanded from macro 'PSF'
 1375 | #define PSF( x ) # x,(int)&( (playerState_t*)0 )->x
      |                  ^
<scratch space>(81,1): note: expanded from here
   81 | "footstepCount"
      | ^
294 warnings and 1 error generated.
scons: *** [build\windows-x64-debug\client\obj\qcommon\msg.cpp.obj] Error 1
```

- build\windows-x64-debug\client\obj\renderer\tr_image.cpp.obj

```
src\renderer\tr_init.cpp(1175,7): warning: cast to smaller integer type 'int' from 'float (*)[4]' [-Wpointer-to-int-cast]
 1175 |         if ( (int)tess.xyz & 15 ) {
      |              ^~~~~~~~~~~~~
src\renderer\tr_image.cpp(1584,36): error: member reference type 'jpgOutputBuffer_t' is not a pointer; did you mean to use '.'?
 1584 |         out.buffer = ( byte * )malloc( out->capacity );
      |                                        ~~~^~
      |                                           .
src\renderer\tr_image.cpp(1662,37): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1662 |                 ri.Cmd_ExecuteText( EXEC_NOW, va( "cache_usedfile image %s %i %i %i %i\n", name, mipmap, allowPicmip, characterMIP, glWrapClampMode ) );
      |                                                   ^
src\renderer\tr_image.cpp(1837,8): warning: variable 'g' set but not used [-Wunused-but-set-variable]
 1837 |         float g;
      |               ^
src\renderer\tr_image.cpp(2144,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 2144 |                 return "";
      |                        ^
7 warnings generated.
src\renderer\tr_image.cpp(3079,8): warning: variable 'name' set but not used [-Wunused-but-set-variable]
 3079 |         char *name;
      |               ^
src\renderer\tr_image.cpp(3237,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
 3237 |         image_t *bImage, *bImagePrev;
      |                           ^
src\renderer\tr_image.cpp(3346,59): warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
 3346 |                 R_FindImageFileExt( name, parms[0], parms[1], parms[2], parms[3] );
      |                                                                         ^     ~
src\renderer\tr_image.cpp(3324,2): note: array 'parms' declared here
 3324 |         int parms[3], i;
      |         ^
12 warnings and 1 error generated.
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_image.cpp.obj] Error 1
```

- build\windows-x64-debug\client\obj\renderer\tr_shader.cpp.obj

```
 1327 |         {"pointlight",   0,  SURF_POINTLIGHT, 0 },   // sample lighting at vertexes
      |          ^
src\renderer\tr_shader.cpp(1328,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1328 |         {"nolightmap",   0,  SURF_NOLIGHTMAP,0 },        // don't generate a lightmap
      |          ^
src\renderer\tr_shader.cpp(1329,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1329 |         {"nodlight", 0,  SURF_NODLIGHT, 0 },     // don't ever add dynamic lights
      |          ^
src\renderer\tr_shader.cpp(1331,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1331 |         {"monsterslicknorth",    0, SURF_MONSLICK_N,0},
      |          ^
src\renderer\tr_shader.cpp(1332,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1332 |         {"monsterslickeast", 0, SURF_MONSLICK_E,0},
      |          ^
src\renderer\tr_shader.cpp(1333,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1333 |         {"monsterslicksouth",    0, SURF_MONSLICK_S,0},
      |          ^
src\renderer\tr_shader.cpp(1334,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1334 |         {"monsterslickwest", 0, SURF_MONSLICK_W,0}
      |          ^
src\renderer\tr_shader.cpp(1640,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1640 |                         ri.Cvar_Set( "r_mapFogColor", va( "0 %d %f %f %f %f 0", fogFar, fogDensity, fogColor[0], fogColor[1], fogColor[2] ) );
      |                                                           ^
src\renderer\tr_shader.cpp(1817,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
 1817 |         { -1 }
      |              ^
src\renderer\tr_shader.cpp(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
 1898 |         if ( stages[0].alphaGen == CGEN_WAVEFORM ) {
      |              ~~~~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
65 warnings and 1 error generated.
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_shader.cpp.obj] Error 1
```

- build\windows-x64-debug\client\obj\renderer\tr_md5.cpp.obj

```
      |         ^
src\sys\win32\win_gamma.cpp(153,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  153 |         GetVersionEx( &vinfo );
      |         ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
src\sys\win32\win_glimp.cpp(1111,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
 1111 |         if ( GetVersionEx( &vinfo ) ) {
      |              ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning generated.
Compiling 'src\sys\win32\win_input.cpp'
1 warning generated.
12 errors generated.
Compiling 'src\sys\win32\win_main.cpp'
scons: *** [build\windows-x64-debug\client\obj\renderer\tr_md5.cpp.obj] Error 1
```

- build\windows-x64-debug\client\obj\sys\win32\win_snd.cpp.obj

```
  155 |                 jmp err
      |                     ^
  331 |                 pDSBuf->lpVtbl->Play( pDSBuf, 0, 0, DSBPLAY_LOOPING );
      |                 ~~~~~~  ^
src\sys\win32\win_snd.cpp(339,30): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
  339 |         while ( ( hresult = pDSBuf->lpVtbl->Lock( pDSBuf, 0, gSndBufSize, &pbuf, &locksize,
      |                             ~~~~~~  ^
src\sys\win32\win_snd.cpp(348,12): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
  348 |                         pDSBuf->lpVtbl->Restore( pDSBuf );
      |                         ~~~~~~  ^
2 errors generated.
src\sys\win32\win_snd.cpp(369,11): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
  369 |                 pDSBuf->lpVtbl->Unlock( pDSBuf, dma.buffer, locksize, NULL, 0 );
      |                 ~~~~~~  ^
src\sys\win32\win_snd.cpp(386,21): error: no member named 'lpVtbl' in 'IDirectSound'
  386 |         if ( DS_OK != pDS->lpVtbl->SetCooperativeLevel( pDS, g_wv.hWnd, DSSCL_PRIORITY ) ) {
      |                       ~~~  ^
19 errors generated.
src\sys\win32\win_syscon.cpp(141,11): warning: cast to smaller integer type 'long' from 'HBRUSH__ *' [-Wpointer-to-int-cast]
  141 |                         return ( long ) s_wcd.hbrEditBackground;
      |                                ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src\sys\win32\win_syscon.cpp(151,11): warning: cast to smaller integer type 'long' from 'HBRUSH__ *' [-Wpointer-to-int-cast]
  151 |                         return ( long ) s_wcd.hbrErrorBackground;
      |                                ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src\sys\win32\win_syscon.cpp(259,19): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  259 |                         Sys_Print( va( "]%s\n", inputBuffer ) );
      |                                        ^
src\sys\win32\win_syscon.cpp(283,21): warning: cast from 'LONG (*)(HWND, UINT, WPARAM, LPARAM) __attribute__((stdcall))' (aka 'long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') to 'WNDPROC' (aka 'long long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') converts to incompatible function type [-Wcast-function-type-mismatch]
  283 |         wc.lpfnWndProc   = (WNDPROC) ConWndProc;
      |                            ^~~~~~~~~~~~~~~~~~~~
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_snd.cpp.obj] Error 1
```

- build\windows-x64-debug\client\obj\sys\win32\win_shared.cpp.obj

```
      |                     ^
  331 |                 pDSBuf->lpVtbl->Play( pDSBuf, 0, 0, DSBPLAY_LOOPING );
      |                 ~~~~~~  ^
src\sys\win32\win_snd.cpp(339,30): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
  339 |         while ( ( hresult = pDSBuf->lpVtbl->Lock( pDSBuf, 0, gSndBufSize, &pbuf, &locksize,
      |                             ~~~~~~  ^
src\sys\win32\win_snd.cpp(348,12): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
  348 |                         pDSBuf->lpVtbl->Restore( pDSBuf );
      |                         ~~~~~~  ^
2 errors generated.
src\sys\win32\win_snd.cpp(369,11): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
  369 |                 pDSBuf->lpVtbl->Unlock( pDSBuf, dma.buffer, locksize, NULL, 0 );
      |                 ~~~~~~  ^
src\sys\win32\win_snd.cpp(386,21): error: no member named 'lpVtbl' in 'IDirectSound'
  386 |         if ( DS_OK != pDS->lpVtbl->SetCooperativeLevel( pDS, g_wv.hWnd, DSSCL_PRIORITY ) ) {
      |                       ~~~  ^
19 errors generated.
src\sys\win32\win_syscon.cpp(141,11): warning: cast to smaller integer type 'long' from 'HBRUSH__ *' [-Wpointer-to-int-cast]
  141 |                         return ( long ) s_wcd.hbrEditBackground;
      |                                ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src\sys\win32\win_syscon.cpp(151,11): warning: cast to smaller integer type 'long' from 'HBRUSH__ *' [-Wpointer-to-int-cast]
  151 |                         return ( long ) s_wcd.hbrErrorBackground;
      |                                ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src\sys\win32\win_syscon.cpp(259,19): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  259 |                         Sys_Print( va( "]%s\n", inputBuffer ) );
      |                                        ^
src\sys\win32\win_syscon.cpp(283,21): warning: cast from 'LONG (*)(HWND, UINT, WPARAM, LPARAM) __attribute__((stdcall))' (aka 'long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') to 'WNDPROC' (aka 'long long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') converts to incompatible function type [-Wcast-function-type-mismatch]
  283 |         wc.lpfnWndProc   = (WNDPROC) ConWndProc;
      |                            ^~~~~~~~~~~~~~~~~~~~
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_snd.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_shared.cpp.obj] Error 1
```

- build\windows-x64-debug\client\obj\sys\win32\win_syscon.cpp.obj

```
src\sys\win32\win_snd.cpp(369,11): error: no member named 'lpVtbl' in 'IDirectSoundBuffer'
  369 |                 pDSBuf->lpVtbl->Unlock( pDSBuf, dma.buffer, locksize, NULL, 0 );
      |                 ~~~~~~  ^
src\sys\win32\win_snd.cpp(386,21): error: no member named 'lpVtbl' in 'IDirectSound'
  386 |         if ( DS_OK != pDS->lpVtbl->SetCooperativeLevel( pDS, g_wv.hWnd, DSSCL_PRIORITY ) ) {
      |                       ~~~  ^
19 errors generated.
src\sys\win32\win_syscon.cpp(141,11): warning: cast to smaller integer type 'long' from 'HBRUSH__ *' [-Wpointer-to-int-cast]
  141 |                         return ( long ) s_wcd.hbrEditBackground;
      |                                ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src\sys\win32\win_syscon.cpp(151,11): warning: cast to smaller integer type 'long' from 'HBRUSH__ *' [-Wpointer-to-int-cast]
  151 |                         return ( long ) s_wcd.hbrErrorBackground;
      |                                ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src\sys\win32\win_syscon.cpp(259,19): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  259 |                         Sys_Print( va( "]%s\n", inputBuffer ) );
      |                                        ^
src\sys\win32\win_syscon.cpp(283,21): warning: cast from 'LONG (*)(HWND, UINT, WPARAM, LPARAM) __attribute__((stdcall))' (aka 'long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') to 'WNDPROC' (aka 'long long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') converts to incompatible function type [-Wcast-function-type-mismatch]
  283 |         wc.lpfnWndProc   = (WNDPROC) ConWndProc;
      |                            ^~~~~~~~~~~~~~~~~~~~
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_snd.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_shared.cpp.obj] Error 1
Compiling 'src\splines\math_angles.cpp'
Compiling 'src\splines\math_matrix.cpp'
src\sys\win32\win_syscon.cpp(394,78): error: use of undeclared identifier 'GWL_WNDPROC'
  394 |         s_wcd.SysInputLineWndProc = ( WNDPROC ) SetWindowLong( s_wcd.hwndInputLine, GWL_WNDPROC, ( long ) InputLineWndProc );
      |                                                                                     ^~~~~~~~~~~
src\sys\win32\win_syscon.cpp(394,91): warning: cast to smaller integer type 'long' from 'long (*)(HWND__ *, unsigned int, unsigned long long, long long)' [-Wpointer-to-int-cast]
  394 |         s_wcd.SysInputLineWndProc = ( WNDPROC ) SetWindowLong( s_wcd.hwndInputLine, GWL_WNDPROC, ( long ) InputLineWndProc );
      |                                                                                                  ^~~~~~~~~~~~~~~~~~~~~~~~~
5 warnings and 1 error generated.
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_syscon.cpp.obj] Error 1
```

- build\windows-x64-debug\game\obj\games\game\bg_misc.cpp.obj

```
      |         ^
src\games\game\bg_misc.cpp(4317,2): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 4317 |         "EV_RUMBLE_EFX",
      |         ^
src\games\game\bg_misc.cpp(4318,2): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 4318 |         "EV_GUNSPARKS",
      |         ^
src\games\game\bg_misc.cpp(4319,2): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 4319 |         "EV_FLAMETHROWER_EFFECT",
      |         ^
src\games\game\bg_misc.cpp(4320,2): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 4320 |         "EV_SNIPER_SOUND",
      |         ^
src\games\game\bg_misc.cpp(4321,2): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 4321 |         "EV_POPUP",
      |         ^
src\games\game\bg_misc.cpp(4322,2): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 4322 |         "EV_POPUPBOOK",
      |         ^
src\games\game\bg_misc.cpp(4323,2): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 4323 |         "EV_GIVEPAGE",
      |         ^
src\games\game\bg_misc.cpp(4324,2): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 4324 |         "EV_CLOSEMENU",
      |         ^
src\games\game\bg_misc.cpp(4326,2): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 4326 |         "EV_MAX_EVENTS"
      |         ^
908 warnings and 1 error generated.
Compiling 'src\games\game\g_alarm.cpp'
scons: *** [build\windows-x64-debug\game\obj\games\game\bg_misc.cpp.obj] Error 1
```

- build\windows-x64-debug\game\obj\games\game\g_save.cpp.obj

```
 1409 |         filename = "save\\current.svg";
      |                    ^
src\games\game\g_save.cpp(1443,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1443 |                 trap_Cvar_Set( "g_totalPlayTime", va( "%i", i ) );
      |                                                       ^
src\games\game\g_save.cpp(1451,35): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1451 |                 trap_Cvar_Set( "g_episode", va( "%i", i ) );
      |                                                 ^
src\games\game\g_save.cpp(1476,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1476 |                                         trap_SendServerCommand( -1, va( "mu_start %s 1000\n", musicString ) );       // (SA) trying this instead
      |                                                                         ^
src\games\game\g_save.cpp(1521,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1521 |                         trap_Cvar_Set( "g_gameskill", va( "%i",i ) );
      |                                                           ^
src\games\game\g_save.cpp(1569,20): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1569 |                 ent->classname = "freed";
      |                                  ^
src\games\game\g_save.cpp(1642,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1642 |                         trap_Cvar_Set( "g_gameskill", va( "%i",i ) );
      |                                                           ^
src\games\game\g_save.cpp(1656,35): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1656 |         trap_Cvar_Set( "g_attempts", va( "%i", g_attempts.integer + 1 ) );
      |                                          ^
src\games\game\g_save.cpp(1820,31): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1820 |         trap_Cvar_Set( "persid", va( "%i", persid ) );
      |                                      ^
src\games\game\g_save.cpp(1869,13): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
 1869 |         filename = "save\\current.psw";
      |                    ^
43 warnings and 13 errors generated.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_save.cpp.obj] Error 1
```

- build\windows-x64-debug\game\obj\games\game\ai\ai_events.cpp.obj

```
  116 |         AICast_ScriptEvent( cs, "pain", va( "%d %d", targ->health, targ->health + damage ) );
      |                                 ^
src\games\game\ai\ai_events.cpp(370,3): error: no matching function for call to 'AICast_ScriptEvent'
  370 |                 AICast_ScriptEvent( cs, "death", attacker->aiName ? attacker->aiName : "" );
      |                 ^~~~~~~~~~~~~~~~~~
src\games\game\ai\ai_script.h(36,6): note: candidate function not viable: 3rd argument ('const char *') would lose const qualifier
   36 | void AICast_ScriptEvent( struct cast_state_s *cs, char *eventStr, char *params );
      |      ^                                                            ~~~~~~~~~~~~
src\games\game\ai\ai_events.cpp(377,27): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  377 |                 AICast_ScriptEvent( cs, "fakedeath", "" );
      |                                         ^
src\games\game\ai\ai_events.cpp(377,40): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  377 |                 AICast_ScriptEvent( cs, "fakedeath", "" );
      |                                                      ^
src\games\game\ai\ai_events.cpp(496,28): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  496 |                         AICast_ScriptEvent( cs, "activate", g_entities[activatorNum].aiName );
      |                                                 ^
src\games\game\ai\ai_events.cpp(504,26): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  504 |         AICast_ScriptEvent( cs, "activate", g_entities[activatorNum].aiName );
      |                                 ^
src\games\game\ai\ai_events.cpp(529,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  529 |                 newent->classname = "AI_wait_goal";
      |                                     ^
src\games\game\ai\ai_events.cpp(480,28): warning: variable 'activator' set but not used [-Wunused-but-set-variable]
  480 |         gentity_t *newent, *ent, *activator;
      |                                   ^
src\games\game\ai\ai_events.cpp(481,13): warning: variable 'client' set but not used [-Wunused-but-set-variable]
  481 |         gclient_t *client;
      |                    ^
14 warnings and 1 error generated.
scons: *** [build\windows-x64-debug\game\obj\games\game\ai\ai_events.cpp.obj] Error 1
```


### warning kinds

- [5822x] -writable-strings
  - src\client\cl_cin.cpp(1436,39): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_cgame.cpp(904,22): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(67,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(68,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(69,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(70,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(71,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(72,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(73,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(74,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(75,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(77,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(78,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(79,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(81,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(84,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(85,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(86,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(87,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(88,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(89,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(90,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(91,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(92,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(93,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(94,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(95,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(97,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(98,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(99,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(100,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(101,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(102,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(104,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(105,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(106,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(107,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(108,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(110,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(111,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(113,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(114,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(115,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(116,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(117,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(118,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(119,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(120,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(121,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(122,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(123,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(124,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(125,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(126,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(127,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(128,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(129,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(130,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(131,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(132,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(133,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(134,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(135,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(136,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(137,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(138,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(139,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(140,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(141,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(142,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(143,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(144,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(146,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(147,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(148,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(149,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(150,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(151,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(152,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(153,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(154,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(155,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(156,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(157,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(158,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(159,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(160,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(161,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(163,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(164,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(165,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(166,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(167,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(168,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(169,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(170,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(171,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(172,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(173,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(174,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(175,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(176,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(177,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(178,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(179,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(180,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(182,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(184,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(186,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(193,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(194,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(195,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(196,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(197,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(198,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(199,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(200,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(201,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(203,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(204,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(205,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(207,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(209,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(210,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(211,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(212,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(213,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(214,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(215,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(216,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(217,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(218,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(219,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(220,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(222,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(223,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(224,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(225,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(226,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(227,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(229,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(230,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(231,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(232,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(233,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(235,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(236,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(238,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(239,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(240,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(241,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(242,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(243,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(244,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(245,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(246,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(247,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(248,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(249,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(250,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(251,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(252,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(253,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(254,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(255,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(256,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(257,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(258,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(259,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(260,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(261,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(262,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_main.cpp(923,58): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(263,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(264,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(265,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_main.cpp(1013,20): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(266,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_main.cpp(1043,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(267,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(268,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(269,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(271,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(272,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(273,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(274,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(275,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(276,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(277,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(278,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(279,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(280,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(281,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(282,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(283,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(284,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(285,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(286,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(288,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(289,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(290,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(291,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(292,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(293,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(294,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(295,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(296,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(297,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_main.cpp(1172,29): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(298,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(299,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(300,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(301,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(302,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(303,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(304,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(305,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(307,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(309,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(315,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(316,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(317,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(318,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(319,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(320,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(321,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(322,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(323,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_main.cpp(1409,29): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(325,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(326,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(327,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(329,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(331,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(332,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(333,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(334,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(335,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(336,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(337,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(338,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(339,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(340,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(341,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(342,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(344,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(345,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(346,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(347,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(348,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(349,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(351,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(352,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(353,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(354,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(355,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(357,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(358,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(360,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(361,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(362,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(363,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(364,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(365,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(366,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(367,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(368,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(369,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(370,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(371,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(372,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(373,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(374,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(375,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(376,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(377,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(378,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(379,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(380,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(381,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(382,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(383,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(384,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(385,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(386,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(387,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(388,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(389,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(390,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(391,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(393,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(394,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(395,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(396,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(397,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(398,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_main.cpp(1529,46): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(399,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(400,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(401,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(402,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(403,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(404,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(405,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(406,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(407,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(408,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(410,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_main.cpp(1530,43): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(411,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(412,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(413,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(414,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(415,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(416,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(417,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_main.cpp(1531,47): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(418,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(419,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(420,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(421,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(422,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(423,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(424,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(425,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(426,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(427,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(429,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(431,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(438,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(439,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(440,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(441,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(442,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(443,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(444,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(445,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(446,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(448,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(449,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(450,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(452,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(454,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(455,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(456,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(457,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(458,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(459,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(460,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(461,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(462,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(463,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(464,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(465,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(467,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(468,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(469,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(470,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(471,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(472,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(474,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(475,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(476,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_main.cpp(1969,30): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(477,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(478,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(480,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(481,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(483,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(484,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(485,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(486,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(487,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(488,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(489,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(490,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(491,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(492,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(493,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(494,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(495,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(496,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(497,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(498,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_main.cpp(2414,20): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(499,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(500,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(501,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(502,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(503,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(504,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(505,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(506,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(507,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(508,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(509,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(510,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(511,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(512,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\client\cl_keys.cpp(513,3): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [223x] -pointer-to-int-cast
  - src\client\cl_cin.cpp(1105,39): warning: cast to smaller integer type 'unsigned int' from 'unsigned char *' [-Wpointer-to-int-cast]
  - src\client\cl_cin.cpp(1105,68): warning: cast to smaller integer type 'unsigned int' from 'unsigned char *' [-Wpointer-to-int-cast]
  - src\client\cl_cin.cpp(1106,41): warning: cast to smaller integer type 'unsigned int' from 'unsigned char *' [-Wpointer-to-int-cast]
  - src\client\cl_cin.cpp(1106,110): warning: cast to smaller integer type 'unsigned int' from 'unsigned char *' [-Wpointer-to-int-cast]
  - src\qcommon\common.cpp(1098,29): warning: cast to smaller integer type 'int' from 'unsigned char *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(948,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(949,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(950,4): warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(951,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(952,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(953,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(954,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(955,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(956,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(957,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(958,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(959,4): warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(960,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(961,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(962,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(963,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(964,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(965,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(966,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(967,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(968,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(969,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(970,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(971,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(972,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(973,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(974,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(975,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(976,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(977,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(978,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(979,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(980,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(981,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(982,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(983,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(984,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(985,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(986,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(987,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(988,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(989,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(990,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(991,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(992,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(993,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(994,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(995,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(996,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(997,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(998,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(999,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1000,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1001,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1002,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1003,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1004,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1005,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1006,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1007,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1008,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1009,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1010,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1011,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1012,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1013,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1014,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1015,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1016,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1017,4): warning: cast to smaller integer type 'int' from 'aistateEnum_t *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1018,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1379,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1380,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1381,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1382,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1383,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1384,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1385,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1386,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1387,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1388,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1389,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1390,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1391,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1392,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1393,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1394,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1395,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1396,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1397,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1398,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1399,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1400,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1401,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1402,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1403,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1404,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1405,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1406,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1407,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1408,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1409,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1410,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1411,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1412,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1413,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1414,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1415,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1416,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1417,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1418,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1419,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1420,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1421,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1422,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1423,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1424,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1425,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1426,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1427,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1428,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1429,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1430,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1431,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1432,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1433,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1434,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1435,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1436,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1437,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1438,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1439,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1440,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1441,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1442,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1443,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1444,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1445,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1446,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1447,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1448,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1449,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1450,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1451,4): warning: cast to smaller integer type 'int' from 'aistateEnum_t *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1452,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1453,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.cpp(1456,4): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\renderer\tr_bsp.cpp(379,14): warning: cast to smaller integer type 'int' from 'float (*)[8]' [-Wpointer-to-int-cast]
  - src\renderer\tr_init.cpp(1175,7): warning: cast to smaller integer type 'int' from 'float (*)[4]' [-Wpointer-to-int-cast]
  - src\sys\win32\win_input.cpp(859,7): warning: cast to smaller integer type 'unsigned long' from 'void (*)(HMIDIIN__ *, unsigned int, unsigned long, unsigned long, unsigned long)' [-Wpointer-to-int-cast]
  - src\sys\win32\win_main.cpp(1194,39): warning: cast to smaller integer type 'int' from 'HINSTANCE__ *' [-Wpointer-to-int-cast]
  - src\sys\win32\win_main.cpp(1195,37): warning: cast to smaller integer type 'int' from 'long (*)(HWND__ *, unsigned int, unsigned long long, long long)' [-Wpointer-to-int-cast]
  - src\sys\win32\win_syscon.cpp(141,11): warning: cast to smaller integer type 'long' from 'HBRUSH__ *' [-Wpointer-to-int-cast]
  - src\sys\win32\win_syscon.cpp(151,11): warning: cast to smaller integer type 'long' from 'HBRUSH__ *' [-Wpointer-to-int-cast]
  - src\sys\win32\win_syscon.cpp(394,91): warning: cast to smaller integer type 'long' from 'long (*)(HWND__ *, unsigned int, unsigned long long, long long)' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_goal.cpp(144,11): warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_goal.cpp(145,12): warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_goal.cpp(146,17): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_goal.cpp(147,11): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_goal.cpp(148,12): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_goal.cpp(149,18): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_goal.cpp(150,11): warning: cast to smaller integer type 'int' from 'float (*)[3]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_goal.cpp(151,11): warning: cast to smaller integer type 'int' from 'float (*)[3]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(63,13): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(64,11): warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(65,12): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(66,12): warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(67,18): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(68,12): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(69,17): warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(70,21): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(71,14): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(72,14): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(73,12): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(74,19): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(75,13): warning: cast to smaller integer type 'int' from 'float (*)[3]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(76,13): warning: cast to smaller integer type 'int' from 'float (*)[3]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(77,18): warning: cast to smaller integer type 'int' from 'float (*)[3]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(78,21): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(79,17): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(80,16): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(81,15): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(82,13): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(83,13): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(84,15): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(91,11): warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(92,12): warning: cast to smaller integer type 'int' from 'char (*)[80]' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(93,12): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(94,14): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(95,13): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(96,13): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(97,16): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(98,17): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(99,16): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(100,11): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(101,17): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(102,13): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(103,17): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\botlib\be_ai_weap.cpp(104,17): warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
  - src\games\game\g_save.cpp(147,3): warning: cast to smaller integer type 'int' from 'char *(**)(cast_state_s *)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.cpp(148,3): warning: cast to smaller integer type 'int' from 'char *(**)(cast_state_s *)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.cpp(149,3): warning: cast to smaller integer type 'int' from 'void (**)(gentity_s *, gentity_s *, int, float *)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.cpp(150,3): warning: cast to smaller integer type 'int' from 'void (**)(gentity_s *, gentity_s *, int, int)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.cpp(151,3): warning: cast to smaller integer type 'int' from 'void (**)(gentity_s *, gentity_s *, int)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.cpp(152,3): warning: cast to smaller integer type 'int' from 'void (**)(gentity_s *, gentity_s *)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.cpp(153,3): warning: cast to smaller integer type 'int' from 'void (**)(gentity_s *, gentity_s *)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.cpp(154,3): warning: cast to smaller integer type 'int' from 'void (**)(int, int)' [-Wpointer-to-int-cast]
  - src\games\game\g_save.cpp(189,3): warning: cast to smaller integer type 'int' from 'ai_client_state_t **' [-Wpointer-to-int-cast]
  - src\games\game\g_save.cpp(190,3): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\games\game\g_save.cpp(191,3): warning: cast to smaller integer type 'int' from 'cast_script_event_t **' [-Wpointer-to-int-cast]
  - src\games\game\g_save.cpp(192,3): warning: cast to smaller integer type 'int' from 'cast_weapon_info_t **' [-Wpointer-to-int-cast]
  - src\games\cgame\cg_event.cpp(561,16): warning: cast to smaller integer type 'int' from 'refEntity_t *' [-Wpointer-to-int-cast]
  - src\games\cgame\cg_event.cpp(562,20): warning: cast to smaller integer type 'int' from 'refEntity_t *' [-Wpointer-to-int-cast]
  - src\games\cgame\cg_event.cpp(563,20): warning: cast to smaller integer type 'int' from 'refEntity_t *' [-Wpointer-to-int-cast]
  - src\games\cgame\cg_event.cpp(564,19): warning: cast to smaller integer type 'int' from 'refEntity_t *' [-Wpointer-to-int-cast]
  - src\games\cgame\cg_event.cpp(565,20): warning: cast to smaller integer type 'int' from 'refEntity_t *' [-Wpointer-to-int-cast]
  - src\games\cgame\cg_event.cpp(566,19): warning: cast to smaller integer type 'int' from 'refEntity_t *' [-Wpointer-to-int-cast]
  - src\games\cgame\cg_event.cpp(567,20): warning: cast to smaller integer type 'int' from 'refEntity_t *' [-Wpointer-to-int-cast]
- [184x] -missing-field-initializers
  - src\client\cl_main.cpp(2083,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.cpp(2084,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.cpp(2085,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\renderer\tr_shader.cpp(1817,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.cpp(144,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.cpp(145,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.cpp(146,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.cpp(147,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.cpp(148,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.cpp(149,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.cpp(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.cpp(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.cpp(152,10): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(63,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(64,40): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(65,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(66,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(67,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(68,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(69,52): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(70,57): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(71,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(72,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(73,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(74,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(78,59): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(79,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(80,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(81,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(82,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(83,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(84,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(85,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(91,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(92,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(93,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(94,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(95,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(96,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(97,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(98,53): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(99,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(100,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(101,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(102,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(103,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(104,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.cpp(106,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\l_script.cpp(172,10): warning: missing field 'next' initializer [-Wmissing-field-initializers]
  - src\games\game\bg_misc.cpp(3458,7): warning: missing field 'pickup_sound' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(145,42): warning: missing field 'trackChange' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(148,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(149,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(150,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(151,67): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(154,77): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(157,79): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(160,47): warning: missing field 'modificationCount' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(163,88): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(164,90): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(165,94): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(166,100): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(167,88): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(168,98): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(172,63): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(174,97): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(175,104): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(178,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(179,95): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(180,94): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(181,100): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(183,82): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(185,68): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(187,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(188,49): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(189,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(190,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(192,61): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(193,56): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(195,50): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(197,45): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(198,49): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(199,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(200,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(201,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(202,67): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(203,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(204,52): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(205,51): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(206,55): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(207,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(208,65): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(209,77): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(211,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(214,40): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(215,45): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(217,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(218,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(220,51): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(221,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(223,69): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(225,58): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(227,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(229,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(231,48): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(233,56): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(235,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(236,58): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(237,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(238,62): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(241,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(243,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(244,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(246,82): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(248,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.cpp(249,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(111,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(112,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(113,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(114,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(115,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(116,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(117,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(118,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(119,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(120,54): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(121,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(122,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(123,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(124,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(125,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(126,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(127,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(128,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(129,47): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(130,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(131,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(132,52): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(134,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(135,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(137,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(138,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(141,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(142,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(143,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(147,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(148,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(153,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(154,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(155,52): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(159,47): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(162,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(166,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(170,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(171,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(175,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(176,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(182,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(183,38): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(185,32): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(188,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(190,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(192,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.cpp(194,7): warning: missing field 'ofs' initializer [-Wmissing-field-initializers]
  - src\games\game\ai\ai_characters.cpp(30,6): warning: missing field 'attributes' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.cpp(1402,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.cpp(1403,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.cpp(1404,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.cpp(1405,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.cpp(1406,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.cpp(1407,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.cpp(1424,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.cpp(1425,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.cpp(1426,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.cpp(1427,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.cpp(1428,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.cpp(1429,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.cpp(1430,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_info.cpp(189,9): warning: missing field 'YOfs' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_players.cpp(2911,11): warning: missing field 'maxdist' initializer [-Wmissing-field-initializers]
- [146x] -unused-but-set-variable
  - src\client\cl_input.cpp(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.cpp(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.cpp(1106,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.cpp(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.cpp(186,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.cpp(2749,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.cpp(2853,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.cpp(3552,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.cpp(3553,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.cpp(3554,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
  - src\client\cl_scrn.cpp(386,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\client\snd_dma.cpp(558,8): warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src\client\snd_mix.cpp(793,10): warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.cpp(738,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.cpp(824,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cmd.cpp(247,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.cpp(945,6): warning: variable 'sum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.cpp(1014,12): warning: variable 'locsize' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.cpp(2270,6): warning: variable 'key' set but not used [-Wunused-but-set-variable]
  - src\qcommon\files.cpp(2766,20): warning: variable 'badchecksum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\net_chan.cpp(318,6): warning: variable 'qport' set but not used [-Wunused-but-set-variable]
  - src\qcommon\unzip.cpp(2139,16): warning: variable 'bufBefore' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.cpp(195,6): warning: variable 'area1' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.cpp(195,13): warning: variable 'area2' set but not used [-Wunused-but-set-variable]
  - src\server\sv_snapshot.cpp(303,6): warning: variable 'c_fullsend' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.cpp(406,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.cpp(701,15): warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_bsp.cpp(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_flares.cpp(128,23): warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_font.cpp(351,8): warning: variable 'glyphScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.cpp(1837,8): warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.cpp(3079,8): warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.cpp(3237,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_main.cpp(1181,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.cpp(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.cpp(911,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.cpp(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade_calc.cpp(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.cpp(103,6): warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.cpp(103,15): warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src\qcommon\q_shared.cpp(434,9): warning: variable 'pc' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.cpp(527,6): warning: variable 'err' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.cpp(703,6): warning: variable 'error' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_chat.cpp(2782,19): warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_gen.cpp(59,13): warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_goal.cpp(241,19): warning: variable 'gs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.cpp(1553,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.cpp(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_precomp.cpp(1661,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_script.cpp(389,14): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_active.cpp(577,8): warning: variable 'fallSoundMul' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_active.cpp(1568,23): warning: variable 'pers' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_combat.cpp(898,6): warning: variable 'save' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_cmds.cpp(2019,6): warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_main.cpp(405,35): warning: variable 'oldHintType' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_main.cpp(2371,6): warning: variable 'msec' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_missile.cpp(432,6): warning: variable 'etype' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_mover.cpp(1698,8): warning: variable 'distance' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_mover.cpp(2150,6): warning: variable 'soundrange' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_props.cpp(888,11): warning: variable 'prop_hits' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_target.cpp(990,17): warning: variable 'dayaw' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_tramcar.cpp(212,8): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_weapon.cpp(160,13): warning: variable 'ent2' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_weapon.cpp(867,13): warning: variable 'sniperEnt' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_weapon.cpp(1078,8): warning: variable 'oldHealth' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_weapon.cpp(1337,6): warning: variable 'oldScore' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_danger.cpp(97,21): warning: variable 'dcs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_events.cpp(480,28): warning: variable 'activator' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_events.cpp(481,13): warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_input.cpp(104,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_input.cpp(378,18): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_input.cpp(378,25): warning: variable 'clCount' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_movement.cpp(290,43): warning: variable 'bestyaw' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_movement.cpp(296,27): warning: variable 'besttraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_movement.cpp(300,16): warning: variable 'simTime' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_navigation.cpp(291,8): warning: variable 'attack_skill' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_navigation.cpp(291,22): warning: variable 'croucher' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_perception.cpp(472,21): warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_perception.cpp(827,17): warning: variable 'destcount' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_script_actions_animation.cpp(75,29): warning: variable 'setAngles' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_script_actions_mission.cpp(1309,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_targeting.cpp(40,16): warning: variable 'oldPauseTime' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_weapons.cpp(404,13): warning: variable 'oldweap' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\ai_weapons.cpp(472,7): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_behavior_cover.cpp(36,14): warning: variable 'moveDist' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_behavior_cover.cpp(40,7): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_behavior_cover.cpp(361,7): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_behavior_doors.cpp(35,21): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_behavior_grenades.cpp(267,7): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_behavior_grenades.cpp(606,7): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_behavior_grenades.cpp(612,6): warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_behavior_grenades.cpp(917,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_behavior_investigate.cpp(358,13): warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_behavior_pursuit.cpp(501,19): warning: variable 'shouldAttack' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_behavior_pursuit.cpp(432,25): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_behavior_pursuit.cpp(433,21): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_behavior_pursuit.cpp(439,16): warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_behavior_pursuit.cpp(440,7): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_boss_heinrich.cpp(194,16): warning: variable 'ecs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_boss_heinrich.cpp(627,20): warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_boss_heinrich.cpp(702,20): warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_boss_heinrich.cpp(764,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_boss_helga.cpp(42,21): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_combat.cpp(34,6): warning: variable 'tfl' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_combat.cpp(438,7): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_combat.cpp(513,7): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_combat.cpp(536,7): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_combat.cpp(613,7): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_monster_zombie.cpp(46,21): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai\fsm\ai_monster_zombie.cpp(165,21): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.cpp(174,16): warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.cpp(182,6): warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_effects.cpp(313,6): warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.cpp(393,6): warning: variable 'offsetwhole' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.cpp(946,8): warning: variable 'scale' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.cpp(1800,23): warning: variable 'traplf' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.cpp(739,15): warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.cpp(1073,6): warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.cpp(1364,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_fx_entities.cpp(370,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_fx_entities.cpp(397,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_fx_flame.cpp(672,6): warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_fx_flame.cpp(1054,26): warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_fx_flame.cpp(1400,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_info.cpp(210,8): warning: variable 'formatStr' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.cpp(202,15): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.cpp(391,19): warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.cpp(190,6): warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.cpp(1780,26): warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.cpp(2444,15): warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.cpp(2601,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.cpp(4526,16): warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_sound.cpp(238,6): warning: variable 's' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_view.cpp(198,18): warning: variable 'lbdiff' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.cpp(402,6): warning: variable 'contents' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_view.cpp(976,8): warning: variable 'redFlash' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.cpp(403,6): warning: variable 'lastContents' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.cpp(1876,8): warning: variable 'ramp' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.cpp(2795,19): warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.cpp(2798,13): warning: variable 'oldtime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.cpp(3609,8): warning: variable 'shake' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.cpp(4030,6): warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.cpp(4933,6): warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.cpp(5857,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.cpp(5904,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
- [52x] -deprecated-declarations
  - src\sys\win32\win_gamma.cpp(153,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.cpp(1111,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.cpp(1166,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.h(420,11): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(272,9): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(274,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(276,17): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(276,52): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(278,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(280,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(282,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(284,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(286,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(288,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(290,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(292,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(292,58): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(294,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(296,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(298,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(300,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(322,10): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(325,10): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxScheduler.cpp(483,9): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(268,9): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(270,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(272,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(274,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(276,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(646,9): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(648,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(650,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(652,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(654,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(656,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(658,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(660,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(662,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(664,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(666,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(701,9): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(703,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
  - src\games\cgame\fx\FxTemplate.cpp(705,15): warning: 'stricmp' is deprecated: The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for details. [-Wdeprecated-declarations]
- [20x] -inconsistent-missing-override
  - src\games\cgame\fx\FxPrimitives.h(273,14): warning: 'Die' overrides a member function but is not marked 'override' [-Winconsistent-missing-override]
  - src\games\cgame\fx\FxPrimitives.h(274,14): warning: 'Update' overrides a member function but is not marked 'override' [-Winconsistent-missing-override]
- [18x] -invalid-source-encoding
  - src\client\cl_keys.cpp(197,5): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.cpp(450,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.cpp(452,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.cpp(469,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.cpp(470,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.cpp(474,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.cpp(475,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.cpp(476,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.cpp(477,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.cpp(478,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.cpp(535,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.cpp(541,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.cpp(570,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.cpp(595,9): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.cpp(607,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.cpp(666,16): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.cpp(667,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.cpp(680,4): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
- [10x] -pointer-bool-conversion
  - src\client\snd_dma.cpp(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai\ai_script_actions_combat.cpp(533,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_drawtools.cpp(148,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_ents.cpp(397,14): warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [10x] -unused-variable
  - src\sys\win32\win_input.cpp(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.cpp(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.cpp(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.cpp(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.cpp(599,13): warning: unused variable 'lastWarning' [-Wunused-variable]
  - src\sys\win32\win_main.cpp(704,22): warning: unused variable 'stream' [-Wunused-variable]
  - src\games\cgame\cg_effects.cpp(166,57): warning: unused variable 'ndir' [-Wunused-variable]
  - src\games\cgame\cg_fx_entities.cpp(67,16): warning: unused variable 'col' [-Wunused-variable]
  - src\games\cgame\fx\FxScheduler.cpp(1009,9): warning: unused variable 'origin' [-Wunused-variable]
  - src\games\cgame\fx\FxScheduler.cpp(1010,9): warning: unused variable 'axis' [-Wunused-variable]
- [9x] -deprecated-register
  - src\qcommon\common.cpp(694,6): warning: 'register' storage class specifier is deprecated and incompatible with C++17 [-Wdeprecated-register]
  - src\qcommon\unzip.cpp(3146,2): warning: 'register' storage class specifier is deprecated and incompatible with C++17 [-Wdeprecated-register]
  - src\qcommon\unzip.cpp(3147,2): warning: 'register' storage class specifier is deprecated and incompatible with C++17 [-Wdeprecated-register]
  - src\qcommon\unzip.cpp(3148,2): warning: 'register' storage class specifier is deprecated and incompatible with C++17 [-Wdeprecated-register]
  - src\qcommon\unzip.cpp(3151,2): warning: 'register' storage class specifier is deprecated and incompatible with C++17 [-Wdeprecated-register]
  - src\qcommon\unzip.cpp(3155,2): warning: 'register' storage class specifier is deprecated and incompatible with C++17 [-Wdeprecated-register]
  - src\games\botlib\l_precomp.cpp(544,6): warning: 'register' storage class specifier is deprecated and incompatible with C++17 [-Wdeprecated-register]
- [6x] -sizeof-pointer-memaccess
  - src\qcommon\cvar.cpp(764,28): warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(807,29): warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(999,32): warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]
  - src\games\game\ai\ai_system.cpp(458,33): warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'struct cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'struct cast_state_s *') [-Wsizeof-pointer-memaccess]
- [2x] need to modify cg_event.c at "// check the sequencial list" if you change this
  - 995 |         { NETF( eventSequence ), 8 }, // warning: need to modify cg_event.c at "// check the sequencial list" if you change this
- [2x] -array-bounds
  - src\renderer\tr_image.cpp(3346,59): warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src\renderer\tr_shade_calc.cpp(679,2): warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src\renderer\tr_shader.cpp(986,23): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src\renderer\tr_shader.cpp(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -format
  - src\games\botlib\l_precomp.cpp(2441,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
  - src\games\botlib\l_precomp.cpp(2547,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [2x] -sizeof-array-argument
  - src\games\game\bg_animation.cpp(807,27): warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -logical-not-parentheses
  - src\games\game\g_client.cpp(1531,8): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src\games\game\g_client.cpp(1608,9): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [2x] -self-assign
  - src\games\cgame\cg_view.cpp(875,11): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src\games\cgame\cg_view.cpp(1387,12): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
- [1x] -strncat-size
  - src\client\cl_main.cpp(2841,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -int-to-pointer-cast
  - src\qcommon\common.cpp(1098,15): warning: cast to 'unsigned char *' from smaller integer type 'int' [-Wint-to-pointer-cast]
- [1x] -null-dereference
  - src\qcommon\common.cpp(1799,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src\qcommon\unzip.cpp(2066,45): warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -unused-const-variable
  - src\qcommon\unzip.cpp(3045,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] -cast-function-type-mismatch
  - src\sys\win32\win_syscon.cpp(283,21): warning: cast from 'LONG (*)(HWND, UINT, WPARAM, LPARAM) __attribute__((stdcall))' (aka 'long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') to 'WNDPROC' (aka 'long long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') converts to incompatible function type [-Wcast-function-type-mismatch]
- [1x] nested namespace definition is a C++17 extension; define each namespace separately [-Wc++17-extensio
  - src\games\botlib\../../qcommon/wolf_nav.h(5,15): warning: nested namespace definition is a C++17 extension; define each namespace separately [-Wc++17-extensions]
- [1x] -char-subscripts
  - src\games\cgame\cg_newDraw.cpp(1830,24): warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

