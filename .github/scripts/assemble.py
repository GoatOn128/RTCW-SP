#!/usr/bin/env python3
"""Merge per-leg logs and digest fragments into build.log and build-digest.md."""

import glob
import os

MAX_LOG = 400000  # bytes kept per failed leg


def read(path):
    with open(path, errors="replace") as f:
        return f.read()


def main():
    frag_files = sorted(glob.glob("logs/digest-fragment-*.md"))
    status_files = sorted(glob.glob("logs/status-*"))
    log_files = sorted(glob.glob("logs/log-*.log"))

    statuses = {}
    for sf in status_files:
        leg, status = read(sf).strip().split("|", 1)
        statuses[leg] = status

    digest = ["# Build digest\n\n"]
    digest.append("commit: %s\n\n" % os.environ.get("GITHUB_SHA", "unknown")[:12])
    for leg in sorted(statuses):
        digest.append("- %s: %s\n" % (leg, statuses[leg]))
    digest.append("\n")
    for ff in frag_files:
        digest.append(read(ff).strip() + "\n\n")
    with open("build-digest.md", "w") as f:
        f.write("".join(digest))

    parts = []
    for lf in log_files:
        leg = os.path.basename(lf)[len("log-"):-len(".log")]
        if statuses.get(leg) == "success":
            # successful leg logs stay in the artifacts only
            continue
        text = read(lf)
        if len(text) > MAX_LOG:
            half = MAX_LOG // 2
            text = text[:half] + "\n... [truncated] ...\n" + text[-half:]
        parts.append("==== %s (%s) ====\n\n" % (leg, statuses.get(leg, "unknown")))
        parts.append(text + "\n\n")
    with open("build.log", "w") as f:
        f.write("".join(parts) if parts else "all legs succeeded\n")


if __name__ == "__main__":
    main()
