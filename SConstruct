# RTCW-SP SCons build
#
# Full SCons port of the project. Replaces the legacy cons scripts
# (src/sys/unix/Construct) and the VS2008 solution (src/wolf.sln).
# The toolchain is LLVM/Clang on every platform:
#   Windows: clang-cl
#   Linux:   clang
#
# Usage:
#   scons arch=x86 config=debug -j4
#   scons arch=x64 config=release -j4
#
# Targets (under build/<platform>-<arch>-<config>/):
#   WolfSP   - client binary (.exe on Windows)
#   qagame   - game module   (.dll on Windows, .so on Linux)
#   cgame    - cgame module
#   ui       - ui module
#
# Sources are compiled where they live in src/. The engine is full of
# file-relative includes like "../game/q_shared.h" that resolve through
# the include paths below, so copying sources into a variant tree (the
# SCons VariantDir approach) breaks the include lookup. Instead each
# module gets its own object directory and objects are written there
# with explicit targets, which also keeps per-module objects apart
# (the same file is compiled with different defines per module).

import os
import platform as pyplatform

EnsurePythonVersion(3, 6)

ARCH = ARGUMENTS.get('arch', 'x86')
CONFIG = ARGUMENTS.get('config', 'debug')

if ARCH not in ('x86', 'x64'):
    print('arch must be x86 or x64')
    Exit(1)
if CONFIG not in ('debug', 'release'):
    print('config must be debug or release')
    Exit(1)

IS_WINDOWS = pyplatform.system() == 'Windows'
PLATFORM_NAME = 'windows' if IS_WINDOWS else pyplatform.system().lower()
BUILD_DIR = 'build/%s-%s-%s' % (PLATFORM_NAME, ARCH, CONFIG)

# Spell out the platform suffixes. When a target name has no suffix SCons
# adds its own (.exe/.dll), and Default() would then point at a name that
# no node answers to, so keep everything on the final file names.
EXE = '.exe' if IS_WINDOWS else ''
DLL = '.dll' if IS_WINDOWS else ''
OBJ = '.obj' if IS_WINDOWS else '.o'

Help('''
Usage: scons [ arch=x86|x64 ] [ config=debug|release ] [ -j N ]
''')

# Include paths. Most engine includes resolve file-relative, these cover
# the rest, including the legacy "../game/..." style includes: the
# src/games/game entry makes those resolve to src/games/game/.
common_cpppath = [
    'src',
    'src/games/game',
    'src/client',
    'src/qcommon',
    'src/renderer',
    'src/server',
    'src/splines',
    'src/sys/unix',
    'src/sys/win32',
    'src/games/botai',
    'src/games/botlib',
    'src/games/cgame',
    'src/games/ui',
    'src/third-party/jpeg-6',
]

if IS_WINDOWS:
    # SCons names the 64 bit msvc target 'amd64'
    TARGET_ARCH = 'x86' if ARCH == 'x86' else 'amd64'
    env = Environment(
        tools=['default'],
        CC='clang-cl',
        CXX='clang-cl',
        TARGET_ARCH=TARGET_ARCH,
        CPPPATH=common_cpppath,
    )
    env['LINK'] = 'clang-cl'
    env['AR'] = 'llvm-lib'
    env.Append(CPPDEFINES=['WIN32', '_WINDOWS', '_CRT_SECURE_NO_WARNINGS'])
    arch_flag = '-m32' if ARCH == 'x86' else '-m64'
    env.Append(CCFLAGS=[arch_flag], CXXFLAGS=[arch_flag])
    if CONFIG == 'debug':
        env.Append(CCFLAGS=['/Z7', '/Od'], CXXFLAGS=['/Z7', '/Od'], LINKFLAGS=['/DEBUG'])
    else:
        env.Append(CPPDEFINES=['NDEBUG'])
        env.Append(CCFLAGS=['/O2'], CXXFLAGS=['/O2'])
else:
    env = Environment(
        tools=['default'],
        CC='clang',
        CXX='clang++',
        CPPPATH=common_cpppath,
    )
    env['AS'] = 'clang'
    arch_flag = '-m32' if ARCH == 'x86' else '-m64'
    # gnu89 keeps the 2001-era C code compiling under modern clang
    env.Append(CCFLAGS=['-Wall', '-fsigned-char', '-std=gnu89', arch_flag])
    env.Append(CXXFLAGS=['-Wall', '-fsigned-char', arch_flag])
    env.Append(ASFLAGS=['-c', '-x', 'assembler-with-cpp', arch_flag])
    env.Append(LINKFLAGS=[arch_flag])
    if CONFIG == 'debug':
        env.Append(CCFLAGS=['-g', '-O0'], CXXFLAGS=['-g', '-O0'])
    else:
        env.Append(CPPDEFINES=['NDEBUG'])
        env.Append(CCFLAGS=['-O2', '-fno-strict-aliasing'], CXXFLAGS=['-O2', '-fno-strict-aliasing'])

# Shared derived-object cache, big win on CI when restored
env.CacheDir('.scons_cache')

# Compile one module's sources into its own object directory.
def module_objects(menv, module, files):
    objs = []
    for p in files:
        rel = p[len('src/'):] if p.startswith('src/') else p
        target = os.path.join(BUILD_DIR, module, 'obj', rel + OBJ)
        objs.append(menv.Object(target, p)[0])
    return objs

renderer_files = ['src/renderer/' + f for f in [
    'tr_animation.c', 'tr_backend.c', 'tr_bsp.c', 'tr_cmds.c', 'tr_cmesh.c',
    'tr_curve.c', 'tr_flares.c', 'tr_font.c', 'tr_image.c', 'tr_init.c',
    'tr_light.c', 'tr_main.c', 'tr_marks.c', 'tr_mesh.c', 'tr_model.c',
    'tr_noise.c', 'tr_scene.c', 'tr_shade.c', 'tr_shade_calc.c',
    'tr_shader.c', 'tr_shadows.c', 'tr_sky.c', 'tr_surface.c', 'tr_world.c',
]]

client_files = ['src/client/' + f for f in [
    'cl_cgame.c', 'cl_cin.c', 'cl_console.c', 'cl_input.c', 'cl_keys.c',
    'cl_main.c', 'cl_net_chan.c', 'cl_parse.c', 'cl_scrn.c', 'cl_ui.c',
    'snd_adpcm.c', 'snd_dma.c', 'snd_mem.c', 'snd_mix.c', 'snd_wavelet.c',
]]

qcommon_files = ['src/qcommon/' + f for f in [
    'cm_load.c', 'cm_patch.c', 'cm_polylib.c', 'cm_test.c', 'cm_trace.c',
    'cmd.c', 'common.c', 'cvar.c', 'files.c', 'huffman.c', 'md4.c', 'msg.c',
    'net_chan.c', 'unzip.c',
]]

server_files = ['src/server/' + f for f in [
    'sv_bot.c', 'sv_ccmds.c', 'sv_client.c', 'sv_game.c', 'sv_init.c',
    'sv_main.c', 'sv_net_chan.c', 'sv_snapshot.c', 'sv_world.c',
]]

splines_files = ['src/splines/' + f for f in [
    'math_angles.cpp', 'math_matrix.cpp', 'math_quaternion.cpp',
    'math_vector.cpp', 'q_parse.cpp', 'q_shared.cpp', 'splines.cpp',
    'util_str.cpp',
]]

botlib_files = ['src/games/botlib/' + f for f in [
    'be_aas_bspq3.c', 'be_aas_cluster.c', 'be_aas_debug.c',
    'be_aas_entity.c', 'be_aas_file.c', 'be_aas_main.c', 'be_aas_move.c',
    'be_aas_optimize.c', 'be_aas_reach.c', 'be_aas_route.c',
    'be_aas_routealt.c', 'be_aas_routetable.c', 'be_aas_sample.c',
    'be_ai_char.c', 'be_ai_chat.c', 'be_ai_gen.c', 'be_ai_goal.c',
    'be_ai_move.c', 'be_ai_weap.c', 'be_ai_weight.c', 'be_ea.c',
    'be_interface.c', 'l_crc.c', 'l_libvar.c', 'l_log.c', 'l_memory.c',
    'l_precomp.c', 'l_script.c', 'l_struct.c',
]]

jpeg_files = ['src/third-party/jpeg-6/' + f for f in [
    'jcapimin.c', 'jchuff.c', 'jcinit.c', 'jccoefct.c', 'jccolor.c',
    'jfdctflt.c', 'jcdctmgr.c', 'jcphuff.c', 'jcmainct.c', 'jcmarker.c',
    'jcmaster.c', 'jcomapi.c', 'jcparam.c', 'jcprepct.c', 'jcsample.c',
    'jdapimin.c', 'jdapistd.c', 'jdatasrc.c', 'jdcoefct.c', 'jdcolor.c',
    'jddctmgr.c', 'jdhuff.c', 'jdinput.c', 'jdmainct.c', 'jdmarker.c',
    'jdmaster.c', 'jdpostct.c', 'jdsample.c', 'jdtrans.c', 'jerror.c',
    'jidctflt.c', 'jmemmgr.c', 'jmemnobs.c', 'jutils.c',
]]

vm_files = ['src/qcommon/vm.c', 'src/qcommon/vm_interpreted.c']
if ARCH == 'x86':
    # vm_x86.c is 32-bit x86 only (inline asm)
    vm_files.append('src/qcommon/vm_x86.c')

unix_sys_files = ['src/sys/unix/' + f for f in [
    'unix_main.c', 'unix_net.c', 'unix_shared.c', 'linux_common.c',
    'linux_qgl.c', 'linux_glimp.c', 'linux_joystick.c', 'linux_snd.c',
]]
if not IS_WINDOWS and ARCH == 'x86':
    unix_sys_files += ['src/sys/unix/matha.s', 'src/sys/unix/snd_mixa.s']

win_sys_files = ['src/sys/win32/' + f for f in [
    'win_gamma.c', 'win_glimp.c', 'win_input.c', 'win_main.c', 'win_net.c',
    'win_qgl.c', 'win_shared.c', 'win_snd.c', 'win_syscon.c',
    'win_wndproc.c',
]]

# ---------------------------------------------------------------- client

client_env = env.Clone()
if IS_WINDOWS:
    client_env.Append(LINKFLAGS=['/SUBSYSTEM:WINDOWS'])
    client_env.Append(LIBS=['user32', 'gdi32', 'winmm', 'wsock32', 'advapi32', 'opengl32', 'shell32'])
else:
    client_env.Append(LIBS=['dl', 'm', 'X11', 'Xext', 'Xxf86dga', 'Xxf86vm'])

sys_files = win_sys_files if IS_WINDOWS else unix_sys_files

client_sources = (
    renderer_files + client_files + qcommon_files + server_files +
    ['src/games/game/q_shared.c', 'src/games/game/q_math.c'] +
    vm_files + sys_files + splines_files + jpeg_files
)
client_objs = module_objects(client_env, 'client', client_sources)

# botlib needs its own define but is linked into the client binary
botlib_env = client_env.Clone()
botlib_env.Append(CPPDEFINES=['BOTLIB'])
client_objs += module_objects(botlib_env, 'client', botlib_files)

client_target = os.path.join(BUILD_DIR, 'WolfSP' + EXE)
client_env.Program(client_target, client_objs)

# ---------------------------------------------------------------- modules

game_files = ['src/games/game/' + f for f in [
    'ai_cast.c', 'ai_cast_characters.c', 'ai_cast_debug.c',
    'ai_cast_events.c', 'ai_cast_fight.c', 'ai_cast_func_attack.c',
    'ai_cast_func_boss1.c', 'ai_cast_funcs.c', 'ai_cast_script.c',
    'ai_cast_script_actions.c', 'ai_cast_script_ents.c', 'ai_cast_sight.c',
    'ai_cast_think.c', 'bg_animation.c', 'bg_misc.c', 'bg_pmove.c',
    'bg_slidemove.c', 'g_active.c', 'g_alarm.c', 'g_bot.c', 'g_client.c',
    'g_cmds.c', 'g_combat.c', 'g_items.c', 'g_main.c', 'g_mem.c', 'g_misc.c',
    'g_missile.c', 'g_mover.c', 'g_props.c', 'g_save.c', 'g_script.c',
    'g_script_actions.c', 'g_session.c', 'g_spawn.c', 'g_svcmds.c',
    'g_syscalls.c', 'g_target.c', 'g_team.c', 'g_tramcar.c', 'g_trigger.c',
    'g_utils.c', 'g_weapon.c', 'q_math.c', 'q_shared.c',
]] + ['src/games/botai/' + f for f in [
    'ai_chat.c', 'ai_cmd.c', 'ai_dmnet.c', 'ai_dmq3.c', 'ai_main.c', 'ai_team.c',
]]

game_env = env.Clone()
game_env.Append(CPPDEFINES=['GAMEDLL'])
if IS_WINDOWS:
    game_env.Append(LINKFLAGS=['/DEF:src/games/game/game.def'])
else:
    game_env.Append(LIBS=['dl', 'm'])
game_target = os.path.join(BUILD_DIR, 'qagame' + DLL)
game_env.SharedLibrary(game_target, module_objects(game_env, 'game', game_files))

cgame_files = ['src/games/game/' + f for f in [
    'bg_animation.c', 'bg_misc.c', 'bg_pmove.c', 'bg_slidemove.c',
    'q_math.c', 'q_shared.c',
]] + ['src/games/cgame/' + f for f in [
    'cg_consolecmds.c', 'cg_draw.c', 'cg_drawtools.c', 'cg_effects.c',
    'cg_ents.c', 'cg_event.c', 'cg_flamethrower.c', 'cg_info.c',
    'cg_localents.c', 'cg_main.c', 'cg_marks.c', 'cg_newDraw.c',
    'cg_particles.c', 'cg_players.c', 'cg_playerstate.c', 'cg_predict.c',
    'cg_scoreboard.c', 'cg_servercmds.c', 'cg_snapshot.c', 'cg_sound.c',
    'cg_syscalls.c', 'cg_trails.c', 'cg_view.c', 'cg_weapons.c',
]] + ['src/games/ui/ui_shared.c']

cgame_env = env.Clone()
cgame_env.Append(CPPDEFINES=['CGAMEDLL'])
if IS_WINDOWS:
    cgame_env.Append(LINKFLAGS=['/DEF:src/games/cgame/cgame.def'])
else:
    cgame_env.Append(LIBS=['dl', 'm'])
cgame_target = os.path.join(BUILD_DIR, 'cgame' + DLL)
cgame_env.SharedLibrary(cgame_target, module_objects(cgame_env, 'cgame', cgame_files))

ui_files = ['src/games/game/' + f for f in [
    'bg_misc.c', 'q_math.c', 'q_shared.c',
]] + ['src/games/ui/' + f for f in [
    'ui_atoms.c', 'ui_gameinfo.c', 'ui_main.c', 'ui_players.c',
    'ui_shared.c', 'ui_syscalls.c', 'ui_util.c',
]]

ui_env = env.Clone()
if IS_WINDOWS:
    ui_env.Append(LINKFLAGS=['/DEF:src/games/ui/ui.def'])
else:
    ui_env.Append(LIBS=['dl', 'm'])
ui_target = os.path.join(BUILD_DIR, 'ui' + DLL)
ui_env.SharedLibrary(ui_target, module_objects(ui_env, 'ui', ui_files))

Default(client_target, game_target, cgame_target, ui_target)
