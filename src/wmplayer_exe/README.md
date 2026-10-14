# `bin/wmplayer.exe` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/wmplayer.exe`; size 167,424 bytes.
* SHA-256: `883d9616dfc7586fa88c58013f70e055df9328f3cfc3ef39898c15c6970fb0db`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_GUI`, linker 9.0, image base `0x100000000`, entry point RVA `0x1c74`.
* Built: 2019-06-12 14:50:55Z (PE TimeDateStamp 1560351055).
* PDB: `wmplayer.pdb` (age 1); overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP, TERMINAL_SERVER_AWARE.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Windows Media Player`
* FileVersion: `12.0.7601.24499 (win7sp1_ldr.190612-0600)`
* ProductName: `Microsoft® Windows® Operating System`
* ProductVersion: `12.0.7601.24499`
* InternalName: `wmplayer.exe`
* OriginalFilename: `wmplayer.exe`
* LegalCopyright: `© Microsoft Corporation. All rights reserved.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.text` | `0x1000` | 10,322 | 10,752 | 5.68 | CNT_CODE, MEM_EXECUTE, MEM_READ |
| `.data` | `0x4000` | 1,808 | 512 | 0.60 | CNT_INITIALIZED_DATA, MEM_READ, MEM_WRITE |
| `.pdata` | `0x5000` | 168 | 512 | 1.44 | CNT_INITIALIZED_DATA, MEM_READ |
| `.rsrc` | `0x6000` | 153,776 | 154,112 | 6.49 | CNT_INITIALIZED_DATA, MEM_READ |
| `.reloc` | `0x2c000` | 132 | 512 | 0.36 | CNT_INITIALIZED_DATA, MEM_DISCARDABLE, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **5**; imported functions: **62**; delay-loaded DLLs: **2**; exported symbols: **0**.

| Family | DLLs | Functions |
|---|---|---|
| Core system | ADVAPI32.dll, KERNEL32.dll, ntdll.dll | 47 |
| Networking/UPnP | WS2_32.dll | 2 |
| Windows shell/UI | USER32.dll | 13 |

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmplayer_exe/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **34** (raw directory walk; pefile cross-check agrees); message strings decoded: 0.
* Types: MUI×1, RT_GROUP_ICON×2, RT_ICON×29, RT_MANIFEST×1, RT_VERSION×1.

* `MUI` payload (1, en-US): language tag `en-US`, declares localised types [3, 11, 14, 16] — matches sibling `.mui` file: False.
Per-entry detail: `analysis/report/resources/wmplayer_exe/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 1293 ASCII, 48 UTF-16LE (1271 unique).
* GUIDs 0, URLs 2, UPnP URNs 3, registry paths 4, referenced modules 11.

* URLs: `    <asmv3:windowsSettings xmlns="http://schemas.microsoft.com/SMI/2005/WindowsSettings">`, `http://go.microsoft.com/fwlink/?LinkId=9996`
* UPnP/DLNA identifiers: `    xmlns:asmv3="urn:schemas-microsoft-com:asm.v3"`, `    xmlns="urn:schemas-microsoft-com:asm.v1" `, `  <trustInfo xmlns="urn:schemas-microsoft-com:asm.v3">`
* Registry paths: `SOFTWARE\Microsoft\MediaPlayer\Preferences`, `SOFTWARE\Microsoft\Windows\CurrentVersion\App Paths\wmplayer.exe`, `SOFTWARE\Policies\Microsoft\WindowsMediaPlayer`, `Software\Microsoft\MediaPlayer\Setup`

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmplayer_exe.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `complete`.
* CFG: 139 functions, 15 call edges, built in 0.4s; selection rule: forced (entry+exports), then size desc, min_blocks=2, cap=60.
* Emitted pseudocode: 60 functions (60 decompiled successfully).

| Address | Function | Blocks | Size | File |
|---|---|---|---|---|
| `0x100002295` | `sub_100002295` | 31 | 292 | [`0002_100002295_sub_100002295.c`](decompiled/0002_100002295_sub_100002295.c) |
| `0x100002ba0` | `sub_100002ba0` | 26 | 450 | [`0003_100002ba0_sub_100002ba0.c`](decompiled/0003_100002ba0_sub_100002ba0.c) |
| `0x100001de8` | `sub_100001de8` | 13 | 201 | [`0004_100001de8_sub_100001de8.c`](decompiled/0004_100001de8_sub_100001de8.c) |
| `0x1000027f6` | `sub_1000027f6` | 12 | 133 | [`0005_1000027f6_sub_1000027f6.c`](decompiled/0005_1000027f6_sub_1000027f6.c) |
| `0x100001924` | `sub_100001924` | 12 | 103 | [`0006_100001924_sub_100001924.c`](decompiled/0006_100001924_sub_100001924.c) |
| `0x1000024f1` | `sub_1000024f1` | 11 | 113 | [`0007_1000024f1_sub_1000024f1.c`](decompiled/0007_1000024f1_sub_1000024f1.c) |
| `0x100001c74` | `_start` | 10 | 202 | [`0001_100001c74_start.c`](decompiled/0001_100001c74_start.c) |
| `0x100002456` | `sub_100002456` | 9 | 388 | [`0008_100002456_sub_100002456.c`](decompiled/0008_100002456_sub_100002456.c) |
| `0x100002101` | `sub_100002101` | 9 | 179 | [`0009_100002101_sub_100002101.c`](decompiled/0009_100002101_sub_100002101.c) |
| `0x100001f0c` | `sub_100001f0c` | 9 | 132 | [`0010_100001f0c_sub_100001f0c.c`](decompiled/0010_100001f0c_sub_100001f0c.c) |
| `0x100001274` | `sub_100001274` | 7 | 54 | [`0011_100001274_sub_100001274.c`](decompiled/0011_100001274_sub_100001274.c) |
| `0x100001788` | `sub_100001788` | 7 | 54 | [`0012_100001788_sub_100001788.c`](decompiled/0012_100001788_sub_100001788.c) |

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

## 8. Interpretation and open items

* Role **[inferred]**: Windows Media Player (internal name `wmplayer.exe`)
* [unresolved] 79 of 139 CFG functions were not selected/decompiled (cap forced (entry+exports), then size desc, min_blocks=2, cap=60)

