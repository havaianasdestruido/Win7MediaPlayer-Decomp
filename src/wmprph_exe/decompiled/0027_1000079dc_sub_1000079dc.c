/* sub_1000079dc @ 0x1000079dc
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x1000079dc  (366 bytes, 17 basic blocks)
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
    char padding_0[88];
    unsigned long long field_58;
    unsigned long long field_60;
    uint128_t field_68;
} struct_0;

typedef struct struct_1 {
    char padding_0[48];
    long long field_30;
    char padding_38[1];
    char field_39;
    char padding_3a[2];
    char field_3c;
} struct_1;

extern long long g_100001ed0;
extern struct_1 *g_100011140;

unsigned int sub_1000079dc(struct_0 *ptr, unsigned long long a1, unsigned int *a2)
{
    long long v0;  // [bp-0x50]
    long long v1;  // [bp-0x48]
    long long v2;  // [bp-0x40]
    long long v3;  // [bp-0x38]
    unsigned long long flag2;  // [bp-0x30]
    unsigned long long choice;  // [bp-0x28]
    unsigned long long flag;  // [bp-0x20]
    char v7;  // [bp-0x18]

    if (!a2 || !a1)
        return 2147500035;
    if (g_100011140 != &g_100011140 && (g_100011140->field_3c & 1) && g_100011140->field_39 >= 5)
    {
        *((unsigned int *)&v3) = a2[3];
        *((unsigned int *)&v2) = a2[2];
        *((unsigned int *)&v1) = a2[1];
        *((unsigned int *)&v0) = *(a2);
        sub_100007258(g_100011140->field_30, 20, &g_100001ed0, a1 & 4294967295, a2, v0, v1, v2, v3); /* do not return */
    }
    if (ptr->field_60 && a1 == ptr->field_58)
    {
        *((int128_t *)&(&ptr->field_60)[1]) = *((int128_t *)sub_100007d24(ptr, &v7, a2));
        if (g_100011140 == &g_100011140 || !(g_100011140->field_3c & 1) || g_100011140->field_39 < 5)
            return 0;
        sub_1000071f4(g_100011140->field_30, 21, &g_100001ed0); /* do not return */
        return 0;
    }
    flag = 0;
    choice = 0;
    flag2 = 0;
    ptr->field_58 = a1;
    4296016880();
    return 2147500035;
}
