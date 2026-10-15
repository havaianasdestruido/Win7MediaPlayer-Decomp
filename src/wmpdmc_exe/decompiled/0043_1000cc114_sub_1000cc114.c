/* sub_1000cc114 @ 0x1000cc114
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000cc114  (1102 bytes, 68 basic blocks)
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
} struct_2;

extern char g_100000000;
extern char g_100002848;

unsigned int sub_1000cc114(struct_0 *ptr, unsigned int a1, unsigned int a2)
{
    char cur;  // bpl
    unsigned int v2;  // edi
    char p[3];  // r12
    int v9;  // r8d
    unsigned int v10;  // ecx
    int v11;  // r8d
    char v12;  // 4118
    char v13;  // bpl
    int v15;  // r8d
    unsigned int v16;  // r10d
    unsigned int v17;  // r10d
    unsigned int v18;  // ecx
    unsigned int v19;  // r10d
    char v20;  // 4118
    char v21;  // bpl
    char v3[3];  // r14
    char v23;  // r8b
    unsigned long ptr6;  // rbx
    char v25;  // dl
    unsigned int v26;  // r8d
    unsigned int v27;  // r11d
    unsigned int v28;  // r8d
    char v29;  // bpl
    char addr[3];  // r12
    char v31;  // bpl
    unsigned long node;  // rsi
    unsigned int v33;  // r11d
    unsigned long v34;  // r8
    char v35;  // 4115
    char v36;  // bpl
    unsigned int v38;  // r11d
    char v39;  // r8b
    char *v5;  // rdx
    unsigned int v40;  // edi
    unsigned long v42;  // rcx
    unsigned long v43;  // r10
    char *v44;  // rcx
    unsigned int v6;  // r15d
    unsigned int v45;  // eax
    unsigned long iter;  // r13
    unsigned long v8;  // rbx
    char *v0;  // [bp+0x8]

    cur = ptr->field_2ec4;
    v2 = ptr->field_2ec0;
    p = ptr->field_2b08;
    v3 = *((long long *)&ptr->padding_2b10[0]);
    node = a1;
    v5 = &ptr->field_0->field_0;
    v6 = (unsigned int)node + a2;
    iter = node;
    v8 = v6;
    v0 = v5;
    if (node < v8)
    {
        do
        {
            if (v2 >> 22 < 0x400)
            {
                v9 = *((short *)&ptr->padding_1c[2 * (v2 >> 22)]);
            }
            else
            {
                ptr->field_2ecc = 1;
                v9 = 0;
            }
            if (v9 < 0)
            {
                v10 = 0x200000;
                do
                {
                    v11 = -(v9);
                    if ((v10 & v2))
                    {
                        if (v11 * 2 + 1 < 2688)
                        {
                            v9 = *((short *)&ptr->padding_1c[3622 + 4 * v11]);
                            continue;
                        }
                    }
                    else
                    {
                        if (v11 < 1344)
                        {
                            v9 = *((short *)&ptr->padding_1c[3620 + 4 * v11]);
                            continue;
                        }
                    }
                    ptr->field_2ecc = 1;
                    v9 = 0;
                } while ((v10 >>= 1, v9 < 0));
            }
            if (!ptr->field_2ecc)
            {
                if (p < v3)
                {
                    v12 = ptr->padding_1c[0xa00 + v9];
                    v13 = cur - v12;
                    v2 <<= v12 & 31;
                    cur = v13;
                    if (cur - v12 <= 0)
                    {
                        v2 |= (unsigned int)((p[1] * 0x100 | p[0]) << ((char)-(v13) & 31));
                        v5 = v0;
                        cur = v13 + 16;
                        p = &p[2];
                    }
                }
                else
                {
                    return 4294967295;
                }
            }
            v15 = v9 - 0x100;
            if (v9 - 0x100 < 0)
            {
                v5[iter] = v15;
                node += 1;
                iter += 1;
                continue;
            }
            v16 = v15 & 7;
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
            v23 = v15 >> 3;
            if (v23 <= 2)
            {
                v42 = v23;
                v38 = (&ptr->field_10)[v42];
                if (!v23)
                    goto LABEL_1000cc4de;
                (&ptr->field_10)[v42] = ptr->field_10;
            }
            else if (v23 < 51)
            {
                ptr6 = v23;
                v25 = (&g_100002848)[ptr6];
                if ((&g_100002848)[ptr6] >= 3)
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
                    v33 = *((int *)&(&g_100000000)[10368 + 4 * ptr6]) + v28 * 8;
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
                    v38 = v33 + (unsigned int)v34;
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
                    v38 = (v2 >> ((char)(32 - v39) & 31)) + *((int *)&(&g_100000000)[10368 + 4 * ptr6]);
                    v2 = v40;
                }
                else
                {
                    v38 = *((int *)&(&g_100000000)[10368 + 4 * ptr6]);
                }
                v8 = v6;
                ptr->field_18 = ptr->field_14;
                ptr->field_14 = ptr->field_10;
            }
            else
            {
                return 4294967295;
            }
            ptr->field_10 = v38;
LABEL_1000cc4de:
            v5 = v0;
            v43 = v16 + 2;
            v44 = &v5[(unsigned int)((node & 4294967295) - v38) & ptr->field_c];
            do
            {
                v43 -= 1;
                node += 1;
                v5[iter] = *(v44);
                iter += 1;
                v44 += 1;
            } while ((unsigned int)v43 > 0);
        } while (iter < v8);
    }
    v45 = ptr->field_c;
    ptr->field_2ec4 = cur;
    ptr->field_2ec0 = v2;
    ptr->field_2b08 = p;
    ptr->field_2ed0 = v45 & (unsigned int)node;
    return node - v6;
}
