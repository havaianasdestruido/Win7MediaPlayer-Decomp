/* sub_7ff24f93504 @ 0x7ff24f93504
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f93504  (312 bytes, 14 basic blocks)
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

typedef struct struct_1 {
    char padding_0[24];
    struct struct_0 *field_18;
    char padding_20[40];
    unsigned long long field_48;
} struct_1;

typedef struct struct_0 {
    char padding_0[548];
    unsigned int field_224;
} struct_0;

extern long long g_7ff24f91490;
extern unsigned long long g_7ff24f98108;
extern long long g_7ff24f986c0;
extern unsigned long long g_7ff24f986d8;
extern char g_7ff24f986e0;
extern unsigned int g_7ff24f986ec;
extern char g_7ff24f986f0;

long long sub_7ff24f93504(struct_1 *a0)
{
    int v5;  // ebx
    char v0;  // [bp-0x518]
    char *v1;  // [bp-0x4f8]
    char flag;  // [bp-0x4c0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x38]

    v3 = g_7ff24f98108 ^ &v0;
    v5 = (0 < *((int *)a0->field_48) ? 0 : -2147467259);
    if (v5 >= 0)
    {
        if (!a0->field_18)
            v5 = -2147467261;
        if (v5 >= 0)
        {
            if (g_7ff24f986ec && (g_7ff24f986f0 >= 4 || !g_7ff24f986f0) && (0x8000000000000000 & g_7ff24f986d8) && (*((long long *)&g_7ff24f986e0) & 0x8000000000000000) == *((long long *)&g_7ff24f986e0))
                sub_7ff24f92b84(g_7ff24f986c0, &g_7ff24f91490, *((int *)a0->field_48), 0); /* do not return */
            if (!a0->field_18->field_224)
                sub_7ff24f9240c(&a0->field_18->padding_0[34]);
            v1 = &flag;
            flag = 0;
            8792418812224();
        }
    }
    return sub_7ff24f95db0(v3 ^ &v0);
}
