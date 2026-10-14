/* sub_1000cc568 @ 0x1000cc568
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000cc568  (897 bytes, 60 basic blocks)
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
    struct struct_1 *field_0;
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[10988];
    struct struct_2 *field_2b08;
    char padding_2b10[944];
    unsigned int field_2ec0;
    char field_2ec4;
    char padding_2ec5[7];
    unsigned int field_2ecc;
} struct_0;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_2 {
    char field_0;
    char field_1;
    char field_2;
    char field_3;
    char field_4;
} struct_2;

extern char g_100000000;
extern char g_100002848;

unsigned int sub_1000cc568(struct_0 *ptr, unsigned int a1, unsigned long a2)
{
    char v1;  // dil
    unsigned int v2;  // ebx
    int v6;  // r8d
    unsigned int v7;  // ecx
    int v8;  // r8d
    char p[5];  // rsi
    char v10;  // 4118
    char v11;  // dil
    int v13;  // r8d
    unsigned int v14;  // r10d
    unsigned int v15;  // r10d
    unsigned int v16;  // ecx
    unsigned int v17;  // r10d
    char v18;  // 4118
    char v19;  // dil
    char v21;  // r8b
    char v3[5];  // r14
    unsigned long ptr5;  // r8
    char v23;  // dl
    char v24;  // dil
    unsigned int v25;  // ebx
    char v26;  // dil
    char addr[5];  // rsi
    unsigned long v29;  // r11
    unsigned long v30;  // rcx
    unsigned long v31;  // r10
    long long iter;  // rbp
    long long cur;  // r12
    long long v5;  // r13

    v1 = ptr->field_2ec4;
    v2 = ptr->field_2ec0;
    p = ptr->field_2b08;
    v3 = *((long long *)&ptr->padding_2b10[0]);
    iter = a1;
    cur = iter;
    v5 = iter + a2;
    if (iter < v5)
    {
        do
        {
            if (v2 >> 22 < 0x400)
            {
                v6 = *((short *)&ptr->padding_1c[2 * (v2 >> 22)]);
            }
            else
            {
                ptr->field_2ecc = 1;
                v6 = 0;
            }
            if (v6 < 0)
            {
                v7 = 0x200000;
                do
                {
                    v8 = -(v6);
                    if ((v7 & v2))
                    {
                        if (v8 * 2 + 1 < 2688)
                        {
                            v6 = *((short *)&ptr->padding_1c[3622 + 4 * v8]);
                            continue;
                        }
                    }
                    else
                    {
                        if (v8 < 1344)
                        {
                            v6 = *((short *)&ptr->padding_1c[3620 + 4 * v8]);
                            continue;
                        }
                    }
                    ptr->field_2ecc = 1;
                    v6 = 0;
                } while ((v7 >>= 1, v6 < 0));
            }
            if (!ptr->field_2ecc)
            {
                if (p < v3)
                {
                    v10 = ptr->padding_1c[0xa00 + v6];
                    v11 = v1 - v10;
                    v2 <<= v10 & 31;
                    v1 = v11;
                    if (v1 - v10 <= 0)
                    {
                        v2 |= (p[1] * 0x100 | p[0]) << ((char)-(v11) & 31);
                        v1 = v11 + 16;
                        p = &p[2];
                    }
                }
                else
                {
                    return 4294967295;
                }
            }
            v13 = v6 - 0x100;
            if (v6 - 0x100 < 0)
            {
                ptr->field_0[cur].field_0 = v13;
                iter += 1;
                cur += 1;
                ptr->field_0[iter + ptr->field_8].field_0 = v13;
                continue;
            }
            v14 = v13 & 7;
            if (v14 == 7)
            {
                if (v2 >> 24 < 0x100)
                {
                    v15 = *((short *)&ptr->padding_1c[0x800 + 2 * (v2 >> 24)]);
                }
                else
                {
                    ptr->field_2ecc = 1;
                    v15 = 0;
                }
                if (v15 < 0)
                {
                    v16 = 0x800000;
                    do
                    {
                        v17 = -(v15);
                        if ((v16 & v2))
                        {
                            if (v17 * 2 + 1 < 996)
                            {
                                v15 = *((short *)&ptr->padding_1c[8998 + 4 * v17]);
                                continue;
                            }
                        }
                        else
                        {
                            if (v17 < 498)
                            {
                                v15 = *((short *)&ptr->padding_1c[8996 + 4 * v17]);
                                continue;
                            }
                        }
                        ptr->field_2ecc = 1;
                        v15 = 0;
                    } while ((v16 >>= 1, v15 < 0));
                }
                if (!ptr->field_2ecc)
                {
                    if (p < v3)
                    {
                        v18 = ptr->padding_1c[3232 + v15];
                        v19 = v1 - v18;
                        v2 <<= v18 & 31;
                        v1 = v19;
                        if (v1 - v18 <= 0)
                        {
                            v2 |= (p[1] * 0x100 | p[0]) << ((char)-(v19) & 31);
                            v1 = v19 + 16;
                            p = &p[2];
                        }
                    }
                    else
                    {
                        return 4294967295;
                    }
                }
                v14 = v15 + 7;
                if (ptr->field_2ecc)
                    return 4294967295;
            }
            v21 = v13 >> 3;
            if (v21 > 2)
            {
                if (v21 <= 3)
                {
                    v29 = 1;
                }
                else if (v21 < 51)
                {
                    ptr5 = v21;
                    v23 = (&g_100002848)[ptr5];
                    v24 = v1 - v23;
                    v25 = v2 << (v23 & 31);
                    v1 = v24;
                    if (v1 - v23 <= 0)
                    {
                        v26 = v24 + 16;
                        addr = &p[2];
                        v25 |= (p[1] * 0x100 | p[0]) << ((char)-(v24) & 31);
                        p = addr;
                        v1 = v26;
                        if (v24 + 16 <= 0)
                        {
                            v25 |= (addr[1] * 0x100 | addr[0]) << ((char)-(v26) & 31);
                            v1 = v26 + 16;
                            p = &addr[2];
                        }
                    }
                    v29 = (v2 >> ((char)(32 - v23) & 31)) + *((int *)&(&g_100000000)[10368 + 4 * ptr5]);
                    v2 = v25;
                }
                else
                {
                    return 4294967295;
                }
                ptr->field_18 = ptr->field_14;
                ptr->field_14 = ptr->field_10;
            }
            else
            {
                v30 = v21;
                v29 = (&ptr->field_10)[v30];
                if (!v21)
                    goto LABEL_1000cc85f;
                (&ptr->field_10)[v30] = ptr->field_10;
            }
            ptr->field_10 = v29;
LABEL_1000cc85f:
            v31 = v14 + 2;
            do
            {
                ptr->field_0[cur].field_0 = ptr->field_0[(iter & 4294967295) - v29 & ptr->field_c].field_0;
                if (cur < 257)
                    ptr->field_0[iter + ptr->field_8].field_0 = ptr->field_0[cur].field_0;
            } while ((v31 = (unsigned long)(v31 - 1), iter = (long long)(iter + 1), cur = (long long)(cur + 1), (unsigned int)v31 > 0));
        } while (cur < v5);
    }
    ptr->field_2ec4 = v1;
    ptr->field_2ec0 = v2;
    ptr->field_2b08 = p;
    return iter;
}
