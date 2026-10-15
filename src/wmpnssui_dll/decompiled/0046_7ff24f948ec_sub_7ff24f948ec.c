/* sub_7ff24f948ec @ 0x7ff24f948ec
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f948ec  (79 bytes, 6 basic blocks)
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

int sub_7ff24f948ec(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v3;  // ebx
    unsigned long long v1;  // [bp+0x18]
    unsigned long long v2;  // [bp+0x20]

    v1 = a2;
    v2 = a3;
    v3 = 0;
    if (!a1 || a1 > 2147483647)
        v3 = -2147024809;
    if (v3 < 0)
        return v3;
    8792418811960();
}
