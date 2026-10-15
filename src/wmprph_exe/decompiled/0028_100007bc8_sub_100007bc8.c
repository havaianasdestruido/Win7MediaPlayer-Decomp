/* sub_100007bc8 @ 0x100007bc8
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100007bc8  (342 bytes, 17 basic blocks)
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
    char padding_58[8];
    unsigned long long field_60;
    uint128_t field_68;
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

unsigned int sub_100007bc8(struct_1 *ptr, unsigned int *a1)
{
    uint128_t *v6;  // rax
    unsigned long long v7;  // rcx
    long long v0;  // [bp-0x38]
    long long v1;  // [bp-0x30]
    long long v2;  // [bp-0x28]
    long long v3;  // [bp-0x20]
    char v4;  // [bp-0x18]

    if (!a1)
        return 2147500035;
    if (g_100011140 != &g_100011140 && (g_100011140->field_3c & 1) && g_100011140->field_39 >= 5)
    {
        *((unsigned int *)&v3) = a1[3];
        *((unsigned int *)&v2) = a1[2];
        *((unsigned int *)&v1) = a1[1];
        *((unsigned int *)&v0) = *(a1);
        sub_1000073d0(g_100011140->field_30, 22, &g_100001ed0, a1, v0, v1, v2, v3); /* do not return */
    }
    if (ptr->field_60)
        4296016864();
    v6 = sub_100007d24(ptr, &v4, a1);
    v7 = ptr->field_50;
    *((uint128_t *)&(&ptr->field_60)[1]) = *(v6);
    if (v7)
        4296016864();
    if (g_100011140 == &g_100011140 || !(g_100011140->field_3c & 1) || g_100011140->field_39 < 5)
        return 0;
    sub_1000071f4(g_100011140->field_30, 23, &g_100001ed0); /* do not return */
    return 0;
}
