#!/usr/bin/env python3
"""Extract errors and warnings from build.log into a digest fragment."""

import os
import re

LEG = os.environ.get("LEG", "unknown")
STATUS = os.environ.get("STATUS", "unknown")

ERROR_RE = re.compile(
    r"error:|fatal error:|error Cd{{4}}|Error Cd{{4}}|scons: ***|"
    r"undefined reference|unresolved external|no such file|cannot open"
)
WARNING_RE = re.compile(r"warning:|warning Cd{{4}}")


def main():
    lines = []
    if os.path.exists("build.log"):
        with open("build.log", errors="replace") as f:
            lines = f.read().splitlines()

    errors = [l for l in lines if ERROR_RE.search(l)]
    warnings = [l for l in lines if WARNING_RE.search(l)]

    if os.path.exists("build.log"):
        with open("build.log", errors="replace") as src, open("log-%s.log" % LEG, "w") as dst:
            dst.write(src.read())

    with open("digest-fragment-%s.md" % LEG, "w") as f:
        f.write("## %s\n\n" % LEG)
        f.write("status: %s\n\n" % STATUS)
        f.write("errors: %d\nwarnings: %d\n\n" % (len(errors), len(warnings)))
        f.write("### errors\n\n")
        for l in errors[:100]:
            f.write(l.strip()[:400] + "\n")
        f.write("\n### warnings\n\n")
        for l in warnings[:50]:
            f.write(l.strip()[:400] + "\n")

    with open("status-%s" % LEG, "w") as f:
        f.write("%s|%s\n" % (LEG, STATUS))


if __name__ == "__main__":
    main()
