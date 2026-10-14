/* sub_10011b07c @ 0x10011b07c
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x10011b07c  (895 bytes, 58 basic blocks)
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
    char padding_8[4];
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
    unsigned int field_2ed0;
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

int sub_10011b07c(void)
{
    struct_0 *ptr;  // rcx
    char cur;  // sil
    unsigned int v41;  // ebx
    unsigned long long v7;  // cc_ndep
    int v8;  // r8d
    unsigned int v9;  // ecx
    int v10;  // r8d
    char v11;  // 4118
    char p[5];  // rbp
    int v14;  // r8d
    unsigned int v15;  // r10d
    unsigned int v16;  // r10d
    unsigned int v17;  // ecx
    unsigned int v18;  // r10d
    char v19;  // 4118
    char v20;  // sil
    char v22;  // r8b
    unsigned long ptr5;  // r8
    char v24;  // dl
    char v25;  // sil
    unsigned int v26;  // ebx
    char v27;  // sil
    char v3[5];  // r15
    char addr[5];  // rbp
    unsigned int v30;  // r11d
    unsigned long v31;  // rcx
    unsigned int j;  // r10d
    unsigned int v33;  // r8d
    unsigned long long v34;  // cc_dep1
    unsigned int v4;  // edx
    unsigned long long v35;  // r8
    unsigned long long v36;  // rdi
    unsigned long long iter;  // r12
    unsigned long long v38;  // 4166
    unsigned int v40;  // eax
    unsigned long v5;  // r8
    unsigned long long v6;  // r14

    cur = ptr->field_2ec4;
    v41 = ptr->field_2ec0;
    p = ptr->field_2b08;
    v3 = *((long long *)&ptr->padding_2b10[0]);
    v36 = v4;
    iter = v36;
    v6 = v36 + v5;
    if (v36 < v6)
    {
        do
        {
            if (v41 >> 22 < 0x400)
            {
                v8 = *((short *)&ptr->padding_1c[2 * (v41 >> 22)]);
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
                    if ((v9 & v41))
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
            if (ptr->field_2ecc)
                return;
            if (p >= v3)
                return;
            v11 = ptr->padding_1c[0xa00 + v8];
            cur -= v11;
            v41 <<= v11 & 31;
            if (cur - v11 <= 0)
            {
                v41 |= (p[1] * 0x100 | p[0]) << ((char)-(cur) & 31);
                cur += 16;
                p = &p[2];
            }
            v14 = v8 - 0x100;
            if (v8 - 0x100 < 0)
            {
                v36 = (unsigned int)v36 + 1;
                ptr->field_0[iter].field_0 = v14;
                v7 = v8 < 0x100;
                iter += 1;
                continue;
            }
            v15 = v14 & 7;
            if (v15 == 7)
            {
                if (v41 >> 24 < 0x100)
                {
                    v16 = *((short *)&ptr->padding_1c[0x800 + 2 * (v41 >> 24)]);
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
                        if ((v17 & v41))
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
                        v20 = cur - v19;
                        v41 <<= v19 & 31;
                        cur = v20;
                        if (cur - v19 <= 0)
                        {
                            v41 |= (p[1] * 0x100 | p[0]) << ((char)-(v20) & 31);
                            cur = v20 + 16;
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
                    v25 = cur - v24;
                    v26 = v41 << (v24 & 31);
                    cur = v25;
                    if (cur - v24 <= 0)
                    {
                        v27 = v25 + 16;
                        addr = &p[2];
                        v26 |= (p[1] * 0x100 | p[0]) << ((char)-(v25) & 31);
                        p = addr;
                        cur = v27;
                        if (v25 + 16 <= 0)
                        {
                            v26 |= (addr[1] * 0x100 | addr[0]) << ((char)-(v27) & 31);
                            cur = v27 + 16;
                            p = &addr[2];
                        }
                    }
                    v30 = (v41 >> ((char)(32 - v24) & 31)) + *((int *)&(&g_100000000)[12496 + 4 * ptr5]);
                    v41 = v26;
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
                    goto LABEL_10011b379;
                (&ptr->field_10)[v31] = ptr->field_10;
            }
            ptr->field_10 = v30;
LABEL_10011b379:
            j = v15 + 2;
            v33 = (v36 & 4294967295) - v30;
            v34 = v33 & ptr->field_c;
            v35 = v33 & ptr->field_c;
            do
            {
                v38 = _ccall(19, v34, 0, v7);
                j -= 1;
                v36 = (unsigned int)v36 + 1;
                ptr->field_0[iter].field_0 = ptr->field_0[v35].field_0;
                v7 = v38;
                iter += 1;
                v34 = j;
                v35 = (unsigned int)v35 + 1;
            } while (j > 0);
        } while (iter < v6);
    }
    v40 = ptr->field_c;
    ptr->field_2ec4 = cur;
    ptr->field_2ec0 = v41;
    ptr->field_2b08 = p;
    ptr->field_2ed0 = v40 & (unsigned int)v36;
    return;
}
