# `bin/pt-BR/wmpnssci.dll.mui` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/pt-BR/wmpnssci.dll.mui`; size 4,096 bytes.
* SHA-256: `2b59918607d8e28691e6d1f9ebf2e8d80b14ecd55925f7b87f069aa75c43fe54`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_GUI`, linker 9.0, image base `0x180000000`, entry point RVA `0x0`.
* Built: 2009-07-14 00:23:55Z (PE TimeDateStamp 1247531035).
* PDB: ; overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `DLL de Interface de Controle de Serviço de Compartilhamento de Rede do Windows Media Player`
* FileVersion: `12.0.7600.16385 (win7_rtm.090713-1255)`
* ProductName: `Sistema Operacional Microsoft® Windows®`
* ProductVersion: `12.0.7600.16385`
* OriginalFilename: `WMPNSSCI.DLL.MUI`
* LegalCopyright: `© Microsoft Corporation. Todos os direitos reservados.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.rsrc` | `0x1000` | 4,096 | 3,584 | 3.68 | CNT_INITIALIZED_DATA, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **0**; imported functions: **0**; delay-loaded DLLs: **0**; exported symbols: **0**.

| Family | DLLs | Functions |
|---|---|---|

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmpnssci_dll_mui/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **6** (raw directory walk; pefile cross-check agrees); message strings decoded: 0.
* Types: MUI×1, RT_DIALOG×1, RT_STRING×3, RT_VERSION×1.

* `MUI` payload (1, pt-BR): language tag `pt-BR`, declares localised types [] — matches sibling `.mui` file: None.
* `RT_DIALOG` 1000 (pt-BR): DLGTEMPLATEEX, 24 items, 278×249 dialog units.
* `RT_STRING` 13 (pt-BR): 1 non-empty strings → `analysis/report/resources/wmpnssci_dll_mui/RT_STRING/13_pt-BR.txt`.
* `RT_STRING` 44 (pt-BR): 3 non-empty strings → `analysis/report/resources/wmpnssci_dll_mui/RT_STRING/44_pt-BR.txt`.
* `RT_STRING` 45 (pt-BR): 3 non-empty strings → `analysis/report/resources/wmpnssci_dll_mui/RT_STRING/45_pt-BR.txt`.
Per-entry detail: `analysis/report/resources/wmpnssci_dll_mui/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 4 ASCII, 49 UTF-16LE (52 unique).
* GUIDs 0, URLs 0, UPnP URNs 0, registry paths 0, referenced modules 1.


Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmpnssci_dll_mui.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `not recorded`.
* CFG: 0 functions, 0 call edges, built in 0.06s; selection rule: n/a.
* Emitted pseudocode: 0 functions (? decompiled successfully).

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

> no functions recovered by CFGFast — image has no executable code section (resource-only module such as a .mui payload)

## 8. Interpretation and open items

* Role **[inferred]**: DLL de Interface de Controle de Serviço de Compartilhamento de Rede do Windows Media Player
* [unresolved] decompilation status is `None` — the function index may be incomplete
* [unresolved] `MUI` payload type-list not recovered (resource 1)

