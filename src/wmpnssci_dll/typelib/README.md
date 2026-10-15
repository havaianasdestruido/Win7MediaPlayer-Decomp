# Type libraries embedded in `wmpnssci.dll`

> Recovered by `analysis/tools/typelib.py` from the module's `RT_TYPELIB` resource(s).
> The library is the module author's own machine-readable COM description, so library
> GUID, interface IIDs, member names, member IDs and vtable slots are **verified**;
> parameter/return type rendering is derived from the library's TYPEDESC entries and is
> marked where unrenderable. Raw payload: `analysis/report/resources/wmpnssci_dll/typelib/`.

## `typelib_1_1__ServiceStatus`

* Library GUID: `{453E9E02-8BA4-474C-BFA0-37727E44F6AE}` — version `1.0` — LCID `0x0409` — SYS_WIN64
* Type count: 14; name-table entries: 62
* Cross-check: 15/15 recovered GUIDs present as 16-byte constants in wmpnssci.dll (`bin/wmpnssci.dll`) — every recovered identifier is also used by the module itself.

| # | Kind | Name | GUID | functions | variables | implements |
|---|------|------|------|-----------|-----------|------------|
| 0 | TKIND_ENUM | `ServiceStatus` | `{B78E1E54-0885-40C0-87BC-2E5B93C95F1C}` | 0 | 5 | — |
| 1 | TKIND_ENUM | `EventReason` | `{31D0E2AD-8AE5-41CE-A743-B815F4279005}` | 0 | 5 | — |
| 2 | TKIND_ENUM | `AuthorizationStatus` | `{08933D12-EEED-4AD2-9238-4E916639D0C4}` | 0 | 4 | — |
| 3 | TKIND_DISPATCH | `INSSProperty` | `{B27C1EAC-B909-462C-A051-F85DA63D616B}` | 2 | 0 | <external hRef 0x01000001> |
| 4 | TKIND_COCLASS | `Property` | `{FC434359-AF3E-4F09-852E-B5D3384F241D}` | 0 | 0 | INSSProperty |
| 5 | TKIND_DISPATCH | `INSSProperties` | `{DF2F700E-48CC-40CE-BBF7-73187286C42D}` | 3 | 0 | <external hRef 0x01000001> |
| 6 | TKIND_COCLASS | `Properties` | `{AD5D2BA9-B6A0-45B6-9ED5-B59B85806D56}` | 0 | 0 | INSSProperties |
| 7 | TKIND_DISPATCH | `INSSDevice` | `{055B0E0E-3113-4CAE-9EEE-6E63211BEE37}` | 7 | 0 | <external hRef 0x01000001> |
| 8 | TKIND_COCLASS | `Device` | `{86223118-F443-4F05-B0CF-8963A15747A6}` | 0 | 0 | INSSDevice |
| 9 | TKIND_DISPATCH | `INSSDevices` | `{73DE3C35-FAF7-4934-B337-C260D5926858}` | 3 | 0 | <external hRef 0x01000001> |
| 10 | TKIND_COCLASS | `Devices` | `{6DE2D8B3-50B2-45B7-9DE3-0825CE8B7F2D}` | 0 | 0 | INSSDevices |
| 11 | TKIND_INTERFACE | `INSSNotify` | `{ADC0EDF5-FE64-48FF-A711-CB4AB0F5C2CA}` | 1 | 0 | external reference (reftype kind 3) |
| 12 | TKIND_DISPATCH | `INSSManager` | `{204F4950-212A-414F-9B27-73BD87423F25}` | 9 | 0 | <external hRef 0x01000001> |
| 13 | TKIND_COCLASS | `NSSManager` | `{92498132-4D1A-4297-9B78-9E2E4BA99C07}` | 0 | 0 | INSSManager |

