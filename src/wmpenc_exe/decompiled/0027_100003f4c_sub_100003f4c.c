/* sub_100003f4c @ 0x100003f4c
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100003f4c  (84 bytes, 11 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): b8b174ae012a8a25a9d706f7f169e7a2553ab8ffe0ccef2beb34fe803ec0634a
 *   Evidence: analysis/report/rea-evidence/wmpenc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
    char padding_18[16];
    struct struct_4 *field_28;
    struct struct_5 *field_30;
    struct struct_6 *field_38;
    struct struct_7 *field_40;
} struct_2;

typedef struct struct_8 {
    char padding_0[16];
    struct struct_9 *field_10;
    char padding_18[16];
    struct struct_10 *field_28;
    struct struct_11 *field_30;
    struct struct_12 *field_38;
    struct struct_13 *field_40;
} struct_8;

typedef struct struct_1 {
    uint128_t field_0;
} struct_1;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

typedef struct struct_12 {
    unsigned long long field_0;
} struct_12;

typedef struct struct_13 {
    unsigned long long field_0;
} struct_13;

void sub_100003f4c(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, struct_2 **ptr)
{
    int v2;  // eax
    struct_0 *idx;  // rbx
    struct_8 *v4;  // rax
    unsigned int v5;  // r13d
    struct_2 **v7;  // rcx
    int v1;  // [bp+0x38]

    if (v2 >= 0 && idx->field_0)
    {
        v1 = (int)idx->field_8->field_0;
        v4 = *(ptr);
        if (vvar_15{r56|4b})
        {
            if (idx->field_0 == v5)
                v4->field_28();
            v4->field_38();
        }
        else
        {
            if (idx->field_0 == v5)
                v4->field_30();
            v4->field_40();
        }
    }
    v7 = ptr;
    if (!ptr)
        goto LABEL_0x100003fc4;
    *(ptr)->field_10();
}
