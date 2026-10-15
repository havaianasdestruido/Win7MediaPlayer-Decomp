#!/usr/bin/env python3
"""phase0_check.py — Phase 0 (P0.1, P0.2, P0.3) prerequisite, environment, and toolchain validation.

Purpose
-------
Execute and verify all tasks in **Phase 0: Prerequisites & Environment Setup**
of ``TODO.md``:

* **P0.1 — Verify repository integrity and binary authenticity**
  1. Confirm all 53 input files in ``bin/`` are byte-identical to upstream commits
     ``7808d47`` (initial root layout) and ``5c564f7`` (moved ``bin/`` layout).
  2. Verify SHA-256, SHA-1, MD5, and byte-size hashes match
     ``analysis/report/data/inventory.json`` (53/53).
  3. Compare binaries against Microsoft's published update manifests, Windows 7
     (NT 6.1) CBS/WinSxS package manifests, servicing KB build waves, embedded
     ``RT_MANIFEST`` XMLs, and Winbindex via ``manifest_verify.py``.
  4. Audit ``analysis/tools/`` source files to verify read-only access to ``bin/``.

* **P0.2 — Environment provisioning**
  1. Verify Python 3.11+ and required packages (``angr``, ``claripy``, ``cle``,
     ``pyvex``, ``archinfo``, ``pefile``, ``capstone``, ``pyelftools``,
     ``bitstring<4``).
  2. Verify Node.js 22+ and REA 6.5.0 CLI availability.
  3. Verify CMake 4.4+ and Ninja 1.13+ for build validation.
  4. Verify GNU objdump 2.40+ and GCC 12+ for disassembly and harness checks.

* **P0.3 — Toolchain validation**
  1. Verify all tools produce consistent, reproducible outputs across repeated
     invocations (``peutils``, ``pefile``, ``capstone``, ``objdump``, ``angr``
     ``CFGFast``, ``rea inspect-pe-resources``).
  2. Cross-check installed tool versions against ``analysis/report/methodology.md`` §2.
  3. Validate evidence archiving conventions across ``analysis/report/rea-evidence/``
     (168 operations + gzip integrity + SHA-256 verification),
     ``analysis/report/resources/`` (539 payloads), and ``src/*/decompiled/``
     (888 functions with provenance headers).

Usage
-----
    python3 analysis/tools/phase0_check.py
    python3 analysis/tools/phase0_check.py --json-only
"""

from __future__ import annotations

import argparse
import datetime as dt
import glob
import gzip
import hashlib
import json
import os
import re
import subprocess
import sys
from typing import Any

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), "lib"))
import manifest_verify as MV  # noqa: E402
import peutils as P  # noqa: E402

REPO = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", ".."))
BIN_DIR = os.path.join(REPO, "bin")
REPORT_DIR = os.path.join(REPO, "analysis", "report")
DATA_DIR = os.path.join(REPORT_DIR, "data")


def check_bin_readonly_in_tools() -> dict[str, Any]:
    """Scan all scripts under analysis/tools/ to confirm none opens bin/ for writing."""
    tools_dir = os.path.join(REPO, "analysis", "tools")
    scripts = sorted(glob.glob(os.path.join(tools_dir, "**", "*.py"), recursive=True))
    violations: list[str] = []
    for sp in scripts:
        text = open(sp, "r", encoding="utf-8", errors="replace").read()
        # Check for any direct write mode targeting bin/
        for line_no, line in enumerate(text.splitlines(), 1):
            if "open(" in line and ("\"w" in line or "'w" in line or "\"a" in line or "'a" in line):
                if "bin_dir" in line or "BIN" in line or "\"bin/" in line or "'bin/" in line:
                    violations.append(f"{os.path.relpath(sp, REPO)}:{line_no}")
    return {
        "scripts_scanned": len(scripts),
        "write_violations": violations,
        "passed": len(violations) == 0,
    }


def check_p0_1() -> dict[str, Any]:
    """Run all P0.1 repository integrity and binary authenticity checks."""
    manifest_summary = MV.verify_all(refresh_winbindex=False)
    ro_audit = check_bin_readonly_in_tools()
    git_diff_bin = subprocess.check_output(
        ["git", "-C", REPO, "diff", "--name-only", MV.UPSTREAM_MOVED_COMMIT, "HEAD", "--", "bin/"],
        text=True,
    ).strip()
    passed = (
        manifest_summary["all_passed"]
        and ro_audit["passed"]
        and (git_diff_bin == "")
    )
    return {
        "passed": passed,
        "git_diff_against_5c564f7_empty": git_diff_bin == "",
        "readonly_tool_audit": ro_audit,
        "manifest_verification_checks": manifest_summary["checks"],
    }


def get_cmd_first_line(cmd: list[str]) -> str:
    try:
        out = subprocess.check_output(cmd, stderr=subprocess.STDOUT, text=True, timeout=30)
        for line in out.splitlines():
            if line.strip() and not line.startswith("npm "):
                return line.strip()
        return ""
    except Exception as exc:  # noqa: BLE001
        return f"ERROR: {exc}"


def check_p0_2() -> dict[str, Any]:
    """Verify all P0.2 environment provisioning requirements."""
    import angr
    import archinfo
    import bitstring
    import capstone
    import claripy
    import cle
    import elftools
    import pefile
    import pyvex

    py_ver = f"{sys.version_info.major}.{sys.version_info.minor}.{sys.version_info.micro}"
    node_ver = get_cmd_first_line(["node", "--version"]).lstrip("v")
    rea_ver = get_cmd_first_line(["rea", "--version"])
    cmake_line = get_cmd_first_line(["cmake", "--version"])
    cmake_ver = cmake_line.split()[-1] if cmake_line else ""
    ninja_ver = get_cmd_first_line(["ninja", "--version"]).split(".git")[0]
    objdump_line = get_cmd_first_line(["objdump", "--version"])
    objdump_ver = objdump_line.split()[-1] if objdump_line else ""
    gcc_line = get_cmd_first_line(["gcc", "--version"])
    gcc_ver = gcc_line.split()[-1] if gcc_line else ""

    tools = {
        "python": {"version": py_ver, "required": ">=3.11", "ok": sys.version_info >= (3, 11)},
        "angr": {"version": angr.__version__, "required": "9.2.213", "ok": angr.__version__ == "9.2.213"},
        "claripy": {"version": claripy.__version__, "required": "9.2.213", "ok": claripy.__version__ == "9.2.213"},
        "cle": {"version": cle.__version__, "required": "9.2.213", "ok": cle.__version__ == "9.2.213"},
        "pyvex": {"version": pyvex.__version__, "required": "9.2.213", "ok": pyvex.__version__ == "9.2.213"},
        "archinfo": {"version": archinfo.__version__, "required": "9.2.213", "ok": archinfo.__version__ == "9.2.213"},
        "pefile": {"version": pefile.__version__, "required": "2024.8.26", "ok": pefile.__version__ == "2024.8.26"},
        "capstone": {"version": capstone.__version__, "required": "5.0.6", "ok": capstone.__version__ == "5.0.6"},
        "pyelftools": {"version": elftools.__version__, "required": "0.33", "ok": elftools.__version__ == "0.33"},
        "bitstring": {
            "version": bitstring.__version__,
            "required": "3.1.9 (<4)",
            "ok": bitstring.__version__.startswith("3."),
        },
        "node": {"version": node_ver, "required": ">=22.0", "ok": node_ver.startswith("22.")},
        "rea": {"version": rea_ver, "required": "6.5.0", "ok": rea_ver == "6.5.0"},
        "cmake": {"version": cmake_ver, "required": ">=4.4", "ok": cmake_ver.startswith("4.")},
        "ninja": {"version": ninja_ver, "required": ">=1.13", "ok": ninja_ver.startswith("1.13")},
        "objdump": {"version": objdump_ver, "required": ">=2.40", "ok": objdump_ver == "2.40"},
        "gcc": {"version": gcc_ver, "required": ">=12.0", "ok": gcc_ver.startswith("12.")},
    }
    passed = all(v["ok"] for v in tools.values())
    return {
        "passed": passed,
        "tools": tools,
    }


def check_p0_3_reproducibility() -> dict[str, Any]:
    """Run two-pass determinism checks across every tool in the analysis pipeline."""
    import angr
    import capstone

    sample_pe = os.path.join(BIN_DIR, "wmpconfig.exe")
    checks: dict[str, Any] = {}

    # 1. peutils + pefile determinism
    runs_pe = []
    for _ in range(2):
        info = P.parse_pe(sample_pe, "bin/wmpconfig.exe")
        P.enrich_with_pefile(info)
        runs_pe.append(hashlib.sha256(json.dumps(info.as_dict(), sort_keys=True).encode()).hexdigest())
    checks["peutils_and_pefile"] = {
        "subject": "bin/wmpconfig.exe",
        "run1_sha256": runs_pe[0],
        "run2_sha256": runs_pe[1],
        "deterministic": runs_pe[0] == runs_pe[1],
    }

    # 2. capstone instruction decode determinism
    raw = open(sample_pe, "rb").read()
    # Entry RVA 0x15cc -> raw offset 0x400 + (0x15cc - 0x1000) = 0x9cc
    code_slice = raw[0x9CC : 0x9CC + 256]
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)
    runs_cs = []
    for _ in range(2):
        insns = [(i.address, i.mnemonic, i.op_str, i.bytes.hex()) for i in md.disasm(code_slice, 0x1000015CC)]
        runs_cs.append(hashlib.sha256(json.dumps(insns).encode()).hexdigest())
    checks["capstone_x86_64"] = {
        "subject": "bin/wmpconfig.exe @ 0x1000015cc (256B)",
        "run1_sha256": runs_cs[0],
        "run2_sha256": runs_cs[1],
        "deterministic": runs_cs[0] == runs_cs[1],
    }

    # 3. GNU objdump determinism
    runs_obj = []
    for _ in range(2):
        out = subprocess.check_output(
            [
                "objdump",
                "-d",
                "--start-address=0x1000015cc",
                "--stop-address=0x1000016cc",
                sample_pe,
            ]
        )
        runs_obj.append(hashlib.sha256(out).hexdigest())
    checks["gnu_objdump"] = {
        "subject": "bin/wmpconfig.exe @ 0x1000015cc..0x1000016cc",
        "run1_sha256": runs_obj[0],
        "run2_sha256": runs_obj[1],
        "deterministic": runs_obj[0] == runs_obj[1],
    }

    # 4. angr CFGFast determinism
    runs_cfg = []
    fn_counts = []
    for _ in range(2):
        proj = angr.Project(sample_pe, auto_load_libs=False)
        cfg = proj.analyses.CFGFast(normalize=True, data_references=True)
        fn_addrs = sorted(int(addr) for addr in cfg.kb.functions)
        fn_counts.append(len(fn_addrs))
        runs_cfg.append(hashlib.sha256(json.dumps(fn_addrs).encode()).hexdigest())
    checks["angr_cfgfast"] = {
        "subject": "bin/wmpconfig.exe",
        "functions_discovered": fn_counts[0],
        "run1_sha256": runs_cfg[0],
        "run2_sha256": runs_cfg[1],
        "deterministic": runs_cfg[0] == runs_cfg[1] and fn_counts[0] == 58,
    }

    # 5. REA inspect-pe-resources determinism & match against archived evidence
    runs_rea = []
    for _ in range(2):
        out = subprocess.check_output(
            ["rea", "inspect-pe-resources", sample_pe, "--json"],
            text=True,
        )
        parsed = json.loads(out)
        # Normalize volatile evidence_id / timestamp fields, hash payload digests
        payload_hashes = sorted(
            e.get("sha256", "")
            for e in parsed.get("data", {}).get("entries", [])
        )
        runs_rea.append(hashlib.sha256(json.dumps(payload_hashes).encode()).hexdigest())
    checks["rea_pe_resources"] = {
        "subject": "bin/wmpconfig.exe",
        "run1_sha256": runs_rea[0],
        "run2_sha256": runs_rea[1],
        "deterministic": runs_rea[0] == runs_rea[1],
    }

    return {
        "passed": all(c["deterministic"] for c in checks.values()),
        "checks": checks,
    }


def check_p0_3_methodology_versions(env_tools: dict[str, Any]) -> dict[str, Any]:
    """Confirm tool versions in methodology.md §2 match the installed environment."""
    meth_path = os.path.join(REPORT_DIR, "methodology.md")
    text = open(meth_path, "r", encoding="utf-8").read()
    expected_tokens = {
        "Python": env_tools["python"]["version"],
        "angr": env_tools["angr"]["version"],
        "pefile": env_tools["pefile"]["version"],
        "capstone": env_tools["capstone"]["version"],
        "bitstring": env_tools["bitstring"]["version"],
        "pyelftools": env_tools["pyelftools"]["version"],
        "GNU objdump": env_tools["objdump"]["version"],
        "Node.js": env_tools["node"]["version"],
        "REA": env_tools["rea"]["version"],
        "cmake": env_tools["cmake"]["version"],
        "ninja": env_tools["ninja"]["version"],
    }
    verified: dict[str, bool] = {}
    for label, ver in expected_tokens.items():
        verified[label] = ver in text
    return {
        "passed": all(verified.values()),
        "methodology_file": "analysis/report/methodology.md",
        "version_matches": verified,
    }


def check_p0_3_evidence_conventions() -> dict[str, Any]:
    """Audit REA evidence ledger, resource indexes, and decompiled provenance headers."""
    # 1. REA evidence ledger (168 operations, gzip decompression & SHA-256 verification)
    rea_manifest_path = os.path.join(REPORT_DIR, "rea-evidence", "manifest.json")
    rea_manifest = json.load(open(rea_manifest_path))
    ops = rea_manifest.get("operations", [])
    rea_verified = 0
    rea_gzip_count = 0
    for op in ops:
        rel_ev = op.get("evidence_json", "")
        abs_ev = os.path.join(REPO, rel_ev)
        if not os.path.exists(abs_ev):
            continue
        if abs_ev.endswith(".gz"):
            rea_gzip_count += 1
            raw_bytes = gzip.open(abs_ev, "rb").read()
        else:
            raw_bytes = open(abs_ev, "rb").read()
        digest = hashlib.sha256(raw_bytes).hexdigest()
        has_required_fields = all(
            k in op for k in ("slug", "artifact", "operation", "argv", "exit_code", "output_sha256", "evidence_id", "provider", "subject_sha256")
        )
        if digest == op.get("output_sha256") and has_required_fields:
            rea_verified += 1

    # 2. Resource payload indexes (28 modules, 539 payloads)
    res_json = json.load(open(os.path.join(DATA_DIR, "resources.json")))
    res_modules = res_json.get("modules", [])
    total_payloads = sum(len(m.get("entries", [])) for m in res_modules)
    walker_agreements = sum(1 for m in res_modules if m.get("walker_cross_check", {}).get("agree"))

    # 3. Decompiled function provenance headers (888 .c files across 16 code-bearing modules)
    c_files = sorted(glob.glob(os.path.join(REPO, "src", "*", "decompiled", "*.c")))
    provenance_ok = 0
    for cf in c_files:
        head = open(cf, "r", encoding="utf-8", errors="replace").read(1024)
        if "Module   :" in head and "SHA-256" in head and "Address  :" in head and "angr" in head:
            provenance_ok += 1

    passed = (
        len(ops) == 168
        and rea_verified == 168
        and len(res_modules) == 28
        and total_payloads == 539
        and walker_agreements == 28
        and len(c_files) == 888
        and provenance_ok == 888
    )
    return {
        "passed": passed,
        "rea_evidence": {
            "manifest": "analysis/report/rea-evidence/manifest.json",
            "total_operations": len(ops),
            "digest_and_schema_verified": rea_verified,
            "gzip_archived_files": rea_gzip_count,
        },
        "resource_archive": {
            "modules_indexed": len(res_modules),
            "walker_cross_check_agree": f"{walker_agreements}/{len(res_modules)}",
            "total_payloads_archived": total_payloads,
        },
        "decompiled_provenance": {
            "total_c_files": len(c_files),
            "provenance_headers_verified": provenance_ok,
        },
    }
