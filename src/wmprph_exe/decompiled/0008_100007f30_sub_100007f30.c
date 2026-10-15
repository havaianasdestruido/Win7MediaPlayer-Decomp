/* sub_100007f30 @ 0x100007f30
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100007f30  (386 bytes, 28 basic blocks)
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
    char padding_0[80];
    unsigned long long field_50;
    char padding_58[32];
    struct struct_3 *field_78;
    unsigned long long field_80;
    char padding_88[89];
    char field_e1;
} struct_4;

typedef struct struct_9 {
    struct struct_5 *field_0;
    char padding_8[24];
    struct struct_8 *field_20;
} struct_9;

typedef struct struct_3 {
    struct struct_0 *field_0;
    char padding_8[24];
    struct struct_4 *field_20;
} struct_3;

typedef struct struct_5 {
    struct struct_6 *field_0;
    char padding_8[8];
    struct struct_7 *field_10;
} struct_5;

typedef struct struct_8 {
    char padding_0[80];
    unsigned long long field_50;
    char padding_58[32];
    struct struct_9 *field_78;
    unsigned long long field_80;
    char padding_88[89];
    char field_e1;
} struct_8;

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[8];
    struct struct_2 *field_10;
} struct_0;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_10 {
    char padding_0[48];
    long long field_30;
    char padding_38[1];
    char field_39;
    char padding_3a[2];
    char field_3c;
} struct_10;

extern unsigned long long g_100001870;
extern long long g_100001ed0;
extern struct_10 *g_100011140;

unsigned long long sub_100007f30(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, struct_9 *a11, struct_9 *a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, struct_9 *a25, struct_9 *a26, struct_9 *a27, struct_9 *a28)
{
    struct_4 *ptr;  // rsi
    unsigned long v2;  // rax
    struct_9 *v11;  // rcx
    struct_9 *v12;  // rcx
    struct_9 *v13;  // rcx
    struct_9 *v14;  // rcx
    struct_9 *v15;  // rcx
    struct_9 *v3;  // r14
    unsigned long long v4;  // rdi
    unsigned int v5;  // eax
    unsigned long v6;  // r8
    unsigned long long v7;  // rdx
    struct_3 *v8;  // rcx
    char v9;  // r15b
    struct_9 *v10;  // rcx

    ptr->field_80 = v2;
    ptr->field_50 = v2;
    if (&a27 != v3)
    {
        a27 = v3;
        4296016904();
    }
    v4 = 2147500035;
    if (2147500035 >= (unsigned int)v3)
    {
        if (&a26 == v3)
        {
            v4 = 2147500035;
            if (2147500035 >= (unsigned int)v3)
            {
                ptr->field_78 = v3;
                v5 = sub_10000a340(&ptr->field_78);
                v4 = v5;
                if (v5 >= (unsigned int)v3)
                {
                    v6 = &a12;
                    v7 = &g_100001870;
                    ptr->field_78->field_20 = ptr;
                    v8 = ptr->field_78;
                    ptr->field_78->field_0->field_0();
                }
            }
        }
        else
        {
            a26 = v3;
            4296016904();
        }
    }
    ptr->field_e1 = *((char *)&v3);
    if (g_100011140 != &g_100011140 && (v9 & g_100011140->field_3c) && g_100011140->field_39 >= 5)
        sub_100007218(g_100011140->field_30, 25, &g_100001ed0, v4 & 4294967295); /* do not return */
    v10 = a28;
    if (a28 != v3)
        a28->field_0->field_10();
    v11 = a11;
    if (a11 != v3)
    {
        a11->field_0->field_10();
    }
    else if (a25 != v3)
    {
        v12 = a25;
        a25->field_0->field_10();
    }
    else
    {
        v13 = a12;
        if (a12 != v3)
            a12->field_0->field_10();
        v14 = a26;
        if (a26 != v3)
            a26->field_0->field_10();
        v15 = a27;
        if (a27 == v3)
            return v4 & 4294967295;
        a27->field_0->field_10();
    }
}
