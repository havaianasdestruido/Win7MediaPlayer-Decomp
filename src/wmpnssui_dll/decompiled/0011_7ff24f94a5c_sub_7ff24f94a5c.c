/* sub_7ff24f94a5c @ 0x7ff24f94a5c
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f94a5c  (297 bytes, 17 basic blocks)
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

typedef struct struct_0 {
    char padding_0[48];
    unsigned long long field_30;
} struct_0;

extern long long g_7ff24f91510;
extern unsigned long long g_7ff24f98108;
extern long long g_7ff24f986c0;
extern unsigned long long g_7ff24f986d8;
extern char g_7ff24f986e0;
extern unsigned int g_7ff24f986ec;
extern char g_7ff24f986f0;

long long sub_7ff24f94a5c(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, char a5)
{
    char v0;  // [bp-0x168]
    unsigned long long v1;  // [bp-0x48]

    v1 = g_7ff24f98108 ^ &v0;
    if (g_7ff24f986ec && (g_7ff24f986f0 >= 4 || !g_7ff24f986f0) && (0x8000000000000000 & g_7ff24f986d8) && (*((long long *)&g_7ff24f986e0) & 0x8000000000000000) == *((long long *)&g_7ff24f986e0))
        sub_7ff24f92b84(g_7ff24f986c0, &g_7ff24f91510, 0, 0); /* do not return */
    if (!(a5 & 3) && a0->field_30)
        sub_7ff24f92774(); /* do not return */
    if (g_7ff24f986ec && (g_7ff24f986f0 >= 4 || !g_7ff24f986f0) && (0x8000000000000000 & g_7ff24f986d8) && (*((long long *)&g_7ff24f986e0) & 0x8000000000000000) == *((long long *)&g_7ff24f986e0))
        sub_7ff24f92b84(g_7ff24f986c0, &g_7ff24f91510, 0, 0); /* do not return */
    return sub_7ff24f95db0(v1 ^ &v0);
}
