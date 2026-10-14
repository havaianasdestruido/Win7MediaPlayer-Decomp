/* sub_100111a50 @ 0x100111a50
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100111a50  (2597 bytes, 161 basic blocks)
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

extern char g_1000036d0;

int sub_100111a50(void)
{
    void* ptr;  // rcx
    unsigned long long v8;  // rdi
    unsigned int v17;  // r15d
    unsigned int v18;  // eax
    unsigned long v19;  // rsi
    unsigned long long v20;  // rdi
    unsigned int i;  // r9d
    unsigned long long v22;  // rbp
    unsigned int v23;  // r12d
    unsigned long long v24;  // r11
    unsigned long long v25;  // r8
    int v9;  // edx
    void* cur;  // r10
    unsigned long v27;  // rdx
    char v28;  // dl
    unsigned long long v29;  // r8
    unsigned long long ptr4;  // r13
    unsigned int v31;  // r10d
    unsigned int v10;  // r11d
    unsigned long long idx5;  // rsi
    unsigned long v33;  // rcx
    unsigned int flag;  // eax
    unsigned long long v35;  // rcx
    unsigned int v36;  // eax
    unsigned int v37;  // eax
    unsigned int v38;  // eax
    unsigned long long v39;  // r12
    unsigned int v40;  // r9d
    unsigned int v41;  // edx
    unsigned long long v11;  // rsi
    unsigned int v42;  // ecx
    unsigned long v43;  // rdx
    unsigned long v44;  // r8
    unsigned long long v45;  // rcx
    unsigned long long k;  // rdx
    unsigned int v48;  // ebp
    unsigned long long v49;  // rcx
    unsigned int v50;  // edx
    unsigned long long v51;  // rsi
    unsigned long long v12;  // rsi
    unsigned int l;  // r9d
    unsigned long long v53;  // r11
    void* iter;  // r10
    unsigned long v55;  // rdx
    char v56;  // dl
    unsigned int v57;  // r8d
    unsigned int v58;  // eax
    unsigned long ptr7;  // rcx
    unsigned long long idx6;  // rcx
    unsigned int v61;  // r8d
    unsigned long long v62;  // r14
    unsigned long v63;  // rsi
    unsigned long long idx7;  // rcx
    unsigned long long v65;  // rbp
    unsigned int v66;  // edx
    unsigned int v67;  // esi
    unsigned int v68;  // edx
    unsigned long v69;  // rcx
    unsigned int j;  // ebp
    unsigned int v14;  // r11d
    unsigned int v71;  // esi
    unsigned long long v72;  // r8
    unsigned int v73;  // r9d
    unsigned long long v74;  // r10
    unsigned long v75;  // rcx
    unsigned int v77;  // ecx
    unsigned long v78;  // r9
    unsigned int v79;  // eax
    unsigned int v15;  // r11d
    unsigned long v80;  // r12
    unsigned long long v81;  // rbp
    unsigned long v82;  // rcx
    unsigned long idx8;  // rcx
    unsigned int v84;  // edx
    unsigned int v86;  // eax
    unsigned int v87;  // esi
    unsigned long long v88;  // rbp
    unsigned int v16;  // ebp
    unsigned long long index;  // rdx
    unsigned long long pos;  // r8
    unsigned int *ptr3;  // r9
    unsigned long p;  // r10
    unsigned long addr;  // r11
    unsigned int v94;  // edx
    unsigned int v95;  // ecx
    unsigned long idx4;  // rax
    unsigned long off;  // rax
    unsigned int v98;  // eax
    unsigned int v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x54]
    unsigned int v2;  // [bp-0x50]
    unsigned int v3;  // [bp-0x4c]
    unsigned int v4;  // [bp+0x8]
    unsigned int v5;  // [bp+0x18]
    unsigned int v6;  // [bp+0x20]

    v8 = (int)ptr[1144];
    v10 = (unsigned int)v8 + v9;
    v4 = v8;
    v5 = v10;
    if ((int)ptr[2488])
    {
        *((unsigned int *)&ptr[2488]) = 0;
        *((unsigned int *)&ptr[9588]) = 10000;
        if ((int)ptr[2212])
        {
            sub_1001132c0();
            sub_1001132c0(ptr, 16, (short)ptr[2214]);
        }
        sub_1001132c0();
    }
    else
    {
        v11 = 50;
        do
        {
            v12 = v11;
            sub_100113188(ptr, (v8 & 4294967295) - v12, (unsigned int)v8 - (int)ptr[8] + 4);
            v11 = (unsigned int)v12 - 1;
        } while ((unsigned int)v12 + 4294967295);
    }
    while (true)
    {
        v14 = v10;
        while (true)
        {
LABEL_100111b0f:
            v16 = (unsigned int)v8 + 0x8000;
            while (true)
            {
                if ((unsigned int)v8 >= v15)
                    break;
                v17 = v16 & 0xffff8000;
                v0 = v17;
                if (v17 > v15 || v17 < (unsigned int)v8)
                {
                    v17 = v15;
                    v0 = v15;
                }
                v18 = sub_100112eb0(ptr, v8 & 4294967295);
                v19 = v18;
                if (v18 < 2 || v18 + (unsigned int)v8 > v17 && (v19 = (unsigned long)((unsigned long long)v17 - v8), (unsigned int)v19 < 2))
                {
                    v15 = v5;
                    v20 = (unsigned int)v8 + 1;
                    v16 += 1;
                    v4 = v20;
                    *((char *)((int)ptr[56] + (long long)ptr[72])) = *((char *)((v8 & 4294967295) + *((long long *)ptr)));
                    *((unsigned int *)&ptr[56]) = (int)ptr[56] + 1;
                    v8 = v20;
                    if ((int)ptr[56] >= 65528)
                        sub_1001124e4(ptr, v20 & 4294967295); /* do not return */
                }
                else
                {
                    if ((unsigned int)v19 < 50)
                    {
                        i = 2;
                        v22 = v8 & 4294967295;
                        v3 = (unsigned int)v8 + 3837;
                        v23 = (unsigned int)v19 + (unsigned int)v8;
                        v4 = v23;
                        v2 = v8;
                        v24 = 2;
                        *((unsigned int *)((long long)ptr[9600] + 44)) = *(9608 + *((char *)(*((long long *)ptr) + v22)) + (char *)ptr);
                        *((unsigned int *)((long long)ptr[9600] + 28)) = v8;
                        if ((unsigned int)v19 >= 2)
                        {
                            v25 = 48;
                            cur = ptr + 120;
                            do
                            {
                                v27 = *((int *)cur);
                                v28 = ((unsigned int)v27 < 0x400 ? *(1148 + v27 + (char *)ptr) : ((unsigned int)v27 < 0x80000 ? *(1148 + (v27 >> 9) + (char *)ptr) + 18 : (char)((unsigned int)v27 >> 17) + 34));
                                if (i < 9)
                                    *((unsigned int *)((long long)ptr[9600] + v25 + 20)) = *(9862 + i + 8 * v28 + (char *)ptr) + *(&(&g_1000036d0)[v28]);
                                else
                                    *((unsigned int *)((long long)ptr[9600] + v25 + 20)) = *(9871 + (char *)ptr + 8 * v28) + *(10300 + v24 + (char *)ptr) + (&g_1000036d0)[v28];
                                i += 1;
                                v24 += 1;
                                *((unsigned int *)((long long)ptr[9600] + v25 + 4)) = v8;
                                *((int *)(v25 + (long long)ptr[9600])) = *((int *)cur);
                                v25 += 24;
                                cur += 4;
                            } while (i <= (unsigned int)v19);
                        }
                        v29 = (unsigned int)v8 + 1;
                        *((unsigned int *)((long long)ptr[9600] + 20)) = 0;
                        *((int *)((long long)ptr[9600] + 8)) = (int)ptr[100];
                        *((int *)((long long)ptr[9600] + 12)) = (int)ptr[104];
                        *((int *)((long long)ptr[9600] + 16)) = (int)ptr[108];
                        ptr4 = (long long)ptr[9600] - v22 * 24;
                        v31 = v17 - v8;
                        while (true)
                        {
                            v8 = (unsigned int)v8 + 1;
                            idx5 = v8 * 3;
                            v6 = v31 - 1;
                            v33 = *((int *)(ptr4 + idx5 * 8 + 4));
                            v1 = (unsigned int)v29 + 1;
                            if ((unsigned int)v33 == v1 - 2)
                            {
LABEL_100111d76:
                                goto LABEL_100111d78;
                            }
                            flag = *((int *)(ptr4 + idx5 * 8));
                            v35 = v33 * 3;
                            if (flag >= 3)
                            {
                                *((unsigned int *)&ptr[100]) = flag - 2;
                                *((int *)&ptr[104]) = *((int *)(ptr4 + v35 * 8 + 8));
                                *((int *)&ptr[108]) = *((int *)(ptr4 + v35 * 8 + 12));
                                goto LABEL_100111d76;
                            }
                            if (!flag)
                            {
                                *((int *)&ptr[100]) = *((int *)(ptr4 + v35 * 8 + 8));
                                v36 = *((int *)(ptr4 + v35 * 8 + 12));
                                goto LABEL_100111eda;
                            }
                            else if (flag == 1)
                            {
                                *((int *)&ptr[100]) = *((int *)(ptr4 + v35 * 8 + 12));
                                v36 = *((int *)(ptr4 + v35 * 8 + 8));
LABEL_100111eda:
                                *((unsigned int *)&ptr[104]) = v36;
                                v37 = *((int *)(ptr4 + v35 * 8 + 16));
                                goto LABEL_100111ee2;
                            }
                            else
                            {
                                *((int *)&ptr[100]) = *((int *)(ptr4 + v35 * 8 + 16));
                                *((int *)&ptr[104]) = *((int *)(ptr4 + v35 * 8 + 12));
                                v37 = *((int *)(ptr4 + v35 * 8 + 8));
LABEL_100111ee2:
                                *((unsigned int *)&ptr[108]) = v37;
LABEL_100111d78:
                                *((int *)(ptr4 + idx5 * 8 + 8)) = (int)ptr[100];
                                *((int *)(ptr4 + idx5 * 8 + 12)) = (int)ptr[104];
                                *((int *)(ptr4 + idx5 * 8 + 16)) = (int)ptr[108];
                                if (v23 != (unsigned int)v8)
                                {
                                    v38 = sub_100112eb0(ptr, v8 & 4294967295);
                                    v31 = v6;
                                    v39 = v38;
                                    if (v38 + (unsigned int)v8 > v17)
                                        v39 = (v31 < 2 ? 0 : v31);
                                    if ((unsigned int)v39 <= 50 && !((v40 = (unsigned int)v39 + (unsigned int)v8, v40 >= v3)))
                                    {
                                        if (((unsigned int)v39 > 2 || (unsigned int)v39 == 2 && (int)ptr[120] < 0x800) && v4 < v40)
                                        {
                                            v41 = v2;
                                            v42 = (unsigned int)((v39 & 4294967295) - v41) + (unsigned int)v8;
                                            v43 = (v42 < 3836 ? v42 : 3836);
                                            v44 = v4 - v41 + 1;
                                            if (v44 <= v43)
                                            {
                                                v45 = v44 * 24;
                                                k = v43 - v44 + 1;
                                                do
                                                {
                                                    v45 += 24;
                                                    *((unsigned int *)((long long)ptr[9600] + v45 - 4)) = 4294967295;
                                                    k -= 1;
                                                } while (k != 1);
                                            }
                                            v4 = v40;
                                        }
                                        v29 = v1;
                                        v48 = *((int *)(ptr4 + idx5 * 8 + 20));
                                        v49 = v29 * 3;
                                        v50 = *(9608 + *((char *)(v8 + *((long long *)ptr))) + (char *)ptr) + v48;
                                        if (v50 < *((int *)(ptr4 + v49 * 8 + 20)))
                                        {
                                            *((unsigned int *)(ptr4 + v49 * 8 + 20)) = v50;
                                            *((unsigned int *)(ptr4 + v49 * 8 + 4)) = v8;
                                        }
                                        v51 = 2;
                                        l = 2;
                                        if ((unsigned int)v39 >= 2)
                                        {
                                            v53 = (unsigned int)v29 + 1;
                                            iter = ptr + 120;
                                            do
                                            {
                                                v55 = *((int *)iter);
                                                v56 = ((unsigned int)v55 < 0x400 ? *(1148 + v55 + (char *)ptr) : ((unsigned int)v55 < 0x80000 ? *(1148 + (v55 >> 9) + (char *)ptr) + 18 : (char)((unsigned int)v55 >> 17) + 34));
                                                if (l < 9)
                                                {
                                                    v57 = *(9862 + l + 8 * v56 + (char *)ptr);
                                                    v58 = *(&(&g_1000036d0)[v56]);
                                                }
                                                else
                                                {
                                                    ptr7 = v56;
                                                    v57 = *(9871 + (char *)ptr + 8 * ptr7) + *(10300 + v51 + (char *)ptr);
                                                    v58 = (&g_1000036d0)[ptr7];
                                                }
                                                idx6 = v53 * 3;
                                                v61 = v57 + v58 + v48;
                                                if (v61 < *((int *)(ptr4 + idx6 * 8 + 20)))
                                                {
                                                    *((unsigned int *)(ptr4 + idx6 * 8 + 20)) = v61;
                                                    *((unsigned int *)(ptr4 + idx6 * 8 + 4)) = v8;
                                                    *((int *)(ptr4 + idx6 * 8)) = *((int *)iter);
                                                }
                                                l += 1;
                                                v53 = (unsigned int)v53 + 1;
                                                v51 += 1;
                                                iter += 4;
                                            } while (l <= (unsigned int)v39);
                                            v17 = v0;
                                            v29 = v1;
                                            v31 = v6;
                                        }
                                        v23 = v4;
                                    }
                                    else
                                    {
                                        v62 = v39 + v8;
                                        v63 = *((int *)(112 + (char *)ptr + 4 * v39));
                                        idx7 = v62 * 3;
                                        *((unsigned int *)(ptr4 + idx7 * 8)) = v63;
                                        *((unsigned int *)(ptr4 + idx7 * 8 + 4)) = v8;
                                        if ((unsigned int)v63 == 3 && (unsigned int)v39 > 16)
                                        {
                                            sub_100113188(ptr, (unsigned int)v8 + 1, (unsigned int)v8 - (int)ptr[8] + 5);
                                        }
                                        else
                                        {
                                            v65 = 1;
                                            if ((unsigned int)v39 > 1)
                                            {
                                                do
                                                {
                                                    sub_100113188(ptr, v65 + v8, (unsigned int)v65 - (int)ptr[8] + (unsigned int)v8 + 4);
                                                    v65 = (unsigned int)v65 + 1;
                                                } while ((unsigned int)v65 < (unsigned int)v39);
                                            }
                                        }
                                        v8 = v62 & 4294967295;
                                        if ((unsigned int)v63 >= 3)
                                        {
                                            *((int *)&ptr[108]) = (int)ptr[104];
                                            *((int *)&ptr[104]) = (int)ptr[100];
                                            *((unsigned int *)&ptr[100]) = v63 - 2;
                                            break;
                                        }
                                        else if ((unsigned int)v63)
                                        {
                                            v66 = (int)ptr[100];
                                            *((int *)&ptr[100]) = *((int *)(100 + (char *)ptr + 4 * v63));
                                            *((unsigned int *)(100 + (char *)ptr + 4 * v63)) = v66;
                                            break;
                                        }
                                    }
                                }
                                else
                                {
                                    break;
                                }
                            }
                        }
                        v67 = 0;
                        v68 = *((int *)(ptr4 + (v8 & 4294967295) * 24 + 4));
                        do
                        {
                            v69 = v68;
                            j = v68;
                            v67 += 1;
                            v68 = *((int *)(ptr4 + v69 * 24 + 4));
                            *((unsigned int *)(ptr4 + v69 * 24 + 4)) = v8;
                            v8 = j;
                        } while (j != v2);
                        if (v67 + (int)ptr[56] >= 65528 || v67 + (int)ptr[60] >= 32760)
                            sub_1001124e4(ptr, j); /* do not return */
                        do
                        {
                            v71 = v67;
                            v72 = v8 & 4294967295;
                            v73 = (unsigned int)v8 + 1;
                            v74 = v72 * 3;
                            if (*((int *)(ptr4 + v74 * 8 + 4)) > v73)
                            {
                                v75 = (int)ptr[56];
                                *((char *)((v75 >> 3) + (long long)ptr[80])) = *((char *)((v75 >> 3) + (long long)ptr[80])) | (char)(1 << ((char)v75 & 7 & 31));
                                *((char *)((int)ptr[56] + (long long)ptr[72])) = *((char *)(ptr4 + v74 * 8 + 4)) - (char)v8 - 2;
                                *((unsigned int *)&ptr[56]) = (int)ptr[56] + 1;
                                *((int *)((long long)ptr[64] + (int)ptr[60] * 4)) = *((int *)(ptr4 + *((int *)(ptr4 + v74 * 8 + 4)) * 24));
                                *((unsigned int *)&ptr[60]) = (int)ptr[60] + 1;
                                v8 = *((int *)(ptr4 + v74 * 8 + 4));
                                v4 = v8;
                            }
                            else
                            {
                                v8 = v73;
                                v4 = v73;
                                *((char *)((int)ptr[56] + (long long)ptr[72])) = *((char *)(v72 + *((long long *)ptr)));
                                *((unsigned int *)&ptr[56]) = (int)ptr[56] + 1;
                            }
                        } while ((v67 = v71 - 1, v71 + 4294967295));
                        v77 = (int)ptr[56];
                        if (v77 >= (int)ptr[9588])
                        {
                            if (v77)
                            {
                                v78 = v77;
                                if ((int)ptr[2484])
                                    sub_100114624(ptr, 0, 0, v78); /* do not return */
                                sub_1001144c4(ptr, (int)ptr[9592], (int)ptr[9596], v78);
                                sub_1001142dc(ptr, 0);
                                sub_100114388(ptr);
                                v77 = (int)ptr[56];
                                v79 = (int)ptr[60];
                                *((unsigned int *)&ptr[9592]) = v77;
                                *((unsigned int *)&ptr[9596]) = v79;
                            }
                            *((unsigned int *)&ptr[9588]) = (int)ptr[9588] + 0x1000;
                        }
                        v14 = v5;
                        if (!(char)ptr[2481] || v77 < 0xfe00 && !((v14 = v5, (int)ptr[60] >= 0x7e00)))
                            goto LABEL_100111b0f;
                        v8 = v4;
                        if (!sub_10011253c(ptr, &v4))
                            sub_1001124e4(ptr, v8 & 4294967295); /* do not return */
                        goto LABEL_100111b00;
                    }
                    else
                    {
                        v80 = *((int *)(112 + (char *)ptr + 4 * v19));
                        if ((unsigned int)v80 == 3 && (unsigned int)v19 > 16)
                        {
                            sub_100113188(ptr, (unsigned int)v8 + 1, (unsigned int)v8 - (int)ptr[8] + 5);
                        }
                        else
                        {
                            v81 = 1;
                            if ((unsigned int)v19 > 1)
                            {
                                do
                                {
                                    sub_100113188(ptr, v81 + v8, (unsigned int)v81 - (int)ptr[8] + (unsigned int)v8 + 4);
                                    v81 = (unsigned int)v81 + 1;
                                } while ((unsigned int)v81 < (unsigned int)v19);
                            }
                        }
                        v82 = (int)ptr[56];
                        v8 += v19;
                        *((char *)((v82 >> 3) + (long long)ptr[80])) = *((char *)((v82 >> 3) + (long long)ptr[80])) | (char)(1 << ((char)v82 & 7 & 31));
                        *((char *)((int)ptr[56] + (long long)ptr[72])) = (char)v19 - 2;
                        idx8 = (int)ptr[60];
                        *((unsigned int *)&ptr[56]) = (int)ptr[56] + 1;
                        v4 = v8;
                        *((unsigned int *)((long long)ptr[64] + idx8 * 4)) = v80;
                        *((unsigned int *)&ptr[60]) = (int)ptr[60] + 1;
                        if ((unsigned int)v80 >= 3)
                        {
                            *((int *)&ptr[108]) = (int)ptr[104];
                            *((int *)&ptr[104]) = (int)ptr[100];
                            *((unsigned int *)&ptr[100]) = v80 - 2;
                        }
                        else if ((unsigned int)v80)
                        {
                            v84 = (int)ptr[100];
                            *((int *)&ptr[100]) = *((int *)(100 + (char *)ptr + 4 * v80));
                            *((unsigned int *)(100 + (char *)ptr + 4 * v80)) = v84;
                        }
                        if ((int)ptr[56] < 65528 && (v14 = v5, (int)ptr[60] < 32760))
                            goto LABEL_100111b0f;
                        sub_1001124e4(ptr, v8 & 4294967295); /* do not return */
                    }
                }
            }
            v86 = (unsigned int)v8 - (int)ptr[8];
            *((unsigned int *)&ptr[2496]) = v86;
            if (v9 >= 0x8000)
            {
                v87 = v86 + 54;
                v88 = 1;
                do
                {
                    index = (v8 & 4294967295) - v88;
                    pos = index & 4294967295;
                    ptr3 = (long long)ptr[16] + *((short *)(index + *((long long *)ptr))) * 4;
                    if (*(ptr3) == (unsigned int)index)
                    {
                        p = (long long)ptr[24];
                        addr = (long long)ptr[32];
                        if (*(ptr3) <= v87)
                        {
                            *(ptr3) = 0;
                            *((unsigned int *)(addr + index * 4)) = 0;
                            *((unsigned int *)(p + index * 4)) = 0;
                        }
                        else
                        {
                            v94 = *((int *)(p + index * 4));
                            if (v94 <= v87)
                            {
                                *((unsigned int *)(p + pos * 4)) = 0;
                                v94 = 0;
                            }
                            v95 = *((int *)(addr + pos * 4));
                            if (v95 <= v87)
                            {
                                *((unsigned int *)(addr + pos * 4)) = 0;
                                v95 = 0;
                            }
                            while (true)
                            {
                                if (v94 > v95)
                                {
                                    idx4 = -(v87 < v94) & v94;
                                    *(ptr3) = idx4;
                                    if (!(unsigned int)idx4)
                                        break;
                                    v94 = *((int *)(addr + idx4 * 4));
                                    ptr3 = addr + idx4 * 4;
                                }
                                else
                                {
                                    off = -(v87 < v95) & v95;
                                    *(ptr3) = off;
                                    if (!(unsigned int)off)
                                        break;
                                    v95 = *((int *)(p + off * 4));
                                    ptr3 = p + off * 4;
                                }
                            }
                        }
                    }
                } while ((v88 = (unsigned long long)((unsigned int)v88 + 1), (unsigned int)v88 <= 50));
                v98 = *((int *)ptr) - (int)ptr[17272] + (unsigned int)v8;
                if (v98 < (int)ptr[8])
                {
                    *((unsigned int *)&ptr[1144]) = v8;
                    return;
                }
                if (v98 - (int)ptr[8] >= (int)ptr[2492])
                {
                    if ((char)ptr[2481])
                    {
                        if (!sub_10011253c(ptr, &v4))
                            sub_100129dd4((long long)ptr[17272], (int)ptr[2492] + (long long)ptr[17272], (int)ptr[8]); /* do not return */
                    }
                    else
                    {
                        sub_100129dd4((long long)ptr[17272], (int)ptr[2492] + (long long)ptr[17272], (int)ptr[8]); /* do not return */
                    }
                }
                else
                {
                    *((unsigned int *)&ptr[1144]) = v8;
                    return;
                }
            }
            else if (!(char)ptr[2481])
            {
                *((unsigned int *)&ptr[1144]) = v8;
                return;
            }
            else if (!sub_10011253c(ptr, &v4))
            {
                *((unsigned int *)&ptr[1144]) = v4;
                return;
            }
            v8 = v4;
            v14 = v5;
        }
LABEL_100111b00:
        v10 = v5;
    }
}
