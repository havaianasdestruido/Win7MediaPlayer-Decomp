/* sub_7ff33cb21c0 @ 0x7ff33cb21c0
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb21c0  (595 bytes, 27 basic blocks)
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
    unsigned int field_c;
    char padding_10[80];
    unsigned int field_60;
    unsigned int field_64;
    char field_68;
    char padding_69[7];
    unsigned long long field_70;
    unsigned long long field_78;
    unsigned int field_80;
    int field_84;
} struct_0;

int sub_7ff33cb21c0(void)
{
    struct_0 *p;  // rcx
    unsigned long v2;  // rcx
    int v10;  // xmm0
    unsigned int *ptr;  // rdx
    unsigned long v12;  // xmm0lq
    int v14;  // xmm0
    unsigned long long v15;  // xmm0lq
    int v17;  // xmm0
    unsigned long v3;  // rcx
    uint128_t v18;  // xmm1
    unsigned long v19;  // xmm0lq
    int v21;  // xmm0
    uint128_t v22;  // xmm1
    unsigned int *addr;  // r8
    unsigned long long v24;  // xmm0lq
    unsigned long v4;  // rcx
    int v26;  // xmm0
    unsigned long long v27;  // xmm0lq
    int v29;  // xmm0
    unsigned long v30;  // xmm0lq
    int v32;  // xmm0
    unsigned int flag2;  // ecx
    unsigned long v33;  // xmm0lq
    int v35;  // xmm0
    unsigned int choice;  // ecx
    unsigned int flag;  // ecx
    unsigned long long v8;  // xmm0lq

    if (p->field_68)
    {
        v2 = p->field_80;
        if ((unsigned int)v2)
        {
            v3 = v2 - 1;
            if ((unsigned int)v2 != 1)
            {
                v4 = v3 - 1;
                if ((unsigned int)v3 != 1)
                {
                    flag2 = v4 - 1;
                    if ((unsigned int)v4 != 1)
                    {
                        choice = flag2 - 1;
                        if (flag2 == 1)
                        {
                            v19 = *(ptr);
                            v21 = (int)_INSERT(_INSERT(v19, 0, (int)v19), 8, (int)(v19 >> 32));
                            *(ptr) = *((unsigned long long *)&MulV(AddV(p->field_70, 0x3ff0000000000000), v21));
LABEL_7ff33cb22e1:
                            v22 = AddV(p->field_78, 0x3ff0000000000000);
                            goto LABEL_7ff33cb235b;
                        }
                        flag = choice - 1;
                        if (choice == 1)
                        {
                            v15 = p->field_8 - *(ptr) - 1 & 4294967295;
                            v17 = (int)_INSERT(_INSERT(v15, 0, (int)v15), 8, (int)(v15 >> 32));
                            *(ptr) = *(ptr) - (unsigned int)*((unsigned long long *)&SubV(MulV(AddV(p->field_70, 0x3ff0000000000000), v17), v17));
LABEL_7ff33cb227f:
                            v18 = AddV(p->field_78, 0x3ff0000000000000);
                            goto LABEL_7ff33cb22f9;
                        }
                        if (flag == 1)
                        {
                            v12 = *(ptr);
                            v14 = (int)_INSERT(_INSERT(v12, 0, (int)v12), 8, (int)(v12 >> 32));
                            *(ptr) = *((unsigned long long *)&MulV(AddV(p->field_70, 0x3ff0000000000000), v14));
                            goto LABEL_7ff33cb227f;
                        }
                        if (flag - 1 != 1)
                            goto LABEL_7ff33cb239d;
                        v8 = p->field_8 - *(ptr) - 1 & 4294967295;
                        v10 = (int)_INSERT(_INSERT(v8, 0, (int)v8), 8, (int)(v8 >> 32));
                        *(ptr) = *(ptr) - (unsigned int)*((unsigned long long *)&SubV(MulV(AddV(p->field_70, 0x3ff0000000000000), v10), v10));
                        goto LABEL_7ff33cb22e1;
                    }
                    else
                    {
                        v18 = AddV(p->field_78, 0x3ff0000000000000);
LABEL_7ff33cb22f9:
                        v24 = p->field_c - *(addr) - 1 & 4294967295;
                        v26 = (int)_INSERT(_INSERT(v24, 0, (int)v24), 8, (int)(v24 >> 32));
                        *(addr) = *(addr) - (unsigned int)*((unsigned long long *)&SubV(MulV(v18, v26), v26));
                    }
                }
                else
                {
                    v27 = p->field_8 - *(ptr) - 1 & 4294967295;
                    v29 = (int)_INSERT(_INSERT(v27, 0, (int)v27), 8, (int)(v27 >> 32));
                    *(ptr) = *(ptr) - (unsigned int)*((unsigned long long *)&SubV(MulV(AddV(p->field_70, 0x3ff0000000000000), v29), v29));
                }
            }
            else
            {
                v22 = AddV(p->field_78, 0x3ff0000000000000);
LABEL_7ff33cb235b:
                v30 = *(addr);
                v32 = (int)_INSERT(_INSERT(v30, 0, (int)v30), 8, (int)(v30 >> 32));
                *(addr) = *((unsigned long long *)&MulV(v22, v32));
            }
        }
        else
        {
            v33 = *(ptr);
            v35 = (int)_INSERT(_INSERT(v33, 0, (int)v33), 8, (int)(v33 >> 32));
            *(ptr) = *((unsigned long long *)&MulV(AddV(p->field_70, 0x3ff0000000000000), v35));
        }
    }
    else
    {
        *(ptr) = *(ptr) + p->field_60;
        *(addr) = *(addr) + p->field_64;
    }
LABEL_7ff33cb239d:
    if (p->field_84 <= 0)
    {
        return;
    }
    else if (p->field_84 == 1)
    {
        8792667067140();
    }
    else
    {
        8792667067140();
    }
}
