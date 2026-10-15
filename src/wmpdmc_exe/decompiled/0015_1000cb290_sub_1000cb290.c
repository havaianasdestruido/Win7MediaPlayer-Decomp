/* sub_1000cb290 @ 0x1000cb290
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000cb290  (1235 bytes, 96 basic blocks)
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

long long sub_1000cb290(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, char a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned int a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned int a13, unsigned long a14, char a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned short a25)
{
    unsigned long long v8;  // rbx
    unsigned int v9;  // edx
    unsigned long long v18;  // cc_ndep
    unsigned int k;  // edi
    unsigned long long v20;  // r8
    unsigned int *iter;  // r8
    unsigned int v22;  // edi
    unsigned int v23;  // r11d
    unsigned int l;  // r8d
    char v25;  // 4108
    char v26;  // dil
    unsigned long long v27;  // cc_op
    char *node;  // rcx
    unsigned long v28;  // cc_dep1
    unsigned long v29;  // cc_dep2
    unsigned long idx;  // r10
    unsigned long v31;  // rdx
    unsigned int v32;  // r9d
    unsigned long v33;  // rcx
    char ptr4[2];  // rdi
    unsigned long long v35;  // rcx
    char v36;  // dil
    unsigned int v37;  // edx
    unsigned long pos;  // rax
    char ptr[2];  // rcx
    char v39;  // dil
    unsigned int v40;  // edx
    unsigned long index;  // rax
    unsigned short v42;  // ax
    unsigned int v43;  // edx
    char v44;  // dil
    unsigned long v45;  // 4125
    unsigned long long v46;  // 4122
    unsigned int cur;  // esi
    unsigned int i;  // edi
    unsigned long v48;  // r14
    char *v49;  // r12
    unsigned long v50;  // rdx
    unsigned short v51;  // di
    unsigned int v52;  // ecx
    unsigned short v53;  // di
    unsigned int v54;  // eax
    unsigned long n;  // r13
    unsigned int v56;  // edx
    unsigned long long v13;  // rdx
    unsigned int v57;  // r12d
    unsigned long v58;  // rdx
    unsigned short v59;  // di
    unsigned int v60;  // ecx
    unsigned short v61;  // di
    unsigned int v62;  // eax
    unsigned int v63;  // ecx
    char *v64;  // r15
    unsigned int v65;  // ecx
    unsigned long long v14;  // rdx
    unsigned int v15;  // edi
    unsigned int j;  // edi
    unsigned long long v17;  // r8
    char *v1;  // [bp+0x20]
    char v2;  // [bp+0x84]
    char v3;  // [bp+0xf0]
    char v4;  // [bp+0xf2]
    char v5;  // [bp+0x1b0]
    unsigned int v6;  // [bp+0x102ec8]
    unsigned int v7;  // [bp+0x102ed4]

    v9 = v8;
    node = &vvar_25;
    do
    {
        if (*(node) > 16)
            goto LABEL_1000cb47c;
    } while ((pos = (unsigned long)(unsigned long long)*(node), v9 += 1, node += 1, (&vvar_15)[pos] = (int)((&vvar_15)[pos] + 1), v9 < 20));
    i = 1;
    v13 = v8;
    do
    {
        v14 = v13 + 4;
        v15 = i + 1;
        *((int *)((char *)&vvar_502{r40|8b} + v14)) = (*((int *)&(&v2)[v13]) << ((char)(16 - i) & 31)) + *((int *)((char *)&vvar_5 + v14));
        v13 = v14;
        i = v15;
    } while (i <= 16);
    if (a13 == 0x10000)
    {
        j = 1;
        v17 = v8;
        do
        {
            *((int *)((char *)&vvar_502{r40|8b} + v17)) = *((int *)((char *)&vvar_502{r40|8b} + v17)) >> 8;
            v18 = 8 < j;
            k = j + 1;
            v20 = v17 + 4;
            *((unsigned int *)((char *)&vvar_15 + v20)) = 1 << ((char)(8 - j) & 31);
            j = k;
            v17 = v20;
        } while (j <= 8);
        if (k <= 16)
        {
            iter = &(&vvar_15)[k];
            do
            {
                v18 = 16 < k;
                v22 = k + 1;
                *(iter) = 1 << ((char)(16 - k) & 31);
                iter += 1;
                k = v22;
            } while (k <= 16);
        }
        if (a9 >> 8 != 0x10000)
            4295809746();
        v23 = 20;
        l = v8;
        do
        {
            v25 = *((char *)&vvar_25 + l);
            v26 = v25;
            v27 = 5;
            v28 = v25;
            v29 = (char)v8;
            if (v25 == (char)v8)
                continue;
            idx = v26;
            v31 = (&vvar_5)[idx];
            v32 = (unsigned int)v31 + (&vvar_15)[idx];
            if (v26 <= 8)
            {
                if (v32 > 0x100)
                    break;
                v27 = 7;
                v28 = v31 & 4294967295;
                v29 = v32;
                if ((unsigned int)v31 < v32)
                {
                    v33 = v32;
                    ptr4 = &(&v5)[2 * (unsigned int)v31];
                    v27 = 7;
                    v28 = v33 & 4294967295;
                    v29 = v31 & 4294967295;
                    for (v35 = v33 - v31; v35; ptr4 += 1)
                    {
                        v35 -= 1;
                        *((unsigned short *)&ptr4[0]) = l;
                    }
                }
                (&vvar_5)[idx] = v32;
                continue;
            }
            else
            {
                v36 = v26 - 8;
                (&vvar_5)[idx] = v32;
                v37 = (unsigned int)v31 * 0x100;
                ptr = &(&v5)[2 * (v31 >> 8)];
                do
                {
                    v39 = v36;
                    v40 = v37;
                    if (*(ptr) == (unsigned short)v8)
                    {
                        index = v23;
                        *((unsigned short *)&(&v4)[4 * index]) = v8;
                        *((unsigned short *)&(&v3)[4 * index]) = v8;
                        v42 = v23;
                        v18 = 0 < v42;
                        v23 += 1;
                        *((unsigned short *)&ptr[0]) = -(v42);
                    }
                    v43 = v40 * 2;
                    v27 = 1;
                    v28 = v39;
                    v29 = 255;
                    v44 = v39 - 1;
                    ptr = &(&v3)[2 * ((unsigned short)v40 < (unsigned short)v8 ? (unsigned int)(1 - (short)*(ptr) * 2) : -((short)*(ptr)) * 2)];
                    v45 = _ccall(4, 1, (unsigned long long)v39, 255, v18);
                    v37 = v43;
                    v36 = v44;
                } while (!((char)v45));
                *((unsigned short *)&ptr[0]) = l;
            }
            v46 = _ccall(v27, v28, v29, v18);
            v18 = v46;
            l += 1;
        } while (l < 20);
    }
    else if (a13 == (unsigned int)v8)
    {
        4295809746();
    }
LABEL_1000cb47c:
    cur = v8;
    if ((unsigned int)v48 > (unsigned int)v8)
    {
        while (true)
        {
            v50 = v6;
            if ((unsigned int)v50 >> 24 < 0x100)
            {
                v51 = *((short *)&(&v5)[2 * (v50 >> 24)]);
            }
            else
            {
                v7 = 1;
                v51 = v8;
            }
            if (v51 < (unsigned short)v8)
            {
                v52 = 0x800000;
                do
                {
                    v53 = -(v51);
                    v54 = v53;
                    if (((unsigned int)v50 & v52))
                    {
                        if (v54 * 2 + 1 < 94)
                        {
                            v51 = *((short *)&(&v4)[4 * v53]);
                            continue;
                        }
                    }
                    else
                    {
                        if (v54 < 47)
                        {
                            v51 = *((short *)&(&v3)[4 * v53]);
                            continue;
                        }
                    }
                    v7 = 1;
                    v51 = v8;
                } while ((v52 >>= 1, v51 < (unsigned short)v8));
            }
            if (v51 < 24 && v51 >= (unsigned short)v8)
            {
                if (v7 != (unsigned int)v8)
                    goto LABEL_0x1000cb276;
                sub_1000cab30(vvar_504{r56|8b}, *((char *)&vvar_25 + v51));
            }
            else
            {
                v7 = 1;
            }
            if (v7 != (unsigned int)v8)
                goto LABEL_0x1000cb276;
            n = cur;
            if (v51 == 17)
            {
                sub_1000cab30(vvar_504{r56|8b}, 4);
                v56 = (char)(v6 >> 28) + 4;
                goto LABEL_1000cb5a2;
            }
            else if (v51 == 18)
            {
                sub_1000cab30(vvar_504{r56|8b}, 5);
                v56 = (char)(v6 >> 27) + 20;
LABEL_1000cb5a2:
                if (v56 + cur >= (unsigned int)v48)
                    v56 = (v48 & 4294967295) - cur;
                if (v56 > (unsigned int)v8)
                    4295809746();
                cur -= 1;
                goto LABEL_1000cb74d;
                goto LABEL_1000cb74d;
            }
            else
            {
                if (v51 == 19)
                {
                    sub_1000cab30(vvar_504{r56|8b}, 1);
                    v57 = (char)(v6 >> 31) + 4;
                    if (v57 + cur >= (unsigned int)v48)
                        v57 = (v48 & 4294967295) - cur;
                    v58 = v6;
                    if ((unsigned int)v58 >> 24 < 0x100)
                    {
                        v59 = *((short *)&(&v5)[2 * (v58 >> 24)]);
                    }
                    else
                    {
                        v7 = 1;
                        v59 = v8;
                    }
                    if (v59 < (unsigned short)v8)
                    {
                        v60 = 0x800000;
                        do
                        {
                            v61 = -(v59);
                            v62 = v61;
                            if (((unsigned int)v58 & v60))
                            {
                                if (v62 * 2 + 1 < 94)
                                {
                                    v59 = *((short *)&(&v4)[4 * v61]);
                                    continue;
                                }
                            }
                            else
                            {
                                if (v62 < 47)
                                {
                                    v59 = *((short *)&(&v3)[4 * v61]);
                                    continue;
                                }
                            }
                            v7 = 1;
                            v59 = v8;
                        } while ((v60 >>= 1, v59 < (unsigned short)v8));
                    }
                    if (v59 < 24 && v59 >= (unsigned short)v8)
                    {
                        if (v7 != (unsigned int)v8)
                            goto LABEL_0x1000cb276;
                        sub_1000cab30(vvar_504{r56|8b}, *((char *)&vvar_25 + v59));
                    }
                    else
                    {
                        v7 = 1;
                    }
                    if (v7 != (unsigned int)v8)
                        goto LABEL_0x1000cb276;
                    for (v63 = (unsigned int)(v1[n] - v59) + 17; v57 > (unsigned int)v8 && (v57 -= 1, n < v48); n += 1)
                    {
                        v64[n] = v63 - ((int)(2021161081 * v63 >> 35) + ((int)(2021161081 * v63 >> 35) >> 31)) * 17;
                        cur += 1;
                    }
                    v49 = v1;
                    cur -= 1;
                }
                else
                {
                    v65 = (unsigned int)(v49[n] - v51) + 17;
                    v64[n] = v65 - ((int)(2021161081 * v65 >> 35) + ((int)(2021161081 * v65 >> 35) >> 31)) * 17;
                }
LABEL_1000cb74d:
                cur += 1;
                if (cur >= (unsigned int)v48)
                    break;
            }
        }
    }
}
