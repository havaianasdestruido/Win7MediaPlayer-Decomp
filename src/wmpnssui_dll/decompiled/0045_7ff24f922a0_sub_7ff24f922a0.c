/* sub_7ff24f922a0 @ 0x7ff24f922a0
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f922a0  (90 bytes, 6 basic blocks)
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

extern long long g_7ff24f91440;
extern unsigned long long g_7ff24f986b8;
extern long long g_7ff24f986c0;
extern long long g_7ff24f986c8;

unsigned int sub_7ff24f922a0(unsigned long a0, unsigned int flag)
{
    if (!flag)
    {
        sub_7ff24f92044(&g_7ff24f986c0);
        return 1;
    }
    else if (flag == 1)
    {
        g_7ff24f986b8 = a0;
        sub_7ff24f92004(&g_7ff24f91440, sub_7ff24f91fc8, &g_7ff24f986c8, &g_7ff24f986c0);
        8792418812104();
    }
    else
    {
        return 1;
    }
}
