#!/usr/bin/env python3
"""Extract errors and warnings from build.log into a digest fragment.

The status file is written first so the publish job always has data,
even if log parsing breaks. Any script error is captured into the
fragment itself so it stays visible in build-digest.md.
"""

import os
import re
import traceback

LEG = os.environ.get("LEG", "unknown")
STATUS = os.environ.get("STATUS", "unknown")

ERROR_RE = re.compile(
    "error:|fatal error:|error C[0-9]+|Error C[0-9]+|scons: [*][*][*]|"
    "undefined reference|unresolved external|no such file|cannot open|"
    "UNCRUSTIFY_FAILED"
)
WARNING_RE = re.compile("warning:|warning C[0-9]+")


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
            errors = [l for l in lines if ERROR_RE.search(l)]
            warnings = [l for l in lines if WARNING_RE.search(l)]
            f.write("errors: " + str(len(errors)) + "\n")
            f.write("warnings: " + str(len(warnings)) + "\n\n")
            f.write("### errors\n\n")
            for l in errors[:100]:
                f.write(l.strip()[:400] + "\n")
            f.write("\n### warnings\n\n")
            for l in warnings[:50]:
                f.write(l.strip()[:400] + "\n")
        except Exception:
            f.write("digest script error:\n\n```\n" + traceback.format_exc() + "\n```\n")

    if os.path.exists("build.log"):
        with open("build.log", errors="replace") as src, open("log-" + LEG + ".log", "w") as dst:
            dst.write(src.read())


main()
