# `bin/wmprph.exe` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/wmprph.exe`; size 75,776 bytes.
* SHA-256: `395fce3d66ab1ed9a4fb2238172eaefc5cf78fc7a8b34c30686d638d16d9efca`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_GUI`, linker 9.0, image base `0x100000000`, entry point RVA `0xed00`.
* Built: 2009-07-14 00:23:52Z (PE TimeDateStamp 1247531032).
* PDB: `wmprph.pdb` (age 1); overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP, TERMINAL_SERVER_AWARE.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Windows Media Player Rich Preview Handler`
* FileVersion: `12.0.7600.16385 (win7_rtm.090713-1255)`
* ProductName: `Microsoft® Windows® Operating System`
* ProductVersion: `12.0.7600.16385`
* InternalName: `wmprph.exe`
* OriginalFilename: `wmprph.exe`
* LegalCopyright: `© Microsoft Corporation. All rights reserved.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.text` | `0x1000` | 65,406 | 65,536 | 6.18 | CNT_CODE, MEM_EXECUTE, MEM_READ |
| `.data` | `0x11000` | 2,920 | 1,024 | 0.97 | CNT_INITIALIZED_DATA, MEM_READ, MEM_WRITE |
| `.pdata` | `0x12000` | 2,424 | 2,560 | 4.31 | CNT_INITIALIZED_DATA, MEM_READ |
| `.rsrc` | `0x13000` | 4,544 | 4,608 | 4.55 | CNT_INITIALIZED_DATA, MEM_READ |
| `.reloc` | `0x15000` | 892 | 1,024 | 4.30 | CNT_INITIALIZED_DATA, MEM_DISCARDABLE, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **9**; imported functions: **194**; delay-loaded DLLs: **0**; exported symbols: **0**.

| Family | DLLs | Functions |
|---|---|---|
| COM/OLE | OLEAUT32.dll, ole32.dll | 25 |
| Core system | ADVAPI32.dll, KERNEL32.dll, msvcrt.dll, ntdll.dll | 106 |
| Windows shell/UI | GDI32.dll, SHELL32.dll, USER32.dll | 63 |

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmprph_exe/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **4** (raw directory walk; pefile cross-check agrees); message strings decoded: 0.
* Types: REGISTRY×1, RT_MANIFEST×1, RT_VERSION×1, TYPELIB×1.

* `REGISTRY` 101 (380 B): ATL registrar script (RGS), 14 statement lines, GUIDs ['{031EE060-67BC-460D-8847-E4A7C5E45A27}'] → `analysis/report/resources/wmprph_exe/REGISTRY/101_en-US.rgs`.
* `TYPELIB` 1: MSFT type library, version field 0x00010002, LCID 0x0409, 1 type records → decoded into [`typelib/`](typelib/README.md).
* `RT_MANIFEST` 1: `<?xml version="1.0" encoding="UTF-8" standalone="yes"?>`.
Per-entry detail: `analysis/report/resources/wmprph_exe/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 1236 ASCII, 72 UTF-16LE (806 unique).
* GUIDs 1, URLs 0, UPnP URNs 2, registry paths 0, referenced modules 14.

* UPnP/DLNA identifiers: `<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">`, `<trustInfo xmlns="urn:schemas-microsoft-com:asm.v3">`
* GUID literals: `{6BF52A52-394A-11d3-B153-00C04F79FAA6}`

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmprph_exe.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `complete`.
* CFG: 1098 functions, 253 call edges, built in 2.84s; selection rule: forced (entry+exports), then size desc, min_blocks=2, cap=60.
* Emitted pseudocode: 60 functions (60 decompiled successfully).

| Address | Function | Blocks | Size | File |
|---|---|---|---|---|
| `0x100003c38` | `sub_100003c38` | 115 | 1533 | [`0002_100003c38_sub_100003c38.c`](decompiled/0002_100003c38_sub_100003c38.c) |
| `0x10000bde9` | `sub_10000bde9` | 42 | 504 | [`0003_10000bde9_sub_10000bde9.c`](decompiled/0003_10000bde9_sub_10000bde9.c) |
| `0x10000700c` | `sub_10000700c` | 38 | 452 | [`0004_10000700c_sub_10000700c.c`](decompiled/0004_10000700c_sub_10000700c.c) |
| `0x10000ea1d` | `sub_10000ea1d` | 38 | 410 | [`0005_10000ea1d_sub_10000ea1d.c`](decompiled/0005_10000ea1d_sub_10000ea1d.c) |
| `0x100002e99` | `sub_100002e99` | 29 | 190 | [`0006_100002e99_sub_100002e99.c`](decompiled/0006_100002e99_sub_100002e99.c) |
| `0x10000e8a3` | `sub_10000e8a3` | 29 | 179 | [`0007_10000e8a3_sub_10000e8a3.c`](decompiled/0007_10000e8a3_sub_10000e8a3.c) |
| `0x100007f30` | `sub_100007f30` | 28 | 386 | [`0008_100007f30_sub_100007f30.c`](decompiled/0008_100007f30_sub_100007f30.c) |
| `0x10000e0e8` | `sub_10000e0e8` | 27 | 241 | [`0009_10000e0e8_sub_10000e0e8.c`](decompiled/0009_10000e0e8_sub_10000e0e8.c) |
| `0x1000069e0` | `sub_1000069e0` | 27 | 235 | [`0010_1000069e0_sub_1000069e0.c`](decompiled/0010_1000069e0_sub_1000069e0.c) |
| `0x1000043c0` | `sub_1000043c0` | 25 | 372 | [`0011_1000043c0_sub_1000043c0.c`](decompiled/0011_1000043c0_sub_1000043c0.c) |
| `0x100003b32` | `sub_100003b32` | 25 | 223 | [`0012_100003b32_sub_100003b32.c`](decompiled/0012_100003b32_sub_100003b32.c) |
| `0x10000b239` | `sub_10000b239` | 25 | 210 | [`0013_10000b239_sub_10000b239.c`](decompiled/0013_10000b239_sub_10000b239.c) |

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

## 7. COM surface **[verified]**

* Type library `{FA258721-CF24-45D7-A9CB-80047D7FEC35}`: DISPATCH `IWMPRichPreviewLauncher` `{F826A914-4075-4672-8312-5F91CDF3C69E}` (4 methods)
  * 2/2 recovered GUIDs present as 16-byte constants in wmprph.exe
* Registrar script (resource 101, en-US): `analysis/report/resources/wmprph_exe/REGISTRY/101_en-US.rgs` with GUIDs ['{031EE060-67BC-460D-8847-E4A7C5E45A27}']

## 8. Reconstruction and validation

* Reconstruction harness: `recon/` (generated by `analysis/tools/recon_build.py`) — `module_facts.h` (sections, resource RVAs, image digest), `guids.h`, `enums.h`, `interfaces.h`, `compile_check.c`, plus `CMakeLists.txt`.
* Last build validation: target `wmp_recon_wmprph_exe` — compiled and all runtime checks passed.
* The harness re-derives this module's recorded digests and GUIDs from the original file at run time; see `analysis/report/validation.md` §3.

`analysis/report/disasm.md` records the instruction-level cross-check (capstone vs GNU objdump through REA) for this module.

## 9. Interpretation and open items

* Role **[inferred]**: Windows Media Player Rich Preview Handler (internal name `wmprph.exe`)
* [unresolved] 1038 of 1098 CFG functions were not selected/decompiled (cap forced (entry+exports), then size desc, min_blocks=2, cap=60)

