# `bin/wmpconfig.exe` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/wmpconfig.exe`; size 102,400 bytes.
* SHA-256: `0f1726e36b8a016069b7d9eef811f5ca3799bfed355423f70f51947e67d2ef4f`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_GUI`, linker 9.0, image base `0x100000000`, entry point RVA `0x15cc`.
* Built: 2019-06-12 14:50:58Z (PE TimeDateStamp 1560351058).
* PDB: `wmpconfig.pdb` (age 1); overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP, TERMINAL_SERVER_AWARE.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Windows Media Player Configuration`
* FileVersion: `12.0.7601.24499 (win7sp1_ldr.190612-0600)`
* ProductName: `Microsoft® Windows® Operating System`
* ProductVersion: `12.0.7601.24499`
* InternalName: `wmpconfig`
* OriginalFilename: `wmpconfig.exe`
* LegalCopyright: `© Microsoft Corporation. All rights reserved.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.text` | `0x1000` | 3,888 | 4,096 | 5.59 | CNT_CODE, MEM_EXECUTE, MEM_READ |
| `.data` | `0x2000` | 1,792 | 512 | 0.42 | CNT_INITIALIZED_DATA, MEM_READ, MEM_WRITE |
| `.pdata` | `0x3000` | 168 | 512 | 1.44 | CNT_INITIALIZED_DATA, MEM_READ |
| `.rsrc` | `0x4000` | 95,576 | 95,744 | 6.48 | CNT_INITIALIZED_DATA, MEM_READ |
| `.reloc` | `0x1c000` | 120 | 512 | 0.22 | CNT_INITIALIZED_DATA, MEM_DISCARDABLE, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **3**; imported functions: **34**; delay-loaded DLLs: **0**; exported symbols: **0**.

| Family | DLLs | Functions |
|---|---|---|
| COM/OLE | ole32.dll | 2 |
| Core system | KERNEL32.dll, msvcrt.dll | 32 |

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmpconfig_exe/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **20** (raw directory walk; pefile cross-check agrees); message strings decoded: 0.
* Types: RT_GROUP_ICON×1, RT_ICON×16, RT_MANIFEST×2, RT_VERSION×1.

* `RT_MANIFEST` 1: `<?xml version='1.0' encoding='utf-8' standalone='yes'?>`.
* `RT_MANIFEST` 99: `<?xml version='1.0' encoding='utf-8' standalone='yes'?>`.
Per-entry detail: `analysis/report/resources/wmpconfig_exe/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 722 ASCII, 25 UTF-16LE (722 unique).
* GUIDs 0, URLs 0, UPnP URNs 2, registry paths 0, referenced modules 5.

* UPnP/DLNA identifiers: `    xmlns="urn:schemas-microsoft-com:asm.v1"`, `  <trustInfo xmlns="urn:schemas-microsoft-com:asm.v3">`

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmpconfig_exe.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `complete`.
* CFG: 58 functions, 8 call edges, built in 0.18s; selection rule: forced (entry+exports), then size desc, min_blocks=2, cap=60.
* Emitted pseudocode: 19 functions (19 decompiled successfully).

| Address | Function | Blocks | Size | File |
|---|---|---|---|---|
| `0x1000012e9` | `sub_1000012e9` | 38 | 410 | [`0002_1000012e9_sub_1000012e9.c`](decompiled/0002_1000012e9_sub_1000012e9.c) |
| `0x1000014f4` | `sub_1000014f4` | 11 | 117 | [`0003_1000014f4_sub_1000014f4.c`](decompiled/0003_1000014f4_sub_1000014f4.c) |
| `0x100001798` | `sub_100001798` | 8 | 79 | [`0004_100001798_sub_100001798.c`](decompiled/0004_100001798_sub_100001798.c) |
| `0x100001618` | `sub_100001618` | 8 | 65 | [`0005_100001618_sub_100001618.c`](decompiled/0005_100001618_sub_100001618.c) |
| `0x100001804` | `sub_100001804` | 8 | 53 | [`0006_100001804_sub_100001804.c`](decompiled/0006_100001804_sub_100001804.c) |
| `0x1000016e0` | `sub_1000016e0` | 6 | 70 | [`0007_1000016e0_sub_1000016e0.c`](decompiled/0007_1000016e0_sub_1000016e0.c) |
| `0x10000172c` | `sub_10000172c` | 6 | 63 | [`0008_10000172c_sub_10000172c.c`](decompiled/0008_10000172c_sub_10000172c.c) |
| `0x100001ac5` | `sub_100001ac5` | 5 | 48 | [`0009_100001ac5_sub_100001ac5.c`](decompiled/0009_100001ac5_sub_100001ac5.c) |
| `0x1000016a0` | `sub_1000016a0` | 5 | 47 | [`0010_1000016a0_sub_1000016a0.c`](decompiled/0010_1000016a0_sub_1000016a0.c) |
| `0x10000145a` | `sub_10000145a` | 5 | 38 | [`0011_10000145a_sub_10000145a.c`](decompiled/0011_10000145a_sub_10000145a.c) |
| `0x1000015f0` | `sub_1000015f0` | 5 | 32 | [`0012_1000015f0_sub_1000015f0.c`](decompiled/0012_1000015f0_sub_1000015f0.c) |
| `0x100001571` | `sub_100001571` | 4 | 82 | [`0013_100001571_sub_100001571.c`](decompiled/0013_100001571_sub_100001571.c) |

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

## 8. Interpretation and open items

* Role **[inferred]**: Windows Media Player Configuration (internal name `wmpconfig`)
* [unresolved] 39 of 58 CFG functions were not selected/decompiled (cap forced (entry+exports), then size desc, min_blocks=2, cap=60)

