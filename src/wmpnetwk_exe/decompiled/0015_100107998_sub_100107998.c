/* sub_100107998 @ 0x100107998
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100107998  (1350 bytes, 106 basic blocks)
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

extern long long g_10001dac0;
extern struct_2 g_100153eb8;

int sub_100107998(void)
{
    struct_0 *ptr5;  // rdx
    unsigned long v5;  // r10
    unsigned int v12;  // r12d
    void* v13;  // rax
    void* ptr3;  // r13
    void* v15;  // rcx
    void* p;  // r10
    unsigned int v17;  // r12d
    unsigned int v18;  // r9d
    unsigned long v19;  // rcx
    void* v20;  // rax
    struct_2 *v21;  // rcx
    struct_0 *ptr4;  // rbp
    void* idx6;  // rdx
    unsigned long v23;  // rcx
    void* v24;  // rax
    void* ptr6;  // rsi
    unsigned int v26;  // ebp
    void* v27;  // rax
    void* v28;  // rcx
    void* v29;  // rsi
    unsigned long v30;  // rcx
    void* v31;  // rax
    void* *ptr;  // rcx
    void* v32;  // rdx
    struct_2 *v33;  // rcx
    void* v8;  // rax
    void* idx4;  // rdx
    unsigned int v10;  // r9d
    void* addr;  // r8
    unsigned int v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]

    v5 = ptr5->field_10;
    v1 = 0;
    ptr4 = ptr5;
    if (v5)
    {
        v8 = *(ptr);
        if (v5 > (long long)v8[152])
        {
            v33 = g_100153eb8.field_0;
            if (g_100153eb8.field_0 != &g_100153eb8.field_0)
            {
                if ((g_100153eb8.field_0->field_1c & 1))
                    sub_100034784(g_100153eb8.field_0->field_10, 10, &g_10001dac0); /* do not return */
LABEL_100107a14:
                if (v33 != &g_100153eb8.field_0 && (*((char *)&v33[1].field_0 + 4) & 1))
                    sub_100034784(v33->field_10); /* do not return */
            }
        }
        else
        {
            idx4 = v8 + v5;
            if (!idx4 || idx4 < v8 || idx4 + 36 > (long long)v8[152] + v8)
                goto LABEL_100107a0d;
            if (v10 >= 8)
            {
                *((unsigned int *)addr) = 5;
                *((unsigned int *)&addr[4]) = 12;
                if (v10 - 8 < 12)
                {
                    v33 = g_100153eb8.field_0;
                    if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (g_100153eb8.field_0->field_1c & 1))
                    {
                        sub_100034784(v33->field_10); /* do not return */
                    }
                }
                else
                {
                    *((long long *)&addr[8]) = (long long)idx4[24];
                    v12 = 20;
                    *((int *)&addr[16]) = (int)idx4[32];
                    v2 = addr + 20;
                    v13 = sub_100107ef0(ptr, (long long)idx4[8]);
                    while (true)
                    {
                        ptr3 = v13;
                        if (!v13 || !((v15 = *(ptr), v13 >= v15 && v13 + 20 <= v15 + (long long)v15[152])))
                            return;
                        if (v10 - v12 < 4 && g_100153eb8.field_0 != &g_100153eb8.field_0)
                        {
                            if ((g_100153eb8.field_0->field_1c & 1))
                                sub_100034784(g_100153eb8.field_0->field_10); /* do not return */
                            break;
                        }
                        p = v2;
                        v17 = v12 + 4;
                        *((int *)p) = *((int *)ptr3);
                        v18 = *((int *)ptr3);
                        if (v18)
                        {
                            if (v18 != 3)
                            {
                                if (v18 != 6)
                                {
                                    if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (g_100153eb8.field_0->field_1c & 1))
                                    {
                                        v0 = ptr4->field_4;
                                        sub_10003be4c(g_100153eb8.field_0->field_10, 50, &g_10001dac0); /* do not return */
                                    }
                                }
                                else
                                {
                                    v19 = (long long)ptr3[12];
                                    if (v19)
                                    {
                                        v20 = *(ptr);
                                        if (v19 > (long long)v20[152])
                                        {
                                            v21 = g_100153eb8.field_0;
                                            if (g_100153eb8.field_0 != &g_100153eb8.field_0)
                                            {
                                                if ((g_100153eb8.field_0->field_1c & 1))
                                                    sub_100034784(g_100153eb8.field_0->field_10, 10, &g_10001dac0); /* do not return */
                                                goto LABEL_100107c2b;
                                            }
                                        }
                                        else
                                        {
                                            idx6 = v20 + v19;
                                            if (!idx6 || idx6 < v20 || idx6 + 12 > (long long)v20[152] + v20)
                                                goto LABEL_100107c24;
                                            if (v10 - v17 >= 12)
                                            {
                                                v1 = 12;
                                                *((long long *)&p[4]) = *((long long *)idx6);
                                                *((int *)&p[12]) = (int)idx6[8];
                                                goto LABEL_100107c94;
                                            }
                                            else
                                            {
                                                if (g_100153eb8.field_0 == &g_100153eb8.field_0)
                                                    return;
                                                if (!(g_100153eb8.field_0->field_1c & 1))
                                                    return;
                                                sub_100034784(g_100153eb8.field_0->field_10); /* do not return */
                                            }
                                        }
                                    }
                                    else
                                    {
LABEL_100107c24:
                                        v21 = g_100153eb8.field_0;
LABEL_100107c2b:
                                        if (v21 != &g_100153eb8.field_0 && (*((char *)&v21[1].field_0 + 4) & 1))
                                            sub_100034784(v21->field_10); /* do not return */
                                        goto LABEL_100107ba4;
                                    }
                                }
                                goto LABEL_100107c94;
                            }
                            v23 = (long long)ptr3[12];
                            if (!v23)
                                goto LABEL_100107c94;
                            v24 = *(ptr);
                            if (v23 > (long long)v24[152])
                            {
                                if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (g_100153eb8.field_0->field_1c & 1))
                                    sub_100034784(g_100153eb8.field_0->field_10); /* do not return */
                                goto LABEL_100107c94;
                            }
                            ptr6 = v24 + v23;
                            if (!ptr6 || ptr6 < v24 || ptr6 + 16 > (long long)v24[152] + v24)
                                goto LABEL_100107c94;
                            v26 = (int)ptr6[4] * 2 + 12;
                            if (v10 - v17 < v26)
                            {
                                if (g_100153eb8.field_0 == &g_100153eb8.field_0)
                                    return;
                                if (!(g_100153eb8.field_0->field_1c & 1))
                                    return;
                                sub_100034784(g_100153eb8.field_0->field_10); /* do not return */
                            }
                            *((int *)&p[4]) = *((int *)ptr6);
                            *((int *)&p[8]) = (int)ptr6[4];
                            v27 = sub_100107ef0(ptr, (long long)ptr6[8]);
                            if (v27 && !((v28 = *(ptr), v27 < v28 || (unsigned long long)((int)ptr6[4] * 2 + 2) + v27 > v28 + (long long)v28[152])))
                            {
                                v29 = v2;
                                if (sub_10006ac9c(v29 + 12, (int)v29[8] + 1) >= 0)
                                {
                                    v1 = v26;
LABEL_100107bad:
                                    v12 = v17 + v26;
                                    *((unsigned int *)&addr[4]) = (int)addr[4] + v26 + 4;
                                    v2 = v29 + v1 + 4;
                                    v13 = sub_100107ef0(ptr, (long long)ptr3[4]);
                                    ptr4 = ptr5;
                                }
                                else
                                {
                                    if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (g_100153eb8.field_0->field_1c & 1))
                                        sub_100034784(g_100153eb8.field_0->field_10, 48, &g_10001dac0); /* do not return */
LABEL_100107ba9:
                                    v26 = v1;
                                    goto LABEL_100107bad;
                                }
                            }
                            else
                            {
                                if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (g_100153eb8.field_0->field_1c & 1))
                                    sub_100034784(g_100153eb8.field_0->field_10); /* do not return */
                                goto LABEL_100107ba4;
                            }
                        }
                        else
                        {
                            v30 = (long long)ptr3[12];
                            if (v30)
                            {
                                v31 = *(ptr);
                                if (v30 > (long long)v31[152])
                                {
                                    v21 = g_100153eb8.field_0;
                                    if (g_100153eb8.field_0 != &g_100153eb8.field_0)
                                    {
                                        if ((g_100153eb8.field_0->field_1c & 1))
                                            sub_100034784(g_100153eb8.field_0->field_10, 10, &g_10001dac0); /* do not return */
                                        goto LABEL_100107df9;
                                    }
                                }
                                else
                                {
                                    v32 = v31 + v30;
                                    if (!v32 || v32 < v31 || v32 + 8 > (long long)v31[152] + v31)
                                        goto LABEL_100107df2;
                                    if (v10 - v17 >= 8)
                                    {
                                        v1 = 8;
                                        *((long long *)&p[4]) = *((long long *)v32);
                                    }
                                    else
                                    {
                                        if (g_100153eb8.field_0 == &g_100153eb8.field_0)
                                            return;
                                        if (!(g_100153eb8.field_0->field_1c & 1))
                                            return;
                                        sub_100034784(g_100153eb8.field_0->field_10); /* do not return */
                                    }
                                }
                            }
                            else
                            {
LABEL_100107df2:
                                v21 = g_100153eb8.field_0;
LABEL_100107df9:
                                if (v21 != &g_100153eb8.field_0 && (*((char *)&v21[1].field_0 + 4) & 1))
                                    sub_100034784(v21->field_10); /* do not return */
LABEL_100107ba4:
                                v29 = v2;
                                goto LABEL_100107ba9;
                            }
LABEL_100107c94:
                            v29 = p;
                            goto LABEL_100107ba9;
                        }
                    }
                }
            }
            else if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (g_100153eb8.field_0->field_1c & 1))
            {
                sub_100034784(v33->field_10); /* do not return */
            }
        }
        return;
    }
LABEL_100107a0d:
    v33 = g_100153eb8.field_0;
    goto LABEL_100107a14;
}
