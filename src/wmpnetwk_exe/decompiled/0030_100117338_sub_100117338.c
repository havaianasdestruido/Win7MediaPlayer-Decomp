/* sub_100117338 @ 0x100117338
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100117338  (1100 bytes, 80 basic blocks)
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
    char padding_0[4];
    unsigned int field_4;
    struct struct_1 *field_8;
    struct struct_2 *field_10;
    struct struct_3 *field_18;
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[4];
    unsigned int field_30;
    unsigned int field_34;
    unsigned int field_38;
    char padding_3c[12];
    unsigned long long field_48;
    unsigned long long field_50;
    unsigned int field_58;
    unsigned int field_5c;
    unsigned short field_60;
    char padding_62[6];
    struct struct_3 *field_68;
    unsigned int field_70;
} struct_0;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_3 {
    char field_0;
} struct_3;

extern unsigned short g_1000032f0[4];

int sub_100117338(void)
{
    unsigned long v3;  // rbp
    struct_0 *ptr;  // rcx
    unsigned long long cur;  // r11
    char v10;  // r8b
    unsigned int v11;  // edi
    unsigned long long v12;  // r11
    unsigned long v13;  // rdx
    char v14;  // r8b
    unsigned long v15;  // rdx
    void* p;  // rbx
    unsigned long v17;  // rdx
    unsigned long v18;  // rcx
    unsigned long v19;  // rdx
    unsigned long long v20;  // r11
    unsigned long v21;  // r8
    char v22;  // r9b
    unsigned long v23;  // rcx
    unsigned int v24;  // 4105
    unsigned long v25;  // r8
    char v26;  // r9b
    unsigned int v27;  // edi
    unsigned long long iter;  // r11
    unsigned long v29;  // rdx
    void* addr;  // rbx
    unsigned long k;  // r9
    unsigned long v33;  // rcx
    unsigned int v5;  // r9d
    unsigned long v34;  // r9
    unsigned long long v35;  // r11
    unsigned long v36;  // rdx
    char v37;  // r8b
    unsigned long v38;  // rcx
    unsigned int v39;  // edi
    unsigned long long l;  // r11
    unsigned long v41;  // rdx
    unsigned long v6;  // r12
    unsigned int v42;  // edx
    char *v43;  // rcx
    unsigned int v44;  // 4098
    unsigned long v45;  // r8
    unsigned long v7;  // r15
    char *v8;  // rdx
    unsigned int v9;  // esi
    unsigned int v0;  // [bp+0x8]
    unsigned int v1;  // [bp+0x28]
    unsigned short v2;  // [bp+0x30]

    v3 = v1;
    v11 = ptr->field_30;
    cur = ptr->field_34;
    v6 = v5;
    v7 = g_1000032f0[v6];
    v10 = 0;
    v0 = g_1000032f0[v3];
    if (v2 && ptr->field_60)
    {
        v8 = &ptr->field_68->field_0;
        v9 = ptr->field_70;
    }
    while (true)
    {
        if (!v9)
        {
            while (true)
            {
                if ((unsigned int)cur < (unsigned int)v6)
                {
                    do
                    {
                        v12 = cur;
                        v13 = ptr->field_24;
                        if ((unsigned int)v13 < ptr->field_20)
                        {
                            v14 = ptr->field_8[v13].field_0;
                            ptr->field_24 = (unsigned int)v13 + 1;
                        }
                        else
                        {
                            v14 = 0;
                            if ((unsigned int)v13 != ptr->field_20)
                                ptr->field_4 = 1;
                        }
                    } while ((cur = (unsigned long long)((unsigned int)v12 + 8), v11 |= (unsigned int)v14 << ((char)(v12 & 4294967295) & 31), cur = cur, (unsigned int)cur < (unsigned int)v6));
                    v3 = v1;
                    v10 = 0;
                }
                if (ptr->field_4)
                    return;
                p = (v7 & v11) * 16 + v15;
                v17 = *((char *)p);
                if ((unsigned int)v17 > 16)
                {
                    do
                    {
                        if ((unsigned int)v17 == 99)
                            return;
                        v18 = (char)p[1];
                        v19 = (unsigned int)v17 - 16;
                        cur -= v18;
                        v11 >>= (char)v18 & 31;
                        if ((unsigned int)cur < (unsigned int)v19)
                        {
                            do
                            {
                                v20 = cur;
                                v21 = ptr->field_24;
                                if ((unsigned int)v21 < ptr->field_20)
                                {
                                    v22 = ptr->field_8[v21].field_0;
                                    ptr->field_24 = (unsigned int)v21 + 1;
                                }
                                else
                                {
                                    v22 = 0;
                                    if ((unsigned int)v21 != ptr->field_20)
                                        ptr->field_4 = 1;
                                }
                            } while ((cur = (unsigned long long)((unsigned int)v20 + 8), v11 |= (unsigned int)v22 << ((char)(v20 & 4294967295) & 31), cur = cur, (unsigned int)cur < (unsigned int)v19));
                            v3 = v1;
                            v6 = v5;
                            v10 = 0;
                        }
                        if (ptr->field_4)
                            return;
                        p = (g_1000032f0[v19] & v11) * 16 + (long long)p[8];
                        v17 = *((char *)p);
                    } while ((unsigned int)v17 > 16);
                }
                v23 = (char)p[1];
                v11 >>= (char)v23 & 31;
                cur -= v23;
                if ((unsigned int)v17 != 16)
                    break;
                ptr->field_10->field_0 = (char)p[8];
                ptr->field_10 = ptr->field_10 + 1;
                v24 = ptr->field_28;
                ptr->field_28 = ptr->field_28 - 1;
                if (!v24 + 4294967295)
                {
                    ptr->field_38 = 2;
                    ptr->field_60 = 0;
                    ptr->field_48 = v15;
                    ptr->field_50 = v45;
                    ptr->field_58 = v6;
                    ptr->field_5c = v3;
                    ptr->field_30 = v11;
                    ptr->field_34 = cur;
                    return;
                }
            }
            if ((unsigned int)v17 == 15)
            {
                ptr->field_30 = v11;
                ptr->field_34 = cur;
                return;
            }
            for (; (unsigned int)cur < (unsigned int)v17; cur = (unsigned int)cur + 8)
            {
                v25 = ptr->field_24;
                if ((unsigned int)v25 < ptr->field_20)
                {
                    v26 = ptr->field_8[v25].field_0;
                    v10 = 0;
                    ptr->field_24 = (unsigned int)v25 + 1;
                }
                else
                {
                    if ((unsigned int)v25 != ptr->field_20)
                        ptr->field_4 = 1;
                    v10 = 0;
                    v26 = 0;
                }
                v11 |= v26 << ((char)(cur & 4294967295) & 31);
            }
            if (ptr->field_4)
                return;
            v27 = v11 >> ((char)(v17 & 4294967295) & 31);
            iter = cur - v17;
            v9 = (g_1000032f0[v17] & v11) + (short)p[8];
            if ((unsigned int)v3 <= 0)
                return;
            for (; (unsigned int)iter < (unsigned int)v3; iter = (unsigned int)iter + 8)
            {
                v29 = ptr->field_24;
                if ((unsigned int)v29 < ptr->field_20)
                {
                    v10 = ptr->field_8[v29].field_0;
                    ptr->field_24 = (unsigned int)v29 + 1;
                }
                else if ((unsigned int)v29 != ptr->field_20)
                {
                    ptr->field_4 = 1;
                }
                v10 = 0;
                v27 |= v10 << ((char)(iter & 4294967295) & 31);
            }
            if (ptr->field_4)
                return;
            addr = (v0 & v27) * 16 + v45;
            for (k = *((char *)addr); (unsigned int)k > 16; k = *((char *)addr))
            {
                if ((unsigned int)k != 99)
                {
                    v33 = (char)addr[1];
                    v34 = (unsigned int)k - 16;
                    iter -= v33;
                    v27 >>= (char)v33 & 31;
                    if ((unsigned int)iter < (unsigned int)v34)
                    {
                        do
                        {
                            v35 = iter;
                            v36 = ptr->field_24;
                            if ((unsigned int)v36 < ptr->field_20)
                            {
                                v37 = ptr->field_8[v36].field_0;
                                ptr->field_24 = (unsigned int)v36 + 1;
                            }
                            else
                            {
                                v37 = 0;
                                if ((unsigned int)v36 != ptr->field_20)
                                    ptr->field_4 = 1;
                            }
                        } while ((iter = (unsigned long long)((unsigned int)v35 + 8), v27 |= (unsigned int)v37 << ((char)(v35 & 4294967295) & 31), iter = iter, (unsigned int)iter < (unsigned int)v34));
                        v6 = v5;
                        v10 = 0;
                    }
                    if (ptr->field_4)
                        return;
                    addr = (g_1000032f0[v34] & v27) * 16 + (long long)addr[8];
                }
                else
                {
                    return;
                }
            }
            v38 = (char)addr[1];
            v39 = v27 >> ((char)v38 & 31);
            for (l = iter - v38; (unsigned int)l < (unsigned int)k; l = (unsigned int)l + 8)
            {
                v41 = ptr->field_24;
                if ((unsigned int)v41 < ptr->field_20)
                {
                    v10 = ptr->field_8[v41].field_0;
                    ptr->field_24 = (unsigned int)v41 + 1;
                }
                else if ((unsigned int)v41 != ptr->field_20)
                {
                    ptr->field_4 = 1;
                }
                v10 = 0;
                v39 |= v10 << ((char)(l & 4294967295) & 31);
            }
            if (ptr->field_4)
                return;
            cur = l - k;
            v11 = v39 >> ((char)(k & 4294967295) & 31);
            v42 = (g_1000032f0[k] & v39) + (short)addr[8];
            v8 = &(v42 <= (int)ptr->field_10 - (int)ptr->field_18 ? &ptr->field_10[-1 * v42] : &ptr->field_10[0x8000 - v42 & 4294967295])->field_0;
        }
        else
        {
            v8 += 1;
            ptr->field_10->field_0 = *(v8);
            v43 = &ptr->field_18->field_0;
            ptr->field_10 = ptr->field_10 + 1;
            v9 -= 1;
            if (v8 == v43 + 0x8000)
                v8 = v43;
            v44 = ptr->field_28;
            ptr->field_28 = ptr->field_28 - 1;
            if (!v44 + 4294967295)
            {
                ptr->field_38 = 2;
                ptr->field_60 = 1;
                ptr->field_48 = v15;
                ptr->field_50 = v45;
                ptr->field_58 = v6;
                ptr->field_5c = v3;
                ptr->field_68 = v8;
                ptr->field_70 = v9;
                ptr->field_30 = v11;
                ptr->field_34 = cur;
                return;
            }
        }
    }
}
