# `bin/WMPNSSUI.dll` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/WMPNSSUI.dll`; size 34,816 bytes.
* SHA-256: `28d793e5077afb34b57fd3ac404413a60f06a3985fcc4aa16cccb8525411f8bb`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_GUI`, linker 9.0, image base `0x7ff24f90000`, entry point RVA `0x5d5c`.
* Built: 2009-07-14 01:36:20Z (PE TimeDateStamp 1247535380).
* PDB: `wmpnssui.pdb` (age 1); overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Windows Media Player WMPNSS Shell Extensions`
* FileVersion: `6.1.7600.16385 (win7_rtm.090713-1255)`
* ProductName: `Microsoft® Windows® Operating System`
* ProductVersion: `6.1.7600.16385`
* InternalName: `WMPNSSUI`
* OriginalFilename: `WMPNSSUI.dll`
* LegalCopyright: `© Microsoft Corporation. All rights reserved.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.text` | `0x1000` | 25,541 | 25,600 | 6.11 | CNT_CODE, MEM_EXECUTE, MEM_READ |
| `.data` | `0x8000` | 1,832 | 512 | 0.71 | CNT_INITIALIZED_DATA, MEM_READ, MEM_WRITE |
| `.pdata` | `0x9000` | 792 | 1,024 | 3.47 | CNT_INITIALIZED_DATA, MEM_READ |
| `.rsrc` | `0xa000` | 5,840 | 6,144 | 3.96 | CNT_INITIALIZED_DATA, MEM_READ |
| `.reloc` | `0xc000` | 266 | 512 | 2.30 | CNT_INITIALIZED_DATA, MEM_DISCARDABLE, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **11**; imported functions: **95**; delay-loaded DLLs: **0**; exported symbols: **5**.

| Family | DLLs | Functions |
|---|---|---|
| COM/OLE | COMCTL32.dll, OLEAUT32.dll, ole32.dll | 15 |
| Core system | ADVAPI32.dll, KERNEL32.dll, msvcrt.dll, ntdll.dll | 55 |
| Windows shell/UI | GDI32.dll, SHELL32.dll, SHLWAPI.dll, USER32.dll | 25 |

Exports: `DllCanUnloadNow`, `DllGetClassObject`, `DllRegisterServer`, `DllUnregisterServer`.

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmpnssui_dll/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **4** (raw directory walk; pefile cross-check agrees); message strings decoded: 0.
* Types: MUI×1, RT_MANIFEST×1, RT_VERSION×1, WEVT_TEMPLATE×1.

* `MUI` payload (1, en-US): language tag `en-US`, declares localised types [] — matches sibling `.mui` file: None.
* `WEVT_TEMPLATE` 1 (3,554 B): magic `CRIM`, declared size 3552 — ETW event-manifest template; binary schema not decoded here.
* `RT_MANIFEST` 2: `<?xml version="1.0" encoding="UTF-8" standalone="yes"?>`.
Per-entry detail: `analysis/report/resources/wmpnssui_dll/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 519 ASCII, 109 UTF-16LE (439 unique).
* GUIDs 0, URLs 0, UPnP URNs 1, registry paths 7, referenced modules 14.

* UPnP/DLNA identifiers: `<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">`
* Registry paths: `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\UDNRenderers`, `Software\Microsoft\MediaPlayer`, `Software\Microsoft\MediaPlayer\Preferences`, `Software\Microsoft\MediaPlayer\Preferences\DMC`, `Software\Microsoft\MediaPlayer\Preferences\DMR\`, `Software\Microsoft\MediaPlayer\Preferences\HME`, `Software\Policies\Microsoft\WindowsMediaPlayer\`

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmpnssui_dll.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `complete`.
* CFG: 415 functions, 64 call edges, built in 0.87s; selection rule: forced (entry+exports), then size desc, min_blocks=2, cap=60.
* Emitted pseudocode: 60 functions (60 decompiled successfully).

| Address | Function | Blocks | Size | File |
|---|---|---|---|---|
| `0x7ff24f95990` | `sub_7ff24f95990` | 34 | 373 | [`0005_7ff24f95990_sub_7ff24f95990.c`](decompiled/0005_7ff24f95990_sub_7ff24f95990.c) |
| `0x7ff24f95bd5` | `sub_7ff24f95bd5` | 23 | 227 | [`0006_7ff24f95bd5_sub_7ff24f95bd5.c`](decompiled/0006_7ff24f95bd5_sub_7ff24f95bd5.c) |
| `0x7ff24f920dc` | `sub_7ff24f920dc` | 22 | 237 | [`0007_7ff24f920dc_sub_7ff24f920dc.c`](decompiled/0007_7ff24f920dc_sub_7ff24f920dc.c) |
| `0x7ff24f93609` | `sub_7ff24f93609` | 21 | 268 | [`0008_7ff24f93609_sub_7ff24f93609.c`](decompiled/0008_7ff24f93609_sub_7ff24f93609.c) |
| `0x7ff24f94cf4` | `sub_7ff24f94cf4` | 20 | 286 | [`0009_7ff24f94cf4_sub_7ff24f94cf4.c`](decompiled/0009_7ff24f94cf4_sub_7ff24f94cf4.c) |
| `0x7ff24f94025` | `sub_7ff24f94025` | 18 | 206 | [`0010_7ff24f94025_sub_7ff24f94025.c`](decompiled/0010_7ff24f94025_sub_7ff24f94025.c) |
| `0x7ff24f94a5c` | `sub_7ff24f94a5c` | 17 | 297 | [`0011_7ff24f94a5c_sub_7ff24f94a5c.c`](decompiled/0011_7ff24f94a5c_sub_7ff24f94a5c.c) |
| `0x7ff24f92dcc` | `sub_7ff24f92dcc` | 17 | 280 | [`0012_7ff24f92dcc_sub_7ff24f92dcc.c`](decompiled/0012_7ff24f92dcc_sub_7ff24f92dcc.c) |
| `0x7ff24f93e70` | `sub_7ff24f93e70` | 16 | 211 | [`0013_7ff24f93e70_sub_7ff24f93e70.c`](decompiled/0013_7ff24f93e70_sub_7ff24f93e70.c) |
| `0x7ff24f93504` | `sub_7ff24f93504` | 14 | 312 | [`0014_7ff24f93504_sub_7ff24f93504.c`](decompiled/0014_7ff24f93504_sub_7ff24f93504.c) |
| `0x7ff24f94213` | `sub_7ff24f94213` | 13 | 133 | [`0015_7ff24f94213_sub_7ff24f94213.c`](decompiled/0015_7ff24f94213_sub_7ff24f94213.c) |
| `0x7ff24f942c7` | `sub_7ff24f942c7` | 13 | 130 | [`0016_7ff24f942c7_sub_7ff24f942c7.c`](decompiled/0016_7ff24f942c7_sub_7ff24f942c7.c) |

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

## 7. COM surface **[verified]**

* COM entry points: `DllCanUnloadNow`, `DllGetClassObject`, `DllRegisterServer`, `DllUnregisterServer`.

## 8. Reconstruction and validation

* Reconstruction harness: `recon/` (generated by `analysis/tools/recon_build.py`) — `module_facts.h` (sections, resource RVAs, image digest), `guids.h`, `enums.h`, `interfaces.h`, `compile_check.c`, plus `CMakeLists.txt`.
* Last build validation: target `wmp_recon_wmpnssui_dll` — compiled and all runtime checks passed.
* The harness re-derives this module's recorded digests and GUIDs from the original file at run time; see `analysis/report/validation.md` §3.

`analysis/report/disasm.md` records the instruction-level cross-check (capstone vs GNU objdump through REA) for this module.

## 9. Interpretation and open items

* Role **[inferred]**: Windows Media Player WMPNSS Shell Extensions (internal name `WMPNSSUI`)
* [unresolved] 355 of 415 CFG functions were not selected/decompiled (cap forced (entry+exports), then size desc, min_blocks=2, cap=60)
* [unresolved] `MUI` payload type-list not recovered (resource 1)
* [unresolved] `WEVT_TEMPLATE` binary schema (ETW manifest template) not decoded

