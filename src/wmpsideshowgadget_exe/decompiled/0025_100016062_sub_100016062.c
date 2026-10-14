/* sub_100016062 @ 0x100016062
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100016062  (171 bytes, 20 basic blocks)
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

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_5 {
    char padding_0[40];
    long long field_28;
    char padding_30[8];
    unsigned int field_38;
} struct_5;

typedef struct struct_4 {
    struct struct_2 *field_0;
} struct_4;

typedef struct struct_10 {
    char padding_0[8];
    struct struct_11 *field_8;
    struct struct_10 *field_10;
} struct_10;

typedef struct struct_6 {
    char padding_0[8];
    struct struct_7 *field_8;
} struct_6;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_11 {
    struct struct_8 *field_0;
} struct_11;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_8 {
    char padding_0[8];
    struct struct_9 *field_8;
} struct_8;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

void sub_100016062(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned int a7)
{
    int v2;  // eax
    struct_5 *v3;  // rdi
    long long v11;  // r8
    struct_6 **v12;  // rbx
    struct_6 **v13;  // rcx
    struct_5 *ptr;  // rsi
    struct_4 **v5;  // r8
    unsigned long v6;  // rdx
    struct_0 **v7;  // rcx
    long long p;  // r8
    unsigned long long index;  // rdx
    struct_10 *cur;  // rcx
    struct_0 **flag;  // [bp+0x50]

    if (v2 < 0)
        goto LABEL_0x100016112;
    flag = NULL;
    ptr = &v3->field_28;
    v5 = &flag;
    v6 = a7;
    if ((char)sub_100017374(ptr, a7, &flag))
    {
        v7 = flag;
        if (flag)
            *(flag)->field_10();
    }
    p = *((long long *)&ptr->padding_0[0]);
    index = a7 % *((int *)&ptr->padding_0[16]) & 4294967295;
    if (p)
    {
        for (cur = *((long long *)(p + index * 8)); cur && (*((int *)&cur[1].padding_0[0]) != a7 || *((int *)&cur->padding_0[0]) != a7); cur = cur->field_10);
        if (cur)
        {
            cur->field_8 = v12;
            v13 = v12;
            *(v12)->field_8();
        }
        else if (p)
        {
            *((struct_6 ***)(sub_100017914(ptr, a7, index & 4294967295, a7) + 8)) = v12;
            v13 = v12;
            *(v12)->field_8();
        }
    }
    v11 = _INSERT(p, 0, 1);
    if ((char)sub_10000b058(ptr, *((int *)&ptr->padding_0[16]), v11))
    {
        a3 = a7;
        p = index & 4294967295;
        index = a7;
        *((struct_6 ***)(sub_100017914(ptr, index, p, a3) + 8)) = v12;
        v13 = v12;
        *(v12)->field_8();
    }
    4295012220();
}
