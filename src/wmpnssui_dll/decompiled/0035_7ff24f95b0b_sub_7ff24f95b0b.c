/* sub_7ff24f95b0b @ 0x7ff24f95b0b
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f95b0b  (62 bytes, 7 basic blocks)
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
    unsigned long long field_0;
} struct_0;

extern unsigned int g_7ff24f98130;
extern char g_7ff24f98700;
extern struct_0 *g_7ff24f98720;

long long sub_7ff24f95b0b(void)
{
    unsigned long v1;  // rbx
    unsigned int v2;  // edi

    if (vvar_16{r56|4b} == (unsigned int)v1)
        InterlockedExchange64(&g_7ff24f98700, v1);
    if (g_7ff24f98720 != v1 && sub_7ff24f95e8c(&g_7ff24f98720) != (unsigned int)v1)
        g_7ff24f98720();
    g_7ff24f98130 = g_7ff24f98130 + v2;
}
