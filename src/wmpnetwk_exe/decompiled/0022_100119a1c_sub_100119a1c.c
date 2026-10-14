/* sub_100119a1c @ 0x100119a1c
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100119a1c  (1235 bytes, 96 basic blocks)
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

int sub_100119a1c(void)
{
    unsigned long long v13;  // rbx
    unsigned int v14;  // edx
    unsigned long long v23;  // cc_ndep
    unsigned int k;  // edi
    unsigned long long v25;  // r8
    char iter[4];  // r8
    unsigned int v27;  // edi
    unsigned long v28;  // rcx
    unsigned int v29;  // r11d
    unsigned int l;  // r8d
    char v31;  // 4108
    char v32;  // dil
    char *node;  // rcx
    unsigned long long v33;  // cc_op
    unsigned long v34;  // cc_dep1
    unsigned long v35;  // cc_dep2
    unsigned long idx;  // r10
    unsigned long v37;  // rdx
    unsigned int v38;  // r9d
    unsigned long v39;  // rcx
    char ptr4[2];  // rdi
    unsigned long long v41;  // rcx
    char v42;  // dil
    unsigned long pos;  // rax
    unsigned int v43;  // edx
    char ptr[2];  // rcx
    char v45;  // dil
    unsigned int v46;  // edx
    unsigned long index;  // rax
    unsigned short v48;  // ax
    unsigned int v49;  // edx
    char v50;  // dil
    unsigned long v51;  // 4125
    unsigned long long v52;  // 4122
    unsigned int i;  // edi
    unsigned int cur;  // esi
    unsigned long v54;  // r14
    char *v55;  // r12
    unsigned long v56;  // rdx
    unsigned short v57;  // di
    unsigned int v58;  // ecx
    unsigned short v59;  // di
    unsigned int v60;  // eax
    unsigned long n;  // r13
    unsigned long long v18;  // rdx
    unsigned int v62;  // edx
    unsigned int v63;  // r12d
    unsigned long v64;  // rdx
    unsigned short v65;  // di
    unsigned int v66;  // ecx
    unsigned short v67;  // di
    unsigned int v68;  // eax
    unsigned int v69;  // ecx
    char *v70;  // r15
    unsigned int v71;  // ecx
    unsigned long long v19;  // rdx
    unsigned int v20;  // edi
    unsigned int j;  // edi
    unsigned long long v22;  // r8
    char *v1;  // [bp+0x20]
    char v2;  // [bp+0x30]
    unsigned int v3;  // [bp+0x54]
    unsigned int v4;  // [bp+0x74]
    char v5;  // [bp+0x80]
    char v6;  // [bp+0x84]
    char v7;  // [bp+0xd0]
    char v8;  // [bp+0xf0]
    char v9;  // [bp+0xf2]
    char v10;  // [bp+0x1b0]
    unsigned int v11;  // [bp+0x102ec8]
    unsigned int v12;  // [bp+0x102ed4]

    v14 = v13;
    node = &v7;
    do
    {
        if (*(node) > 16)
            goto LABEL_100119c08;
    } while ((pos = (unsigned long)(unsigned long long)*(node), v14 += 1, node += 1, *((unsigned int *)&(&v5)[4 * pos]) = *((int *)&(&v5)[4 * pos]) + 1, v14 < 20));
    i = 1;
    v18 = v13;
    do
    {
        v19 = v18 + 4;
        v20 = i + 1;
        *((int *)((char *)&vvar_476{r40|8b} + v19)) = (*((int *)&(&v6)[v18]) << ((char)(16 - i) & 31)) + *((int *)&(&v2)[v19]);
        v18 = v19;
        i = v20;
    } while (i <= 16);
    if (v4 == 0x10000)
    {
        j = 1;
        v22 = v13;
        do
        {
            *((int *)((char *)&vvar_476{r40|8b} + v22)) = *((int *)((char *)&vvar_476{r40|8b} + v22)) >> 8;
            v23 = 8 < j;
            k = j + 1;
            v25 = v22 + 4;
            *((unsigned int *)&(&v5)[v25]) = 1 << ((char)(8 - j) & 31);
            j = k;
            v22 = v25;
        } while (j <= 8);
        if (k <= 16)
        {
            iter = &(&v5)[4 * k];
            do
            {
                v23 = 16 < k;
                v27 = k + 1;
                *((unsigned int *)&iter[0]) = 1 << ((char)(16 - k) & 31);
                iter += 1;
                k = v27;
            } while (k <= 16);
        }
        v28 = v3 >> 8;
        if ((unsigned int)v28 != 0x10000)
            sub_10011c262(&(&v10)[2 * v28], 0, (0x100 - v28) * 2); /* do not return */
        v29 = 20;
        l = v13;
        do
        {
            v31 = (&v7)[l];
            v32 = v31;
            v33 = 5;
            v34 = v31;
            v35 = (char)v13;
            if (v31 == (char)v13)
                continue;
            idx = v32;
            v37 = *((int *)&(&v2)[4 * idx]);
            v38 = (unsigned int)v37 + *((int *)&(&v5)[4 * idx]);
            if (v32 <= 8)
            {
                if (v38 > 0x100)
                    break;
                v33 = 7;
                v34 = v37 & 4294967295;
                v35 = v38;
                if ((unsigned int)v37 < v38)
                {
                    v39 = v38;
                    ptr4 = &(&v10)[2 * (unsigned int)v37];
                    v33 = 7;
                    v34 = v39 & 4294967295;
                    v35 = v37 & 4294967295;
                    for (v41 = v39 - v37; v41; ptr4 += 1)
                    {
                        v41 -= 1;
                        *((unsigned short *)&ptr4[0]) = l;
                    }
                }
                *((unsigned int *)&(&v2)[4 * idx]) = v38;
                continue;
            }
            else
            {
                v42 = v32 - 8;
                *((unsigned int *)&(&v2)[4 * idx]) = v38;
                v43 = (unsigned int)v37 * 0x100;
                ptr = &(&v10)[2 * (v37 >> 8)];
                do
                {
                    v45 = v42;
                    v46 = v43;
                    if (*(ptr) == (unsigned short)v13)
                    {
                        index = v29;
                        *((unsigned short *)&(&v9)[4 * index]) = v13;
                        *((unsigned short *)&(&v8)[4 * index]) = v13;
                        v48 = v29;
                        v23 = 0 < v48;
                        v29 += 1;
                        *((unsigned short *)&ptr[0]) = -(v48);
                    }
                    v49 = v46 * 2;
                    v33 = 1;
                    v34 = v45;
                    v35 = 255;
                    v50 = v45 - 1;
                    ptr = &(&v8)[2 * ((unsigned short)v46 < (unsigned short)v13 ? (unsigned int)(1 - (short)*(ptr) * 2) : -((short)*(ptr)) * 2)];
                    v51 = _ccall(4, 1, (unsigned long long)v45, 255, v23);
                    v43 = v49;
                    v42 = v50;
                } while (!((char)v51));
                *((unsigned short *)&ptr[0]) = l;
            }
            v52 = _ccall(v33, v34, v35, v23);
            v23 = v52;
            l += 1;
        } while (l < 20);
    }
    else if (v4 == (unsigned int)v13)
    {
        sub_10011c262(&v10, 0, 0x200); /* do not return */
    }
LABEL_100119c08:
    cur = v13;
    if ((unsigned int)v54 > (unsigned int)v13)
    {
        while (true)
        {
            v56 = v11;
            if ((unsigned int)v56 >> 24 < 0x100)
            {
                v57 = *((short *)&(&v10)[2 * (v56 >> 24)]);
            }
            else
            {
                v12 = 1;
                v57 = v13;
            }
            if (v57 < (unsigned short)v13)
            {
                v58 = 0x800000;
                do
                {
                    v59 = -(v57);
                    v60 = v59;
                    if (((unsigned int)v56 & v58))
                    {
                        if (v60 * 2 + 1 < 94)
                        {
                            v57 = *((short *)&(&v9)[4 * v59]);
                            continue;
                        }
                    }
                    else
                    {
                        if (v60 < 47)
                        {
                            v57 = *((short *)&(&v8)[4 * v59]);
                            continue;
                        }
                    }
                    v12 = 1;
                    v57 = v13;
                } while ((v58 >>= 1, v57 < (unsigned short)v13));
            }
            if (v57 < 24 && v57 >= (unsigned short)v13)
            {
                if (v12 != (unsigned int)v13)
                    goto LABEL_0x100119a02;
                sub_1001192bc(vvar_478{r56|8b}, (&v7)[v57]);
            }
            else
            {
                v12 = 1;
            }
            if (v12 != (unsigned int)v13)
                goto LABEL_0x100119a02;
            n = cur;
            if (v57 == 17)
            {
                sub_1001192bc(vvar_478{r56|8b}, 4);
                v62 = (char)(v11 >> 28) + 4;
                goto LABEL_100119d2e;
            }
            else if (v57 == 18)
            {
                sub_1001192bc(vvar_478{r56|8b}, 5);
                v62 = (char)(v11 >> 27) + 20;
LABEL_100119d2e:
                if (v62 + cur >= (unsigned int)v54)
                    v62 = (v54 & 4294967295) - cur;
                if (v62 > (unsigned int)v13)
                    sub_10011c262(&v70[n], 0, v62); /* do not return */
                cur -= 1;
                goto LABEL_100119ed9;
                goto LABEL_100119ed9;
            }
            else
            {
                if (v57 == 19)
                {
                    sub_1001192bc(vvar_478{r56|8b}, 1);
                    v63 = (char)(v11 >> 31) + 4;
                    if (v63 + cur >= (unsigned int)v54)
                        v63 = (v54 & 4294967295) - cur;
                    v64 = v11;
                    if ((unsigned int)v64 >> 24 < 0x100)
                    {
                        v65 = *((short *)&(&v10)[2 * (v64 >> 24)]);
                    }
                    else
                    {
                        v12 = 1;
                        v65 = v13;
                    }
                    if (v65 < (unsigned short)v13)
                    {
                        v66 = 0x800000;
                        do
                        {
                            v67 = -(v65);
                            v68 = v67;
                            if (((unsigned int)v64 & v66))
                            {
                                if (v68 * 2 + 1 < 94)
                                {
                                    v65 = *((short *)&(&v9)[4 * v67]);
                                    continue;
                                }
                            }
                            else
                            {
                                if (v68 < 47)
                                {
                                    v65 = *((short *)&(&v8)[4 * v67]);
                                    continue;
                                }
                            }
                            v12 = 1;
                            v65 = v13;
                        } while ((v66 >>= 1, v65 < (unsigned short)v13));
                    }
                    if (v65 < 24 && v65 >= (unsigned short)v13)
                    {
                        if (v12 != (unsigned int)v13)
                            goto LABEL_0x100119a02;
                        sub_1001192bc(vvar_478{r56|8b}, (&v7)[v65]);
                    }
                    else
                    {
                        v12 = 1;
                    }
                    if (v12 != (unsigned int)v13)
                        goto LABEL_0x100119a02;
                    for (v69 = (unsigned int)(v1[n] - v65) + 17; v63 > (unsigned int)v13 && (v63 -= 1, n < v54); n += 1)
                    {
                        v70[n] = v69 - ((int)(2021161081 * v69 >> 35) + ((int)(2021161081 * v69 >> 35) >> 31)) * 17;
                        cur += 1;
                    }
                    v55 = v1;
                    cur -= 1;
                }
                else
                {
                    v71 = (unsigned int)(v55[n] - v57) + 17;
                    v70[n] = v71 - ((int)(2021161081 * v71 >> 35) + ((int)(2021161081 * v71 >> 35) >> 31)) * 17;
                }
LABEL_100119ed9:
                cur += 1;
                if (cur >= (unsigned int)v54)
                    break;
            }
        }
    }
}
