# RTCW-SP SCons build
#
# Usage:
#   scons arch=x86 config=debug
#   scons arch=x64 config=release
#   scons arch=x64 config=release hardlink=game,renderer
# Parallel jobs default to up to 16 CPU cores; use -jN or -j1 to override.
#
# Outputs go to bin/ (engine and renderers) and bin/main/ (game modules).
# Every output name ends with its arch, so x86 and x64 builds share the
# same tree. Objects and tools go to build/<platform>-<arch>-<config>/.

import atexit
import colorsys
import os
import platform as pyplatform
import re
import shutil
import subprocess
import sys
import threading
import unicodedata

EnsurePythonVersion(3, 6)

# Parallel builds are enabled by default. Respect an explicit -j/--jobs option,
# including -j1 when the user wants a serial build. Cap the automatic default
# to avoid spawning an excessive number of memory-heavy C++ compiler processes.
def _has_explicit_jobs_option(argv):
    for i, arg in enumerate(argv):
        if arg in ('-j', '--jobs'):
            return True
        if arg.startswith('--jobs=') or (arg.startswith('-j') and arg != '-j'):
            return True
    return False

if not _has_explicit_jobs_option(sys.argv[1:]):
    _cpu_count = os.cpu_count() or 1
    SetOption('num_jobs', min(max(_cpu_count, 1), 16))

# Enable ANSI terminal control sequences where supported. On Windows this also
# enables virtual-terminal processing for modern Windows Terminal / consoles.
# NO_COLOR disables styling, but does not disable the uncolored footer progress bar.
def _enable_terminal_ansi():
    try:
        if not sys.stdout.isatty():
            return False
    except Exception:
        return False

    if os.environ.get('TERM', '').lower() == 'dumb':
        return False

    if os.name == 'nt':
        try:
            import ctypes
            kernel32 = ctypes.windll.kernel32
            handle = kernel32.GetStdHandle(-11)  # STD_OUTPUT_HANDLE
            mode = ctypes.c_ulong()
            if not kernel32.GetConsoleMode(handle, ctypes.byref(mode)):
                return False
            # ENABLE_VIRTUAL_TERMINAL_PROCESSING
            if not kernel32.SetConsoleMode(handle, mode.value | 0x0004):
                return False
        except Exception:
            return False
    return True

TERMINAL_TTY = bool(getattr(sys.stdout, 'isatty', lambda: False)())
ANSI_TTY = _enable_terminal_ansi()
USE_COLOR = ANSI_TTY and os.environ.get('NO_COLOR') is None
# Always reset an ANSI-capable terminal, even if styled output is disabled.
# This prevents an interrupted compiler or a previous command leaving a color
# (often pink/magenta on Windows terminals) active for the user's next prompt.
ANSI_RESET = '\033[0m' if ANSI_TTY else ''
RESET = '\033[0m' if USE_COLOR else ''
WHITE = '\033[97;1m' if USE_COLOR else ''
GRAY = '\033[90m' if USE_COLOR else ''
RED = '\033[91;1m' if USE_COLOR else ''
GREEN = '\033[92;1m' if USE_COLOR else ''
DIM = '\033[90m' if USE_COLOR else ''

# Compiler output is forwarded through a small diagnostic filter. Strip ANSI
# control sequences from child tools so they cannot leave the parent terminal
# in a changed color state. Count conventional GCC/Clang/MSVC diagnostics.
_ANSI_ESCAPE_RE = re.compile(
    r'\x1B(?:\[[0-?]*[ -/]*[@-~]|\][^\x07]*(?:\x07|\x1B\\)|[@-_])'
)
# SGR sequences (colors/bold/underline) are deliberately preserved so Clang's
# warning/error highlighting remains visible. Other terminal-control sequences
# from subprocesses are removed before forwarding output.
_ANSI_SGR_RE = re.compile(r'\x1B\[[0-?]*[ -/]*m')
_WARNING_RE = re.compile(r'\bwarning(?:\s+[A-Za-z]+[0-9]+)?\s*:', re.IGNORECASE)
_ERROR_RE = re.compile(r'\b(?:fatal\s+)?error(?:\s+[A-Za-z]+[0-9]+)?\s*:', re.IGNORECASE)


def _preserve_sgr_strip_other_ansi(text):
    def _replace(match):
        sequence = match.group(0)
        return sequence if _ANSI_SGR_RE.fullmatch(sequence) else ''
    return _ANSI_ESCAPE_RE.sub(_replace, text)

# Normal output is written inside a terminal scrolling region that excludes
# the last row. The progress bar is drawn on that reserved bottom row, so new
# compiler messages scroll above it rather than pushing it down the screen.
if ANSI_TTY:
    CLEAR_LINE = '\r\033[2K'
elif TERMINAL_TTY:
    CLEAR_LINE = '\r' + (' ' * 160) + '\r'
else:
    CLEAR_LINE = ''

def _status_text(label, value):
    # Start and end every SCons status line in the default terminal color.
    return '%s%s%s%s %s\'%s\'%s' % (
        ANSI_RESET, CLEAR_LINE, WHITE, label, GRAY, value,
        ANSI_RESET if ANSI_TTY else RESET
    )


# Progress is shown only for the default build, where the complete default
# target graph is known. Reserve the terminal's last row for the progress bar.
_PROGRESS_ENABLED = (
    ANSI_TTY
    and ARGUMENTS.get('verbose') != '1'
    and not GetOption('no_exec')
    and not GetOption('clean')
    and not COMMAND_LINE_TARGETS
)
_PROGRESS_LOCK = threading.Lock()
_PROGRESS_NODES = {}
_PROGRESS_STATE = {
    'completed': 0,
    'total': 0,
    'started': False,
    'footer_active': False,
    'terminal_height': 0,
    'warnings': 0,
    'errors': 0,
}


def _display_width(text):
    """Return approximate terminal cells occupied by Unicode text."""
    text = _ANSI_ESCAPE_RE.sub('', text)
    width = 0
    for index, char in enumerate(text):
        if char == '\u200d' or unicodedata.combining(char):
            continue
        if char == '\ufe0f':
            continue
        if char == '\ufe0e':
            continue
        next_char = text[index + 1] if index + 1 < len(text) else ''
        emoji_presentation = next_char == '\ufe0f'
        width += 2 if emoji_presentation or unicodedata.east_asian_width(char) in ('W', 'F') else 1
    return width


def _terminal_height():
    try:
        return max(4, shutil.get_terminal_size(fallback=(80, 24)).lines)
    except Exception:
        return 24


def _setup_progress_footer():
    if not _PROGRESS_ENABLED:
        return

    height = _terminal_height()
    _PROGRESS_STATE['terminal_height'] = height
    _PROGRESS_STATE['footer_active'] = True
    # Keep rows 1..height-1 as the scrollable build log and reserve the last
    # terminal row for the progress bar.
    sys.stdout.write(ANSI_RESET + '\033[1;%dr\033[%d;1H' % (height - 1, height - 1) + ANSI_RESET)
    sys.stdout.flush()


def _ensure_progress_footer_size():
    height = _terminal_height()
    old_height = _PROGRESS_STATE['terminal_height']
    if height != old_height:
        # Reapply the scrolling region after a terminal resize.
        sys.stdout.write(ANSI_RESET + '\033[r\033[1;%dr' % (height - 1) + ANSI_RESET)
        _PROGRESS_STATE['terminal_height'] = height


def _draw_progress(done, total, final=False):
    if not _PROGRESS_ENABLED or total <= 0:
        return

    columns = shutil.get_terminal_size(fallback=(80, 24)).columns
    # Preserve room for the right-aligned warning/error counters on narrow consoles.
    width = max(8, min(24, columns - 56))
    ratio = min(1.0, float(done) / float(total))
    filled = int(round(width * ratio))

    # Draw a continuous line rather than block characters. Each cell gets a
    # smoothly interpolated true-color hue along the full bar width, so the
    # completed portion looks like a continuous rainbow gradient.
    bar_parts = []
    for i in range(filled):
        if USE_COLOR:
            hue = float(i) / max(1, width - 1)
            red, green, blue = colorsys.hsv_to_rgb(hue, 0.92, 1.0)
            bar_parts.append('\033[38;2;%d;%d;%dm━' % (
                int(round(red * 255)), int(round(green * 255)), int(round(blue * 255))
            ))
        else:
            bar_parts.append('━')
    if width > filled:
        bar_parts.append(('\033[38;5;238m' if USE_COLOR else '') + '─' * (width - filled))
    bar = ''.join(bar_parts) + (ANSI_RESET if ANSI_TTY else '')

    left = '📊 Build [%s] %3d%% (%d/%d actions)' % (
        bar, int(round(ratio * 100)), done, total
    )
    warning_count = _PROGRESS_STATE['warnings']
    error_count = _PROGRESS_STATE['errors']
    if USE_COLOR:
        right = '\033[38;5;214m⚠️ %d%s  \033[38;5;196m❌ %d%s' % (
            warning_count, ANSI_RESET, error_count, ANSI_RESET
        )
    else:
        right = '⚠️ %d  ❌ %d' % (warning_count, error_count)
    padding = max(2, columns - _display_width(left) - _display_width(right))
    line = left + (' ' * padding) + right

    if _PROGRESS_STATE['footer_active']:
        _ensure_progress_footer_size()
        height = _PROGRESS_STATE['terminal_height']
        # Reset before and after drawing so the footer never leaks color state.
        sys.stdout.write(
            ANSI_RESET + '\033[%d;1H\033[2K%s%s\033[%d;1H' % (
                height, line, ANSI_RESET, height - 1
            )
        )
    else:
        # Fallback for very unusual terminals where no footer could be set up.
        sys.stdout.write(ANSI_RESET + CLEAR_LINE + line + ANSI_RESET + ('\n' if final else ''))
    sys.stdout.flush()


def _cleanup_progress_footer():
    if not _PROGRESS_STATE['footer_active']:
        return

    height = _terminal_height()
    # Erase the pinned bar, restore normal terminal scrolling, and leave the
    # cursor on a clean line so the final success/failure report is readable.
    sys.stdout.write(
        ANSI_RESET + '\033[%d;1H\033[2K\033[r\033[%d;1H\033[2K\033[%d;1H' % (
            height, max(1, height - 1), max(1, height - 1)
        ) + ANSI_RESET
    )
    sys.stdout.flush()
    _PROGRESS_STATE['footer_active'] = False


def _progress_post_action(target, source, env):
    if not _PROGRESS_ENABLED:
        return
    with _PROGRESS_LOCK:
        _PROGRESS_STATE['completed'] += 1
        _PROGRESS_STATE['started'] = True
        _draw_progress(
            _PROGRESS_STATE['completed'], _PROGRESS_STATE['total']
        )


# A raw Python function passed directly to AddPostAction is displayed by SCons
# as `_progress_post_action([...], [...])`. Wrap it in an Action whose display
# string is empty; the callback still executes after each built node.
_PROGRESS_ACTION = Action(
    _progress_post_action,
    strfunction=lambda target, source, env, executor=None: '',
)


def _diagnostic_spawn(sh, escape, cmd, args, child_env):
    """Run a command, relay its output, count diagnostics, and strip ANSI colors.

    This mirrors SCons' platform spawn command construction while capturing
    output line-by-line. Combining stdout/stderr keeps parallel compiler output
    readable and lets warnings/errors update the pinned progress footer live.
    """
    if os.name == 'nt':
        if not sh:
            sys.stderr.write('scons: Could not find command interpreter in PATH.\n')
            return 127
        # Do not pass escape(' '.join(args)) here. SCons' Windows escape()
        # wraps the *entire* command line in quotes; with already-quoted source
        # paths, cmd.exe can then interpret the whole string as the executable
        # name (for example: \"clang-cl ... \"src\file.c\" ...\").
        # Pass cmd.exe a raw Windows command line instead, quoting only the
        # interpreter path if necessary. The command arguments produced by
        # SCons already contain the required quoting for paths and flags.
        command = subprocess.list2cmdline([sh]) + ' /C ' + ' '.join(args)
    else:
        if not sh:
            sh = '/bin/sh'
        command = [sh, '-c', ' '.join(args)]

    try:
        process = subprocess.Popen(
            command,
            env=child_env,
            stdout=subprocess.PIPE,
            stderr=subprocess.STDOUT,
            universal_newlines=True,
            errors='replace',
            bufsize=1,
        )
        if process.stdout is not None:
            for raw_line in process.stdout:
                # Count diagnostics using plain text, but forward Clang's SGR
                # sequences to keep colored warning/error highlighting. Reset at
                # each line boundary so no compiler color leaks into SCons or the
                # shell prompt after the build.
                plain_line = _ANSI_ESCAPE_RE.sub('', raw_line)
                display_line = _preserve_sgr_strip_other_ansi(raw_line)
                warnings = len(_WARNING_RE.findall(plain_line))
                errors = len(_ERROR_RE.findall(plain_line))
                with _PROGRESS_LOCK:
                    _PROGRESS_STATE['warnings'] += warnings
                    _PROGRESS_STATE['errors'] += errors
                    sys.stdout.write(ANSI_RESET + display_line + ANSI_RESET)
                    sys.stdout.flush()
                    if (warnings or errors) and _PROGRESS_ENABLED:
                        _draw_progress(
                            _PROGRESS_STATE['completed'],
                            _PROGRESS_STATE['total'],
                        )
        return process.wait()
    except OSError as exc:
        message = 'scons: %s: %s\n' % (cmd, exc)
        with _PROGRESS_LOCK:
            sys.stderr.write(ANSI_RESET + message + ANSI_RESET)
            sys.stderr.flush()
        return getattr(exc, 'errno', None) or 127


def _track_progress(env, nodes):
    if nodes is None:
        return nodes
    try:
        node_list = list(nodes)
    except TypeError:
        node_list = [nodes]
    for node in node_list:
        key = str(node)
        if key in _PROGRESS_NODES:
            continue
        _PROGRESS_NODES[key] = node
        if _PROGRESS_ENABLED:
            env.AddPostAction(node, _PROGRESS_ACTION)
    return nodes

def _report_build_result():
    try:
        from SCons.Script import GetBuildFailures
        failures = GetBuildFailures()
    except Exception:
        _cleanup_progress_footer()
        if ANSI_TTY:
            try:
                sys.stdout.write(ANSI_RESET + '\033[r')
                sys.stdout.flush()
            except Exception:
                pass
        return

    warnings = _PROGRESS_STATE['warnings']
    errors = _PROGRESS_STATE['errors']
    if failures:
        _cleanup_progress_footer()
        for failure in failures:
            node = getattr(failure, 'node', None)
            path = str(node) if node is not None else 'unknown target'
            errstr = str(getattr(failure, 'errstr', '') or '').strip()
            suffix = os.path.splitext(path)[1].lower()
            if suffix in ('.o', '.obj'):
                icon, stage = '🛠️', 'Compilation'
            elif suffix in ('.dll', '.so', '.dylib', '.exe'):
                icon, stage = '🔗', 'Linking'
            elif suffix in ('.a', '.lib'):
                icon, stage = '📦', 'Archiving'
            elif suffix == '.res':
                icon, stage = '🖼️', 'Resource compilation'
            elif path.endswith(('g_funcs.h', 'g_func_decs.h')):
                icon, stage = '🧬', 'Code generation'
            else:
                icon, stage = '⚙️', 'Build step'

            detail = ' — ' + errstr if errstr else ''
            print('%s❌ %s %s failed: %s\'%s\'%s%s' % (
                RED, icon, stage, GRAY, path, RESET, detail
            ), file=sys.stderr)
        # Some linkers only return a nonzero exit status without an `error:` line.
        shown_errors = max(errors, len(failures))
        print('%s📊 Diagnostics: ⚠️ %d warning(s), ❌ %d error(s)%s' % (
            RED, warnings, shown_errors, RESET
        ), file=sys.stderr)
        if ANSI_TTY:
            try:
                sys.stdout.write(ANSI_RESET)
                sys.stderr.write(ANSI_RESET)
                sys.stdout.flush()
                sys.stderr.flush()
            except Exception:
                pass
        return

    if _PROGRESS_ENABLED and _PROGRESS_STATE['started']:
        total = _PROGRESS_STATE['total']
        done = _PROGRESS_STATE['completed']
        _draw_progress(total, total, final=True)
        _cleanup_progress_footer()
        skipped = max(0, total - done)
        print('%s✅ Build complete%s — %d action(s) rebuilt; %d up-to-date/skipped.  ⚠️ %d  ❌ %d' % (
            GREEN, RESET, done, skipped, warnings, errors
        ))
    else:
        # Even an up-to-date build must restore the terminal's scroll region.
        _cleanup_progress_footer()
        if warnings or errors:
            print('%s📊 Diagnostics: ⚠️ %d warning(s), ❌ %d error(s)%s' % (
                GREEN if not errors else RED, warnings, errors, RESET
            ))
    # Make sure the shell prompt always starts in its default terminal color.
    if ANSI_TTY:
        try:
            sys.stdout.write(ANSI_RESET)
            sys.stdout.flush()
        except Exception:
            pass


atexit.register(_report_build_result)

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

HOST_PLATFORM = pyplatform.system()
if HOST_PLATFORM not in ('Windows', 'Linux'):
    print('Unsupported host platform %r; this SConstruct supports Windows and Linux only.' % HOST_PLATFORM, file=sys.stderr)
    Exit(1)
IS_WINDOWS = HOST_PLATFORM == 'Windows'
PLATFORM_NAME = 'windows' if IS_WINDOWS else 'linux'
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
Usage: scons [ arch=x86|x64 ] [ config=debug|release ] [ hardlink=game,cgame,ui,renderer ] [ funcs=1 ] [ verbose=1 ] [ -j N ]
Outputs go to bin/ (engine and renderers) and bin/main/ (game modules),
each name suffixed with the arch. Objects stay under build/<platform>-<arch>-<config>/.
hardlink links the listed modules into the executable; only one of
game, cgame, ui can be linked at a time because they share trap_* names.
funcs=1 regenerates the savegame function table headers with extractfuncs.
verbose=1 shows full compiler/linker commands instead of short file messages.
Parallel jobs default to up to 16 CPU cores; -jN overrides this (use -j1 for serial).
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
    env.Append(
        CCFLAGS=['/W4', arch_flag, '/nologo'],
        CXXFLAGS=['/W4', arch_flag, '/nologo']
    )

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

# The custom spawn captures compiler output through a pipe, so Clang can no
# longer detect an interactive terminal by itself. Force colored diagnostics
# only when this terminal supports ANSI colors and NO_COLOR is not set.
if USE_COLOR:
    if IS_WINDOWS:
        env.Append(CCFLAGS=['/clang:-fcolor-diagnostics'], CXXFLAGS=['/clang:-fcolor-diagnostics'])
    else:
        env.Append(CCFLAGS=['-fcolor-diagnostics'], CXXFLAGS=['-fcolor-diagnostics'])

# Capture diagnostics from compiler/linker subprocesses for the footer counters.
# Cloned environments inherit this spawn function.
env['SPAWN'] = _diagnostic_spawn

# Keep normal output terse and styled. The words are white and the actual
# source/target is gray and quoted. verbose=1 restores raw compiler commands.
if ARGUMENTS.get('verbose') != '1':
    env['CCCOMSTR'] = _status_text('Compiling', '$SOURCE')
    env['CXXCOMSTR'] = _status_text('Compiling', '$SOURCE')
    env['SHCCCOMSTR'] = _status_text('Compiling', '$SOURCE')
    env['SHCXXCOMSTR'] = _status_text('Compiling', '$SOURCE')
    env['LINKCOMSTR'] = _status_text('Linking', '$TARGET')
    env['SHLINKCOMSTR'] = _status_text('Linking', '$TARGET')
    env['ARCOMSTR'] = _status_text('Archiving', '$TARGET')
    env['RANLIBCOMSTR'] = _status_text('Indexing', '$TARGET')
    env['ASCOMSTR'] = _status_text('Assembling', '$SOURCE')

# q_shared.h needs CPUSTRING and PATH_SEP everywhere, and Sys_LoadModule
# needs ARCH_STRING as a quoted module name suffix. Quoted values cannot go
# through command line defines, so SCons writes them into a per build header
# and force includes it in every file: /FI on clang-cl, -include on clang.
os.makedirs(BUILD_DIR, exist_ok=True)
q_buildconfig = os.path.join(BUILD_DIR, 'q_buildconfig.h')
cpustring = ('win' if IS_WINDOWS else 'linux') + '-' + ARCH + ('-debug' if CONFIG == 'debug' else '')
q_buildconfig_text = '\n'.join([
    '/* generated by SConstruct, do not edit */',
    '#ifndef Q_BUILDCONFIG_H',
    '#define Q_BUILDCONFIG_H',
    '#define CPUSTRING "%s"' % cpustring,
    '#define ARCH_STRING "%s"' % ARCH,
    "#define PATH_SEP '%s'" % ('\\\\' if IS_WINDOWS else '/'),
    '#endif',
    '',
])

# Avoid updating the generated header when its contents have not changed.
try:
    with open(q_buildconfig, 'r') as f:
        old_q_buildconfig_text = f.read()
except OSError:
    old_q_buildconfig_text = None

if old_q_buildconfig_text != q_buildconfig_text:
    with open(q_buildconfig, 'w') as f:
        f.write(q_buildconfig_text)
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

    # q_buildconfig.h is force-included using /FI or -include, so the
    # normal source scanner may not discover it as an include dependency.
    menv.Depends(objs, q_buildconfig)
    _track_progress(menv, objs)
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
    rc_command = '"%s" /nologo /fo $TARGET $SOURCE' % RC_BIN
    rc_action = rc_command if ARGUMENTS.get('verbose') == '1' else Action(
        rc_command, _status_text('Compiling resource', '$SOURCE'))
    client_res = client_env.Command(
        os.path.join(BUILD_DIR, 'client', 'winquake.res'),
        'src/sys/win32/winquake.rc',
        rc_action)
    _track_progress(client_env, client_res)
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
extractfuncs_nodes = extractfuncs_env.Program(
    extractfuncs_target,
    module_objects(extractfuncs_env, 'extractfuncs_tool', extractfuncs_files))
_track_progress(extractfuncs_env, extractfuncs_nodes)

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
    extractfuncs_header_nodes = env.Command(
        extractfuncs_headers, [extractfuncs_target],
        Action(run_extractfuncs, _status_text('Generating', '$TARGET')))
    # Both headers are emitted by one command, so count it once.
    if extractfuncs_header_nodes:
        _track_progress(env, [extractfuncs_header_nodes[0]])
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
    _track_progress(game_env, game_env.SharedLibrary(game_target, game_objs))

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
    _track_progress(cgame_env, cgame_env.SharedLibrary(cgame_target, cgame_objs))

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
    _track_progress(ui_env, ui_env.SharedLibrary(ui_target, ui_objs))

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
    _track_progress(renderer_env, renderer_env.SharedLibrary(renderer_target, renderer_objs))

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
_track_progress(idlib_env, idlib_target)

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
_track_progress(renderer_bfg_env, renderer_bfg_env.SharedLibrary(
    renderer_bfg_target, renderer_bfg_objs + idlib_objs))

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
_track_progress(client_env, client_env.Program(
    client_target, client_link_objs + client_res))

# ------------------------------------------------------- defaults

defaults = [client_target, extractfuncs_target, idlib_target[0], renderer_bfg_target]
for target, module in ((game_target, 'game'), (cgame_target, 'cgame'), (ui_target, 'ui'), (renderer_target, 'renderer')):
    if module not in HARDLINK:
        defaults.append(target)
Default(*defaults)

# The build graph is now fully declared, so this is the denominator for the
# default-build progress bar. It includes compile, archive, resource, and link
# actions, including those that SCons may later determine are already current.
_PROGRESS_STATE['total'] = len(_PROGRESS_NODES)
if _PROGRESS_ENABLED:
    _setup_progress_footer()
    _draw_progress(0, _PROGRESS_STATE['total'])
