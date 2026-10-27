# RTCW-SP SCons build
#
# Usage:
#   scons arch=x86 config=debug -j4
#   scons arch=x64 config=release -j4
#   scons arch=x64 config=release hardlink=game,renderer -j4
#
# Outputs go to bin/ (engine and renderers) and bin/main/ (game modules).
# Every output name ends with its arch, so x86 and x64 builds share the
# same tree. Objects and tools go to build/<platform>-<arch>-<config>/.

import os
import platform as pyplatform
import shutil
import subprocess

EnsurePythonVersion(3, 6)

ARCH = ARGUMENTS.get('arch', 'x86')
CONFIG = ARGUMENTS.get('config', 'debug')

if ARCH not in ('x86', 'x64'):
    print('arch must be x86 or x64')
    Exit(1)
if CONFIG not in ('debug', 'release'):
    print('config must be debug or release')
    Exit(1)

# hardlink=... links these modules into the executable instead of
# building them as separate libraries
HARDLINK = [m.strip() for m in ARGUMENTS.get('hardlink', '').split(',') if m.strip()]
HARDLINK_MODULES = ('game', 'cgame', 'ui', 'renderer')
for m in HARDLINK:
    if m not in HARDLINK_MODULES:
        print('hardlink: unknown module %r (expected one of %s)' % (m, ', '.join(HARDLINK_MODULES)))
        Exit(1)
# game, cgame and ui all define the same trap_* names, so only one of
# them can be linked into the executable. The renderer is independent.
linked_vm = [m for m in ('game', 'cgame', 'ui') if m in HARDLINK]
if len(linked_vm) > 1:
    print('hardlink: only one of game, cgame, ui can be hard-linked, got %s' % ', '.join(linked_vm))
    Exit(1)

IS_WINDOWS = pyplatform.system() == 'Windows'
PLATFORM_NAME = 'windows' if IS_WINDOWS else pyplatform.system().lower()
BUILD_DIR = 'build/%s-%s-%s' % (PLATFORM_NAME, ARCH, CONFIG)
BIN_DIR = 'bin'
MODULES_DIR = os.path.join('bin', 'main')
GAME_SOURCE_DIR = os.path.abspath('src/games/game')

# Suffixes are spelled out on every target name: when a target has no
# suffix SCons adds its own, which breaks Default().
EXE = '.exe' if IS_WINDOWS else ''
DLL = '.dll' if IS_WINDOWS else '.so'
OBJ = '.obj' if IS_WINDOWS else '.o'
ARCH_SUFFIX = '_' + ARCH

Help('''
Usage: scons [ arch=x86|x64 ] [ config=debug|release ] [ hardlink=game,cgame,ui,renderer ] [ funcs=1 ] [ -j N ]
Outputs go to bin/ (engine and renderers) and bin/main/ (game modules),
each name suffixed with the arch. Objects stay under build/<platform>-<arch>-<config>/.
hardlink links the listed modules into the executable; only one of
game, cgame, ui can be linked at a time because they share trap_* names.
funcs=1 regenerates the savegame function table headers with extractfuncs.
''')

# include paths
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
    'src/third-party/stb',
]

if IS_WINDOWS:
    # SCons names the 64 bit MSVC target 'amd64'
    TARGET_ARCH = 'x86' if ARCH == 'x86' else 'amd64'
    # rc.exe from the MSVC environment, llvm-rc for a plain LLVM install
    RC_BIN = shutil.which('rc') or shutil.which('llvm-rc') or 'rc'
    env = Environment(
        tools=['default'],
        CC='clang-cl',
        CXX='clang-cl',
        TARGET_ARCH=TARGET_ARCH,
        CPPPATH=common_cpppath,
    )
    # lld-link understands the link.exe flags SCons passes for
    # shared libraries and programs; clang-cl does not
    env['LINK'] = 'lld-link'
    env['SHLINK'] = 'lld-link'
    env['AR'] = 'llvm-lib'
    env.Append(CPPDEFINES=['WIN32', '_WINDOWS', '_CRT_SECURE_NO_WARNINGS'])
    arch_flag = '-m32' if ARCH == 'x86' else '-m64'
    # /W4 instead of -Wall: clang-cl maps -Wall onto every warning it
    # knows and floods the log
    env.Append(CCFLAGS=['/W4', arch_flag], CXXFLAGS=['/W4', arch_flag])
    # ASLR
    env.Append(LINKFLAGS=['/DYNAMICBASE'] + (['/HIGHENTROPYVA'] if ARCH == 'x64' else []))
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
    arch_flag = '-m32' if ARCH == 'x86' else '-m64'
    # no lib prefix on module names
    env['SHLIBPREFIX'] = ''
    # the C code is 2001 era, the splines code is C++98 era
    env.Append(CCFLAGS=['-Wall', '-fsigned-char', arch_flag])
    env.Append(CFLAGS=['-std=gnu89'])
    env.Append(CXXFLAGS=['-Wall', '-fsigned-char', '-std=gnu++98', arch_flag])
    env.Append(LINKFLAGS=[arch_flag])
    if CONFIG == 'debug':
        env.Append(CCFLAGS=['-g', '-O0'], CXXFLAGS=['-g', '-O0'])
    else:
        env.Append(CPPDEFINES=['NDEBUG'])
        env.Append(CCFLAGS=['-O2', '-fno-strict-aliasing'], CXXFLAGS=['-O2', '-fno-strict-aliasing'])

# q_shared.h needs CPUSTRING and PATH_SEP everywhere, and Sys_LoadModule
# needs ARCH_STRING as a quoted module name suffix. Quoted values cannot go
# through command line defines, so SCons writes them into a per build header
# and force includes it in every file: /FI on clang-cl, -include on clang.
os.makedirs(BUILD_DIR, exist_ok=True)
q_buildconfig = os.path.join(BUILD_DIR, 'q_buildconfig.h')
cpustring = ('win' if IS_WINDOWS else 'linux') + '-' + ARCH + ('-debug' if CONFIG == 'debug' else '')
with open(q_buildconfig, 'w') as f:
    f.write('/* generated by SConstruct, do not edit */\n')
    f.write('#ifndef Q_BUILDCONFIG_H\n#define Q_BUILDCONFIG_H\n')
    f.write('#define CPUSTRING "%s"\n' % cpustring)
    f.write('#define ARCH_STRING "%s"\n' % ARCH)
    f.write("#define PATH_SEP '%s'\n" % ('\\\\' if IS_WINDOWS else '/'))
    f.write('#endif\n')
env.Append(CCFLAGS=['/FI', q_buildconfig] if IS_WINDOWS else ['-include', q_buildconfig])
env.Append(CPPDEFINES=[
    ('QDECL', '__cdecl' if IS_WINDOWS else ''),
    ('MAC_STATIC', ''),
])

# shared object cache, big win on CI
env.CacheDir('.scons_cache')

# Compile one module's sources into its own object directory.
def module_objects(menv, module, files, shared=False):
    objs = []
    for p in files:
        rel = p[len('src/'):] if p.startswith('src/') else p
        target = os.path.join(BUILD_DIR, module, 'obj', rel + OBJ)
        # shared libraries need position independent objects on Linux
        builder = menv.SharedObject if shared else menv.Object
        objs.append(builder(target, p)[0])
    return objs

# A hard-linked module must not recompile what the executable already
# carries. The renderer also drops tr_module.c: its Com_* wrappers clash
# with the engine's common.c.
def module_link_files(module, files):
    if module not in HARDLINK:
        return files
    drop = ['src/qcommon/q_math.c', 'src/qcommon/q_shared.c']
    if module == 'renderer':
        drop.append('src/renderer/tr_module.c')
    return [f for f in files if f not in drop]

renderer_files = ['src/renderer/' + f for f in [
    'tr_animation.c', 'tr_backend.c', 'tr_bsp.c', 'tr_cmds.c', 'tr_cmesh.c',
    'tr_curve.c', 'tr_flares.c', 'tr_font.c', 'tr_image.c', 'tr_init.c',
    'tr_light.c', 'tr_main.c', 'tr_marks.c', 'tr_mesh.c', 'tr_model.c',
    'tr_noise.c', 'tr_scene.c', 'tr_shade.c', 'tr_shade_calc.c',
    'tr_shader.c', 'tr_shadows.c', 'tr_sky.c', 'tr_surface.c', 'tr_world.c', 'tr_module.c',
]]

client_files = ['src/client/' + f for f in [
    'cl_cgame.c', 'cl_cin.c', 'cl_console.c', 'cl_input.c', 'cl_keys.c',
    'cl_main.c', 'cl_net_chan.c', 'cl_parse.c', 'cl_qgl.c', 'cl_scrn.c', 'cl_ui.c',
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


unix_sys_files = ['src/sys/unix/' + f for f in [
    'unix_main.c', 'unix_net.c', 'unix_shared.c', 'linux_common.c',
    'linux_glimp.c', 'linux_joystick.c', 'linux_snd.c',
]]
# the unix asm files are not built: q_shared.h forces id386 to 0, so the
# portable C implementations are used

win_sys_files = ['src/sys/win32/' + f for f in [
    'win_gamma.c', 'win_glimp.c', 'win_input.c', 'win_main.c', 'win_net.c',
    'win_shared.c', 'win_snd.c', 'win_syscon.c',
    'win_wndproc.c',
]]

# ---------------------------------------------------------------- client

client_env = env.Clone()
# engine units include the renderer headers, so they see glad too
client_env.Append(CPPPATH=['src/third-party/glad/include'])
# botlib is always linked into the executable; each hard-linked module
# adds its define so the engine calls it directly instead of loading it
client_env.Append(CPPDEFINES=['BOTLIB_HARD_LINKED'] + [m.upper() + '_HARD_LINKED' for m in HARDLINK])
if IS_WINDOWS:
    client_env.Append(LINKFLAGS=['/SUBSYSTEM:WINDOWS'])
    client_env.Append(LIBS=['user32', 'gdi32', 'winmm', 'wsock32', 'advapi32', 'ole32', 'opengl32', 'shell32'])
else:
    # the client calls glX* directly on Linux
    client_env.Append(LIBS=['dl', 'm', 'GL', 'X11', 'Xext', 'Xxf86dga', 'Xxf86vm'])
    # ASLR
    client_env.Append(CCFLAGS=['-fPIE'], CXXFLAGS=['-fPIE'], LINKFLAGS=['-pie'])

sys_files = win_sys_files if IS_WINDOWS else unix_sys_files

client_sources = (
    client_files + qcommon_files + server_files +
    ['src/qcommon/q_shared.c', 'src/qcommon/q_math.c'] +
    sys_files + splines_files
)
client_objs = module_objects(client_env, 'client', client_sources)

botlib_env = client_env.Clone()
botlib_env.Append(CPPDEFINES=['BOTLIB'])
client_objs += module_objects(botlib_env, 'client', botlib_files)

client_target = os.path.join(BIN_DIR, 'WolfSP' + ARCH_SUFFIX + EXE)
client_res = []
if IS_WINDOWS:
    # winquake.rc embeds the icon and console bitmaps; SCons has no rc
    # tool, so it compiles with a plain command
    client_res = client_env.Command(
        os.path.join(BUILD_DIR, 'client', 'winquake.res'),
        'src/sys/win32/winquake.rc',
        '"%s" /nologo /fo $TARGET $SOURCE' % RC_BIN)
# the executable links after the module sections below: each hard-linked
# module contributes its objects to the engine image

# ---------------------------------------------------------------- tools

# extractfuncs scans the game sources and rewrites the savegame function
# table; host tool. With funcs=1 the game module build runs it to
# regenerate its headers.
extractfuncs_files = ['src/tools/extractfuncs/' + f for f in [
    'extractfuncs.c', 'l_log.c', 'l_memory.c', 'l_precomp.c', 'l_script.c',
]]

extractfuncs_env = env.Clone()
# SCREWUP makes l_script.c and l_precomp.c include their standard
# headers; the tool is 1997 era botlib code, so its warnings stay muted
extractfuncs_env.Append(CPPDEFINES=['SCREWUP'])
if IS_WINDOWS:
    extractfuncs_env.Append(CCFLAGS=['/W0'], CXXFLAGS=['/W0'])
else:
    extractfuncs_env.Append(CCFLAGS=['-w'], CXXFLAGS=['-w'])
extractfuncs_target = os.path.join(BUILD_DIR, 'extractfuncs' + EXE)
extractfuncs_env.Program(extractfuncs_target, module_objects(extractfuncs_env, 'extractfuncs_tool', extractfuncs_files))

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
    'g_utils.c', 'g_weapon.c',
]] + ['src/games/botai/' + f for f in [
    'ai_chat.c', 'ai_cmd.c', 'ai_dmnet.c', 'ai_dmq3.c', 'ai_main.c', 'ai_team.c',
]] + ['src/qcommon/q_math.c', 'src/qcommon/q_shared.c']

# The savegame function table headers are checked in. The extractfuncs
# scanner crashes under the modern 64 bit toolchains (heap corruption on
# Windows, SIGSEGV on Linux), so the regeneration run is opt-in with
# funcs=1; the tool itself still builds on every run.
extractfuncs_headers = ['src/games/game/g_funcs.h', 'src/games/game/g_func_decs.h']
game_scan_files = [f for f in game_files if f.startswith('src/games/game/')]
REGEN_FUNCS = ARGUMENTS.get('funcs') == '1'

def run_extractfuncs(target, source, env):
    # Run from src/games/game so the headers land next to the sources.
    # Windows main() takes a file filter, Linux main() takes file names;
    # sorted names keep both platforms producing the same table. The
    # scan files must not be Command sources: SCons scans .c sources for
    # includes, which made the headers depend on themselves.
    args = [source[0].abspath]
    if IS_WINDOWS:
        args.append('*.c')
    else:
        args += sorted(os.path.basename(f) for f in game_scan_files)
    return subprocess.call(args, cwd=GAME_SOURCE_DIR)

if REGEN_FUNCS:
    env.Command(extractfuncs_headers, [extractfuncs_target], run_extractfuncs)
    env.Depends(extractfuncs_headers, game_scan_files)

game_env = env.Clone()
game_env.Append(CPPDEFINES=['GAMEDLL'])
if 'game' in HARDLINK:
    # the module sources check this to skip their engine-side names
    game_env.Append(CPPDEFINES=['GAME_HARD_LINKED'])
if IS_WINDOWS:
    game_env.Append(LINKFLAGS=['/DEF:src/games/game/game.def'])
else:
    game_env.Append(LIBS=['dl', 'm'])
    game_env.Append(CCFLAGS=['-fPIC'], CXXFLAGS=['-fPIC'])
game_objs = module_objects(game_env, 'game', module_link_files('game', game_files), shared=(not IS_WINDOWS) and 'game' not in HARDLINK)
# qagame waits for the generated headers so the function table never
# ends up half-compiled
env.Depends(game_objs, extractfuncs_headers)
game_target = os.path.join(MODULES_DIR, 'qagame' + ARCH_SUFFIX + DLL)
if 'game' not in HARDLINK:
    game_env.SharedLibrary(game_target, game_objs)

cgame_files = ['src/games/game/' + f for f in [
    'bg_animation.c', 'bg_misc.c', 'bg_pmove.c', 'bg_slidemove.c',
]] + ['src/games/cgame/' + f for f in [
    'cg_consolecmds.c', 'cg_draw.c', 'cg_drawtools.c', 'cg_effects.c',
    'cg_ents.c', 'cg_event.c', 'cg_flamethrower.c', 'cg_info.c',
    'cg_localents.c', 'cg_main.c', 'cg_marks.c', 'cg_newDraw.c',
    'cg_particles.c', 'cg_players.c', 'cg_playerstate.c', 'cg_predict.c',
    'cg_scoreboard.c', 'cg_servercmds.c', 'cg_snapshot.c', 'cg_sound.c',
    'cg_syscalls.c', 'cg_trails.c', 'cg_view.c', 'cg_weapons.c',
]] + ['src/games/ui/ui_shared.c'] + ['src/qcommon/q_math.c', 'src/qcommon/q_shared.c']

cgame_env = env.Clone()
cgame_env.Append(CPPDEFINES=['CGAMEDLL'])
if 'cgame' in HARDLINK:
    # skips the module's Com_Error/Com_Printf wrappers, which clash with
    # the engine's common.c when both live in one image
    cgame_env.Append(CPPDEFINES=['CGAME_HARD_LINKED'])
if IS_WINDOWS:
    cgame_env.Append(LINKFLAGS=['/DEF:src/games/cgame/cgame.def'])
else:
    cgame_env.Append(LIBS=['dl', 'm'])
    cgame_env.Append(CCFLAGS=['-fPIC'], CXXFLAGS=['-fPIC'])
cgame_target = os.path.join(MODULES_DIR, 'cgame' + ARCH_SUFFIX + DLL)
cgame_objs = module_objects(cgame_env, 'cgame', module_link_files('cgame', cgame_files), shared=(not IS_WINDOWS) and 'cgame' not in HARDLINK)
if 'cgame' not in HARDLINK:
    cgame_env.SharedLibrary(cgame_target, cgame_objs)

ui_files = ['src/games/game/' + f for f in [
    'bg_misc.c',
]] + ['src/games/ui/' + f for f in [
    'ui_atoms.c', 'ui_gameinfo.c', 'ui_main.c', 'ui_players.c',
    'ui_shared.c', 'ui_syscalls.c', 'ui_util.c',
]] + ['src/qcommon/q_math.c', 'src/qcommon/q_shared.c']

ui_env = env.Clone()
if 'ui' in HARDLINK:
    # same as cgame: skips the ui Com_* wrappers in a hard-linked image
    ui_env.Append(CPPDEFINES=['UI_HARD_LINKED'])
if IS_WINDOWS:
    ui_env.Append(LINKFLAGS=['/DEF:src/games/ui/ui.def'])
else:
    ui_env.Append(LIBS=['dl', 'm'])
    ui_env.Append(CCFLAGS=['-fPIC'], CXXFLAGS=['-fPIC'])
ui_target = os.path.join(MODULES_DIR, 'ui' + ARCH_SUFFIX + DLL)
ui_objs = module_objects(ui_env, 'ui', module_link_files('ui', ui_files), shared=(not IS_WINDOWS) and 'ui' not in HARDLINK)
if 'ui' not in HARDLINK:
    ui_env.SharedLibrary(ui_target, ui_objs)

# ---------------------------------------------------------------- renderer

renderer_module_files = module_link_files('renderer', renderer_files + ['src/qcommon/q_math.c', 'src/qcommon/q_shared.c'])

renderer_env = env.Clone()
renderer_env.Append(CPPDEFINES=['REFDLL'])
if 'renderer' in HARDLINK:
    # in one image the engine owns the video cvars and the import
    # struct, so the renderer keeps off those names
    renderer_env.Append(CPPDEFINES=['RENDERER_HARD_LINKED'])
# glad supplies the OpenGL 3.3 compatibility profile and its loader
renderer_env.Append(CPPPATH=['src/third-party/glad/include'])
if IS_WINDOWS:
    renderer_env.Append(LINKFLAGS=['/DEF:src/renderer/renderer.def'])
else:
    renderer_env.Append(LIBS=['dl', 'm'])
    renderer_env.Append(CCFLAGS=['-fPIC'], CXXFLAGS=['-fPIC'])
renderer_target = os.path.join(BIN_DIR, 'renderer_gl' + ARCH_SUFFIX + DLL)
renderer_shared = (not IS_WINDOWS) and 'renderer' not in HARDLINK
renderer_objs = module_objects(renderer_env, 'renderer', renderer_module_files, shared=renderer_shared)
# stb is vendored third party code, its warnings stay muted; stb_impl.c
# is the single unit that pulls in the implementations
renderer_stb_env = renderer_env.Clone()
if IS_WINDOWS:
    renderer_stb_env.Append(CCFLAGS=['/W0'], CXXFLAGS=['/W0'])
else:
    renderer_stb_env.Append(CCFLAGS=['-w'], CXXFLAGS=['-w'])
renderer_objs += module_objects(renderer_stb_env, 'renderer', ['src/third-party/stb/stb_impl.c'], shared=renderer_shared)
# glad is vendored third party code, its warnings stay muted
renderer_glad_env = renderer_env.Clone()
if IS_WINDOWS:
    renderer_glad_env.Append(CCFLAGS=['/W0'], CXXFLAGS=['/W0'])
else:
    renderer_glad_env.Append(CCFLAGS=['-w'], CXXFLAGS=['-w'])
renderer_objs += module_objects(renderer_glad_env, 'renderer', ['src/third-party/glad/src/gl.c'], shared=renderer_shared)
if 'renderer' not in HARDLINK:
    renderer_env.SharedLibrary(renderer_target, renderer_objs)

# ---------------------------------------------------------------- idlib

# the Doom 3 BFG idlib port behind the new renderer; kept close to the
# original, so it needs C++14 and its warnings stay muted
idlib_files = ['src/idlib/' + f for f in [
    'Heap.cpp', 'Str.cpp', 'Lib.cpp',
    'Token.cpp', 'Lexer.cpp', 'Parser.cpp',
    'sys/sys_assert.cpp',
    'containers/HashIndex.cpp',
    'math/Math.cpp', 'math/Vector.cpp', 'math/Matrix.cpp', 'math/Angles.cpp',
    'math/Quat.cpp', 'math/Plane.cpp', 'math/Rotation.cpp', 'math/VecX.cpp',
    'math/MatX.cpp',
    'bv/Bounds.cpp', 'bv/Box.cpp', 'bv/Sphere.cpp',
    'geometry/DrawVert.cpp', 'geometry/JointTransform.cpp',
    'geometry/RenderMatrix.cpp',
]]

idlib_env = env.Clone()
if IS_WINDOWS:
    idlib_env.Append(CCFLAGS=['/W0'], CXXFLAGS=['/std:c++14', '/W0'])
else:
    idlib_env.Append(CCFLAGS=['-w'], CXXFLAGS=['-std=c++14', '-w'])
# let SCons name the library (libidlib.a / idlib.lib); naming the file
# idlib.a left the Default() target without a builder on Linux.
# The objects are position independent on Linux: they link into a
# shared library.
idlib_objs = module_objects(idlib_env, 'idlib', idlib_files, shared=not IS_WINDOWS)
idlib_target = idlib_env.StaticLibrary(os.path.join(BUILD_DIR, 'idlib'), idlib_objs)

# ------------------------------------------------------- renderer-bfg

# the new Doom 3 BFG based renderer; vendored port, so its warnings
# stay muted like the rest of the third party code
renderer_bfg_files = ['src/renderer-bfg/' + f for f in [
    'RenderWorld.cpp', 'RenderEntity.cpp', 'ScreenRect.cpp',
    'RenderSystem.cpp', 'GLContext.cpp',
    'CVarSystem.cpp', 'GLMatrix.cpp', 'RenderLog.cpp',
    'RenderProgs.cpp', 'RenderProgs_GLSL.cpp', 'Q3Patch.cpp', 'RenderWorld_load.cpp', 'Model.cpp', 'ModelManager.cpp',
    'Model_md3.cpp', 'Model_mdc.cpp', 'Model_mds.cpp',
    'Material.cpp',
    'MaterialManager.cpp',
    'Material_shader.cpp', 'Shadow.cpp', 'Backend.cpp',
    'Tess.cpp', 'Tess_calc.cpp', 'Lighting.cpp', 'Surface.cpp',
    'ImageManager.cpp', 'Image_files.cpp', 'Image_intrinsic.cpp', 'Image_process.cpp',
]]

renderer_bfg_env = env.Clone()
renderer_bfg_env.Append(CPPPATH=['src/third-party/glad/include'])
if IS_WINDOWS:
    renderer_bfg_env.Append(CCFLAGS=['/W0'], CXXFLAGS=['/std:c++14', '/W0'])
else:
    renderer_bfg_env.Append(CCFLAGS=['-w'], CXXFLAGS=['-std=c++14', '-w'])
renderer_bfg_objs = module_objects(renderer_bfg_env, 'renderer-bfg', renderer_bfg_files, shared=not IS_WINDOWS)
# glad is vendored third party code
renderer_bfg_glad_env = renderer_bfg_env.Clone()
if IS_WINDOWS:
    renderer_bfg_glad_env.Append(CCFLAGS=['/W0'], CXXFLAGS=['/W0'])
else:
    renderer_bfg_glad_env.Append(CCFLAGS=['-w'], CXXFLAGS=['-w'])
renderer_bfg_objs += module_objects(renderer_bfg_glad_env, 'renderer-bfg', ['src/third-party/glad/src/gl.c'], shared=not IS_WINDOWS)
renderer_bfg_objs += module_objects(renderer_bfg_env, 'renderer-bfg', ['src/third-party/stb/stb_impl.c'], shared=not IS_WINDOWS)
renderer_bfg_target = os.path.join(BIN_DIR, 'renderer_bfg' + ARCH_SUFFIX + DLL)
# the idlib objects link straight into the shared library: SCons rejects
# a static library node as a shared library source on Linux
renderer_bfg_env.SharedLibrary(renderer_bfg_target, renderer_bfg_objs + idlib_objs)

# ------------------------------------------------------- client link

# each hard-linked module contributes its objects to the engine image
client_link_objs = list(client_objs)
if 'game' in HARDLINK:
    client_link_objs += game_objs
if 'cgame' in HARDLINK:
    client_link_objs += cgame_objs
if 'ui' in HARDLINK:
    client_link_objs += ui_objs
if 'renderer' in HARDLINK:
    client_link_objs += renderer_objs
client_env.Program(client_target, client_link_objs + client_res)

# ------------------------------------------------------- defaults

defaults = [client_target, extractfuncs_target, idlib_target[0], renderer_bfg_target]
for target, module in ((game_target, 'game'), (cgame_target, 'cgame'), (ui_target, 'ui'), (renderer_target, 'renderer')):
    if module not in HARDLINK:
        defaults.append(target)
Default(*defaults)
