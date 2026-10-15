/* sub_7ff24f93141 @ 0x7ff24f93141
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f93141  (69 bytes, 6 basic blocks)
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

int sub_7ff24f93141(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned int flag)
{
    unsigned int v1;  // eax
    unsigned int v2;  // esi
    unsigned int v3;  // ebx

    if (v1 != v2)
    {
        if (v1 > v2)
            v3 = v1 & 65535 | 0x80070000;
    }
    else if (flag != 1 && flag != 2)
    {
        v3 = 2147500037;
    }
    if (v3 < v2)
        goto LABEL_0x7ff24f931be;
    8792418812144();
}
