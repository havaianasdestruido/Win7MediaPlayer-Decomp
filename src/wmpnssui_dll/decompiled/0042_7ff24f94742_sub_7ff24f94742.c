/* sub_7ff24f94742 @ 0x7ff24f94742
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f94742  (94 bytes, 6 basic blocks)
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

long long sub_7ff24f94742(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned int a7)
{
    unsigned int v3;  // eax
    char v0;  // [bp+0x0]
    unsigned long long v2;  // [bp+0x260]

    if (v3 == vvar_20{r56|8b} && a7 > vvar_20{r56|8b} && a7 == vvar_20{r56|8b} + 1)
        sub_7ff24f94558(&vvar_20{r56|8b}); /* do not return */
    return sub_7ff24f95db0(v2 ^ &v0);
}
