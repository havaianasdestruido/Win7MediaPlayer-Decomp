/* sub_1000c5368 @ 0x1000c5368
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000c5368  (1254 bytes, 57 basic blocks)
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
    char padding_0[40];
    unsigned int field_28;
    char field_2a;
    char field_2b;
    char field_2c;
    char padding_2d[3];
    unsigned int field_30;
    char padding_34[12];
    unsigned long long field_40;
    unsigned long long field_48;
    unsigned long long field_50;
    char padding_58[2088];
    struct struct_1 *field_880;
    struct struct_1 *field_888;
    char padding_890[8];
    unsigned int field_898;
    char padding_89c[20];
    char field_8b0;
} struct_0;

typedef struct struct_1 {
    char field_0;
} struct_1;

extern char g_100000000;
extern char g_100002e80;

void sub_1000c5368(struct_0 *ptr, unsigned int i)
{
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rsi
    char v18;  // r11b
    unsigned long v19;  // r9
    unsigned long p;  // r10
    unsigned long long v21;  // r8
    unsigned long long v22;  // cc_ndep
    unsigned long long v23;  // cc_ndep
    char *v24;  // rax
    unsigned long long v25;  // r8
    char *v26;  // rax
    unsigned long v27;  // r8
    unsigned long long v10;  // rdi
    char *v28;  // rax
    unsigned long long v29;  // cc_ndep
    char v30;  // 4105
    char v31;  // al
    unsigned long v32;  // 4101
    char *v33;  // rax
    unsigned long v34;  // r8
    char *v35;  // rax
    unsigned long long v11;  // r12
    char *v36;  // rax
    unsigned long long v12;  // r13
    unsigned long long v13;  // r15
    unsigned long long cur;  // rdi
    unsigned long long v15;  // rbp
    unsigned long v16;  // r8
    char *v17;  // rax
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v3;  // [bp+0x8]
    unsigned long v4;  // [bp+0x10]
    unsigned long long v5;  // [bp+0x18]
    unsigned long long v6;  // [bp+0x20]

    if (!i)
        return;
    v3 = v8;
    v4 = vvar_226{r56|8b};
    v5 = v9;
    v6 = v10;
    v2 = v11;
    v1 = v12;
    v0 = v13;
    cur = 0;
    v15 = 0;
    do
    {
        if (!((char)(1 << ((char)cur & 7 & 31)) & *((char *)(((cur & 4294967295) >> 3) + ptr->field_48))))
        {
            v16 = *((char *)(cur + ptr->field_40));
            ptr->field_28 = ptr->field_28 | *((short *)&ptr->padding_0[2 * v16 + 13360]) << ((char)(ptr->field_2a - ptr[4].padding_58[580 + v16]) & 31);
            for (ptr->field_2a = ptr->field_2a - ptr[4].padding_58[580 + v16]; ptr->field_2a <= 16; ptr->field_2a = ptr->field_2a + 16)
            {
                if (ptr->field_880 >= ptr->field_888)
                {
                    v17 = *((long long *)&ptr->padding_58[2080]);
                    *((unsigned int *)&ptr->padding_2d[1]) = 1;
                    ptr->field_880 = v17;
                }
                ptr->field_880->field_0 = *((char *)&ptr->field_28 + 2);
                ptr->field_880 = ptr->field_880 + 1;
                ptr->field_880->field_0 = *((char *)&ptr->field_28 + 3);
                ptr->field_880 = ptr->field_880 + 1;
                ptr->field_28 = ptr->field_28 * 0x10000;
            }
            cur += 1;
            *((unsigned int *)&ptr->padding_890[0]) = *((int *)&ptr->padding_890[0]) + 1;
        }
        else
        {
            v18 = *((char *)(cur + ptr->field_40));
            cur += 1;
            v19 = *((int *)(*((long long *)&ptr->padding_34[8]) + v15));
            v15 += 4;
            p = ((unsigned int)v19 < 0x400 ? ptr->padding_58[1052 + v19] : ((unsigned int)v19 < 0x80000 ? ptr->padding_58[1052 + (v19 >> 9)] + 18 : (char)((unsigned int)v19 >> 17) + 34));
            if (v18 < 7)
            {
                v21 = v18 + p * 8 + 0x100;
                ptr->field_28 = ptr->field_28 | *((short *)&ptr->padding_0[2 * v21 + 13360]) << ((char)(ptr->field_2a - ptr[4].padding_58[580 + v21]) & 31);
                ptr->field_2a = ptr->field_2a - ptr[4].padding_58[580 + v21];
                while (true)
                {
                    v23 = v22;
                    if (ptr->field_2a > 16)
                        break;
                    if (ptr->field_880 >= ptr->field_888)
                    {
                        v24 = *((long long *)&ptr->padding_58[2080]);
                        *((unsigned int *)&ptr->padding_2d[1]) = 1;
                        ptr->field_880 = v24;
                    }
                    ptr->field_880->field_0 = *((char *)&ptr->field_28 + 2);
                    ptr->field_880 = ptr->field_880 + 1;
                    ptr->field_880->field_0 = *((char *)&ptr->field_28 + 3);
                    ptr->field_880 = ptr->field_880 + 1;
                    ptr->field_28 = ptr->field_28 * 0x10000;
                    ptr->field_2a = ptr->field_2a + 16;
                }
            }
            else
            {
                v25 = p * 8;
                ptr->field_28 = ptr->field_28 | (unsigned int)(*((short *)&ptr[6].padding_58[392 + 2 * v25]) << ((char)(ptr->field_2a - ptr[4].padding_58[843 + v25]) & 31));
                for (ptr->field_2a = ptr->field_2a - ptr[4].padding_58[843 + v25]; ptr->field_2a <= 16; ptr->field_2a = ptr->field_2a + 16)
                {
                    if (ptr->field_880 >= ptr->field_888)
                    {
                        v26 = *((long long *)&ptr->padding_58[2080]);
                        *((unsigned int *)&ptr->padding_2d[1]) = 1;
                        ptr->field_880 = v26;
                    }
                    ptr->field_880->field_0 = *((char *)&ptr->field_28 + 2);
                    ptr->field_880 = ptr->field_880 + 1;
                    ptr->field_880->field_0 = *((char *)&ptr->field_28 + 3);
                    ptr->field_880 = ptr->field_880 + 1;
                    ptr->field_28 = ptr->field_28 * 0x10000;
                }
                v27 = v18;
                ptr->field_28 = ptr->field_28 | *((short *)&ptr[7].padding_58[717 + 2 * v27]) << ((char)(ptr->field_2a - ptr[4].padding_58[1274 + v27]) & 31);
                ptr->field_2a = ptr->field_2a - ptr[4].padding_58[1274 + v27];
                while (true)
                {
                    v23 = v22;
                    if (ptr->field_2a > 16)
                        break;
                    if (ptr->field_880 >= ptr->field_888)
                    {
                        v28 = *((long long *)&ptr->padding_58[2080]);
                        *((unsigned int *)&ptr->padding_2d[1]) = 1;
                        ptr->field_880 = v28;
                    }
                    ptr->field_880->field_0 = *((char *)&ptr->field_28 + 2);
                    ptr->field_880 = ptr->field_880 + 1;
                    ptr->field_880->field_0 = *((char *)&ptr->field_28 + 3);
                    ptr->field_880 = ptr->field_880 + 1;
                    ptr->field_28 = ptr->field_28 * 0x10000;
                    ptr->field_2a = ptr->field_2a + 16;
                }
            }
            v29 = v23;
            v30 = (&g_100002e80)[p];
            v31 = v30;
            if (v30 >= 3)
            {
                v32 = _ccall(6, 5, (unsigned long long)v30, 3, v29);
                if (!((char)v32))
                {
                    ptr->field_28 = ptr->field_28 | ((unsigned int)((1 << (v31 - 3 & 31) & 4294967295) - 1) & (unsigned int)((v19 & 4294967295) >> 3)) << (ptr->field_2a - v31 + 3 & 31);
                    for (ptr->field_2a = ptr->field_2a + 3 - (&g_100002e80)[p]; ptr->field_2a <= 16; ptr->field_2a = ptr->field_2a + 16)
                    {
                        if (ptr->field_880 >= ptr->field_888)
                        {
                            v33 = *((long long *)&ptr->padding_58[2080]);
                            *((unsigned int *)&ptr->padding_2d[1]) = 1;
                            ptr->field_880 = v33;
                        }
                        ptr->field_880->field_0 = *((char *)&ptr->field_28 + 2);
                        ptr->field_880 = ptr->field_880 + 1;
                        ptr->field_880->field_0 = *((char *)&ptr->field_28 + 3);
                        ptr->field_880 = ptr->field_880 + 1;
                        ptr->field_28 = ptr->field_28 * 0x10000;
                    }
                }
                v34 = (char)v19 & 7;
                ptr->field_28 = ptr->field_28 | *((short *)&ptr[7].padding_58[1511 + 2 * v34]) << ((char)(ptr->field_2a - ptr[7].padding_58[1527 + v34]) & 31);
                for (ptr->field_2a = ptr->field_2a - ptr[7].padding_58[1527 + v34]; ptr->field_2a <= 16; ptr->field_2a = ptr->field_2a + 16)
                {
                    if (ptr->field_880 >= ptr->field_888)
                    {
                        v35 = *((long long *)&ptr->padding_58[2080]);
                        *((unsigned int *)&ptr->padding_2d[1]) = 1;
                        ptr->field_880 = v35;
                    }
                    ptr->field_880->field_0 = *((char *)&ptr->field_28 + 2);
                    ptr->field_880 = ptr->field_880 + 1;
                    ptr->field_880->field_0 = *((char *)&ptr->field_28 + 3);
                    ptr->field_880 = ptr->field_880 + 1;
                    ptr->field_28 = ptr->field_28 * 0x10000;
                }
            }
            else if (v31)
            {
                ptr->field_28 = ptr->field_28 | (*((int *)&(&g_100000000)[11696 + 4 * p]) & (unsigned int)v19) << ((char)(ptr->field_2a - v31) & 31);
                for (ptr->field_2a = ptr->field_2a - (&g_100002e80)[p]; ptr->field_2a <= 16; ptr->field_2a = ptr->field_2a + 16)
                {
                    if (ptr->field_880 >= ptr->field_888)
                    {
                        v36 = *((long long *)&ptr->padding_58[2080]);
                        *((unsigned int *)&ptr->padding_2d[1]) = 1;
                        ptr->field_880 = v36;
                    }
                    ptr->field_880->field_0 = *((char *)&ptr->field_28 + 2);
                    ptr->field_880 = ptr->field_880 + 1;
                    ptr->field_880->field_0 = *((char *)&ptr->field_28 + 3);
                    ptr->field_880 = ptr->field_880 + 1;
                    ptr->field_28 = ptr->field_28 * 0x10000;
                }
            }
            *((unsigned int *)&ptr->padding_890[0]) = *((int *)&ptr->padding_890[0]) + v18 + 2;
        }
        if (*((int *)&ptr->padding_890[0]) == 0x8000)
        {
            sub_1000c5854(ptr);
            ptr->padding_89c[12] = 0;
        }
    } while ((unsigned int)cur < i);
    return;
}
