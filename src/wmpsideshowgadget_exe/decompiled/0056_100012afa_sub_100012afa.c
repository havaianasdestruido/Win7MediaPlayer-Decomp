/* sub_100012afa @ 0x100012afa
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100012afa  (165 bytes, 13 basic blocks)
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

typedef struct struct_3 {
    struct struct_0 *field_0;
    char padding_8[24];
    unsigned long long field_20;
} struct_3;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
    char padding_18[32];
    struct struct_2 *field_38;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern char g_1000027e8;
extern struct_0 g_100002fa0;

int sub_100012afa(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, struct_3 *ptr)
{
    struct_3 *p;  // rdi
    struct_3 *v9;  // r14
    unsigned int v18;  // eax
    unsigned long long flag;  // rdx
    struct_3 *v20;  // rcx
    unsigned int v10;  // esi
    unsigned long v11;  // r9
    unsigned long v12;  // r8
    unsigned long long v13;  // rsi
    char v14;  // r13b
    unsigned long v15;  // rdx
    struct_3 *v16;  // rcx
    unsigned long v17;  // r12
    long long v1;  // [bp+0x20]
    char v2;  // [bp+0x100008]
    unsigned long v3;  // [bp+0x100010]
    long long v4;  // [bp+0x100018]
    unsigned long v5;  // [bp+0x100020]
    unsigned long v6;  // [bp+0x100028]
    char v7;  // [bp+0x100030]

    if (p != v9)
        v10 = (unsigned int)v9;
    if (v10 < (unsigned int)v9)
        goto LABEL_0x100012ba6;
    if ((v7 & 2))
    {
        ptr = vvar_42{r56|8b};
        (*((long long *)(*((long long *)&v2) + 8)))();
    }
    v11 = v3;
    v12 = v5;
    *((unsigned int *)&v1) = (unsigned int)v9;
    v13 = sub_100012c20(p, v4, v5, v3, v1) & 4294967295;
    if ((v14 & 1) && ptr != v9)
    {
        v15 = ptr->field_0;
        v16 = ptr;
        ptr->field_0->field_10();
    }
    if ((unsigned int)v13 < (unsigned int)v9)
    {
        if (p == v9)
            goto LABEL_0x100012ba6;
        flag = 1;
        v20 = p;
        p->field_0->field_38();
    }
    v11 = v17;
    p->field_20 = v6;
    v18 = sub_100004b68(p, &g_100002fa0.field_0, &g_1000027e8, v11);
    if (v18 >= (unsigned int)v9)
        goto LABEL_0x100012ba6;
    v13 = v18;
    v12 = &g_1000027e8;
    if (p == v9)
        goto LABEL_0x100012ba6;
    flag = 1;
    v20 = p;
    p->field_0->field_38();
}
