/* sub_10008891c @ 0x10008891c
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10008891c  (937 bytes, 85 basic blocks)
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
    char padding_0[112];
    unsigned int field_70;
} struct_0;

typedef struct struct_3 {
    char padding_0[32];
    struct struct_4 *field_20;
} struct_3;

typedef struct struct_1 {
    char padding_0[152];
    struct struct_2 *field_98;
} struct_1;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int sub_10008891c(void)
{
    unsigned long long v9;  // rcx
    unsigned long long v10;  // r15
    unsigned long v19;  // rcx
    unsigned long long v20;  // r15
    int v21;  // r13d
    struct_3 *v22;  // rbp
    unsigned long v23;  // rcx
    unsigned long v24;  // rcx
    unsigned long v25;  // rcx
    unsigned long v26;  // rcx
    unsigned int flag2;  // ecx
    unsigned int choice;  // ecx
    unsigned int v11;  // r9d
    unsigned int flag;  // ecx
    long long j;  // rdi
    unsigned long v31;  // rax
    struct_0 *ptr;  // r8
    struct_0 *v13;  // rdx
    unsigned int v14;  // eax
    unsigned long long v15;  // rdi
    unsigned long long v16;  // rsi
    unsigned int v17;  // r12d
    int i;  // r14d
    unsigned int v0;  // [bp-0x78]
    unsigned int v1;  // [bp-0x68]
    unsigned int v2;  // [bp-0x64]
    unsigned long long v3;  // [bp-0x60]
    char v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    unsigned long long v6;  // [bp+0x8]
    unsigned int v7;  // [bp+0x20]
    unsigned int v8;  // [bp+0x30]

    v6 = v9;
    v10 = v9;
    if (((char)v11 & 1))
        return;
    if (ptr == v13)
        return;
    if (!ptr)
    {
        sub_10007c47c(&v4);
        v14 = v11;
        v15 = 0;
        v16 = 1;
        v1 = v14 & 2;
        if (!((char)v14 & 2))
        {
            v16 = 4294967295;
            v15 = 8;
        }
        v17 = v11;
        v7 = v17 & 4;
        if (!((char)v17 & 4))
            v16 *= 3;
        i = 0;
        v19 = (int)v16;
        v20 = v10;
        do
        {
            v21 = 0;
            v3 = v19 * 8;
            v22 = v20 + (int)v15 * 8 + 32;
            do
            {
                if (*((long long *)&v22->padding_0[0]))
                {
                    v0 = v8;
                    (*((long long *)(*((long long *)*((long long *)&v22->padding_0[0])) + 152)))();
                }
            } while ((v21 = (int)(v21 + 1), v22 += v3, v21 < 3));
            if (v5)
                return;
            v15 = (!v7 ? v15 + (-(0 < v1) & 2) - 1 : v15 + v16 + v16 * 2);
            i += 1;
            v19 = (int)v16;
            v20 = v6;
        } while (i < 3);
    }
    else
    {
        v23 = ptr->field_70;
        v1 = 4294967295;
        v2 = 4294967295;
        if ((unsigned int)v23)
        {
            v24 = v23 - 1;
            if ((unsigned int)v23 != 1)
            {
                v25 = v24 - 1;
                if ((unsigned int)v24 != 1)
                {
                    v26 = v25 - 1;
                    if ((unsigned int)v25 != 1)
                    {
                        flag2 = v26 - 1;
                        if ((unsigned int)v26 != 1)
                        {
                            choice = flag2 - 1;
                            if (flag2 != 1)
                            {
                                flag = choice - 1;
                                if (choice != 1)
                                {
                                    if (flag != 1)
                                    {
                                        if (flag - 1 != 1)
                                            goto LABEL_100088c7b;
                                        if (v11 == 8)
                                        {
                                            v1 = 7;
                                            goto LABEL_100088c65;
                                        }
                                        if (v11 != 12)
                                            goto LABEL_100088c7b;
                                        v1 = 5;
                                        goto LABEL_100088c73;
                                    }
                                    else
                                    {
                                        if (v11 == 8)
                                            goto LABEL_100088bde;
                                        if (v11 == 10)
                                            goto LABEL_100088b54;
                                        if (v11 == 12)
                                        {
                                            v1 = 4;
                                            v2 = 1;
                                        }
                                    }
                                }
                                else
                                {
                                    if (v11 == 10)
                                    {
                                        v1 = 7;
                                        goto LABEL_100088b34;
                                    }
                                    if (v11 != 12)
                                        goto LABEL_100088c7b;
                                    v1 = 3;
                                    goto LABEL_100088c1c;
                                }
                            }
                            else
                            {
                                if (v11 != 8)
                                {
                                    if (v11 == 12)
                                        goto LABEL_100088b5d;
                                    if (v11 == 14)
                                    {
LABEL_100088b54:
                                        v1 = 8;
                                    }
                                }
                                else
                                {
                                    v1 = 4;
                                    v2 = 3;
                                }
                            }
                        }
                        else
                        {
                            if (v11 != 8)
                            {
                                if (v11 != 10)
                                {
                                    if (v11 != 12)
                                    {
                                        if (v11 == 14)
                                            v1 = 7;
                                    }
                                    else
                                    {
                                        v1 = 1;
                                    }
                                }
                                else
                                {
                                    v1 = 5;
                                }
                            }
                            else
                            {
                                v1 = 3;
                            }
                        }
                    }
                    else
                    {
                        if (v11 != 10)
                        {
                            if (v11 == 12)
                                goto LABEL_100088c4c;
                            if (v11 == 14)
                            {
LABEL_100088bde:
                                v1 = 6;
                            }
                        }
                        else
                        {
                            v1 = 4;
                            v2 = 5;
                        }
                    }
                }
                else
                {
                    if (v11 != 8)
                    {
                        if (v11 == 14)
                        {
                            v1 = 5;
LABEL_100088b34:
                            v2 = 8;
                        }
                    }
                    else
                    {
                        v1 = 1;
LABEL_100088c1c:
                        v2 = 0;
                    }
                }
            }
            else
            {
                if (v11 != 8)
                {
                    if (v11 == 10)
                    {
LABEL_100088b5d:
                        v1 = 2;
                    }
                    else
                    {
                        if (v11 == 14)
                        {
                            v1 = 4;
                            v2 = 7;
                        }
                    }
                }
                else
                {
LABEL_100088c4c:
                    v1 = 0;
                }
            }
        }
        else if (v11 == 10)
        {
            v1 = 1;
LABEL_100088c73:
            v2 = 2;
        }
        else if (v11 == 14)
        {
            v1 = 3;
LABEL_100088c65:
            v2 = 6;
        }
LABEL_100088c7b:
        j = 0;
        do
        {
            if ((&v1)[j] == 4294967295)
                break;
            v31 = (&v1)[j];
            if (*((long long *)(v10 + v31 * 8 + 32)))
            {
                v0 = v8;
                (*((long long *)(*((long long *)*((long long *)(v10 + v31 * 8 + 32))) + 152)))();
            }
            j += 1;
        } while (j < 2);
    }
    return;
}
