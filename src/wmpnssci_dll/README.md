# `bin/wmpnssci.dll` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/wmpnssci.dll`; size 553,472 bytes.
* SHA-256: `3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_CUI`, linker 9.0, image base `0x7ff3b130000`, entry point RVA `0x33a48`.
* Built: 2009-07-14 01:36:19Z (PE TimeDateStamp 1247535379).
* PDB: `wmpnssci.pdb` (age 1); overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Windows Media Player Network Sharing Service Control Interface DLL`
* FileVersion: `12.0.7600.16385 (win7_rtm.090713-1255)`
* ProductName: `Microsoft® Windows® Operating System`
* ProductVersion: `12.0.7600.16385`
* OriginalFilename: `WMPNSSCI.DLL`
* LegalCopyright: `© Microsoft Corporation. All rights reserved.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.text` | `0x1000` | 298,965 | 299,008 | 6.38 | CNT_CODE, MEM_EXECUTE, MEM_READ |
| `.data` | `0x4a000` | 13,584 | 10,752 | 6.61 | CNT_INITIALIZED_DATA, MEM_READ, MEM_WRITE |
| `.pdata` | `0x4e000` | 11,808 | 12,288 | 5.40 | CNT_INITIALIZED_DATA, MEM_READ |
| `.rsrc` | `0x51000` | 226,096 | 226,304 | 7.02 | CNT_INITIALIZED_DATA, MEM_READ |
| `.reloc` | `0x89000` | 3,904 | 4,096 | 2.48 | CNT_INITIALIZED_DATA, MEM_DISCARDABLE, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **11**; imported functions: **216**; delay-loaded DLLs: **8**; exported symbols: **5**.

| Family | DLLs | Functions |
|---|---|---|
| COM/OLE | COMCTL32.dll | 9 |
| Core system | KERNEL32.dll, msvcrt.dll, ntdll.dll | 116 |
| Windows shell/UI | GDI32.dll, SHELL32.dll, SHLWAPI.dll, USER32.dll, gdiplus.dll | 81 |
| other | API-MS-Win-Core-LocalRegistry-L1-1-0.dll, SspiCli.dll | 10 |

Exports: `DllCanUnloadNow`, `DllGetClassObject`, `DllRegisterServer`, `DllUnregisterServer`.

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmpnssci_dll/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **48** (raw directory walk; pefile cross-check agrees); message strings decoded: 0.
* Types: MUI×1, REGISTRY×2, RT_GROUP_ICON×3, RT_ICON×39, RT_MANIFEST×1, RT_VERSION×1, TYPELIB×1.

* `MUI` payload (1, en-US): language tag `en-US`, declares localised types [] — matches sibling `.mui` file: None.
* `REGISTRY` 100 (119 B): ATL registrar script (RGS), 11 statement lines, GUIDs [] → `analysis/report/resources/wmpnssci_dll/REGISTRY/100_en-US.rgs`.
* `REGISTRY` 301 (641 B): ATL registrar script (RGS), 26 statement lines, GUIDs ['{453E9E02-8BA4-474C-BFA0-37727E44F6AE}', '{92498132-4D1A-4297-9B78-9E2E4BA99C07}'] → `analysis/report/resources/wmpnssci_dll/REGISTRY/301_en-US.rgs`.
* `TYPELIB` 1: MSFT type library, version field 0x00010002, LCID 0x0409, 14 type records → decoded into [`typelib/`](typelib/README.md).
* `RT_MANIFEST` 2: `<?xml version="1.0" encoding="UTF-8" standalone="yes"?>`.
Per-entry detail: `analysis/report/resources/wmpnssci_dll/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 6799 ASCII, 128 UTF-16LE (3568 unique).
* GUIDs 1, URLs 0, UPnP URNs 1, registry paths 9, referenced modules 24.

* UPnP/DLNA identifiers: `<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">`
* GUID literals: `{f74bce98-9eb4-4022-8317-11c723e5ccf8}`
* Registry paths: `SOFTWARE\Microsoft\Cryptography\RNG`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Devices`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Events`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\MAC Access Control`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Server Settings`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Servers`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\UDNRenderers`, `Software\Microsoft\Internet Explorer\Settings`

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmpnssci_dll.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `complete`.
* CFG: 4459 functions, 0 call edges, built in 22.77s; selection rule: forced (entry+exports), then size desc, min_blocks=2, cap=60.
* Emitted pseudocode: 60 functions (60 decompiled successfully).

| Address | Function | Blocks | Size | File |
|---|---|---|---|---|
| `0x7ff3b159049` | `sub_7ff3b159049` | 237 | 2805 | [`0006_7ff3b159049_sub_7ff3b159049.c`](decompiled/0006_7ff3b159049_sub_7ff3b159049.c) |
| `0x7ff3b16ef14` | `sub_7ff3b16ef14` | 223 | 3714 | [`0007_7ff3b16ef14_sub_7ff3b16ef14.c`](decompiled/0007_7ff3b16ef14_sub_7ff3b16ef14.c) |
| `0x7ff3b1710a2` | `sub_7ff3b1710a2` | 129 | 1467 | [`0008_7ff3b1710a2_sub_7ff3b1710a2.c`](decompiled/0008_7ff3b1710a2_sub_7ff3b1710a2.c) |
| `0x7ff3b16c43d` | `sub_7ff3b16c43d` | 110 | 1752 | [`0009_7ff3b16c43d_sub_7ff3b16c43d.c`](decompiled/0009_7ff3b16c43d_sub_7ff3b16c43d.c) |
| `0x7ff3b16ce39` | `sub_7ff3b16ce39` | 110 | 1752 | [`0010_7ff3b16ce39_sub_7ff3b16ce39.c`](decompiled/0010_7ff3b16ce39_sub_7ff3b16ce39.c) |
| `0x7ff3b15a078` | `sub_7ff3b15a078` | 101 | 1227 | [`0011_7ff3b15a078_sub_7ff3b15a078.c`](decompiled/0011_7ff3b15a078_sub_7ff3b15a078.c) |
| `0x7ff3b16a41c` | `sub_7ff3b16a41c` | 84 | 1420 | [`0012_7ff3b16a41c_sub_7ff3b16a41c.c`](decompiled/0012_7ff3b16a41c_sub_7ff3b16a41c.c) |
| `0x7ff3b16ff4e` | `sub_7ff3b16ff4e` | 68 | 871 | [`0013_7ff3b16ff4e_sub_7ff3b16ff4e.c`](decompiled/0013_7ff3b16ff4e_sub_7ff3b16ff4e.c) |
| `0x7ff3b134a00` | `sub_7ff3b134a00` | 62 | 947 | [`0014_7ff3b134a00_sub_7ff3b134a00.c`](decompiled/0014_7ff3b134a00_sub_7ff3b134a00.c) |
| `0x7ff3b15a558` | `sub_7ff3b15a558` | 61 | 619 | [`0015_7ff3b15a558_sub_7ff3b15a558.c`](decompiled/0015_7ff3b15a558_sub_7ff3b15a558.c) |
| `0x7ff3b140190` | `sub_7ff3b140190` | 59 | 614 | [`0016_7ff3b140190_sub_7ff3b140190.c`](decompiled/0016_7ff3b140190_sub_7ff3b140190.c) |
| `0x7ff3b170ab2` | `sub_7ff3b170ab2` | 57 | 873 | [`0017_7ff3b170ab2_sub_7ff3b170ab2.c`](decompiled/0017_7ff3b170ab2_sub_7ff3b170ab2.c) |

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

## 7. COM surface **[verified]**

* COM entry points: `DllCanUnloadNow`, `DllGetClassObject`, `DllRegisterServer`, `DllUnregisterServer`.
* Type library `{453E9E02-8BA4-474C-BFA0-37727E44F6AE}`: ENUM `ServiceStatus` `{B78E1E54-0885-40C0-87BC-2E5B93C95F1C}` (0 methods), ENUM `EventReason` `{31D0E2AD-8AE5-41CE-A743-B815F4279005}` (0 methods), ENUM `AuthorizationStatus` `{08933D12-EEED-4AD2-9238-4E916639D0C4}` (0 methods), DISPATCH `INSSProperty` `{B27C1EAC-B909-462C-A051-F85DA63D616B}` (2 methods), COCLASS `Property` `{FC434359-AF3E-4F09-852E-B5D3384F241D}` (0 methods), DISPATCH `INSSProperties` `{DF2F700E-48CC-40CE-BBF7-73187286C42D}` (3 methods), COCLASS `Properties` `{AD5D2BA9-B6A0-45B6-9ED5-B59B85806D56}` (0 methods), DISPATCH `INSSDevice` `{055B0E0E-3113-4CAE-9EEE-6E63211BEE37}` (7 methods), COCLASS `Device` `{86223118-F443-4F05-B0CF-8963A15747A6}` (0 methods), DISPATCH `INSSDevices` `{73DE3C35-FAF7-4934-B337-C260D5926858}` (3 methods), COCLASS `Devices` `{6DE2D8B3-50B2-45B7-9DE3-0825CE8B7F2D}` (0 methods), INTERFACE `INSSNotify` `{ADC0EDF5-FE64-48FF-A711-CB4AB0F5C2CA}` (1 methods), DISPATCH `INSSManager` `{204F4950-212A-414F-9B27-73BD87423F25}` (9 methods), COCLASS `NSSManager` `{92498132-4D1A-4297-9B78-9E2E4BA99C07}` (0 methods)
  * 15/15 recovered GUIDs present as 16-byte constants in wmpnssci.dll
* Registrar script (resource 100, en-US): `analysis/report/resources/wmpnssci_dll/REGISTRY/100_en-US.rgs` with GUIDs []
* Registrar script (resource 301, en-US): `analysis/report/resources/wmpnssci_dll/REGISTRY/301_en-US.rgs` with GUIDs ['{453E9E02-8BA4-474C-BFA0-37727E44F6AE}', '{92498132-4D1A-4297-9B78-9E2E4BA99C07}']

## 8. Interpretation and open items

* Role **[inferred]**: Windows Media Player Network Sharing Service Control Interface DLL
* [unresolved] 4399 of 4459 CFG functions were not selected/decompiled (cap forced (entry+exports), then size desc, min_blocks=2, cap=60)
* [unresolved] `MUI` payload type-list not recovered (resource 1)

