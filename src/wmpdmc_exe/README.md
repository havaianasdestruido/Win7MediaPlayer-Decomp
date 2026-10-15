# `bin/WMPDMC.exe` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/WMPDMC.exe`; size 1,212,928 bytes.
* SHA-256: `3f6564d520c416147702a463a50724fd36c46c3a44a8447af89788586fc5efee`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_GUI`, linker 9.0, image base `0x100000000`, entry point RVA `0xcd798`.
* Built: 2010-11-20 11:20:04Z (PE TimeDateStamp 1290252004).
* PDB: `WMPDMC.pdb` (age 1); overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP, TERMINAL_SERVER_AWARE.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Windows Media Player Digital Media Controller Application`
* FileVersion: `12.0.7601.17514 (win7sp1_rtm.101119-1850)`
* ProductName: `Microsoft® Windows® Operating System`
* ProductVersion: `12.0.7601.17514`
* InternalName: `WMPDMC`
* OriginalFilename: `WMPDMC.exe`
* LegalCopyright: `© Microsoft Corporation. All rights reserved.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.text` | `0x1000` | 902,078 | 902,144 | 6.32 | CNT_CODE, MEM_EXECUTE, MEM_READ |
| `.data` | `0xde000` | 20,544 | 4,096 | 1.58 | CNT_INITIALIZED_DATA, MEM_READ, MEM_WRITE |
| `.pdata` | `0xe4000` | 30,600 | 30,720 | 5.89 | CNT_INITIALIZED_DATA, MEM_READ |
| `.rsrc` | `0xec000` | 255,952 | 256,000 | 7.11 | CNT_INITIALIZED_DATA, MEM_READ |
| `.reloc` | `0x12b000` | 18,292 | 18,432 | 4.79 | CNT_INITIALIZED_DATA, MEM_DISCARDABLE, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **18**; imported functions: **558**; delay-loaded DLLs: **0**; exported symbols: **0**.

| Family | DLLs | Functions |
|---|---|---|
| COM/OLE | OLEAUT32.dll, ole32.dll | 37 |
| Core system | ADVAPI32.dll, KERNEL32.dll, msvcrt.dll, ntdll.dll | 233 |
| Networking/UPnP | WINHTTP.dll | 17 |
| Windows shell/UI | GDI32.dll, SHELL32.dll, SHLWAPI.dll, USER32.dll, UxTheme.dll, dwmapi.dll, gdiplus.dll | 225 |
| other | OLEACC.dll, POWRPROF.dll, WindowsCodecs.dll, wmpdui.dll | 46 |

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmpdmc_exe/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **151** (raw directory walk; pefile cross-check agrees); message strings decoded: 0.
* Types: IMAGE×118, MUI×1, RT_GROUP_ICON×2, RT_ICON×25, RT_MANIFEST×1, RT_VERSION×1, UIFILE×2, WEVT_TEMPLATE×1.

* `IMAGE` 230: TIFF 16×16, compression 8, samples/px 4.
* `IMAGE` 231: TIFF 48×48, compression 8, samples/px 4.
* `IMAGE` 232: TIFF 16×16, compression 8, samples/px 4.
* `IMAGE` 233: TIFF 48×48, compression 8, samples/px 4.
* `IMAGE` 234: TIFF 16×16, compression 8, samples/px 4.
* `IMAGE` 235: TIFF 44×48, compression 8, samples/px 4.
* `IMAGE` 236: TIFF 16×16, compression 8, samples/px 4.
* `IMAGE` 237: TIFF 48×48, compression 8, samples/px 4.
* `IMAGE` 255: TIFF 50×50, compression 8, samples/px 4.
* `IMAGE` 256: TIFF 9×9, compression 8, samples/px 4.
* `IMAGE` 257: TIFF 10×10, compression 8, samples/px 4.
* `IMAGE` 258: TIFF 10×10, compression 8, samples/px 4.
* `IMAGE` 260: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 261: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 262: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 263: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 264: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 265: TIFF 42×43, compression 8, samples/px 4.
* `IMAGE` 266: TIFF 42×43, compression 8, samples/px 4.
* `IMAGE` 267: TIFF 42×43, compression 8, samples/px 4.
* `IMAGE` 268: TIFF 42×43, compression 8, samples/px 4.
* `IMAGE` 269: TIFF 46×46, compression 8, samples/px 4.
* `IMAGE` 270: TIFF 46×46, compression 8, samples/px 4.
* `IMAGE` 271: TIFF 46×46, compression 8, samples/px 4.
* `IMAGE` 272: TIFF 52×52, compression 8, samples/px 4.
* `IMAGE` 273: TIFF 53×25, compression 8, samples/px 4.
* `IMAGE` 274: TIFF 53×25, compression 8, samples/px 4.
* `IMAGE` 275: TIFF 53×27, compression 8, samples/px 4.
* `IMAGE` 276: TIFF 53×27, compression 8, samples/px 4.
* `IMAGE` 277: TIFF 53×27, compression 8, samples/px 4.
* `IMAGE` 278: TIFF 53×25, compression 8, samples/px 4.
* `IMAGE` 279: TIFF 53×25, compression 8, samples/px 4.
* `IMAGE` 280: TIFF 53×27, compression 8, samples/px 4.
* `IMAGE` 281: TIFF 53×27, compression 8, samples/px 4.
* `IMAGE` 282: TIFF 53×27, compression 8, samples/px 4.
* `IMAGE` 283: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 284: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 285: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 286: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 287: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 288: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 289: TIFF 39×25, compression 8, samples/px 4.
* `IMAGE` 290: TIFF 39×25, compression 8, samples/px 4.
* `IMAGE` 291: TIFF 39×25, compression 8, samples/px 4.
* `IMAGE` 292: TIFF 39×25, compression 8, samples/px 4.
* `IMAGE` 293: TIFF 39×25, compression 8, samples/px 4.
* `IMAGE` 294: TIFF 39×25, compression 8, samples/px 4.
* `IMAGE` 295: TIFF 39×25, compression 8, samples/px 4.
* `IMAGE` 296: TIFF 39×25, compression 8, samples/px 4.
* `IMAGE` 297: TIFF 39×25, compression 8, samples/px 4.
* `IMAGE` 298: TIFF 310×51, compression 8, samples/px 4.
* `IMAGE` 299: TIFF 4×6, compression 8, samples/px 4.
* `IMAGE` 300: TIFF 16×9, compression 8, samples/px 4.
* `IMAGE` 301: TIFF 16×9, compression 8, samples/px 4.
* `IMAGE` 302: TIFF 16×9, compression 8, samples/px 4.
* `IMAGE` 303: TIFF 16×9, compression 8, samples/px 4.
* `IMAGE` 304: TIFF 16×9, compression 8, samples/px 4.
* `IMAGE` 305: TIFF 149×9, compression 8, samples/px 4.
* `IMAGE` 306: TIFF 171×9, compression 8, samples/px 4.
* `IMAGE` 307: TIFF 3×3, compression 8, samples/px 4.
* `IMAGE` 308: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 309: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 314: TIFF 102×34, compression 8, samples/px 4.
* `IMAGE` 315: TIFF 80×13, compression 8, samples/px 4.
* `IMAGE` 316: TIFF 80×13, compression 8, samples/px 4.
* `IMAGE` 317: TIFF 12×13, compression 8, samples/px 4.
* `IMAGE` 318: TIFF 12×13, compression 8, samples/px 4.
* `IMAGE` 319: TIFF 12×13, compression 8, samples/px 4.
* `IMAGE` 330: TIFF 39×25, compression 8, samples/px 4.
* `IMAGE` 331: TIFF 39×25, compression 8, samples/px 4.
* `IMAGE` 332: TIFF 53×27, compression 8, samples/px 4.
* `IMAGE` 333: TIFF 46×46, compression 8, samples/px 4.
* `IMAGE` 334: TIFF 46×46, compression 8, samples/px 4.
* `IMAGE` 335: TIFF 53×27, compression 8, samples/px 4.
* `IMAGE` 336: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 337: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 338: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 339: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 340: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 341: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 342: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 343: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 344: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 345: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 346: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 347: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 348: TIFF 42×43, compression 8, samples/px 4.
* `IMAGE` 349: TIFF 42×43, compression 8, samples/px 4.
* `IMAGE` 350: TIFF 42×43, compression 8, samples/px 4.
* `IMAGE` 351: TIFF 42×43, compression 8, samples/px 4.
* `IMAGE` 352: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 353: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 354: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 355: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 356: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 357: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 358: TIFF 39×25, compression 8, samples/px 4.
* `IMAGE` 359: TIFF 39×25, compression 8, samples/px 4.
* `IMAGE` 360: TIFF 150×9, compression 8, samples/px 4.
* `IMAGE` 361: TIFF 150×9, compression 8, samples/px 4.
* `IMAGE` 362: TIFF 150×9, compression 8, samples/px 4.
* `IMAGE` 363: TIFF 150×9, compression 8, samples/px 4.
* `IMAGE` 364: TIFF 16×9, compression 8, samples/px 4.
* `IMAGE` 365: TIFF 16×9, compression 8, samples/px 4.
* `IMAGE` 366: TIFF 12×13, compression 8, samples/px 4.
* `IMAGE` 367: TIFF 12×13, compression 8, samples/px 4.
* `IMAGE` 368: TIFF 80×13, compression 8, samples/px 4.
* `IMAGE` 369: TIFF 80×13, compression 8, samples/px 4.
* `IMAGE` 370: TIFF 53×27, compression 8, samples/px 4.
* `IMAGE` 371: TIFF 53×27, compression 8, samples/px 4.
* `IMAGE` 372: TIFF 310×51, compression 8, samples/px 4.
* `IMAGE` 373: TIFF 310×51, compression 8, samples/px 4.
* `IMAGE` 374: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 375: TIFF 25×25, compression 8, samples/px 4.
* `IMAGE` 376: TIFF 53×25, compression 8, samples/px 4.
* `IMAGE` 377: TIFF 53×25, compression 8, samples/px 4.
* `IMAGE` 378: TIFF 53×25, compression 8, samples/px 4.
* `IMAGE` 379: TIFF 53×25, compression 8, samples/px 4.
* `MUI` payload (1, en-US): language tag `en-US`, declares localised types [4, 5, 6, 9, 11, 16] — matches sibling `.mui` file: True.
* `UIFILE` 201 (33,354 B): WMP DUI markup (<duixml>); 725 lines, 62 `resid` ids → `analysis/report/resources/wmpdmc_exe/UIFILE/201_en-US.xml`.
* `UIFILE` 202 (2,625 B): WMP DUI markup (<duixml>); 75 lines, 4 `resid` ids → `analysis/report/resources/wmpdmc_exe/UIFILE/202_en-US.xml`.
* `WEVT_TEMPLATE` 1 (1,570 B): magic `CRIM`, declared size 1568 — ETW event-manifest template; binary schema not decoded here.
* `RT_MANIFEST` 1: `<?xml version="1.0" encoding="UTF-8" standalone="yes"?>`.
Per-entry detail: `analysis/report/resources/wmpdmc_exe/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 14874 ASCII, 874 UTF-16LE (6591 unique).
* GUIDs 1, URLs 2, UPnP URNs 13, registry paths 8, referenced modules 34.

* URLs: `http://sqm.microsoft.com/sqm/windows/sqmserver.dll`, `https://sqm.microsoft.com/sqm/%s/manifests/Sqm%d.bin`
* UPnP/DLNA identifiers: `<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">`, `urn:schemas-upnp-org:service:AVTransport:1`, `urn:schemas-upnp-org:service:ConnectionManager:1`, `urn:schemas-upnp-org:service:ContentDirectory:1`, `urn:schemas-upnp-org:service:RenderingControl:1`, `urn:upnp-org:serviceId:AVTransport`, `urn:upnp-org:serviceId:ConnectionManager`, `urn:upnp-org:serviceId:ContentDirectory`, `urn:upnp-org:serviceId:RenderingControl`, `urn:upnp-org:serviceId:urn:schemas-upnp-org:service:AVTransport` (+3 more)
* GUID literals: `{00000000-0000-0000-0000-000000000000}`
* Registry paths: `Software\Microsoft\DirectUI`, `Software\Microsoft\MediaPlayer\Preferences`, `Software\Microsoft\MediaPlayer\Preferences\DMC`, `Software\Microsoft\SQMClient`, `Software\Microsoft\SQMClient\%s\AdaptiveSqm\ManifestInfo`, `Software\Microsoft\SQMClient\%s\AdaptiveSqm\Throttling`, `Software\Microsoft\SQMClient\UploadUrlMap`, `Software\Policies\Microsoft\SQMClient`

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmpdmc_exe.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `complete`.
* CFG: 13515 functions, 0 call edges, built in 75.65s; selection rule: forced (entry+exports), then size desc, min_blocks=2, cap=60.
* Emitted pseudocode: 60 functions (60 decompiled successfully).

| Address | Function | Blocks | Size | File |
|---|---|---|---|---|
| `0x100055880` | `sub_100055880` | 201 | 2234 | [`0002_100055880_sub_100055880.c`](decompiled/0002_100055880_sub_100055880.c) |
| `0x100056910` | `sub_100056910` | 182 | 2122 | [`0003_100056910_sub_100056910.c`](decompiled/0003_100056910_sub_100056910.c) |
| `0x10003eda4` | `sub_10003eda4` | 181 | 1792 | [`0004_10003eda4_sub_10003eda4.c`](decompiled/0004_10003eda4_sub_10003eda4.c) |
| `0x1000c32c4` | `sub_1000c32c4` | 154 | 2482 | [`0005_1000c32c4_sub_1000c32c4.c`](decompiled/0005_1000c32c4_sub_1000c32c4.c) |
| `0x100085bc0` | `sub_100085bc0` | 133 | 1465 | [`0006_100085bc0_sub_100085bc0.c`](decompiled/0006_100085bc0_sub_100085bc0.c) |
| `0x10008f9f0` | `sub_10008f9f0` | 109 | 1294 | [`0007_10008f9f0_sub_10008f9f0.c`](decompiled/0007_10008f9f0_sub_10008f9f0.c) |
| `0x1000bdd08` | `sub_1000bdd08` | 106 | 1350 | [`0008_1000bdd08_sub_1000bdd08.c`](decompiled/0008_1000bdd08_sub_1000bdd08.c) |
| `0x10005dc49` | `sub_10005dc49` | 106 | 1347 | [`0009_10005dc49_sub_10005dc49.c`](decompiled/0009_10005dc49_sub_10005dc49.c) |
| `0x1000bd1d0` | `sub_1000bd1d0` | 105 | 1459 | [`0010_1000bd1d0_sub_1000bd1d0.c`](decompiled/0010_1000bd1d0_sub_1000bd1d0.c) |
| `0x10008f470` | `sub_10008f470` | 103 | 1400 | [`0011_10008f470_sub_10008f470.c`](decompiled/0011_10008f470_sub_10008f470.c) |
| `0x1000980d8` | `sub_1000980d8` | 102 | 1280 | [`0012_1000980d8_sub_1000980d8.c`](decompiled/0012_1000980d8_sub_1000980d8.c) |
| `0x10009a3d8` | `sub_10009a3d8` | 102 | 1266 | [`0013_10009a3d8_sub_10009a3d8.c`](decompiled/0013_10009a3d8_sub_10009a3d8.c) |

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

## 8. Reconstruction and validation

* Reconstruction harness: `recon/` (generated by `analysis/tools/recon_build.py`) — `module_facts.h` (sections, resource RVAs, image digest), `guids.h`, `enums.h`, `interfaces.h`, `compile_check.c`, plus `CMakeLists.txt`.
* Last build validation: target `wmp_recon_wmpdmc_exe` — compiled and all runtime checks passed.
* The harness re-derives this module's recorded digests and GUIDs from the original file at run time; see `analysis/report/validation.md` §3.

`analysis/report/disasm.md` records the instruction-level cross-check (capstone vs GNU objdump through REA) for this module.

## 9. Interpretation and open items

* Role **[inferred]**: Windows Media Player Digital Media Controller Application (internal name `WMPDMC`)
* [unresolved] 13455 of 13515 CFG functions were not selected/decompiled (cap forced (entry+exports), then size desc, min_blocks=2, cap=60)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `IMAGE` TIFF pixel data not decoded (dimensions/compression only)
* [unresolved] `WEVT_TEMPLATE` binary schema (ETW manifest template) not decoded

