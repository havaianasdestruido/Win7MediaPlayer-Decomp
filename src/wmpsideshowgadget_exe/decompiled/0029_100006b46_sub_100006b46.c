/* sub_100006b46 @ 0x100006b46
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100006b46  (184 bytes, 18 basic blocks)
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
    char padding_0[12];
    unsigned int field_c;
} struct_0;

typedef struct struct_3 {
    struct struct_1 *field_0;
    char padding_8[88];
    unsigned int field_60;
    char padding_64[12];
    long long field_70;
    long long field_78;
    unsigned long long field_80;
} struct_3;

typedef struct struct_4 {
    char padding_0[104];
    struct struct_5 *field_68;
} struct_4;

typedef struct struct_6 {
    char padding_0[104];
    struct struct_7 *field_68;
} struct_6;

typedef struct struct_1 {
    char padding_0[104];
    struct struct_2 *field_68;
} struct_1;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

void sub_100006b46(void)
{
    unsigned long long v2;  // r14
    unsigned long v3;  // rdx
    struct_6 **v12;  // rdi
    struct_6 **v13;  // rcx
    struct_0 *v4;  // rbx
    struct_3 *ptr;  // rdi
    unsigned int flag;  // ecx
    unsigned int choice;  // ecx
    unsigned long v8;  // rdx
    struct_3 *v9;  // rcx
    struct_4 **v10;  // rdi
    struct_4 **v11;  // rcx

    if (!v2)
        goto LABEL_0x100006d22;
    v3 = vvar_12{r56|8b};
    if (v4->field_c == 4294967294)
    {
        v13 = v12;
        *(v12)->field_68();
    }
    else if (v4->field_c != 4294967295)
    {
        sub_10000a140(&ptr[1].padding_8);
        flag = ptr->field_60;
        if (flag)
            choice = flag - 1;
        if (!ptr->field_70)
        {
            ptr->field_78 = 0;
            ptr->field_80 = 0;
            v8 = vvar_12{r56|8b};
            v9 = ptr;
            ptr->field_0->field_68();
        }
        sub_10000a3c0(ptr->field_70, ptr->field_78);
        4296017168();
    }
    else
    {
        v11 = v10;
        *(v10)->field_68();
    }
}
