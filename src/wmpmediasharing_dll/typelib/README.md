# Type libraries embedded in `wmpmediasharing.dll`

> Recovered by `analysis/tools/typelib.py` from the module's `RT_TYPELIB` resource(s).
> The library is the module author's own machine-readable COM description, so library
> GUID, interface IIDs, member names, member IDs and vtable slots are **verified**;
> parameter/return type rendering is derived from the library's TYPEDESC entries and is
> marked where unrenderable. Raw payload: `analysis/report/resources/wmpmediasharing_dll/typelib/`.

## `typelib_1_1__WindowsMediaLibrarySharingDeviceAuthorizationStatus`

* Library GUID: `{C21E9CE5-B317-463B-A1B1-B5E36EED59D0}` — version `1.0` — LCID `0x0409` — SYS_WIN64
* Type count: 7; name-table entries: 45
* Cross-check: 7/7 recovered GUIDs present as 16-byte constants in WMPMediaSharing.dll (`bin/WMPMediaSharing.dll`) — every recovered identifier is also used by the module itself.

| # | Kind | Name | GUID | functions | variables | implements |
|---|------|------|------|-----------|-----------|------------|
| 0 | TKIND_ENUM | `WindowsMediaLibrarySharingDeviceAuthorizationStatus` | `—` | 0 | 3 | — |
| 1 | TKIND_INTERFACE | `IWindowsMediaLibrarySharingDeviceProperty` | `{81E26927-7A7D-40A7-81D4-BDDC02960E3E}` | 2 | 0 | <external hRef 0x01000001> |
| 2 | TKIND_INTERFACE | `IWindowsMediaLibrarySharingDeviceProperties` | `{C4623214-6B06-40C5-A623-B2FF4C076BFD}` | 3 | 0 | <external hRef 0x01000001> |
| 3 | TKIND_INTERFACE | `IWindowsMediaLibrarySharingDevice` | `{3DCCC293-4FD9-4191-A25B-8E57C5D27BD4}` | 4 | 0 | <external hRef 0x01000001> |
| 4 | TKIND_INTERFACE | `IWindowsMediaLibrarySharingDevices` | `{1803F9D6-FE6D-4546-BF5B-992FE8EC12D1}` | 3 | 0 | <external hRef 0x01000001> |
| 5 | TKIND_INTERFACE | `IWindowsMediaLibrarySharingServices` | `{01F5F85E-0A81-40DA-A7C8-21EF3AF8440C}` | 19 | 0 | <external hRef 0x01000001> |
| 6 | TKIND_COCLASS | `WindowsMediaLibrarySharingServices` | `{AD581B00-7B64-4E59-A38D-D2C5BF51DDB3}` | 0 | 0 | IWindowsMediaLibrarySharingServices |

