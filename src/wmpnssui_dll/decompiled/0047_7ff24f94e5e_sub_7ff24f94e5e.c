/* sub_7ff24f94e5e @ 0x7ff24f94e5e
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f94e5e  (74 bytes, 6 basic blocks)
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

extern long long g_7ff24f91530;
extern long long g_7ff24f986c0;
extern unsigned long long g_7ff24f986d8;
extern char g_7ff24f986e0;
extern unsigned int g_7ff24f986ec;
extern char g_7ff24f986f0;

long long sub_7ff24f94e5e(void)
{
    unsigned long v1;  // rbx
    unsigned int v2;  // eax

    if (!g_7ff24f986ec)
        goto LABEL_0x7ff24f94eaf;
    if (g_7ff24f986f0 < 4)
        if (!g_7ff24f986f0)
            goto LABEL_7ff24f94e77;
        else
            goto LABEL_0x7ff24f94eaf;
LABEL_7ff24f94e77:
    if (!(v1 & g_7ff24f986d8))
        goto LABEL_0x7ff24f94eaf;
    if ((*((long long *)&g_7ff24f986e0) & v1) != *((long long *)&g_7ff24f986e0))
        goto LABEL_0x7ff24f94eaf;
    sub_7ff24f923c8(g_7ff24f986c0, &g_7ff24f91530, v2); /* do not return */
}
