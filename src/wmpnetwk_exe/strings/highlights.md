# String highlights — `bin/wmpnetwk.exe`

> Extracted by `analysis/tools/strings_scan.py` from the shipped image. Offsets are file
> offsets; VAs assume the image base recorded in `analysis/report/data/inventory.json`.
> Duplicated literals are shown once.

## URLs (14)

* `    <manufacturerURL>http://www.microsoft.com</manufacturerURL>`
* `    <modelURL>http://go.microsoft.com/fwlink/?LinkId=105926</modelURL>`
* `<?xml version="1.0" ?><root xmlns:dc="http://purl.org/dc/elements/1.1/" xmlns:upnp="urn:schemas-upnp-org:metadata-1-0/upnp/" xmlns:microsoft="urn:schemas-microsoft-com:WMPNSS-1-0/">`
* `<?xml version="1.0"?><SOAP-ENV:Envelope xmlns:SOAP-ENV="http://schemas.xmlsoap.org/soap/envelope/" SOAP-ENV:encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"><SOAP-ENV:Body>`
* `<DIDL-Lite xmlns:dc="http://purl.org/dc/elements/1.1/"`
* `http://+:10243/WMPNSSv4/`
* `http://+:10243/WMPNSSv4/%ls/`
* `http://sqm.microsoft.com/sqm/windows/sqmserver.dll`
* `https://+:10245/WMPNSSv4/`
* `https://+:10245/WMPNSSv4/%ls/`
* `https://+:10245/WMPNSSv4/LibraryInfo/`
* `https://sqm.microsoft.com/sqm/%s/manifests/Sqm%d.bin`
* `rtsp://+:554/WMPNSSv4/%ls/`
* `rtsp://+:8554/WMPNSSv4/%ls/`

## UPnP URNs (31)

* `        <serviceId>urn:microsoft.com:serviceId:X_MS_MediaReceiverRegistrar</serviceId>`
* `        <serviceId>urn:upnp-org:serviceId:ConnectionManager</serviceId>`
* `        <serviceId>urn:upnp-org:serviceId:ContentDirectory</serviceId>`
* `        <serviceType>urn:microsoft.com:service:X_MS_MediaReceiverRegistrar:1</serviceType>`
* `        <serviceType>urn:schemas-upnp-org:service:ConnectionManager:1</serviceType>`
* `        <serviceType>urn:schemas-upnp-org:service:ContentDirectory:1</serviceType>`
* `    <deviceType>urn:schemas-upnp-org:device:MediaServer:1</deviceType>`
* `  <trustInfo xmlns="urn:schemas-microsoft-com:asm.v3">`
* ` nameSpace="urn:schemas-microsoft-com:WMPNSS-1-0/" xmlns:microsoft="urn:schemas-microsoft-com:WMPNSS-1-0/"`
* ` xmlns:dlna="urn:schemas-dlna-org:metadata-1-0"`
* ` xmlns:dlna="urn:schemas-dlna-org:metadata-1-0/"`
* ` xmlns:microsoft="urn:schemas-microsoft-com:WMPNSS-1-0/"`
* `<?xml version="1.0" ?><root xmlns:dc="http://purl.org/dc/elements/1.1/" xmlns:upnp="urn:schemas-upnp-org:metadata-1-0/upnp/" xmlns:microsoft="urn:schemas-microsoft-com:WMPNSS-1-0/">`
* `<TestData xmlns:dt="urn:schemas-microsoft-com:datatypes" dt:dt="bin.base64">`
* `<assembly xmlns="urn:schemas-microsoft-com:asm.v1"`
* `<dlna:X_DLNADOC xmlns:dlna="urn:schemas-dlna-org:device-1-0">DMS-1.50</dlna:X_DLNADOC>`
* `<microsoft:errorDescription xmlns:microsoft="urn:schemas-microsoft-com:WMPNSS-1-0/" %ls>%ls</microsoft:errorDescription>`
* `<microsoft:magicPacketWakeSupported xmlns:microsoft="urn:schemas-microsoft-com:WMPNSS-1-0">1</microsoft:magicPacketWakeSupported>`
* `<microsoft:remoteConfig xmlns:microsoft="urn:schemas-microsoft-com:WMPNSS-1-0/">`
* `<root xmlns="urn:schemas-upnp-org:device-1-0">`
* `<server xmlns="urn:schemas-microsoft-com:WMPNSSRME-1-0/">`
* `urn:microsoft.com:serviceId:X_MS_MediaReceiverRegistrar`
* `urn:schemas-microsoft-com:WMPNSS-1-0/`
* `urn:schemas-upnp-org:device:MediaRenderer:1`
* `urn:schemas-upnp-org:device:MediaServer:1`
* `urn:upnp-org:serviceId:ConnectionManager`
* `urn:upnp-org:serviceId:ContentDirectory`
* `xmlns:dt="urn:schemas-microsoft-com:datatypes" dt:dt="string"`
* `xmlns:dt="urn:schemas-microsoft-com:datatypes" dt:dt="ui4"`
* `xmlns:upnp="urn:schemas-upnp-org:metadata-1-0/upnp/"`
* `xmlns="urn:schemas-upnp-org:metadata-1-0/DIDL-Lite/">`

## Registry paths (23)

* `SOFTWARE\Microsoft\Cryptography\RNG`
* `SOFTWARE\Microsoft\Windows Media Player NSS\3.0`
* `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\DeviceShims`
* `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Devices`
* `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Events`
* `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Log`
* `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\MAC Access Control`
* `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Media Servers`
* `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Server Settings`
* `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Servers`
* `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\UDNRenderers`
* `SOFTWARE\Policies\Microsoft\WindowsMediaPlayer`
* `SYSTEM\CurrentControlSet\Services\`
* `SYSTEM\CurrentControlSet\Services\EventLog\%ls\%ls`
* `SYSTEM\CurrentControlSet\Services\HTTP\Parameters\UrlAclInfo`
* `Software\Microsoft\MediaPlayer\PREFERENCES\HME`
* `Software\Microsoft\MediaPlayer\Preferences\HME\`
* `Software\Microsoft\SQMClient`
* `Software\Microsoft\SQMClient\%s\AdaptiveSqm\ManifestInfo`
* `Software\Microsoft\SQMClient\%s\AdaptiveSqm\Throttling`
* `Software\Microsoft\SQMClient\UploadUrlMap`
* `Software\Microsoft\Windows NT\CurrentVersion\Winsat`
* `Software\Policies\Microsoft\SQMClient`

## Referenced modules (34)

* `ADVAPI32.dll`
* `API-MS-Win-Core-LocalRegistry-L1-1-0.dll`
* `AUTHZ.dll`
* `CRYPT32.dll`
* `HTTPAPI.dll`
* `IPHLPAPI.DLL`
* `KERNEL32.dll`
* `MFPlat.DLL`
* `NETAPI32.dll`
* `OLEAUT32.dll`
* `POWRPROF.dll`
* `SHELL32.dll`
* `SHLWAPI.dll`
* `Secur32.dll`
* `SensApi.dll`
* `USER32.dll`
* `USERENV.dll`
* `WMPNetwk.exe`
* `WS2_32.dll`
* `WSOCK32.dll`
* `WTSAPI32.dll`
* `Wadvapi32.dll`
* `Winhttp.dll`
* `Wintrust.dll`
* `certpoleng.dll`
* `kernel32.dll`
* `msvcrt.dll`
* `ntdll.DLL`
* `ntdll.dll`
* `ole32.dll`
* `slc.dll`
* `wmdrmdev.dll`
* `wmpmde.dll`
* `ws2_32.DLL`

## HTTP/UPnP verbs (3)

* `Delete`
* `HEAD`
* `POST`

