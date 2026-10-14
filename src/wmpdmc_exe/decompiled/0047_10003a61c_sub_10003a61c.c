/* sub_10003a61c @ 0x10003a61c
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10003a61c  (749 bytes, 65 basic blocks)
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

typedef struct struct_5 {
    struct struct_0 *field_0;
    char padding_8[202];
    char field_d2;
    char padding_d3[5];
    unsigned long long field_d8;
    char padding_e0[360];
    unsigned long long field_248;
    char padding_250[8];
    struct struct_6 *field_258;
    char padding_260[172];
    char field_30c;
    char padding_30d[27];
    unsigned int field_328;
    char padding_32c[32];
    unsigned int field_34c;
    unsigned int field_350;
} struct_5;

typedef struct struct_9 {
    struct struct_10 *field_0;
    char field_8;
    char padding_9[3];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    char padding_18[8];
    unsigned short field_20;
    char padding_22[6];
    char field_28;
} struct_9;

typedef struct struct_11 {
    char padding_0[248];
    struct struct_12 *field_f8;
} struct_11;

typedef struct struct_0 {
    char padding_0[232];
    struct struct_1 *field_e8;
    char padding_f0[80];
    struct struct_2 *field_140;
} struct_0;

typedef struct struct_6 {
    struct struct_3 *field_0;
} struct_6;

typedef struct struct_10 {
    struct struct_7 *field_0;
} struct_10;

typedef struct struct_12 {
    unsigned long long field_0;
} struct_12;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    char padding_0[248];
    struct struct_4 *field_f8;
} struct_3;

typedef struct struct_7 {
    char padding_0[256];
    struct struct_8 *field_100;
} struct_7;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

int sub_10003a61c(void)
{
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rdi
    struct_11 **v20;  // rcx
    struct_11 **v21;  // rcx
    unsigned long v22;  // rcx
    struct_9 *v23;  // rdx
    struct_5 *addr;  // rcx
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rbx
    struct_5 *v27;  // rdi
    unsigned int v28;  // eax
    unsigned long long flag3;  // rsi
    unsigned long long v12;  // r12
    unsigned long v30;  // rdx
    unsigned long long flag2;  // r8
    struct_5 *ptr;  // rcx
    struct_5 *v14;  // rdi
    struct_9 *p;  // rdx
    unsigned long long choice;  // rsi
    unsigned short v17;  // r12w
    struct_11 **v18;  // rcx
    struct_11 **v19;  // rcx
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v4;  // [bp-0x8]
    unsigned short v6;  // [bp+0x10]
    unsigned short flag;  // [bp+0x12]
    unsigned long v8;  // [bp+0x18]

    v8 = vvar_74{r56|8b};
    v3 = v10;
    v1 = v11;
    v0 = v12;
    v14 = ptr;
    if (p->field_10)
    {
        choice = 1;
        if (p->field_10 == 1)
        {
            v17 = p->field_20;
            if (!p->field_14)
            {
                if (v17 != 13 && v17 != 32)
                {
                    if (v17 == 34)
                    {
                        v18 = ptr->field_258;
                        ptr->field_258->field_0->field_f8();
                    }
                    if (v17 == 33)
                    {
                        v19 = ptr->field_258;
                        ptr->field_258->field_0->field_f8();
                    }
                    if (v17 == 36)
                    {
                        v20 = ptr->field_258;
                        ptr->field_258->field_0->field_f8();
                    }
                    if (v17 == 35)
                    {
                        v21 = ptr->field_258;
                        ptr->field_258->field_0->field_f8();
                    }
                    if (v17 == 38)
                    {
                        sub_10003ada0();
                        sub_10003acb4(ptr, 1);
                        goto LABEL_10003a7fe;
                    }
                    if (v17 == 40)
                    {
                        sub_10003ada0();
                        sub_10003acb4(ptr, 1);
                        goto LABEL_10003a7fe;
                    }
                    else
                    {
                        if (v17 == 46)
                        {
                            sub_10003ada0();
                            sub_10003acb4(ptr, 1);
LABEL_10003a7fe:
                            sub_100039d4c(ptr);
                            sub_10003ada0(ptr, 0);
                            p->field_8 = 1;
                        }
                        else
                        {
                            if (v17 == 112)
                                sub_100043bb4(L"mshelp://windows/?id=079a4d8b-e19d-4d7f-bef1-116cb711364c"); /* do not return */
                        }
                    }
                }
                else
                {
                    if (p->field_0 == ptr->field_248)
                        sub_100035718(); /* do not return */
                }
            }
            else
            {
                if (p->field_14 == 1)
                {
                    v22 = p->field_0;
                    p->field_0->field_0->field_100();
                }
            }
        }
    }
    else if (p->field_14 == 2)
    {
        if (p->field_28 == 1 && ptr->field_30c)
        {
            ptr->field_328 = 0;
            ptr->field_30c = 0;
            ptr->field_34c = 4294967295;
            ptr->field_350 = 4294967295;
        }
        4297065288();
    }
    else if (p->field_14 == 3 && p->field_28 == 1 && !ptr->field_30c)
    {
        4297066536();
    }
    v23 = p;
    addr = ptr;
    v25 = v3;
    v4 = v26;
    v2 = v3;
    v0 = v1;
    v27 = addr;
    if (p->field_10 == 1 && p->field_c == 1)
    {
        v28 = p->field_14;
        if (v28 != 5)
        {
            if (v28 != 3)
                goto LABEL_10006bb1d;
            if (v28 != 5)
            {
                if (v28 != 3)
                {
                    sub_10005b868(addr, p);
                    return;
                }
                else if (p->field_20 != 18)
                {
                    sub_10005b868(addr, p);
                    return;
                }
                else if ((addr->field_d2 & 2))
                {
                    addr->field_0->field_140();
                }
                else
                {
                    sub_10005b868(addr, p);
                    return;
                }
            }
        }
        if (p->field_20 <= 32)
        {
            sub_10005b868(addr, p);
            return;
        }
        v6 = p->field_20;
        flag = 0;
        4297066352();
    }
    else
    {
LABEL_10006bb1d:
        flag3 = 0;
        if (p->field_10 == 1 && p->field_c == 2 && !p->field_14)
            4297066360();
        if (p->field_10)
        {
            sub_10005b868(addr, p);
            return;
        }
        else if (p->field_14 == 1)
        {
            v30 = addr->field_d8;
            flag2 = 0;
            addr->field_0->field_e8();
        }
        else
        {
            sub_10005b868(addr, p);
            return;
        }
    }
}
