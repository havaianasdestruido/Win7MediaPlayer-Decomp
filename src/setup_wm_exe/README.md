# `bin/setup_wm.exe` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/setup_wm.exe`; size 2,078,208 bytes.
* SHA-256: `f069226052de289452ef5ff9dd67557193c15308c5351bc7b70b6692b350951b`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_GUI`, linker 9.0, image base `0x100000000`, entry point RVA `0x7fa44`.
* Built: 2010-11-20 11:17:44Z (PE TimeDateStamp 1290251864).
* PDB: `setup_wm.pdb` (age 1); overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP, TERMINAL_SERVER_AWARE.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Microsoft Windows Media Configuration Utility`
* FileVersion: `12.0.7601.17514 (win7sp1_rtm.101119-1850)`
* ProductName: `Microsoft® Windows® Operating System`
* ProductVersion: `12.0.7601.17514`
* InternalName: `setup_wm.exe`
* OriginalFilename: `setup_wm.exe`
* LegalCopyright: `© Microsoft Corporation. All rights reserved.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.text` | `0x1000` | 541,948 | 542,208 | 5.87 | CNT_CODE, MEM_EXECUTE, MEM_READ |
| `.data` | `0x86000` | 14,296 | 7,168 | 1.94 | CNT_INITIALIZED_DATA, MEM_READ, MEM_WRITE |
| `.pdata` | `0x8a000` | 8,208 | 8,704 | 5.53 | CNT_INITIALIZED_DATA, MEM_READ |
| `.rsrc` | `0x8d000` | 1,505,776 | 1,505,792 | 5.16 | CNT_INITIALIZED_DATA, MEM_READ |
| `.reloc` | `0x1fd000` | 12,372 | 12,800 | 3.86 | CNT_INITIALIZED_DATA, MEM_DISCARDABLE, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **24**; imported functions: **388**; delay-loaded DLLs: **0**; exported symbols: **0**.

| Family | DLLs | Functions |
|---|---|---|
| COM/OLE | COMCTL32.dll, OLEAUT32.dll, ole32.dll | 22 |
| Core system | ADVAPI32.dll, KERNEL32.dll, msvcrt.dll, ntdll.dll | 220 |
| Device/UMDF | SETUPAPI.dll | 8 |
| Media/AV | CRYPT32.dll, MF.dll, WINTRUST.dll | 5 |
| Networking/UPnP | WININET.dll, urlmon.dll | 3 |
| Windows shell/UI | GDI32.dll, SHELL32.dll, SHLWAPI.dll, USER32.dll, gdiplus.dll | 114 |
| other | ATL.DLL, MPR.dll, Secur32.dll, USERENV.dll, VERSION.dll, pdh.dll | 16 |

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/setup_wm_exe/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **62** (raw directory walk; pefile cross-check agrees); message strings decoded: 0.
* Types: MUI×1, RT_BITMAP×28, RT_GROUP_ICON×2, RT_ICON×28, RT_MANIFEST×1, RT_VERSION×1, WEVT_TEMPLATE×1.

* `MUI` payload (1, en-US): language tag `en-US`, declares localised types [] — matches sibling `.mui` file: None.
* `WEVT_TEMPLATE` 1 (1,210 B): magic `CRIM`, declared size 1208 — ETW event-manifest template; binary schema not decoded here.
* `RT_MANIFEST` 1: `<?xml version="1.0" encoding="UTF-8" standalone="yes"?>`.
Per-entry detail: `analysis/report/resources/setup_wm_exe/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 9780 ASCII, 1984 UTF-16LE (6240 unique).
* GUIDs 4, URLs 5, UPnP URNs 2, registry paths 87, referenced modules 50.

* URLs: `  <asmv3:windowsSettings xmlns="http://schemas.microsoft.com/SMI/2005/WindowsSettings">`, `http://go.microsoft.com/fwlink/`, `http://go.microsoft.com/fwlink/?LinkId=120764&mpver=%s&id=%x&contextid=%lu&originalid=%lu`, `http://go.microsoft.com/fwlink/?LinkId=120764&mpver=%s&id=%x&contextid=%lu&originalid=%x`, `http://go.microsoft.com/fwlink/?LinkId=52492&sv=2`
* UPnP/DLNA identifiers: `<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0" xmlns:asmv3="urn:schemas-microsoft-com:asm.v3">`, `<trustInfo xmlns="urn:schemas-microsoft-com:asm.v3">`
* GUID literals: `E33D49A9-409C-4acd-A1F5-DA7DBB99EB30`, `e31e09cb-b1d4-4b2c-b088-0aa51c598562`, `e88a19fb-a847-4e3d-9ae2-13c2b84f58a6`, `{CE3FB1D1-02AE-4a5f-A6E9-D9F1B4073E6C}`
* Registry paths: `%s\Local Settings\Application Data\Microsoft\Media Player`, `%s\Microsoft\Media Player`, `%s\Microsoft\Media Player\%s`, `%s\Microsoft\Media Player\%s\%s`, `%s\Software\Microsoft\Windows\CurrentVersion\Explorer\Shell Folders`, `SOFTWARE\Microsoft\Internet Explorer\Main\FeatureControl`, `SOFTWARE\Microsoft\MediaPlayer\Player\Extensions\.%s`, `SOFTWARE\Microsoft\MediaPlayer\Player\Schemes\%s`, `SOFTWARE\Microsoft\MediaPlayer\Preferences`, `SOFTWARE\Microsoft\Multimedia\WMPlayer\Extensions\.%s` (+77 more)

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/setup_wm_exe.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `complete`.
* CFG: 9867 functions, 0 call edges, built in 37.41s; selection rule: forced (entry+exports), then size desc, min_blocks=2, cap=60.
* Emitted pseudocode: 60 functions (60 decompiled successfully).

| Address | Function | Blocks | Size | File |
|---|---|---|---|---|
| `0x10007630c` | `sub_10007630c` | 206 | 2054 | [`0002_10007630c_sub_10007630c.c`](decompiled/0002_10007630c_sub_10007630c.c) |
| `0x100070376` | `sub_100070376` | 138 | 1676 | [`0003_100070376_sub_100070376.c`](decompiled/0003_100070376_sub_100070376.c) |
| `0x100040aec` | `sub_100040aec` | 106 | 1470 | [`0004_100040aec_sub_100040aec.c`](decompiled/0004_100040aec_sub_100040aec.c) |
| `0x1000558e8` | `sub_1000558e8` | 91 | 1209 | [`0005_1000558e8_sub_1000558e8.c`](decompiled/0005_1000558e8_sub_1000558e8.c) |
| `0x1000462a8` | `sub_1000462a8` | 80 | 938 | [`0006_1000462a8_sub_1000462a8.c`](decompiled/0006_1000462a8_sub_1000462a8.c) |
| `0x10007c99f` | `sub_10007c99f` | 76 | 793 | [`0007_10007c99f_sub_10007c99f.c`](decompiled/0007_10007c99f_sub_10007c99f.c) |
| `0x100076c50` | `sub_100076c50` | 66 | 790 | [`0008_100076c50_sub_100076c50.c`](decompiled/0008_100076c50_sub_100076c50.c) |
| `0x10004343c` | `sub_10004343c` | 61 | 713 | [`0009_10004343c_sub_10004343c.c`](decompiled/0009_10004343c_sub_10004343c.c) |
| `0x10004d1d0` | `sub_10004d1d0` | 60 | 790 | [`0010_10004d1d0_sub_10004d1d0.c`](decompiled/0010_10004d1d0_sub_10004d1d0.c) |
| `0x100064400` | `sub_100064400` | 60 | 505 | [`0011_100064400_sub_100064400.c`](decompiled/0011_100064400_sub_100064400.c) |
| `0x1000608e0` | `sub_1000608e0` | 59 | 793 | [`0012_1000608e0_sub_1000608e0.c`](decompiled/0012_1000608e0_sub_1000608e0.c) |
| `0x10005e4f8` | `sub_10005e4f8` | 58 | 570 | [`0013_10005e4f8_sub_10005e4f8.c`](decompiled/0013_10005e4f8_sub_10005e4f8.c) |

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

## 8. Reconstruction and validation

* Reconstruction harness: `recon/` (generated by `analysis/tools/recon_build.py`) — `module_facts.h` (sections, resource RVAs, image digest), `guids.h`, `enums.h`, `interfaces.h`, `compile_check.c`, plus `CMakeLists.txt`.
* Last build validation: target `wmp_recon_setup_wm_exe` — compiled and all runtime checks passed.
* The harness re-derives this module's recorded digests and GUIDs from the original file at run time; see `analysis/report/validation.md` §3.

`analysis/report/disasm.md` records the instruction-level cross-check (capstone vs GNU objdump through REA) for this module.

## 9. Interpretation and open items

* Role **[inferred]**: Microsoft Windows Media Configuration Utility (internal name `setup_wm.exe`)
* [unresolved] 9807 of 9867 CFG functions were not selected/decompiled (cap forced (entry+exports), then size desc, min_blocks=2, cap=60)
* [unresolved] `MUI` payload type-list not recovered (resource 1)
* [unresolved] `WEVT_TEMPLATE` binary schema (ETW manifest template) not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded
* [unresolved] `RT_BITMAP` DIB pixel data not decoded

