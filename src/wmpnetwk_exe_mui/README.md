# `bin/pt-BR/wmpnetwk.exe.mui` — module dossier

> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource
> extraction, string scan, decompilation index and COM surface. Claims are tagged
> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the
> evidence) or **[unresolved]** (unknown, with the remaining work stated).

## 1. Identity **[verified]**

* Path: `bin/pt-BR/wmpnetwk.exe.mui`; size 39,424 bytes.
* SHA-256: `d8728825ec8dc4a3c42c1621da4b632167582512da73b391ca21f8b5026a7fd9`
* Format: PE32+ (IMAGE_FILE_MACHINE_AMD64), subsystem `IMAGE_SUBSYSTEM_WINDOWS_GUI`, linker 9.0, image base `0x180000000`, entry point RVA `0x0`.
* Built: 2009-07-14 00:23:55Z (PE TimeDateStamp 1247531035).
* PDB: ; overlay: none; TLS: no; CLR: no.
* DLL characteristics: ASLR, DEP.

### Version resource **[verified]**

* CompanyName: `Microsoft Corporation`
* FileDescription: `Serviço de Compartilhamento de Rede do Windows Media Player`
* FileVersion: `12.0.7600.16385 (win7_rtm.090713-1255)`
* ProductName: `Sistema Operacional Microsoft® Windows®`
* ProductVersion: `12.0.7600.16385`
* InternalName: `Windows Media Player Network Sharing Service`
* OriginalFilename: `WMPNetwk.exe.mui`
* LegalCopyright: `© Microsoft Corporation. Todos os direitos reservados.`

## 2. Sections **[verified]**

| Section | RVA | Virtual size | Raw size | Entropy | Flags |
|---|---|---|---|---|---|
| `.rsrc` | `0x1000` | 40,960 | 38,912 | 3.40 | CNT_INITIALIZED_DATA, MEM_READ |

## 3. API surface **[verified]**

* Imported DLLs: **0**; imported functions: **0**; delay-loaded DLLs: **0**; exported symbols: **0**.

| Family | DLLs | Functions |
|---|---|---|

Full per-DLL function listing: [`imports.txt`](imports.txt); raw objdump symbol evidence: `analysis/report/rea-evidence/wmpnetwk_exe_mui/objdump-symbols.json`.

## 4. Resources **[verified]**

* Resource entries: **14** (raw directory walk; pefile cross-check agrees); message strings decoded: 96.
* Types: MUI×1, RT_MESSAGETABLE×1, RT_STRING×11, RT_VERSION×1.

* `MUI` payload (1, pt-BR): language tag `pt-BR`, declares localised types [] — matches sibling `.mui` file: None.
* `RT_STRING` 7 (pt-BR): 3 non-empty strings → `analysis/report/resources/wmpnetwk_exe_mui/RT_STRING/7_pt-BR.txt`.
* `RT_STRING` 13 (pt-BR): 2 non-empty strings → `analysis/report/resources/wmpnetwk_exe_mui/RT_STRING/13_pt-BR.txt`.
* `RT_STRING` 26 (pt-BR): 2 non-empty strings → `analysis/report/resources/wmpnetwk_exe_mui/RT_STRING/26_pt-BR.txt`.
* `RT_STRING` 32 (pt-BR): 1 non-empty strings → `analysis/report/resources/wmpnetwk_exe_mui/RT_STRING/32_pt-BR.txt`.
* `RT_STRING` 44 (pt-BR): 3 non-empty strings → `analysis/report/resources/wmpnetwk_exe_mui/RT_STRING/44_pt-BR.txt`.
* `RT_STRING` 45 (pt-BR): 9 non-empty strings → `analysis/report/resources/wmpnetwk_exe_mui/RT_STRING/45_pt-BR.txt`.
* `RT_STRING` 46 (pt-BR): 1 non-empty strings → `analysis/report/resources/wmpnetwk_exe_mui/RT_STRING/46_pt-BR.txt`.
* `RT_STRING` 51 (pt-BR): 1 non-empty strings → `analysis/report/resources/wmpnetwk_exe_mui/RT_STRING/51_pt-BR.txt`.
* `RT_STRING` 54 (pt-BR): 3 non-empty strings → `analysis/report/resources/wmpnetwk_exe_mui/RT_STRING/54_pt-BR.txt`.
* `RT_STRING` 188 (pt-BR): 8 non-empty strings → `analysis/report/resources/wmpnetwk_exe_mui/RT_STRING/188_pt-BR.txt`.
* `RT_STRING` 189 (pt-BR): 3 non-empty strings → `analysis/report/resources/wmpnetwk_exe_mui/RT_STRING/189_pt-BR.txt`.
* `RT_MESSAGETABLE` 1 (pt-BR): 96 messages → `analysis/report/resources/wmpnetwk_exe_mui/RT_MESSAGETABLE/1_pt-BR.txt`.
Per-entry detail: `analysis/report/resources/wmpnetwk_exe_mui/index.json`.

## 5. String and identifier evidence **[verified]**

* Literals: 4 ASCII, 486 UTF-16LE (281 unique).
* GUIDs 0, URLs 0, UPnP URNs 0, registry paths 5, referenced modules 1.

* Registry paths: `o '%1', a chave do Registro 'HKLM\SOFTWARE\Microsoft\Windows Media Player NSS\3.0' n`, `o foi inicializado porque a chave do Registro 'HKLM\SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Media Servers' n`, `o foi instalado porque RegOpenKey(HKLM\SYSTEM\CurrentControlSet\Services\%1) encontrou um erro '%2'. Verifique se a chave existe e se o grupo Administradores tem permiss`, `o foi instalado porque as chaves do Registro em 'HKLM\SOFTWARE\Microsoft\Windows Media Player NSS\3.0' n`, `o foi recuperado devido ao erro '%1'. Exclua o valor 'ModelName' na chave do Registro HKLM\SOFTWARE\Microsoft\Windows Media Player NSS\3.0 e reinicie o servi`

Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: `analysis/report/data/strings/wmpnetwk_exe_mui.json`.

## 6. Decompiled behaviour **[verified for the emitted functions]**

* Tool: angr 9.2.213 (CFGFast + Decompiler), status `not recorded`.
* CFG: 0 functions, 0 call edges, built in 0.06s; selection rule: n/a.
* Emitted pseudocode: 0 functions (? decompiled successfully).

Index: [`decompiled/index.md`](decompiled/index.md). Decompiler output is reconstructed pseudocode, **not** original source.

> no functions recovered by CFGFast — image has no executable code section (resource-only module such as a .mui payload)

## 8. Reconstruction and validation

* Reconstruction harness: `recon/` (generated by `analysis/tools/recon_build.py`) — `module_facts.h` (sections, resource RVAs, image digest), `guids.h`, `enums.h`, `interfaces.h`, `compile_check.c`, plus `CMakeLists.txt`.
* Last build validation: target `wmp_recon_wmpnetwk_exe_mui` — compiled and all runtime checks passed.
* The harness re-derives this module's recorded digests and GUIDs from the original file at run time; see `analysis/report/validation.md` §3.

`analysis/report/disasm.md` records the instruction-level cross-check (capstone vs GNU objdump through REA) for this module.

## 9. Interpretation and open items

* Role **[inferred]**: Serviço de Compartilhamento de Rede do Windows Media Player (internal name `Windows Media Player Network Sharing Service`)
* [unresolved] decompilation status is `None` — the function index may be incomplete
* [unresolved] `MUI` payload type-list not recovered (resource 1)

