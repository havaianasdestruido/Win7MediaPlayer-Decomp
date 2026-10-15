/* sub_100007928 @ 0x100007928
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100007928  (174 bytes, 13 basic blocks)
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

unsigned int sub_100007928(long long a0, long long a1, unsigned int a2)
{
    unsigned int v2;  // eax
    long long v0;  // [bp-0x18]

    if (!a1)
        return 2147500035;
    if (g_100011140 != &g_100011140 && (g_100011140->field_3c & 1) && g_100011140->field_39 >= 5)
    {
        *((unsigned int *)&v0) = a2;
        sub_1000072e4(g_100011140->field_30, 18, &g_100001ed0, a1, v0); /* do not return */
    }
    v2 = sub_10000e0b4(a0 + 48, a1, 4294967295);
    if (g_100011140 == &g_100011140 || !(g_100011140->field_3c & 1) || g_100011140->field_39 < 5)
        return v2;
    sub_1000071f4(g_100011140->field_30, 19, &g_100001ed0); /* do not return */
    return v2;
}
