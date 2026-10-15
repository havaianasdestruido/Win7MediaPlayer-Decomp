# Methodology

> How this repository's findings were produced, what tool produced each one, what is
> *verified* versus *inferred* versus *unresolved*, which parts could not be done in this
> environment, and how to reproduce the whole set from `bin/`.

Every number and claim in the reports is produced by a script in `analysis/tools/`; nothing is
hand-entered from memory. Where a claim cannot be traced to a tool run, it is marked as an
interpretation of the evidence.

---

## 1. Scope and ground rules

* **Inputs.** `bin/` (53 files) is treated as read-only reference data: 16 PE32+ executables/DLLs,
  12 Portuguese (pt-BR) MUI satellite images, one WMP skin package (`Skins/Revert.wmz`, a ZIP),
  3 + 3 UPnP XML documents and 18 icon images. The reorganisation that placed these files under
  `bin/` is a pure relocation: the HEAD blob SHA of every old path equals the index blob SHA of its
  new path (53/53 identical, verified — see `validation.md` §2).
* **No binary is executed.** Analysis is static. Nothing in this repository runs, patches, injects
  into, or re-links the original images; every derived file is written under `analysis/` or `src/`.
* **Reconstruction is labelled.** All C-like text under `src/<module>/decompiled/` is decompiler
  output with a provenance header. It is never presented as the original Microsoft source, and
  recovered type/field names produced by the decompiler are explicitly flagged as reconstructions.
* **Evidence tagging.** Module dossiers (`src/<module>/README.md`) and the phase reports tag claims
  with **[verified]** (read directly from the artifact: PE headers, resource payloads, version
  resource, import/export tables, decompiler CFG), **[inferred]** (a reading of the evidence) or
  **[unresolved]** (unknown, with the remaining work named). There are no unlabelled placeholders.

---

## 2. Environment and constraints

| Item | Value |
|---|---|
| Host | Debian 12 sandbox, 2 vCPU, uid 1001 (passwordless sudo), `/usr/local/lib` writable, `/opt` not |
| Python | 3.11.2 |
| angr / claripy / cle / pyvex | 9.2.213 |
| pefile | 2024.8.26 |
| capstone | 5.0.6 |
| bitstring | 3.1.9 (`bitstring>=4` breaks angr — pin it) |
| pyelftools | 0.33 |
| GNU objdump | 2.40 (Debian binutils) |
| GCC | 12.2.0 (Debian 12.2.0-14+deb12u1; host compiler for validation harness) |
| Node.js | 22.22.3 |
| REA | 6.5.0 (`npx rea …`; npm package `rea-agents`) |
| cmake / ninja | 4.4.4 / 1.13.2 (installed for the build-validation step) |

Network is restricted to npm, PyPI, `github.com` (git) and `api.github.com`. `deb.debian.org` and
GitHub **release assets** (`release-assets.githubusercontent.com`, `objects.githubusercontent.com`)
are unreachable, which is the decisive constraint on toolchain choices (§5) — it rules out
downloading Ghidra/Hopper/rizin binaries. Temporary scratch under `/tmp` is not persisted, so no
finding in this repository depends on it.

---

## 3. Reproducing the analysis

```bash
# 0. Phase 0: environment provisioning, authenticity & toolchain validation
bash    analysis/tools/setup_env.sh
python3 analysis/tools/manifest_verify.py
python3 analysis/tools/phase0_check.py

# (or manual install with pinned requirements.txt)
sudo pip3 install --break-system-packages --prefer-binary -r requirements.txt
sudo npm i -g rea-agents@6.5.0       # REA CLI (invoked as `rea` or `npx rea`)

# 1. inventory / identification
python3 analysis/tools/inventory.py

# 2. REA evidence collection (objdump + PE resource lanes; see §5)
python3 analysis/tools/rea_batch.py

# 3. structural: resources, strings, COM surface
python3 analysis/tools/resources.py
python3 analysis/tools/strings_scan.py
python3 analysis/tools/typelib.py            # decodes the RT_TYPELIB payloads
python3 analysis/tools/com_surface.py
python3 analysis/tools/api_map.py

# 4. decompilation (per module, or batch)
python3 analysis/tools/decompile.py bin/WMPNSSUI.dll --max-functions 60
bash    analysis/tools/run_decompile_all.sh 60 2400

# 5. module dossiers + aggregate module-analysis report
python3 analysis/tools/module_report.py
```

Every script is idempotent and writes only under `analysis/report/` and `src/`. `inventory.py` and
`resources.py` depend on each other's outputs only through the files they generate.

---

## 4. Phase-by-phase method

### Phase 0 — prerequisites, environment provisioning and toolchain validation (`analysis/tools/setup_env.sh`, `manifest_verify.py`, `phase0_check.py` → `analysis/report/phase0.md`, `update-manifests.md`)

* **P0.1 — Repository integrity & Microsoft update manifest verification (`analysis/tools/manifest_verify.py`):**
  1. Verifies that all 53 files under `bin/` match the initial upstream commit (`7808d47`) and the
     post-move commit (`5c564f7`) byte-for-byte (after restoring 14 icon `.jpg`/`.png` files that had
     been re-encoded by ImgBot in PR #1, and adding `.imgbotconfig` to protect `bin/**`).
  2. Verifies SHA-256, SHA-1, MD5, and byte-size hashes against `analysis/report/data/inventory.json`
     (`53/53`).
  3. Cross-references all 53 files against Microsoft's Windows 7 (NT 6.1) CBS/WinSxS package
     manifests (`Microsoft-Windows-MediaPlayer-Package` and
     `Microsoft-Windows-WMPNetworkSharingService-Package`, signed under Microsoft Windows Component
     Publisher `publicKeyToken="31bf3856ad364e35"`), verifies all 28 PE Optional Header `CheckSum`
     values (`MapFileAndCheckSum`, `28/28`), maps all 28 PEs across 5 Microsoft Windows 7 servicing
     KB waves (`RTM 7600.16385`, `SP1 KB976932`, `Mar 2016 LDR KB3150513`, `Aug 2016 LDR KB3179573`,
     `Jul 2019 Security Rollup KB4507449`), parses all 13 embedded `RT_MANIFEST` SxS XML payloads,
     and compares against Microsoft's `m417z/winbindex` update manifest index (`43/53` filenames
     tracked, `7/7` unchanged static assets matched by exact SHA-256).
* **P0.2 — Environment provisioning (`requirements.txt`, `analysis/tools/setup_env.sh`):**
  Idempotently provisions and verifies exact pinned versions of Python 3.11+, `angr`, `claripy`,
  `cle`, `pyvex`, `archinfo`, `pefile`, `capstone`, `pyelftools`, `bitstring<4`, Node.js 22+,
  `rea-agents@6.5.0`, `cmake`, `ninja`, `objdump`, and `gcc`.
* **P0.3 — Toolchain validation (`analysis/tools/phase0_check.py`):**
  Executes two-pass determinism checks across `peutils`, `pefile`, `capstone`, `GNU objdump`,
  `angr CFGFast`, and `rea inspect-pe-resources`; cross-checks installed tool versions against §2;
  and audits evidence archiving conventions across `analysis/report/rea-evidence/manifest.json`
  (`168/168`), `analysis/report/data/resources.json` (`539/539`), and `src/*/decompiled/*.c`
  (`888/888`).

### Phase 1 — inventory and identification (`analysis/tools/inventory.py` → `analysis/report/inventory.md`)

* Recursive enumeration of `bin/`, format detection by magic bytes, and for PE files: COFF/optional
  header fields, section table with per-section entropy, data directories, import/export/delay-import
  tables, resources count, overlay detection, Rich header, debug directory (PDB path + GUID/age),
  Authenticode presence, CLR/TLS flags and DllCharacteristics.
* Hashes: SHA-256 primary, SHA-1/MD5 recorded; duplicates detected by content.
* Implementation detail: `analysis/tools/lib/peutils.py` is the project's own parser (no external
  dependency for the base facts); pefile is used only for *enrichment* (import/export/resource
  listings, Rich header). Because pefile returns some fields as `bytes`, all pefile-derived strings
  pass through a `_decoded()` normaliser; resource *names* are not taken from pefile at all (§4.3).

### Phase 2 — toolchain and REA assessment (`analysis/tools/rea_batch.py` → `analysis/report/rea-evidence/`)

See §5; the outcome is recorded in the REA section below and in `validation.md` §4.

### Phase 3 — structural analysis

1. **Sections/headers/relocations/symbols** — read by `peutils`, and independently archived as REA
   `objdump` evidence (file headers, section headers, symbols, relocations, disassembly) per module.
2. **Resources** (`analysis/tools/resources.py`) — a raw walk of `IMAGE_RESOURCE_DIRECTORY` straight
   from the file bytes, with names decoded as exact UTF-16LE, cross-checked against the pefile walk
   (`walker_cross_check`; 28/28 images agree). Payloads are extracted *and*, where the format is
   known, decoded: `RT_MESSAGETABLE`, `RT_STRING`, `RT_VERSION`, `RT_DIALOG`, `RT_MENU`,
   `RT_ACCELERATOR`, `RT_GROUP_ICON`+`RT_ICON` (assembled into `.ico`), the named types `UIFILE`,
   `REGISTRY`, `MUI`, `IMAGE`, `TYPELIB`, `WEVT_TEMPLATE`, plus `misc/*` raw dumps of RCDATA and any
   payload whose type is not recognised. Decoders are documented in `analysis/report/data-formats.md`
   together with the evidence for each field.
3. **Strings** (`analysis/tools/strings_scan.py`) — ASCII and UTF-16LE literals with file offset and
   RVA/VA, classified into GUIDs, URLs, UPnP URNs, registry paths, referenced modules, MIME types,
   HTTP/UPnP verbs, format strings, XML tokens and API-shaped names; per-module curated highlights
   land in `src/<module>/strings/highlights.md`.
4. **GUID/COM identification** — the embedded MSFT type libraries are decoded by
   `analysis/tools/typelib.py` into interfaces, coclasses, member ids, vtable slots and signatures;
   ATL registrar scripts (`REGISTRY` resources) are decoded as text and their GUIDs extracted;
   `analysis/tools/com_surface.py` joins both with the export table.
5. **Call graph** — angr `CFGFast` supplies function boundaries and call edges per module
   (`src/<module>/decompiled/_cfg.json`); the index records the CFG size so the reader can see how
   much of the image was covered.

### Phase 4 — decompilation and behaviour

`analysis/tools/decompile.py` drives angr's decompiler:

* function recovery and call graph: `CFGFast(normalize=True, data_references=True)`;
* function selection: forced entry points (image entry + exported functions), then by basic-block
  count descending, capped by `--max-functions` (default 40; the batch uses 60) with
  `--min-blocks 2` to skip thunks;
* per-function output: `src/<module>/decompiled/NNNN_<addr>_<name>.c` with a header recording the
  module, address, size, block count, the angr version, the artifact SHA-256 and where the
  supporting evidence lives;
* `index.json`/`index.md` record the selection rule, per-function callers/callees, decompilation
  success and the coverage numbers; `index.json` is rewritten after every function, so an
  interrupted batch leaves an honest `"status": "in_progress"` index rather than a truncated
  "complete" one.

No dynamic analysis was performed, and none is possible in this environment (Windows binaries, no
Windows host, no emulator): every behavioural statement in this repository is derived from static
evidence and is labelled as such.

### Phase 5 — reconstruction

`src/<module>/` holds, per module: `decompiled/` (pseudocode + index), `imports.txt`, `exports.txt`,
`strings/highlights.md`, `typelib/` (recovered COM definitions + README), the module dossier
(`README.md`) and, where feasible, a `CMakeLists.txt`. The dossiers state which parts of the module
are *not* reconstructed. `analysis/tools/module_report.py` generates both the dossiers and
`analysis/report/module-analysis.md` from the tool outputs, so a rerun cannot drift from the data.

### Phase 6 — validation

Recorded in `analysis/report/validation.md`: independent cross-checks between tools, compile checks
of the reconstructed headers, and the list of discrepancies found (with the resolution or the
reason each remains open).

---

## 5. REA: what was actually used, and what was not

REA ("Reverse Engineer Anything", morluto/rea, MIT, v6.5.0) was inspected, installed and run against
this corpus. What was **verified by running it**:

* installation works in this sandbox (`npm i -g rea-agents@6.5.0`; CLI reachable via `npx rea`);
* `rea doctor --json` reports `healthy: false`: the *deep* analysis providers (`ghidra`, `hopper`,
  `ida-registration`) are all `missing_analysis_engine`, and `rea capabilities --json` reports
  `analysis_provider_binding: null` with `open: false`;
* the provider-independent lanes that *do* work here were used and their evidence archived:
  * `rea inspect-with-objdump <image> <operation>` for `file_headers`, `section_headers`, `symbols`,
    `relocations`, `dwarf`, `disassemble`, `disassemble_all`, plus `list-objdump-architectures`;
  * `rea inspect-pe-resources <image>` for the PE resource tree;
  * `rea inspect-artifact <file>` for non-PE artifacts (used on the skin package and the XML inputs).
* 168 REA operations were executed over the corpus and stored under
  `analysis/report/rea-evidence/<module>/` with a ledger (`manifest.json`) recording the exact argv,
  exit code, duration, output SHA-256, REA evidence id, provider and subject hash for each operation.
  Large JSON outputs are stored gzip-compressed (16 of the operation outputs here);
  `rea_batch.py --decompress <slug>` restores them.
* Every one of the 28 PE images was covered by the objdump header/section/symbol/relocation lanes
  and the PE-resource lane; **27** additionally have a full `disassemble_all` archive (16 of them
  gzip-stored). The remaining image, `setup_wm.exe` (2.0 MB), exceeds the evidence-archiving cap
  (`--disasm-max-bytes`, set to 1.6 MB to keep the repository within its size budget); for the
  disassembly cross-check in `validation.md` §4 the same `objdump -D` invocation REA performs was
  run directly for that one module, and `analysis/report/disasm.md` labels that module's source
  as `direct-objdump` rather than `rea-evidence`.

What REA **could not** do here, and why (documented rather than worked around silently):

* `analyze`, `function`, `decompile`, `xrefs`, `instructions` and the other deep native operations
  require Ghidra/Hopper/IDA. None is installed and `GHIDRA_INSTALL_DIR` is unset; REA's own
  remediation paths (`rea setup`, downloading a Ghidra 12.1.x release) are unavailable in this
  sandbox because GitHub *release asset* downloads are blocked (HTTP 000 on
  `release-assets.githubusercontent.com` and `objects.githubusercontent.com`; verified with curl),
  while npm, PyPI and `github.com` git access work. REA states the provider problem itself: the batch
  ledger records
  `"rea_limitation": "deep native provider operations (analyze/function/decompile/xrefs/instructions)
  require Ghidra, Hopper or IDA; none available in this environment"`.
* `rea inspect-binary-layout` is ELF-only; the PE images are rejected, so layout inspection was done
  with the project's own parser and objdump instead. This is REA's documented scope, not a defect.
* In the objdump lane REA reports `subject.format: "unknown"` for PE images (the lane is
  ELF-oriented). The evidence is still usable (objdump output is correct and REA's own SHA-256 for
  the subject matches the project's), but the format field cannot be relied on.

**Contribution actually made by REA:** an independent, tool-signed evidence archive (objdump-derived
headers/sections/symbols/relocations/disassembly + PE resource trees) with per-operation provenance,
used as the second opinion for Phase 3 facts and as the raw material for the disassembly-level checks
in `validation.md`. **Fallbacks used where REA is not applicable:** the project's own `peutils.py`
parser, `pefile` for enrichment, `angr` for CFG/decompilation, `capstone` for instruction-level
checks, and the format-specific decoders in `analysis/tools/`. No REA command, API, output or
capability is claimed anywhere in this repository without a corresponding entry in the evidence
ledger.

---

## 6. Evidence and reproducibility conventions

* **Addresses** are given as RVAs unless stated; VAs assume the image base recorded in
  `analysis/report/data/inventory.json`. File offsets appear as `0x…`.
* **Hashes** are SHA-256 unless stated; every extracted resource payload, every REA evidence file and
  every decompiled function file carries the digest of its source image (or of its own content).
* **Command lines** for the REA operations are in the ledger's `argv` fields; the equivalent project
  commands are the one-liners in §3.
* **Tool versions** are in the table in §2 and are also written into generated artifacts
  (`decompile.py` records the angr version in each index; `typelib.py` records the parser version and
  the payload digest in each `.idl`/`.h` header; `rea_batch.py` records the REA version in the
  ledger).
* **Regeneration** of a single artifact is always possible without rerunning everything: each tool
  takes an optional artifact/module argument (see its `--help`).

---

## 7. Known limitations of the method

1. **Decompiler output is an approximation.** angr's variable/type recovery invents names
   (`struct_14`, `field_40`); these are marked in every file header. Where the decompiler failed on a
   function, the index records the failure instead of a stub.
2. **Coverage is capped by design.** `--max-functions` limits how many functions are emitted per
   module. The cap and what was skipped are reported per module in the index and in the dossiers;
   raising the cap is a rerun, not a change of method.
3. **Data-driven code may be invisible to the CFG.** Functions reached only through COM vtables or
   callback tables that angr cannot resolve statically may be missing from `decompiled/index.json`.
   The COM surface recovered from type libraries/registrar scripts is used to *name* such entry
   points where possible.
4. **String extraction is a linear scan.** A literal split across a section boundary, compressed or
   encrypted is not recovered; absence of a string is not evidence of absence in the binary.
5. **Undocumented formats stay undecoded by design.** The `WEVT_TEMPLATE` (ETW manifest template)
   binary schema, the `MUI` resource's non-validated fields, `#1017` payloads and `RT_BITMAP` pixel
   data are extracted verbatim with their magic/size recorded, and each is listed as unresolved in
   the module dossiers. They are not guessed at.
6. **No behavioural comparison with the originals is possible** without running Windows: the
   validation step compares *static* properties (imports, resources, hashes, GUIDs, control flow
   shape), not runtime behaviour. This is stated again in `validation.md` §6.
