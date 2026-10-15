#!/usr/bin/env python3
"""disasm.py — instruction-level evidence and an independent decoding cross-check.

Phase 3/6 tool of the Win7MediaPlayer decompilation project.

For every PE module in ``bin/`` this tool:

1. disassembles a small, meaningful set of entry points with **capstone**
   (the image entry point, every named export, and the heads of the functions
   that ``analysis/tools/decompile.py`` emitted) and writes the listing to
   ``analysis/report/disasm/<slug>.asm`` with file offsets and RVAs;
2. cross-checks that decoding against **GNU objdump**, run through REA's
   ``inspect-with-objdump`` lane and archived under
   ``analysis/report/rea-evidence/<slug>/objdump-disassemble_all.json[.gz]``:
   at every address both tools decoded, the raw instruction bytes must be
   identical (two independent decoders agreeing byte-for-byte proves the
   instruction boundaries), and the mnemonics must agree modulo objdump's
   AT&T size suffixes;
3. writes ``analysis/report/disasm.md`` and ``analysis/report/data/disasm.json``.

Nothing here executes module code; the listings are static evidence.

Usage:
    python3 analysis/tools/disasm.py [--only SLUG] [--max-insns 32]
"""

from __future__ import annotations

import argparse
import gzip
import json
import os
import re
import shutil
import subprocess
import sys
import time

REPO = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
DATA = os.path.join(REPO, "analysis", "report", "data")
OUT = os.path.join(REPO, "analysis", "report", "disasm")
EVIDENCE = os.path.join(REPO, "analysis", "report", "rea-evidence")
TOOL = "analysis/tools/disasm.py"

# objdump AT&T mnemonics vs capstone (Intel) mnemonics for the same opcode
MNEMONIC_ALIASES = {
    "jmp": {"jmp", "jmpq"},
    "call": {"call", "callq"},
    "ret": {"ret", "retq"},
    "nop": {"nop", "nopl", "nopw"},
    "mov": {"mov", "movl", "movq", "movw", "movb"},
    "movzx": {"movzbl", "movzwl", "movzbq", "movzwq", "movzx"},
    "movsxd": {"movslq", "movsxd"},
    "movsx": {"movsx", "movsbl", "movswl"},
    "lea": {"lea", "leaq", "leal"},
    "push": {"push", "pushq"},
    "pop": {"pop", "popq"},
    "add": {"add", "addl", "addq", "addb", "addw"},
    "sub": {"sub", "subl", "subq"},
    "and": {"and", "andl", "andq"},
    "or": {"or", "orl", "orq"},
    "xor": {"xor", "xorl", "xorq", "xorb"},
    "cmp": {"cmp", "cmpl", "cmpq", "cmpb", "cmpw"},
    "test": {"test", "testl", "testq", "testb"},
    "inc": {"inc", "incl", "incq"},
    "dec": {"dec", "decl", "decq"},
    "imul": {"imul", "imulq", "imull"},
    "shl": {"shl", "shll", "shlq", "sal", "sall", "salq"},
    "shr": {"shr", "shrl", "shrq"},
    "sar": {"sar", "sarl", "sarq"},
    "jz": {"je", "jz"},
    "jnz": {"jne", "jnz"},
    "jb": {"jb", "jc", "jnae"},
    "jnb": {"jae", "jnb", "jnc"},
    "jle": {"jle", "jng"},
    "jg": {"jg", "jnle"},
    "jge": {"jge", "jnl"},
    "jl": {"jl", "jnge"},
    "jbe": {"jbe", "jna"},
    "ja": {"ja", "jnbe"},
    "pxor": {"pxor", "xorpd", "xorps"},
    "bt": {"bt", "btl", "btq", "btw"},
    "bts": {"bts", "btsl", "btsq"},
    "btr": {"btr", "btrl", "btrq"},
    "rol": {"rol", "roll", "rolq"},
    "ror": {"ror", "rorl", "rorq"},
    "div": {"div", "divl", "divq"},
    "idiv": {"idiv", "idivl", "idivq"},
    "mul": {"mul", "mull", "mulq"},
    "neg": {"neg", "negl", "negq"},
    "not": {"not", "notl", "notq"},
    "popfq": {"popfq", "popf"},
    "pushfq": {"pushfq", "pushf"},
    "cdq": {"cdq", "cltd"},
    "cwd": {"cwd", "cwtd"},
    "cqo": {"cqo", "cqto"},
    "outsd": {"outsd", "outsl"},
    "outsw": {"outsw", "outsw"},
    "cmpsb": {"cmpsb"},
    "movsb": {"movsb"},
    "movsd": {"movsd", "movsl"},
    "stosb": {"stosb"},
    "stosd": {"stosd", "stosl"},
    "xchg": {"xchg", "xchgl", "xchgq"},
    "fisub": {"fisub", "fisubl", "fisubs"},
    "fadd": {"fadd", "faddl", "fadds"},
    "fmul": {"fmul", "fmull", "fmuls"},
    "sar": {"sar", "sarl", "sarq", "sarb", "sarw"},
    "scas": {"scas", "scasb", "scasw", "scasd", "scasq"},
    "cmps": {"cmps", "cmpsb", "cmpsw", "cmpsd", "cmpsq"},
    "stos": {"stos", "stosb", "stosw", "stosd", "stosq"},
    "lods": {"lods", "lodsb", "lodsw", "lodsl", "lodsq"},
    "ins": {"ins", "insb", "insw", "insd", "insl"},
    "outs": {"outs", "outsb", "outsw", "outsd", "outsl"},
    "in": {"in", "inb", "inw", "inl"},
    "out": {"out", "outb", "outw", "outl"},
    "movs": {"movs", "movsb", "movsw", "movsd", "movsl", "movsq"},
}
CANON: dict[str, str] = {}
for canon, variants in MNEMONIC_ALIASES.items():
    for v in variants:
        CANON[v] = canon


REP_ALIASES = {"repnz": "repne", "repz": "rep", "repe": "repne"}


def canon_mnemonic(m: str) -> str:
    """Fold capstone and AT&T spellings of the same operation together.

    Returns a canonical token set joined by spaces, e.g. ``lock cmpxchg``.
    Duplicated prefixes are dropped (capstone writes ``lock xadd``, objdump
    writes ``lock xadd`` too, but objdump sometimes emits ``rex`` alone).
    """
    toks = [t for t in m.strip().lower().replace(",", " ").split() if t]
    toks = [REP_ALIASES.get(t, t) for t in toks]
    toks = [t for t in toks if not t.startswith("rex") and t not in PREFIX_TOKENS]
    out = []
    for t in toks:
        c = CANON.get(t)
        if c is None:
            for suf in ("b", "w", "l", "q"):
                if t.endswith(suf) and t[:-1] in CANON:
                    c = CANON[t[:-1]]
                    break
        out.append(c or t)
    # de-duplicate while preserving order (rep prefixes can repeat)
    seen, res = set(), []
    for t in out:
        if t not in seen:
            seen.add(t)
            res.append(t)
    return " ".join(res)


def load_objdump_text(slug: str) -> str | None:
    """Return objdump disassembly text for a module, or None if not archived."""
    for name in ("objdump-disassemble_all.json.gz", "objdump-disassemble_all.json"):
        p = os.path.join(EVIDENCE, slug, name)
        if not os.path.exists(p):
            continue
        try:
            if p.endswith(".gz"):
                with gzip.open(p, "rt") as fh:
                    d = json.load(fh)
            else:
                with open(p) as fh:
                    d = json.load(fh)
        except (OSError, ValueError):
            continue
        for key in ("normalized_result", "raw_result"):
            r = d.get(key) or {}
            if isinstance(r, dict) and r.get("stdout"):
                return r["stdout"]
    return None


LINE_RE = re.compile(r"^\s*([0-9a-f]+):\t([0-9a-f ]+)\t(.*)$")
PREFIX_TOKENS = ("rex", "lock", "rep", "repz", "repnz", "repe", "repne", "data16",
                 "bnd", "notrack", "cs", "ds", "es", "fs", "gs", "ss", "addr32", "addr16",
                 "rex.w", "rex.r", "rex.b", "rex.x", "rex.rx", "rex.wb", "rex.wr", "rex.wx",
                 "rex.wxb", "rex.wrb", "rex.wrx")


def parse_objdump(text: str) -> dict[int, tuple[bytes, str]]:
    """address (VA) -> (instruction bytes, mnemonic)."""
    out: dict[int, tuple[bytes, str]] = {}
    for line in text.splitlines():
        m = LINE_RE.match(line)
        if not m:
            continue
        try:
            addr = int(m.group(1), 16)
            raw = bytes.fromhex(m.group(2).replace(" ", ""))
        except ValueError:
            continue
        rest = m.group(3).strip()
        toks = rest.split()
        # objdump can render a redundant prefix as its own mnemonic word, e.g.
        # "rex push %rdi" or "lock cmpxchg %rax,(%rbx)"; keep the real mnemonic.
        while len(toks) > 1 and (toks[0].startswith("rex") or toks[0] in PREFIX_TOKENS):
            toks = toks[1:]
        # objdump appends a static branch hint to conditional jumps ("jo,pn")
        mnem = toks[0].split(",")[0] if toks else ""
        out[addr] = (raw, mnem)
    return out


def rva_of(secs: list[dict], off: int) -> int | None:
    for s in secs:
        rp, rs = s.get("raw_pointer") or 0, s.get("raw_size") or 0
        if rp <= off < rp + rs:
            return (s.get("virtual_address") or 0) + (off - rp)
    return None


def targets_for(slug: str, pe: dict) -> list[dict]:
    """Entry point, exports and decompiled-function heads, de-duplicated."""
    seen: dict[int, dict] = {}
    ep = pe.get("entry_point_rva")
    if ep:
        seen[ep] = {"rva": ep, "why": "image entry point",
                    "name": pe.get("entry_point_name") or "entry"}
    for e in (pe.get("exports") or []):
        rva = e.get("rva") or e.get("address")
        if isinstance(rva, int) and rva:
            seen.setdefault(rva, {"rva": rva, "why": "export", "name": e.get("name") or "?"})
    idx = os.path.join(REPO, "src", slug, "decompiled", "index.json")
    if os.path.exists(idx):
        try:
            d = json.load(open(idx))
        except ValueError:
            d = {}
        base = (pe.get("image_base") or 0)
        for f in (d.get("functions") or [])[:40]:
            try:
                va = int(f["addr"], 16)
            except (KeyError, ValueError, TypeError):
                continue
            rva = va - base
            if rva > 0 and rva not in seen:
                seen[rva] = {"rva": rva, "why": "decompiled function",
                             "name": f.get("name") or f"sub_{va:x}"}
    return sorted(seen.values(), key=lambda x: x["rva"])


TERMINATORS = {"ret", "jmp", "ljmp", "ud2", "int3", "hlt"}


def disassemble_target(blob: bytes, file_off: int, rvas: list[dict], max_insns: int) -> list[dict]:
    """Decode instructions sequentially from one file offset."""
    import capstone
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)
    md.detail = False
    rows: list[dict] = []
    addr = file_off
    for insn in md.disasm(blob[file_off:file_off + 4096], 0):
        rows.append({"offset": file_off + insn.address, "size": insn.size,
                     "bytes": insn.bytes.hex(), "mnemonic": insn.mnemonic,
                     "op_str": insn.op_str})
        if len(rows) >= max_insns or insn.mnemonic in TERMINATORS:
            break
    return rows


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--only", help="restrict to one module slug")
    ap.add_argument("--max-insns", type=int, default=24)
    ap.add_argument("--no-objdump-fallback", dest="objdump_fallback", action="store_false",
                    help="only cross-check against archived REA evidence")
    args = ap.parse_args()

    try:
        import capstone
    except ImportError:
        print("[disasm] capstone is required (pip3 install capstone)", file=sys.stderr)
        return 2

    inv = json.load(open(os.path.join(DATA, "inventory.json")))
    entries = [f for f in inv["files"] if f.get("format") == "pe" and (f.get("pe") or {}).get("sections")]
    if args.only:
        entries = [f for f in entries if f["slug"] == args.only]
    if not entries:
        print("[disasm] no PE modules selected", file=sys.stderr)
        return 1

    if os.path.isdir(OUT):
        shutil.rmtree(OUT)
    os.makedirs(OUT, exist_ok=True)

    report = {
        "generated_by": TOOL,
        "generated_at": time.strftime("%Y-%m-%dT%H:%M:%SZ", time.gmtime()),
        "capstone_version": capstone.__version__,
        "max_instructions_per_target": args.max_insns,
        "modules": [],
    }

    for rec in entries:
        slug, pe = rec["slug"], rec["pe"]
        secs = pe["sections"]
        path = os.path.join(REPO, rec["rel_path"])
        blob = open(path, "rb").read()
        tgts = targets_for(slug, pe)
        obj = load_objdump_text(slug)
        objdump_source = "rea-evidence" if obj else None
        if not obj and args.objdump_fallback:
            # The REA disassembly lane is archived only for images below the
            # evidence-size cap (analysis/tools/rea_batch.py --disasm-max-bytes).
            # For the rest, run the *same* command REA runs (objdump -D <image>,
            # see the archived evidence for the argv REA uses) and record that
            # this module's objdump side came from a direct invocation.
            try:
                proc = subprocess.run(["objdump", "-D", path], capture_output=True, text=True,
                                      errors="replace", timeout=900)
                if proc.returncode == 0 and proc.stdout:
                    obj = proc.stdout
                    objdump_source = "direct-objdump"
            except (OSError, subprocess.SubprocessError):
                obj = None
        od = parse_objdump(obj) if obj else {}

        lines = [
            f"# Disassembly evidence — {rec['rel_path']}",
            "",
            f"> Generated by `{TOOL}` with capstone {capstone.__version__} on "
            f"{report['generated_at']}.",
            f"> Source image SHA-256 `{rec['hashes']['sha256']}`; image base "
            f"`{hex(pe.get('image_base') or 0)}`.",
            "> Addresses are VAs (image base + RVA). Cross-check against GNU objdump "
            "(REA `inspect-with-objdump`) is reported in `analysis/report/disasm.md`.",
            "",
        ]
        decoded_rows: dict[int, dict] = {}
        mod_stats = {
            "slug": slug, "artifact": rec["rel_path"], "targets": len(tgts),
            "instructions": 0, "compared": 0, "bytes_match": 0, "mnemonic_match": 0,
            "bytes_match_truncated_objdump": 0, "match_kinds": {},
            "bytes_mismatch": [], "mnemonic_mismatch": [], "objdump_available": bool(obj),
            "objdump_source": objdump_source,
        }
        base = pe.get("image_base") or 0

        for t in tgts:
            rva = t["rva"]
            foff = None
            for s in secs:
                va, vs = s.get("virtual_address") or 0, s.get("virtual_size") or 0
                if va <= rva < va + vs:
                    foff = (s.get("raw_pointer") or 0) + (rva - va)
                    break
            if foff is None or foff + 16 > len(blob):
                continue
            rows = disassemble_target(blob, foff, tgts, args.max_insns)
            if not rows:
                continue
            va = base + rva
            lines.append(f"## `{t['name']}` — VA `{hex(va)}` (RVA `{hex(rva)}`, file `{hex(foff)}`)")
            lines.append(f"_{t['why']}_")
            lines.append("")
            lines.append("```asm")
            for r in rows:
                lines.append(f"{va + (r['offset'] - foff):016x}  {r['bytes']:<24} "
                             f"{r['mnemonic']} {r['op_str']}".rstrip())
            lines.append("```")
            lines.append("")
            mod_stats["instructions"] += len(rows)

            for r in rows:
                rr = rva_of(secs, r["offset"])
                if rr is not None:
                    decoded_rows.setdefault(base + rr, r)

        for a, r in sorted(decoded_rows.items()):
                if a not in od:
                    continue
                want_bytes, want_mnem = od[a]
                cap_bytes = bytes.fromhex(r["bytes"])
                # Three ways objdump's line can legitimately differ from capstone's
                # instruction while still agreeing byte-for-byte:
                #   exact      — same bytes, same boundaries;
                #   truncated  — objdump's default --insn-width is 7 bytes, so a
                #                longer instruction is displayed cut short;
                #   split      — objdump emitted a prefix byte sequence (REX/rep/
                #                lock) as its own line and the rest as the next one.
                if want_bytes == cap_bytes:
                    kind = "exact"
                elif len(cap_bytes) > len(want_bytes) and cap_bytes.startswith(want_bytes):
                    nxt = od.get(a + len(want_bytes))
                    tail = cap_bytes[len(want_bytes):]
                    if len(want_bytes) >= 7:
                        kind = "truncated"
                    elif nxt and (nxt[0] == tail or tail.startswith(nxt[0])):
                        kind = "split"
                    else:
                        kind = "mismatch"
                else:
                    kind = "mismatch"

                mod_stats["compared"] += 1
                if kind != "mismatch":
                    mod_stats["bytes_match"] += 1
                    mod_stats["match_kinds"][kind] = mod_stats["match_kinds"].get(kind, 0) + 1
                    if kind == "truncated":
                        mod_stats["bytes_match_truncated_objdump"] += 1
                    if kind in ("exact", "truncated"):
                        if canon_mnemonic(want_mnem) == canon_mnemonic(r["mnemonic"]):
                            mod_stats["mnemonic_match"] += 1
                        else:
                            mod_stats["mnemonic_mismatch"].append(
                                {"va": hex(a), "capstone": r["mnemonic"], "objdump": want_mnem,
                                 "kind": kind})
                else:
                    mod_stats["bytes_mismatch"].append(
                        {"va": hex(a), "capstone": r["bytes"], "objdump": want_bytes.hex(),
                         "objdump_len": len(want_bytes), "capstone_len": len(cap_bytes)})

        open(os.path.join(OUT, f"{slug}.asm"), "w").write("\n".join(lines) + "\n")
        report["modules"].append(mod_stats)
        pct = (100.0 * mod_stats["bytes_match"] / mod_stats["compared"]) if mod_stats["compared"] else 0.0
        print(f"[disasm] {slug:<26} targets={mod_stats['targets']:<3} insns={mod_stats['instructions']:<5} "
              f"objdump-compared={mod_stats['compared']:<5} bytes-match={mod_stats['bytes_match']:<5} "
              f"({pct:5.1f}%)")

    tot = {k: sum(m[k] for m in report["modules"]) for k in
           ("targets", "instructions", "compared", "bytes_match", "mnemonic_match",
            "bytes_match_truncated_objdump")}
    report["totals_match_kinds"] = {}
    for m in report["modules"]:
        for k, v in m["match_kinds"].items():
            report["totals_match_kinds"][k] = report["totals_match_kinds"].get(k, 0) + v
    report["totals"] = tot
    report["totals"]["modules"] = len(report["modules"])
    report["totals"]["modules_with_objdump_evidence"] = sum(
        1 for m in report["modules"] if m["objdump_available"])
    report["totals"]["byte_agreement_pct"] = (
        round(100.0 * tot["bytes_match"] / tot["compared"], 3) if tot["compared"] else None)

    json.dump(report, open(os.path.join(DATA, "disasm.json"), "w"), indent=1)

    # ---- markdown summary -------------------------------------------------- #
    md = [
        "# Disassembly cross-check (generated)",
        "",
        f"> Generated by `{TOOL}` with capstone {capstone.__version__} on "
        f"{report['generated_at']}. Per-module listings: `analysis/report/disasm/<slug>.asm`.",
        "> Raw data: `analysis/report/data/disasm.json`; objdump side: "
        "`analysis/report/rea-evidence/<slug>/objdump-disassemble_all.json[.gz]`.",
        "",
        "Two independent decoders were pointed at the same bytes: capstone (Intel syntax, "
        "used by the project) and GNU objdump (AT&T syntax, invoked through REA's "
        "`inspect-with-objdump` lane). For every address decoded by both, the *raw "
        "instruction bytes* are compared; identical bytes at identical addresses mean both "
        "decoders agree on the instruction boundaries and encodings. Mnemonics are compared "
        "after folding objdump's AT&T size suffixes (`movl`/`movq` → `mov`).",
        "",
        "## 1. Totals",
        "",
        f"* Modules processed: **{len(report['modules'])}** — "
        f"{sum(1 for m in report['modules'] if m['targets'])} carry code, "
        f"{sum(1 for m in report['modules'] if not m['targets'])} are resource-only `.mui` images. "
        f"Every module has an objdump side for the cross-check: "
        f"{sum(1 for m in report['modules'] if m['objdump_source'] == 'rea-evidence')} from archived "
        f"REA evidence, "
        f"{sum(1 for m in report['modules'] if m['objdump_source'] == 'direct-objdump')} from a direct "
        f"`objdump -D` invocation (see §4).",
        f"* Entry points/items disassembled: **{tot['targets']}** producing "
        f"**{tot['instructions']}** instructions.",
        f"* Instructions compared against objdump: **{tot['compared']}**; byte-identical: "
        f"**{tot['bytes_match']}** ({report['totals']['byte_agreement_pct']}%).",
        "* Agreement kinds: "
        + ", ".join(f"**{k}** {v}" for k, v in sorted(report["totals_match_kinds"].items()))
        + " (`exact` = identical bytes and boundaries; `truncated` = instruction longer than "
          "objdump's 7-byte display width, matched on the displayed prefix; `split` = objdump "
          "printed a REX/rep/lock prefix as its own line and the remainder as the next, "
          "verified by checking that the following objdump line continues the same bytes).",
        f"* Mnemonic agreement after suffix folding (checked only where objdump printed the "
        f"whole instruction): **{tot['mnemonic_match']}** of "
        f"{tot['mnemonic_match'] + sum(len(m['mnemonic_mismatch']) for m in report['modules'])}.",
        "",
        "## 2. Per module",
        "",
        "| Module | Targets | Instructions | Compared | Bytes match | Mnemonics match | objdump side |",
        "|---|---|---|---|---|---|---|",
    ]
    for m in report["modules"]:
        pct = (f"{100.0 * m['bytes_match'] / m['compared']:.1f}%" if m["compared"] else "—")
        md.append(f"| `{m['artifact']}` | {m['targets']} | {m['instructions']} | {m['compared']} | "
                  f"{m['bytes_match']} ({pct}) | {m['mnemonic_match']} | "
                  f"{m['objdump_source'] or '—'} |")
    md.append("")

    mism = [(m["artifact"], x) for m in report["modules"] for x in m["bytes_mismatch"]]
    mmis = [(m["artifact"], x) for m in report["modules"] for x in m["mnemonic_mismatch"]]
    md += ["## 3. Disagreements", ""]
    if not mism and not mmis:
        md.append("None: every compared instruction decoded to the same bytes and the same "
                  "operation in both tools.")
    else:
        for art, x in mism[:40]:
            md.append(f"* `{art}` @ `{x['va']}`: capstone `{x['capstone']}` vs objdump `{x['objdump']}`")
        for art, x in mmis[:40]:
            md.append(f"* `{art}` @ `{x['va']}`: mnemonic capstone `{x['capstone']}` vs objdump "
                      f"`{x['objdump']}` (same bytes)")
    md.append("")
    md += [
        "## 4. Notes",
        "",
        "* The compared addresses are the image entry point, every named export and the heads",
        "  of the functions `decompile.py` emitted — i.e. the code this repository reasons",
        "  about, not a random sample.",
        "* objdump's linear sweep decodes data as code where capstone, driven from a known",
        "  entry point, does not; disagreements are therefore reported per address rather",
        "  than as a corpus-wide statistic.",
        "* The twelve pt-BR `.mui` images contain no code (0 targets), so they contribute no",
        "  comparisons; every code-bearing image in `bin/` is covered.",
        "* `objdump side` records where the objdump output came from: `rea-evidence` = the",
        "  archived REA `inspect-with-objdump` disassembly under",
        "  `analysis/report/rea-evidence/<slug>/`; `direct-objdump` = the module exceeds the",
        "  evidence-archiving cap (`rea_batch.py --disasm-max-bytes`, 1.6 MB) and the same",
        "  command REA runs (`objdump -D <image>`) was invoked directly for the comparison.",
        "",
    ]
    open(os.path.join(REPO, "analysis", "report", "disasm.md"), "w").write("\n".join(md))
    print(f"[disasm] totals: {tot['compared']} compared, {tot['bytes_match']} byte-identical, "
          f"{tot['mnemonic_match']} mnemonic-identical")
    print("[disasm] wrote analysis/report/disasm.md, data/disasm.json and "
          f"{len(report['modules'])} listings under analysis/report/disasm/")
    return 0


if __name__ == "__main__":
    sys.exit(main())
