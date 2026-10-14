# String highlights — `bin/setup_wm.exe`

> Extracted by `analysis/tools/strings_scan.py` from the shipped image. Offsets are file
> offsets; VAs assume the image base recorded in `analysis/report/data/inventory.json`.
> Duplicated literals are shown once.

## GUIDs / IIDs / CLSIDs (4)

* `E33D49A9-409C-4acd-A1F5-DA7DBB99EB30`
* `e31e09cb-b1d4-4b2c-b088-0aa51c598562`
* `e88a19fb-a847-4e3d-9ae2-13c2b84f58a6`
* `{CE3FB1D1-02AE-4a5f-A6E9-D9F1B4073E6C}`

## URLs (5)

* `  <asmv3:windowsSettings xmlns="http://schemas.microsoft.com/SMI/2005/WindowsSettings">`
* `http://go.microsoft.com/fwlink/`
* `http://go.microsoft.com/fwlink/?LinkId=120764&mpver=%s&id=%x&contextid=%lu&originalid=%lu`
* `http://go.microsoft.com/fwlink/?LinkId=120764&mpver=%s&id=%x&contextid=%lu&originalid=%x`
* `http://go.microsoft.com/fwlink/?LinkId=52492&sv=2`

## UPnP URNs (2)

* `<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0" xmlns:asmv3="urn:schemas-microsoft-com:asm.v3">`
* `<trustInfo xmlns="urn:schemas-microsoft-com:asm.v3">`

## Registry paths (87)

* `%s\Local Settings\Application Data\Microsoft\Media Player`
* `%s\Microsoft\Media Player`
* `%s\Microsoft\Media Player\%s`
* `%s\Microsoft\Media Player\%s\%s`
* `%s\Software\Microsoft\Windows\CurrentVersion\Explorer\Shell Folders`
* `SOFTWARE\Microsoft\Internet Explorer\Main\FeatureControl`
* `SOFTWARE\Microsoft\MediaPlayer\Player\Extensions\.%s`
* `SOFTWARE\Microsoft\MediaPlayer\Player\Schemes\%s`
* `SOFTWARE\Microsoft\MediaPlayer\Preferences`
* `SOFTWARE\Microsoft\Multimedia\WMPlayer\Extensions\.%s`
* `SOFTWARE\Microsoft\Multimedia\WMPlayer\Schemes\%s`
* `SOFTWARE\Microsoft\Windows Media Connect 2\Devices`
* `SOFTWARE\Microsoft\Windows Media Connect 2\Shares`
* `SOFTWARE\Microsoft\Windows Media Player NSS\3.0`
* `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\Devices`
* `SOFTWARE\Microsoft\Windows Media Player NSS\3.0\MAC Access Control`
* `SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\AutoplayHandlers\EventHandlers\MTPMediaPlayerArrival`
* `SOFTWARE\Microsoft\Windows\CurrentVersion\Setup\WindowsFeatures\WindowsMediaVersion`
* `SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall`
* `SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall\%s`
* `Software\Microsoft\Active Setup\Installed Components\{6BF52A52-394A-11d3-B153-00C04F79FAA6}`
* `Software\Microsoft\CurrentVersion\Policies\WindowsUpdate`
* `Software\Microsoft\MediaPlayer`
* `Software\Microsoft\MediaPlayer\%lu.%lu\Registration`
* `Software\Microsoft\MediaPlayer\11.0\Registration`
* `Software\Microsoft\MediaPlayer\MLS\Extensions`
* `Software\Microsoft\MediaPlayer\Objects\Effects`
* `Software\Microsoft\MediaPlayer\Player\DVD`
* `Software\Microsoft\MediaPlayer\Player\Settings`
* `Software\Microsoft\MediaPlayer\Player\Skins`
* `Software\Microsoft\MediaPlayer\Player\Tasks\NowPlaying\`
* `Software\Microsoft\MediaPlayer\Preferences`
* `Software\Microsoft\MediaPlayer\Preferences\`
* `Software\Microsoft\MediaPlayer\Preferences\ContentPartners\`
* `Software\Microsoft\MediaPlayer\Preferences\ContentPartners\%s`
* `Software\Microsoft\MediaPlayer\Preferences\CopyVideo\`
* `Software\Microsoft\MediaPlayer\Preferences\DolbyDigitalSettings\`
* `Software\Microsoft\MediaPlayer\Preferences\EqualizerSettings\`
* `Software\Microsoft\MediaPlayer\Preferences\FindFolders\`
* `Software\Microsoft\MediaPlayer\Preferences\HME\`
* `Software\Microsoft\MediaPlayer\Preferences\HME\%s`
* `Software\Microsoft\MediaPlayer\Preferences\Library\`
* `Software\Microsoft\MediaPlayer\Preferences\Prompts\`
* `Software\Microsoft\MediaPlayer\Preferences\ProxySettings\`
* `Software\Microsoft\MediaPlayer\Preferences\VideoSettings\`
* `Software\Microsoft\MediaPlayer\Services`
* `Software\Microsoft\MediaPlayer\Services\%s`
* `Software\Microsoft\MediaPlayer\Setup`
* `Software\Microsoft\MediaPlayer\Setup\BlockingRefCounts\%s`
* `Software\Microsoft\MediaPlayer\Setup\CatalogIteration`
* `Software\Microsoft\MediaPlayer\Setup\FileMoveCache\Source`
* `Software\Microsoft\MediaPlayer\Setup\Reentrant`
* `Software\Microsoft\MediaPlayer\Setup\UserOptions`
* `Software\Microsoft\MediaPlayer\Subscriptions`
* `Software\Microsoft\Multimedia\Components`
* `Software\Microsoft\Multimedia\UpdateClients`
* `Software\Microsoft\Multimedia\WMPlayer`
* `Software\Microsoft\Multimedia\WMPlayer\Devices\DVD`
* `Software\Microsoft\Multimedia\WMPlayer\Extensions\`
* `Software\Microsoft\Multimedia\WMPlayer\Groups`
* `Software\Microsoft\Multimedia\WMPlayer\Groups\Video\DVD`
* `Software\Microsoft\Multimedia\WMPlayer\Groups\Video\DVR-MS`
* `Software\Microsoft\Multimedia\WMPlayer\IEHardening`
* `Software\Microsoft\Multimedia\WMPlayer\WMFDistQFEBackup`
* `Software\Microsoft\Multimedia\WMPlayer\WMPQFEBackup`
* `Software\Microsoft\Updates`
* `Software\Microsoft\Windows Media Connect 2\Shares`
* `Software\Microsoft\Windows Media Foundation\ByteStreamHandlers`
* `Software\Microsoft\Windows NT\CurrentVersion`
* `Software\Microsoft\Windows NT\CurrentVersion\ProfileList\%s`
* `Software\Microsoft\WindowsMedia\Setup\BlockingRefCounts\%s`
* `Software\Microsoft\Windows\CurrentVersion`
* `Software\Microsoft\Windows\CurrentVersion\Explorer\AutoplayHandlers\Handlers`
* `Software\Microsoft\Windows\CurrentVersion\Explorer\Shell Folders`
* `Software\Microsoft\Windows\CurrentVersion\Policies\`
* `Software\Microsoft\Windows\CurrentVersion\Policies\System`
* `Software\Microsoft\Windows\CurrentVersion\PropertySystem\PropertyHandlers\`
* `Software\Microsoft\Windows\CurrentVersion\Run`
* `Software\Microsoft\Windows\CurrentVersion\RunOnce`
* `Software\Microsoft\Windows\CurrentVersion\Setup\WindowsFeatures`
* … (+7 more in `analysis/report/data/strings/setup_wm_exe.json`)

## Referenced modules (50)

* `ADVAPI32.dll`
* `ATL.DLL`
* `COMCTL32.dll`
* `CRYPT32.dll`
* `GDI32.dll`
* `HHCTRL.OCX`
* `KERNEL32.dll`
* `Kernel32.dll`
* `MPR.dll`
* `MediaPlayerV2.dll`
* `OLEAUT32.dll`
* `SETUPAPI.dll`
* `SHELL32.dll`
* `SHLWAPI.dll`
* `SSPICLI.DLL`
* `Secur32.dll`
* `USER32.dll`
* `USERENV.dll`
* `VERSION.dll`
* `WININET.dll`
* `WINTRUST.dll`
* `dw15.exe`
* `gdiplus.dll`
* `inetcpl.cpl`
* `iphlpapi.dll`
* `kernel32.dll`
* `mscat32.dll`
* `msdxm.ocx`
* `msiexec.exe`
* `msvcrt.dll`
* `ntdll.DLL`
* `ntdll.dll`
* `ole32.dll`
* `pdh.dll`
* `sadvapi32.dll`
* `setup_wm.exe`
* `setupapi.dll`
* `sfc.dll`
* `shell32.dll`
* `urlmon.dll`
* `wmdbexport.exe`
* `wmfdist11-64.exe`
* `wmfdist11.exe`
* `wmp.dll`
* `wmp11-64.exe`
* `wmp11.exe`
* `wmplayer.exe`
* `wmplayer.ocx`
* `wmploc.dll`
* `ws2_32.dll`

## File paths (1)

* `%c:\video_ts\video_ts.ifo`

