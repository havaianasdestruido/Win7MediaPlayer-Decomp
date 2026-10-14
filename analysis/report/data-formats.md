# Data formats

> The binary and textual formats these modules actually use, as recovered from the artifacts
> themselves. For each format: what the evidence is, what is decoded, and what remains unknown.
> Decoders live in `analysis/tools/resources.py`, `analysis/tools/typelib.py` and
> `analysis/tools/strings_scan.py`.

Legend: **[verified]** = field meaning confirmed against the artifact (and, where noted, against a
second implementation); **[inferred]** = consistent reading of the evidence, not proven;
**[unresolved]** = not decoded, with the reason.

---

## 1. PE images (28 of 53 inputs) **[verified]**

All images are PE32+ (`IMAGE_FILE_MACHINE_AMD64`), built by the Visual Studio 2008 (9.0) toolchain,
with ASLR+DEP, no CFG, no TLS, no CLR, and Rich headers. Sections are the standard
`.text/.data/.pdata/.rsrc/.reloc` set; `.mui` satellites carry a resource-only `.rsrc` (plus loader
stubs). Full per-image tables: `inventory.md` §2–§5 and `data/inventory.json`.

Identification-relevant structures that were read directly (not via a third-party parser) in
`analysis/tools/lib/peutils.py`:

| Field group | Derivation |
|---|---|
| COFF header, optional header, subsystem, DllCharacteristics | raw offsets from `e_lfanew` |
| Section table (name, VA, virtual/raw sizes, characteristics, entropy) | 40-byte section headers |
| Data directories | optional header + 96 (PE32+) |
| Imports / delay imports / exports | RVA-walked import descriptors and export directory |
| Resources | `IMAGE_RESOURCE_DIRECTORY` walk (§2) |
| Overlay | bytes beyond the last section's raw data (size + SHA-256 + entropy) |
| Rich header | decoded after the DOS stub, XOR-key recovered from `Rich` |
| Debug directory | PDB path, GUID, age (all 16 root modules carry PDB references, age 1) |

---

## 2. PE resources **[verified]**

`IMAGE_RESOURCE_DIRECTORY` is a 16-byte header (`Characteristics`, `TimeDateStamp`,
`MajorVersion`, `MinorVersion`, `NumberOfNamedEntries`, `NumberOfIdEntries`) followed by
8-byte entries. Two details matter and are both verified in this corpus:

* the entry's `Name`/`OffsetToData` values are offsets **relative to the start of the resource
  directory**, not absolute RVAs (this was confirmed by cross-checking the walk against pefile's
  independently parsed tree — 28/28 images agree, `walker_cross_check` in
  `resources/<module>/index.json`);
* a named entry's `IMAGE_RESOURCE_DIR_STRING_U.Length` counts **UTF-16 characters**, so the byte
  span is `2 * Length` (evidence: the `MUI` name is stored with `Length = 3`, `WEVT_TEMPLATE`
  with 13 — `analysis/report/resources/wmpdmc_exe/index.json`).

Total: 539 resource entries across 28 images. Types present (name → count): `IMAGE` 118,
`MUI` 24, `RT_ICON` 171, `RT_GROUP_ICON` 13, `RT_BITMAP` 33, `RT_VERSION` 28, `RT_MANIFEST` 14,
`RT_DIALOG` 25, `RT_STRING` 72, `RT_MESSAGETABLE` 7, `RT_ACCELERATOR` 1, `RT_MENU` 1,
`TYPELIB` 5, `REGISTRY` 5, `UIFILE` 2, `WEVT_TEMPLATE` 6, `RT_RCDATA` 13, `#1017` 1.

### 2.1 `RT_VERSION` (VS_VERSIONINFO) **[verified]**

28 images. Key/values are read from the resource's `StringFileInfo`/`VarFileInfo` structures
(`decode_version()`); the values are cross-checked against REA's independent
`inspect-pe-resources` output for the same images (`validation.md` §4). Recorded per image in `resources/<module>/RT_VERSION/*.json`, summarised in
`data/resources.md` §3. Example (`WMPDMC.exe`): `FileVersion = 12.0.7601.17514
(win7sp1_rtm.101119-1850)`, `OriginalFilename = WMPDMC.exe`.

> Note: the shipped `LegalCopyright`/`ProductName` values contain `Â©`/`Â®` (i.e. the UTF-16
> code points U+00C2 U+00A9). This is how the bytes are stored in the resource — a mojibake baked
> into the original build (they are the UTF-8 bytes of `©`/`®` stored as UTF-16), **not** a
> decoding defect in these tools. Verified by reading the raw resource bytes.

### 2.2 `RT_MESSAGETABLE` **[verified]**

`MESSAGE_RESOURCE_DATA { DWORD NumberOfBlocks; MESSAGE_RESOURCE_BLOCK Blocks[] }` where
`MESSAGE_RESOURCE_BLOCK { DWORD LowId, HighId, OffsetToEntries }` (offset relative to the start of
the data) and `MESSAGE_RESOURCE_ENTRY { WORD Length; WORD Flags; BYTE Text[] }` — `Length` includes
the 4-byte header, `Flags & 1` selects UTF-16LE (else ANSI). 7 tables / 121 messages decoded into
`resources/<module>/RT_MESSAGETABLE/<id>_<lang>.txt` (e.g. `pt-BR/wmpnetwk.exe.mui` carries 96
messages in 7 blocks). Strings are reproduced verbatim; **no translation is performed or inferred**.

### 2.3 `RT_STRING` **[verified]**

Sixteen length-prefixed UTF-16LE strings per block; 72 blocks extracted across the corpus as
`resources/<module>/RT_STRING/<id>_<lang>.txt` with the global string id (`(block-1)*16 + n`).

### 2.4 `RT_DIALOG` **[verified for the header, inferred for deep fields]**

Both the 18-byte `DLGTEMPLATE` and 26-byte `DLGTEMPLATEEX` headers are recognised and decoded:
style, extended style, item count, position/size in dialog units, menu/window-class/title
(`sz_Or_Ord`: `0x0000` none, `0xFFFF` + ordinal, else a NUL-terminated UTF-16 string). 25 dialogs
recorded (e.g. `pt-BR/setup_wm.exe.mui` ids 51/52/53 with 7/9/6 items at 399×134 units;
`pt-BR/wmpnssci.dll.mui` id 1000 with 24 items at 278×249). Item-level templates beyond the item
count are not enumerated; the raw payload is retained for that work.

### 2.5 `RT_MENU` **[verified]**

`MENUHEADER` (4 bytes) then a `MENUITEMTEMPLATE` chain: `WORD mtOption`, then `mtID` **only when
the item is not a popup** (`MF_POPUP = 0x10`), then a NUL-terminated UTF-16 string; `MF_END = 0x80`
closes a level. One menu in the corpus (`pt-BR/WMPDMC.exe.mui` id 601): a context-menu popup whose
children are `Mover para Cima\tCtrl+Seta para Cima` (602), `Mover para &Baixo\tCtrl+Seta para Baixo`
(603) and `&Remover da lista\tDel` (604).

### 2.6 `RT_ACCELERATOR` **[verified]**

An array of `ACCELTABLEENTRY` records, 8 bytes on the wire (`WORD fVirt; WORD key; WORD cmd;
WORD pad`), `fVirt` flags `FVIRTKEY 0x01`/`FNOINVERT 0x02`/`FSHIFT 0x04`/`FCONTROL 0x08`/`FALT 0x10`.
One table (`pt-BR/WMPDMC.exe.mui` id 500, 14 entries): `Ctrl+P/S/B/F/T → 501/502/503/504/513`,
`Ctrl+Up/Down/Home/End/Prior/Next → 514–519`, and `Esc`-style virtual-key entries
`F7 → 505`, `F9 → 506`, `F8 → 507` (the `F8` entry additionally has bit `0x80` set, which is not
part of the documented `fVirt` set and is reported verbatim rather than interpreted).

### 2.7 `RT_GROUP_ICON` / `RT_ICON` **[verified]**

`GRPICONDIR { WORD reserved; WORD type=1; WORD count; GRPICONDIRENTRY[] }` where each entry is
14 bytes (`width`, `height`, `colorCount`, `reserved`, `planes`, `bitCount`, `bytesInRes`, `id`);
the `id` selects the `RT_ICON` payload to embed. 13 groups assembled into real `.ico` files under
`resources/<module>/RT_GROUP_ICON/*.ico` from 171 icon payloads (all images: `mpvis.DLL`,
`setup_wm.exe`, `wmpconfig.exe`, `wmpnscfg.exe`, `wmplayer.exe`, `wmpshare.exe`, `wmprph.exe`,
`WMPDMC.exe`, `WMPSideShowGadget.exe`, `wmpnssci.dll` and their MUI satellites).

### 2.8 Named resource types (application-specific)

| Type | Where | What it is | State |
|---|---|---|---|
| `UIFILE` | `WMPDMC.exe` ids 201 (33,354 B), 202 (2,625 B) | WMP DirectUI markup: a `<duixml>` document with `<stylesheet>`/`<element resid=…>` nodes | **[verified]** — extracted as `.xml`; documented as the skin/UI description; the element grammar itself is WMP's, not decoded further |
| `REGISTRY` | `mpvis.DLL` 101, `wmpenc.exe` 100, `wmpnssci.dll` 100/301, `wmprph.exe` 101 | ATL registrar script (`.rgs` text) executed by `DllRegisterServer` to write CLSID/Interface/TypeLib keys | **[verified]** — extracted as `.rgs`; GUIDs and statement counts recorded (`com-surface.md` §4) |
| `TYPELIB` | `WMPMediaSharing.dll`, `mpvis.DLL`, `wmpnssci.dll`, `wmpnetwk.exe`, `wmprph.exe` | MSFT binary type library describing the module's COM interfaces | **[verified]** — fully decoded (§3) |
| `MUI` | every image (24 payloads) | Language/resource-description record | **[inferred]** — see §2.9 |
| `IMAGE` | `WMPDMC.exe`, 118 payloads | TIFF images (little-endian `II*`, first IFD) for the UI | **[verified]** header/IFD; pixel decoding not performed |
| `WEVT_TEMPLATE` | `wmpnetwk.exe` (59,130 B), `WMPDMCCore.dll`, `WMPMediaSharing.dll`, `WMPNSSUI.dll`, `setup_wm.exe`, `WMPDMC.exe` | ETW event-manifest template: `CRIM` magic + declared size + compiled manifest | **[unresolved]** — magic and size recorded; the binary schema is undocumented, payload kept verbatim |
| `#1017` | `wmpnetwk.exe` id 1501 (5,069 B) | XML: `<?xml version="1.0"?><root xmlns="urn:schemas-…">` with `upnp-org` device/service URNs (UPnP MediaServer description) | **[verified]** that it is XML (extracted as `.xml`); the numeric type id is application-private |
| `RT_RCDATA` / `RT_BITMAP` | 13 / 33 payloads | arbitrary data; DIB bitmap (header + pixels) | **[unresolved]** — payloads extracted verbatim |

### 2.9 The `MUI` resource **[inferred]**

Observed layout (24 payloads, magic 0xFECDFECD little-endian):

```
0x00  DWORD magic        = 0xFECDFECD
0x04  DWORD total size   == payload length (all 24 payloads)
0x08  DWORD version      = 0x00010000
0x0C  DWORD             = 0
0x10  DWORD             = 0
0x14  DWORD 0x11 (12x, base-language payloads) / 0x12 (12x, localised payloads)
0x18  DWORD             = 0
0x1C  DWORD 2 (base payloads) / 0 (localised payloads)
0x20… DWORDs            — not interpreted (kept verbatim in the JSON)
…     DWORD list of localised resource-type ids, DWORD 0 terminator
…     UTF-16LE language tag: "en-US" (12 payloads) / "pt-BR" (12 payloads), then zero padding
```

What is **verified**: the magic, the self-describing size, the language tag, and — for 4 of the 10
payloads where the trailing id list could be parsed — that the id list equals the numeric resource
types present in the sibling `.mui` image (e.g. `bin/WMPDMC.exe` declares `[4,5,6,9,11,16]` =
MENU/DIALOG/STRING/ACCELERATOR/MESSAGETABLE/VERSION, which is exactly the set
`bin/pt-BR/WMPDMC.exe.mui` carries). What is **[unresolved]**: the meaning of the remaining header
dwords and the id list of the other payloads (the terminator position is not deterministic across
images). The raw payloads and the parsed view are both kept, so a later decode can be checked
against them.

---

## 3. MSFT binary type libraries (`RT_TYPELIB`) **[verified]**

Five embedded libraries (`WMPMediaSharing.dll`, `mpvis.DLL`, `wmpnssci.dll`, `wmpnetwk.exe`,
`wmprph.exe`) are MSFT-format (`"MSFT"`, version field `0x00010002`, LCID 0x0409). The reader in
`analysis/tools/typelib.py` was written from the structure definitions and decode algorithms of
Wine's public reader (`dlls/oleaut32/typelib.c|h`, consulted as a format reference only). Layout as
implemented and validated:

* **Header** (0x54 bytes): `magic1 "MSFT"`; `magic2`; `posguid` (library GUID position); `lcid`;
  `varflags`; `version`; `nrtypeinfos`; name/string-table counts and offsets;
  `CustomDataOffset`; `nimpinfos`.
* **Type-info offset table**: `nrtypeinfos` × INT32 file offsets at 0x54.
* **Segment directory**: 16 × `MSFT_pSeg {INT32 offset; INT32 length; INT32 res08 = -1;
  INT32 type}` at `0x54 + 4*nrtypeinfos (+4 if varflags & 0x100)`. Segment 1 is the type-info table
  (0x64-byte `MSFT_TypeInfoBase` records), 5 the GUID table (24-byte `MSFT_GuidEntry` records),
  7 the name table, 8 the string table, 9 the type-descriptor table, 3 the implemented-interface
  reference table, 2 the import-file table.
* **`MSFT_TypeInfoBase`**: `typekind` in the low nibble (bits 11+ carry alignment/flags),
  `memoffset`, `cElement` (high word = variable count, low = function count), `posguid`,
  `flags`, `NameOffset`, `version` (major in the low word), `cImplTypes`/`cbSizeVft`,
  `size`, `datatype1`, `datatype2`.
* **Members**: at `memoffset` a leading INT32 `infolen`, then the function records; member ids at
  `memoffset + infolen + (i+1)*4`; name offsets at `memoffset + infolen + (cFuncs + cVars + i + 1)*4`.
  Variable records are reached through the member-offset table entry
  `(cFuncs+cVars)*2 + cFuncs + 1`, exactly as Wine's `MSFT_DoVars` does.
* **`MSFT_FuncRecord`**: `INT info` (record length), `INT DataType`, `INT Flags`,
  `INT16 VtableOffset`, `INT16 funcdescsize`, `INT fkccic`, `INT16 nrargs`, `INT16 nroargs`, then
  optional help/entry fields whose presence is derived from the record length; the trailing
  `nrargs` × 12-byte `MSFT_ParameterInfo` array sits at `recoffset + reclength − nrargs*12`.
  `fkccic` packs funckind (bits 0-2), invkind (bits 3-6) and callconv (bits 8-11).
* **Names**: `MSFT_NameIntro { INT hreftype; INT next_hash; INT namelen }` (length in the low byte,
  entry padded to 4 bytes, minimum 8) followed by an ANSI name. A name offset of `-1` on a function
  record means "same name as the previous record" — the property get/put pairs rely on this.
* **Type descriptors**: a negative `DataType` is an inline VT (`type & VT_TYPEMASK`, with `VT_PTR`
  pointees resolved recursively); a non-negative value indexes the descriptor table in 8-byte units.
* **Implemented interfaces**: `MSFT_RefRecord { INT reftype; INT flags; INT oCustData; INT onext }`
  chained in the reference segment; `reftype` low bits: 0 = same library (index/0x64), 1 = imported
  type, 2/3 = external. The reference we see most often, `0x01000001`, resolves through the import
  table to the `IDispatch` import (these coclasses/dual interfaces inherit `IDispatch`).

**Cross-check performed:** every recovered library GUID and every interface/coclass GUID (31
identifiers in total) is also present as a 16-byte *binary* constant inside the very image that
carries the library (mpvis 3/3 at `0x12628`, WMPMediaSharing 7/7 at `0x10f0`, wmpnetwk 4/4 at
`0x1daf8`, wmpnssci 15/15 at `0x13b0`, wmprph 2/2 at `0xcf0`; recorded per library as
`guid_cross_check` in `src/<module>/typelib/*.json`).

Rendered output per library: `<name>.json` (full structure), `.idl` (interface/coclass view with
vtable slots and memids), `.h` (GUID constants + vtable-order comments) and a `README.md` listing
each type. Enum members use the packed-value rule from Wine's `MSFT_ReadValue`: a negative
`OffsValue` carries the VT in bits 26-30 and the value in the low 26 bits.

---

## 4. ATL registrar scripts (`REGISTRY`) **[verified]**

Plain text, CRLF line endings, beginning `HKCR\r\n{`; declarations such as
`ForceRemove {0AA02E8D-F851-4CB0-9F64-BBA9BE7A983D} = s 'AlchemyVis Class'`, `InprocServer32 =
s '%MODULE%'`, `val ThreadingModel = s 'Apartment'`, `'TypeLib' = s '{C58F1580-…}'`. Extracted
verbatim as `.rgs`; the GUIDs they name and their statement counts are collected in
`analysis/report/com-surface.md` §4 and `data/com-surface.json`. This is the *registration* half of
the COM surface; the interfaces themselves come from §3.

---

## 5. Non-PE inputs

### 5.1 UPnP device/service descriptions (3 + 3 XML files) **[verified]**

`bin/Media Renderer/*.xml` and `bin/Network Sharing/*.xml` are UPnP documents (`<?xml …?>` root
elements with `urn:schemas-upnp-org` namespaces and `<serviceType>`/`<SCPDURL>` entries), plus the
icon PNG/JPEG/BMP files referenced by the device description. They are the *deployment* form of the
same protocols the binaries speak (e.g. `media renderer` ↔ `avtransport.xml`,
`connectionmanager_dmr.xml`, `RenderingControl.xml`; sharing ↔ `ConnectionManager.xml`,
`ContentDirectory.xml`, `MediaReceiverRegistrar.xml` — see `module-analysis.md` §4).

### 5.2 `Skins/Revert.wmz` **[verified]**

A ZIP archive (67,209 bytes, 45 members) holding the "Revert" skin: `skin.xml`-style descriptors,
`.bmp`/`.jpg` artwork, `.js` scripting and `.css`, i.e. WMP's own skin package format. Members are
extracted verbatim to `analysis/report/derived/Revert_wmz_members/` with per-member CRC-32, sizes
and SHA-256 in `data/resources.json`. This format is WMP's, and no further decoding is claimed.
