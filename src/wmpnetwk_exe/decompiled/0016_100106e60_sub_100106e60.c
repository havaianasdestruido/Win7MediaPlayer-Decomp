/* sub_100106e60 @ 0x100106e60
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100106e60  (1459 bytes, 105 basic blocks)
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
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[144];
    unsigned long long field_98;
    char padding_a0[1688];
    unsigned int field_738;
    char padding_73c[8];
    unsigned int field_744;
    char padding_748[8];
    unsigned int field_750;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[144];
    unsigned long long field_98;
    char padding_a0[1688];
    unsigned int field_738;
    char padding_73c[8];
    unsigned int field_744;
    char padding_748[8];
    unsigned int field_750;
} struct_1;

typedef struct struct_2 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_2;

extern struct_2 *g_100153eb8;

int sub_100106e60(void)
{
    void* ptr5;  // r14
    void* ptr;  // rsi
    unsigned long v29;  // rcx
    void* v30;  // rdx
    struct_0 *p;  // r10
    struct_0 *v32;  // rcx
    struct_2 *v33;  // rbx
    long long v34;  // rdi
    unsigned int v35;  // ecx
    unsigned int v36;  // ecx
    void* v37;  // r13
    unsigned long v38;  // rcx
    struct_0 **addr;  // r15
    unsigned int v39;  // eax
    struct_2 *v41;  // rcx
    unsigned long v42;  // r9
    unsigned long long v43;  // r11
    void* v44;  // r13
    unsigned long v45;  // rcx
    void* ptr4;  // rdx
    unsigned long long j;  // rbp
    unsigned int v48;  // ecx
    unsigned long v22;  // rcx
    unsigned int k;  // edx
    void* cur;  // r8
    long long v53;  // rdi
    long long v54;  // rdi
    unsigned int v23;  // r12d
    unsigned long v24;  // rcx
    unsigned int v25;  // r13d
    unsigned long v26;  // rcx
    unsigned long v27;  // rcx
    unsigned long v28;  // rcx
    long long v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x28]
    unsigned long long flag;  // [bp+0x30]
    unsigned int v4;  // [bp+0x40], Other Possible Types: unsigned long long
    long long v5;  // [bp+0x48]
    void* v6;  // [bp+0x50], Other Possible Types: unsigned long long
    struct_1 *v7;  // [bp+0x58]
    void* v8;  // [bp+0x60]
    void* v9;  // [bp+0x68]
    unsigned int v10;  // [bp+0x70]
    unsigned int v11;  // [bp+0x7c]
    unsigned int v12;  // [bp+0x84]
    unsigned int v13;  // [bp+0x88]
    long long i;  // [bp+0x90]
    unsigned long index;  // [bp+0x98]
    long long v16;  // [bp+0xe8]
    unsigned int v17;  // [bp+0xf0]
    unsigned int v18;  // [bp+0xf8]

    ptr = ptr5 + 120;
    if (ptr && ptr >= ptr5 && !((v22 = (unsigned long)(unsigned long long)*(addr)->field_738, ptr + (unsigned long long)*(addr)->field_738 > v5 || (unsigned int)(unsigned long long)*(addr)->field_738 > v23)))
    {
        if (v10 > 0)
        {
            *((unsigned int *)ptr) = 0;
            v24 = *(addr)->field_738;
            v25 = 128;
            v9 = ptr + 8;
            *((unsigned int *)&ptr[4]) = v24;
            ptr = v9 + v24;
            v4 = 128;
        }
        if (ptr && ptr >= ptr5 && !((v26 = (unsigned long)(unsigned long long)*(addr)->field_750, ptr + (unsigned long long)*(addr)->field_750 > v5 || *(addr)->field_750 > v23)))
        {
            if (v17)
            {
                *((unsigned int *)ptr) = 6;
                v27 = *(addr)->field_750;
                v8 = ptr + 8;
                *((unsigned int *)&ptr[4]) = v27;
                ptr = v8 + v27;
                v4 = v25 + 8;
            }
            if (ptr && ptr >= ptr5 && !((v28 = (unsigned long)(unsigned long long)*(addr)->field_744, ptr + (unsigned long long)*(addr)->field_744 > v5 || *(addr)->field_744 > v23)))
            {
                if (v11)
                {
                    *((unsigned int *)&v4) = (unsigned int)v4 + 8;
                    *((unsigned int *)ptr) = 3;
                    v29 = *(addr)->field_744;
                    v30 = ptr + 8;
                    *((unsigned int *)&ptr[4]) = v29;
                    ptr = v30 + v29;
                    v6 = v30;
                }
                i = 160;
                do
                {
                    while (true)
                    {
                        p = sub_100107ef0(addr);
                        v7 = p;
                        if (!p || !((v32 = *(addr), p >= v32 && p + 24 <= v32 + v32->field_98)))
                            break;
                        index = p->field_0;
                        v18 = (&v10)[index];
                        if (!v18)
                        {
                            if (g_100153eb8 != v33 && (g_100153eb8->field_1c & 2))
                                sub_100036510(g_100153eb8->field_10, v18 + 17, v34, p->field_4); /* do not return */
                        }
                        else
                        {
                            v35 = p->field_0;
                            if (v35)
                            {
                                v36 = v35 - 3;
                                if (v35 != 3)
                                {
                                    if (v36 != 2)
                                    {
                                        if (v36 == 3)
                                        {
                                            v37 = v8;
                                            if (v37 && v37 >= ptr5 && (v38 = (unsigned long)(unsigned long long)v17, v37 + v38 <= v5 && (unsigned int)v38 <= v23))
                                            {
                                                v39 = sub_1001076fc(addr, p, v37, v38 & 4294967295);
                                                v8 = v37 + 16;
                                            }
                                            else
                                            {
                                                if (g_100153eb8 != v33)
                                                {
                                                    if ((g_100153eb8->field_1c & 1))
                                                        sub_100034784(g_100153eb8->field_10); /* do not return */
                                                    sub_10011bdb8(ptr5); /* do not return */
                                                }
                                                else
                                                {
                                                    sub_10011bdb8(ptr5); /* do not return */
                                                }
                                            }
                                        }
                                        else
                                        {
                                            v41 = g_100153eb8;
                                            if (g_100153eb8 == v33)
                                                sub_10011bdb8(ptr5); /* do not return */
                                            if ((g_100153eb8->field_1c & 1))
                                                sub_100036510(v41->field_10); /* do not return */
                                            sub_10011bdb8(ptr5); /* do not return */
                                        }
                                    }
                                    else
                                    {
                                        if (ptr && ptr >= ptr5 && (v42 = (unsigned long)(unsigned long long)v12, ptr + v42 <= v5 && (unsigned int)v42 <= v23))
                                        {
                                            v43 = sub_100107998(addr, p, ptr, v42) & 4294967295;
                                            goto LABEL_10010718c;
                                        }
                                        else
                                        {
                                            if (g_100153eb8 != v33)
                                            {
                                                if ((g_100153eb8->field_1c & 1))
                                                    sub_100034784(g_100153eb8->field_10); /* do not return */
                                                sub_10011bdb8(ptr5); /* do not return */
                                            }
                                            else
                                            {
                                                sub_10011bdb8(ptr5); /* do not return */
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    if (v6 && v6 >= ptr5 && v11 + v6 <= v5 && v11 <= v23)
                                    {
                                        v43 = sub_1001077e4(addr, p, v6, v11) & 4294967295;
                                        v6 += v43;
                                        goto LABEL_10010718c;
                                    }
                                    else
                                    {
                                        if (g_100153eb8 != v33)
                                        {
                                            if ((g_100153eb8->field_1c & 1))
                                                sub_100034784(g_100153eb8->field_10); /* do not return */
                                            sub_10011bdb8(ptr5); /* do not return */
                                        }
                                        else
                                        {
                                            sub_10011bdb8(ptr5); /* do not return */
                                        }
                                    }
                                }
                            }
                            else
                            {
                                v44 = v9;
                                if (v44 && v44 >= ptr5 && (v45 = (unsigned long)(unsigned long long)v10, v44 + v45 <= v5 && (unsigned int)v45 <= v23))
                                {
                                    v39 = sub_1001075c8(addr, p, v44, v45 & 4294967295);
                                    v9 = v44 + 12;
                                }
                                else
                                {
                                    if (g_100153eb8 != v33)
                                    {
                                        if ((g_100153eb8->field_1c & 1))
                                            sub_100034784(g_100153eb8->field_10); /* do not return */
                                        sub_10011bdb8(ptr5); /* do not return */
                                    }
                                    else
                                    {
                                        sub_10011bdb8(ptr5); /* do not return */
                                    }
                                }
                            }
                            v43 = v39;
LABEL_10010718c:
                            if ((unsigned int)v43)
                            {
                                v4 = (unsigned int)v4 + (unsigned int)v43;
                                (&v10)[index] = v18 - v43;
                                v17 = v13;
                                sub_1001071c3(index);
                                return;
                            }
                            if (g_100153eb8 != v33)
                            {
                                if ((g_100153eb8->field_1c & 1))
                                    sub_100036510(g_100153eb8->field_10); /* do not return */
                                sub_10011bdb8(ptr5); /* do not return */
                            }
                            else
                            {
                                sub_10011bdb8(ptr5); /* do not return */
                            }
                        }
                    }
                    i += 8;
                } while (i < 1848);
                if ((unsigned int)v4 == v23)
                {
                    ptr4 = ptr5 + 20;
                    j = 16;
                    v48 = 0;
                    do
                    {
                        v48 = v48 * 101 + *((char *)ptr4);
                        ptr4 += 1;
                        j -= 1;
                    } while (j != 1);
                    k = v23 - 120;
                    if (k > 0)
                    {
                        cur = ptr5 + 120;
                        do
                        {
                            k -= 1;
                            v48 = v48 * 101 + *((char *)cur);
                            cur += 1;
                        } while (k > 0);
                    }
                    *((unsigned int *)&ptr5[12]) = v48;
                    if (g_100153eb8 != v33 && (g_100153eb8->field_1c & 4))
                    {
                        *((unsigned int *)&v1) = v23;
                        sub_10003b678(g_100153eb8->field_10, 24, v53, v16, v1); /* do not return */
                    }
                    sub_1000f53a4(1);
                    flag = 0;
                    v2 = 128;
                    4297065144();
                }
                else
                {
                    if (g_100153eb8 != v33)
                    {
                        if ((g_100153eb8->field_1c & 1))
                        {
                            *((unsigned int *)&v1) = v4;
                            sub_10003be4c(g_100153eb8->field_10, 29, v54, v23, v1); /* do not return */
                        }
                        sub_10011bdb8(ptr5); /* do not return */
                    }
                }
            }
            else
            {
                if (g_100153eb8 != v33)
                {
                    if ((g_100153eb8->field_1c & 1))
                        sub_100034784(g_100153eb8->field_10); /* do not return */
                }
                else
                {
                    sub_10011bdb8(ptr5); /* do not return */
                }
            }
        }
        else
        {
            if (g_100153eb8 != v33)
            {
                if ((g_100153eb8->field_1c & 1))
                    sub_100034784(g_100153eb8->field_10); /* do not return */
            }
            else
            {
                sub_10011bdb8(ptr5); /* do not return */
            }
        }
    }
    else if (g_100153eb8 != v33 && (g_100153eb8->field_1c & 1))
    {
        sub_100034784(g_100153eb8->field_10); /* do not return */
    }
    sub_10011bdb8(ptr5); /* do not return */
}
