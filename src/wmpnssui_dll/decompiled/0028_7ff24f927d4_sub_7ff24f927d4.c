/* sub_7ff24f927d4 @ 0x7ff24f927d4
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f927d4  (136 bytes, 7 basic blocks)
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

extern long long g_7ff24f914d0;
extern long long g_7ff24f986c0;
extern unsigned long long g_7ff24f986d8;
extern char g_7ff24f986e0;
extern unsigned int g_7ff24f986ec;
extern char g_7ff24f986f0;

long long sub_7ff24f927d4(unsigned long a0)
{
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rdi
    char *v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x8]
    unsigned long long v2;  // [bp+0x8]
    char v3;  // [bp+0x10]
    unsigned long long v4;  // [bp+0x18]

    v2 = v5;
    v4 = v6;
    v1 = v7;
    if (g_7ff24f986ec && (g_7ff24f986f0 >= 4 || !g_7ff24f986f0) && (0x8000000000000000 & g_7ff24f986d8) && (*((long long *)&g_7ff24f986e0) & 0x8000000000000000) == *((long long *)&g_7ff24f986e0))
        sub_7ff24f923c8(g_7ff24f986c0, &g_7ff24f914d0, 0); /* do not return */
    v0 = &v3;
    8792418812224();
}
