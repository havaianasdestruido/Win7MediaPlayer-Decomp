/* sub_7ff33cb2d84 @ 0x7ff33cb2d84
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb2d84  (524 bytes, 35 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 5b1cf8de17dc039349e1af0bc0d728e3de3c0a96d9c50e81fc909b8ceb4927e0
 *   Evidence: analysis/report/rea-evidence/mpvis_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    int field_c;
    char padding_10[4];
    unsigned int field_14;
    char padding_18[120];
    unsigned int field_90;
    char padding_94[4];
    unsigned int field_98;
} struct_0;

int sub_7ff33cb2d84(void)
{
    struct_0 *ptr;  // rcx
    unsigned int flag2;  // ecx
    int v9;  // r8d
    unsigned int *p;  // rdx, Other Possible Types: unsigned long
    int v11;  // edx
    unsigned int v12;  // eax
    unsigned int *addr;  // r8, Other Possible Types: unsigned long
    unsigned int v14;  // eax
    unsigned int v15;  // eax
    int v16;  // ecx
    char v3;  // r13b
    int v17;  // eax
    unsigned int choice;  // ecx
    unsigned int flag;  // ecx
    unsigned int v6;  // ecx
    unsigned int v0;  // [bp+0x8]

    flag2 = ptr->field_90;
    v3 = 1;
    if (flag2)
    {
        choice = flag2 - 1;
        if (flag2 != 1)
        {
            flag = choice - 1;
            if (choice == 1)
            {
                v0 = ptr->field_14;
                8792667067068();
            }
            else if (flag == 1)
            {
                8792667067104();
            }
            else if (flag == 2)
            {
                v6 = ptr->field_98;
                if (v6)
                {
                    if ((*(p) / v6 & 1 ^ *(p) / v6 >> 31) != *(p) / v6 >> 31)
                    {
                        return;
                    }
                    else if ((*(addr) / v6 & 1 ^ *(addr) / v6 >> 31) != *(addr) / v6 >> 31)
                    {
                        return;
                    }
                }
            }
            else
            {
                return;
            }
        }
        else
        {
            v9 = ptr->field_c;
            v11 = *(p);
            v12 = ptr->field_8;
            if (*(addr) * ptr->field_8 >= v11 * v9)
            {
                if (*(addr) * v12 < v9 * (v12 - v11))
                {
                    v15 = *((int *)&ptr[3].padding_18[92]) - v11;
                }
                else
                {
                    *(addr) = v9 - *(addr);
                    if (*(p) <= *((int *)&ptr[3].padding_18[92]))
                        return;
                    v14 = *((int *)&ptr[3].padding_18[92]) * 2 - *(p);
                    *(p) = v14;
                    return;
                }
LABEL_7ff33cb3035:
                *(p) = v15;
                v16 = *(addr);
                v17 = *((int *)&ptr[3].padding_18[96]);
                if (v16 >= v17)
                {
                    *(addr) = v16 - v17;
                    return;
                }
                *(addr) = v17 - v16;
                return;
            }
            else if (*(addr) * v12 >= v9 * (v12 - v11))
            {
                v15 = *((int *)&ptr[3].padding_18[92]) - v11 + ptr->field_8;
                goto LABEL_7ff33cb3035;
            }
            else if (v11 >= *((int *)&ptr[3].padding_18[92]))
            {
                *(p) = *((int *)&ptr[3].padding_18[92]) * 2 - v11;
                return;
            }
        }
        sub_7ff33cb30f4(ptr);
        return;
    }
    else
    {
        if (*((int *)p) > *((int *)&ptr[3].padding_18[92]))
        {
            v3 = 0;
            *((unsigned int *)p) = ptr->field_8 - *((int *)p);
        }
        if (*((int *)addr) > *((int *)&ptr[3].padding_18[96]))
        {
            v3 = 0;
            *((int *)addr) = ptr->field_c - *((int *)addr);
        }
        if (!v3)
            return;
        sub_7ff33cb30f4(ptr);
        return;
    }
}
