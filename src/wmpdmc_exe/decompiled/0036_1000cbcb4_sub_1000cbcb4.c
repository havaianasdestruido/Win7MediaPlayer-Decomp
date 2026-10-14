/* sub_1000cbcb4 @ 0x1000cbcb4
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000cbcb4  (1112 bytes, 72 basic blocks)
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
} struct_2;

extern char g_100000000;
extern char g_100002848;

unsigned int sub_1000cbcb4(struct_0 *ptr, unsigned int a1, unsigned long a2)
{
    char cur;  // sil
    unsigned int v2;  // edi
    unsigned long long v7;  // cc_ndep
    int v8;  // r8d
    unsigned int v9;  // ecx
    int v10;  // r8d
    char v11;  // 4118
    char p[3];  // rbp
    int v14;  // r8d
    unsigned long v15;  // rax
    unsigned int v16;  // r10d
    unsigned int v17;  // r10d
    unsigned int v18;  // ecx
    unsigned int v19;  // r10d
    char v20;  // 4118
    char v21;  // sil
    char v3[3];  // r14
    char v23;  // r8b
    unsigned long ptr5;  // rbx
    char v25;  // dl
    unsigned int v26;  // r8d
    unsigned int v27;  // r11d
    unsigned int v28;  // r8d
    char v29;  // sil
    char addr[3];  // rbp
    char *v4;  // r15
    char v31;  // sil
    unsigned long v33;  // r11
    unsigned long v34;  // r8
    char v35;  // 4115
    char v36;  // sil
    unsigned long long v38;  // r11
    char v39;  // r8b
    unsigned int v40;  // edi
    unsigned long long v5;  // r12
    unsigned long v42;  // rcx
    unsigned int j;  // r10d
    unsigned long long iter;  // r13
    unsigned long long v45;  // rcx
    unsigned long long v46;  // cc_op
    unsigned long long v47;  // cc_dep1
    unsigned long long v48;  // cc_dep2
    char v49;  // dl
    unsigned long v50;  // rax
    unsigned long long v51;  // 4141
    unsigned long long v6;  // rbx
    unsigned long long v0;  // [bp+0x8]

    cur = ptr->field_2ec4;
    v2 = ptr->field_2ec0;
    p = ptr->field_2b08;
    v3 = *((long long *)&ptr->padding_2b10[0]);
    v4 = &ptr->field_0->field_0;
    v5 = a1;
    iter = v5;
    v6 = v5 + a2;
    v0 = v6;
    if (v5 < v6)
    {
        do
        {
            if (v2 >> 22 < 0x400)
            {
                v8 = *((short *)&ptr->padding_1c[2 * (v2 >> 22)]);
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
                    if ((v9 & v2))
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
                return 4294967295;
            if (p >= v3)
                return 4294967295;
            v11 = ptr->padding_1c[0xa00 + v8];
            cur -= v11;
            v2 <<= v11 & 31;
            if (cur - v11 <= 0)
            {
                v2 |= (p[1] * 0x100 | p[0]) << ((char)-(cur) & 31);
                cur += 16;
                p = &p[2];
            }
            v14 = v8 - 0x100;
            if (v8 - 0x100 < 0)
            {
                v4[iter] = v14;
                v15 = ptr->field_8;
                v5 = (unsigned int)v5 + 1;
                v7 = ((unsigned int)v15 + (unsigned int)v5 <= (unsigned int)v15 ? 1 : 0);
                iter += 1;
                v4[v5 + v15] = v14;
                continue;
            }
            v16 = v14 & 7;
            if (v16 == 7)
            {
                if (v2 >> 24 < 0x100)
                {
                    v17 = *((short *)&ptr->padding_1c[0x800 + 2 * (v2 >> 24)]);
                }
                else
                {
                    ptr->field_2ecc = 1;
                    v17 = 0;
                }
                if (v17 < 0)
                {
                    v18 = 0x800000;
                    do
                    {
                        v19 = -(v17);
                        if ((v18 & v2))
                        {
                            if (v19 * 2 + 1 < 996)
                            {
                                v17 = *((short *)&ptr->padding_1c[8998 + 4 * v19]);
                                continue;
                            }
                        }
                        else
                        {
                            if (v19 < 498)
                            {
                                v17 = *((short *)&ptr->padding_1c[8996 + 4 * v19]);
                                continue;
                            }
                        }
                        ptr->field_2ecc = 1;
                        v17 = 0;
                    } while ((v18 >>= 1, v17 < 0));
                }
                if (!ptr->field_2ecc)
                {
                    if (p < v3)
                    {
                        v20 = ptr->padding_1c[3232 + v17];
                        v21 = cur - v20;
                        v2 <<= v20 & 31;
                        cur = v21;
                        if (cur - v20 <= 0)
                        {
                            v2 |= (p[1] * 0x100 | p[0]) << ((char)-(v21) & 31);
                            cur = v21 + 16;
                            p = &p[2];
                        }
                    }
                    else
                    {
                        return 4294967295;
                    }
                }
                v16 = v17 + 7;
                if (ptr->field_2ecc)
                    return 4294967295;
            }
            v23 = v14 >> 3;
            if (v23 <= 2)
            {
                v42 = v23;
                v38 = (&ptr->field_10)[v42];
                if (!v23)
                    goto LABEL_1000cc08a;
                (&ptr->field_10)[v42] = ptr->field_10;
            }
            else if (v23 < 51)
            {
                ptr5 = v23;
                v25 = (&g_100002848)[ptr5];
                if ((&g_100002848)[ptr5] >= 3)
                {
                    v26 = v25;
                    v27 = v26 - 3;
                    if (v27)
                    {
                        v28 = v2 >> ((char)(35 - v26) & 31);
                        if (p >= v3)
                            return 4294967295;
                        v2 <<= (char)v27 & 31;
                        v29 = cur + 3 - v25;
                        addr = p;
                        v31 = v29;
                        if (cur + 3 - v25 <= 0)
                        {
                            v2 |= (unsigned int)((p[1] * 0x100 | p[0]) << ((char)-(v29) & 31));
                            v31 = v29 + 16;
                            addr = &p[2];
                        }
                    }
                    else
                    {
                        v28 = 0;
                        addr = p;
                        v31 = cur;
                    }
                    v33 = *((int *)&(&g_100000000)[10368 + 4 * ptr5]) + v28 * 8;
                    if (v2 >> 25 < 128)
                    {
                        v34 = ptr->padding_1c[3484 + (v2 >> 25)];
                        if (addr >= v3)
                            return 4294967295;
                        v35 = ptr->padding_1c[3612 + v34];
                        v36 = v31 - v35;
                        v2 <<= v35 & 31;
                        p = addr;
                        cur = v36;
                        if (v31 - v35 <= 0)
                        {
                            v2 |= (unsigned int)((addr[1] * 0x100 | addr[0]) << ((char)-(v36) & 31));
                            cur = v36 + 16;
                            p = &addr[2];
                        }
                    }
                    else
                    {
                        v34 = 0;
                        ptr->field_2ecc = 1;
                        p = addr;
                        cur = v31;
                    }
                    v38 = v33 + v34;
                }
                else if (v25)
                {
                    v39 = v25;
                    if (p >= v3)
                        return 4294967295;
                    cur -= v25;
                    v40 = v2 << (v39 & 31);
                    if (cur - v25 <= 0)
                    {
                        v40 |= (unsigned int)((p[1] * 0x100 | p[0]) << ((char)-(cur) & 31));
                        cur += 16;
                        p = &p[2];
                    }
                    v38 = (v2 >> ((char)(32 - v39) & 31)) + *((int *)&(&g_100000000)[10368 + 4 * ptr5]);
                    v2 = v40;
                }
                else
                {
                    v38 = 1;
                }
                v6 = v0;
                ptr->field_18 = ptr->field_14;
                ptr->field_14 = ptr->field_10;
            }
            else
            {
                return 4294967295;
            }
            ptr->field_10 = v38;
LABEL_1000cc08a:
            j = v16 + 2;
            do
            {
                v45 = (v5 & 4294967295) - v38 & ptr->field_c;
                v46 = 8;
                v47 = iter;
                v48 = 257;
                v49 = v4[v45];
                v4[iter] = v4[v45];
                if (iter < 257)
                {
                    v50 = ptr->field_8;
                    v46 = 3;
                    v47 = v50 & 4294967295;
                    v48 = v5 & 4294967295;
                    v4[v5 + v50] = v49;
                }
                v51 = _ccall(v46, v47, v48, v7);
                j -= 1;
                v5 = (unsigned int)v5 + 1;
                v7 = v51;
                iter += 1;
            } while (j > 0);
        } while (iter < v6);
    }
    ptr->field_2ec4 = cur;
    ptr->field_2ec0 = v2;
    ptr->field_2b08 = p;
    return v5;
}
