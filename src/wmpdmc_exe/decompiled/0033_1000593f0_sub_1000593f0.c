/* sub_1000593f0 @ 0x1000593f0
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000593f0  (590 bytes, 73 basic blocks)
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
    unsigned int field_0;
    char padding_4[4];
    void* field_8;
    char field_c;
    char padding_d[3];
    struct struct_1 *field_10;
    char field_14;
    char padding_15[3];
    unsigned int field_18;
    unsigned int field_1c;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

int sub_1000593f0(void)
{
    struct_0 *p;  // rdx
    struct_0 *ptr;  // rcx
    void* v11;  // rax
    unsigned int v12;  // r8d
    void* v14;  // rcx
    void* v15;  // r8
    unsigned int flag3;  // ecx
    unsigned long v17;  // rcx
    unsigned int flag6;  // ecx
    unsigned int flag4;  // ecx
    unsigned int flag;  // ecx
    unsigned int flag2;  // ecx
    void* v21;  // al
    unsigned short *cur;  // rax
    unsigned int v23;  // ecx
    unsigned int v24;  // edx
    unsigned long v4;  // rcx
    unsigned long v5;  // rcx
    unsigned int flag7;  // ecx
    unsigned int flag5;  // ecx
    unsigned int choice;  // ecx
    void* v9;  // rax
    void* v10;  // rax

    if (p == ptr)
        return;
    flag2 = ptr->field_0 & 63;
    if (flag2 != (p->field_0 & 63))
        return;
    if (flag2 <= 8)
    {
        if (flag2 == 8)
            4297066568();
        v4 = flag2 - 1;
        if (flag2 != 1)
        {
            v5 = v4 - 1;
            if ((unsigned int)v4 != 1)
            {
                flag7 = v5 - 1;
                if ((unsigned int)v5 == 1)
                    goto LABEL_100059530;
                flag5 = flag7 - 1;
                if (flag7 != 1)
                {
                    choice = flag5 - 1;
                    if (flag5 != 1)
                    {
                        if ((choice == 1 || choice == 2) && ((int)ptr->field_8 != (int)p->field_8 || *((int *)((char *)&ptr->field_8 + 4)) != *((int *)((char *)&p->field_8 + 4))))
                            goto LABEL_10005946f;
                        goto LABEL_100059639;
                    }
                    else
                    {
                        v9 = ptr->field_8;
                        if (!v9)
                            goto LABEL_1000594b2;
                        if (p->field_8)
                        {
                            v10 = v9;
                            do
                            {
                                v11 = v10;
                                v12 = *((short *)(v11 + p->field_8 - (char *)v9));
                            } while (*((short *)v11) == v12 && (v10 = v11 + 2, v12));
                        }
                        else
                        {
                            if (v9)
                                return;
                            goto LABEL_1000594b2;
                        }
                    }
                }
                else
                {
                    v14 = ptr->field_8;
                    if (v14)
                    {
                        v15 = p->field_8;
                        if (!v15 || ((*((int *)v14) ^ *((int *)v15)) & 268435455) || !((*((int *)v14) >> 28 & 1) ? (long long)v14[8] : v14 + 8))
                            return;
                        4295812266();
                        return;
                    }
LABEL_1000594b2:
                    if (p->field_8)
                        return;
                    goto LABEL_100059639;
                }
            }
        }
    }
    else
    {
        flag3 = flag2 - 9;
        if (flag2 != 9)
        {
            v17 = flag3 - 1;
            if (flag3 == 1)
            {
LABEL_100059530:
            }
            else
            {
                flag6 = v17 - 1;
                if ((unsigned int)v17 != 1)
                {
                    flag4 = flag6 - 1;
                    if (flag6 == 1 || (flag = flag4 - 1, flag4 == 1))
                        goto LABEL_100059530;
                    if (flag != 1)
                    {
                        if (flag - 1 == 1)
                            goto LABEL_100059530;
                        goto LABEL_100059639;
                    }
                }
                else if (ptr->field_8 != p->field_8 || *((long long *)&ptr->field_c) != *((long long *)&p->field_c))
                {
LABEL_10005946f:
                    goto LABEL_100059639;
                }
            }
        }
        else
        {
            v21 = (void*)(char)ptr->field_8;
            if ((char)ptr->field_8 == (char)p->field_8)
            {
                if (v21 < 3)
                {
LABEL_10005961d:
                    if (*((int *)&ptr->field_c) == *((int *)&p->field_c) && *((int *)&(&ptr->padding_d)[1]) == *((int *)&(&p->padding_d)[1]))
LABEL_10005962f:
                }
                else if (v21 > 4)
                {
                    if (v21 == 0x5 || v21 != 0x6)
                        goto LABEL_10005961d;
                    if ((int)ptr->field_10 == (int)p->field_10 && *((int *)((char *)&ptr->field_10 + 4)) == *((int *)((char *)&p->field_10 + 4)))
                    {
                        cur = *((long long *)&ptr->field_c);
                        do
                        {
                            v23 = *(cur);
                            v24 = *((short *)((char *)cur + *((long long *)&p->field_c) - *((long long *)&ptr->field_c)));
                        } while (v23 == v24 && (cur += 2, v24));
                        if (!v23 - v24)
                            goto LABEL_10005962f;
                    }
                }
                else
                {
                    if ((int)ptr->field_10 != (int)p->field_10)
                        goto LABEL_100059639;
                    goto LABEL_10005961d;
                }
            }
LABEL_100059639:
            return;
        }
    }
    return;
}
