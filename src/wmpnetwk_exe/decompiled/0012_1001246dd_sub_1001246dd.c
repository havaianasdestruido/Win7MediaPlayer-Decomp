/* sub_1001246dd @ 0x1001246dd
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1001246dd  (1752 bytes, 110 basic blocks)
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
    long long field_0;
    unsigned int field_8;
} struct_0;

extern long long g_1000225e4;

int sub_1001246dd(void)
{
    long long v29;  // rax
    long long v30;  // r12
    long long v39;  // rdi
    unsigned long long *ptr4;  // rax
    unsigned long long i;  // rcx
    unsigned int v43;  // r13d
    struct_0 *cur;  // rbp
    unsigned long v45;  // r15
    unsigned long j;  // r15
    long long v47;  // rcx
    unsigned int m;  // r8d
    unsigned long v31;  // r13
    unsigned long v49;  // r15
    long long v50;  // rbx
    unsigned long long v51;  // r13
    unsigned long long v52;  // r15
    unsigned long long k;  // rdx
    int i0;  // r10d
    unsigned int v55;  // r9d
    int v56;  // r11d
    void* iter;  // r8
    void* ptr5;  // rcx
    unsigned long long v32;  // r8
    long long v59;  // rbx
    unsigned long long v60;  // r9
    unsigned long long ptr6;  // rsi
    unsigned long long v62;  // r13
    unsigned long long l;  // rbp
    unsigned long long v64;  // r14
    unsigned long long v65;  // r15
    unsigned long v66;  // rcx
    unsigned long v33;  // rsi
    unsigned long long v67;  // rdx
    unsigned int v68;  // esi
    unsigned long long v69;  // r15
    unsigned long long v70;  // rbp
    void* node;  // rsi
    void* ptr3;  // r13
    unsigned long long v73;  // r14
    unsigned long long i1;  // r14
    unsigned long v75;  // rcx
    unsigned long v76;  // rdx
    unsigned long long v34;  // rcx
    unsigned long long v77;  // r9
    unsigned long index;  // r8
    unsigned long long v79;  // r14
    unsigned long v80;  // r14
    void* v81;  // rsi
    unsigned long v82;  // rbp
    unsigned long v83;  // rbp
    unsigned long v84;  // rbp
    unsigned int v85;  // eax
    unsigned long n;  // rsi
    unsigned long long v35;  // rdx
    void* v87;  // rbp
    unsigned long v36;  // r15
    unsigned long long v37;  // rcx
    unsigned long v38;  // rdx
    long long v1;  // [bp+0x30]
    long long v2;  // [bp+0x38], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp+0x40]
    unsigned long v4;  // [bp+0x48]
    unsigned int v5;  // [bp+0x50]
    unsigned int v6;  // [bp+0x54]
    unsigned long long choice;  // [bp+0x58]
    unsigned int v8;  // [bp+0x60]
    long long v9;  // [bp+0x68]
    char v10;  // [bp+0x70]
    long long v12;  // [bp+0x170]
    unsigned long long v13;  // [bp+0x580]
    long long v14;  // [bp+0x800]
    long long v15;  // [bp+0x808]
    long long v16;  // [bp+0x810]
    unsigned long long v17;  // [bp+0x818]
    unsigned long long v18;  // [bp+0x820]
    unsigned long long v19;  // [bp+0x828]
    unsigned long long flag;  // [bp+0x830]
    unsigned long long v21;  // [bp+0x838]
    unsigned long long v22;  // [bp+0x840]
    unsigned long long v23;  // [bp+0x8a8]
    unsigned long long v24;  // [bp+0x8b0]
    unsigned long p;  // [bp+0x8b8]
    unsigned long v26;  // [bp+0x8c0]
    unsigned long long ptr;  // [bp+0x8d0]
    int v28;  // [bp+0x100030]

    v30 = v29;
    v2 = v29;
    if (v29)
    {
        v32 = v29 + v31 * 4;
        v34 = v33 * 80;
        v35 = v33 * 8;
        ptr = v33 * 320 + v32;
        v3 = v35;
        v18 = ptr + v33 * v36 * 8;
        flag = 0;
        v19 = v18 + v34;
        v21 = v34 + v19;
        v37 = v33 * 5;
        v22 = v35 + v21;
        v14 = v35 + v22;
        v38 = (int)v26;
        v15 = v14 + v37 * 4;
        v8 = v38;
        v17 = v15 + v37 * 4;
        v9 = v39;
        v5 = 1;
        v6 = 2 <= v28;
        v16 = v30;
        choice = 0;
        ptr4 = &v13;
        i = 20;
        do
        {
            *(ptr4) = v32;
            v32 += v33 * 16;
            ptr4 += 4;
            i -= 1;
        } while (i != 1);
        v4 = v38;
        if ((unsigned int)v38 >= 0)
        {
            v43 = 0;
            cur = &v12;
            v45 = v38 + 1;
            do
            {
                j = v45;
                cur->field_8 = 0;
                v47 = ptr + v33 * v43 * 4;
                cur->field_0 = v47;
                if (v5)
                    sub_100121cb0(v47, v39, v50); /* do not return */
                m = 0;
                v43 += 2;
                cur = (char *)&cur[1].field_0 + 4;
                v49 = j - 1;
                v5 = 0;
                v45 = v49;
            } while (j != 1);
            v30 = v2;
        }
        else
        {
            m = v5;
        }
        v51 = v23;
        v52 = 0;
        k = 0;
        ptr = 0;
        v2 = v51 - 3;
        if (v2)
        {
            do
            {
                if (!m)
                    goto LABEL_100124934;
                i0 = 1;
                v55 = 1 << ((char)((unsigned int)((v51 & 4294967295) - k) - 3) & 31);
                v56 = v55 - ((unsigned int)k & 1);
                if (v56 >= 1)
                {
                    iter = &(&v10)[4 + 8 * v52];
                    v52 += v56;
                    ptr = v52;
                    ptr5 = &v12 + 3;
                    do
                    {
                        *((int *)iter) = i0;
                        *((unsigned int *)&iter[4]) = v55 * 3;
                        *((unsigned int *)&(&v12)[1 + 6 * v55]) = (int)(&v12)[1 + 6 * v55] + 1;
                        *((unsigned int *)ptr5) = *((int *)ptr5) + 1;
                        i0 += 1;
                        iter += 8;
                        ptr5 += 16;
                    } while (i0 <= v56);
                    m = v5;
                }
                k += 1;
            } while (k != v2);
            goto LABEL_100124934;
        }
        if (m && v52 > 32)
        {
            v5 = 0;
            sub_1001259d8(4, &g_1000225e4, v59);
            m = v5;
        }
LABEL_100124934:
        ptr6 = 0;
        v62 = -(v23);
        for (l = 0; (l < v64 || (unsigned int)ptr6) && m; l += 1)
        {
            if (l < v64)
                ptr6 += (*((int *)(p + (l >> 5) * 4)) >> ((char)l & 31) & 1) << ((char)((l & 4294967295) - v62) & 31);
            v65 = v62 + v60;
            if (l >= v65)
            {
                v66 = (unsigned int)v26;
                v67 = ((unsigned int)ptr6 + (unsigned int)v66 & (unsigned int)(v66 * 4 - 1)) - v66;
                if ((unsigned int)v67 > (unsigned int)v66)
                    v67 += -((unsigned int)v66) * 2;
                ptr6 -= v67;
                if ((unsigned int)v67)
                {
                    sub_100122f94(v14);
                    m = v5;
                    v60 = v23;
                }
                if ((unsigned int)ptr6 < 0 || (unsigned int)ptr6 != (unsigned int)ptr6 >> ((char)(v60 & 4294967295) & 31) << ((char)(v60 & 4294967295) & 31))
                {
                    v5 = 0;
                    sub_1001259d8(4, &g_1000225e4, v59);
                    m = v5;
                    v60 = v23;
                }
                if (v65 <= v24 * v60)
                {
                    v62 = v65;
                    ptr6 = (unsigned int)ptr6 >> ((char)(v60 & 4294967295) & 31);
                    if (m)
                        sub_100123414(v1, v14, v39, v30, v59); /* do not return */
                    m = 0;
                    v60 = v23;
                    v5 = 0;
                    v1 += v3;
                }
            }
            if (l >= v62 + v60)
            {
                if (((char)~((unsigned int)ptr6) & 1) && m && (l < v64 - 1 || (unsigned int)ptr6 > (unsigned int)v26))
                    sub_1001234e4(v14, v14, v39, v30, v59); /* do not return */
                v60 = v23;
            }
            if (l < v62 || l > v62 + v60)
            {
                v5 = 0;
                sub_1001259d8(5, &g_1000225e4, v59);
                m = v5;
                v60 = v23;
            }
        }
        v68 = 1;
        if (m)
        {
            v69 = ptr;
            do
            {
                if (!v68)
                    break;
                v70 = 0;
                if (v69)
                {
                    node = &v10 + 4;
                    ptr3 = &v10 + 4;
                    v73 = v69;
                    do
                    {
                        i1 = v73;
                        v75 = (int)ptr3[4];
                        v76 = *((int *)ptr3);
                        v77 = v76 + v75;
                        if (!(int)(&v12)[1 + 2 * v77] && !((index = (unsigned long)(long long)(int)(unsigned int)((v75 & 4294967295) - v76), (int)(&v12)[1 + 2 * index])))
                        {
                            v26 = (&v12)[2 * index];
                            sub_100123b5c((&v12)[2 * v77], (&v12)[2 * index], v75 & 4294967295, v76 & 4294967295, &v5, v59);
                            if (v5)
                                sub_100121cb0((&v12)[2 * v77], v39, v59); /* do not return */
                            m = 0;
                            v5 = 0;
                        }
                        else
                        {
                            *((unsigned int *)&node[4]) = v75;
                            *((unsigned int *)node) = v76;
                            m = v5;
                            v70 += 1;
                            node += 8;
                        }
                        ptr3 += 8;
                        v79 = i1 - 1;
                        v73 = v79;
                    } while (i1 != 1);
                    v69 = ptr;
                }
                ptr = v70;
                v68 = v70 != v69;
                v69 = v70;
                if (!v68 && choice > 0)
                {
                    v68 = 1;
                    sub_1001226bc(&v5, v59);
                    m = v5;
                }
            } while (m);
        }
        v80 = v4;
        if (v80 >= 1)
        {
            v81 = &v12 + 3;
            v82 = v80;
            do
            {
                v83 = v82;
                if (*((int *)v81) && m)
                {
                    v5 = 0;
                    sub_1001259d8(4, &g_1000225e4, v59);
                    m = v5;
                }
            } while ((v81 += 16, v84 = (unsigned long)(v83 - 1), v82 = (unsigned long)(v83 - 1), v83 != 1));
        }
        if (m && sub_1001230ac(v15, v39, v30, v59))
            v85 = 1;
        else
            v85 = 0;
        v5 = v85;
        if (v85)
            sub_1001234e4(v15, v15, v39, v30, v59); /* do not return */
        v5 = 0;
        n = 1;
        v5 = 0;
        if (1 <= v80)
        {
            v87 = &v12 + 3;
            do
            {
                if (!v5)
                    break;
                if (*((int *)v87))
                {
                    v5 = 0;
                    sub_1001259d8(5, &g_1000225e4, v59);
                }
                if (n > 4)
                    sub_1001218e8((long long)v87[8], v39, v59); /* do not return */
                n += 1;
                v87 += 16;
            } while (n <= v80);
        }
    }
    if (!v30)
        goto LABEL_0x100124fbf;
    sub_10012185c(v30, 0, v59);
}
