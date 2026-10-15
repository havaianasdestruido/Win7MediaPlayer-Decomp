/* sub_10011a8a0 @ 0x10011a8a0
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x10011a8a0  (1102 bytes, 68 basic blocks)
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
} struct_2;

extern char g_100000000;
extern char g_100003098;

int sub_10011a8a0(void)
{
    struct_0 *ptr;  // rcx
    char cur;  // bpl
    unsigned long iter;  // r13
    unsigned long v10;  // rbx
    unsigned int v11;  // edi
    char p[3];  // r12
    int v12;  // r8d
    unsigned int v13;  // ecx
    int v14;  // r8d
    char v15;  // 4118
    char v16;  // bpl
    int v18;  // r8d
    unsigned int v19;  // r10d
    unsigned int v20;  // r10d
    unsigned int v21;  // ecx
    unsigned int v22;  // r10d
    char v23;  // 4118
    char v24;  // bpl
    char v26;  // r8b
    unsigned long ptr6;  // rbx
    char v28;  // dl
    unsigned int v29;  // r8d
    char v3[3];  // r14
    unsigned int v30;  // r11d
    unsigned int v31;  // r8d
    char v32;  // bpl
    char addr[3];  // r12
    char v34;  // bpl
    unsigned int v36;  // r11d
    unsigned long v37;  // r8
    char v38;  // 4115
    char v39;  // bpl
    unsigned int v4;  // edx
    unsigned int v41;  // r11d
    char v42;  // r8b
    unsigned int v43;  // edi
    unsigned long v45;  // rcx
    unsigned long v46;  // r10
    char *v47;  // rcx
    unsigned int v48;  // eax
    unsigned long node;  // rsi
    char *v6;  // rdx
    unsigned int v7;  // r8d
    unsigned int v8;  // r15d
    char *v0;  // [bp+0x8]

    cur = ptr->field_2ec4;
    v11 = ptr->field_2ec0;
    p = ptr->field_2b08;
    v3 = *((long long *)&ptr->padding_2b10[0]);
    node = v4;
    v6 = &ptr->field_0->field_0;
    v8 = (unsigned int)node + v7;
    iter = node;
    v10 = v8;
    v0 = v6;
    if (node < v10)
    {
        do
        {
            if (v11 >> 22 < 0x400)
            {
                v12 = *((short *)&ptr->padding_1c[2 * (v11 >> 22)]);
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
                    if ((v13 & v11))
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
            if (!ptr->field_2ecc)
            {
                if (p < v3)
                {
                    v15 = ptr->padding_1c[0xa00 + v12];
                    v16 = cur - v15;
                    v11 <<= v15 & 31;
                    cur = v16;
                    if (cur - v15 <= 0)
                    {
                        v11 |= (unsigned int)((p[1] * 0x100 | p[0]) << ((char)-(v16) & 31));
                        v6 = v0;
                        cur = v16 + 16;
                        p = &p[2];
                    }
                }
                else
                {
                    return;
                }
            }
            v18 = v12 - 0x100;
            if (v12 - 0x100 < 0)
            {
                v6[iter] = v18;
                node += 1;
                iter += 1;
                continue;
            }
            v19 = v18 & 7;
            if (v19 == 7)
            {
                if (v11 >> 24 < 0x100)
                {
                    v20 = *((short *)&ptr->padding_1c[0x800 + 2 * (v11 >> 24)]);
                }
                else
                {
                    ptr->field_2ecc = 1;
                    v20 = 0;
                }
                if (v20 < 0)
                {
                    v21 = 0x800000;
                    do
                    {
                        v22 = -(v20);
                        if ((v21 & v11))
                        {
                            if (v22 * 2 + 1 < 996)
                            {
                                v20 = *((short *)&ptr->padding_1c[8998 + 4 * v22]);
                                continue;
                            }
                        }
                        else
                        {
                            if (v22 < 498)
                            {
                                v20 = *((short *)&ptr->padding_1c[8996 + 4 * v22]);
                                continue;
                            }
                        }
                        ptr->field_2ecc = 1;
                        v20 = 0;
                    } while ((v21 >>= 1, v20 < 0));
                }
                if (!ptr->field_2ecc)
                {
                    if (p < v3)
                    {
                        v23 = ptr->padding_1c[3232 + v20];
                        v24 = cur - v23;
                        v11 <<= v23 & 31;
                        cur = v24;
                        if (cur - v23 <= 0)
                        {
                            v11 |= (p[1] * 0x100 | p[0]) << ((char)-(v24) & 31);
                            cur = v24 + 16;
                            p = &p[2];
                        }
                    }
                    else
                    {
                        return;
                    }
                }
                v19 = v20 + 7;
                if (ptr->field_2ecc)
                    return;
            }
            v26 = v18 >> 3;
            if (v26 <= 2)
            {
                v45 = v26;
                v41 = (&ptr->field_10)[v45];
                if (!v26)
                    goto LABEL_10011ac6a;
                (&ptr->field_10)[v45] = ptr->field_10;
            }
            else if (v26 < 51)
            {
                ptr6 = v26;
                v28 = (&g_100003098)[ptr6];
                if ((&g_100003098)[ptr6] >= 3)
                {
                    v29 = v28;
                    v30 = v29 - 3;
                    if (v30)
                    {
                        v31 = v11 >> ((char)(35 - v29) & 31);
                        if (p >= v3)
                            return;
                        v11 <<= (char)v30 & 31;
                        v32 = cur + 3 - v28;
                        addr = p;
                        v34 = v32;
                        if (cur + 3 - v28 <= 0)
                        {
                            v11 |= (unsigned int)((p[1] * 0x100 | p[0]) << ((char)-(v32) & 31));
                            v34 = v32 + 16;
                            addr = &p[2];
                        }
                    }
                    else
                    {
                        v31 = 0;
                        addr = p;
                        v34 = cur;
                    }
                    v36 = *((int *)&(&g_100000000)[12496 + 4 * ptr6]) + v31 * 8;
                    if (v11 >> 25 < 128)
                    {
                        v37 = ptr->padding_1c[3484 + (v11 >> 25)];
                        if (addr >= v3)
                            return;
                        v38 = ptr->padding_1c[3612 + v37];
                        v39 = v34 - v38;
                        v11 <<= v38 & 31;
                        p = addr;
                        cur = v39;
                        if (v34 - v38 <= 0)
                        {
                            v11 |= (unsigned int)((addr[1] * 0x100 | addr[0]) << ((char)-(v39) & 31));
                            cur = v39 + 16;
                            p = &addr[2];
                        }
                    }
                    else
                    {
                        v37 = 0;
                        ptr->field_2ecc = 1;
                        p = addr;
                        cur = v34;
                    }
                    v41 = v36 + (unsigned int)v37;
                }
                else if (v28)
                {
                    v42 = v28;
                    if (p >= v3)
                        return;
                    cur -= v28;
                    v43 = v11 << (v42 & 31);
                    if (cur - v28 <= 0)
                    {
                        v43 |= (unsigned int)((p[1] * 0x100 | p[0]) << ((char)-(cur) & 31));
                        cur += 16;
                        p = &p[2];
                    }
                    v41 = (v11 >> ((char)(32 - v42) & 31)) + *((int *)&(&g_100000000)[12496 + 4 * ptr6]);
                    v11 = v43;
                }
                else
                {
                    v41 = *((int *)&(&g_100000000)[12496 + 4 * ptr6]);
                }
                v10 = v8;
                ptr->field_18 = ptr->field_14;
                ptr->field_14 = ptr->field_10;
            }
            else
            {
                return;
            }
            ptr->field_10 = v41;
LABEL_10011ac6a:
            v6 = v0;
            v46 = v19 + 2;
            v47 = &v6[(unsigned int)((node & 4294967295) - v41) & ptr->field_c];
            do
            {
                v46 -= 1;
                node += 1;
                v6[iter] = *(v47);
                iter += 1;
                v47 += 1;
            } while ((unsigned int)v46 > 0);
        } while (iter < v10);
    }
    v48 = ptr->field_c;
    ptr->field_2ec4 = cur;
    ptr->field_2ec0 = v11;
    ptr->field_2b08 = p;
    ptr->field_2ed0 = v48 & (unsigned int)node;
    return;
}
