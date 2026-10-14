# `bin/pt-BR/setup_wm.exe.mui` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/pt-BR/setup_wm.exe.mui`; size 60,928 bytes.
* SHA-256: `f3837229bf6be289b39b2c5e8462654552c5b9f1bfb0d8e2f8f7bbe5a3165d56`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_GUI`, linker 9.0, image base `0x180000000`, entry point RVA `0x0`.
* Built: 2009-07-14 00:23:53Z (PE TimeDateStamp 1247531033).
* PDB: ; overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Utilitário de Configuração do Microsoft Windows Media`
* FileVersion: `12.0.7600.16385 (win7_rtm.090713-1255)`
* ProductName: `Sistema Operacional Microsoft® Windows®`
* ProductVersion: `12.0.7600.16385`
* InternalName: `setup_wm.exe`
* OriginalFilename: `setup_wm.exe.mui`
* LegalCopyright: `© Microsoft Corporation. Todos os direitos reservados.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.rsrc` | `0x1000` | 61,440 | 60,416 | 3.53 | CNT_INITIALIZED_DATA, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **0**; imported functions: **0**; delay-loaded DLLs: **0**; exported symbols: **0**.

| Family | DLLs | Functions |
|---|---|---|

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/setup_wm_exe_mui/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **59** (raw directory walk; pefile cross-check agrees); message strings decoded: 4.
* Types: MUI×1, RT_DIALOG×23, RT_MESSAGETABLE×1, RT_STRING×33, RT_VERSION×1.

* `MUI` payload (1, pt-BR): language tag `pt-BR`, declares localised types [] — matches sibling `.mui` file: None.
* `RT_DIALOG` 51 (pt-BR): DLGTEMPLATEEX, 7 items, 399×134 dialog units.
* `RT_DIALOG` 52 (pt-BR): DLGTEMPLATEEX, 9 items, 399×134 dialog units.
* `RT_DIALOG` 53 (pt-BR): DLGTEMPLATEEX, 6 items, 399×134 dialog units.
* `RT_DIALOG` 54 (pt-BR): DLGTEMPLATEEX, 1 items, 399×150 dialog units.
* `RT_DIALOG` 55 (pt-BR): DLGTEMPLATEEX, 6 items, 399×175 dialog units.
* `RT_DIALOG` 56 (pt-BR): DLGTEMPLATEEX, 1 items, 399×134 dialog units.
* `RT_DIALOG` 57 (pt-BR): DLGTEMPLATEEX, 6 items, 399×134 dialog units.
* `RT_DIALOG` 58 (pt-BR): DLGTEMPLATEEX, 4 items, 399×134 dialog units.
* `RT_DIALOG` 59 (pt-BR): DLGTEMPLATEEX, 1 items, 399×134 dialog units.
* `RT_DIALOG` 60 (pt-BR): DLGTEMPLATEEX, 17 items, 399×175 dialog units.
* `RT_DIALOG` 61 (pt-BR): DLGTEMPLATEEX, 4 items, 399×168 dialog units.
* `RT_DIALOG` 62 (pt-BR): DLGTEMPLATEEX, 5 items, 399×168 dialog units.
* `RT_DIALOG` 63 (pt-BR): DLGTEMPLATEEX, 2 items, 399×168 dialog units.
* `RT_DIALOG` 64 (pt-BR): DLGTEMPLATEEX, 13 items, 403×295 dialog units.
* `RT_DIALOG` 65 (pt-BR): DLGTEMPLATEEX, 4 items, 399×134 dialog units.
* `RT_DIALOG` 66 (pt-BR): DLGTEMPLATEEX, 3 items, 399×134 dialog units.
* `RT_DIALOG` 67 (pt-BR): DLGTEMPLATEEX, 2 items, 399×134 dialog units.
* `RT_DIALOG` 68 (pt-BR): DLGTEMPLATEEX, 2 items, 399×134 dialog units.
* `RT_DIALOG` 69 (pt-BR): DLGTEMPLATEEX, 2 items, 399×134 dialog units.
* `RT_DIALOG` 73 (pt-BR): DLGTEMPLATEEX, 3 items, 399×168 dialog units.
* `RT_DIALOG` 74 (pt-BR): DLGTEMPLATEEX, 12 items, 399×134 dialog units.
* `RT_DIALOG` 75 (pt-BR): DLGTEMPLATEEX, 8 items, 399×134 dialog units.
* `RT_DIALOG` 76 (pt-BR): DLGTEMPLATEEX, 5 items, 399×175 dialog units.
* `RT_STRING` 7 (pt-BR): 11 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/7_pt-BR.txt`.
* `RT_STRING` 8 (pt-BR): 14 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/8_pt-BR.txt`.
* `RT_STRING` 9 (pt-BR): 11 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/9_pt-BR.txt`.
* `RT_STRING` 10 (pt-BR): 10 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/10_pt-BR.txt`.
* `RT_STRING` 11 (pt-BR): 10 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/11_pt-BR.txt`.
* `RT_STRING` 12 (pt-BR): 16 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/12_pt-BR.txt`.
* `RT_STRING` 13 (pt-BR): 15 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/13_pt-BR.txt`.
* `RT_STRING` 14 (pt-BR): 15 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/14_pt-BR.txt`.
* `RT_STRING` 15 (pt-BR): 9 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/15_pt-BR.txt`.
* `RT_STRING` 17 (pt-BR): 1 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/17_pt-BR.txt`.
* `RT_STRING` 18 (pt-BR): 12 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/18_pt-BR.txt`.
* `RT_STRING` 19 (pt-BR): 7 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/19_pt-BR.txt`.
* `RT_STRING` 20 (pt-BR): 14 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/20_pt-BR.txt`.
* `RT_STRING` 21 (pt-BR): 14 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/21_pt-BR.txt`.
* `RT_STRING` 22 (pt-BR): 10 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/22_pt-BR.txt`.
* `RT_STRING` 26 (pt-BR): 9 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/26_pt-BR.txt`.
* `RT_STRING` 27 (pt-BR): 3 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/27_pt-BR.txt`.
* `RT_STRING` 71 (pt-BR): 3 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/71_pt-BR.txt`.
* `RT_STRING` 72 (pt-BR): 4 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/72_pt-BR.txt`.
* `RT_STRING` 613 (pt-BR): 2 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/613_pt-BR.txt`.
* `RT_STRING` 619 (pt-BR): 3 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/619_pt-BR.txt`.
* `RT_STRING` 620 (pt-BR): 16 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/620_pt-BR.txt`.
* `RT_STRING` 621 (pt-BR): 16 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/621_pt-BR.txt`.
* `RT_STRING` 622 (pt-BR): 14 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/622_pt-BR.txt`.
* `RT_STRING` 623 (pt-BR): 5 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/623_pt-BR.txt`.
* `RT_STRING` 624 (pt-BR): 2 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/624_pt-BR.txt`.
* `RT_STRING` 625 (pt-BR): 10 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/625_pt-BR.txt`.
* `RT_STRING` 626 (pt-BR): 15 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/626_pt-BR.txt`.
* `RT_STRING` 627 (pt-BR): 13 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/627_pt-BR.txt`.
* `RT_STRING` 632 (pt-BR): 9 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/632_pt-BR.txt`.
* `RT_STRING` 638 (pt-BR): 3 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/638_pt-BR.txt`.
* `RT_STRING` 639 (pt-BR): 4 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/639_pt-BR.txt`.
* `RT_STRING` 640 (pt-BR): 7 non-empty strings → `analysis/report/resources/setup_wm_exe_mui/RT_STRING/640_pt-BR.txt`.
* `RT_MESSAGETABLE` 1 (pt-BR): 4 messages → `analysis/report/resources/setup_wm_exe_mui/RT_MESSAGETABLE/1_pt-BR.txt`.
Per-entry detail: `analysis/report/resources/setup_wm_exe_mui/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 4 ASCII, 881 UTF-16LE (722 unique).
* GUIDs 0, URLs 6, UPnP URNs 0, registry paths 0, referenced modules 2.

* URLs: `,http://go.microsoft.com/fwlink/?linkid=47486-http://go.microsoft.com/fwlink/?LinkId=120762IUma atualiza`, `-http://go.microsoft.com/fwlink/?LinkId=59177&`, `-las visitando http://windowsupdate.microsoft.com_O computador est`, `deos digitais e muito mais.,http://go.microsoft.com/fwlink/?linkid=44073`, `es da loja: aguarde...-http://go.microsoft.com/fwlink/?LinkId=120762^Algumas informa`, `o.-http://go.microsoft.com/fwlink/?linkid=120722) Definir %s como minha loja online ativa.) Definir %s como minha loja online ativa.`

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/setup_wm_exe_mui.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `not recorded`.
* CFG: 0 functions, 0 call edges, built in 0.06s; selection rule: n/a.
* Emitted pseudocode: 0 functions (? decompiled successfully).

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

> no functions recovered by CFGFast — image has no executable code section (resource-only module such as a .mui payload)

## 8. Reconstruction and validation

* Reconstruction harness: `recon/` (generated by `analysis/tools/recon_build.py`) — `module_facts.h` (sections, resource RVAs, image digest), `guids.h`, `enums.h`, `interfaces.h`, `compile_check.c`, plus `CMakeLists.txt`.
* Last build validation: target `wmp_recon_setup_wm_exe_mui` — compiled and all runtime checks passed.
* The harness re-derives this module's recorded digests and GUIDs from the original file at run time; see `analysis/report/validation.md` §3.

`analysis/report/disasm.md` records the instruction-level cross-check (capstone vs GNU objdump through REA) for this module.

## 9. Interpretation and open items

* Role **[inferred]**: Utilitário de Configuração do Microsoft Windows Media (internal name `setup_wm.exe`)
* [unresolved] decompilation status is `None` — the function index may be incomplete
* [unresolved] `MUI` payload type-list not recovered (resource 1)

