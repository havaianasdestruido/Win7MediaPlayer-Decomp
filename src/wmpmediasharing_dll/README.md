# `bin/WMPMediaSharing.dll` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/WMPMediaSharing.dll`; size 163,840 bytes.
* SHA-256: `714d193de7f062968c11a8a946f1fa066d03e1fc5a7bd90dbabc372605416413`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_CUI`, linker 9.0, image base `0x7ff2c160000`, entry point RVA `0x1871c`.
* Built: 2009-07-14 01:36:18Z (PE TimeDateStamp 1247535378).
* PDB: `WMPMediaSharing.pdb` (age 1); overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Windows Media Player Media Sharing Interface DLL`
* FileVersion: `12.0.7600.16385 (win7_rtm.090713-1255)`
* ProductName: `Microsoft® Windows® Operating System`
* ProductVersion: `12.0.7600.16385`
* OriginalFilename: `WMPMediaSharing.DLL`
* LegalCopyright: `© Microsoft Corporation. All rights reserved.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.text` | `0x1000` | 130,411 | 130,560 | 6.35 | CNT_CODE, MEM_EXECUTE, MEM_READ |
| `.data` | `0x21000` | 11,656 | 9,216 | 7.08 | CNT_INITIALIZED_DATA, MEM_READ, MEM_WRITE |
| `.pdata` | `0x24000` | 4,908 | 5,120 | 4.97 | CNT_INITIALIZED_DATA, MEM_READ |
| `.rsrc` | `0x26000` | 14,936 | 15,360 | 4.21 | CNT_INITIALIZED_DATA, MEM_READ |
| `.reloc` | `0x2a000` | 2,306 | 2,560 | 1.39 | CNT_INITIALIZED_DATA, MEM_DISCARDABLE, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **8**; imported functions: **112**; delay-loaded DLLs: **6**; exported symbols: **3**.

| Family | DLLs | Functions |
|---|---|---|
| Core system | ADVAPI32.dll, KERNEL32.dll, msvcrt.dll, ntdll.dll | 106 |
| Windows shell/UI | SHELL32.dll, SHLWAPI.dll, USER32.dll | 5 |
| other | SspiCli.dll | 1 |

Exports: `DllCanUnloadNow`, `DllGetClassObject`.

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmpmediasharing_dll/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **4** (raw directory walk; pefile cross-check agrees); message strings decoded: 0.
* Types: MUI×1, RT_VERSION×1, TYPELIB×1, WEVT_TEMPLATE×1.

* `MUI` payload (1, en-US): language tag `en-US`, declares localised types [11, 16] — matches sibling `.mui` file: True.
* `TYPELIB` 1: MSFT type library, version field 0x00010002, LCID 0x0409, 7 type records → decoded into [`typelib/`](typelib/README.md).
* `WEVT_TEMPLATE` 1 (6,562 B): magic `CRIM`, declared size 6560 — ETW event-manifest template; binary schema not decoded here.
Per-entry detail: `analysis/report/resources/wmpmediasharing_dll/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 2313 ASCII, 184 UTF-16LE (1193 unique).
* GUIDs 0, URLs 0, UPnP URNs 0, registry paths 8, referenced modules 19.

* Registry paths: `SOFTWARE\Microsoft\Windows Media Player NSS\3.0`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Devices`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Events`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\MAC Access Control`, `SOFTWARE\Microsoft\Windows\CurrentVersion\UPnP`, `Software\Microsoft\MediaPlayer\Preferences\`, `Software\Microsoft\MediaPlayer\Preferences\HME\`, `Software\Policies\Microsoft\WindowsMediaPlayer\`

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmpmediasharing_dll.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `complete`.
* CFG: 1679 functions, 1085 call edges, built in 4.97s; selection rule: forced (entry+exports), then size desc, min_blocks=2, cap=60.
* Emitted pseudocode: 60 functions (60 decompiled successfully).

| Address | Function | Blocks | Size | File |
|---|---|---|---|---|
| `0x7ff2c17b768` | `sub_7ff2c17b768` | 223 | 3714 | [`0004_7ff2c17b768_sub_7ff2c17b768.c`](decompiled/0004_7ff2c17b768_sub_7ff2c17b768.c) |
| `0x7ff2c174439` | `sub_7ff2c174439` | 122 | 1409 | [`0005_7ff2c174439_sub_7ff2c174439.c`](decompiled/0005_7ff2c174439_sub_7ff2c174439.c) |
| `0x7ff2c17548c` | `sub_7ff2c17548c` | 101 | 1227 | [`0006_7ff2c17548c_sub_7ff2c17548c.c`](decompiled/0006_7ff2c17548c_sub_7ff2c17548c.c) |
| `0x7ff2c17467a` | `sub_7ff2c17467a` | 72 | 793 | [`0007_7ff2c17467a_sub_7ff2c17467a.c`](decompiled/0007_7ff2c17467a_sub_7ff2c17467a.c) |
| `0x7ff2c17596c` | `sub_7ff2c17596c` | 61 | 619 | [`0008_7ff2c17596c_sub_7ff2c17596c.c`](decompiled/0008_7ff2c17596c_sub_7ff2c17596c.c) |
| `0x7ff2c17b3ac` | `sub_7ff2c17b3ac` | 50 | 949 | [`0009_7ff2c17b3ac_sub_7ff2c17b3ac.c`](decompiled/0009_7ff2c17b3ac_sub_7ff2c17b3ac.c) |
| `0x7ff2c17b0a4` | `sub_7ff2c17b0a4` | 50 | 769 | [`0010_7ff2c17b0a4_sub_7ff2c17b0a4.c`](decompiled/0010_7ff2c17b0a4_sub_7ff2c17b0a4.c) |
| `0x7ff2c175eb4` | `sub_7ff2c175eb4` | 49 | 668 | [`0011_7ff2c175eb4_sub_7ff2c175eb4.c`](decompiled/0011_7ff2c175eb4_sub_7ff2c175eb4.c) |
| `0x7ff2c17a5f8` | `sub_7ff2c17a5f8` | 46 | 643 | [`0012_7ff2c17a5f8_sub_7ff2c17a5f8.c`](decompiled/0012_7ff2c17a5f8_sub_7ff2c17a5f8.c) |
| `0x7ff2c1670ec` | `sub_7ff2c1670ec` | 46 | 635 | [`0013_7ff2c1670ec_sub_7ff2c1670ec.c`](decompiled/0013_7ff2c1670ec_sub_7ff2c1670ec.c) |
| `0x7ff2c176af5` | `sub_7ff2c176af5` | 41 | 284 | [`0014_7ff2c176af5_sub_7ff2c176af5.c`](decompiled/0014_7ff2c176af5_sub_7ff2c176af5.c) |
| `0x7ff2c175c90` | `sub_7ff2c175c90` | 38 | 532 | [`0015_7ff2c175c90_sub_7ff2c175c90.c`](decompiled/0015_7ff2c175c90_sub_7ff2c175c90.c) |

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

## 7. COM surface **[verified]**

* COM entry points: `DllCanUnloadNow`, `DllGetClassObject`.
* Type library `{C21E9CE5-B317-463B-A1B1-B5E36EED59D0}`: ENUM `WindowsMediaLibrarySharingDeviceAuthorizationStatus` `None` (0 methods), INTERFACE `IWindowsMediaLibrarySharingDeviceProperty` `{81E26927-7A7D-40A7-81D4-BDDC02960E3E}` (2 methods), INTERFACE `IWindowsMediaLibrarySharingDeviceProperties` `{C4623214-6B06-40C5-A623-B2FF4C076BFD}` (3 methods), INTERFACE `IWindowsMediaLibrarySharingDevice` `{3DCCC293-4FD9-4191-A25B-8E57C5D27BD4}` (4 methods), INTERFACE `IWindowsMediaLibrarySharingDevices` `{1803F9D6-FE6D-4546-BF5B-992FE8EC12D1}` (3 methods), INTERFACE `IWindowsMediaLibrarySharingServices` `{01F5F85E-0A81-40DA-A7C8-21EF3AF8440C}` (19 methods), COCLASS `WindowsMediaLibrarySharingServices` `{AD581B00-7B64-4E59-A38D-D2C5BF51DDB3}` (0 methods)
  * 7/7 recovered GUIDs present as 16-byte constants in WMPMediaSharing.dll

## 8. Interpretation and open items

* Role **[inferred]**: Windows Media Player Media Sharing Interface DLL
* [unresolved] 1619 of 1679 CFG functions were not selected/decompiled (cap forced (entry+exports), then size desc, min_blocks=2, cap=60)
* [unresolved] `WEVT_TEMPLATE` binary schema (ETW manifest template) not decoded

