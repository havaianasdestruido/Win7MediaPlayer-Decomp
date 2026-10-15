# `bin/WMPSideShowGadget.exe` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/WMPSideShowGadget.exe`; size 165,888 bytes.
* SHA-256: `0f8f45cd381f60a41cca4834188157d25906911108d7280cb2540d2245327a9d`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_GUI`, linker 9.0, image base `0x100000000`, entry point RVA `0x18ee4`.
* Built: 2009-07-14 00:24:01Z (PE TimeDateStamp 1247531041).
* PDB: `WMPSideShowGadget.pdb` (age 1); overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP, TERMINAL_SERVER_AWARE.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Windows Media Player Gadget for Windows SideShow capable devices`
* FileVersion: `12.0.7600.16385 (win7_rtm.090713-1255)`
* ProductName: `Microsoft® Windows® Operating System`
* ProductVersion: `12.0.7600.16385`
* InternalName: `WMPSideShowGadget`
* OriginalFilename: `WMPSideShowGadget`
* LegalCopyright: `© Microsoft Corporation. All rights reserved.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.text` | `0x1000` | 109,555 | 109,568 | 6.12 | CNT_CODE, MEM_EXECUTE, MEM_READ |
| `.data` | `0x1c000` | 8,368 | 1,536 | 0.69 | CNT_INITIALIZED_DATA, MEM_READ, MEM_WRITE |
| `.pdata` | `0x1f000` | 4,332 | 4,608 | 4.85 | CNT_INITIALIZED_DATA, MEM_READ |
| `.rsrc` | `0x21000` | 46,624 | 47,104 | 6.16 | CNT_INITIALIZED_DATA, MEM_READ |
| `.reloc` | `0x2d000` | 2,018 | 2,048 | 4.29 | CNT_INITIALIZED_DATA, MEM_DISCARDABLE, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **9**; imported functions: **210**; delay-loaded DLLs: **0**; exported symbols: **2**.

| Family | DLLs | Functions |
|---|---|---|
| COM/OLE | OLEAUT32.dll, ole32.dll | 28 |
| Core system | ADVAPI32.dll, KERNEL32.dll, msvcrt.dll | 104 |
| Windows shell/UI | GDI32.dll, SHLWAPI.dll, USER32.dll, gdiplus.dll | 78 |

Exports: `Microsoft_WDF_UMDF_Version`.

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmpsideshowgadget_exe/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **26** (raw directory walk; pefile cross-check agrees); message strings decoded: 0.
* Types: MUI×1, RT_GROUP_ICON×1, RT_ICON×9, RT_MANIFEST×1, RT_RCDATA×13, RT_VERSION×1.

* `MUI` payload (1, en-US): language tag `en-US`, declares localised types [6, 16] — matches sibling `.mui` file: True.
* `RT_MANIFEST` 1: `<?xml version="1.0" encoding="UTF-8" standalone="yes"?>`.
Per-entry detail: `analysis/report/resources/wmpsideshowgadget_exe/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 2482 ASCII, 88 UTF-16LE (1193 unique).
* GUIDs 1, URLs 0, UPnP URNs 2, registry paths 0, referenced modules 12.

* UPnP/DLNA identifiers: `<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">`, `<trustInfo xmlns="urn:schemas-microsoft-com:asm.v3">`
* GUID literals: `{6BF52A52-394A-11d3-B153-00C04F79FAA6}`

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmpsideshowgadget_exe.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `complete`.
* CFG: 2001 functions, 562 call edges, built in 3.93s; selection rule: forced (entry+exports), then size desc, min_blocks=2, cap=60.
* Emitted pseudocode: 60 functions (60 decompiled successfully).

| Address | Function | Blocks | Size | File |
|---|---|---|---|---|
| `0x10000f84c` | `sub_10000f84c` | 112 | 1532 | [`0002_10000f84c_sub_10000f84c.c`](decompiled/0002_10000f84c_sub_10000f84c.c) |
| `0x100016564` | `sub_100016564` | 46 | 604 | [`0003_100016564_sub_100016564.c`](decompiled/0003_100016564_sub_100016564.c) |
| `0x1000153b0` | `sub_1000153b0` | 41 | 441 | [`0004_1000153b0_sub_1000153b0.c`](decompiled/0004_1000153b0_sub_1000153b0.c) |
| `0x10000f66c` | `sub_10000f66c` | 39 | 446 | [`0005_10000f66c_sub_10000f66c.c`](decompiled/0005_10000f66c_sub_10000f66c.c) |
| `0x100018c03` | `sub_100018c03` | 36 | 378 | [`0006_100018c03_sub_100018c03.c`](decompiled/0006_100018c03_sub_100018c03.c) |
| `0x100007760` | `sub_100007760` | 32 | 400 | [`0007_100007760_sub_100007760.c`](decompiled/0007_100007760_sub_100007760.c) |
| `0x100010380` | `sub_100010380` | 28 | 266 | [`0008_100010380_sub_100010380.c`](decompiled/0008_100010380_sub_100010380.c) |
| `0x10000d3ec` | `sub_10000d3ec` | 27 | 266 | [`0009_10000d3ec_sub_10000d3ec.c`](decompiled/0009_10000d3ec_sub_10000d3ec.c) |
| `0x100014842` | `sub_100014842` | 27 | 241 | [`0010_100014842_sub_100014842.c`](decompiled/0010_100014842_sub_100014842.c) |
| `0x10000cdf8` | `sub_10000cdf8` | 26 | 256 | [`0011_10000cdf8_sub_10000cdf8.c`](decompiled/0011_10000cdf8_sub_10000cdf8.c) |
| `0x1000155ec` | `sub_1000155ec` | 25 | 368 | [`0012_1000155ec_sub_1000155ec.c`](decompiled/0012_1000155ec_sub_1000155ec.c) |
| `0x100010d94` | `sub_100010d94` | 25 | 361 | [`0013_100010d94_sub_100010d94.c`](decompiled/0013_100010d94_sub_100010d94.c) |

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

## 8. Reconstruction and validation

* Reconstruction harness: `recon/` (generated by `analysis/tools/recon_build.py`) — `module_facts.h` (sections, resource RVAs, image digest), `guids.h`, `enums.h`, `interfaces.h`, `compile_check.c`, plus `CMakeLists.txt`.
* Last build validation: target `wmp_recon_wmpsideshowgadget_exe` — compiled and all runtime checks passed.
* The harness re-derives this module's recorded digests and GUIDs from the original file at run time; see `analysis/report/validation.md` §3.

`analysis/report/disasm.md` records the instruction-level cross-check (capstone vs GNU objdump through REA) for this module.

## 9. Interpretation and open items

* Role **[inferred]**: Windows Media Player Gadget for Windows SideShow capable devices (internal name `WMPSideShowGadget`)
* [unresolved] 1941 of 2001 CFG functions were not selected/decompiled (cap forced (entry+exports), then size desc, min_blocks=2, cap=60)

