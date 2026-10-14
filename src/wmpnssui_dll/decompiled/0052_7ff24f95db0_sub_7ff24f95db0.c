/* sub_7ff24f95db0 @ 0x7ff24f95db0
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f95db0  (57 bytes, 6 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 28d793e5077afb34b57fd3ac404413a60f06a3985fcc4aa16cccb8525411f8bb
 *   Evidence: analysis/report/rea-evidence/wmpnssui_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern char g_7ff24f98108;

void sub_7ff24f95db0(unsigned long long a0)
{
    unsigned long v1;  // rcx
    unsigned long long v0;  // [bp+0x8]

    if (a0 == *((long long *)&g_7ff24f98108))
    {
        v1 = __ROL__(a0, 16);
        if (!(unsigned short)v1)
            return;
        a0 = __ROR__(v1, 16);
    }
    v0 = a0;
    8792418812016();
}
