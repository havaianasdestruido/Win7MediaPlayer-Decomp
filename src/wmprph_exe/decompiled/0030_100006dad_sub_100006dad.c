/* sub_100006dad @ 0x100006dad
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100006dad  (189 bytes, 17 basic blocks)
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
    struct struct_0 *field_0;
} struct_1;

typedef struct struct_2 {
    struct struct_3 *field_0;
    char padding_8[8];
    struct struct_4 *field_10;
} struct_2;

typedef struct struct_5 {
    char padding_0[16];
    struct struct_6 *field_10;
} struct_5;

typedef struct struct_7 {
    char padding_0[16];
    struct struct_8 *field_10;
} struct_7;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

extern unsigned long long g_100001a98;

int sub_100006dad(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long flag3, struct_5 **ptr, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, struct_2 **flag2)
{
    long long v2;  // rax
    unsigned long long flag;  // rdi
    struct_7 *v12;  // rdx
    struct_5 **v13;  // rcx
    int v7;  // esi
    struct_2 **v8;  // rcx
    char *v9;  // r8
    unsigned long long v10;  // rdx
    struct_2 **v11;  // rcx
    struct_2 **v1;  // [bp+0x100008], Other Possible Types: unsigned long long

    if (v2)
        sub_10000987c(v2, 0); /* do not return */
    flag = 0;
    if (v7 >= 0)
    {
        v8 = flag2;
        flag3 = 0;
        v9 = &flag3;
        v10 = &g_100001a98;
        *(flag2)->field_0();
    }
    if (vvar_37{r56|8b})
    {
        if (v7 >= 0)
        {
            v11 = NULL;
            v1 = flag2;
            flag2 = 0;
            goto LABEL_100006eca;
        }
        else
        {
            v1 = 0;
        }
    }
    v11 = flag2;
LABEL_100006eca:
    if (ptr)
    {
        v12 = *(ptr);
        v13 = ptr;
        *(ptr)->field_10();
    }
    else if (v11)
    {
        *(v11)->field_10();
    }
    else
    {
        return v7;
    }
}
