# TODO: Faithful 1:1 Decompilation & Clean-Room Reconstruction

> **Master Task List for Windows 7 Media Player 12 Clean-Room Decompilation**
> 
> This document outlines all tasks required for a faithful 1:1 decompilation and reconstruction of Windows Media Player 12 from the original binaries in `bin/`. Tasks are organized by the six methodological phases established in `analysis/report/methodology.md`.
> 
> **Status Legend:**
> - ✅ Complete
> - 🟡 Partial/In Progress
> - ❌ Not Started
> - 🔄 Iterative/Continuous
> - ⚠️ Blocked/External Dependency

---

## Phase 0: Prerequisites & Environment Setup
*Pre-requisite tasks that must be completed before any analysis phase*

- [x] ✅ **P0.1** - Verify repository integrity and binary authenticity
  - [x] Confirm all 53 input files in `bin/` are byte-identical to upstream (`7808d47` and `5c564f7`; restored 14 `.jpg`/`.png` icon files re-encoded by ImgBot in PR #1 and added `.imgbotconfig`)
  - [x] Verify SHA-256 hashes match `analysis/report/data/inventory.json` (`53/53` SHA-256, SHA-1, MD5, and byte-size matches)
  - [x] Compare binaries against Microsoft's published update manifests (`analysis/tools/manifest_verify.py` → `analysis/report/update-manifests.md`, `analysis/report/data/update-manifests.json`: `53/53` mapped to Windows 7 CBS/WinSxS packages `Microsoft-Windows-MediaPlayer-Package` and `Microsoft-Windows-WMPNetworkSharingService-Package` with `publicKeyToken="31bf3856ad364e35"`, `28/28` valid PE `CheckSum` across 5 servicing KB waves (`RTM 7600.16385`, `KB976932`, `KB3150513`, `KB3179573`, `KB4507449`), `13` embedded `RT_MANIFEST` SxS XMLs verified, `43/53` filenames tracked in `m417z/winbindex` with `7/7` unchanged static assets matching by exact SHA-256)
  
- [x] ✅ **P0.2** - Environment provisioning (`requirements.txt`, `analysis/tools/setup_env.sh`)
  - [x] Python 3.11+ with required packages (`angr==9.2.213`, `pefile==2024.8.26`, `capstone==5.0.6`, `pyelftools==0.33`, `bitstring==3.1.9`)
  - [x] Node.js 22+ (`v22.22.3`) with REA 6.5.0 (`rea-agents@6.5.0`) installed
  - [x] CMake 4.4+ (`4.4.4`) and ninja (`1.13.2`) for build validation
  - [x] GNU objdump 2.40+ (`2.40`) for disassembly cross-checks
  
- [x] ✅ **P0.3** - Toolchain validation (`analysis/tools/phase0_check.py` → `analysis/report/phase0.md`, `analysis/report/data/phase0.json`)
  - [x] Verify all tools produce consistent, reproducible outputs (two-run determinism checks across `peutils`, `pefile`, `capstone`, `objdump`, `angr CFGFast`, and `rea inspect-pe-resources`)
  - [x] Document tool versions in `methodology.md` §2 (cross-verified against installed runtime)
  - [x] Establish evidence archiving conventions (`168/168` REA operations with full provenance & SHA-256 verification, `539/539` resource payloads, `888/888` decompiled function provenance headers)

---

## Phase 1: Inventory & Identification
*Comprehensive cataloging and fingerprinting of all input artifacts*

### Core Inventory Tasks
- [x] ✅ **P1.1** - Recursive enumeration of `bin/` directory
  - [x] Detect all 53 files (16 PE32+ executables/DLLs, 12 .mui satellites, 6 UPnP XML, 18 icons, 1 .wmz skin)
  - [x] Classify file types by magic bytes
  
- [x] ✅ **P1.2** - PE file structural analysis
  - [x] COFF header fields extraction (Machine, NumberOfSections, TimeDateStamp, etc.)
  - [x] Optional header fields (Magic, AddressOfEntryPoint, ImageBase, etc.)
  - [x] Section table parsing (Name, VirtualSize, VirtualAddress, SizeOfRawData, Characteristics)
  - [x] Data directory extraction (Export, Import, Resource, Exception, Security, etc.)
  - [x] Import/Export/Delay-Import tables
  
- [x] ✅ **P1.3** - Hashing and integrity
  - [x] SHA-256 primary hashes for all 53 files
  - [x] SHA-1 and MD5 secondary hashes
  - [x] Duplicate detection by content
  
- [x] ✅ **P1.4** - Advanced PE features
  - [x] Rich header parsing (PDB path, compiler version info)
  - [x] Debug directory (PDB path + GUID/age)
  - [x] Authenticode signature presence check
  - [x] CLR/TLS/CFG flags detection
  - [x] DllCharacteristics parsing
  - [x] Overlay detection
  
- [x] ✅ **P1.5** - Version resource analysis
  - [x] RT_VERSION resource parsing for all modules
  - [x] Build timestamp analysis (identify 4 build waves: 2009-07 RTM, 2010-11 SP1, 2016-03/2016-08 LDR, 2019-06 final LDR)
  - [x] Product version identification (12.0.7601.17514, etc.)
  
- [x] ✅ **P1.6** - Documentation
  - [x] Generate `analysis/report/inventory.md`
  - [x] Generate `analysis/report/data/inventory.json`
  - [x] Verify blob identity proof (53/53 files match upstream)

### Validation Checkpoints for Phase 1
- [x] ✅ All 53 files cataloged with complete metadata
- [x] ✅ All PE headers parsed and validated
- [x] ✅ All hashes computed and stored
- [x] ✅ Version resources decoded
- [x] ✅ `git diff --name-only origin/main HEAD -- bin/` returns empty (input integrity)

---

## Phase 2: Toolchain & REA Assessment
*Evaluation and configuration of analysis tools, including REA integration*

### REA Integration Tasks
- [x] ✅ **P2.1** - REA installation and health check
  - [x] Install REA 6.5.0 via npm
  - [x] Run `rea doctor --json` and document limitations
  - [x] Verify CLI accessibility via `npx rea`
  
- [x] ✅ **P2.2** - REA capability assessment
  - [x] Execute `rea capabilities --json`
  - [x] Document available providers (objdump works, Ghidra/Hopper/IDA missing)
  - [x] Identify provider gaps and limitations
  
- [x] ✅ **P2.3** - REA evidence collection
  - [x] Run `rea inspect-with-objdump` for all 28 PE images
    - [x] file_headers operation
    - [x] section_headers operation
    - [x] symbols operation
    - [x] relocations operation
    - [x] disassemble_all operation (27/28, setup_wm.exe too large)
  - [x] Run `rea inspect-pe-resources` for all 28 PE images
  - [x] Run `rea inspect-artifact` for non-PE artifacts (.wmz, XML files)
  - [x] Archive all 168 operations with provenance metadata
  
- [x] ✅ **P2.4** - REA evidence archiving
  - [x] Store outputs in `analysis/report/rea-evidence/<module>/`
  - [x] Create `manifest.json` with argv, exit code, duration, SHA-256, evidence id, provider, subject hash
  - [x] Gzip-compress large JSON outputs (16 files)
  - [x] Implement decompression utility (`rea_batch.py --decompress`)
  
- [x] ✅ **P2.5** - REA limitations documentation
  - [x] Document deep analysis provider unavailability (Ghidra/Hopper/IDA not accessible)
  - [x] Document ELF-only operations (inspect-binary-layout)
  - [x] Document PE format reporting as "unknown" in objdump lane
  - [x] Record all limitations in methodology and validation reports

### Alternative Tool Setup
- [x] ✅ **P2.6** - Project-specific tooling
  - [x] Develop `peutils.py` for independent PE parsing
  - [x] Configure angr for CFG and decompilation
  - [x] Configure capstone for instruction decoding
  - [x] Configure pefile for enrichment (import/export/resource listings, Rich header)

### Validation Checkpoints for Phase 2
- [x] ✅ REA successfully installed and partially functional
- [x] ✅ 168 REA operations executed and archived
- [x] ✅ Alternative toolchain (peutils, angr, capstone) configured
- [x] ✅ All limitations documented transparently

---

## Phase 3: Structural Analysis
*Deep static analysis of binary structure, resources, strings, and interfaces*

### Resource Analysis
- [x] ✅ **P3.1** - Resource directory walking
  - [x] Independent raw walk of IMAGE_RESOURCE_DIRECTORY for all 28 images
  - [x] Cross-check against pefile walker (28/28 agreement)
  - [x] Extract all 539 resource payloads
  
- [x] ✅ **P3.2** - Resource type identification
  - [x] Standard types: RT_MESSAGETABLE, RT_STRING, RT_VERSION, RT_DIALOG, RT_MENU, RT_ACCELERATOR
  - [x] RT_GROUP_ICON + RT_ICON (assembled into .ico files)
  - [x] WMP-specific types: UIFILE, REGISTRY, MUI, IMAGE, TYPELIB, WEVT_TEMPLATE
  - [x] Raw dumps for RCDATA and unrecognized types
  
- [x] ✅ **P3.3** - Resource decoding
  - [x] Message tables (121 messages, 7 tables, 7 locales)
  - [x] String tables
  - [x] Version resources (with UTF-8/UTF-16 encoding quirk handling)
  - [x] Dialog definitions
  - [x] Menu definitions
  - [x] Accelerator tables
  - [x] Icon resources (assembled .ico files)
  - [x] UIFILE (DirectUI duixml markup)
  - [x] REGISTRY (ATL registrar scripts)
  - [x] MUI (localisation descriptors with language tags)
  - [x] IMAGE (TIFF images - 118 total)
  - [x] TYPELIB (MSFT type libraries - 5 modules)
  - [x] WEVT_TEMPLATE (ETW manifest templates - extracted verbatim)
  
- [x] ✅ **P3.4** - Resource verification
  - [x] Type sets confirmed 28/28 between project walker and pefile
  - [x] Payload digests confirmed 539/539
  - [x] Section names confirmed 28/28 in REA objdump output

### String Analysis
- [x] ✅ **P3.5** - String extraction
  - [x] ASCII literals extraction (68,867 total)
  - [x] UTF-16LE literals extraction (11,194 total)
  - [x] File offset and RVA/VA recording for all strings
  
- [x] ✅ **P3.6** - String classification
  - [x] GUIDs identification and extraction
  - [x] URLs
  - [x] UPnP URNs
  - [x] Registry paths
  - [x] Referenced modules
  - [x] MIME types
  - [x] HTTP/UPnP verbs
  - [x] Format strings
  - [x] XML tokens
  - [x] API-shaped names
  
- [x] ✅ **P3.7** - Per-module string highlights
  - [x] Generate `src/<module>/strings/highlights.md` for all 28 modules
  - [x] Curate notable strings per module

### COM Surface Analysis
- [x] ✅ **P3.8** - Type library decoding
  - [x] Decode all 5 embedded MSFT type libraries
  - [x] Extract interfaces, coclasses, member ids, vtable slots
  - [x] Generate .h files (GUID constants + vtable slot order)
  - [x] Generate .idl files
  - [x] Generate .json files (full type records)
  - [x] Store in `src/<module>/typelib/`
  
- [x] ✅ **P3.9** - ATL registrar script analysis
  - [x] Decode REGISTRY resources as text
  - [x] Extract GUIDs from registrar scripts
  - [x] Identify 4 registrar scripts across modules
  
- [x] ✅ **P3.10** - COM surface integration
  - [x] Join type library data with export tables
  - [x] Generate `analysis/report/com-surface.md`
  - [x] Generate `analysis/report/data/com-surface.json`
  - [x] Identify 16 interfaces and 7 coclasses
  - [x] Locate all 31 typelib GUIDs as 16-byte constants in their declaring images
  
- [x] ✅ **P3.11** - API mapping
  - [x] Analyze import tables for all 28 modules
  - [x] Identify inter-module relationships (0 static inter-module imports found)
  - [x] Document all external dependencies
  - [x] Generate `analysis/report/api-map.md`
  - [x] Generate `analysis/report/dependencies.md`
  - [x] Confirm modules are COM/RPC/UPnP peers, not statically linked

### Call Graph Analysis
- [x] ✅ **P3.12** - Control flow graph generation
  - [x] Run angr CFGFast with normalize=True, data_references=True for all 28 modules
  - [x] Generate function boundaries and call edges
  - [x] Store `_cfg.json` for each module
  - [x] Total: 73,277 functions discovered across 16 code-bearing modules

### Validation Checkpoints for Phase 3
- [x] ✅ All 539 resource payloads extracted and decoded (where format known)
- [x] ✅ All 80,061 strings extracted and classified
- [x] ✅ All 5 type libraries fully decoded
- [x] ✅ COM surface fully mapped (16 interfaces, 7 coclasses)
- [x] ✅ API map complete (0 inter-module imports, all external dependencies documented)
- [x] ✅ Call graphs generated for all modules

---

## Phase 4: Decompilation & Behaviour
*Function-level decompilation and behavioral analysis*

### Decompilation Setup
- [x] ✅ **P4.1** - Decompiler configuration
  - [x] Configure angr decompiler with appropriate options
  - [x] Set up function selection criteria
  - [x] Configure provenance header generation
  
- [x] ✅ **P4.2** - Decompilation parameters
  - [x] Function selection: forced entry points (image entry + exported functions)
  - [x] Secondary selection: by basic-block count descending
  - [x] Filters: --min-blocks 2 to skip thunks
  - [x] Cap: --max-functions 60 per module (documented selection rule)

### Per-Module Decompilation
- [x] ✅ **P4.3** - Batch decompilation execution
  - [x] Run `analysis/tools/decompile.py` for all 16 code-bearing modules
  - [x] Execute `analysis/tools/run_decompile_all.sh 60 2400`
  - [x] Generate pseudocode for 888 functions total
  
- [x] ✅ **P4.4** - Decompilation output generation
  - [x] Generate `src/<module>/decompiled/NNNN_<addr>_<name>.c` for each function
  - [x] Include provenance header with module, address, size, block count, angr version, artifact SHA-256
  - [x] Generate `index.json` with selection rule, callers/callees, coverage, per-function metadata
  - [x] Generate `index.md` for human-readable index
  - [x] Generate `_cfg.json` call graphs
  
- [x] ✅ **P4.5** - Small module handling
  - [x] wmpshare.exe: 29/76 functions (entire CFG emitted, module < cap)
  - [x] wmpconfig.exe: 19/58 functions (module < cap)
  - [x] Other small modules: complete or near-complete coverage
  
- [ ] ⚠️ **P4.6** - Coverage expansion (optional, for completeness)
  - [ ] Increase --max-functions cap from 60 to higher value (e.g., 200)
  - [ ] Run `bash analysis/tools/run_decompile_all.sh 200 3600`
  - [ ] Review and validate additional decompiled functions
  - [ ] Update coverage metrics in progress report

### Behavioral Analysis
- [x] ✅ **P4.7** - Entry point coverage
  - [x] Verify all module entry points decompiled
  - [x] Verify all exported functions decompiled (where within cap)
  
- [ ] ⚠️ **P4.8** - COM vtable analysis (blocked: no dynamic analysis)
  - [ ] Identify functions reached only through COM vtables
  - [ ] Resolve callback tables where possible
  - [ ] Document limitations of static analysis for data-driven code
  
- [x] ✅ **P4.9** - Decompilation failure handling
  - [x] Document functions where decompiler failed
  - [x] Record failure reasons in index
  - [x] No stubs generated for failures (honest reporting)

### Validation Checkpoints for Phase 4
- [x] ✅ 888 functions decompiled across 16 modules
- [x] ✅ All entry points and exports covered (within cap)
- [x] ✅ Provenance headers included in all outputs
- [x] ✅ Honest coverage reporting (1.2% of 73,277 total functions)
- [ ] ⚠️ Optional: Expanded coverage with higher cap

---

## Phase 5: Reconstruction & Documentation
*Organization of decompiled code, COM definitions, and comprehensive documentation*

### Module Tree Structure
- [x] ✅ **P5.1** - Module directory structure
  - [x] Create `src/<module>/` for all 28 modules
  - [x] Create `decompiled/` subdirectory for pseudocode
  - [x] Create `strings/` subdirectory with highlights.md
  - [x] Create `typelib/` subdirectory for COM definitions (where applicable)
  - [x] Create `recon/` subdirectory for validation harness
  
- [x] ✅ **P5.2** - Module artifacts
  - [x] Generate `imports.txt` for each module
  - [x] Generate `exports.txt` for each module
  - [x] Generate `CMakeLists.txt` for each module
  - [x] Generate module dossier (`README.md`) for each module

### COM Reconstruction
- [x] ✅ **P5.3** - Type library reconstruction
  - [x] Generate .h files with GUID constants and vtable slot order
  - [x] Generate .idl files with full type definitions
  - [x] Generate .json files with complete type records
  - [x] Store in `src/<module>/typelib/` for 5 modules with embedded type libraries
  
- [x] ✅ **P5.4** - Interface documentation
  - [x] Document INSSManager (9 methods) in wmpnssci.dll
  - [x] Document INSSDevice, INSSDevices, INSSProperties, INSSNotify
  - [x] Document ServiceStatus, EventReason, AuthorizationStatus enums
  - [x] Document IWindowsMediaLibrarySharingServices in WMPMediaSharing.dll
  - [x] Document IToleranceVis in mpvis.DLL
  - [x] Document IWMPRichPreviewLauncher in wmprph.exe
  - [x] Document UPnP interfaces in wmpnetwk.exe

### Documentation Generation
- [x] ✅ **P5.5** - Module dossiers
  - [x] Generate `src/<module>/README.md` for all 28 modules
  - [x] Label all claims as [verified], [inferred], or [unresolved]
  - [x] Document open items and unresolved parts for each module
  - [x] Cross-reference evidence files
  
- [x] ✅ **P5.6** - Aggregate reports
  - [x] Generate `analysis/report/module-analysis.md` (coverage matrix)
  - [x] Generate `analysis/report/data-formats.md` (binary layout documentation)
  - [x] Document evidence for each field in decoded formats
  - [x] List undecoded parts honestly
  
- [x] ✅ **P5.7** - Methodology documentation
  - [x] Generate `analysis/report/methodology.md`
  - [x] Document phase-by-phase method
  - [x] Document toolchain and constraints
  - [x] Document evidence tagging conventions
  - [x] Document reproducibility procedures

### Validation Harness
- [x] ✅ **P5.8** - Self-check harness generation
  - [x] Generate `src/<module>/recon/` directories
  - [x] Create generated C programs that re-derive recorded facts from `bin/`
  - [x] Generate `src/CMakeLists.txt` for build system
  - [x] Target: Recompute SHA-256 for each original binary
  - [x] Target: Recompute all 539 resource payload digests
  - [x] Target: Recompute all 40 recovered GUIDs
  
- [x] ✅ **P5.9** - Build system
  - [x] Configure CMake build system
  - [x] Create build targets for all 28 modules
  - [x] Ensure idempotent builds

### Validation Checkpoints for Phase 5
- [x] ✅ All 28 module trees created with complete structure
- [x] ✅ All module dossiers generated with honest labeling
- [x] ✅ All COM definitions reconstructed and documented
- [x] ✅ Validation harness generated for all modules
- [x] ✅ Build system configured and tested

---

## Phase 6: Validation
*Independent cross-checks, compilation verification, and comprehensive validation*

### Cross-Tool Validation
- [x] ✅ **P6.1** - Run-time re-derivation
  - [x] Compile all 28 CMake targets in validation harness
  - [x] Execute all 28 targets to re-derive facts from `bin/`
  - [x] Verify SHA-256 for all 28 original binaries
  - [x] Verify all 539 resource payload digests (RVA → section → file offset → hash)
  - [x] Verify all 40 recovered GUIDs (31 from type libraries + 9 from text form)
  - [x] Result: 0 failed checks, 0 unresolved type renderings
  
- [x] ✅ **P6.2** - Two-decoder instruction comparison
  - [x] Compare capstone vs GNU objdump decoding
  - [x] Total: 11,288 instructions compared
  - [x] Result: 11,288/11,288 byte-identical
    - [x] 10,986 exact matches
    - [x] 301 longer than objdump's 7-byte display width (matched on prefix)
    - [x] 1 prefix-split case hand-verified
  - [x] All 11,287 instructions with full byte output also agree on mnemonics
  
- [x] ✅ **P6.3** - Cross-tool structure agreement
  - [x] Resource type sets: 28/28 agreement between project walker and pefile
  - [x] Payload digests: 539/539 identical between project walker, pefile, and REA parser
  - [x] Section names: 28/28 agreement in REA objdump output
  
- [x] ✅ **P6.4** - Input integrity verification
  - [x] Verify `git diff --name-only origin/main HEAD -- bin/` is empty
  - [x] Confirm no tool opens `bin/` for writing
  - [x] Verify all analyzed files are byte-identical to repository upstream

### Build Validation
- [x] ✅ **P6.5** - Compilation checks
  - [x] Compile all 28 validation harness targets
  - [x] Verify all targets compile without errors
  - [x] Generate `analysis/report/data/build-results.json`
  
- [x] ✅ **P6.6** - Runtime validation
  - [x] Execute all 28 compiled targets
  - [x] Verify all checks pass (0 failures)
  - [x] Document execution times and resource usage

### Validation Reporting
- [x] ✅ **P6.7** - Validation report generation
  - [x] Generate `analysis/report/validation.md`
  - [x] Document all validation checks performed
  - [x] Document all discrepancies found and their resolutions
  - [x] Document limitations of validation (no runtime behavior testing)
  
- [x] ✅ **P6.8** - Progress tracking
  - [x] Generate `analysis/report/progress.md`
  - [x] Track phase status and completion metrics
  - [x] Document per-module status
  - [x] Provide honest coverage statements
  
- [x] ✅ **P6.9** - Final report
  - [x] Generate `analysis/report/final-report.md`
  - [x] Summarize all findings and methods
  - [x] Document what was recovered and where it lives
  - [x] Document verification methods and results
  - [x] Document technical findings
  - [x] Document REA contribution
  - [x] List all unknowns with precise statements

### Validation Checkpoints for Phase 6
- [x] ✅ All 28 validation harness targets compile and pass
- [x] ✅ 11,288/11,288 instructions byte-identical across decoders
- [x] ✅ 539/539 resource payload digests verified
- [x] ✅ 40/40 GUIDs verified
- [x] ✅ Input integrity confirmed (0 modifications to bin/)
- [x] ✅ All validation reports generated

---

## Post-Phase 6: Clean-Room Reconstruction Tasks
*Tasks for achieving a complete, buildable clean-room reconstruction*

### Code Reconstruction
- [ ] 🔄 **R1** - Complete function decompilation
  - [ ] Decompile all 73,277 functions (currently 888, 1.2% coverage)
  - [ ] Resolve decompiler failures and edge cases
  - [ ] Manual review and correction of decompiled code
  
- [ ] 🔄 **R2** - Type recovery
  - [ ] Recover original type names (currently struct_*, field_* placeholders)
  - [ ] Reconstruct data structures from usage patterns
  - [ ] Validate types against COM interfaces and type libraries
  
- [ ] 🔄 **R3** - Control flow validation
  - [ ] Verify all control flow paths match original binaries
  - [ ] Cross-check against disassembly for accuracy
  - [ ] Resolve any discrepancies between decompiled code and original

### Resource Reconstruction
- [ ] 🔄 **R4** - Complete resource decoding
  - [ ] Decode WEVT_TEMPLATE (ETW manifest template) internal schema
  - [ ] Decode RT_BITMAP and TIFF pixel data
  - [ ] Decode MUI header dwords beyond language tag
  - [ ] Decode #1017 payloads (UPnP-related)
  - [ ] Decode RCDATA payloads where format is known

### COM Surface Completion
- [ ] 🔄 **R5** - Full COM interface reconstruction
  - [ ] Reconstruct all COM interfaces from type libraries
  - [ ] Implement all vtable methods
  - [ ] Validate COM object creation and lifetime management
  - [ ] Verify IID/CLSID mappings

### Build System & Integration
- [ ] 🔄 **R6** - Complete build system
  - [ ] Create full CMake build configuration
  - [ ] Set up all module interdependencies (note: 0 static inter-module imports found)
  - [ ] Configure COM registration
  - [ ] Set up resource compilation
  - [ ] Configure manifest generation
  
- [ ] 🔄 **R7** - Linking and integration
  - [ ] Resolve all external dependencies (DLL imports)
  - [ ] Create import libraries or stubs for system DLLs
  - [ ] Set up proper linking configuration
  - [ ] Validate module boundaries and exports

### Testing & Validation
- [ ] ⚠️ **R8** - Runtime behavior validation (blocked: requires Windows)
  - [ ] Set up Windows 7 SP1 x64 test environment
  - [ ] Execute reconstructed binaries
  - [ ] Compare runtime behavior with original
  - [ ] Validate COM object creation and method calls
  - [ ] Test media playback functionality
  
- [ ] 🔄 **R9** - Functional testing
  - [ ] Create comprehensive test suite
  - [ ] Test all documented COM interfaces
  - [ ] Test resource loading and display
  - [ ] Test network sharing (DLNA/UPnP) functionality
  - [ ] Test Digital Media Controller features

### Documentation & Verification
- [ ] 🔄 **R10** - Complete documentation
  - [ ] Document all reconstructed APIs
  - [ ] Document all data structures
  - [ ] Document all algorithms and logic
  - [ ] Create architecture diagrams
  - [ ] Document build and deployment procedures
  
- [ ] 🔄 **R11** - Final verification
  - [ ] Byte-level comparison of reconstructed binaries with originals
  - [ ] Functional equivalence testing
  - [ ] Performance comparison
  - [ ] Memory usage comparison

---

## Known Limitations & Blockers

### Environmental Constraints
- ⚠️ **B1** - No Windows execution environment available
  - Cannot perform dynamic analysis
  - Cannot test runtime behavior
  - Cannot validate COM object interactions
  - Cannot verify media playback functionality
  
- ⚠️ **B2** - No Ghidra/Hopper/IDA access
  - Cannot use REA deep analysis providers
  - Limited to angr/capstone for decompilation
  - May miss some advanced analysis features
  
- ⚠️ **B3** - Network restrictions
  - Cannot download GitHub release assets (`objects.githubusercontent.com`)
  - Cannot query Microsoft Symbol Server (`msdl.microsoft.com`) directly for `.pdb` files (full RSDS GUIDs + ages are extracted in `inventory.json` and `update-manifests.json` for offline symbol lookup)
  - *(Resolved in Phase 0.1)*: Binary authenticity and WinSxS/CBS update manifest provenance were verified via GitHub-hosted indices (`m417z/winbindex`, `LL520126427/SxSCleaner`, `xqcyberscore/nvt`) and embedded PE/manifest structures (`analysis/report/update-manifests.md`)

### Technical Challenges
- ⚠️ **B4** - Decompiler limitations
  - angr's variable/type recovery invents names (struct_*, field_*)
  - Some functions may not decompile correctly
  - Data-driven code may be invisible to CFG
  
- ⚠️ **B5** - Undocumented formats
  - WEVT_TEMPLATE schema undocumented
  - MUI header fields beyond language tag undocumented
  - Some RT_BITMAP/TIFF details undocumented
  
- ⚠️ **B6** - Coverage limitations
  - Current cap at 60 functions per module (1.2% of total)
  - Raising cap increases time and resource requirements
  - Full coverage (73,277 functions) would require significant resources

---

## Reproduction Procedures

### Full Pipeline Reproduction
```bash
# 0. Phase 0: Environment setup, authenticity & toolchain validation
bash analysis/tools/setup_env.sh
python3 analysis/tools/manifest_verify.py
python3 analysis/tools/phase0_check.py

# (or manual install using pinned requirements.txt)
sudo pip3 install --break-system-packages --prefer-binary -r requirements.txt
sudo npm i -g rea-agents@6.5.0

# 1. Inventory and identification
python3 analysis/tools/inventory.py

# 2. REA evidence collection
python3 analysis/tools/rea_batch.py

# 3. Structural analysis
python3 analysis/tools/resources.py
python3 analysis/tools/strings_scan.py
python3 analysis/tools/typelib.py
python3 analysis/tools/com_surface.py
python3 analysis/tools/api_map.py

# 4. Decompilation
python3 analysis/tools/decompile.py bin/WMPNSSUI.dll --max-functions 60
bash analysis/tools/run_decompile_all.sh 60 2400

# 5. Module dossiers and reports
python3 analysis/tools/module_report.py

# 6. Validation
python3 analysis/tools/disasm.py
python3 analysis/tools/recon_build.py --build
```

### Partial Reproduction
Each tool accepts optional artifact/module arguments for targeted reproduction:
```bash
# Re-run inventory for specific file
python3 analysis/tools/inventory.py bin/wmplayer.exe

# Re-run decompilation for specific module with different cap
python3 analysis/tools/decompile.py bin/wmpnetwk.exe --max-functions 200

# Re-run resource extraction for specific module
python3 analysis/tools/resources.py bin/WMPDMC.exe
```

---

## File Locations Reference

| Artifact Type | Location |
|---|---|
| Input binaries | `bin/` |
| Phase 0 validation | `analysis/report/phase0.md`, `analysis/report/data/phase0.json` |
| Update manifests & authenticity | `analysis/report/update-manifests.md`, `analysis/report/data/update-manifests.json` |
| Environment provisioning | `requirements.txt`, `analysis/tools/setup_env.sh` |
| Inventory data | `analysis/report/inventory.md`, `analysis/report/data/inventory.json` |
| REA evidence | `analysis/report/rea-evidence/` |
| Resource data | `analysis/report/data/resources.json`, `analysis/report/resources/<module>/` |
| String data | `analysis/report/data/strings/*.json`, `analysis/report/data/strings.md` |
| COM surface | `analysis/report/com-surface.md`, `analysis/report/data/com-surface.json` |
| API map | `analysis/report/api-map.md` |
| Dependencies | `analysis/report/dependencies.md` |
| Disassembly | `analysis/report/disasm.md`, `analysis/report/data/disasm.json` |
| Type libraries | `src/<module>/typelib/` |
| Decompiled code | `src/<module>/decompiled/` |
| Module dossiers | `src/<module>/README.md` |
| Validation harness | `src/<module>/recon/`, `src/CMakeLists.txt` |
| Build results | `analysis/report/data/build-results.json` |
| Progress report | `analysis/report/progress.md` |
| Final report | `analysis/report/final-report.md` |

---

## Metrics Summary

| Metric | Current Value | Target Value | Status |
|---|---|---|---|
| Phase 0 prerequisite checks | 3/3 (P0.1, P0.2, P0.3) | 3/3 | ✅ Complete |
| Microsoft WinSxS/CBS manifest mapping | 53/53 | 53/53 | ✅ Complete |
| PE Optional Header CheckSum valid | 28/28 | 28/28 | ✅ Complete |
| Input files analyzed | 53 | 53 | ✅ Complete |
| PE images | 28 | 28 | ✅ Complete |
| Resource payloads | 539 | 539 | ✅ Complete |
| Strings extracted | 80,061 | 80,061 | ✅ Complete |
| Functions discovered (CFG) | 73,277 | 73,277 | ✅ Complete |
| Functions decompiled | 888 | 73,277 | 🟡 Partial (1.2%) |
| COM interfaces | 16 | 16 | ✅ Complete |
| COM coclasses | 7 | 7 | ✅ Complete |
| Type libraries decoded | 5 | 5 | ✅ Complete |
| Validation targets | 28/28 | 28/28 | ✅ Complete |
| Instruction cross-check | 11,288/11,288 | 11,288/11,288 | ✅ Complete |
| Resource digest verification | 539/539 | 539/539 | ✅ Complete |
| GUID verification | 40/40 | 40/40 | ✅ Complete |

---

## Notes

1. **Clean-room requirement**: All reconstruction work must be done without reference to the original binaries during the reconstruction phase. This TODO list assumes the structural analysis phases (1-4) are complete and documented, providing the clean-room team with only the extracted specifications, interfaces, and behavioral descriptions.

2. **Faithful 1:1 goal**: The objective is to produce a reconstruction that is functionally identical to the original Windows Media Player 12, with the same APIs, behavior, and capabilities.

3. **Honest reporting**: All limitations, unknowns, and unresolved items must be documented transparently. No placeholders or guesses should be presented as facts.

4. **Reproducibility**: All tools and procedures must be documented such that the entire analysis can be reproduced from the `bin/` directory contents alone.

5. **Validation**: Every claim must be verifiable through independent means, with cross-tool validation where possible.

---

*Last updated: 2026-10-15*
*Maintainer: Windows 7 Media Player Decompilation Project*
