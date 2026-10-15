/* sub_10011acf4 @ 0x10011acf4
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x10011acf4  (897 bytes, 60 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 306467d280e99d0616e839278a4db5bed684f002ae284c3678cabb5251459cb3
 *   Evidence: analysis/report/rea-evidence/wmpnetwk_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
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
extern char g_100003098;

int sub_10011acf4(void)
{
    struct_0 *ptr;  // rcx
    char v2;  // dil
    unsigned int v7;  // ebx
    char p[5];  // rsi
    int v8;  // r8d
    unsigned int v9;  // ecx
    int v10;  // r8d
    char v11;  // 4118
    char v12;  // dil
    int v14;  // r8d
    unsigned int v15;  // r10d
    unsigned int v16;  // r10d
    unsigned int v17;  // ecx
    unsigned int v18;  // r10d
    char v19;  // 4118
    char v20;  // dil
    char v22;  // r8b
    unsigned long ptr5;  // r8
    char v24;  // dl
    char v25;  // dil
    unsigned int v26;  // ebx
    char v27;  // dil
    char addr[5];  // rsi
    char v3[5];  // r14
    unsigned long v30;  // r11
    unsigned long v31;  // rcx
    unsigned long v32;  // r10
    long long iter;  // rbp
    long long cur;  // r12
    unsigned int v4;  // edx
    unsigned long v5;  // r8
    long long v6;  // r13

    v2 = ptr->field_2ec4;
    v7 = ptr->field_2ec0;
    p = ptr->field_2b08;
    v3 = *((long long *)&ptr->padding_2b10[0]);
    iter = v4;
    cur = iter;
    v6 = iter + v5;
    if (iter < v6)
    {
        do
        {
            if (v7 >> 22 < 0x400)
            {
                v8 = *((short *)&ptr->padding_1c[2 * (v7 >> 22)]);
            }
            else
            {
                ptr->field_2ecc = 1;
                v8 = 0;
            }
            if (v8 < 0)
            {
                v9 = 0x200000;
                do
                {
                    v10 = -(v8);
                    if ((v9 & v7))
                    {
                        if (v10 * 2 + 1 < 2688)
                        {
                            v8 = *((short *)&ptr->padding_1c[3622 + 4 * v10]);
                            continue;
                        }
                    }
                    else
                    {
                        if (v10 < 1344)
                        {
                            v8 = *((short *)&ptr->padding_1c[3620 + 4 * v10]);
                            continue;
                        }
                    }
                    ptr->field_2ecc = 1;
                    v8 = 0;
                } while ((v9 >>= 1, v8 < 0));
            }
            if (!ptr->field_2ecc)
            {
                if (p < v3)
                {
                    v11 = ptr->padding_1c[0xa00 + v8];
                    v12 = v2 - v11;
                    v7 <<= v11 & 31;
                    v2 = v12;
                    if (v2 - v11 <= 0)
                    {
                        v7 |= (p[1] * 0x100 | p[0]) << ((char)-(v12) & 31);
                        v2 = v12 + 16;
                        p = &p[2];
                    }
                }
                else
                {
                    return;
                }
            }
            v14 = v8 - 0x100;
            if (v8 - 0x100 < 0)
            {
                ptr->field_0[cur].field_0 = v14;
                iter += 1;
                cur += 1;
                ptr->field_0[iter + ptr->field_8].field_0 = v14;
                continue;
            }
            v15 = v14 & 7;
            if (v15 == 7)
            {
                if (v7 >> 24 < 0x100)
                {
                    v16 = *((short *)&ptr->padding_1c[0x800 + 2 * (v7 >> 24)]);
                }
                else
                {
                    ptr->field_2ecc = 1;
                    v16 = 0;
                }
                if (v16 < 0)
                {
                    v17 = 0x800000;
                    do
                    {
                        v18 = -(v16);
                        if ((v17 & v7))
                        {
                            if (v18 * 2 + 1 < 996)
                            {
                                v16 = *((short *)&ptr->padding_1c[8998 + 4 * v18]);
                                continue;
                            }
                        }
                        else
                        {
                            if (v18 < 498)
                            {
                                v16 = *((short *)&ptr->padding_1c[8996 + 4 * v18]);
                                continue;
                            }
                        }
                        ptr->field_2ecc = 1;
                        v16 = 0;
                    } while ((v17 >>= 1, v16 < 0));
                }
                if (!ptr->field_2ecc)
                {
                    if (p < v3)
                    {
                        v19 = ptr->padding_1c[3232 + v16];
                        v20 = v2 - v19;
                        v7 <<= v19 & 31;
                        v2 = v20;
                        if (v2 - v19 <= 0)
                        {
                            v7 |= (p[1] * 0x100 | p[0]) << ((char)-(v20) & 31);
                            v2 = v20 + 16;
                            p = &p[2];
                        }
                    }
                    else
                    {
                        return;
                    }
                }
                v15 = v16 + 7;
                if (ptr->field_2ecc)
                    return;
            }
            v22 = v14 >> 3;
            if (v22 > 2)
            {
                if (v22 <= 3)
                {
                    v30 = 1;
                }
                else if (v22 < 51)
                {
                    ptr5 = v22;
                    v24 = (&g_100003098)[ptr5];
                    v25 = v2 - v24;
                    v26 = v7 << (v24 & 31);
                    v2 = v25;
                    if (v2 - v24 <= 0)
                    {
                        v27 = v25 + 16;
                        addr = &p[2];
                        v26 |= (p[1] * 0x100 | p[0]) << ((char)-(v25) & 31);
                        p = addr;
                        v2 = v27;
                        if (v25 + 16 <= 0)
                        {
                            v26 |= (addr[1] * 0x100 | addr[0]) << ((char)-(v27) & 31);
                            v2 = v27 + 16;
                            p = &addr[2];
                        }
                    }
                    v30 = (v7 >> ((char)(32 - v24) & 31)) + *((int *)&(&g_100000000)[12496 + 4 * ptr5]);
                    v7 = v26;
                }
                else
                {
                    return;
                }
                ptr->field_18 = ptr->field_14;
                ptr->field_14 = ptr->field_10;
            }
            else
            {
                v31 = v22;
                v30 = (&ptr->field_10)[v31];
                if (!v22)
                    goto LABEL_10011afeb;
                (&ptr->field_10)[v31] = ptr->field_10;
            }
            ptr->field_10 = v30;
LABEL_10011afeb:
            v32 = v15 + 2;
            do
            {
                ptr->field_0[cur].field_0 = ptr->field_0[(iter & 4294967295) - v30 & ptr->field_c].field_0;
                if (cur < 257)
                    ptr->field_0[iter + ptr->field_8].field_0 = ptr->field_0[cur].field_0;
            } while ((v32 = (unsigned long)(v32 - 1), iter = (long long)(iter + 1), cur = (long long)(cur + 1), (unsigned int)v32 > 0));
        } while (cur < v6);
    }
    ptr->field_2ec4 = v2;
    ptr->field_2ec0 = v7;
    ptr->field_2b08 = p;
    return;
}
