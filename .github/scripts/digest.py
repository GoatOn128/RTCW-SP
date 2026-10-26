#!/usr/bin/env python3
"""Extract errors and warnings from build.log into a digest fragment.

The status file is written first so the publish job always has data,
even if log parsing breaks. Any script error is captured into the
fragment itself so it stays visible in build-digest.md.

Warnings are grouped by kind (clang warning flag or MSVC diagnostic
code) with a count and a few example lines, so long -k builds stay
readable.
"""

import os
import re
import traceback
from collections import OrderedDict

LEG = os.environ.get("LEG", "unknown")
STATUS = os.environ.get("STATUS", "unknown")

ERROR_RE = re.compile(
    "error:|fatal error:|error C[0-9]+|Error C[0-9]+|scons: [*][*][*]|"
    "undefined reference|unresolved external|no such file|cannot open|"
    "UNCRUSTIFY_FAILED"
)
WARNING_RE = re.compile("warning:|warning C[0-9]+")

# clang style: src/file.c:12:34: warning: message [-Wflag]
CLANG_WARN_RE = re.compile(
    r"^(?P<loc>[^ ]+): warning: (?P<msg>.*?)\s*(?:\[(?P<flag>[-\w]+)\])?\s*$"
)
# clang-cl style: src\file.c(12,34): warning: message
CLANGCL_WARN_RE = re.compile(
    r"^(?P<loc>[^(]+)\((?P<line>\d+)(?:,\d+)?\): warning: (?P<msg>.*)$"
)
# msvc style: src\file.c(12): warning C4244: 'x': conversion from ...
MSVC_WARN_RE = re.compile(
    r"^(?P<loc>.*)\((?P<line>\d+)\): warning C(?P<code>\d+): (?P<msg>.*)$"
)


def warn_key(line):
    """Return a stable key describing what kind of warning this is."""
    m = CLANG_WARN_RE.match(line)
    if m:
        return m.group("flag") or m.group("msg")[:120]
    m = MSVC_WARN_RE.match(line)
    if m:
        return "C" + m.group("code") + ": " + m.group("msg")[:100]
    m = CLANGCL_WARN_RE.match(line)
    if m:
        return m.group("msg")[:120]
    return line.strip()[:120]


def main():
    with open("status-" + LEG, "w") as f:
        f.write(LEG + "|" + STATUS + "\n")

    with open("digest-fragment-" + LEG + ".md", "w") as f:
        f.write("## " + LEG + "\n\nstatus: " + STATUS + "\n\n")
        try:
            lines = []
            if os.path.exists("build.log"):
                with open("build.log", errors="replace") as fh:
                    lines = fh.read().splitlines()
            else:
                lines = ["no build.log: the job failed before or during early setup, before scons produced output"]
            errors = [l for l in lines if ERROR_RE.search(l)]
            warnings = [l for l in lines if WARNING_RE.search(l)]

            # identical error lines repeat across parallel jobs, keep one
            seen_errors = OrderedDict()
            for l in errors:
                seen_errors.setdefault(l.strip()[:400], None)

            groups = OrderedDict()
            for l in warnings:
                groups.setdefault(warn_key(l.strip()), []).append(l.strip()[:400])

            f.write("errors: " + str(len(seen_errors)) + "\n")
            f.write("warnings: " + str(len(warnings)) + " in " + str(len(groups)) + " kinds\n\n")

            f.write("### errors\n\n")
            for l in list(seen_errors.keys())[:200]:
                f.write(l + "\n")

            f.write("\n### warning kinds\n\n")
            for key, examples in list(groups.items())[:60]:
                f.write("- [" + str(len(examples)) + "x] " + key + "\n")
                for e in examples[:2]:
                    f.write("  - " + e + "\n")
        except Exception:
            f.write("digest script error:\n\n```\n" + traceback.format_exc() + "\n```\n")

    if os.path.exists("build.log"):
        with open("build.log", errors="replace") as src, open("log-" + LEG + ".log", "w") as dst:
            dst.write(src.read())


main()
