/* sub_7ff24f93da0 @ 0x7ff24f93da0
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f93da0  (208 bytes, 7 basic blocks)
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

extern long long g_7ff24f91450;
extern unsigned long long g_7ff24f98108;
extern long long g_7ff24f986c0;
extern unsigned long long g_7ff24f986d8;
extern char g_7ff24f986e0;
extern unsigned int g_7ff24f986ec;
extern char g_7ff24f986f0;

long long sub_7ff24f93da0(unsigned long a0)
{
    unsigned long long v19;  // rbx
    unsigned long long v20;  // rsi
    unsigned long long v21;  // rdi
    unsigned long long v22;  // r12
    unsigned long long v23;  // r13
    unsigned long long v24;  // r14
    unsigned long long v25;  // r15
    char v0;  // [bp-0x388]
    char *v1;  // [bp-0x368]
    unsigned long long flag5;  // [bp-0x358]
    unsigned long long flag4;  // [bp-0x350]
    unsigned int flag;  // [bp-0x348]
    unsigned long long flag3;  // [bp-0x338]
    unsigned long long flag2;  // [bp-0x330]
    unsigned long choice;  // [bp-0x328]
    unsigned long v8;  // [bp-0x38]
    unsigned long long v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x20]
    unsigned long long v11;  // [bp-0x18]
    unsigned long long v12;  // [bp-0x10]
    unsigned long long v13;  // [bp-0x8]
    unsigned long long v15;  // [bp+0x10]
    unsigned long v16;  // [bp+0x18]
    unsigned long long v17;  // [bp+0x20]

    v15 = v19;
    v16 = vvar_17{r56|8b};
    v17 = v20;
    v13 = v21;
    v12 = v22;
    v11 = v23;
    v10 = v24;
    v9 = v25;
    v8 = g_7ff24f98108 ^ &v0;
    choice = 0;
    flag2 = 0;
    flag3 = 0;
    flag4 = 0;
    flag5 = 0;
    flag = 0;
    if (g_7ff24f986ec && (g_7ff24f986f0 >= 4 || !g_7ff24f986f0) && (0x8000000000000000 & g_7ff24f986d8) && (*((long long *)&g_7ff24f986e0) & 0x8000000000000000) == *((long long *)&g_7ff24f986e0))
        sub_7ff24f92b84(g_7ff24f986c0, &g_7ff24f91450, 0, 0); /* do not return */
    v1 = &choice;
    8792418812224();
}
