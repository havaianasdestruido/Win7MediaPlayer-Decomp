/* sub_1000bdd08 @ 0x1000bdd08
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000bdd08  (1350 bytes, 106 basic blocks)
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
    char padding_8[8];
    long long field_10;
} struct_0;

typedef struct struct_2 {
    struct struct_1 *field_0;
    char padding_8[8];
    long long field_10;
} struct_2;

typedef struct struct_1 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_1;

extern long long g_100002ec8;
extern struct_2 g_1000dedd8;

unsigned long long sub_1000bdd08(void* *ptr, struct_0 *ptr5, void* addr, unsigned int a3)
{
    unsigned long v4;  // r10
    struct_0 *ptr4;  // rbp
    void* p;  // r10
    unsigned int v13;  // r12d
    unsigned int v14;  // r9d
    unsigned long v15;  // rcx
    void* v16;  // rax
    struct_2 *v17;  // rcx
    void* idx6;  // rdx
    unsigned long v19;  // rcx
    void* v20;  // rax
    void* ptr6;  // rsi
    void* v6;  // rax
    unsigned int v22;  // ebp
    void* v23;  // rax
    void* v24;  // rcx
    void* v25;  // rsi
    unsigned long v26;  // rcx
    void* v27;  // rax
    void* v28;  // rdx
    struct_2 *v29;  // rcx
    void* idx4;  // rdx
    unsigned int v8;  // r12d
    void* v9;  // rax
    void* ptr3;  // r13
    void* v11;  // rcx
    unsigned int v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]

    v4 = ptr5->field_10;
    v1 = 0;
    ptr4 = ptr5;
    if (v4)
    {
        v6 = *(ptr);
        if (v4 > (long long)v6[152])
        {
            v29 = g_1000dedd8.field_0;
            if (g_1000dedd8.field_0 != &g_1000dedd8.field_0)
            {
                if ((g_1000dedd8.field_0->field_1c & 1))
                    sub_100020584(g_1000dedd8.field_0->field_10, 10, &g_100002ec8); /* do not return */
LABEL_1000bdd84:
                if (v29 != &g_1000dedd8.field_0 && (*((char *)&v29[1].field_0 + 4) & 1))
                    sub_100020584(v29->field_10); /* do not return */
            }
        }
        else
        {
            idx4 = v6 + v4;
            if (!idx4 || idx4 < v6 || idx4 + 36 > (long long)v6[152] + v6)
                goto LABEL_1000bdd7d;
            if (a3 >= 8)
            {
                *((unsigned int *)addr) = 5;
                *((unsigned int *)&addr[4]) = 12;
                if (a3 - 8 < 12)
                {
                    v29 = g_1000dedd8.field_0;
                    if (g_1000dedd8.field_0 != &g_1000dedd8.field_0 && (g_1000dedd8.field_0->field_1c & 1))
                    {
                        sub_100020584(v29->field_10); /* do not return */
                    }
                }
                else
                {
                    *((long long *)&addr[8]) = (long long)idx4[24];
                    v8 = 20;
                    *((int *)&addr[16]) = (int)idx4[32];
                    v2 = addr + 20;
                    v9 = sub_1000be260(ptr, (long long)idx4[8]);
                    while (true)
                    {
                        ptr3 = v9;
                        if (!v9 || !((v11 = *(ptr), v9 >= v11 && v9 + 20 <= v11 + (long long)v11[152])))
                            return v8;
                        if (a3 - v8 < 4 && g_1000dedd8.field_0 != &g_1000dedd8.field_0)
                        {
                            if ((g_1000dedd8.field_0->field_1c & 1))
                                sub_100020584(g_1000dedd8.field_0->field_10); /* do not return */
                            break;
                        }
                        p = v2;
                        v13 = v8 + 4;
                        *((int *)p) = *((int *)ptr3);
                        v14 = *((int *)ptr3);
                        if (v14)
                        {
                            if (v14 != 3)
                            {
                                if (v14 != 6)
                                {
                                    if (g_1000dedd8.field_0 != &g_1000dedd8.field_0 && (g_1000dedd8.field_0->field_1c & 1))
                                    {
                                        v0 = ptr4->field_4;
                                        sub_100020f2c(g_1000dedd8.field_0->field_10, 50, &g_100002ec8); /* do not return */
                                    }
                                }
                                else
                                {
                                    v15 = (long long)ptr3[12];
                                    if (v15)
                                    {
                                        v16 = *(ptr);
                                        if (v15 > (long long)v16[152])
                                        {
                                            v17 = g_1000dedd8.field_0;
                                            if (g_1000dedd8.field_0 != &g_1000dedd8.field_0)
                                            {
                                                if ((g_1000dedd8.field_0->field_1c & 1))
                                                    sub_100020584(g_1000dedd8.field_0->field_10, 10, &g_100002ec8); /* do not return */
                                                goto LABEL_1000bdf9b;
                                            }
                                        }
                                        else
                                        {
                                            idx6 = v16 + v15;
                                            if (!idx6 || idx6 < v16 || idx6 + 12 > (long long)v16[152] + v16)
                                                goto LABEL_1000bdf94;
                                            if (a3 - v13 >= 12)
                                            {
                                                v1 = 12;
                                                *((long long *)&p[4]) = *((long long *)idx6);
                                                *((int *)&p[12]) = (int)idx6[8];
                                                goto LABEL_1000be004;
                                            }
                                            else
                                            {
                                                if (g_1000dedd8.field_0 == &g_1000dedd8.field_0)
                                                    return 0;
                                                if (!(g_1000dedd8.field_0->field_1c & 1))
                                                    return 0;
                                                sub_100020584(g_1000dedd8.field_0->field_10); /* do not return */
                                            }
                                        }
                                    }
                                    else
                                    {
LABEL_1000bdf94:
                                        v17 = g_1000dedd8.field_0;
LABEL_1000bdf9b:
                                        if (v17 != &g_1000dedd8.field_0 && (*((char *)&v17[1].field_0 + 4) & 1))
                                            sub_100020584(v17->field_10); /* do not return */
                                        goto LABEL_1000bdf14;
                                    }
                                }
                                goto LABEL_1000be004;
                            }
                            v19 = (long long)ptr3[12];
                            if (!v19)
                                goto LABEL_1000be004;
                            v20 = *(ptr);
                            if (v19 > (long long)v20[152])
                            {
                                if (g_1000dedd8.field_0 != &g_1000dedd8.field_0 && (g_1000dedd8.field_0->field_1c & 1))
                                    sub_100020584(g_1000dedd8.field_0->field_10); /* do not return */
                                goto LABEL_1000be004;
                            }
                            ptr6 = v20 + v19;
                            if (!ptr6 || ptr6 < v20 || ptr6 + 16 > (long long)v20[152] + v20)
                                goto LABEL_1000be004;
                            v22 = (int)ptr6[4] * 2 + 12;
                            if (a3 - v13 < v22)
                            {
                                if (g_1000dedd8.field_0 == &g_1000dedd8.field_0)
                                    return 0;
                                if (!(g_1000dedd8.field_0->field_1c & 1))
                                    return 0;
                                sub_100020584(g_1000dedd8.field_0->field_10); /* do not return */
                            }
                            *((int *)&p[4]) = *((int *)ptr6);
                            *((int *)&p[8]) = (int)ptr6[4];
                            v23 = sub_1000be260(ptr, (long long)ptr6[8]);
                            if (v23 && !((v24 = *(ptr), v23 < v24 || (unsigned long long)((int)ptr6[4] * 2 + 2) + v23 > v24 + (long long)v24[152])))
                            {
                                v25 = v2;
                                if (sub_100045190(v25 + 12, (int)v25[8] + 1) >= 0)
                                {
                                    v1 = v22;
LABEL_1000bdf1d:
                                    v8 = v13 + v22;
                                    *((unsigned int *)&addr[4]) = (int)addr[4] + v22 + 4;
                                    v2 = v25 + v1 + 4;
                                    v9 = sub_1000be260(ptr, (long long)ptr3[4]);
                                    ptr4 = ptr5;
                                }
                                else
                                {
                                    if (g_1000dedd8.field_0 != &g_1000dedd8.field_0 && (g_1000dedd8.field_0->field_1c & 1))
                                        sub_100020584(g_1000dedd8.field_0->field_10, 48, &g_100002ec8); /* do not return */
LABEL_1000bdf19:
                                    v22 = v1;
                                    goto LABEL_1000bdf1d;
                                }
                            }
                            else
                            {
                                if (g_1000dedd8.field_0 != &g_1000dedd8.field_0 && (g_1000dedd8.field_0->field_1c & 1))
                                    sub_100020584(g_1000dedd8.field_0->field_10); /* do not return */
                                goto LABEL_1000bdf14;
                            }
                        }
                        else
                        {
                            v26 = (long long)ptr3[12];
                            if (v26)
                            {
                                v27 = *(ptr);
                                if (v26 > (long long)v27[152])
                                {
                                    v17 = g_1000dedd8.field_0;
                                    if (g_1000dedd8.field_0 != &g_1000dedd8.field_0)
                                    {
                                        if ((g_1000dedd8.field_0->field_1c & 1))
                                            sub_100020584(g_1000dedd8.field_0->field_10, 10, &g_100002ec8); /* do not return */
                                        goto LABEL_1000be169;
                                    }
                                }
                                else
                                {
                                    v28 = v27 + v26;
                                    if (!v28 || v28 < v27 || v28 + 8 > (long long)v27[152] + v27)
                                        goto LABEL_1000be162;
                                    if (a3 - v13 >= 8)
                                    {
                                        v1 = 8;
                                        *((long long *)&p[4]) = *((long long *)v28);
                                    }
                                    else
                                    {
                                        if (g_1000dedd8.field_0 == &g_1000dedd8.field_0)
                                            return 0;
                                        if (!(g_1000dedd8.field_0->field_1c & 1))
                                            return 0;
                                        sub_100020584(g_1000dedd8.field_0->field_10); /* do not return */
                                    }
                                }
                            }
                            else
                            {
LABEL_1000be162:
                                v17 = g_1000dedd8.field_0;
LABEL_1000be169:
                                if (v17 != &g_1000dedd8.field_0 && (*((char *)&v17[1].field_0 + 4) & 1))
                                    sub_100020584(v17->field_10); /* do not return */
LABEL_1000bdf14:
                                v25 = v2;
                                goto LABEL_1000bdf19;
                            }
LABEL_1000be004:
                            v25 = p;
                            goto LABEL_1000bdf19;
                        }
                    }
                }
            }
            else if (g_1000dedd8.field_0 != &g_1000dedd8.field_0 && (g_1000dedd8.field_0->field_1c & 1))
            {
                sub_100020584(v29->field_10); /* do not return */
            }
        }
        return 0;
    }
LABEL_1000bdd7d:
    v29 = g_1000dedd8.field_0;
    goto LABEL_1000bdd84;
}
