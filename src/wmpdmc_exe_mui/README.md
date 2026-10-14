# `bin/pt-BR/WMPDMC.exe.mui` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/pt-BR/WMPDMC.exe.mui`; size 16,896 bytes.
* SHA-256: `a3ac34616e24ec5580fe2eec9775ff265db6ebae5e0a833aeadd05809c9de87a`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_GUI`, linker 9.0, image base `0x180000000`, entry point RVA `0x0`.
* Built: 2009-07-14 00:23:45Z (PE TimeDateStamp 1247531025).
* PDB: ; overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Aplicativo Controlador de Mídia Digital do Windows Media Player`
* FileVersion: `12.0.7600.16385 (win7_rtm.090713-1255)`
* ProductName: `Sistema Operacional Microsoft® Windows®`
* ProductVersion: `12.0.7600.16385`
* InternalName: `WMPDMC`
* OriginalFilename: `WMPDMC.exe.mui`
* LegalCopyright: `© Microsoft Corporation.  Todos os direitos reservados.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.rsrc` | `0x1000` | 16,384 | 16,384 | 3.48 | CNT_INITIALIZED_DATA, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **0**; imported functions: **0**; delay-loaded DLLs: **0**; exported symbols: **0**.

| Family | DLLs | Functions |
|---|---|---|

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmpdmc_exe_mui/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **20** (raw directory walk; pefile cross-check agrees); message strings decoded: 4.
* Types: MUI×1, RT_ACCELERATOR×1, RT_DIALOG×1, RT_MENU×1, RT_MESSAGETABLE×1, RT_STRING×14, RT_VERSION×1.

* `MUI` payload (1, pt-BR): language tag `pt-BR`, declares localised types [4, 5, 6, 9, 11, 16] — matches sibling `.mui` file: None.
* `RT_MENU` 601: 4 template items, texts ['', '&Mover para Cima\tCtrl+Seta para Cima', 'Mover para &Baixo\tCtrl+Seta para Baixo', '&Remover da lista\tDel'] → `analysis/report/resources/wmpdmc_exe_mui/RT_MENU/601_pt-BR.json`.
* `RT_DIALOG` 225 (pt-BR): DLGTEMPLATEEX, 0 items, 316×184 dialog units.
* `RT_STRING` 7 (pt-BR): 1 non-empty strings → `analysis/report/resources/wmpdmc_exe_mui/RT_STRING/7_pt-BR.txt`.
* `RT_STRING` 8 (pt-BR): 3 non-empty strings → `analysis/report/resources/wmpdmc_exe_mui/RT_STRING/8_pt-BR.txt`.
* `RT_STRING` 9 (pt-BR): 16 non-empty strings → `analysis/report/resources/wmpdmc_exe_mui/RT_STRING/9_pt-BR.txt`.
* `RT_STRING` 10 (pt-BR): 16 non-empty strings → `analysis/report/resources/wmpdmc_exe_mui/RT_STRING/10_pt-BR.txt`.
* `RT_STRING` 11 (pt-BR): 7 non-empty strings → `analysis/report/resources/wmpdmc_exe_mui/RT_STRING/11_pt-BR.txt`.
* `RT_STRING` 26 (pt-BR): 15 non-empty strings → `analysis/report/resources/wmpdmc_exe_mui/RT_STRING/26_pt-BR.txt`.
* `RT_STRING` 27 (pt-BR): 16 non-empty strings → `analysis/report/resources/wmpdmc_exe_mui/RT_STRING/27_pt-BR.txt`.
* `RT_STRING` 29 (pt-BR): 13 non-empty strings → `analysis/report/resources/wmpdmc_exe_mui/RT_STRING/29_pt-BR.txt`.
* `RT_STRING` 30 (pt-BR): 16 non-empty strings → `analysis/report/resources/wmpdmc_exe_mui/RT_STRING/30_pt-BR.txt`.
* `RT_STRING` 31 (pt-BR): 1 non-empty strings → `analysis/report/resources/wmpdmc_exe_mui/RT_STRING/31_pt-BR.txt`.
* `RT_STRING` 32 (pt-BR): 0 non-empty strings → `analysis/report/resources/wmpdmc_exe_mui/RT_STRING/32_pt-BR.txt`.
* `RT_STRING` 33 (pt-BR): 0 non-empty strings → `analysis/report/resources/wmpdmc_exe_mui/RT_STRING/33_pt-BR.txt`.
* `RT_STRING` 34 (pt-BR): 4 non-empty strings → `analysis/report/resources/wmpdmc_exe_mui/RT_STRING/34_pt-BR.txt`.
* `RT_STRING` 39 (pt-BR): 0 non-empty strings → `analysis/report/resources/wmpdmc_exe_mui/RT_STRING/39_pt-BR.txt`.
* `RT_ACCELERATOR` 500: 14 entries, keys ['P', 'S', 'B', 'F', 'T', 'VK_UP', 'VK_DOWN', 'VK_HOME', 'VK_END', 'VK_PRIOR', 'VK_NEXT', 'VK_F7', 'VK_F9', 'VK_F8'] → `analysis/report/resources/wmpdmc_exe_mui/RT_ACCELERATOR/500_pt-BR.json`.
* `RT_MESSAGETABLE` 1 (pt-BR): 4 messages → `analysis/report/resources/wmpdmc_exe_mui/RT_MESSAGETABLE/1_pt-BR.txt`.
Per-entry detail: `analysis/report/resources/wmpdmc_exe_mui/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 4 ASCII, 275 UTF-16LE (230 unique).
* GUIDs 0, URLs 0, UPnP URNs 0, registry paths 0, referenced modules 1.


Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmpdmc_exe_mui.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `not recorded`.
* CFG: 0 functions, 0 call edges, built in 0.07s; selection rule: n/a.
* Emitted pseudocode: 0 functions (? decompiled successfully).

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

> no functions recovered by CFGFast — image has no executable code section (resource-only module such as a .mui payload)

## 8. Reconstruction and validation

* Reconstruction harness: `recon/` (generated by `analysis/tools/recon_build.py`) — `module_facts.h` (sections, resource RVAs, image digest), `guids.h`, `enums.h`, `interfaces.h`, `compile_check.c`, plus `CMakeLists.txt`.
* Last build validation: target `wmp_recon_wmpdmc_exe_mui` — compiled and all runtime checks passed.
* The harness re-derives this module's recorded digests and GUIDs from the original file at run time; see `analysis/report/validation.md` §3.

`analysis/report/disasm.md` records the instruction-level cross-check (capstone vs GNU objdump through REA) for this module.

## 9. Interpretation and open items

* Role **[inferred]**: Aplicativo Controlador de Mídia Digital do Windows Media Player (internal name `WMPDMC`)
* [unresolved] decompilation status is `None` — the function index may be incomplete
* [unresolved] `MUI` payload type-list not recovered (resource 1)

