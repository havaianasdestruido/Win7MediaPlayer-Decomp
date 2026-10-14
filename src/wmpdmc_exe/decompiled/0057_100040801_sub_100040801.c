/* sub_100040801 @ 0x100040801
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100040801  (771 bytes, 59 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3f6564d520c416147702a463a50724fd36c46c3a44a8447af89788586fc5efee
 *   Evidence: analysis/report/rea-evidence/wmpdmc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[228];
    unsigned int field_e4;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    struct struct_2 *field_10;
} struct_1;

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
} struct_3;

typedef struct struct_7 {
    struct struct_5 *field_0;
} struct_7;

typedef struct struct_8 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
} struct_8;

typedef struct struct_9 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_9;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    char padding_0[16];
    struct struct_6 *field_10;
} struct_5;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

extern long long g_100008e80;
extern struct_9 *g_1000dedd8;

int sub_100040801(void)
{
    unsigned long long v22;  // rax
    struct_0 *addr;  // rbx
    struct_3 **v33;  // rcx
    unsigned long long flag7;  // rdi
    struct_1 **v35;  // rcx
    unsigned long long flag9;  // rsi
    struct_7 **v24;  // rdx
    unsigned int v25;  // eax
    struct_1 **v26;  // rsi
    struct_3 **v27;  // rdi
    struct_8 *p;  // r13
    struct_9 **v29;  // r12
    char *v1;  // [bp+0x20]
    unsigned long flag11;  // [bp+0x40]
    unsigned long long v6;  // [bp+0x48]
    struct_3 **flag8;  // [bp+0x50], Other Possible Types: unsigned long long
    struct_1 **flag10;  // [bp+0x58], Other Possible Types: unsigned long long
    unsigned long long flag6;  // [bp+0x70]
    char choice;  // [bp+0x78]
    char flag;  // [bp+0x88]
    unsigned long long v15;  // [bp+0x90]
    unsigned long flag13;  // [bp+0x98]
    unsigned long long flag14;  // [bp+0xa0]
    unsigned long long flag15;  // [bp+0xa8]
    unsigned int flag3;  // [bp+0xb0]
    unsigned long flag5;  // [bp+0x108]
    unsigned int v21;  // [bp+0x118]

    v15 = v22;
    v21 = addr->field_e4;
    flag10 = NULL;
    flag8 = NULL;
    v24 = &flag8;
    v25 = sub_10004fedc(&flag10, &flag8);
    v26 = flag10;
    v27 = flag8;
    if (v25 >= 0)
    {
        if (v26 && v27)
            v25 = 0;
        else
            v25 = 2147549183;
    }
    flag13 = 0;
    flag14 = 0;
    flag15 = 0;
    flag3 = 0;
    if (v25 >= 0)
    {
        if (!p->field_8)
        {
            v25 = 2147942487;
            if (g_1000dedd8 != v29 && (g_1000dedd8->field_1c & 1) && g_1000dedd8->field_19 >= 5)
                sub_100020d8c(g_1000dedd8->field_10, 663, &g_100008e80, 2147942487); /* do not return */
        }
        else if (p->field_8)
        {
            flag11 = 0;
            if (!*((long long *)(0 + p->field_20)))
            {
                sub_100044740(&flag13, &flag11);
                4297067696();
            }
            4297067696();
        }
    }
    flag11 = 0;
    if (v25 >= 0)
    {
        v6 = p->field_10;
        if (p->field_10)
        {
            choice = 0;
            4297067712();
        }
        choice = 1;
        flag6 = 0;
        v6 = L"equals";
        flag = 0;
        4297067712();
    }
    else
    {
        if (v27)
            v25 = sub_1000504c0(v27);
        v33 = v27;
        if (v27)
        {
            flag7 = 0;
            flag8 = 0;
            *(v27)->field_10();
        }
        v35 = v26;
        if (v26)
        {
            flag9 = 0;
            flag10 = 0;
            *(v26)->field_10();
        }
        else if (v25 >= 0)
        {
            flag5 = 0;
            v1 = &flag5;
            4297067904();
        }
        else
        {
            4297066448();
        }
    }
}
