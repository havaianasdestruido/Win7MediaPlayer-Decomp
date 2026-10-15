/* sub_1000c8bac @ 0x1000c8bac
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000c8bac  (1100 bytes, 80 basic blocks)
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

extern unsigned short g_100002aa0[4];

unsigned int sub_1000c8bac(struct_0 *ptr, unsigned long a1, unsigned long a2, unsigned int a3, unsigned int a4, unsigned short a5)
{
    unsigned long v1;  // rbp
    unsigned int v2;  // edi
    unsigned long long v7;  // r11
    unsigned long v8;  // rdx
    char v9;  // r8b
    unsigned long long cur;  // r11
    char v11;  // r8b
    void* p;  // rbx
    unsigned long v13;  // rdx
    unsigned long v14;  // rcx
    unsigned long v15;  // rdx
    unsigned long long v16;  // r11
    unsigned long v17;  // r8
    char v18;  // r9b
    unsigned long v19;  // rcx
    unsigned int v20;  // 4105
    unsigned long v21;  // r8
    char v22;  // r9b
    unsigned int v23;  // edi
    unsigned long v3;  // r12
    unsigned long long iter;  // r11
    unsigned long v25;  // rdx
    void* addr;  // rbx
    unsigned long k;  // r9
    unsigned long v28;  // rcx
    unsigned long v29;  // r9
    unsigned long long v30;  // r11
    unsigned long v31;  // rdx
    unsigned long v4;  // r15
    char v32;  // r8b
    unsigned long v33;  // rcx
    unsigned int v34;  // edi
    unsigned long long l;  // r11
    unsigned long v36;  // rdx
    unsigned int v37;  // edx
    char *v38;  // rcx
    unsigned int v39;  // 4098
    char *v5;  // rdx
    unsigned int v6;  // esi
    unsigned int v0;  // [bp+0x8]

    v1 = a4;
    v2 = ptr->field_30;
    cur = ptr->field_34;
    v3 = a3;
    v4 = g_100002aa0[v3];
    v11 = 0;
    v0 = g_100002aa0[v1];
    if (a5 && ptr->field_60)
    {
        v5 = &ptr->field_68->field_0;
        v6 = ptr->field_70;
    }
    while (true)
    {
        if (!v6)
        {
            while (true)
            {
                if ((unsigned int)cur < (unsigned int)v3)
                {
                    do
                    {
                        v7 = cur;
                        v8 = ptr->field_24;
                        if ((unsigned int)v8 < ptr->field_20)
                        {
                            v9 = ptr->field_8[v8].field_0;
                            ptr->field_24 = (unsigned int)v8 + 1;
                        }
                        else
                        {
                            v9 = 0;
                            if ((unsigned int)v8 != ptr->field_20)
                                ptr->field_4 = 1;
                        }
                    } while ((cur = (unsigned long long)((unsigned int)v7 + 8), v2 |= (unsigned int)v9 << ((char)(v7 & 4294967295) & 31), cur = cur, (unsigned int)cur < (unsigned int)v3));
                    v1 = a4;
                    v11 = 0;
                }
                if (ptr->field_4)
                    return 1;
                p = (v4 & v2) * 16 + a1;
                v13 = *((char *)p);
                if ((unsigned int)v13 > 16)
                {
                    do
                    {
                        if ((unsigned int)v13 == 99)
                            return 1;
                        v14 = (char)p[1];
                        v15 = (unsigned int)v13 - 16;
                        cur -= v14;
                        v2 >>= (char)v14 & 31;
                        if ((unsigned int)cur < (unsigned int)v15)
                        {
                            do
                            {
                                v16 = cur;
                                v17 = ptr->field_24;
                                if ((unsigned int)v17 < ptr->field_20)
                                {
                                    v18 = ptr->field_8[v17].field_0;
                                    ptr->field_24 = (unsigned int)v17 + 1;
                                }
                                else
                                {
                                    v18 = 0;
                                    if ((unsigned int)v17 != ptr->field_20)
                                        ptr->field_4 = 1;
                                }
                            } while ((cur = (unsigned long long)((unsigned int)v16 + 8), v2 |= (unsigned int)v18 << ((char)(v16 & 4294967295) & 31), cur = cur, (unsigned int)cur < (unsigned int)v15));
                            v1 = a4;
                            v3 = a3;
                            v11 = 0;
                        }
                        if (ptr->field_4)
                            return 1;
                        p = (g_100002aa0[v15] & v2) * 16 + (long long)p[8];
                        v13 = *((char *)p);
                    } while ((unsigned int)v13 > 16);
                }
                v19 = (char)p[1];
                v2 >>= (char)v19 & 31;
                cur -= v19;
                if ((unsigned int)v13 != 16)
                    break;
                ptr->field_10->field_0 = (char)p[8];
                ptr->field_10 = ptr->field_10 + 1;
                v20 = ptr->field_28;
                ptr->field_28 = ptr->field_28 - 1;
                if (!v20 + 4294967295)
                {
                    ptr->field_38 = 2;
                    ptr->field_60 = 0;
                    ptr->field_48 = a1;
                    ptr->field_50 = a2;
                    ptr->field_58 = v3;
                    ptr->field_5c = v1;
                    ptr->field_30 = v2;
                    ptr->field_34 = cur;
                    return 0;
                }
            }
            if ((unsigned int)v13 == 15)
            {
                ptr->field_30 = v2;
                ptr->field_34 = cur;
                return 0;
            }
            for (; (unsigned int)cur < (unsigned int)v13; cur = (unsigned int)cur + 8)
            {
                v21 = ptr->field_24;
                if ((unsigned int)v21 < ptr->field_20)
                {
                    v22 = ptr->field_8[v21].field_0;
                    v11 = 0;
                    ptr->field_24 = (unsigned int)v21 + 1;
                }
                else
                {
                    if ((unsigned int)v21 != ptr->field_20)
                        ptr->field_4 = 1;
                    v11 = 0;
                    v22 = 0;
                }
                v2 |= v22 << ((char)(cur & 4294967295) & 31);
            }
            if (ptr->field_4)
                return 1;
            v23 = v2 >> ((char)(v13 & 4294967295) & 31);
            iter = cur - v13;
            v6 = (g_100002aa0[v13] & v2) + (short)p[8];
            if ((unsigned int)v1 <= 0)
                return 1;
            for (; (unsigned int)iter < (unsigned int)v1; iter = (unsigned int)iter + 8)
            {
                v25 = ptr->field_24;
                if ((unsigned int)v25 < ptr->field_20)
                {
                    v11 = ptr->field_8[v25].field_0;
                    ptr->field_24 = (unsigned int)v25 + 1;
                }
                else if ((unsigned int)v25 != ptr->field_20)
                {
                    ptr->field_4 = 1;
                }
                v11 = 0;
                v23 |= v11 << ((char)(iter & 4294967295) & 31);
            }
            if (ptr->field_4)
                return 1;
            addr = (v0 & v23) * 16 + a2;
            for (k = *((char *)addr); (unsigned int)k > 16; k = *((char *)addr))
            {
                if ((unsigned int)k != 99)
                {
                    v28 = (char)addr[1];
                    v29 = (unsigned int)k - 16;
                    iter -= v28;
                    v23 >>= (char)v28 & 31;
                    if ((unsigned int)iter < (unsigned int)v29)
                    {
                        do
                        {
                            v30 = iter;
                            v31 = ptr->field_24;
                            if ((unsigned int)v31 < ptr->field_20)
                            {
                                v32 = ptr->field_8[v31].field_0;
                                ptr->field_24 = (unsigned int)v31 + 1;
                            }
                            else
                            {
                                v32 = 0;
                                if ((unsigned int)v31 != ptr->field_20)
                                    ptr->field_4 = 1;
                            }
                        } while ((iter = (unsigned long long)((unsigned int)v30 + 8), v23 |= (unsigned int)v32 << ((char)(v30 & 4294967295) & 31), iter = iter, (unsigned int)iter < (unsigned int)v29));
                        v3 = a3;
                        v11 = 0;
                    }
                    if (ptr->field_4)
                        return 1;
                    addr = (g_100002aa0[v29] & v23) * 16 + (long long)addr[8];
                }
                else
                {
                    return 1;
                }
            }
            v33 = (char)addr[1];
            v34 = v23 >> ((char)v33 & 31);
            for (l = iter - v33; (unsigned int)l < (unsigned int)k; l = (unsigned int)l + 8)
            {
                v36 = ptr->field_24;
                if ((unsigned int)v36 < ptr->field_20)
                {
                    v11 = ptr->field_8[v36].field_0;
                    ptr->field_24 = (unsigned int)v36 + 1;
                }
                else if ((unsigned int)v36 != ptr->field_20)
                {
                    ptr->field_4 = 1;
                }
                v11 = 0;
                v34 |= v11 << ((char)(l & 4294967295) & 31);
            }
            if (ptr->field_4)
                return 1;
            cur = l - k;
            v2 = v34 >> ((char)(k & 4294967295) & 31);
            v37 = (g_100002aa0[k] & v34) + (short)addr[8];
            v5 = &(v37 <= (int)ptr->field_10 - (int)ptr->field_18 ? &ptr->field_10[-1 * v37] : &ptr->field_10[0x8000 - v37 & 4294967295])->field_0;
        }
        else
        {
            v5 += 1;
            ptr->field_10->field_0 = *(v5);
            v38 = &ptr->field_18->field_0;
            ptr->field_10 = ptr->field_10 + 1;
            v6 -= 1;
            if (v5 == v38 + 0x8000)
                v5 = v38;
            v39 = ptr->field_28;
            ptr->field_28 = ptr->field_28 - 1;
            if (!v39 + 4294967295)
            {
                ptr->field_38 = 2;
                ptr->field_60 = 1;
                ptr->field_48 = a1;
                ptr->field_50 = a2;
                ptr->field_58 = v3;
                ptr->field_5c = v1;
                ptr->field_68 = v5;
                ptr->field_70 = v6;
                ptr->field_30 = v2;
                ptr->field_34 = cur;
                return 0;
            }
        }
    }
}
