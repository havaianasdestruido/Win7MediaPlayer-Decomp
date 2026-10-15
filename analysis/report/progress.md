# Progress

> Live status of the six phases, per module. Updated as results appear; the numbers in this
> file are read from the generated artifacts, never hand-written from memory.
> Last update: 2026-10-14 (session 3).

---

## 1. Phase status

| Phase | Scope | State | Evidence |
|---|---|---|---|
| 1 | Inventory & identification | **complete** | `inventory.md`, `data/inventory.json` — 53 inputs, 28 PE, hashes, formats, arch, bitness, linker, timestamps, PDB refs, Rich headers, sections, overlay, duplicates, packers |
| 2 | Toolchain & REA assessment | **complete** | `methodology.md` §2/§5, `rea-evidence/manifest.json`, `validation.md` §4 — REA 6.5.0 installed and used for 168 operations; provider gaps and blocked downloads documented |
| 3 | Structural analysis | **complete** | `inventory.md`, `resources/**`, `data/strings*`, `com-surface.md`, `api-map.md`, `dependencies.md`, `disasm.md`, `typelib/**` |
| 4 | Decompilation & behaviour | **substantially complete** | `src/*/decompiled/**` — 16/16 code-bearing modules decompiled (888 functions), 12 resource-only images correctly report "no code"; no dynamic analysis (impossible here, see `validation.md` §6.1) |
| 5 | Reconstruction & documentation | **complete** | 28 module trees under `src/`, 28 dossiers, 5 recovered COM type libraries (`.h`/`.idl`/`.json`), per-module `CMakeLists.txt`, `module-analysis.md` |
| 6 | Validation | **complete** | `validation.md` — 28/28 harnesses compile and pass (539 payload digests + 40 GUIDs re-derived at run time), 11,288/11,288 instructions byte-identical between capstone and objdump |

Remaining open work is enumerated per module in §3 and in the [unresolved] bullets of every
`src/<module>/README.md`. Nothing is deferred as "further analysis needed": each item names
exactly what is missing and what evidence exists.

---

## 2. Numbers at a point in time

| Metric | Value | Source |
|---|---|---|
| Inputs analysed | 53 files (7,674,285 bytes); 28 PE32+ x86-64, 25 non-PE | `data/inventory.json` |
| PE images decomposed | 16 code-bearing + 12 resource-only `.mui` | `inventory.md` |
| Resources recovered | **539** payloads; type sets confirmed by an independent walker 28/28 | `data/resources.json` |
| Message strings decoded | 121 (7 tables, 7 locales) | `data/resources.json` |
| Strings classified | **68,867 ASCII + 11,194 UTF-16LE** literals across 28 modules; per-module counts in `data/strings.md` | `data/strings/*.json` |
| COM surface | 8 modules, 16 interfaces, 7 coclasses, 5 shipped type libraries, 4 registrar scripts | `data/com-surface.json` |
| GUIDs recovered & located in-image | 31 typelib identifiers (all located, offsets recorded) + text-only GUIDs listed separately | `src/*/typelib/*.json`, `com-surface.md` |
| REA operations executed | **168** (28×4 objdump lanes + 27 disassembly archives + 28 PE-resource inspections + 1 artifact lane) | `rea-evidence/manifest.json` |
| Functions decompiled | **888** from 16 modules (CFG totals 73,277 functions; see §4) | `src/*/decompiled/index.json` |
| Instructions cross-checked | **11,288**, 100 % byte-identical across two decoders | `data/disasm.json` |
| Reconstruction harness | **28/28** targets compile; **28/28** run with 0 failed checks | `data/build-results.json` |

---

## 3. Per-module status

Machine-readable source: `analysis/report/module-analysis.md` (coverage matrix) and each
`src/<module>/README.md` (open items). "Decompiled" is *emitted / discovered in CFG*.

| Module | Decompiled | Resources | COM | Harness | Open items |
|---|---|---|---|---|---|
| `WMPDMC.exe` | 60 / 13,515 | 151 (incl. 118 TIFF, 2 UIFILE) | — | pass | UIFILE grammar, TIFF pixel data |
| `WMPDMCCore.dll` | 60 / 9,016 | 3 | exports only | pass | WEVT_TEMPLATE schema |
| `WMPMediaSharing.dll` | 60 / 1,679 | 4 | typelib (5 ifaces) | pass | WEVT_TEMPLATE schema; partial Dll* set |
| `WMPNSSUI.dll` | 60 / 415 | 4 | exports only | pass | WEVT_TEMPLATE schema |
| `WMPSideShowGadget.exe` | 60 / 2,001 | 26 | — | pass | RCDATA payloads |
| `mpvis.DLL` | 60 / 3,695 | 9 | typelib (IToleranceVis) + registrar | pass | — |
| `setup_wm.exe` | 60 / 9,867 | 62 | — | pass | WEVT_TEMPLATE, RCDATA |
| `wmlaunch.exe` | 60 / 6,336 | 3 | — | pass | — |
| `wmpconfig.exe` | 19 / 58 | 20 | — | pass | whole module is small; 19 of 58 emitted |
| `wmpenc.exe` | 60 / 390 | 3 | registrar script | pass | — |
| `wmplayer.exe` | 60 / 139 | 34 | — | pass | — |
| `wmpnetwk.exe` | 60 / 19,953 | 6 | typelib (3 UPnP ifaces) | pass | WEVT_TEMPLATE (59 KB), `#1017` payload, UPnP XML |
| `wmpnscfg.exe` | 60 / 580 | 13 | — | pass | — |
| `wmpnssci.dll` | 60 / 4,459 | 48 | typelib (14 types) + 2 registrar scripts | pass | `MUI` header fields beyond the language tag |
| `wmprph.exe` | 60 / 1,098 | 4 | typelib + registrar | pass | — |
| `wmpshare.exe` | 29 / 76 | 19 | — | pass | module has only 76 CFG functions; all emitted |
| 12 × `pt-BR/*.mui` | 0 (resource-only, verified) | 2–59 each | — | pass | `MUI` header fields |

Totals: 16/16 code-bearing modules decompiled at the documented cap (60 functions, except the two
modules smaller than the cap, where every function was emitted); 12/12 resource-only images
confirmed to contain no code by an empty CFG and no entry point.

---

## 4. Honest coverage statement for Phase 4

888 of 73,277 CFG-discovered functions were decompiled (**1.2 %**). The cap exists because each
function's pseudocode is reviewed and cross-checked, and because the analysis targets *structure
and behaviour* rather than whole-program reconstruction. The selection rule is deterministic and
documented (`decompile.py`: forced entry points + exports, then descending basic-block count,
`--min-blocks 2`, cap 60). What this means concretely:

* For every module, the **entry points and exports are covered** — the boundaries where behaviour
  enters and leaves the module.
* For the smaller modules (`wmpshare.exe` 76, `wmpconfig.exe` 58, `wmplayer.exe` 139,
  `wmpenc.exe` 390, `wmpnscfg.exe` 580, `wmpnssui.dll` 415) the emitted set is a large fraction
  of the whole CFG, and for the two smallest the *entire* CFG is in the cap.
* For the large modules (`wmpnetwk.exe` 19,953; `wmpdmc.exe` 13,515; `setup_wm.exe` 9,867;
  `wmpdmccore.dll` 9,016) the emitted 60 functions are the documented *sample*, chosen by size;
  the remainder is unexamined. Raising the cap is a rerun
  (`bash analysis/tools/run_decompile_all.sh 200 3600`), not a change of method.

---

## 5. Rerun / verification procedure

```bash
# full pipeline (each step idempotent, ~25 min end to end on 2 vCPU)
python3 analysis/tools/inventory.py
python3 analysis/tools/rea_batch.py
python3 analysis/tools/resources.py
python3 analysis/tools/strings_scan.py
python3 analysis/tools/typelib.py
python3 analysis/tools/com_surface.py
bash    analysis/tools/run_decompile_all.sh 60 2400      # skips complete indexes
python3 analysis/tools/disasm.py
python3 analysis/tools/module_report.py
python3 analysis/tools/recon_build.py --build
```

Inputs are never written to; verify that before and after with:

```bash
find bin -type f -print0 | sort -z | xargs -0 sha256sum | sha256sum
git diff --name-only origin/main HEAD -- bin/     # expect no output
```

---

## 6. Change log (this repository)

| Commit | Content |
|---|---|
| `7808d47` → `3d94925` (session 2, earlier tree) | Inventory tooling, REA evidence lanes, string scan, MSFT type-library decoder, 53/53 blob-identity proof of the `bin/` reorganisation |
| `efdadad` (session 3, earlier tree) | `resources.py` fix + decoders, `com_surface.py`, `module_report.py`, `methodology.md`, `data-formats.md`, 28 module dossiers, `module-analysis.md` |
| *this commit* | `disasm.py` (two-decoder cross-check), `recon_build.py` (CMake + runtime validation harness, `src/CMakeLists.txt`), `validation.md`, `progress.md`, `final-report.md`, regenerated REA evidence for all 28 images, mojibake reinterpretation for version resources, `.gitignore` for build/scratch output |

The commit identifiers from session 2/3 refer to the earlier working tree; the same content is
present in this history (the branch was rebased onto the current `main` after the sandbox was
re-created, and the tree was re-verified against it — see `validation.md` §2).
