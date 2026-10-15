/* sub_100010d94 @ 0x100010d94
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100010d94  (361 bytes, 25 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f8f45cd381f60a41cca4834188157d25906911108d7280cb2540d2245327a9d
 *   Evidence: analysis/report/rea-evidence/wmpsideshowgadget_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_15 {
    char padding_0[192];
    struct struct_16 *field_c0;
    struct struct_17 *field_c8;
    struct struct_18 *field_d0;
    struct struct_19 *field_d8;
    struct struct_20 *field_e0;
    struct struct_21 *field_e8;
    char padding_f0[32];
    unsigned int field_110;
    unsigned int field_114;
    unsigned int field_118;
    unsigned int field_11c;
    char padding_120[40];
    unsigned long long field_148;
} struct_15;

typedef struct struct_10 {
    char padding_0[16];
    struct struct_11 *field_10;
    char padding_18[32];
    struct struct_12 *field_38;
} struct_10;

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
    char padding_18[136];
    struct struct_5 *field_a0;
} struct_3;

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[8];
    struct struct_2 *field_10;
} struct_0;

typedef struct struct_13 {
    char padding_0[16];
    struct struct_14 *field_10;
} struct_13;

typedef struct struct_8 {
    char padding_0[16];
    struct struct_9 *field_10;
} struct_8;

typedef struct struct_6 {
    char padding_0[16];
    struct struct_7 *field_10;
} struct_6;

typedef struct struct_16 {
    struct struct_0 *field_0;
} struct_16;

typedef struct struct_17 {
    struct struct_3 *field_0;
} struct_17;

typedef struct struct_18 {
    struct struct_6 *field_0;
} struct_18;

typedef struct struct_19 {
    struct struct_8 *field_0;
} struct_19;

typedef struct struct_20 {
    struct struct_10 *field_0;
} struct_20;

typedef struct struct_21 {
    struct struct_13 *field_0;
} struct_21;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

typedef struct struct_12 {
    unsigned long long field_0;
} struct_12;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_14 {
    unsigned long long field_0;
} struct_14;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

extern unsigned long long g_100002858;

unsigned long long sub_100010d94(struct_15 *ptr)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    struct_0 **v11;  // rcx
    char *v12;  // r8
    unsigned long long v13;  // rdx
    struct_10 **v14;  // rcx
    struct_13 **v15;  // rcx
    struct_3 **v16;  // rcx
    struct_0 **v17;  // rcx
    struct_8 **v18;  // rcx
    struct_6 **v19;  // rcx
    unsigned long long v20;  // rcx
    struct_10 **v3;  // rcx
    unsigned long long flag;  // r9
    unsigned long long choice;  // r8
    unsigned long long flag2;  // rdx
    unsigned long v7;  // r8
    struct_15 *v8;  // rdx
    struct_3 **v9;  // rcx
    unsigned long v10;  // rdx
    unsigned long flag3;  // [bp+0x8]

    v1 = ptr->field_118;
    if (((char)v1 & 64))
        return v1;
    v2 = (unsigned int)v1 | 64;
    ptr->field_118 = v2;
    v3 = ptr->field_e0;
    if (ptr->field_e0)
    {
        flag = 0;
        choice = 0;
        flag2 = 1;
        ptr->field_e0->field_0->field_38();
    }
    v7 = ptr->field_114;
    if (ptr->field_114 != 3452816845)
    {
        v8 = &ptr->padding_f0[16];
        v2 = sub_100010cf0(ptr->field_c0, v8);
        ptr->field_114 = 3452816845;
    }
    v9 = ptr->field_c8;
    if (ptr->field_c8)
    {
        v10 = ptr->field_11c;
        ptr->field_c8->field_0->field_a0();
    }
    v11 = ptr->field_c0;
    if (ptr->field_c0)
    {
        flag3 = 0;
        v12 = &flag3;
        v13 = &g_100002858;
        ptr->field_c0->field_0->field_0();
    }
    v14 = ptr->field_e0;
    if (v14)
    {
        ptr->field_e0 = NULL;
        *(v14)->field_10();
    }
    ptr->field_110 = 0;
    v15 = ptr->field_e8;
    if (v15)
    {
        ptr->field_e8 = NULL;
        *(v15)->field_10();
    }
    v16 = ptr->field_c8;
    if (v16)
    {
        ptr->field_c8 = NULL;
        *(v16)->field_10();
    }
    v17 = ptr->field_c0;
    if (v17)
    {
        ptr->field_c0 = NULL;
        *(v17)->field_10();
    }
    v18 = ptr->field_d8;
    if (v18)
    {
        ptr->field_d8 = NULL;
        *(v18)->field_10();
    }
    v19 = ptr->field_d0;
    if (v19)
    {
        ptr->field_d0 = NULL;
        *(v19)->field_10();
    }
    v20 = ptr->field_148;
    ptr->field_118 = ptr->field_118 & 4294967204;
    if (!v20)
        return v2;
    4296016768();
}
