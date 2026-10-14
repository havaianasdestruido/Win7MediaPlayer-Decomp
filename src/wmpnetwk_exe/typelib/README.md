# Type libraries embedded in `wmpnetwk.exe`

> Recovered by `analysis/tools/typelib.py` from the module's `RT_TYPELIB` resource(s).
> The library is the module author's own machine-readable COM description, so library
> GUID, interface IIDs, member names, member IDs and vtable slots are **verified**;
> parameter/return type rendering is derived from the library's TYPEDESC entries and is
> marked where unrenderable. Raw payload: `analysis/report/resources/wmpnetwk_exe/typelib/`.

## `typelib_1_1__IUPnPService_ConnectionManager`

* Library GUID: `{73C381A8-548C-49F8-8AD3-C845D12D3C22}` — version `1.0` — LCID `0x0409` — SYS_WIN64
* Type count: 3; name-table entries: 113
* Cross-check: 4/4 recovered GUIDs present as 16-byte constants in wmpnetwk.exe (`bin/wmpnetwk.exe`) — every recovered identifier is also used by the module itself.

| # | Kind | Name | GUID | functions | variables | implements |
|---|------|------|------|-----------|-----------|------------|
| 0 | TKIND_DISPATCH | `IUPnPService_ConnectionManager` | `{B78EA491-BC9E-446D-9A46-57C6D9D0FC7A}` | 13 | 0 | — |
| 1 | TKIND_DISPATCH | `IUPnPService_ContentDirectory` | `{84535BBA-A68E-4839-82CF-2DCCAB12910A}` | 22 | 0 | — |
| 2 | TKIND_DISPATCH | `IUPnPService_MediaReceiverRegistrar` | `{4250D219-06C7-4957-AEC3-6DA09B84BA22}` | 11 | 0 | — |

