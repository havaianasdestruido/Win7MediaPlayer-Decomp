# `bin/wmpnetwk.exe` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/wmpnetwk.exe`; size 1,525,248 bytes.
* SHA-256: `306467d280e99d0616e839278a4db5bed684f002ae284c3678cabb5251459cb3`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_CUI`, linker 9.0, image base `0x100000000`, entry point RVA `0x1299f4`.
* Built: 2010-11-20 11:18:23Z (PE TimeDateStamp 1290251903).
* PDB: `WMPNetwk.pdb` (age 1); overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP, TERMINAL_SERVER_AWARE.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Windows Media Player Network Sharing Service`
* FileVersion: `12.0.7601.17514 (win7sp1_rtm.101119-1850)`
* ProductName: `Microsoft® Windows® Operating System`
* ProductVersion: `12.0.7601.17514`
* InternalName: `Windows Media Player Network Sharing Service`
* OriginalFilename: `WMPNetwk.exe`
* LegalCopyright: `© Microsoft Corporation. All rights reserved.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.text` | `0x1000` | 1,376,608 | 1,376,768 | 6.23 | CNT_CODE, MEM_EXECUTE, MEM_READ |
| `.data` | `0x152000` | 32,368 | 13,312 | 5.89 | CNT_INITIALIZED_DATA, MEM_READ, MEM_WRITE |
| `.pdata` | `0x15a000` | 44,472 | 44,544 | 5.88 | CNT_INITIALIZED_DATA, MEM_READ |
| `.rsrc` | `0x165000` | 76,480 | 76,800 | 4.27 | CNT_INITIALIZED_DATA, MEM_READ |
| `.reloc` | `0x178000` | 12,758 | 12,800 | 4.12 | CNT_INITIALIZED_DATA, MEM_DISCARDABLE, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **12**; imported functions: **366**; delay-loaded DLLs: **13**; exported symbols: **0**.

| Family | DLLs | Functions |
|---|---|---|
| COM/OLE | OLEAUT32.dll, ole32.dll | 40 |
| Core system | ADVAPI32.dll, KERNEL32.dll, msvcrt.dll, ntdll.dll | 289 |
| Networking/UPnP | IPHLPAPI.DLL | 9 |
| Windows shell/UI | SHLWAPI.dll, USER32.dll | 20 |
| other | USERENV.dll, WSOCK32.dll, WTSAPI32.dll | 8 |

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmpnetwk_exe/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **6** (raw directory walk; pefile cross-check agrees); message strings decoded: 0.
* Types: MUI×1, RT_1017×1, RT_MANIFEST×1, RT_VERSION×1, TYPELIB×1, WEVT_TEMPLATE×1.

* `MUI` payload (1, en-US): language tag `en-US`, declares localised types [] — matches sibling `.mui` file: None.
* `TYPELIB` 1: MSFT type library, version field 0x00010002, LCID 0x0409, 3 type records → decoded into [`typelib/`](typelib/README.md).
* `WEVT_TEMPLATE` 1 (59,130 B): magic `CRIM`, declared size 59128 — ETW event-manifest template; binary schema not decoded here.
* `RT_MANIFEST` 1: `<?xml version="1.0" encoding="UTF-8" standalone="yes"?>`.
Per-entry detail: `analysis/report/resources/wmpnetwk_exe/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 19062 ASCII, 2685 UTF-16LE (6329 unique).
* GUIDs 0, URLs 14, UPnP URNs 31, registry paths 23, referenced modules 34.

* URLs: `    <manufacturerURL>http://www.microsoft.com</manufacturerURL>`, `    <modelURL>http://go.microsoft.com/fwlink/?LinkId=105926</modelURL>`, `<?xml version="1.0" ?><root xmlns:dc="http://purl.org/dc/elements/1.1/" xmlns:upnp="urn:schemas-upnp-org:metadata-1-0/upnp/" xmlns:microsoft="urn:schemas-microsoft-com:WMPNSS-1-0/">`, `<?xml version="1.0"?><SOAP-ENV:Envelope xmlns:SOAP-ENV="http://schemas.xmlsoap.org/soap/envelope/" SOAP-ENV:encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"><SOAP-ENV:Body>`, `<DIDL-Lite xmlns:dc="http://purl.org/dc/elements/1.1/"`, `http://+:10243/WMPNSSv4/`, `http://+:10243/WMPNSSv4/%ls/`, `http://sqm.microsoft.com/sqm/windows/sqmserver.dll`, `https://+:10245/WMPNSSv4/`, `https://+:10245/WMPNSSv4/%ls/` (+4 more)
* UPnP/DLNA identifiers: `        <serviceId>urn:microsoft.com:serviceId:X_MS_MediaReceiverRegistrar</serviceId>`, `        <serviceId>urn:upnp-org:serviceId:ConnectionManager</serviceId>`, `        <serviceId>urn:upnp-org:serviceId:ContentDirectory</serviceId>`, `        <serviceType>urn:microsoft.com:service:X_MS_MediaReceiverRegistrar:1</serviceType>`, `        <serviceType>urn:schemas-upnp-org:service:ConnectionManager:1</serviceType>`, `        <serviceType>urn:schemas-upnp-org:service:ContentDirectory:1</serviceType>`, `    <deviceType>urn:schemas-upnp-org:device:MediaServer:1</deviceType>`, `  <trustInfo xmlns="urn:schemas-microsoft-com:asm.v3">`, ` nameSpace="urn:schemas-microsoft-com:WMPNSS-1-0/" xmlns:microsoft="urn:schemas-microsoft-com:WMPNSS-1-0/"`, ` xmlns:dlna="urn:schemas-dlna-org:metadata-1-0"` (+21 more)
* Registry paths: `SOFTWARE\Microsoft\Cryptography\RNG`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\DeviceShims`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Devices`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Events`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Log`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\MAC Access Control`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Media Servers`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Server Settings`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Servers` (+13 more)

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmpnetwk_exe.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `complete`.
* CFG: 19953 functions, 0 call edges, built in 125.7s; selection rule: forced (entry+exports), then size desc, min_blocks=2, cap=60.
* Emitted pseudocode: 60 functions (60 decompiled successfully).

| Address | Function | Blocks | Size | File |
|---|---|---|---|---|
| `0x1000794b5` | `sub_1000794b5` | 237 | 2805 | [`0002_1000794b5_sub_1000794b5.c`](decompiled/0002_1000794b5_sub_1000794b5.c) |
| `0x1000bd0b7` | `sub_1000bd0b7` | 224 | 2848 | [`0003_1000bd0b7_sub_1000bd0b7.c`](decompiled/0003_1000bd0b7_sub_1000bd0b7.c) |
| `0x1001271b4` | `sub_1001271b4` | 223 | 3714 | [`0004_1001271b4_sub_1001271b4.c`](decompiled/0004_1001271b4_sub_1001271b4.c) |
| `0x100111a50` | `sub_100111a50` | 161 | 2597 | [`0005_100111a50_sub_100111a50.c`](decompiled/0005_100111a50_sub_100111a50.c) |
| `0x100092100` | `sub_100092100` | 137 | 1796 | [`0006_100092100_sub_100092100.c`](decompiled/0006_100092100_sub_100092100.c) |
| `0x100129342` | `sub_100129342` | 129 | 1467 | [`0007_100129342_sub_100129342.c`](decompiled/0007_100129342_sub_100129342.c) |
| `0x1000b3825` | `sub_1000b3825` | 125 | 2094 | [`0008_1000b3825_sub_1000b3825.c`](decompiled/0008_1000b3825_sub_1000b3825.c) |
| `0x100094704` | `sub_100094704` | 124 | 1366 | [`0009_100094704_sub_100094704.c`](decompiled/0009_100094704_sub_100094704.c) |
| `0x1000c1ebb` | `sub_1000c1ebb` | 117 | 1288 | [`0010_1000c1ebb_sub_1000c1ebb.c`](decompiled/0010_1000c1ebb_sub_1000c1ebb.c) |
| `0x100074150` | `sub_100074150` | 111 | 1358 | [`0011_100074150_sub_100074150.c`](decompiled/0011_100074150_sub_100074150.c) |
| `0x1001246dd` | `sub_1001246dd` | 110 | 1752 | [`0012_1001246dd_sub_1001246dd.c`](decompiled/0012_1001246dd_sub_1001246dd.c) |
| `0x1001250d9` | `sub_1001250d9` | 110 | 1752 | [`0013_1001250d9_sub_1001250d9.c`](decompiled/0013_1001250d9_sub_1001250d9.c) |

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

## 7. COM surface **[verified]**

* Type library `{73C381A8-548C-49F8-8AD3-C845D12D3C22}`: DISPATCH `IUPnPService_ConnectionManager` `{B78EA491-BC9E-446D-9A46-57C6D9D0FC7A}` (13 methods), DISPATCH `IUPnPService_ContentDirectory` `{84535BBA-A68E-4839-82CF-2DCCAB12910A}` (22 methods), DISPATCH `IUPnPService_MediaReceiverRegistrar` `{4250D219-06C7-4957-AEC3-6DA09B84BA22}` (11 methods)
  * 4/4 recovered GUIDs present as 16-byte constants in wmpnetwk.exe

## 8. Interpretation and open items

* Role **[inferred]**: Windows Media Player Network Sharing Service (internal name `Windows Media Player Network Sharing Service`)
* [unresolved] 19893 of 19953 CFG functions were not selected/decompiled (cap forced (entry+exports), then size desc, min_blocks=2, cap=60)
* [unresolved] `MUI` payload type-list not recovered (resource 1)
* [unresolved] `WEVT_TEMPLATE` binary schema (ETW manifest template) not decoded

