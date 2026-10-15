/* sub_10006743d @ 0x10006743d
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x10006743d  (797 bytes, 58 basic blocks)
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

typedef struct struct_10 {
    struct struct_11 *field_0;
    char padding_8[8];
    unsigned int field_10;
} struct_10;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_4 {
    char padding_0[8];
    struct struct_5 *field_8;
} struct_4;

typedef struct struct_6 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_6;

typedef struct struct_7 {
    char padding_0[8];
    unsigned long long field_8;
} struct_7;

typedef struct struct_8 {
    char padding_0[8];
    struct struct_9 *field_8;
} struct_8;

typedef struct struct_12 {
    char padding_0[8];
    struct struct_13 *field_8;
} struct_12;

typedef struct struct_11 {
    struct struct_8 *field_0;
} struct_11;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_13 {
    unsigned long long field_0;
} struct_13;

extern long long g_10001e540;
extern struct_6 *g_100153eb8;

int sub_10006743d(void)
{
    struct_10 *v8;  // rax
    struct_10 *v9;  // rdi
    int v18;  // ecx
    int v19;  // esi
    void* ptr;  // rdx
    struct_0 **v22;  // rcx
    void* v23;  // rbx
    void* v24;  // rbx
    void* cur;  // rcx
    unsigned short v26;  // ax
    void* choice;  // rax
    unsigned long long v10;  // r9
    int v28;  // ecx
    int v29;  // eax
    void* iter;  // rcx
    unsigned short v31;  // ax
    void* flag2;  // rax
    int v34;  // ecx
    int v35;  // ecx
    unsigned long v36;  // r8
    unsigned long long v11;  // r8
    void* p;  // rdx
    unsigned long long flag3;  // rdi
    struct_4 **v40;  // rcx
    int v41;  // r13d
    struct_6 *v42;  // r10
    struct_7 *v43;  // r14
    long long *v44;  // r15
    struct_10 *addr;  // rdx
    struct_8 **v46;  // rcx
    void* ptr6;  // rdx
    int v12;  // r13d
    struct_12 **v48;  // rcx
    void* ptr7;  // rdx
    void* node;  // rcx
    unsigned short v15;  // ax
    unsigned long v16;  // r12
    void* flag;  // rax
    long long v1;  // [bp+0x28]
    char v2;  // [bp+0x30]
    void* v3;  // [bp+0x48]
    void* v4;  // [bp+0x50]
    void* v5;  // [bp+0xb0]
    struct_10 *v6;  // [bp+0xc8]
    void* v7;  // [bp+0x100008]

    v9 = (char *)&v8[1].field_0 + 4;
    v6 = v9;
    v10 = 63;
    v11 = 0;
    if (v12 < 0)
    {
        v42 = g_100153eb8;
LABEL_100067966:
        if (v42 != &g_100153eb8 && (v42->field_1c & 1) && v42->field_19 >= (0 <= v41 ? 5 : (unsigned int)v16))
        {
            *((unsigned int *)&v1) = v43->field_8;
            sub_10003bc58(v42->field_10, 63, &g_10001e540, v41, *(v44), v1); /* do not return */
        }
LABEL_1000679b8:
        addr = (char *)&v9[1].field_0 + 4;
        InterlockedExchangeAdd(&addr->field_10, v19);
        if (addr->field_10 + v19 <= 0)
        {
            v46 = addr->field_0;
            addr->field_0->field_0->field_8();
        }
        ptr6 = v5 - 24;
        InterlockedExchangeAdd(ptr6 + 16, v19);
        if ((int)ptr6[16] + v19 > 0)
            return;
        v48 = *((long long *)ptr6);
        (*((long long *)(*((long long *)*((long long *)ptr6)) + 8)))();
    }
    ptr7 = v7;
    if ((int)ptr7[16] > 0)
    {
        node = ptr7;
        if (ptr7)
        {
            v15 = *((short *)ptr7);
            if (*((short *)ptr7))
            {
                do
                {
                    if (v15 == 63)
                        goto LABEL_10006749e;
                } while ((node += v16, v15 = (unsigned short)*((short *)node), *((short *)node)));
            }
            flag = NULL;
            if (*((short *)node) == 63)
                node = node;
            else
                node = flag;
LABEL_10006749e:
            if (node)
            {
                v18 = node - ptr7 >> 1;
                if (v18 != v19)
                {
                    sub_100035ef8(&v6, sub_100035934(vvar_235{r56|8b}, &v3, v18));
                    ptr = v3 - 24;
                    InterlockedExchangeAdd(ptr + 16, v19);
                    v11 = 0;
                    if ((int)ptr[16] + v19 <= 0)
                    {
                        v22 = *((long long *)ptr);
                        (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
                    }
                    v9 = v6;
                    v23 = v5;
                }
            }
        }
    }
    v24 = v23;
    if ((int)v24[16] > 1 && (cur = v24 + 2, cur))
    {
        v26 = *((short *)cur);
        if (*((short *)cur))
        {
            do
            {
                if (v26 == 47)
                    goto LABEL_100067557;
            } while ((cur += v16, v26 = (unsigned short)*((short *)cur), *((short *)cur)));
        }
        choice = NULL;
        if (*((short *)cur) == 47)
            cur = cur;
        else
            cur = choice;
LABEL_100067557:
        if (cur && (v28 = (int)(unsigned int)(cur - v24 >> 1), v28 != v19))
        {
            v29 = v28 + 1;
            if (v29 >= 0 && v29 < (int)v24[16])
            {
                iter = v24 + v29 * 2;
                if (iter)
                {
                    v31 = *((short *)iter);
                    if (*((short *)iter))
                    {
                        do
                        {
                            if (v31 == 47)
                                goto LABEL_1000675b3;
                        } while ((iter += v16, v31 = (unsigned short)*((short *)iter), *((short *)iter)));
                    }
                    flag2 = NULL;
                    if (*((short *)iter) == 47)
                        iter = iter;
                    else
                        iter = flag2;
LABEL_1000675b3:
                    if (iter)
                    {
                        v34 = iter - v24 >> 1;
LABEL_1000675c6:
                        v35 = v34;
                        if (v35 != v19)
                        {
                            v36 = v35 + 1;
                            sub_100035ef8(&v5, sub_100035934(&v5, &v4, v35 + 1));
                            p = v4 - 24;
                            InterlockedExchangeAdd(p + 16, v19);
                            flag3 = 0;
                            if ((int)p[16] + v19 <= 0)
                            {
                                v40 = *((long long *)p);
                                (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
                            }
                            if (g_100153eb8 != &g_100153eb8 && (32 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
                                sub_1000347a8(g_100153eb8->field_10, 59, &g_10001e540, v5); /* do not return */
                            sub_100069af4(&v5, &v2, "."); /* do not return */
                        }
                    }
                }
            }
            else
            {
                v34 = v19;
                goto LABEL_1000675c6;
            }
        }
    }
    v41 = -2147024809;
    v42 = g_100153eb8;
    if (g_100153eb8 == &g_100153eb8)
        goto LABEL_1000679b8;
    if ((32 & g_100153eb8->field_1c))
    {
        if (g_100153eb8->field_19 >= (char)v16)
            sub_100034784(g_100153eb8->field_10, 58, &g_10001e540); /* do not return */
        goto LABEL_100067966;
    }
    else
    {
        goto LABEL_100067966;
    }
    goto LABEL_100067966;
}
