/* sub_100007e37 @ 0x100007e37
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100007e37  (307 bytes, 20 basic blocks)
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

typedef struct struct_6 {
    struct struct_0 *field_0;
    char padding_8[88];
    struct struct_4 *field_60;
    char padding_68[8];
    struct struct_7 *field_70;
    unsigned long long field_78;
} struct_6;

typedef struct struct_16 {
    char padding_0[56];
    struct struct_17 *field_38;
} struct_16;

typedef struct struct_14 {
    char padding_0[88];
    struct struct_15 *field_58;
} struct_14;

typedef struct struct_12 {
    char padding_0[8];
    struct struct_13 *field_8;
} struct_12;

typedef struct struct_8 {
    char padding_0[16];
    struct struct_9 *field_10;
} struct_8;

typedef struct struct_10 {
    char padding_0[8];
    struct struct_11 *field_8;
} struct_10;

typedef struct struct_0 {
    char padding_0[104];
    struct struct_1 *field_68;
} struct_0;

typedef struct struct_4 {
    char padding_0[56];
    struct struct_5 *field_38;
} struct_4;

typedef struct struct_7 {
    long long field_0;
} struct_7;

typedef struct struct_17 {
    struct struct_18 *field_0;
} struct_17;

typedef struct struct_15 {
    unsigned long long field_0;
} struct_15;

typedef struct struct_13 {
    unsigned long long field_0;
} struct_13;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_5 {
    struct struct_2 *field_0;
} struct_5;

typedef struct struct_18 {
    char padding_0[88];
    struct struct_19 *field_58;
} struct_18;

typedef struct struct_2 {
    char padding_0[88];
    struct struct_3 *field_58;
} struct_2;

typedef struct struct_19 {
    unsigned long long field_0;
} struct_19;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

long long sub_100007e37(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, struct_12 **a7, unsigned int a8, unsigned long a9, unsigned long a10, struct_10 **a11, unsigned long a12, unsigned long a13, char a14, unsigned long a15, unsigned long a16, long long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21)
{
    struct_6 *ptr;  // rbx
    struct_16 *p;  // rax
    struct_8 **v12;  // r14
    struct_8 **v13;  // rcx
    struct_10 **v14;  // rcx
    struct_12 **v15;  // rcx
    struct_14 **v4;  // rcx
    unsigned long long flag;  // rsi
    unsigned long v6;  // rdx
    char *v7;  // rdx
    unsigned int v8;  // ebp
    long long v9;  // rdx
    struct_6 *v10;  // rcx
    unsigned long v11;  // r15
    long long v1;  // [bp+0x20]

    p = ptr->field_60;
    v4 = p->field_38;
    flag = 0;
    if (p->field_38)
    {
        v6 = &vvar_14;
        p->field_38->field_0->field_58();
    }
    a9 = 0;
    v7 = &a9;
    v8 = sub_10000bd7c(ptr->field_60, &a9);
    if (!ptr->field_78)
    {
        v13 = v12;
        if (!v8)
        {
            v14 = a11;
            a15 = a11;
            if (a11)
                *(a11)->field_8();
            v15 = a7;
            a9 = a7;
            if (!a7)
            {
                *((unsigned int *)&v1) = a8;
                sub_10000917c(ptr, &a9, &a15, a17, v1); /* do not return */
            }
            *(a7)->field_8();
        }
        else
        {
            if (v12)
                *(v12)->field_10();
        }
    }
    else if (!v8)
    {
        v9 = a17;
        v10 = ptr;
        ptr->field_0->field_68();
    }
    else
    {
        if (0 < ptr->field_78)
        {
            *((unsigned int *)&a5) = 0;
            *((unsigned int *)&a4) = 0;
            sub_100018314(a7, 0 + v11, 8, 102, ptr->field_70->field_0, a4, a5, &v12); /* do not return */
        }
        4295012220();
    }
}
