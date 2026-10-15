/* sub_7ff3b16c43d @ 0x7ff3b16c43d
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b16c43d  (1752 bytes, 110 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962
 *   Evidence: analysis/report/rea-evidence/wmpnssci_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    long long field_0;
    unsigned int field_8;
} struct_0;

extern long long g_7ff3b131a90;

long long sub_7ff3b16c43d(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, long long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long choice, unsigned long a11, unsigned long a12, int a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, unsigned long a28, unsigned long a29, unsigned long a30, unsigned long a31, unsigned long a32, unsigned long a33, unsigned long a34, unsigned long a35, unsigned long a36, unsigned long a37, unsigned long a38, unsigned long a39, unsigned long a40, unsigned long a41, unsigned long a42, unsigned long a43, unsigned long a44, int a45, unsigned long a46, unsigned long a47, unsigned int a48)
{
    long long v18;  // rax
    long long v19;  // r12
    long long v28;  // rdi
    unsigned long long *ptr4;  // rax
    unsigned long long i;  // rcx
    unsigned int v32;  // r13d
    struct_0 *cur;  // rbp
    unsigned long v34;  // r15
    unsigned long j;  // r15
    long long v36;  // rcx
    unsigned int m;  // r8d
    unsigned long v20;  // r13
    unsigned long v38;  // r15
    long long v39;  // rbx
    unsigned long long v40;  // r13
    unsigned long long v41;  // r15
    unsigned long long k;  // rdx
    int i0;  // r10d
    unsigned int v44;  // r9d
    int v45;  // r11d
    void* iter;  // r8
    unsigned int *ptr5;  // rcx
    unsigned long long v21;  // r8
    long long v48;  // rbx
    unsigned long long v49;  // r9
    unsigned long long ptr6;  // rsi
    unsigned long long v51;  // r13
    unsigned long long l;  // rbp
    unsigned long long v53;  // r14
    unsigned long long v54;  // r15
    unsigned long v55;  // rcx
    unsigned long v22;  // rsi
    unsigned long long v56;  // rdx
    unsigned int v57;  // esi
    unsigned long long v58;  // r15
    unsigned long long v59;  // rbp
    void* node;  // rsi
    void* ptr3;  // r13
    unsigned long long v62;  // r14
    unsigned long long i1;  // r14
    unsigned long v64;  // rcx
    unsigned long v65;  // rdx
    unsigned long long v23;  // rcx
    unsigned long long v66;  // r9
    unsigned long index;  // r8
    unsigned long long v68;  // r14
    unsigned long v69;  // r14
    unsigned int *v70;  // rsi
    unsigned long v71;  // rbp
    unsigned long v72;  // rbp
    unsigned long v73;  // rbp
    unsigned int v74;  // eax
    unsigned long n;  // rsi
    unsigned long long v24;  // rdx
    void* v76;  // rbp
    unsigned long v25;  // r15
    unsigned long long v26;  // rcx
    unsigned long v27;  // rdx
    unsigned int v1;  // [bp+0x54]
    unsigned long long v2;  // [bp+0x580]
    long long v3;  // [bp+0x800]
    long long v4;  // [bp+0x808]
    long long v5;  // [bp+0x810]
    unsigned long long v6;  // [bp+0x818]
    unsigned long long v7;  // [bp+0x820]
    unsigned long long v8;  // [bp+0x828]
    unsigned long long flag;  // [bp+0x830]
    unsigned long long v10;  // [bp+0x838]
    unsigned long long v11;  // [bp+0x840]
    unsigned long long v12;  // [bp+0x8a8]
    unsigned long long v13;  // [bp+0x8b0]
    unsigned long p;  // [bp+0x8b8]
    unsigned long v15;  // [bp+0x8c0]
    unsigned long long ptr;  // [bp+0x8d0]
    int v17;  // [bp+0x100030]

    v19 = v18;
    a6 = v18;
    if (v18)
    {
        v21 = v18 + v20 * 4;
        v23 = v22 * 80;
        v24 = v22 * 8;
        ptr = v22 * 320 + v21;
        a7 = v24;
        v7 = ptr + v22 * v25 * 8;
        flag = 0;
        v8 = v7 + v23;
        v10 = v23 + v8;
        v26 = v22 * 5;
        v11 = v24 + v10;
        v3 = v24 + v11;
        v27 = (int)v15;
        v4 = v3 + v26 * 4;
        a11 = v27;
        v6 = v4 + v26 * 4;
        a12 = v28;
        a9 = 1;
        v1 = 2 <= v17;
        v5 = v19;
        choice = 0;
        ptr4 = &v2;
        i = 20;
        do
        {
            *(ptr4) = v21;
            v21 += v22 * 16;
            ptr4 += 4;
            i -= 1;
        } while (i != 1);
        a8 = v27;
        if ((unsigned int)v27 >= 0)
        {
            v32 = 0;
            cur = &vvar_45;
            v34 = v27 + 1;
            do
            {
                j = v34;
                cur->field_8 = 0;
                v36 = ptr + v22 * v32 * 4;
                cur->field_0 = v36;
                if (a9)
                    sub_7ff3b169a10(v36, v28, v39); /* do not return */
                m = 0;
                v32 += 2;
                cur = (char *)&cur[1].field_0 + 4;
                v38 = j - 1;
                a9 = 0;
                v34 = v38;
            } while (j != 1);
            v19 = a6;
        }
        else
        {
            m = a9;
        }
        v40 = v12;
        v41 = 0;
        k = 0;
        ptr = 0;
        a6 = v40 - 3;
        if (a6)
        {
            do
            {
                if (!m)
                    goto LABEL_7ff3b16c694;
                i0 = 1;
                v44 = 1 << ((char)((unsigned int)((v40 & 4294967295) - k) - 3) & 31);
                v45 = v44 - ((unsigned int)k & 1);
                if (v45 >= 1)
                {
                    iter = (char *)&(&vvar_13)[2 * v41] + 1;
                    v41 += v45;
                    ptr = v41;
                    ptr5 = &vvar_48;
                    do
                    {
                        *((int *)iter) = i0;
                        *((unsigned int *)&iter[4]) = v44 * 3;
                        (&vvar_46)[12 * v44] = (&vvar_46)[12 * v44] + 1;
                        *(ptr5) = *(ptr5) + 1;
                        i0 += 1;
                        iter += 8;
                        ptr5 += 4;
                    } while (i0 <= v45);
                    m = a9;
                }
                k += 1;
            } while (k != a6);
            goto LABEL_7ff3b16c694;
        }
        if (m && v41 > 32)
        {
            a9 = 0;
            sub_7ff3b16d738(4, &g_7ff3b131a90, v48);
            m = a9;
        }
LABEL_7ff3b16c694:
        ptr6 = 0;
        v51 = -(v12);
        for (l = 0; (l < v53 || (unsigned int)ptr6) && m; l += 1)
        {
            if (l < v53)
                ptr6 += (*((int *)(p + (l >> 5) * 4)) >> ((char)l & 31) & 1) << ((char)((l & 4294967295) - v51) & 31);
            v54 = v51 + v49;
            if (l >= v54)
            {
                v55 = (unsigned int)v15;
                v56 = ((unsigned int)ptr6 + (unsigned int)v55 & (unsigned int)(v55 * 4 - 1)) - v55;
                if ((unsigned int)v56 > (unsigned int)v55)
                    v56 += -((unsigned int)v55) * 2;
                ptr6 -= v56;
                if ((unsigned int)v56)
                {
                    sub_7ff3b16acf4(v3);
                    m = a9;
                    v49 = v12;
                }
                if ((unsigned int)ptr6 < 0 || (unsigned int)ptr6 != (unsigned int)ptr6 >> ((char)(v49 & 4294967295) & 31) << ((char)(v49 & 4294967295) & 31))
                {
                    a9 = 0;
                    sub_7ff3b16d738(4, &g_7ff3b131a90, v48);
                    m = a9;
                    v49 = v12;
                }
                if (v54 <= v13 * v49)
                {
                    v51 = v54;
                    ptr6 = (unsigned int)ptr6 >> ((char)(v49 & 4294967295) & 31);
                    if (m)
                        sub_7ff3b16b174(a5, v3, v28, v19, v48); /* do not return */
                    m = 0;
                    v49 = v12;
                    a9 = 0;
                    a5 += a7;
                }
            }
            if (l >= v51 + v49)
            {
                if (((char)~((unsigned int)ptr6) & 1) && m && (l < v53 - 1 || (unsigned int)ptr6 > (unsigned int)v15))
                    sub_7ff3b16b244(v3, v3, v28, v19, v48); /* do not return */
                v49 = v12;
            }
            if (l < v51 || l > v51 + v49)
            {
                a9 = 0;
                sub_7ff3b16d738(5, &g_7ff3b131a90, v48);
                m = a9;
                v49 = v12;
            }
        }
        v57 = 1;
        if (m)
        {
            v58 = ptr;
            do
            {
                if (!v57)
                    break;
                v59 = 0;
                if (v58)
                {
                    node = &vvar_13 + 1;
                    ptr3 = &vvar_13 + 1;
                    v62 = v58;
                    do
                    {
                        i1 = v62;
                        v64 = (int)ptr3[4];
                        v65 = *((int *)ptr3);
                        v66 = v65 + v64;
                        if (!(&vvar_46)[4 * v66] && !((index = (unsigned long)(long long)(int)(unsigned int)((v64 & 4294967295) - v65), (&vvar_46)[4 * index])))
                        {
                            v15 = *((long long *)&(&vvar_45)[4 * index]);
                            sub_7ff3b16b8bc(*((long long *)&(&vvar_45)[4 * v66]), *((long long *)&(&vvar_45)[4 * index]), v64 & 4294967295, v65 & 4294967295, &a9, v48);
                            if (a9)
                                sub_7ff3b169a10(*((long long *)&(&vvar_45)[4 * v66]), v28, v48); /* do not return */
                            m = 0;
                            a9 = 0;
                        }
                        else
                        {
                            *((unsigned int *)&node[4]) = v64;
                            *((unsigned int *)node) = v65;
                            m = a9;
                            v59 += 1;
                            node += 8;
                        }
                        ptr3 += 8;
                        v68 = i1 - 1;
                        v62 = v68;
                    } while (i1 != 1);
                    v58 = ptr;
                }
                ptr = v59;
                v57 = v59 != v58;
                v58 = v59;
                if (!v57 && choice > 0)
                {
                    v57 = 1;
                    sub_7ff3b16a41c(&a9, v48);
                    m = a9;
                }
            } while (m);
        }
        v69 = a8;
        if (v69 >= 1)
        {
            v70 = &vvar_48;
            v71 = v69;
            do
            {
                v72 = v71;
                if (*(v70) && m)
                {
                    a9 = 0;
                    sub_7ff3b16d738(4, &g_7ff3b131a90, v48);
                    m = a9;
                }
            } while ((v70 += 16, v73 = (unsigned long)(v72 - 1), v71 = (unsigned long)(v72 - 1), v72 != 1));
        }
        if (m && sub_7ff3b16ae0c(v4, v28, v19, v48))
            v74 = 1;
        else
            v74 = 0;
        a9 = v74;
        if (v74)
            sub_7ff3b16b244(v4, v4, v28, v19, v48); /* do not return */
        a9 = 0;
        n = 1;
        a9 = 0;
        if (1 <= v69)
        {
            v76 = &vvar_48;
            do
            {
                if (!a9)
                    break;
                if (*((int *)v76))
                {
                    a9 = 0;
                    sub_7ff3b16d738(5, &g_7ff3b131a90, v48);
                }
                if (n > 4)
                    sub_7ff3b169648((long long)v76[8], v28, v48); /* do not return */
                n += 1;
                v76 += 16;
            } while (n <= v69);
        }
    }
    if (!v19)
        goto LABEL_0x7ff3b16cd1f;
    sub_7ff3b1695bc(v19, 0, v48);
}
