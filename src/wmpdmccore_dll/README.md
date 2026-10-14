# `bin/WMPDMCCore.dll` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/WMPDMCCore.dll`; size 426,496 bytes.
* SHA-256: `9334fde75c4e6d018f3c698b0a6b5d415f65d71716906af037147b61b3911242`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_CUI`, linker 9.0, image base `0x7ff370f0000`, entry point RVA `0x5983c`.
* Built: 2016-03-25 19:06:25Z (PE TimeDateStamp 1458932785).
* PDB: `WMPDMCCore.pdb` (age 1); overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Windows Media Player Digital Media Controller Library`
* FileVersion: `12.0.7601.23403 (win7sp1_ldr.160325-0600)`
* ProductName: `Microsoft® Windows® Operating System`
* ProductVersion: `12.0.7601.23403`
* InternalName: `WMPDMCCore`
* OriginalFilename: `WMPDMCCore.dll`
* LegalCopyright: `© Microsoft Corporation. All rights reserved.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.text` | `0x1000` | 398,711 | 398,848 | 5.73 | CNT_CODE, MEM_EXECUTE, MEM_READ |
| `.data` | `0x63000` | 4,544 | 2,560 | 2.63 | CNT_INITIALIZED_DATA, MEM_READ, MEM_WRITE |
| `.pdata` | `0x65000` | 10,620 | 10,752 | 5.42 | CNT_INITIALIZED_DATA, MEM_READ |
| `.rsrc` | `0x68000` | 5,024 | 5,120 | 3.72 | CNT_INITIALIZED_DATA, MEM_READ |
| `.reloc` | `0x6a000` | 8,064 | 8,192 | 5.13 | CNT_INITIALIZED_DATA, MEM_DISCARDABLE, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **12**; imported functions: **178**; delay-loaded DLLs: **0**; exported symbols: **5**.

| Family | DLLs | Functions |
|---|---|---|
| COM/OLE | OLEAUT32.dll, ole32.dll | 28 |
| Core system | ADVAPI32.dll, KERNEL32.dll, msvcrt.dll, ntdll.dll | 134 |
| Networking/UPnP | IPHLPAPI.DLL, WINHTTP.dll, WS2_32.dll | 9 |
| Windows shell/UI | SHELL32.dll, SHLWAPI.dll, USER32.dll | 7 |

Exports: `DllCanUnloadNow`, `DllGetClassObject`, `DllRegisterServer`, `DllUnregisterServer`.

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmpdmccore_dll/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **3** (raw directory walk; pefile cross-check agrees); message strings decoded: 0.
* Types: MUI×1, RT_VERSION×1, WEVT_TEMPLATE×1.

* `MUI` payload (1, en-US): language tag `en-US`, declares localised types [] — matches sibling `.mui` file: None.
* `WEVT_TEMPLATE` 1 (3,514 B): magic `CRIM`, declared size 3512 — ETW event-manifest template; binary schema not decoded here.
Per-entry detail: `analysis/report/resources/wmpdmccore_dll/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 3605 ASCII, 1194 UTF-16LE (2407 unique).
* GUIDs 0, URLs 0, UPnP URNs 12, registry paths 4, referenced modules 16.

* UPnP/DLNA identifiers: `urn:schemas-upnp-org:service:AVTransport:1`, `urn:schemas-upnp-org:service:ConnectionManager:1`, `urn:schemas-upnp-org:service:ContentDirectory:1`, `urn:schemas-upnp-org:service:RenderingControl:1`, `urn:upnp-org:serviceId:AVTransport`, `urn:upnp-org:serviceId:ConnectionManager`, `urn:upnp-org:serviceId:ContentDirectory`, `urn:upnp-org:serviceId:RenderingControl`, `urn:upnp-org:serviceId:urn:schemas-upnp-org:service:AVTransport`, `urn:upnp-org:serviceId:urn:schemas-upnp-org:service:ConnectionManager` (+2 more)
* Registry paths: `SOFTWARE\Microsoft\MediaPlayer\Preferences\HME`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\DeviceShims`, `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Media Servers\`, `Software\Microsoft\MediaPlayer\Preferences\DMC`

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmpdmccore_dll.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `complete`.
* CFG: 9016 functions, 0 call edges, built in 36.64s; selection rule: forced (entry+exports), then size desc, min_blocks=2, cap=60.
* Emitted pseudocode: 60 functions (60 decompiled successfully).

| Address | Function | Blocks | Size | File |
|---|---|---|---|---|
| `0x7ff3712f20b` | `sub_7ff3712f20b` | 194 | 2278 | [`0006_7ff3712f20b_sub_7ff3712f20b.c`](decompiled/0006_7ff3712f20b_sub_7ff3712f20b.c) |
| `0x7ff371309e8` | `sub_7ff371309e8` | 80 | 858 | [`0007_7ff371309e8_sub_7ff371309e8.c`](decompiled/0007_7ff371309e8_sub_7ff371309e8.c) |
| `0x7ff3714586c` | `sub_7ff3714586c` | 78 | 976 | [`0008_7ff3714586c_sub_7ff3714586c.c`](decompiled/0008_7ff3714586c_sub_7ff3714586c.c) |
| `0x7ff37146750` | `sub_7ff37146750` | 77 | 1008 | [`0009_7ff37146750_sub_7ff37146750.c`](decompiled/0009_7ff37146750_sub_7ff37146750.c) |
| `0x7ff371460b0` | `sub_7ff371460b0` | 68 | 1046 | [`0010_7ff371460b0_sub_7ff371460b0.c`](decompiled/0010_7ff371460b0_sub_7ff371460b0.c) |
| `0x7ff3713151c` | `sub_7ff3713151c` | 65 | 932 | [`0011_7ff3713151c_sub_7ff3713151c.c`](decompiled/0011_7ff3713151c_sub_7ff3713151c.c) |
| `0x7ff3711dcd2` | `sub_7ff3711dcd2` | 60 | 861 | [`0012_7ff3711dcd2_sub_7ff3711dcd2.c`](decompiled/0012_7ff3711dcd2_sub_7ff3711dcd2.c) |
| `0x7ff37130ea0` | `sub_7ff37130ea0` | 60 | 734 | [`0013_7ff37130ea0_sub_7ff37130ea0.c`](decompiled/0013_7ff37130ea0_sub_7ff37130ea0.c) |
| `0x7ff371376f0` | `sub_7ff371376f0` | 57 | 701 | [`0014_7ff371376f0_sub_7ff371376f0.c`](decompiled/0014_7ff371376f0_sub_7ff371376f0.c) |
| `0x7ff3712dd00` | `sub_7ff3712dd00` | 55 | 798 | [`0015_7ff3712dd00_sub_7ff3712dd00.c`](decompiled/0015_7ff3712dd00_sub_7ff3712dd00.c) |
| `0x7ff37124a3c` | `sub_7ff37124a3c` | 54 | 694 | [`0016_7ff37124a3c_sub_7ff37124a3c.c`](decompiled/0016_7ff37124a3c_sub_7ff37124a3c.c) |
| `0x7ff3712c2d1` | `sub_7ff3712c2d1` | 53 | 553 | [`0017_7ff3712c2d1_sub_7ff3712c2d1.c`](decompiled/0017_7ff3712c2d1_sub_7ff3712c2d1.c) |

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

## 7. COM surface **[verified]**

* COM entry points: `DllCanUnloadNow`, `DllGetClassObject`, `DllRegisterServer`, `DllUnregisterServer`.

## 8. Interpretation and open items

* Role **[inferred]**: Windows Media Player Digital Media Controller Library (internal name `WMPDMCCore`)
* [unresolved] 8956 of 9016 CFG functions were not selected/decompiled (cap forced (entry+exports), then size desc, min_blocks=2, cap=60)
* [unresolved] `MUI` payload type-list not recovered (resource 1)
* [unresolved] `WEVT_TEMPLATE` binary schema (ETW manifest template) not decoded

