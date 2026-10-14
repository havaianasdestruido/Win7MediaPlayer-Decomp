/* sub_7ff24f945b0 @ 0x7ff24f945b0
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f945b0  (93 bytes, 5 basic blocks)
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

void sub_7ff24f945b0(void)
{
    int v4;  // eax
    unsigned int v5;  // ebx
    char v0;  // [bp+0x0]
    unsigned short v2;  // [bp+0x40]
    unsigned long long v3;  // [bp+0x250]

    if (v4 != vvar_14{r56|4b})
    {
        if (v4 > vvar_14{r56|4b})
            v5 = v4 & 65535 | 0x80070000;
        if (v5 < vvar_14{r56|4b})
        {
            sub_7ff24f95db0(v3 ^ &v0);
            return;
        }
    }
    v2 = vvar_14{r56|4b};
    8792418378188();
}
