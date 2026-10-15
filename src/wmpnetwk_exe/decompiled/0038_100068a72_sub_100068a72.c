/* sub_100068a72 @ 0x100068a72
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100068a72  (845 bytes, 70 basic blocks)
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

typedef struct struct_5 {
    struct struct_6 *field_0;
    unsigned int field_8;
    int field_c;
    unsigned int field_10;
    char padding_14[4];
    char field_18;
    char padding_19[500];
    char field_20d;
} struct_5;

typedef struct struct_1 {
    char padding_0[24];
    struct struct_2 *field_18;
} struct_1;

typedef struct struct_3 {
    char padding_0[8];
    struct struct_4 *field_8;
} struct_3;

typedef struct struct_6 {
    struct struct_3 *field_0;
} struct_6;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_10001e540;
extern struct_1 *g_100152100;
extern struct_0 *g_100153eb8;

int sub_100068a72(void)
{
    struct_5 *v5;  // rax
    struct_5 *v6;  // rsi
    char *v15;  // rdi
    char *iter;  // r8
    unsigned long long v17;  // rdi
    char *v18;  // r9
    unsigned long long v19;  // rbx
    unsigned int v20;  // r11d
    unsigned int v21;  // edi
    int v22;  // r10d
    unsigned long long node;  // rdx
    unsigned int v24;  // ecx
    unsigned long v7;  // rbx
    unsigned int v25;  // eax
    unsigned int v26;  // edi
    unsigned long v27;  // rax
    unsigned long long v28;  // rcx
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rcx
    struct_5 *v31;  // rdi
    unsigned long v32;  // rbp
    int v8;  // r15d
    unsigned int v33;  // eax
    unsigned long v34;  // rdi
    struct_1 **v35;  // rcx
    struct_1 *v36;  // rdx
    long long *v37;  // r13
    struct_5 *p;  // rdx
    struct_3 **v39;  // rcx
    int v9;  // r12d
    long long v10;  // r14
    struct_5 *ptr;  // rsi
    unsigned int v12;  // edi
    struct_5 *cur;  // rbp
    char *v14;  // r14
    long long v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x30]
    struct_5 *v3;  // [bp+0x38]
    unsigned int v4;  // [bp+0xa8]

    v6 = &v5->field_18;
    v3 = v6;
    v2 = v7;
    v9 = v8 + 2;
    if (g_100153eb8 != vvar_323{r56|8b} && ((char)v9 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
        sub_100065ff4(g_100153eb8->field_10, v8 + 112, &g_10001e540, v10); /* do not return */
    ptr = v6;
    if ((ptr->field_c - 501 | v12 - ptr->field_8) < 0)
    {
        sub_100069df4(&v3, 501);
        ptr = v3;
    }
    if (ptr->field_c < 501)
        sub_100036284(2147942487); /* do not return */
    ptr->field_10 = 501;
    ptr->padding_19[476] = 0;
    cur = ptr;
    v15 = v14;
    do
    {
        if (false)
            break;
    } while (*(v15));
    iter = v14;
    v17 = 0;
    if (v14)
    {
        v18 = &v14[(unsigned int)(~(18446744073709551615) - 1)];
        v19 = 0;
        v20 = 0;
        if (v14 < v18)
        {
            do
            {
                if (!*(iter))
                    break;
                v21 = 0;
                v22 = 0;
                node = 0;
                do
                {
                    if (iter >= v18)
                        break;
                    v24 = *(iter);
                    if (v24 - 65 <= 25)
                    {
                        v25 = v24 - 65;
                    }
                    else if (v24 - 97 <= 25)
                    {
                        v25 = v24 - 71;
                    }
                    else if (v24 - 48 <= 9)
                    {
                        v25 = v24 + 4;
                    }
                    else if (v24 == 43)
                    {
                        v25 = v24 + 19;
                    }
                    else
                    {
                        v4 = 63;
                        v25 = (v24 == 47 ? v4 : 4294967295);
                    }
                    iter += 1;
                    if (v25 == 4294967295)
                    {
                        node -= 1;
                    }
                    else
                    {
                        v21 = v21 * 64 | v25;
                        v22 += 6;
                    }
                    node += 1;
                } while ((unsigned int)node < 4);
                if (!v20 && 500 < (v22 + (v22 >> 31 & 7) >> 3) + (unsigned int)v19)
                    v20 = 1;
                v26 = v21 << ((char)(24 - v22) & 31);
                v27 = v22 + (v22 >> 31 & 7) >> 3;
                if ((unsigned int)v27 > 0)
                {
                    v28 = v27 & 4294967295;
                    v19 += v27;
                    do
                    {
                        v29 = v28;
                        if (!v20)
                        {
                            *((char *)&cur->field_0) = v26 >> 16;
                            cur = (char *)&cur->field_0 + 1;
                        }
                    } while ((v26 *= 0x100, v30 = v29 - 1, v28 = v29 - 1, v29 != 1));
                }
            } while (iter < v18);
            v17 = 0;
        }
        v2 = v19;
        if (!v20)
        {
            if ((unsigned int)v19 == 4294967295)
            {
                v31 = ptr;
                do
                {
                    if (false)
                        break;
                } while ((char)v31->field_0);
                v32 = (unsigned int)v19 + 2;
                v19 = ~(18446744073709551615) - v32;
            }
            else
            {
                v32 = 1;
            }
            if ((unsigned int)v19 >= 0 && (unsigned int)v19 <= ptr->field_c)
            {
                ptr->field_10 = v19;
                *(v19 + (char *)ptr) = 0;
                if (g_100153eb8 != &g_100153eb8 && ((char)v9 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
                    sub_1000661c8(g_100153eb8->field_10, 114, &g_10001e540, v14, ptr); /* do not return */
                do
                {
                    if (false)
                        break;
                } while ((char)ptr->field_0);
                v33 = sub_100069fe8(~(18446744073709551615) - v32, 3);
                v34 = v33;
                v4 = v33;
                v35 = &g_100152100;
                v36 = g_100152100;
                g_100152100->field_18();
            }
            sub_100036284(2147942487); /* do not return */
        }
    }
    if (g_100153eb8 != &g_100153eb8)
    {
        if (((char)v9 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= (char)v9)
        {
            *((unsigned int *)&v1) = v19;
            sub_10003be4c(g_100153eb8->field_10, 113, &g_10001e540, 500, v1); /* do not return */
        }
        if (g_100153eb8 != &g_100153eb8 && (1 & g_100153eb8->field_1c))
        {
            v9 = 5;
            if (g_100153eb8->field_19 >= v9)
                sub_10003ba64(g_100153eb8->field_10, 122, &g_10001e540, 2147942487, *(v37)); /* do not return */
        }
    }
    p = &ptr->field_18;
    InterlockedExchangeAdd(&p->field_10, 4294967295);
    if (p->field_10 - 1 > 0)
        return;
    v39 = p->field_0;
    p->field_0->field_0->field_8();
}
