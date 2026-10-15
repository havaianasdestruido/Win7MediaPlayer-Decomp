/* sub_10000a122 @ 0x10000a122
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000a122  (251 bytes, 18 basic blocks)
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

typedef struct struct_2 {
    struct struct_0 *field_0;
    struct struct_2 *field_8;
    struct struct_2 *field_10;
    struct struct_2 *field_18;
    struct struct_2 *field_20;
    unsigned int field_28;
    char padding_2c[4];
    unsigned int field_30;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern long long g_100001890;
extern long long g_100002068;
extern char g_100002198;
extern long long g_1000119e0;
extern char g_100011a08;

long long sub_10000a122(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, struct_2 *p)
{
    struct_2 *v8;  // rax
    struct_2 *ptr;  // rdi
    struct_2 *v18;  // rcx
    long long v19;  // r13
    struct_2 *v10;  // r14
    unsigned int v11;  // esi
    long long v12;  // r9
    long long v13;  // r8
    unsigned int v14;  // eax
    unsigned long v15;  // rsi
    char v16;  // r12b
    unsigned long v17;  // rdx
    long long v1;  // [bp+0x20]
    char v2;  // [bp+0x100008]
    long long v3;  // [bp+0x100010]
    long long v4;  // [bp+0x100018]
    long long v5;  // [bp+0x100020]
    struct_2 *v6;  // [bp+0x100028]
    char v7;  // [bp+0x100030]

    ptr = v8;
    if (ptr != v10)
    {
        ptr->field_8 = v10;
        ptr->field_20 = v10;
        ptr->field_18 = v10;
        ptr->field_10 = v10;
        ptr->field_28 = (unsigned int)v10;
        ptr->field_30 = (unsigned int)v10;
        ptr->field_0 = &g_100002198;
        InterlockedIncrement(&g_100011a08);
    }
    else
    {
        ptr = v10;
    }
    if (ptr != v10)
        v11 = (unsigned int)v10;
    if (v11 < (unsigned int)v10)
        goto LABEL_0x10000a224;
    if ((v7 & 1))
    {
        p = vvar_51{r56|8b};
        (*((long long *)(*((long long *)&v2) + 8)))();
    }
    v12 = v3;
    v13 = v5;
    *((unsigned int *)&v1) = (unsigned int)v10;
    v14 = sub_10000a244(ptr, v4, v5, v3, v1);
    v15 = v14;
    if ((v16 & 1) && p != v10)
    {
        v17 = p->field_0;
        v18 = p;
        p->field_0->field_10();
    }
    if (v14 >= (unsigned int)v10)
    {
        ptr->field_20 = v6;
        if ((int)sub_100002eb8(ptr, &g_100002068, &g_100001890, v19) < (unsigned int)v10)
            goto LABEL_10000a1f2;
        else
            goto LABEL_0x10000a224;
    }
LABEL_10000a1f2:
    if (ptr == v10)
        goto LABEL_0x10000a224;
    ptr->field_30 = 1;
    ptr->field_0 = &g_100002198;
    sub_10000d0c0(&g_1000119e0);
    sub_100009f70(ptr);
    4295028078();
}
