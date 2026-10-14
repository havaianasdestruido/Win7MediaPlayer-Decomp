/* sub_10011a440 @ 0x10011a440
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x10011a440  (1112 bytes, 72 basic blocks)
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
} struct_2;

extern char g_100000000;
extern char g_100003098;

int sub_10011a440(void)
{
    struct_0 *ptr;  // rcx
    char cur;  // sil
    unsigned long long v7;  // rbx
    unsigned int v54;  // edi
    unsigned long long v8;  // cc_ndep
    int v9;  // r8d
    unsigned int v10;  // ecx
    int v11;  // r8d
    char v12;  // 4118
    char p[3];  // rbp
    int v15;  // r8d
    unsigned long v16;  // rax
    unsigned int v17;  // r10d
    unsigned int v18;  // r10d
    unsigned int v19;  // ecx
    unsigned int v20;  // r10d
    char v21;  // 4118
    char v22;  // sil
    char v24;  // r8b
    unsigned long ptr5;  // rbx
    char v26;  // dl
    unsigned int v27;  // r8d
    unsigned int v28;  // r11d
    char v3[3];  // r14
    unsigned int v29;  // r8d
    char v30;  // sil
    char addr[3];  // rbp
    char v32;  // sil
    unsigned long v34;  // r11
    unsigned long v35;  // r8
    char v36;  // 4115
    char v37;  // sil
    char *v4;  // r15
    unsigned long long v39;  // r11
    char v40;  // r8b
    unsigned int v41;  // edi
    unsigned long v43;  // rcx
    unsigned int j;  // r10d
    unsigned long long v45;  // r12
    unsigned long long iter;  // r13
    unsigned long long v47;  // rcx
    unsigned int v5;  // edx
    unsigned long long v48;  // cc_op
    unsigned long long v49;  // cc_dep1
    unsigned long long v50;  // cc_dep2
    char v51;  // dl
    unsigned long v52;  // rax
    unsigned long long v53;  // 4141
    unsigned long v6;  // r8
    unsigned long long v0;  // [bp+0x8]

    cur = ptr->field_2ec4;
    v54 = ptr->field_2ec0;
    p = ptr->field_2b08;
    v3 = *((long long *)&ptr->padding_2b10[0]);
    v4 = &ptr->field_0->field_0;
    v45 = v5;
    iter = v45;
    v7 = v45 + v6;
    v0 = v7;
    if (v45 < v7)
    {
        do
        {
            if (v54 >> 22 < 0x400)
            {
                v9 = *((short *)&ptr->padding_1c[2 * (v54 >> 22)]);
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
                    if ((v10 & v54))
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
            if (ptr->field_2ecc)
                return;
            if (p >= v3)
                return;
            v12 = ptr->padding_1c[0xa00 + v9];
            cur -= v12;
            v54 <<= v12 & 31;
            if (cur - v12 <= 0)
            {
                v54 |= (p[1] * 0x100 | p[0]) << ((char)-(cur) & 31);
                cur += 16;
                p = &p[2];
            }
            v15 = v9 - 0x100;
            if (v9 - 0x100 < 0)
            {
                v4[iter] = v15;
                v16 = ptr->field_8;
                v45 = (unsigned int)v45 + 1;
                v8 = ((unsigned int)v16 + (unsigned int)v45 <= (unsigned int)v16 ? 1 : 0);
                iter += 1;
                v4[v45 + v16] = v15;
                continue;
            }
            v17 = v15 & 7;
            if (v17 == 7)
            {
                if (v54 >> 24 < 0x100)
                {
                    v18 = *((short *)&ptr->padding_1c[0x800 + 2 * (v54 >> 24)]);
                }
                else
                {
                    ptr->field_2ecc = 1;
                    v18 = 0;
                }
                if (v18 < 0)
                {
                    v19 = 0x800000;
                    do
                    {
                        v20 = -(v18);
                        if ((v19 & v54))
                        {
                            if (v20 * 2 + 1 < 996)
                            {
                                v18 = *((short *)&ptr->padding_1c[8998 + 4 * v20]);
                                continue;
                            }
                        }
                        else
                        {
                            if (v20 < 498)
                            {
                                v18 = *((short *)&ptr->padding_1c[8996 + 4 * v20]);
                                continue;
                            }
                        }
                        ptr->field_2ecc = 1;
                        v18 = 0;
                    } while ((v19 >>= 1, v18 < 0));
                }
                if (!ptr->field_2ecc)
                {
                    if (p < v3)
                    {
                        v21 = ptr->padding_1c[3232 + v18];
                        v22 = cur - v21;
                        v54 <<= v21 & 31;
                        cur = v22;
                        if (cur - v21 <= 0)
                        {
                            v54 |= (p[1] * 0x100 | p[0]) << ((char)-(v22) & 31);
                            cur = v22 + 16;
                            p = &p[2];
                        }
                    }
                    else
                    {
                        return;
                    }
                }
                v17 = v18 + 7;
                if (ptr->field_2ecc)
                    return;
            }
            v24 = v15 >> 3;
            if (v24 <= 2)
            {
                v43 = v24;
                v39 = (&ptr->field_10)[v43];
                if (!v24)
                    goto LABEL_10011a816;
                (&ptr->field_10)[v43] = ptr->field_10;
            }
            else if (v24 < 51)
            {
                ptr5 = v24;
                v26 = (&g_100003098)[ptr5];
                if ((&g_100003098)[ptr5] >= 3)
                {
                    v27 = v26;
                    v28 = v27 - 3;
                    if (v28)
                    {
                        v29 = v54 >> ((char)(35 - v27) & 31);
                        if (p >= v3)
                            return;
                        v54 <<= (char)v28 & 31;
                        v30 = cur + 3 - v26;
                        addr = p;
                        v32 = v30;
                        if (cur + 3 - v26 <= 0)
                        {
                            v54 |= (unsigned int)((p[1] * 0x100 | p[0]) << ((char)-(v30) & 31));
                            v32 = v30 + 16;
                            addr = &p[2];
                        }
                    }
                    else
                    {
                        v29 = 0;
                        addr = p;
                        v32 = cur;
                    }
                    v34 = *((int *)&(&g_100000000)[12496 + 4 * ptr5]) + v29 * 8;
                    if (v54 >> 25 < 128)
                    {
                        v35 = ptr->padding_1c[3484 + (v54 >> 25)];
                        if (addr >= v3)
                            return;
                        v36 = ptr->padding_1c[3612 + v35];
                        v37 = v32 - v36;
                        v54 <<= v36 & 31;
                        p = addr;
                        cur = v37;
                        if (v32 - v36 <= 0)
                        {
                            v54 |= (unsigned int)((addr[1] * 0x100 | addr[0]) << ((char)-(v37) & 31));
                            cur = v37 + 16;
                            p = &addr[2];
                        }
                    }
                    else
                    {
                        v35 = 0;
                        ptr->field_2ecc = 1;
                        p = addr;
                        cur = v32;
                    }
                    v39 = v34 + v35;
                }
                else if (v26)
                {
                    v40 = v26;
                    if (p >= v3)
                        return;
                    cur -= v26;
                    v41 = v54 << (v40 & 31);
                    if (cur - v26 <= 0)
                    {
                        v41 |= (unsigned int)((p[1] * 0x100 | p[0]) << ((char)-(cur) & 31));
                        cur += 16;
                        p = &p[2];
                    }
                    v39 = (v54 >> ((char)(32 - v40) & 31)) + *((int *)&(&g_100000000)[12496 + 4 * ptr5]);
                    v54 = v41;
                }
                else
                {
                    v39 = 1;
                }
                v7 = v0;
                ptr->field_18 = ptr->field_14;
                ptr->field_14 = ptr->field_10;
            }
            else
            {
                return;
            }
            ptr->field_10 = v39;
LABEL_10011a816:
            j = v17 + 2;
            do
            {
                v47 = (v45 & 4294967295) - v39 & ptr->field_c;
                v48 = 8;
                v49 = iter;
                v50 = 257;
                v51 = v4[v47];
                v4[iter] = v4[v47];
                if (iter < 257)
                {
                    v52 = ptr->field_8;
                    v48 = 3;
                    v49 = v52 & 4294967295;
                    v50 = v45 & 4294967295;
                    v4[v45 + v52] = v51;
                }
                v53 = _ccall(v48, v49, v50, v8);
                j -= 1;
                v45 = (unsigned int)v45 + 1;
                v8 = v53;
                iter += 1;
            } while (j > 0);
        } while (iter < v7);
    }
    ptr->field_2ec4 = cur;
    ptr->field_2ec0 = v54;
    ptr->field_2b08 = p;
    return;
}
