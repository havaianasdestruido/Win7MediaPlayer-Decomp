# `bin/wmpshare.exe` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/wmpshare.exe`; size 102,912 bytes.
* SHA-256: `ab95a6aa118e853d71b326b68a409f24a6276f47e34ca9e8049f7d49b4825a51`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_GUI`, linker 9.0, image base `0x100000000`, entry point RVA `0x15e4`.
* Built: 2019-06-12 14:50:54Z (PE TimeDateStamp 1560351054).
* PDB: `wmpshare.pdb` (age 1); overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP, TERMINAL_SERVER_AWARE.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Windows Media Player Folder Sharing Executable`
* FileVersion: `12.0.7601.24499 (win7sp1_ldr.190612-0600)`
* ProductName: `Microsoft® Windows® Operating System`
* ProductVersion: `12.0.7601.24499`
* InternalName: `wmpshare.exe`
* OriginalFilename: `wmpshare.exe`
* LegalCopyright: `© Microsoft Corporation. All rights reserved.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.text` | `0x1000` | 5,068 | 5,120 | 5.82 | CNT_CODE, MEM_EXECUTE, MEM_READ |
| `.data` | `0x3000` | 1,912 | 512 | 0.52 | CNT_INITIALIZED_DATA, MEM_READ, MEM_WRITE |
| `.pdata` | `0x4000` | 192 | 512 | 1.64 | CNT_INITIALIZED_DATA, MEM_READ |
| `.rsrc` | `0x5000` | 94,736 | 95,232 | 6.45 | CNT_INITIALIZED_DATA, MEM_READ |
| `.reloc` | `0x1d000` | 156 | 512 | 0.33 | CNT_INITIALIZED_DATA, MEM_DISCARDABLE, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **2**; imported functions: **38**; delay-loaded DLLs: **1**; exported symbols: **0**.

| Family | DLLs | Functions |
|---|---|---|
| Core system | KERNEL32.dll, msvcrt.dll | 38 |

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmpshare_exe/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **19** (raw directory walk; pefile cross-check agrees); message strings decoded: 0.
* Types: RT_GROUP_ICON×1, RT_ICON×16, RT_MANIFEST×1, RT_VERSION×1.

* `RT_MANIFEST` 1: `<?xml version="1.0" encoding="UTF-8" standalone="yes"?>`.
Per-entry detail: `analysis/report/resources/wmpshare_exe/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 726 ASCII, 25 UTF-16LE (743 unique).
* GUIDs 0, URLs 0, UPnP URNs 2, registry paths 0, referenced modules 5.

* UPnP/DLNA identifiers: `  <trustInfo xmlns="urn:schemas-microsoft-com:asm.v3">`, `<assembly xmlns="urn:schemas-microsoft-com:asm.v1"`

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmpshare_exe.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `complete`.
* CFG: 76 functions, 9 call edges, built in 0.21s; selection rule: forced (entry+exports), then size desc, min_blocks=2, cap=60.
* Emitted pseudocode: 29 functions (29 decompiled successfully).

| Address | Function | Blocks | Size | File |
|---|---|---|---|---|
| `0x100001303` | `sub_100001303` | 36 | 378 | [`0002_100001303_sub_100001303.c`](decompiled/0002_100001303_sub_100001303.c) |
| `0x100001ad4` | `sub_100001ad4` | 26 | 450 | [`0003_100001ad4_sub_100001ad4.c`](decompiled/0003_100001ad4_sub_100001ad4.c) |
| `0x10000150c` | `sub_10000150c` | 11 | 117 | [`0004_10000150c_sub_10000150c.c`](decompiled/0004_10000150c_sub_10000150c.c) |
| `0x1000017b8` | `sub_1000017b8` | 8 | 79 | [`0005_1000017b8_sub_1000017b8.c`](decompiled/0005_1000017b8_sub_1000017b8.c) |
| `0x100001638` | `sub_100001638` | 8 | 65 | [`0006_100001638_sub_100001638.c`](decompiled/0006_100001638_sub_100001638.c) |
| `0x100001824` | `sub_100001824` | 8 | 53 | [`0007_100001824_sub_100001824.c`](decompiled/0007_100001824_sub_100001824.c) |
| `0x100001700` | `sub_100001700` | 6 | 70 | [`0008_100001700_sub_100001700.c`](decompiled/0008_100001700_sub_100001700.c) |
| `0x10000174c` | `sub_10000174c` | 6 | 63 | [`0009_10000174c_sub_10000174c.c`](decompiled/0009_10000174c_sub_10000174c.c) |
| `0x100001c04` | `sub_100001c04` | 6 | 56 | [`0010_100001c04_sub_100001c04.c`](decompiled/0010_100001c04_sub_100001c04.c) |
| `0x100001e37` | `sub_100001e37` | 5 | 66 | [`0011_100001e37_sub_100001e37.c`](decompiled/0011_100001e37_sub_100001e37.c) |
| `0x1000016c0` | `sub_1000016c0` | 5 | 47 | [`0012_1000016c0_sub_1000016c0.c`](decompiled/0012_1000016c0_sub_1000016c0.c) |
| `0x10000145e` | `sub_10000145e` | 5 | 40 | [`0013_10000145e_sub_10000145e.c`](decompiled/0013_10000145e_sub_10000145e.c) |

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

## 8. Interpretation and open items

* Role **[inferred]**: Windows Media Player Folder Sharing Executable (internal name `wmpshare.exe`)
* [unresolved] 47 of 76 CFG functions were not selected/decompiled (cap forced (entry+exports), then size desc, min_blocks=2, cap=60)

