# `bin/wmlaunch.exe` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/wmlaunch.exe`; size 263,168 bytes.
* SHA-256: `8ea713b95f32c31a11bb1dded4cc8b9620014600f122fff3852c082d9af67b1b`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_GUI`, linker 9.0, image base `0x100000000`, entry point RVA `0x3a984`.
* Built: 2010-11-20 11:17:24Z (PE TimeDateStamp 1290251844).
* PDB: `wmlaunch.pdb` (age 1); overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP, TERMINAL_SERVER_AWARE.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Windows Media Player Launcher`
* FileVersion: `12.0.7601.17514 (win7sp1_rtm.101119-1850)`
* ProductName: `Microsoft® Windows® Operating System`
* ProductVersion: `12.0.7601.17514`
* InternalName: `wmlaunch.exe`
* OriginalFilename: `wmlaunch.exe`
* LegalCopyright: `© Microsoft Corporation. All rights reserved.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.text` | `0x1000` | 245,318 | 245,760 | 4.98 | CNT_CODE, MEM_EXECUTE, MEM_READ |
| `.data` | `0x3d000` | 6,296 | 3,072 | 1.19 | CNT_INITIALIZED_DATA, MEM_READ, MEM_WRITE |
| `.pdata` | `0x3f000` | 2,928 | 3,072 | 5.00 | CNT_INITIALIZED_DATA, MEM_READ |
| `.rsrc` | `0x40000` | 2,080 | 2,560 | 3.78 | CNT_INITIALIZED_DATA, MEM_READ |
| `.reloc` | `0x41000` | 7,660 | 7,680 | 5.22 | CNT_INITIALIZED_DATA, MEM_DISCARDABLE, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **11**; imported functions: **139**; delay-loaded DLLs: **0**; exported symbols: **0**.

| Family | DLLs | Functions |
|---|---|---|
| COM/OLE | OLEAUT32.dll, ole32.dll | 15 |
| Core system | ADVAPI32.dll, KERNEL32.dll, msvcrt.dll, ntdll.dll | 115 |
| Media/AV | MF.dll | 1 |
| Windows shell/UI | SHELL32.dll, SHLWAPI.dll, USER32.dll | 5 |
| other | MPR.dll | 3 |

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmlaunch_exe/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **3** (raw directory walk; pefile cross-check agrees); message strings decoded: 0.
* Types: MUI×1, RT_MANIFEST×1, RT_VERSION×1.

* `MUI` payload (1, en-US): language tag `en-US`, declares localised types [] — matches sibling `.mui` file: None.
* `RT_MANIFEST` 1: `<?xml version="1.0" encoding="UTF-8" standalone="yes"?>`.
Per-entry detail: `analysis/report/resources/wmlaunch_exe/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 1530 ASCII, 1409 UTF-16LE (2119 unique).
* GUIDs 0, URLs 1, UPnP URNs 2, registry paths 28, referenced modules 20.

* URLs: `http://go.microsoft.com/fwlink/`
* UPnP/DLNA identifiers: `<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">`, `<trustInfo xmlns="urn:schemas-microsoft-com:asm.v3">`
* Registry paths: `SOFTWARE\Microsoft\MediaPlayer\Player\Extensions\.%s`, `SOFTWARE\Microsoft\MediaPlayer\Player\Schemes\%s`, `SOFTWARE\Microsoft\Multimedia\WMPlayer\Extensions\.%s`, `SOFTWARE\Microsoft\Multimedia\WMPlayer\Schemes\%s`, `SOFTWARE\Microsoft\Windows\CurrentVersion\App Paths\%s`, `Software\Microsoft\MediaPlayer`, `Software\Microsoft\MediaPlayer\MLS\Extensions`, `Software\Microsoft\MediaPlayer\Objects\Effects`, `Software\Microsoft\MediaPlayer\Player\DVD`, `Software\Microsoft\MediaPlayer\Player\Settings` (+18 more)

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmlaunch_exe.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `complete`.
* CFG: 6336 functions, 0 call edges, built in 18.46s; selection rule: forced (entry+exports), then size desc, min_blocks=2, cap=60.
* Emitted pseudocode: 60 functions (60 decompiled successfully).

| Address | Function | Blocks | Size | File |
|---|---|---|---|---|
| `0x100034588` | `sub_100034588` | 206 | 2054 | [`0002_100034588_sub_100034588.c`](decompiled/0002_100034588_sub_100034588.c) |
| `0x100039123` | `sub_100039123` | 76 | 793 | [`0003_100039123_sub_100039123.c`](decompiled/0003_100039123_sub_100039123.c) |
| `0x100034ecc` | `sub_100034ecc` | 66 | 790 | [`0004_100034ecc_sub_100034ecc.c`](decompiled/0004_100034ecc_sub_100034ecc.c) |
| `0x10000d2b1` | `sub_10000d2b1` | 57 | 1050 | [`0005_10000d2b1_sub_10000d2b1.c`](decompiled/0005_10000d2b1_sub_10000d2b1.c) |
| `0x1000360a9` | `sub_1000360a9` | 52 | 533 | [`0006_1000360a9_sub_1000360a9.c`](decompiled/0006_1000360a9_sub_1000360a9.c) |
| `0x100032734` | `sub_100032734` | 50 | 660 | [`0007_100032734_sub_100032734.c`](decompiled/0007_100032734_sub_100032734.c) |
| `0x10003562c` | `sub_10003562c` | 44 | 431 | [`0008_10003562c_sub_10003562c.c`](decompiled/0008_10003562c_sub_10003562c.c) |
| `0x10002e0dd` | `sub_10002e0dd` | 42 | 504 | [`0009_10002e0dd_sub_10002e0dd.c`](decompiled/0009_10002e0dd_sub_10002e0dd.c) |
| `0x100031bf4` | `sub_100031bf4` | 40 | 472 | [`0010_100031bf4_sub_100031bf4.c`](decompiled/0010_100031bf4_sub_100031bf4.c) |
| `0x100033bbc` | `sub_100033bbc` | 38 | 455 | [`0011_100033bbc_sub_100033bbc.c`](decompiled/0011_100033bbc_sub_100033bbc.c) |
| `0x10003a6a1` | `sub_10003a6a1` | 38 | 410 | [`0012_10003a6a1_sub_10003a6a1.c`](decompiled/0012_10003a6a1_sub_10003a6a1.c) |
| `0x10003786f` | `sub_10003786f` | 38 | 364 | [`0013_10003786f_sub_10003786f.c`](decompiled/0013_10003786f_sub_10003786f.c) |

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

## 8. Reconstruction and validation

* Reconstruction harness: `recon/` (generated by `analysis/tools/recon_build.py`) — `module_facts.h` (sections, resource RVAs, image digest), `guids.h`, `enums.h`, `interfaces.h`, `compile_check.c`, plus `CMakeLists.txt`.
* Last build validation: target `wmp_recon_wmlaunch_exe` — compiled and all runtime checks passed.
* The harness re-derives this module's recorded digests and GUIDs from the original file at run time; see `analysis/report/validation.md` §3.

`analysis/report/disasm.md` records the instruction-level cross-check (capstone vs GNU objdump through REA) for this module.

## 9. Interpretation and open items

* Role **[inferred]**: Windows Media Player Launcher (internal name `wmlaunch.exe`)
* [unresolved] 6276 of 6336 CFG functions were not selected/decompiled (cap forced (entry+exports), then size desc, min_blocks=2, cap=60)
* [unresolved] `MUI` payload type-list not recovered (resource 1)

