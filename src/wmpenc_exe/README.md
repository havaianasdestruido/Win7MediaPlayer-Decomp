# `bin/wmpenc.exe` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/wmpenc.exe`; size 27,648 bytes.
* SHA-256: `b8b174ae012a8a25a9d706f7f169e7a2553ab8ffe0ccef2beb34fe803ec0634a`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_GUI`, linker 9.0, image base `0x100000000`, entry point RVA `0x5120`.
* Built: 2009-07-14 00:23:47Z (PE TimeDateStamp 1247531027).
* PDB: `wmpenc.pdb` (age 1); overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP, TERMINAL_SERVER_AWARE.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Windows Media Player Encoder Helper`
* FileVersion: `12.0.7600.16385 (win7_rtm.090713-1255)`
* ProductName: `Microsoft® Windows® Operating System`
* ProductVersion: `12.0.7600.16385`
* InternalName: `wmpenc.exe`
* OriginalFilename: `wmpenc.exe`
* LegalCopyright: `© Microsoft Corporation. All rights reserved.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.text` | `0x1000` | 21,922 | 22,016 | 6.21 | CNT_CODE, MEM_EXECUTE, MEM_READ |
| `.data` | `0x7000` | 2,320 | 512 | 1.15 | CNT_INITIALIZED_DATA, MEM_READ, MEM_WRITE |
| `.pdata` | `0x8000` | 624 | 1,024 | 2.78 | CNT_INITIALIZED_DATA, MEM_READ |
| `.rsrc` | `0x9000` | 2,488 | 2,560 | 4.73 | CNT_INITIALIZED_DATA, MEM_READ |
| `.reloc` | `0xa000` | 202 | 512 | 1.58 | CNT_INITIALIZED_DATA, MEM_DISCARDABLE, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **6**; imported functions: **96**; delay-loaded DLLs: **0**; exported symbols: **0**.

| Family | DLLs | Functions |
|---|---|---|
| COM/OLE | OLEAUT32.dll, ole32.dll | 14 |
| Core system | ADVAPI32.dll, KERNEL32.dll, msvcrt.dll | 77 |
| Windows shell/UI | USER32.dll | 5 |

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmpenc_exe/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **3** (raw directory walk; pefile cross-check agrees); message strings decoded: 0.
* Types: REGISTRY×1, RT_MANIFEST×1, RT_VERSION×1.

* `REGISTRY` 100 (586 B): ATL registrar script (RGS), 21 statement lines, GUIDs ['{A137EF16-7BAA-4D2D-8BFD-7FCE6D5A1D57}', '{A9D431C2-6D56-4727-9690-ADBE66B9184A}', '{AEE3E4A8-EF01-4024-A0F1-809D9B096E14}'] → `analysis/report/resources/wmpenc_exe/REGISTRY/100_en-US.rgs`.
* `RT_MANIFEST` 1: `<?xml version="1.0" encoding="UTF-8" standalone="yes"?>`.
Per-entry detail: `analysis/report/resources/wmpenc_exe/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 443 ASCII, 51 UTF-16LE (391 unique).
* GUIDs 0, URLs 0, UPnP URNs 2, registry paths 0, referenced modules 11.

* UPnP/DLNA identifiers: `<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">`, `<trustInfo xmlns="urn:schemas-microsoft-com:asm.v3">`

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmpenc_exe.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `complete`.
* CFG: 390 functions, 79 call edges, built in 0.84s; selection rule: forced (entry+exports), then size desc, min_blocks=2, cap=60.
* Emitted pseudocode: 60 functions (60 decompiled successfully).

| Address | Function | Blocks | Size | File |
|---|---|---|---|---|
| `0x100003221` | `sub_100003221` | 42 | 504 | [`0002_100003221_sub_100003221.c`](decompiled/0002_100003221_sub_100003221.c) |
| `0x100004e3d` | `sub_100004e3d` | 38 | 410 | [`0003_100004e3d_sub_100004e3d.c`](decompiled/0003_100004e3d_sub_100004e3d.c) |
| `0x100002671` | `sub_100002671` | 25 | 210 | [`0004_100002671_sub_100002671.c`](decompiled/0004_100002671_sub_100002671.c) |
| `0x100003116` | `sub_100003116` | 24 | 216 | [`0005_100003116_sub_100003116.c`](decompiled/0005_100003116_sub_100003116.c) |
| `0x100004318` | `sub_100004318` | 23 | 264 | [`0006_100004318_sub_100004318.c`](decompiled/0006_100004318_sub_100004318.c) |
| `0x1000028fc` | `sub_1000028fc` | 23 | 234 | [`0007_1000028fc_sub_1000028fc.c`](decompiled/0007_1000028fc_sub_1000028fc.c) |
| `0x100002f57` | `sub_100002f57` | 22 | 205 | [`0008_100002f57_sub_100002f57.c`](decompiled/0008_100002f57_sub_100002f57.c) |
| `0x1000021fa` | `sub_1000021fa` | 18 | 177 | [`0009_1000021fa_sub_1000021fa.c`](decompiled/0009_1000021fa_sub_1000021fa.c) |
| `0x1000023c0` | `sub_1000023c0` | 18 | 172 | [`0010_1000023c0_sub_1000023c0.c`](decompiled/0010_1000023c0_sub_1000023c0.c) |
| `0x100002bad` | `sub_100002bad` | 17 | 136 | [`0011_100002bad_sub_100002bad.c`](decompiled/0011_100002bad_sub_100002bad.c) |
| `0x100001cb0` | `sub_100001cb0` | 15 | 166 | [`0012_100001cb0_sub_100001cb0.c`](decompiled/0012_100001cb0_sub_100001cb0.c) |
| `0x100002757` | `sub_100002757` | 15 | 141 | [`0013_100002757_sub_100002757.c`](decompiled/0013_100002757_sub_100002757.c) |

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

## 7. COM surface **[verified]**

* Registrar script (resource 100, en-US): `analysis/report/resources/wmpenc_exe/REGISTRY/100_en-US.rgs` with GUIDs ['{A137EF16-7BAA-4D2D-8BFD-7FCE6D5A1D57}', '{A9D431C2-6D56-4727-9690-ADBE66B9184A}', '{AEE3E4A8-EF01-4024-A0F1-809D9B096E14}']

## 8. Reconstruction and validation

* Reconstruction harness: `recon/` (generated by `analysis/tools/recon_build.py`) — `module_facts.h` (sections, resource RVAs, image digest), `guids.h`, `enums.h`, `interfaces.h`, `compile_check.c`, plus `CMakeLists.txt`.
* Last build validation: target `wmp_recon_wmpenc_exe` — compiled and all runtime checks passed.
* The harness re-derives this module's recorded digests and GUIDs from the original file at run time; see `analysis/report/validation.md` §3.

`analysis/report/disasm.md` records the instruction-level cross-check (capstone vs GNU objdump through REA) for this module.

## 9. Interpretation and open items

* Role **[inferred]**: Windows Media Player Encoder Helper (internal name `wmpenc.exe`)
* [unresolved] 330 of 390 CFG functions were not selected/decompiled (cap forced (entry+exports), then size desc, min_blocks=2, cap=60)

