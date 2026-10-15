# Final report

> Clean-room reverse engineering of the Windows Media Player 12 / Windows 7 binary set in
> `bin/`. This report summarises the whole study: what the corpus is, what was recovered, how
> it was verified, what the binaries do, where the reconstruction lives, what REA contributed,
> and exactly what remains unresolved. Detailed evidence is in the sibling reports; every claim
> here is traceable to one of them.

**Status: all six phases complete.** No binary was executed or modified. 16 code-bearing modules
were decompiled (888 functions), 12 resource-only localisation images were confirmed code-free,
539 resources were extracted and — where the format is known — decoded, 5 shipped COM type
libraries were decoded in full, and the whole recorded dataset was re-verified at run time by 28
generated C programs that recompute every digest from `bin/`.

---

## 1. The corpus

53 inputs, 7,674,285 bytes: 16 PE32+ executables/DLLs (x86-64, linker 9.0, ASLR+DEP, no CFG/TLS/
CLR, PDB paths present, no code-signing), 12 Portuguese (pt-BR) MUI satellite images, 6 UPnP XML
service descriptions, 18 icon images and one `.wmz` skin package (a 45-member ZIP). Four build
waves are visible in the PE timestamps — **2009-07 (Windows 7 RTM), 2010-11 (SP1),
2016-03/2016-08 (LDR servicing), 2019-06 (final LDR servicing)** — and the module set spans three
distinct products that share the WMP 12 code base:

* **the player itself** — `wmplayer.exe`, `wmpconfig.exe`, `setup_wm.exe`, `wmlaunch.exe`,
  `wmpenc.exe`, `mpvis.DLL` (visualisation host), `wmpshare.exe` (folder sharing)
* **network sharing (NSS / DLNA-UPnP)** — `wmpnetwk.exe` (the service), `wmpnscfg.exe` (its
  configuration UI), `wmpnssci.dll` (control interface), `WMPNSSUI.dll` (shell extensions),
  `WMPMediaSharing.dll`
* **Digital Media Controller (DMC) and SideShow** — `WMPDMC.exe`, `WMPDMCCore.dll`,
  `WMPSideShowGadget.exe`, and the rich-preview handler `wmprph.exe`

The versions are recorded per file in `module-analysis.md` §1 / `inventory.md`; the exact build
strings (e.g. `12.0.7601.17514 (win7sp1_rtm.101119-1850)` for `WMPDMC.exe`) are read from the
`RT_VERSION` resources, and the pt-BR `.mui` files are localisation satellites of specific
binaries, which is how the language/resource pairing was verified (`data-formats.md` §2.9).

---

## 2. What was recovered, and where it lives

| Deliverable | Location | Content |
|---|---|---|
| Reconstructed module trees | `src/<module>/` (28) | pseudocode, type library, imports/exports, strings highlights, dossiers, `CMakeLists.txt` |
| Decompiled pseudocode | `src/<module>/decompiled/` | 888 functions with per-function provenance headers, `index.json` (selection rule, callers/callees, coverage), `_cfg.json` call graphs |
| Recovered COM definitions | `src/<module>/typelib/` (5 libraries) | `.h` (GUID constants + vtable slot order), `.idl`, `.json` (full type records) |
| Self-check harness | `src/<module>/recon/`, `src/CMakeLists.txt` | generated C that re-derives every recorded fact from `bin/` at run time |
| Tooling | `analysis/tools/` (14 programs + `lib/`) | Phase 0 provisioning (`setup_env.sh`), manifest verification (`manifest_verify.py`), Phase 0 validator (`phase0_check.py`), inventory, REA driver, resources, strings, typelib, COM, decompiler, dossiers, disasm cross-check, build harness |
| Reports | `analysis/report/` | `phase0.md`, `update-manifests.md`, plus the nine phase reports, resources, REA evidence, disassembly and data |
| Raw data | `analysis/report/data/` | `phase0.json`, `update-manifests.json`, `inventory.json`, `resources.json`, `strings/*.json`, `typelibs.json`, `com-surface.json`, `disasm.json`, `build-results.json`, `decompile-logs/` |
| Extracted artifacts | `analysis/report/resources/<module>/<TYPE>/` | decoded payloads: messages, dialogs, menus, accelerators, version info, manifests, icons (assembled `.ico`), registrar scripts, UI markup, TIFF images, type-library payloads |

---

## 3. How the results were verified

Full detail in `validation.md`; the four independent checks:

1. **Run-time re-derivation.** 28/28 generated CMake targets compile and, when executed, reopen
   each original binary and confirm its SHA-256, all **539** resource payload digests (RVA →
   section → file offset → hash) and **40** recovered GUIDs (31 read from shipped type libraries and confirmed as literals, 9 recovered from text form). Zero failed checks, zero
   unresolved type renderings.
2. **Two-decoder instruction comparison.** capstone vs GNU objdump (through REA):
   **11,288/11,288** compared instructions byte-identical; 10,986 exact, 301 longer than
   objdump's 7-byte display width (matched on the prefix), 1 prefix-split case hand-verified.
   All 11,287 instructions whose bytes objdump printed in full also agree on mnemonics.
3. **Cross-tool structure agreement.** Resource type sets 28/28 and payload digests **539/539**
   identical between the project's raw walker, pefile and REA's independent PE resource parser;
   section names 28/28 in REA's objdump output.
4. **Input integrity & Microsoft update manifest provenance.** `git diff --name-only 5c564f7 HEAD -- bin/`
   is empty: all 53 files in `bin/` match the initial upstream commit (`7808d47`) and post-move
   commit (`5c564f7`), no tool opens `bin/` for writing, all 53 files map to Microsoft's Windows 7
   (NT 6.1) CBS/WinSxS packages (`Microsoft-Windows-MediaPlayer-Package` and
   `Microsoft-Windows-WMPNetworkSharingService-Package`, `publicKeyToken="31bf3856ad364e35"`), all
   28 PE images have valid PE Optional Header `CheckSum` values across 5 servicing KB waves (`RTM
   7600.16385`, `KB976932`, `KB3150513`, `KB3179573`, `KB4507449`), and 7 unchanged static assets
   match Microsoft's `m417z/winbindex` manifest index by exact SHA-256 (`update-manifests.md`).

**What is not verified:** runtime behaviour (no Windows, no emulator — every behavioural claim is
a static reading), completeness of the decompilation sample (888 of 73,277 CFG functions, the cap
and selection rule are documented), binary provenance/authenticity (version resources are
self-declared and no signature is present), and the internal schemas of `WEVT_TEMPLATE`,
`RT_BITMAP`/TIFF pixel data and the deeper `MUI` header fields (extracted verbatim, no decoder
claimed).

---

## 4. Technical findings that matter

### 4.1 The modules are not inter-linked — they are COM/RPC/UPnP peers

`api-map.md` records **0 static inter-module imports** in the entire set: no module imports
another module in `bin/`. Every interaction goes through the operating system's indirection
layers: COM (type libraries + ATL registrar scripts + `Dll*` entry points), UPnP/DLNA over HTTP,
RPC, shell extensions and registry keys. The largest third-party surfaces are
`WMPDMC.exe` (18 DLLs / 558 imports), `setup_wm.exe` (24 / 388) and `wmpnetwk.exe` (12 / 366).

### 4.2 The COM surface is fully specified by the binaries themselves

Five modules embed MSFT type libraries (decoded in full, `typelib.py`) and four carry ATL
registrar scripts, giving **16 interfaces and 7 coclasses** with GUIDs, member ids, vtable slots,
calling conventions and rendered parameter lists. Highlights:

* `wmpnssci.dll` — the NSS control API: `INSSManager` (9 methods: sharing state,
  `InitializeLibrarySharing`, device enumeration/removal, advise/unadvise), `INSSDevice`,
  `INSSDevices`, `INSSProperties`, `INSSNotify` plus the `ServiceStatus`, `EventReason`,
  `AuthorizationStatus` enums — i.e. the programmatic surface that a remote controller uses.
* `WMPMediaSharing.dll` — `IWindowsMediaLibrarySharingServices` and the device/property
  interfaces used by the sharing UI.
* `wmpnetwk.exe` — `IUPnPService_ContentDirectory`, `IUPnPService_ConnectionManager`,
  `IUPnPService_MediaReceiverRegistrar`: the DLNA service bindings the NSS service advertises.
* `mpvis.DLL` — `IToleranceVis`, the visualisation plugin contract; `wmprph.exe` —
  `IWMPRichPreviewLauncher`.

Every recovered GUID was additionally located as a 16-byte constant inside the very image that
declares it (31/31, with file offsets), a check that ordinary text search cannot pass.

### 4.3 Resources identify the product's own file formats

Of the 18 resource types present, several are WMP-specific and were decoded here:
`UIFILE` (the DirectUI `<duixml>` markup that describes the DMC's UI),
`IMAGE` (118 TIFF images used by that UI), `REGISTRY` (ATL registrar scripts), `TYPELIB`,
`MUI` (localisation descriptor), `#1017` (the UPnP MediaServer description XML that
`wmpnetwk.exe` serves), plus the standard message/string/dialog/menu/accelerator/version tables.
`data-formats.md` records the binary layout, the evidence for each field, and the parts left
undecoded (`WEVT_TEMPLATE`'s `CRIM` schema, `RT_BITMAP`/TIFF pixels, the `MUI` dwords after the
language tag).

### 4.4 Localisation is a satellite design, verified

Each pt-BR `.mui` is a resource-only PE whose `MUI` resource names the numeric resource types it
localises, and whose payload ends with a UTF-16LE language tag. For `WMPDMC.exe` the declaration
`[4,5,6,9,11,16]` = MENU, DIALOG, STRING, ACCELERATOR, MESSAGETABLE, VERSION matches exactly the
type set of `bin/pt-BR/WMPDMC.exe.mui`; the same holds for other pairs where the id list parses
(4 verified matches, 1 mismatch, 19 undetermined — reported honestly in
`resources/<module>/MUI/*.json`). The decoded message tables give the real pt-BR strings
(e.g. 96 messages in `wmpnetwk.exe.mui`), and the version resources contain the translated
product names.

### 4.5 Version-resource encoding quirk (fixed and documented)

Several `RT_VERSION` values store UTF-8 bytes where the format expects UTF-16, so a byte-faithful
read shows `Â©`/`MÃdia`. Both readings are now kept side by side (`StringFileInfo` and
`StringFileInfo_utf8` plus an `encoding_note`), so the artifact is not silently "corrected" —
this is a property of the shipped binaries, not of the extraction.

---

## 5. REA: what it actually contributed

REA 6.5.0 was inspected, installed from npm and driven over the whole corpus for the operations
its local configuration supports — **168 operations**, all archived with argv, exit code,
duration, provider id, subject hash and evidence id in
`analysis/report/rea-evidence/manifest.json`:

* `rea inspect-with-objdump` (provider `gnu.objdump`) for file headers, section headers, symbols
  and relocations on all 28 images, plus full `disassemble_all` archives for 27 of them;
* `rea inspect-pe-resources` (provider `rea-pe-resources`) for all 28 images — the evidence that
  the project's own resource walk was compared against, resulting in the 539/539 payload-digest
  agreement;
* `rea inspect-artifact` for the non-PE `.wmz` skin package.

REA's deep native operations (`analyze`, `function`, `decompile`, `xrefs`, `instructions`) could
not be used: they require Ghidra, Hopper or IDA, `rea doctor` reports `missing_analysis_engine`
for all three, and the release downloads that would supply them are blocked in this sandbox
(npm/PyPI/git reachable; `release-assets.githubusercontent.com` returns HTTP 000). `inspect-binary-layout` is ELF-only, and the objdump lane labels PE subjects `format: "unknown"`.
Those limitations are recorded in `methodology.md` §5 and in the ledger itself. **REA's real
contribution here:** an independent, provenance-bound evidence archive — most valuably the
objdump disassembly used as the second decoder in the instruction-level validation, and the PE
resource inventory used to validate the resource recovery.

---

## 6. Unknowns, stated precisely

| # | Unknown | Why it remains | What would settle it |
|---|---|---|---|
| 1 | Runtime behaviour of every module | Windows binaries; no Windows host, emulator or Wine in this environment; dynamic analysis was also deliberately avoided as unsafe/unnecessary | Observing the modules on a Windows 7 SP1 x64 host (or in a controlled VM) with the recovered interfaces |
| 2 | Behaviour of the ~72,400 functions outside the decompilation cap | The sample cap is a project decision, documented per module | Rerun `run_decompile_all.sh` with a higher cap; the pipeline is unchanged |
| 3 | `WEVT_TEMPLATE` (ETW manifest template, `CRIM` magic) internal schema | Undocumented in public references available here; 6 payloads (one 59,130 bytes) are preserved verbatim | Decode against Microsoft's event-manifest compiler output format and validate by round-tripping a payload |
| 4 | `RT_BITMAP` and TIFF pixel data | Not needed to establish structure; extraction is lossless | A bitmap decoder pass (mechanical, no new evidence) |
| 5 | `MUI` header dwords beyond the language tag (12 of 24 payloads' id lists) | The terminator position is not deterministic across images; guessed decodes were rejected rather than published | Compare against Microsoft's `muirct`/`MUI` documentation or a corpus of `.mui` files with known type sets |
| 6 | Authenticity/patch-level provenance of the binaries | No Authenticode signature on any image; version resources are self-declared | Compare hashes against Microsoft's published update manifests (not reachable from here) |
| 7 | Whether the two `.wmz`-adjacent UPnP document sets are served by `wmpnetwk.exe` or only shipped alongside it | Static evidence shows the URNs/XML in the binary and the files on disk; the serving path is not directly observed | Runtime capture of the HTTP conversation (see #1) |

Nothing in this list is a placeholder: for each item, the evidence that *does* exist is named,
and the specific work that would close it is specified.

---

## 7. Conclusion

The corpus is a coherent, single-toolchain (MSVC 9.0) Windows 7-era product family whose
components deliberately avoid static linkage to one another and instead expose
COM/UPnP/RPC surfaces — which are themselves described inside the binaries by shipped type
libraries and registrar scripts. That property is what makes the reconstruction tractable without
running anything: the modules document their own interfaces, and those documents could be
decoded, cross-checked against independent parsers and confirmed at the byte level. The
reconstruction in `src/` therefore states, for each module, its identity, its API surface, its
resources, its recovered control flow and its unresolved parts — and the accompanying validation
harness re-proves the factual basis on demand.
