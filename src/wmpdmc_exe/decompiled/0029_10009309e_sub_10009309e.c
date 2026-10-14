/* sub_10009309e @ 0x10009309e
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10009309e  (987 bytes, 75 basic blocks)
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

int sub_10009309e(void)
{
    unsigned int *v17;  // r11
    unsigned int *v18;  // rbx
    unsigned int v27;  // r15d
    unsigned long i;  // r11
    unsigned long long v29;  // r9
    unsigned long long v30;  // r9
    unsigned long long v31;  // rax
    unsigned long v33;  // rdi
    unsigned int v34;  // r9d
    unsigned int flag4;  // r13d
    unsigned int *cur;  // r8
    unsigned int addr[2];  // rax
    unsigned long long v37;  // cc_ndep
    unsigned long long v38;  // cc_ndep
    unsigned long long v39;  // cc_ndep
    unsigned int l;  // ebx
    unsigned long long v41;  // cc_op
    unsigned long v42;  // cc_dep1
    unsigned long long v43;  // cc_dep2
    unsigned int *node;  // r15
    long long v45;  // rax
    unsigned int v46;  // eax
    unsigned long v20;  // r8
    unsigned int v47;  // cc_dep1
    unsigned long v48;  // rcx
    unsigned long v49;  // r11
    unsigned long long v50;  // 4197
    unsigned long long v51;  // cc_ndep
    unsigned int *iter;  // rbx
    unsigned long long v53;  // cc_ndep
    unsigned int v54;  // r9d
    unsigned int v55;  // r8d
    unsigned int v21;  // r10d
    unsigned long j;  // rcx
    unsigned int v57;  // cc_dep1
    unsigned long v58;  // rcx
    unsigned int v59;  // r10d
    unsigned int v60;  // edi
    unsigned int m;  // r15d
    unsigned int v62;  // eax
    unsigned int flag2;  // r11d
    unsigned int *v64;  // rbx
    unsigned int v65;  // r15d
    unsigned int v22;  // r14d
    unsigned int *ptr7;  // rbx
    unsigned int v67;  // cc_dep1
    unsigned int v68;  // cc_dep2
    unsigned int v73;  // eax
    unsigned long long v74;  // 4124
    unsigned int v75;  // r9d
    unsigned int v23;  // eax
    unsigned int v76;  // r8d
    unsigned long v77;  // rcx
    unsigned int *v78;  // rax
    unsigned long k;  // rcx
    unsigned int *ptr;  // rax
    unsigned int v81;  // cc_dep1
    unsigned long v83;  // rcx
    unsigned int v84;  // r10d
    unsigned int v85;  // ebx
    unsigned long v24;  // rcx
    unsigned int n;  // r15d
    unsigned int v87;  // eax
    unsigned int flag3;  // r11d
    unsigned int *v89;  // r13
    unsigned int *ptr8;  // r13
    unsigned int v91;  // r15d
    unsigned int v92;  // cc_dep1
    unsigned int v93;  // cc_dep2
    unsigned long v25;  // r10
    unsigned int v98;  // eax
    unsigned long long v99;  // 4124
    unsigned int *p;  // r12
    unsigned int v102;  // ecx
    unsigned int v103;  // esi
    unsigned int v104;  // eax
    unsigned int ptr5[2];  // r8
    unsigned int v1;  // [bp+0x34]
    unsigned int *v2;  // [bp+0x38]
    unsigned int *v3;  // [bp+0x40]
    unsigned int v4;  // [bp+0x4c]
    unsigned int v5;  // [bp+0x50]
    unsigned int v6;  // [bp+0x54]
    long long v7;  // [bp+0x58]
    unsigned long long v8;  // [bp+0x60]
    unsigned int *v9;  // [bp+0x68]
    unsigned long long v10;  // [bp+0x70]
    char v11;  // [bp+0x80]
    unsigned int v12[2];  // [bp+0x88]
    unsigned long long *ptr9;  // [bp+0xe8]
    long long v14;  // [bp+0xf0], Other Possible Types: unsigned int, unsigned long
    unsigned int v15;  // [bp+0xf8]
    long long v16;  // [bp+0x108]

    v17 = v3;
    if (v17)
    {
        if (v18 && addr)
        {
            v20 = v15;
            v21 = 0;
            v4 = 0;
            v23 = (v20 & 4294967295) / v22;
            v24 = v23;
            addr[0] = v23;
            if (v22 > 1)
            {
                v25 = v20;
                ptr5 = &addr[1];
                i = v27;
                v29 = v25 * 2;
                do
                {
                    v30 = v29 + v25;
                    v31 = v29 / v22 - v24;
                    ptr5[0] = v31;
                    ptr5 = &ptr5[1];
                    v24 += v31;
                    i -= 1;
                    v29 = v30;
                } while (i != 1);
                v21 = v4;
                v17 = v3;
            }
            v33 = v1;
            v34 = 0;
            v5 = 0;
            v1 = (v33 & 4294967295) / flag4;
            *((unsigned int *)&v8) = v1;
            if (flag4)
            {
                cur = v18;
                v9 = v18;
                v38 = v37;
                while (true)
                {
                    v39 = v38;
                    l = 0;
                    v10 = 0;
                    v41 = 19;
                    v42 = v22;
                    v43 = 0;
                    if (v22)
                    {
                        node = v17;
                        v12 = addr - v17;
                        do
                        {
                            if (v21 == v6)
                            {
                                if (flag4 == 1 && l < v22)
                                    4295809746();
                                iter = v2;
                                goto LABEL_100093282;
                            }
                            v45 = sub_10007c210(vvar_525{r56|8b}, v14, v21, v7);
                            sub_10005ae94(v45, &v11, *((int *)(v12 + node)), (unsigned int)v8, v16);
                            if (*(node) < v11)
                                *(node) = v11;
                            cur = v9;
                            v46 = *((unsigned int *)((void*)&v11 + 4));
                            v47 = *(cur);
                            if (*(cur) < v46)
                                *(cur) = v46;
                            l += 1;
                            v21 = v4 + 1;
                            v39 = v47 < v46;
                            node += 1;
                            v4 = v21;
                            v10 += 1;
                            v41 = 7;
                            v42 = l;
                            v43 = v22;
                        } while (l < v22);
                        v34 = v5;
                    }
                    v48 = v1;
                    v50 = _ccall(v41, v42, v43, v39);
                    v51 = v50;
                    v34 += 1;
                    cur += 1;
                    v5 = v34;
                    v9 = cur;
                    v8 = v33 * (v34 + 2) / flag4 - v48;
                    v1 = (unsigned int)v48 + (unsigned int)v8;
                    if (v34 < flag4)
                    {
                        v17 = v3;
                        v38 = v51;
                    }
                    else
                    {
                        iter = v2;
                        v53 = v51;
                        goto LABEL_100093285;
                    }
                }
                goto LABEL_100093285;
            }
LABEL_100093282:
            v49 = flag4;
            v53 = v37;
LABEL_100093285:
            v54 = 0;
            v55 = 0;
            if (flag4)
            {
                do
                {
                    j = v49;
                    v57 = v55;
                    if (v55 < *(iter))
                    {
                        v55 = *(iter);
                        v54 = 1;
                    }
                    else
                    {
                        if (v57 == *(iter))
                        {
                            v53 = v57 < *(iter);
                            v54 += 1;
                        }
                    }
                    iter += 1;
                    v58 = j - 1;
                    v49 = v58;
                } while (j != 1);
            }
            v59 = flag4 * v55;
            v60 = flag4 * (v55 - 1) + v54;
            if (v60 < v59)
            {
                do
                {
                    m = 0;
                    v62 = v60 / flag4;
                    flag2 = v54;
                    v14 = v62;
                    if (!flag4)
                        continue;
                    v64 = v2;
                    do
                    {
                        v65 = m;
                        ptr7 = v64;
                        v67 = *(ptr7);
                        v68 = v55;
                        if (*(ptr7) == v68)
                        {
                            if (v62 < v55)
                                break;
                            v67 = flag2;
                            flag2 -= 1;
                            v68 = 1;
                            if (flag2 == 1)
                                goto LABEL_100093341;
                        }
                        v53 = v67 < v68;
                        v73 = v60 * (v65 + 2) / flag4;
                        v62 = v73 - v14;
                        v14 = v73;
                        v64 = ptr7 + 1;
                        m = v65 + 1;
                    } while (m < flag4);
                } while (flag2 && (v74 = (unsigned long long)_ccall(19, (unsigned long long)flag2, 0, v53), v53 = v74, v60 += 1, v60 < v59));
LABEL_100093341:
            }
            v75 = 0;
            v76 = 0;
            if (v22)
            {
                v77 = v22;
                v78 = v3;
                do
                {
                    k = v77;
                    ptr = v78;
                    v81 = v76;
                    if (v76 < *(ptr))
                    {
                        v76 = *(ptr);
                        v75 = 1;
                    }
                    else
                    {
                        if (v81 == *(ptr))
                        {
                            v53 = v81 < *(ptr);
                            v75 += 1;
                        }
                    }
                    v83 = k - 1;
                    v78 = ptr + 1;
                    v77 = v83;
                } while (k != 1);
            }
            v84 = v22 * v76;
            v85 = v22 * (v76 - 1) + v75;
            if (v85 < v84)
            {
                do
                {
                    n = 0;
                    v87 = v85 / v22;
                    flag3 = v75;
                    v14 = v87;
                    if (!v22)
                        continue;
                    v89 = v3;
                    do
                    {
                        ptr8 = v89;
                        v91 = n;
                        v92 = *(ptr8);
                        v93 = v76;
                        if (*(ptr8) == v93)
                        {
                            if (v87 < v76)
                                break;
                            v92 = flag3;
                            flag3 -= 1;
                            v93 = 1;
                            if (flag3 == 1)
                                goto LABEL_1000933fe;
                        }
                        v53 = v92 < v93;
                        v98 = v85 * (v91 + 2) / v22;
                        v87 = v98 - v14;
                        v14 = v98;
                        n = v91 + 1;
                        v89 = ptr8 + 1;
                    } while (n < v22);
                } while (flag3 && (v99 = (unsigned long long)_ccall(19, (unsigned long long)flag3, 0, v53), v53 = v99, v85 += 1, v85 < v84));
LABEL_1000933fe:
            }
            4297065496();
        }
        4297065496();
    }
    else if (iter)
    {
        4297065496();
    }
    else if (addr)
    {
        4297065496();
    }
    else
    {
        v102 = *(p);
        if ((v102 & v103) != v103)
        {
            v104 = (v102 & v103) - 1 ^ ~(v102) & 127;
            *(p) = v104;
            if (!(v104 & v103))
                sub_100059224(p); /* do not return */
        }
        *((unsigned int *)&v14) = 0;
        *((unsigned int *)((char *)&v14 + 4)) = 0;
        *(ptr9) = v14;
    }
}
