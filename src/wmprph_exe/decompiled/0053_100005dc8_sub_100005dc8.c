/* sub_100005dc8 @ 0x100005dc8
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100005dc8  (152 bytes, 12 basic blocks)
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

typedef struct struct_4 {
    char padding_0[8];
    struct struct_5 *field_8;
    char padding_10[200];
    struct struct_6 *field_d8;
} struct_4;

typedef struct struct_10 {
    char padding_0[112];
    struct struct_11 *field_70;
} struct_10;

typedef struct struct_12 {
    char padding_0[8];
    struct struct_13 *field_8;
    struct struct_14 *field_10;
} struct_12;

typedef struct struct_7 {
    char padding_0[8];
    struct struct_8 *field_8;
    struct struct_9 *field_10;
} struct_7;

typedef struct struct_16 {
    struct struct_15 *field_0;
} struct_16;

typedef struct struct_17 {
    char padding_0[16];
    struct struct_18 *field_10;
} struct_17;

typedef struct struct_5 {
    struct struct_1 *field_0;
} struct_5;

typedef struct struct_6 {
    struct struct_2 *field_0;
} struct_6;

typedef struct struct_11 {
    struct struct_7 *field_0;
} struct_11;

typedef struct struct_13 {
    unsigned long long field_0;
} struct_13;

typedef struct struct_14 {
    unsigned long long field_0;
} struct_14;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_15 {
    unsigned long long field_0;
} struct_15;

typedef struct struct_18 {
    unsigned long long field_0;
} struct_18;

typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern unsigned long long g_100001840;

unsigned int sub_100005dc8(struct_4 *ptr, struct_12 **a1)
{
    struct_4 *v1;  // r8
    struct_4 *v2;  // rsi
    struct_17 **addr;  // rcx
    struct_17 *v12;  // rdx
    struct_10 *v3;  // rdi
    struct_10 *p;  // rdi
    struct_12 **v5;  // rcx
    struct_7 **v6;  // rcx
    struct_16 **v7;  // rcx
    unsigned long long flag;  // rdi
    struct_4 *v9;  // r8
    unsigned long long v10;  // rdx

    v1 = &ptr->padding_10[88];
    v2 = ptr;
    v3 = -(NULL < ptr) & &ptr->padding_10[88];
    p = &v3->field_70;
    if (&v3->field_70)
    {
        if (a1)
        {
            v5 = a1;
            *(a1)->field_8();
        }
        v6 = *((long long *)&p->padding_0[0]);
        if (*((long long *)&p->padding_0[0]))
            (*((long long *)(*((long long *)*((long long *)&p->padding_0[0])) + 16)))();
        *((struct_12 ***)&p->padding_0[0]) = a1;
    }
    v7 = ptr->field_8;
    flag = 0;
    if (ptr->field_8)
    {
        v9 = &ptr->field_d8;
        v10 = &g_100001840;
        ptr->field_8->field_0->field_0();
    }
    else if (!a1)
    {
        addr = ptr->field_d8;
        if (!addr)
            return 0;
        ptr->field_d8 = NULL;
        v12 = *(addr);
        *(addr)->field_10();
    }
    else
    {
        return 0;
    }
}
