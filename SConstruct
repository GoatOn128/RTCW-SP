# RTCW-SP SCons build
#
# Usage:
#   scons arch=x86 config=debug
#   scons arch=x64 config=release
#   scons arch=x64 config=release hardlink=game
# Parallel jobs default to up to 16 CPU cores; use -jN or -j1 to override.
#
# Outputs go to bin/ (engine) and bin/main/ (game modules).
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
        # cmd.exe /C strips the first and last quote character of a command
        # line that begins with a quoted path (rc.exe lives under Program
        # Files), leaving 'C:\\Program' as the executable name. Wrap such a
        # line in an outer quote pair and pass /S so cmd.exe removes only
        # the outer quotes and keeps every quoted path inside intact.
        joined_args = ' '.join(args)
        if joined_args.startswith('"'):
            command = subprocess.list2cmdline([sh]) + ' /S /C "' + joined_args + '"'
        else:
            command = subprocess.list2cmdline([sh]) + ' /C ' + joined_args
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
HARDLINK_MODULES = ('game', 'cgame', 'ui')
for m in HARDLINK:
    if m not in HARDLINK_MODULES:
        print('hardlink: unknown module %r (expected one of %s)' % (m, ', '.join(HARDLINK_MODULES)))
        Exit(1)
# game, cgame and ui all define the same trap_* names, so only one of
# them can be linked into the executable. The renderer is always built
# into the executable.
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
Usage: scons [ arch=x86|x64 ] [ config=debug|release ] [ hardlink=game,cgame,ui ] [ funcs=1 ] [ verbose=1 ] [ -j N ]
Outputs go to bin/ (engine) and bin/main/ (game modules),
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
    'src/games/botlib',
    'src/games/cgame',
    'src/games/cgame/fx',
    'src/games/ui',
    'src/third-party/stb',
    'src/third-party/recast/Detour/Include',
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
    # knows and floods the log. The engine is C++ now, so pick the
    # language standard for it.
    # The engine declares members and parameters named 'or' (the
    # renderer orientation, for example tr.or), so the C++ alternative
    # operator keywords must stay disabled.
    env.Append(
        CCFLAGS=['/W4', arch_flag, '/nologo'],
        CXXFLAGS=['/W4', arch_flag, '/nologo', '/std:c++14', '/clang:-fno-operator-names']
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

    # stb_impl.c is the only C unit left; the engine is C++ now, and the
    # modernized units need at least C++14
    env.Append(CCFLAGS=['-Wall', '-fsigned-char', arch_flag])
    env.Append(CFLAGS=['-std=gnu89'])
    env.Append(CXXFLAGS=['-Wall', '-fsigned-char', '-std=gnu++14', arch_flag, '-fno-operator-names'])
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

# q_shared.h needs CPUSTRING and PATH_SEP everywhere, and Sys_LoadDll
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
# carries.
def module_link_files(module, files):
    if module not in HARDLINK:
        return files
    drop = ['src/qcommon/q_math.cpp', 'src/qcommon/q_shared.cpp']
    return [f for f in files if f not in drop]

renderer_files = ['src/renderer/' + f for f in [
    'tr_animation.cpp', 'tr_backend.cpp', 'tr_bsp.cpp', 'tr_cmds.cpp', 'tr_curve.cpp',
    'tr_decals.cpp', 'tr_flares.cpp', 'tr_font.cpp', 'tr_image.cpp', 'tr_init.cpp',
    'tr_light.cpp', 'tr_main.cpp', 'tr_marks.cpp', 'tr_md5.cpp', 'tr_mesh.cpp',
    'tr_model.cpp', 'tr_noise.cpp', 'tr_renderprog.cpp', 'tr_scene.cpp',
    'tr_shade.cpp', 'tr_shade_calc.cpp', 'tr_shader.cpp', 'tr_shadows.cpp',
    'tr_sky.cpp', 'tr_surface.cpp', 'tr_vfx.cpp', 'tr_world.cpp',
]]

client_files = ['src/client/' + f for f in [
    'cl_cgame.cpp', 'cl_cin.cpp', 'cl_console.cpp', 'cl_input.cpp', 'cl_keys.cpp',
    'cl_main.cpp', 'cl_net_chan.cpp', 'cl_parse.cpp', 'cl_scrn.cpp', 'cl_ui.cpp',
    'snd_adpcm.cpp', 'snd_dma.cpp', 'snd_mem.cpp', 'snd_mix.cpp', 'snd_wavelet.cpp',
]]

qcommon_files = ['src/qcommon/' + f for f in [
    'cm_load.cpp', 'cm_patch.cpp', 'cm_polylib.cpp', 'cm_test.cpp', 'cm_trace.cpp',
    'cmd.cpp', 'common.cpp', 'cvar.cpp', 'files.cpp', 'huffman.cpp', 'md4.cpp', 'msg.cpp',
    'net_chan.cpp', 'unzip.cpp',
]]

server_files = ['src/server/' + f for f in [
    'sv_bot.cpp', 'sv_ccmds.cpp', 'sv_client.cpp', 'sv_game.cpp', 'sv_init.cpp',
    'sv_main.cpp', 'sv_net_chan.cpp', 'sv_snapshot.cpp', 'sv_world.cpp',
]]

splines_files = ['src/splines/' + f for f in [
    'math_angles.cpp', 'math_matrix.cpp', 'math_quaternion.cpp',
    'math_vector.cpp', 'q_parse.cpp', 'q_shared.cpp', 'splines.cpp',
    'util_str.cpp',
]]

botlib_files = ['src/games/botlib/' + f for f in [
    'be_ai_char.cpp', 'be_ai_chat.cpp', 'be_ai_gen.cpp', 'be_ai_goal.cpp',
    'be_ai_move.cpp', 'be_ai_weap.cpp', 'be_ai_weight.cpp', 'be_ea.cpp',
    'be_interface.cpp', 'be_nav_interface.cpp', 'l_crc.cpp', 'l_libvar.cpp',
    'l_log.cpp', 'l_memory.cpp', 'l_precomp.cpp', 'l_script.cpp', 'l_struct.cpp',
]]


unix_sys_files = ['src/sys/unix/' + f for f in [
    'unix_main.cpp', 'unix_net.cpp', 'unix_shared.cpp', 'linux_common.cpp',
    'linux_glimp.cpp', 'linux_joystick.cpp', 'linux_qgl.cpp', 'linux_snd.cpp',
]]
# the unix asm files are not built: q_shared.h forces id386 to 0, so the
# portable C implementations are used

win_sys_files = ['src/sys/win32/' + f for f in [
    'win_gamma.cpp', 'win_glimp.cpp', 'win_input.cpp', 'win_main.cpp', 'win_net.cpp',
    'win_qgl.cpp', 'win_shared.cpp', 'win_snd.cpp', 'win_syscon.cpp',
    'win_wndproc.cpp',
]]

# ---------------------------------------------------------------- client

client_env = env.Clone()
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

# the renderer is built into the executable, so its sources compile
# straight into the client image
client_sources = (
    client_files + qcommon_files + server_files + renderer_files +
    ['src/qcommon/q_shared.cpp', 'src/qcommon/q_math.cpp'] +
    sys_files + splines_files
)
client_objs = module_objects(client_env, 'client', client_sources)

botlib_env = client_env.Clone()
botlib_env.Append(CPPDEFINES=['BOTLIB'])
client_objs += module_objects(botlib_env, 'client', botlib_files)

# stb is vendored third party code, its warnings stay muted; stb_impl.c
# is the single unit that pulls in the implementations
client_stb_env = client_env.Clone()
if IS_WINDOWS:
    client_stb_env.Append(CCFLAGS=['/W0'], CXXFLAGS=['/W0'])
else:
    client_stb_env.Append(CCFLAGS=['-w'], CXXFLAGS=['-w'])
client_objs += module_objects(client_stb_env, 'client', ['src/third-party/stb/stb_impl.c'])

# Detour is the vendored runtime navigation library behind botlib's nav
# interface; vendored third party code, so its warnings stay muted
detour_files = ['src/third-party/recast/Detour/Source/' + f for f in [
    'DetourAlloc.cpp', 'DetourAssert.cpp', 'DetourCommon.cpp',
    'DetourNavMesh.cpp', 'DetourNavMeshBuilder.cpp',
    'DetourNavMeshQuery.cpp', 'DetourNode.cpp',
]]
detour_env = client_env.Clone()
if IS_WINDOWS:
    detour_env.Append(CCFLAGS=['/W0'], CXXFLAGS=['/W0'])
else:
    detour_env.Append(CCFLAGS=['-w'], CXXFLAGS=['-w'])
client_objs += module_objects(detour_env, 'client', detour_files)

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
    'extractfuncs.cpp', 'l_log.cpp', 'l_memory.cpp', 'l_precomp.cpp', 'l_script.cpp',
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
    'bg_animation.cpp', 'bg_misc.cpp', 'bg_pmove.cpp',
    'bg_slidemove.cpp', 'g_active.cpp', 'g_alarm.cpp', 'g_client.cpp',
    'g_cmds.cpp', 'g_combat.cpp', 'g_items.cpp', 'g_main.cpp', 'g_mem.cpp',
    'g_misc.cpp', 'g_missile.cpp', 'g_mover.cpp', 'g_props.cpp', 'g_save.cpp',
    'g_script.cpp', 'g_script_actions.cpp', 'g_session.cpp', 'g_spawn.cpp',
    'g_svcmds.cpp', 'g_syscalls.cpp', 'g_target.cpp', 'g_team.cpp',
    'g_tramcar.cpp', 'g_trigger.cpp', 'g_utils.cpp', 'g_weapon.cpp',
]] + ['src/games/game/ai/' + f for f in [
    'ai_actor.cpp', 'ai_awareness.cpp', 'ai_characters.cpp', 'ai_danger.cpp',
    'ai_debug.cpp', 'ai_events.cpp', 'ai_input.cpp', 'ai_movement.cpp',
    'ai_navigation.cpp', 'ai_perception.cpp', 'ai_scheduler.cpp',
    'ai_script.cpp', 'ai_script_actions_animation.cpp',
    'ai_script_actions_combat.cpp', 'ai_script_actions_mission.cpp',
    'ai_script_actions_movement.cpp', 'ai_script_entities.cpp',
    'ai_spawn.cpp', 'ai_system.cpp', 'ai_targeting.cpp', 'ai_weapons.cpp',
]] + ['src/games/game/ai/fsm/' + f for f in [
    'ai_ability.cpp', 'ai_behavior_cover.cpp', 'ai_behavior_doors.cpp',
    'ai_behavior_evasion.cpp', 'ai_behavior_grenades.cpp',
    'ai_behavior_idle.cpp', 'ai_behavior_investigate.cpp',
    'ai_behavior_mounted.cpp', 'ai_behavior_pursuit.cpp',
    'ai_boss_heinrich.cpp', 'ai_boss_helga.cpp', 'ai_combat.cpp',
    'ai_monster_blackguard.cpp', 'ai_monster_loper.cpp',
    'ai_monster_reject.cpp', 'ai_monster_stimsoldier.cpp',
    'ai_monster_warzombie.cpp', 'ai_monster_zombie.cpp',
    'ai_state_legacy.cpp', 'ai_state_machine.cpp',
]] + ['src/qcommon/q_math.cpp', 'src/qcommon/q_shared.cpp']

# The savegame function table headers are checked in. The extractfuncs
# scanner crashes under the modern 64 bit toolchains (heap corruption on
# Windows, SIGSEGV on Linux), so the regeneration run is opt-in with
# funcs=1; the tool itself still builds on every run.
extractfuncs_headers = ['src/games/game/g_funcs.h', 'src/games/game/g_func_decs.h']
# the scanner is invoked with plain file names from the game directory, so
# the ai/ subdirectory stays out of the scan
game_scan_files = [f for f in game_files if f.startswith('src/games/game/') and '/ai/' not in f]
REGEN_FUNCS = ARGUMENTS.get('funcs') == '1'

def run_extractfuncs(target, source, env):
    # Run from src/games/game so the headers land next to the sources.
    # Windows main() takes a file filter, Linux main() takes file names;
    # sorted names keep both platforms producing the same table. The
    # scan files must not be Command sources: SCons scans the sources for
    # includes, which made the headers depend on themselves.
    args = [source[0].abspath]
    if IS_WINDOWS:
        args.append('*.cpp')
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
    'bg_animation.cpp', 'bg_misc.cpp', 'bg_pmove.cpp', 'bg_slidemove.cpp',
]] + ['src/games/cgame/' + f for f in [
    'cg_consolecmds.cpp', 'cg_draw.cpp', 'cg_drawtools.cpp', 'cg_effects.cpp',
    'cg_ents.cpp', 'cg_event.cpp', 'cg_fx.cpp', 'cg_fx_entities.cpp',
    'cg_fx_flame.cpp', 'cg_fx_marks.cpp', 'cg_fx_particles.cpp',
    'cg_fx_trails.cpp', 'cg_info.cpp', 'cg_main.cpp', 'cg_newDraw.cpp',
    'cg_players.cpp', 'cg_playerstate.cpp', 'cg_predict.cpp',
    'cg_scoreboard.cpp', 'cg_servercmds.cpp', 'cg_snapshot.cpp', 'cg_sound.cpp',
    'cg_syscalls.cpp', 'cg_view.cpp', 'cg_weapons.cpp',
]] + ['src/games/cgame/fx/' + f for f in [
    'FxPrimitives.cpp', 'FxScheduler.cpp', 'FxSystem.cpp', 'FxTemplate.cpp',
    'FxUtil.cpp', 'genericparser2.cpp',
]] + ['src/games/ui/ui_shared.cpp'] + ['src/qcommon/q_math.cpp', 'src/qcommon/q_shared.cpp']

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
    'bg_misc.cpp',
]] + ['src/games/ui/' + f for f in [
    'ui_atoms.cpp', 'ui_gameinfo.cpp', 'ui_main.cpp', 'ui_players.cpp',
    'ui_shared.cpp', 'ui_syscalls.cpp', 'ui_util.cpp',
]] + ['src/qcommon/q_math.cpp', 'src/qcommon/q_shared.cpp']

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


# ------------------------------------------------------- client link

# each hard-linked module contributes its objects to the engine image;
# the renderer objects are already part of client_objs
client_link_objs = list(client_objs)
if 'game' in HARDLINK:
    client_link_objs += game_objs
if 'cgame' in HARDLINK:
    client_link_objs += cgame_objs
if 'ui' in HARDLINK:
    client_link_objs += ui_objs
_track_progress(client_env, client_env.Program(
    client_target, client_link_objs + client_res))

# ------------------------------------------------------- defaults

defaults = [client_target, extractfuncs_target]
for target, module in ((game_target, 'game'), (cgame_target, 'cgame'), (ui_target, 'ui')):
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

