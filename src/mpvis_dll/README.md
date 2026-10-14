# `bin/mpvis.DLL` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/mpvis.DLL`; size 293,376 bytes.
* SHA-256: `5b1cf8de17dc039349e1af0bc0d728e3de3c0a96d9c50e81fc909b8ceb4927e0`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_GUI`, linker 9.0, image base `0x7ff33c90000`, entry point RVA `0x30b00`.
* Built: 2009-07-14 01:29:33Z (PE TimeDateStamp 1247534973).
* PDB: `mpvis.pdb` (age 1); overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Windows Media Player Visualization`
* FileVersion: `12.0.7600.16385 (win7_rtm.090713-1255)`
* ProductName: `Microsoft® Windows® Operating System`
* ProductVersion: `12.0.7600.16385`
* InternalName: `mpvis.dll`
* OriginalFilename: `mpvis.dll`
* LegalCopyright: `© Microsoft Corporation. All rights reserved.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.text` | `0x1000` | 214,520 | 214,528 | 5.71 | CNT_CODE, MEM_EXECUTE, MEM_READ |
| `.data` | `0x36000` | 45,864 | 34,816 | 3.56 | CNT_INITIALIZED_DATA, MEM_READ, MEM_WRITE |
| `.pdata` | `0x42000` | 5,964 | 6,144 | 5.42 | CNT_INITIALIZED_DATA, MEM_READ |
| `.rsrc` | `0x44000` | 29,568 | 29,696 | 2.31 | CNT_INITIALIZED_DATA, MEM_READ |
| `.reloc` | `0x4c000` | 6,798 | 7,168 | 4.38 | CNT_INITIALIZED_DATA, MEM_DISCARDABLE, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **10**; imported functions: **186**; delay-loaded DLLs: **0**; exported symbols: **6**.

| Family | DLLs | Functions |
|---|---|---|
| COM/OLE | OLEAUT32.dll, ole32.dll | 12 |
| Core system | ADVAPI32.dll, KERNEL32.dll, msvcrt.dll, ntdll.dll | 106 |
| Windows shell/UI | GDI32.dll, USER32.dll, gdiplus.dll | 65 |
| other | WINMM.dll | 3 |

Exports: `DllCanUnloadNow`, `DllGetClassObject`, `DllMain`, `DllRegisterServer`, `DllUnregisterServer`.

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/mpvis_dll/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **9** (raw directory walk; pefile cross-check agrees); message strings decoded: 0.
* Types: MUI×1, REGISTRY×1, RT_BITMAP×5, RT_VERSION×1, TYPELIB×1.

* `MUI` payload (1, en-US): language tag `en-US`, declares localised types [6, 16] — matches sibling `.mui` file: None.
* `REGISTRY` 101 (1208 B): ATL registrar script (RGS), 43 statement lines, GUIDs ['{0AA02E8D-F851-4CB0-9F64-BBA9BE7A983D}', '{C58F1580-0DF3-401C-93B1-2D9DDA61CF04}'] → `analysis/report/resources/mpvis_dll/REGISTRY/101_en-US.rgs`.
* `TYPELIB` 1: MSFT type library, version field 0x00010002, LCID 0x0409, 2 type records → decoded into [`typelib/`](typelib/README.md).
Per-entry detail: `analysis/report/resources/mpvis_dll/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 2651 ASCII, 280 UTF-16LE (1872 unique).
* GUIDs 0, URLs 0, UPnP URNs 0, registry paths 1, referenced modules 20.

* Registry paths: `Software\Microsoft\Direct3D`

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/mpvis_dll.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `complete`.
* CFG: 3695 functions, 0 call edges, built in 13.92s; selection rule: forced (entry+exports), then size desc, min_blocks=2, cap=60.
* Emitted pseudocode: 60 functions (60 decompiled successfully).

| Address | Function | Blocks | Size | File |
|---|---|---|---|---|
| `0x7ff33ca5bbf` | `sub_7ff33ca5bbf` | 114 | 536 | [`0007_7ff33ca5bbf_sub_7ff33ca5bbf.c`](decompiled/0007_7ff33ca5bbf_sub_7ff33ca5bbf.c) |
| `0x7ff33cb748c` | `sub_7ff33cb748c` | 68 | 561 | [`0008_7ff33cb748c_sub_7ff33cb748c.c`](decompiled/0008_7ff33cb748c_sub_7ff33cb748c.c) |
| `0x7ff33caf2b0` | `sub_7ff33caf2b0` | 61 | 499 | [`0009_7ff33caf2b0_sub_7ff33caf2b0.c`](decompiled/0009_7ff33caf2b0_sub_7ff33caf2b0.c) |
| `0x7ff33cad12d` | `sub_7ff33cad12d` | 50 | 619 | [`0010_7ff33cad12d_sub_7ff33cad12d.c`](decompiled/0010_7ff33cad12d_sub_7ff33cad12d.c) |
| `0x7ff33ca9ce4` | `sub_7ff33ca9ce4` | 41 | 517 | [`0011_7ff33ca9ce4_sub_7ff33ca9ce4.c`](decompiled/0011_7ff33ca9ce4_sub_7ff33ca9ce4.c) |
| `0x7ff33cb2d84` | `sub_7ff33cb2d84` | 35 | 524 | [`0012_7ff33cb2d84_sub_7ff33cb2d84.c`](decompiled/0012_7ff33cb2d84_sub_7ff33cb2d84.c) |
| `0x7ff33cac78c` | `sub_7ff33cac78c` | 34 | 376 | [`0013_7ff33cac78c_sub_7ff33cac78c.c`](decompiled/0013_7ff33cac78c_sub_7ff33cac78c.c) |
| `0x7ff33cc0734` | `sub_7ff33cc0734` | 34 | 373 | [`0014_7ff33cc0734_sub_7ff33cc0734.c`](decompiled/0014_7ff33cc0734_sub_7ff33cc0734.c) |
| `0x7ff33cb6bbc` | `sub_7ff33cb6bbc` | 34 | 323 | [`0015_7ff33cb6bbc_sub_7ff33cb6bbc.c`](decompiled/0015_7ff33cb6bbc_sub_7ff33cb6bbc.c) |
| `0x7ff33c92e27` | `sub_7ff33c92e27` | 33 | 3145 | [`0016_7ff33c92e27_sub_7ff33c92e27.c`](decompiled/0016_7ff33c92e27_sub_7ff33c92e27.c) |
| `0x7ff33c91d0e` | `sub_7ff33c91d0e` | 32 | 2131 | [`0017_7ff33c91d0e_sub_7ff33c91d0e.c`](decompiled/0017_7ff33c91d0e_sub_7ff33c91d0e.c) |
| `0x7ff33caf614` | `sub_7ff33caf614` | 32 | 633 | [`0018_7ff33caf614_sub_7ff33caf614.c`](decompiled/0018_7ff33caf614_sub_7ff33caf614.c) |

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

## 7. COM surface **[verified]**

* COM entry points: `DllCanUnloadNow`, `DllGetClassObject`, `DllMain`, `DllRegisterServer`, `DllUnregisterServer`.
* Type library `{C58F1580-0DF3-401C-93B1-2D9DDA61CF04}`: COCLASS `ToleranceVis` `{0AA02E8D-F851-4CB0-9F64-BBA9BE7A983D}` (0 methods), DISPATCH `IToleranceVis` `{9A85D909-C64A-4608-8DC4-76254D869553}` (10 methods)
  * 3/3 recovered GUIDs present as 16-byte constants in mpvis.DLL
* Registrar script (resource 101, en-US): `analysis/report/resources/mpvis_dll/REGISTRY/101_en-US.rgs` with GUIDs ['{0AA02E8D-F851-4CB0-9F64-BBA9BE7A983D}', '{C58F1580-0DF3-401C-93B1-2D9DDA61CF04}']

## 8. Reconstruction and validation

* Reconstruction harness: `recon/` (generated by `analysis/tools/recon_build.py`) — `module_facts.h` (sections, resource RVAs, image digest), `guids.h`, `enums.h`, `interfaces.h`, `compile_check.c`, plus `CMakeLists.txt`.
* Last build validation: target `wmp_recon_mpvis_dll` — compiled and all runtime checks passed.
* The harness re-derives this module's recorded digests and GUIDs from the original file at run time; see `analysis/report/validation.md` §3.

`analysis/report/disasm.md` records the instruction-level cross-check (capstone vs GNU objdump through REA) for this module.

## 9. Interpretation and open items

* Role **[inferred]**: Windows Media Player Visualization (internal name `mpvis.dll`)
* [unresolved] 3635 of 3695 CFG functions were not selected/decompiled (cap forced (entry+exports), then size desc, min_blocks=2, cap=60)
* [unresolved] `MUI` payload type-list not recovered (resource 1)
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded

