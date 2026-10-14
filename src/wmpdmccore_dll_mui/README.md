# `bin/pt-BR/WMPDMCCore.dll.mui` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/pt-BR/WMPDMCCore.dll.mui`; size 2,560 bytes.
* SHA-256: `680979d9d171a607492d67d7ed1393f07d906bd6ab35a29aadfe3bce9e2a6611`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_GUI`, linker 9.0, image base `0x180000000`, entry point RVA `0x0`.
* Built: 2009-07-14 00:23:23Z (PE TimeDateStamp 1247531003).
* PDB: ; overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Biblioteca do Controlador de Mídia Digital do Windows Media Player`
* FileVersion: `12.0.7600.16385 (win7_rtm.090713-1255)`
* ProductName: `Sistema Operacional Microsoft® Windows®`
* ProductVersion: `12.0.7600.16385`
* InternalName: `WMPDMCCore`
* OriginalFilename: `WMPDMCCore.dll.mui`
* LegalCopyright: `© Microsoft Corporation. Todos os direitos reservados.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.rsrc` | `0x1000` | 4,096 | 2,048 | 3.76 | CNT_INITIALIZED_DATA, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **0**; imported functions: **0**; delay-loaded DLLs: **0**; exported symbols: **0**.

| Family | DLLs | Functions |
|---|---|---|

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmpdmccore_dll_mui/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **4** (raw directory walk; pefile cross-check agrees); message strings decoded: 5.
* Types: MUI×1, RT_MESSAGETABLE×1, RT_STRING×1, RT_VERSION×1.

* `MUI` payload (1, pt-BR): language tag `pt-BR`, declares localised types [] — matches sibling `.mui` file: None.
* `RT_STRING` 7 (pt-BR): 1 non-empty strings → `analysis/report/resources/wmpdmccore_dll_mui/RT_STRING/7_pt-BR.txt`.
* `RT_MESSAGETABLE` 1 (pt-BR): 5 messages → `analysis/report/resources/wmpdmccore_dll_mui/RT_MESSAGETABLE/1_pt-BR.txt`.
Per-entry detail: `analysis/report/resources/wmpdmccore_dll_mui/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 4 ASCII, 30 UTF-16LE (32 unique).
* GUIDs 0, URLs 0, UPnP URNs 0, registry paths 0, referenced modules 1.


Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmpdmccore_dll_mui.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `not recorded`.
* CFG: 0 functions, 0 call edges, built in 0.07s; selection rule: n/a.
* Emitted pseudocode: 0 functions (? decompiled successfully).

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

> no functions recovered by CFGFast — image has no executable code section (resource-only module such as a .mui payload)

## 8. Interpretation and open items

* Role **[inferred]**: Biblioteca do Controlador de Mídia Digital do Windows Media Player (internal name `WMPDMCCore`)
* [unresolved] decompilation status is `None` — the function index may be incomplete
* [unresolved] `MUI` payload type-list not recovered (resource 1)

