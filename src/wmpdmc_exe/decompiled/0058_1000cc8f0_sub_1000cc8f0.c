/* sub_1000cc8f0 @ 0x1000cc8f0
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000cc8f0  (895 bytes, 58 basic blocks)
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
extern char g_100002848;

unsigned int sub_1000cc8f0(struct_0 *ptr, unsigned int a1, unsigned long a2)
{
    char cur;  // sil
    unsigned int v2;  // ebx
    unsigned long long v10;  // cc_ndep
    unsigned long long v11;  // rdi
    int v12;  // r8d
    unsigned int v13;  // ecx
    int v14;  // r8d
    char v15;  // 4118
    char p[5];  // rbp
    int v17;  // r8d
    unsigned int v18;  // r10d
    unsigned int v19;  // r10d
    unsigned int v20;  // ecx
    unsigned int v21;  // r10d
    char v22;  // 4118
    char v4[5];  // r15
    char v23;  // sil
    char v25;  // r8b
    unsigned long ptr5;  // r8
    char v27;  // dl
    char v28;  // sil
    unsigned int v29;  // ebx
    char v30;  // sil
    unsigned long long v5;  // rdi
    char addr[5];  // rbp
    unsigned int v33;  // r11d
    unsigned long v34;  // rcx
    unsigned int j;  // r10d
    unsigned int v36;  // r8d
    unsigned long long v37;  // cc_dep1
    unsigned long long iter;  // r12
    unsigned long long v38;  // r8
    unsigned long long v39;  // 4166
    unsigned int v42;  // eax
    unsigned long long v7;  // r14
    unsigned long long v8;  // rdi
    unsigned long long v9;  // rdi

    cur = ptr->field_2ec4;
    v2 = ptr->field_2ec0;
    p = ptr->field_2b08;
    v4 = *((long long *)&ptr->padding_2b10[0]);
    v5 = a1;
    iter = v5;
    v7 = v5 + a2;
    v8 = v5;
    if (v8 < v7)
    {
        v9 = v5;
        do
        {
            v11 = v9;
            if (v2 >> 22 < 0x400)
            {
                v12 = *((short *)&ptr->padding_1c[2 * (v2 >> 22)]);
            }
            else
            {
                ptr->field_2ecc = 1;
                v12 = 0;
            }
            if (v12 < 0)
            {
                v13 = 0x200000;
                do
                {
                    v14 = -(v12);
                    if ((v13 & v2))
                    {
                        if (v14 * 2 + 1 < 2688)
                        {
                            v12 = *((short *)&ptr->padding_1c[3622 + 4 * v14]);
                            continue;
                        }
                    }
                    else
                    {
                        if (v14 < 1344)
                        {
                            v12 = *((short *)&ptr->padding_1c[3620 + 4 * v14]);
                            continue;
                        }
                    }
                    ptr->field_2ecc = 1;
                    v12 = 0;
                } while ((v13 >>= 1, v12 < 0));
            }
            if (ptr->field_2ecc)
                return 4294967295;
            if (p >= v4)
                return 4294967295;
            v15 = ptr->padding_1c[0xa00 + v12];
            cur -= v15;
            v2 <<= v15 & 31;
            if (cur - v15 <= 0)
            {
                v2 |= (p[1] * 0x100 | p[0]) << ((char)-(cur) & 31);
                cur += 16;
                p = &p[2];
            }
            v17 = v12 - 0x100;
            if (v12 - 0x100 < 0)
            {
                v11 = (unsigned int)v11 + 1;
                ptr->field_0[iter].field_0 = v17;
                v10 = v12 < 0x100;
                iter += 1;
                continue;
            }
            v18 = v17 & 7;
            if (v18 == 7)
            {
                if (v2 >> 24 < 0x100)
                {
                    v19 = *((short *)&ptr->padding_1c[0x800 + 2 * (v2 >> 24)]);
                }
                else
                {
                    ptr->field_2ecc = 1;
                    v19 = 0;
                }
                if (v19 < 0)
                {
                    v20 = 0x800000;
                    do
                    {
                        v21 = -(v19);
                        if ((v20 & v2))
                        {
                            if (v21 * 2 + 1 < 996)
                            {
                                v19 = *((short *)&ptr->padding_1c[8998 + 4 * v21]);
                                continue;
                            }
                        }
                        else
                        {
                            if (v21 < 498)
                            {
                                v19 = *((short *)&ptr->padding_1c[8996 + 4 * v21]);
                                continue;
                            }
                        }
                        ptr->field_2ecc = 1;
                        v19 = 0;
                    } while ((v20 >>= 1, v19 < 0));
                }
                if (!ptr->field_2ecc)
                {
                    if (p < v4)
                    {
                        v22 = ptr->padding_1c[3232 + v19];
                        v23 = cur - v22;
                        v2 <<= v22 & 31;
                        cur = v23;
                        if (cur - v22 <= 0)
                        {
                            v2 |= (p[1] * 0x100 | p[0]) << ((char)-(v23) & 31);
                            cur = v23 + 16;
                            p = &p[2];
                        }
                    }
                    else
                    {
                        return 4294967295;
                    }
                }
                v18 = v19 + 7;
                if (ptr->field_2ecc)
                    return 4294967295;
            }
            v25 = v17 >> 3;
            if (v25 > 2)
            {
                if (v25 <= 3)
                {
                    v33 = 1;
                }
                else if (v25 < 51)
                {
                    ptr5 = v25;
                    v27 = (&g_100002848)[ptr5];
                    v28 = cur - v27;
                    v29 = v2 << (v27 & 31);
                    cur = v28;
                    if (cur - v27 <= 0)
                    {
                        v30 = v28 + 16;
                        addr = &p[2];
                        v29 |= (p[1] * 0x100 | p[0]) << ((char)-(v28) & 31);
                        p = addr;
                        cur = v30;
                        if (v28 + 16 <= 0)
                        {
                            v29 |= (addr[1] * 0x100 | addr[0]) << ((char)-(v30) & 31);
                            cur = v30 + 16;
                            p = &addr[2];
                        }
                    }
                    v33 = (v2 >> ((char)(32 - v27) & 31)) + *((int *)&(&g_100000000)[10368 + 4 * ptr5]);
                    v2 = v29;
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
                v34 = v25;
                v33 = (&ptr->field_10)[v34];
                if (!v25)
                    goto LABEL_1000ccbed;
                (&ptr->field_10)[v34] = ptr->field_10;
            }
            ptr->field_10 = v33;
LABEL_1000ccbed:
            j = v18 + 2;
            v36 = (v11 & 4294967295) - v33;
            v37 = v36 & ptr->field_c;
            v38 = v36 & ptr->field_c;
            do
            {
                v39 = _ccall(19, v37, 0, v10);
                j -= 1;
                v11 = (unsigned int)v11 + 1;
                ptr->field_0[iter].field_0 = ptr->field_0[v38].field_0;
                v10 = v39;
                iter += 1;
                v37 = j;
                v38 = (unsigned int)v38 + 1;
            } while (j > 0);
            v9 = v11;
            v8 = v11;
        } while (iter < v7);
    }
    v42 = ptr->field_c;
    ptr->field_2ec4 = cur;
    ptr->field_2ec0 = v2;
    ptr->field_2b08 = p;
    ptr->field_2ed0 = v42 & (unsigned int)v8;
    return v8 - (v5 + a2);
}
