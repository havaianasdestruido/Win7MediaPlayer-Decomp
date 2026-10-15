/* sub_7ff24f92dcc @ 0x7ff24f92dcc
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f92dcc  (280 bytes, 17 basic blocks)
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

extern long long g_7ff24f91470;
extern long long g_7ff24f91480;
extern unsigned long long g_7ff24f98108;
extern long long g_7ff24f986c0;
extern unsigned long long g_7ff24f986d8;
extern char g_7ff24f986e0;
extern unsigned int g_7ff24f986ec;
extern char g_7ff24f986f0;

long long sub_7ff24f92dcc(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned int a5)
{
    char v0;  // [bp-0x168]
    unsigned long long v1;  // [bp-0x48]

    v1 = g_7ff24f98108 ^ &v0;
    if (g_7ff24f986ec && (g_7ff24f986f0 >= 4 || !g_7ff24f986f0) && (0x8000000000000000 & g_7ff24f986d8) && (*((long long *)&g_7ff24f986e0) & 0x8000000000000000) == *((long long *)&g_7ff24f986e0))
        sub_7ff24f923c8(g_7ff24f986c0, &g_7ff24f91470, 0); /* do not return */
    if ((4294965247 & a5) && (a5 & 0xfffffffc))
        sub_7ff24f92774(); /* do not return */
    if (g_7ff24f986ec && (g_7ff24f986f0 >= 4 || !g_7ff24f986f0) && (0x8000000000000000 & g_7ff24f986d8) && (*((long long *)&g_7ff24f986e0) & 0x8000000000000000) == *((long long *)&g_7ff24f986e0))
        sub_7ff24f923c8(g_7ff24f986c0, &g_7ff24f91480, 0); /* do not return */
    return sub_7ff24f95db0(v1 ^ &v0);
}
