/* sub_100008490 @ 0x100008490
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100008490  (149 bytes, 12 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 395fce3d66ab1ed9a4fb2238172eaefc5cf78fc7a8b34c30686d638d16d9efca
 *   Evidence: analysis/report/rea-evidence/wmprph_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_1 {
    char padding_0[80];
    unsigned long long field_50;
} struct_1;

typedef struct struct_0 {
    char padding_0[48];
    long long field_30;
    char padding_38[1];
    char field_39;
    char padding_3a[2];
    char field_3c;
} struct_0;

extern long long g_100001ed0;
extern struct_0 *g_100011140;

unsigned int sub_100008490(struct_1 *a0)
{
    if (g_100011140 != &g_100011140 && (g_100011140->field_3c & 1) && g_100011140->field_39 >= 5)
        sub_1000071f4(g_100011140->field_30, 28, &g_100001ed0); /* do not return */
    if (a0->field_50)
    {
        4296016696();
    }
    else if (g_100011140 == &g_100011140)
    {
        return 2147500037;
    }
    else if (!(g_100011140->field_3c & 1))
    {
        return 2147500037;
    }
    else if (g_100011140->field_39 >= 5)
    {
        sub_1000071f4(g_100011140->field_30, 29, &g_100001ed0); /* do not return */
    }
    else
    {
        return 2147500037;
    }
}
