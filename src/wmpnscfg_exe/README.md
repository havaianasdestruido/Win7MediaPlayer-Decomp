# `bin/wmpnscfg.exe` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/wmpnscfg.exe`; size 70,656 bytes.
* SHA-256: `10888bb9c3799e1e8b010c0f9088ced376aad63a509fce1727c457b022cdc717`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_GUI`, linker 9.0, image base `0x100000000`, entry point RVA `0x79e4`.
* Built: 2009-07-14 00:24:06Z (PE TimeDateStamp 1247531046).
* PDB: `WMPNSCFG.pdb` (age 1); overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP, TERMINAL_SERVER_AWARE.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Windows Media Player Network Sharing Service Configuration Application`
* FileVersion: `12.0.7600.16385 (win7_rtm.090713-1255)`
* ProductName: `Microsoft® Windows® Operating System`
* ProductVersion: `12.0.7600.16385`
* OriginalFilename: `WMPNSCFG.EXE`
* LegalCopyright: `© Microsoft Corporation. All rights reserved.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.text` | `0x1000` | 37,476 | 37,888 | 6.10 | CNT_CODE, MEM_EXECUTE, MEM_READ |
| `.data` | `0xb000` | 2,744 | 512 | 1.26 | CNT_INITIALIZED_DATA, MEM_READ, MEM_WRITE |
| `.pdata` | `0xc000` | 1,692 | 2,048 | 3.80 | CNT_INITIALIZED_DATA, MEM_READ |
| `.rsrc` | `0xd000` | 28,120 | 28,160 | 5.17 | CNT_INITIALIZED_DATA, MEM_READ |
| `.reloc` | `0x14000` | 586 | 1,024 | 1.63 | CNT_INITIALIZED_DATA, MEM_DISCARDABLE, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **4**; imported functions: **104**; delay-loaded DLLs: **4**; exported symbols: **0**.

| Family | DLLs | Functions |
|---|---|---|
| Core system | ADVAPI32.dll, KERNEL32.dll, msvcrt.dll, ntdll.dll | 104 |

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmpnscfg_exe/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **13** (raw directory walk; pefile cross-check agrees); message strings decoded: 0.
* Types: MUI×1, RT_GROUP_ICON×1, RT_ICON×9, RT_MANIFEST×1, RT_VERSION×1.

* `MUI` payload (1, en-US): language tag `en-US`, declares localised types [6, 16] — matches sibling `.mui` file: True.
* `RT_MANIFEST` 1: `<?xml version="1.0" encoding="UTF-8" standalone="yes"?> `.
Per-entry detail: `analysis/report/resources/wmpnscfg_exe/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 782 ASCII, 64 UTF-16LE (575 unique).
* GUIDs 1, URLs 0, UPnP URNs 2, registry paths 1, referenced modules 12.

* UPnP/DLNA identifiers: `  <trustInfo xmlns="urn:schemas-microsoft-com:asm.v3">`, `<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0"> `
* GUID literals: `99f3d8bd-baf1-4047-9ff5-a342ab0fc454`
* Registry paths: `SOFTWARE\Policies\Microsoft\WindowsMediaPlayer`

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmpnscfg_exe.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `complete`.
* CFG: 580 functions, 229 call edges, built in 1.66s; selection rule: forced (entry+exports), then size desc, min_blocks=2, cap=60.
* Emitted pseudocode: 60 functions (60 decompiled successfully).

| Address | Function | Blocks | Size | File |
|---|---|---|---|---|
| `0x100007701` | `sub_100007701` | 38 | 410 | [`0002_100007701_sub_100007701.c`](decompiled/0002_100007701_sub_100007701.c) |
| `0x100006f65` | `sub_100006f65` | 36 | 402 | [`0003_100006f65_sub_100006f65.c`](decompiled/0003_100006f65_sub_100006f65.c) |
| `0x100004d4f` | `sub_100004d4f` | 35 | 473 | [`0004_100004d4f_sub_100004d4f.c`](decompiled/0004_100004d4f_sub_100004d4f.c) |
| `0x100006b85` | `sub_100006b85` | 26 | 331 | [`0005_100006b85_sub_100006b85.c`](decompiled/0005_100006b85_sub_100006b85.c) |
| `0x1000050c5` | `sub_1000050c5` | 23 | 330 | [`0006_1000050c5_sub_1000050c5.c`](decompiled/0006_1000050c5_sub_1000050c5.c) |
| `0x10000551f` | `sub_10000551f` | 23 | 212 | [`0007_10000551f_sub_10000551f.c`](decompiled/0007_10000551f_sub_10000551f.c) |
| `0x1000023f5` | `sub_1000023f5` | 21 | 216 | [`0008_1000023f5_sub_1000023f5.c`](decompiled/0008_1000023f5_sub_1000023f5.c) |
| `0x100004341` | `sub_100004341` | 21 | 202 | [`0009_100004341_sub_100004341.c`](decompiled/0009_100004341_sub_100004341.c) |
| `0x1000042bb` | `sub_1000042bb` | 19 | 200 | [`0010_1000042bb_sub_1000042bb.c`](decompiled/0010_1000042bb_sub_1000042bb.c) |
| `0x1000049b8` | `sub_1000049b8` | 18 | 172 | [`0011_1000049b8_sub_1000049b8.c`](decompiled/0011_1000049b8_sub_1000049b8.c) |
| `0x100006650` | `sub_100006650` | 17 | 213 | [`0012_100006650_sub_100006650.c`](decompiled/0012_100006650_sub_100006650.c) |
| `0x10000642c` | `sub_10000642c` | 16 | 221 | [`0013_10000642c_sub_10000642c.c`](decompiled/0013_10000642c_sub_10000642c.c) |

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

## 8. Interpretation and open items

* Role **[inferred]**: Windows Media Player Network Sharing Service Configuration Application
* [unresolved] 520 of 580 CFG functions were not selected/decompiled (cap forced (entry+exports), then size desc, min_blocks=2, cap=60)

