#!/usr/bin/env python3
"""api_map.py — consolidated API surface and module dependency map.

Purpose
-------
Turn the per-module PE import/export data into (a) a categorised API map, (b) a
module-to-module and module-to-system-DLL dependency map, and (c) the generated
reports ``analysis/report/api-map.md`` and ``analysis/report/dependencies.md``.

The import/export facts themselves come from the PE directories (project
parser: ``lib/peutils.py``), and every module's raw objdump import/export
listing is archived as REA evidence under
``analysis/report/rea-evidence/<module>/objdump-symbols.json`` — the tables here
are a *projection* of those facts, not an independent claim.

Usage
-----
    python3 analysis/tools/api_map.py                # regenerate both reports
    python3 analysis/tools/api_map.py --json-only

Outputs
-------
* ``analysis/report/data/api-map.json``
* ``analysis/report/api-map.md``
* ``analysis/report/dependencies.md``

Dependencies
------------
Python 3.11; reads ``analysis/report/data/inventory.json`` (run
``inventory.py`` first).

Limitations
-----------
* Only *static* imports/exports are covered.  Symbols obtained through
  ``GetProcAddress``/``LoadLibrary`` at run time are invisible here; those are
  reported separately in ``analysis/report/module-analysis.md`` from string and
  code evidence.
* API families are grouped by DLL name and by a curated name-prefix list; the
  grouping is a navigation aid, not an ABI statement.
"""

from __future__ import annotations

import argparse
import json
import os
import re
import sys
from collections import OrderedDict, defaultdict

REPO = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", ".."))
DATA = os.path.join(REPO, "analysis", "report", "data")

# Curated prefix groups — used only to make the API map navigable.
PREFIX_GROUPS = OrderedDict([
    ("COM/OLE runtime", ("Co", "IUnknown", "Ole", "Disp", "SysAlloc", "SysFree", "Variant", "PropVariant")),
    ("Registry", ("Reg", "SHReg",)),
    ("File/IO", ("CreateFile", "ReadFile", "WriteFile", "FindFirst", "FindNext", "DeleteFile", "MoveFile",
                 "GetFile", "SetFile", "GetFullPath", "GetTemp")),
    ("Memory/heap", ("Heap", "LocalAlloc", "LocalFree", "GlobalAlloc", "GlobalFree", "VirtualAlloc", "VirtualFree")),
    ("Synchronisation", ("Interlocked", "EnterCritical", "LeaveCritical", "InitializeCritical",
                          "CreateEvent", "SetEvent", "WaitFor", "Sleep", "CreateMutex", "ReleaseMutex")),
    ("Threading", ("CreateThread", "GetCurrentThread", "SetThread", "ResumeThread", "Tls")),
    ("Networking/sockets", ("WSA", "socket", "bind", "listen", "accept", "connect", "send", "recv",
                            "gethostby", "getaddrinfo", "inet_", "htons", "ntohs", "select")),
    ("WinHTTP/WinINet/URLMON", ("WinHttp", "Internet", "Http", "Url", "URL")),
    ("UPnP/SSDP", ("UPnP", "SSDP", "HrGetDevice", "HrCreate")),
    ("RPC", ("Rpc", "Uuid", "Ndr")),
    ("Security/Crypto", ("Crypt", "Cert", "Sspi", "ACL", "Sec", "Sddl")),
    ("Window/GDI/UI", ("CreateWindow", "ShowWindow", "GetMessage", "DefWindow", "RegisterClass", "SendMessage",
                        "PostMessage", "BeginPaint", "EndPaint", "DrawText", "TextOut", "SelectObject",
                        "GetDC", "ReleaseDC", "LoadIcon", "LoadString", "LoadMenu", "Dialog", "SetWindow",
                        "GetClientRect", "InvalidateRect", "UpdateWindow", "TrackPopup", "GetDlgItem")),
    ("Services/SCM", ("OpenSCManager", "OpenService", "StartService", "ControlService", "QueryService",
                       "CreateService", "ChangeService", "CloseService")),
    ("Device/SetupAPI", ("SetupDi", "CM_", "DeviceIo", "CreateDevice")),
    ("Shell", ("SH", "Shell", "Path")),
    ("Power/System", ("Power", "System", "GetSystem", "GetVersion", "GetComputer", "GetUserName", "InitOnce")),
    ("String/format", ("lstr", "wsprintf", "sprintf", "str", "wcs", "Compare", "MultiByte", "WideChar",
                        "CharUpper", "CharLower", "FormatMessage")),
    ("Media/COM media", ("MF", "D3D", "Direct", "AVI", "wave", "mixer", "timeGet", "Media")),
])

# System DLL → short label used in the dependency tables.
DLL_NOTES = {
    "kernel32.dll": "Win32 base API (memory, files, threads, synchronisation)",
    "ole32.dll": "COM runtime (apartment init, class objects, marshalling)",
    "oleaut32.dll": "OLE Automation (BSTR/VARIANT, DISPID invocation)",
    "user32.dll": "Window/message/GDI-adjacent UI API",
    "gdi32.dll": "Graphics device interface",
    "advapi32.dll": "Registry, security, service control",
    "shell32.dll": "Shell integration",
    "shlwapi.dll": "Shell lightweight utilities (paths, strings, registry helpers)",
    "ws2_32.dll": "Winsock 2 sockets",
    "winhttp.dll": "WinHTTP HTTP client stack",
    "wininet.dll": "WinINet HTTP/FTP client stack",
    "urlmon.dll": "URL moniker / download stack",
    "iphlpapi.dll": "IP helper (interface enumeration, multicast/IGMP)",
    "rpcrt4.dll": "MS-RPC runtime",
    "comctl32.dll": "Common controls",
    "comdlg32.dll": "Common dialogs",
    "crypt32.dll": "CryptoAPI certificate/message functions",
    "setupapi.dll": "Device installation APIs",
    "version.dll": "Version-resource query API",
    "uxtheme.dll": "Visual styles",
    "dwmapi.dll": "Desktop Window Manager composition",
    "wtsapi32.dll": "Terminal Services / session API",
    "secur32.dll": "SSPI security providers",
    "netapi32.dll": "Network management (shares, users)",
    "userenv.dll": "User profile/environment",
    "psapi.dll": "Process status API",
    "dbghelp.dll": "Debugging helpers (symbol/stack walking)",
    "wldap32.dll": "LDAP client",
    "ssdpapi.dll": "SSDP discovery API (UPnP device discovery)",
    "upnp.dll": "UPnP control-point API (COM control point stack)",
    "wmp.dll": "Windows Media Player core object model (IWMPCore and friends)",
    "wmplib.dll": "Legacy Windows Media Player object-model type library",
    "wmvcore.dll": "Windows Media Format / codec pipeline",
    "wmasf.dll": "Advanced Systems Format (ASF) container",
    "d3d9.dll": "Direct3D 9 (visualisation rendering)",
    "dsound.dll": "DirectSound audio output",
    "mfplat.dll": "Media Foundation platform",
    "msdmo.dll": "DirectShow/DMO filter enumeration",
    "quartz.dll": "DirectShow runtime",
    "ntdll.dll": "NT native API (Rtl* helpers, status codes)",
    "msvcrt.dll": "MSVC C runtime (legacy)",
    "api-ms-win-crt-runtime-l1-1-0.dll": "Universal CRT runtime shim",
}


def categorise(functions: list[str]) -> dict[str, list[str]]:
    out: dict[str, list[str]] = defaultdict(list)
    for fn in functions:
        if not fn:
            continue
        placed = False
        for group, prefixes in PREFIX_GROUPS.items():
            if fn.startswith(prefixes):
                out[group].append(fn)
                placed = True
                break
        if not placed:
            out["other"].append(fn)
    return dict(sorted(((k, sorted(v)) for k, v in out.items()), key=lambda kv: (-len(kv[1]), kv[0])))


def build() -> dict:
    inv = json.load(open(os.path.join(DATA, "inventory.json")))
    pes = [f for f in inv["files"] if f.get("pe")]
    modules = []
    for f in pes:
        pe = f["pe"]
        dlls = []
        for imp in pe["imports"]:
            fns = [fn.get("name") or f"#{fn.get('ordinal')}" for fn in imp["functions"]]
            dlls.append({"dll": imp["dll"], "count": imp["count"], "functions": fns,
                         "timestamp": imp.get("timestamp")})
        exports = [{"ordinal": e.get("ordinal"), "name": e.get("name"), "rva": e.get("rva"),
                    "forwarder": e.get("forwarder")} for e in pe["exports"] if e.get("name")]
        modules.append({
            "module": f["module"] if "module" in f else os.path.basename(f["rel_path"]),
            "artifact": f["rel_path"],
            "sha256": f["hashes"]["sha256"],
            "kind": "executable" if pe["subsystem"] == 2 and not pe["exports"] else
                    ("library" if pe["subsystem"] == 2 else "console/native"),
            "image_base": pe["image_base"],
            "entry_point_va": pe["entry_point_va"],
            "imports": dlls,
            "delay_imports": pe["delay_imports"],
            "exports": exports,
            "api_groups": categorise([fn for d in dlls for fn in d["functions"]]),
            "section_count": len(pe["sections"]),
            "resources": pe["resources"],
        })
    return {
        "generated_by": "analysis/tools/api_map.py",
        "source": "analysis/report/data/inventory.json (PE import/export directories)",
        "rea_evidence": "analysis/report/rea-evidence/<module>/objdump-symbols.json",
        "modules": modules,
        "dependency_model": inv["dependency_model"],
    }


def render_api_map(api: dict) -> str:
    L = ["# API map — imported and exported symbols\n",
         "> Generated by `analysis/tools/api_map.py` from the PE import/export directories. "
         "The raw objdump symbol listing behind these tables is archived per module as REA "
         "Evidence (`analysis/report/rea-evidence/<module>/objdump-symbols.json`). "
         "Symbols acquired at run time via `GetProcAddress` are not represented here "
         "(see `module-analysis.md`).\n",
         "## 1. Export surface\n",
         "| Module | Exports (named) | Names |", "|---|---|---|"]
    for m in api["modules"]:
        names = ", ".join(f"`{e['name']}`" for e in m["exports"]) or "—"
        L.append(f"| `{os.path.basename(m['artifact'])}` | {len(m['exports'])} | {names} |")
    L.append("\nExported `DllGetClassObject`/`DllRegisterServer`/`DllCanUnloadNow` triples identify "
             "in-process COM servers: the class factories and their CLSIDs are recovered in "
             "`analysis/report/data-formats.md` and each module's `src/<module>/interfaces.h`.\n")

    L += ["## 2. Imported DLLs per module\n",
          "| Module | Imported DLLs (static) | Functions | Delay-loaded DLLs |",
          "|---|---|---|---|"]
    for m in api["modules"]:
        dlls = ", ".join(f"`{d['dll']}` ({d['count']})" for d in m["imports"]) or "—"
        delay = ", ".join(f"`{d['dll']}`" for d in m["delay_imports"]) or "—"
        total = sum(d["count"] for d in m["imports"])
        L.append(f"| `{os.path.basename(m['artifact'])}` | {dlls} | {total} | {delay} |")

    L += ["\n## 3. API families by module\n"]
    for m in api["modules"]:
        L.append(f"### `{os.path.basename(m['artifact'])}`\n")
        for group, fns in m["api_groups"].items():
            shown = ", ".join(f"`{x}`" for x in fns[:24])
            more = f" … (+{len(fns)-24} more)" if len(fns) > 24 else ""
            L.append(f"* **{group}** ({len(fns)}): {shown}{more}")
        L.append("")
    return "\n".join(L) + "\n"


def render_dependencies(api: dict) -> str:
    dep = api["dependency_model"]
    by_artifact = {m["artifact"]: m for m in api["modules"]}
    L = ["# Dependencies — module relationships and runtime libraries\n",
         "> Generated by `analysis/tools/api_map.py` from the PE import directories (static imports "
         "only). Run-time `LoadLibrary`/`GetProcAddress` usage is documented per module in "
         "`analysis/report/module-analysis.md`.\n",
         "## 1. Inter-module dependencies (imports of another shipped module)\n"]
    if dep["internal_edges"]:
        L += ["| From | To | Imported DLL name | Functions |", "|---|---|---|---|"]
        for e in dep["internal_edges"]:
            L.append(f"| `{os.path.basename(e['from'])}` | `{os.path.basename(e['to'])}` | `{e['dll']}` | {e['functions']} |")
    else:
        L.append("No shipped module statically imports another shipped module; the modules cooperate "
                 "through COM class objects, RPC/UPnP protocols and shared registry configuration.\n")

    L += ["\n## 2. External DLL dependencies\n",
          "| DLL | Importers | Imported functions | Role (when known) |", "|---|---|---|---|"]
    for dll, rec in sorted(dep["external_dlls"].items(), key=lambda kv: (-len(kv[1]["importers"]), kv[0])):
        role = DLL_NOTES.get(dll.lower(), "—")
        L.append(f"| `{dll}` | {len(rec['importers'])} ({', '.join(os.path.basename(p) for p in rec['importers'][:4])}"
                 f"{'…' if len(rec['importers'])>4 else ''}) | {rec['functions']} | {role} |")

    L += ["\n## 3. Dependency graph\n", "```mermaid", "graph LR"]
    for m in api["modules"]:
        node = os.path.basename(m["artifact"]).replace(".", "_")
        L.append(f'  {node}["{os.path.basename(m["artifact"])}"]')
    for e in dep["internal_edges"]:
        a = os.path.basename(e["from"]).replace(".", "_")
        b = os.path.basename(e["to"]).replace(".", "_")
        L.append(f"  {a} -->|{e['dll']}| {b}")
    hot = [d for d, r in dep["external_dlls"].items() if len(r["importers"]) >= 6]
    for d in sorted(hot):
        node = re.sub(r"\W", "_", d)
        L.append(f'  sys_{node}(["{d}"]):::sys')
    for m in api["modules"]:
        node = os.path.basename(m["artifact"]).replace(".", "_")
        for imp in m["imports"]:
            if imp["dll"] in hot:
                sysnode = re.sub(r"[^0-9A-Za-z_]", "_", imp["dll"])
                L.append(f"  {node} --> sys_{sysnode}")
    L += ["  classDef sys fill:#eee,stroke:#999", "```",
          "\nOnly system DLLs imported by six or more modules are expanded in the graph to keep it "
          "readable; the full table in section 2 is authoritative.\n"]
    return "\n".join(L) + "\n"


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--json-only", action="store_true")
    args = ap.parse_args()
    api = build()
    with open(os.path.join(DATA, "api-map.json"), "w") as fh:
        json.dump(api, fh, indent=1)
    print(f"[api-map] {len(api['modules'])} modules -> analysis/report/data/api-map.json")
    if not args.json_only:
        open(os.path.join(REPO, "analysis", "report", "api-map.md"), "w").write(render_api_map(api))
        open(os.path.join(REPO, "analysis", "report", "dependencies.md"), "w").write(render_dependencies(api))
        print("[api-map] wrote analysis/report/api-map.md and analysis/report/dependencies.md")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
