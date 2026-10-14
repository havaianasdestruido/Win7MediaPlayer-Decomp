/* sub_1000c32c4 @ 0x1000c32c4
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000c32c4  (2482 bytes, 154 basic blocks)
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

extern char g_100002e80;

long long sub_1000c32c4(void* ptr, int a1)
{
    unsigned long long v7;  // rdi
    unsigned int v8;  // r11d
    unsigned int v15;  // eax
    unsigned long v16;  // rsi
    unsigned long long v17;  // rdi
    unsigned int i;  // r9d
    unsigned long long v19;  // rbp
    unsigned int v20;  // r12d
    unsigned long long v21;  // r11
    unsigned long long v22;  // r8
    void* cur;  // r10
    unsigned long v24;  // rdx
    unsigned long long v9;  // rsi
    char v25;  // dl
    unsigned long long v26;  // r8
    unsigned long long ptr4;  // r13
    unsigned int v28;  // r10d
    unsigned int v29;  // r15d
    unsigned long long idx5;  // rsi
    unsigned long v31;  // rcx
    unsigned long long v10;  // rsi
    unsigned int flag;  // eax
    unsigned long long v33;  // rcx
    unsigned int v34;  // eax
    unsigned int v35;  // eax
    unsigned int v36;  // eax
    unsigned long long v37;  // r12
    unsigned int v38;  // ebp
    unsigned long long v39;  // rcx
    unsigned int v40;  // edx
    unsigned long long v41;  // rsi
    unsigned int k;  // r9d
    unsigned long long v43;  // r11
    void* iter;  // r10
    unsigned long v45;  // rdx
    char v46;  // dl
    unsigned int v47;  // r8d
    unsigned int v48;  // eax
    unsigned long ptr7;  // rcx
    unsigned long long idx6;  // rcx
    unsigned int v51;  // r8d
    unsigned int v12;  // r11d
    unsigned long long v52;  // r14
    unsigned long v53;  // rsi
    unsigned long long idx7;  // rcx
    unsigned long long v55;  // rbp
    unsigned int v56;  // edx
    unsigned int v57;  // esi
    unsigned int v58;  // edx
    unsigned long v59;  // rcx
    unsigned int j;  // ebp
    unsigned int v13;  // r11d
    unsigned int v61;  // esi
    unsigned long long v62;  // r8
    unsigned int v63;  // r9d
    unsigned long long v64;  // r10
    unsigned long v65;  // rcx
    unsigned int v67;  // ecx
    unsigned long v68;  // r9
    unsigned int v69;  // eax
    unsigned int v14;  // ebp
    unsigned long v70;  // r12
    unsigned long long v71;  // rbp
    unsigned long v72;  // rcx
    unsigned long idx8;  // rcx
    unsigned int v74;  // edx
    unsigned long v76;  // rax
    unsigned int v77;  // esi
    unsigned long long v78;  // rbp
    unsigned long long index;  // rdx
    unsigned long long pos;  // r8
    unsigned int *ptr3;  // r9
    unsigned long p;  // r10
    unsigned long addr;  // r11
    unsigned int v84;  // edx
    unsigned int v85;  // ecx
    unsigned long idx4;  // rax
    unsigned long off;  // rax
    unsigned int v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x54]
    unsigned int v2;  // [bp-0x50]
    unsigned int v3;  // [bp-0x4c]
    unsigned int v4;  // [bp+0x8]
    unsigned int v5;  // [bp+0x18]
    unsigned int v6;  // [bp+0x20]

    v7 = (int)ptr[1144];
    v8 = (unsigned int)v7 + a1;
    v4 = v7;
    v5 = v8;
    if ((int)ptr[2488])
    {
        *((unsigned int *)&ptr[2488]) = 0;
        *((unsigned int *)&ptr[9588]) = 10000;
        if ((int)ptr[2212])
        {
            sub_1000c4b34();
            sub_1000c4b34(ptr, 16, (short)ptr[2214]);
        }
        sub_1000c4b34();
    }
    else
    {
        v9 = 50;
        do
        {
            v10 = v9;
            sub_1000c49fc(ptr, (v7 & 4294967295) - v10, (unsigned int)v7 - (int)ptr[8] + 4);
            v9 = (unsigned int)v10 - 1;
        } while ((unsigned int)v10 + 4294967295);
    }
    while (true)
    {
        v12 = v8;
        while (true)
        {
LABEL_1000c3383:
            v14 = (unsigned int)v7 + 0x8000;
            while (true)
            {
                if ((unsigned int)v7 >= v13)
                    break;
                v29 = v14 & 0xffff8000;
                v0 = v29;
                if (v29 > v13 || v29 < (unsigned int)v7)
                {
                    v29 = v13;
                    v0 = v13;
                }
                v15 = sub_1000c4724(ptr, v7 & 4294967295);
                v16 = v15;
                if (v15 < 2 || v15 + (unsigned int)v7 > v29 && (v16 = (unsigned long)((unsigned long long)v29 - v7), (unsigned int)v16 < 2))
                {
                    v13 = v5;
                    v17 = (unsigned int)v7 + 1;
                    v14 += 1;
                    v4 = v17;
                    *((char *)((int)ptr[56] + (long long)ptr[72])) = *((char *)((v7 & 4294967295) + *((long long *)ptr)));
                    *((unsigned int *)&ptr[56]) = (int)ptr[56] + 1;
                    v7 = v17;
                    if ((int)ptr[56] >= 65528)
                        sub_1000c3d58(ptr, v17 & 4294967295); /* do not return */
                }
                else
                {
                    if ((unsigned int)v16 < 50)
                    {
                        i = 2;
                        v19 = v7 & 4294967295;
                        v3 = (unsigned int)v7 + 3837;
                        v20 = (unsigned int)v16 + (unsigned int)v7;
                        v4 = v20;
                        v2 = v7;
                        v21 = 2;
                        *((unsigned int *)((long long)ptr[9600] + 44)) = *(9608 + *((char *)(*((long long *)ptr) + v19)) + (char *)ptr);
                        *((unsigned int *)((long long)ptr[9600] + 28)) = v7;
                        if ((unsigned int)v16 >= 2)
                        {
                            v22 = 48;
                            cur = ptr + 120;
                            do
                            {
                                v24 = *((int *)cur);
                                v25 = ((unsigned int)v24 < 0x400 ? *(1148 + v24 + (char *)ptr) : ((unsigned int)v24 < 0x80000 ? *(1148 + (v24 >> 9) + (char *)ptr) + 18 : (char)((unsigned int)v24 >> 17) + 34));
                                if (i < 9)
                                    *((unsigned int *)((long long)ptr[9600] + v22 + 20)) = *(9862 + i + 8 * v25 + (char *)ptr) + *(&(&g_100002e80)[v25]);
                                else
                                    *((unsigned int *)((long long)ptr[9600] + v22 + 20)) = *(9871 + (char *)ptr + 8 * v25) + *(10300 + v21 + (char *)ptr) + (&g_100002e80)[v25];
                                i += 1;
                                v21 += 1;
                                *((unsigned int *)((long long)ptr[9600] + v22 + 4)) = v7;
                                *((int *)(v22 + (long long)ptr[9600])) = *((int *)cur);
                                v22 += 24;
                                cur += 4;
                            } while (i <= (unsigned int)v16);
                        }
                        v26 = (unsigned int)v7 + 1;
                        *((unsigned int *)((long long)ptr[9600] + 20)) = 0;
                        *((int *)((long long)ptr[9600] + 8)) = (int)ptr[100];
                        *((int *)((long long)ptr[9600] + 12)) = (int)ptr[104];
                        *((int *)((long long)ptr[9600] + 16)) = (int)ptr[108];
                        ptr4 = (long long)ptr[9600] - v19 * 24;
                        v28 = v29 - v7;
                        while (true)
                        {
                            v7 = (unsigned int)v7 + 1;
                            idx5 = v7 * 3;
                            v6 = v28 - 1;
                            v31 = *((int *)(ptr4 + idx5 * 8 + 4));
                            v1 = (unsigned int)v26 + 1;
                            if ((unsigned int)v31 == v1 - 2)
                            {
LABEL_1000c35ea:
                                goto LABEL_1000c35ec;
                            }
                            flag = *((int *)(ptr4 + idx5 * 8));
                            v33 = v31 * 3;
                            if (flag >= 3)
                            {
                                *((unsigned int *)&ptr[100]) = flag - 2;
                                *((int *)&ptr[104]) = *((int *)(ptr4 + v33 * 8 + 8));
                                *((int *)&ptr[108]) = *((int *)(ptr4 + v33 * 8 + 12));
                                goto LABEL_1000c35ea;
                            }
                            if (!flag)
                            {
                                *((int *)&ptr[100]) = *((int *)(ptr4 + v33 * 8 + 8));
                                v34 = *((int *)(ptr4 + v33 * 8 + 12));
                                goto LABEL_1000c374e;
                            }
                            else if (flag == 1)
                            {
                                *((int *)&ptr[100]) = *((int *)(ptr4 + v33 * 8 + 12));
                                v34 = *((int *)(ptr4 + v33 * 8 + 8));
LABEL_1000c374e:
                                *((unsigned int *)&ptr[104]) = v34;
                                v35 = *((int *)(ptr4 + v33 * 8 + 16));
                                goto LABEL_1000c3756;
                            }
                            else
                            {
                                *((int *)&ptr[100]) = *((int *)(ptr4 + v33 * 8 + 16));
                                *((int *)&ptr[104]) = *((int *)(ptr4 + v33 * 8 + 12));
                                v35 = *((int *)(ptr4 + v33 * 8 + 8));
LABEL_1000c3756:
                                *((unsigned int *)&ptr[108]) = v35;
LABEL_1000c35ec:
                                *((int *)(ptr4 + idx5 * 8 + 8)) = (int)ptr[100];
                                *((int *)(ptr4 + idx5 * 8 + 12)) = (int)ptr[104];
                                *((int *)(ptr4 + idx5 * 8 + 16)) = (int)ptr[108];
                                if (v20 != (unsigned int)v7)
                                {
                                    v36 = sub_1000c4724(ptr, v7 & 4294967295);
                                    v28 = v6;
                                    v37 = v36;
                                    if (v36 + (unsigned int)v7 > v29)
                                        v37 = (v28 < 2 ? 0 : v28);
                                    if (!((unsigned int)v37 <= 50 && (unsigned int)v37 + (unsigned int)v7 < v3))
                                    {
                                        v52 = v37 + v7;
                                        v53 = *((int *)(112 + (char *)ptr + 4 * v37));
                                        idx7 = v52 * 3;
                                        *((unsigned int *)(ptr4 + idx7 * 8)) = v53;
                                        *((unsigned int *)(ptr4 + idx7 * 8 + 4)) = v7;
                                        if ((unsigned int)v53 == 3 && (unsigned int)v37 > 16)
                                        {
                                            sub_1000c49fc(ptr, (unsigned int)v7 + 1, (unsigned int)v7 - (int)ptr[8] + 5);
                                        }
                                        else
                                        {
                                            v55 = 1;
                                            if ((unsigned int)v37 > 1)
                                            {
                                                do
                                                {
                                                    sub_1000c49fc(ptr, v55 + v7, (unsigned int)v55 - (int)ptr[8] + (unsigned int)v7 + 4);
                                                    v55 = (unsigned int)v55 + 1;
                                                } while ((unsigned int)v55 < (unsigned int)v37);
                                            }
                                        }
                                        v7 = v52 & 4294967295;
                                        if ((unsigned int)v53 >= 3)
                                        {
                                            *((int *)&ptr[108]) = (int)ptr[104];
                                            *((int *)&ptr[104]) = (int)ptr[100];
                                            *((unsigned int *)&ptr[100]) = v53 - 2;
                                            break;
                                        }
                                        else
                                        {
                                            if ((unsigned int)v53)
                                            {
                                                v56 = (int)ptr[100];
                                                *((int *)&ptr[100]) = *((int *)(100 + (char *)ptr + 4 * v53));
                                                *((unsigned int *)(100 + (char *)ptr + 4 * v53)) = v56;
                                                break;
                                            }
                                        }
                                    }
                                    else if ((unsigned int)v37 > 2 || (unsigned int)v37 == 2 && (int)ptr[120] < 0x800)
                                    {
                                        [D] Unsupported jumpkind Ijk_NoDecode at address 4295767647()
                                    }
                                    else
                                    {
                                        v26 = v1;
                                        v38 = *((int *)(ptr4 + idx5 * 8 + 20));
                                        v39 = v26 * 3;
                                        v40 = *(9608 + *((char *)(v7 + *((long long *)ptr))) + (char *)ptr) + v38;
                                        if (v40 < *((int *)(ptr4 + v39 * 8 + 20)))
                                        {
                                            *((unsigned int *)(ptr4 + v39 * 8 + 20)) = v40;
                                            *((unsigned int *)(ptr4 + v39 * 8 + 4)) = v7;
                                        }
                                        v41 = 2;
                                        k = 2;
                                        if ((unsigned int)v37 >= 2)
                                        {
                                            v43 = (unsigned int)v26 + 1;
                                            iter = ptr + 120;
                                            do
                                            {
                                                v45 = *((int *)iter);
                                                v46 = ((unsigned int)v45 < 0x400 ? *(1148 + v45 + (char *)ptr) : ((unsigned int)v45 < 0x80000 ? *(1148 + (v45 >> 9) + (char *)ptr) + 18 : (char)((unsigned int)v45 >> 17) + 34));
                                                if (k < 9)
                                                {
                                                    v47 = *(9862 + k + 8 * v46 + (char *)ptr);
                                                    v48 = *(&(&g_100002e80)[v46]);
                                                }
                                                else
                                                {
                                                    ptr7 = v46;
                                                    v47 = *(9871 + (char *)ptr + 8 * ptr7) + *(10300 + v41 + (char *)ptr);
                                                    v48 = (&g_100002e80)[ptr7];
                                                }
                                                idx6 = v43 * 3;
                                                v51 = v47 + v48 + v38;
                                                if (v51 < *((int *)(ptr4 + idx6 * 8 + 20)))
                                                {
                                                    *((unsigned int *)(ptr4 + idx6 * 8 + 20)) = v51;
                                                    *((unsigned int *)(ptr4 + idx6 * 8 + 4)) = v7;
                                                    *((int *)(ptr4 + idx6 * 8)) = *((int *)iter);
                                                }
                                                k += 1;
                                                v43 = (unsigned int)v43 + 1;
                                                v41 += 1;
                                                iter += 4;
                                            } while (k <= (unsigned int)v37);
                                            v29 = v0;
                                            v26 = v1;
                                            v28 = v6;
                                        }
                                        v20 = v4;
                                    }
                                }
                                else
                                {
                                    break;
                                }
                            }
                        }
                        v57 = 0;
                        v58 = *((int *)(ptr4 + (v7 & 4294967295) * 24 + 4));
                        do
                        {
                            v59 = v58;
                            j = v58;
                            v57 += 1;
                            v58 = *((int *)(ptr4 + v59 * 24 + 4));
                            *((unsigned int *)(ptr4 + v59 * 24 + 4)) = v7;
                            v7 = j;
                        } while (j != v2);
                        if (v57 + (int)ptr[56] >= 65528 || v57 + (int)ptr[60] >= 32760)
                            sub_1000c3d58(ptr, j); /* do not return */
                        do
                        {
                            v61 = v57;
                            v62 = v7 & 4294967295;
                            v63 = (unsigned int)v7 + 1;
                            v64 = v62 * 3;
                            if (*((int *)(ptr4 + v64 * 8 + 4)) > v63)
                            {
                                v65 = (int)ptr[56];
                                *((char *)((v65 >> 3) + (long long)ptr[80])) = *((char *)((v65 >> 3) + (long long)ptr[80])) | (char)(1 << ((char)v65 & 7 & 31));
                                *((char *)((int)ptr[56] + (long long)ptr[72])) = *((char *)(ptr4 + v64 * 8 + 4)) - (char)v7 - 2;
                                *((unsigned int *)&ptr[56]) = (int)ptr[56] + 1;
                                *((int *)((long long)ptr[64] + (int)ptr[60] * 4)) = *((int *)(ptr4 + *((int *)(ptr4 + v64 * 8 + 4)) * 24));
                                *((unsigned int *)&ptr[60]) = (int)ptr[60] + 1;
                                v7 = *((int *)(ptr4 + v64 * 8 + 4));
                                v4 = v7;
                            }
                            else
                            {
                                v7 = v63;
                                v4 = v63;
                                *((char *)((int)ptr[56] + (long long)ptr[72])) = *((char *)(v62 + *((long long *)ptr)));
                                *((unsigned int *)&ptr[56]) = (int)ptr[56] + 1;
                            }
                        } while ((v57 = v61 - 1, v61 + 4294967295));
                        v67 = (int)ptr[56];
                        if (v67 >= (int)ptr[9588])
                        {
                            if (v67)
                            {
                                v68 = v67;
                                if ((int)ptr[2484])
                                    sub_1000c5e98(ptr, 0, 0, v68); /* do not return */
                                sub_1000c5d38(ptr, (int)ptr[9592], (int)ptr[9596], v68);
                                sub_1000c5b50(ptr, 0);
                                sub_1000c5bfc(ptr);
                                v67 = (int)ptr[56];
                                v69 = (int)ptr[60];
                                *((unsigned int *)&ptr[9592]) = v67;
                                *((unsigned int *)&ptr[9596]) = v69;
                            }
                            *((unsigned int *)&ptr[9588]) = (int)ptr[9588] + 0x1000;
                        }
                        v12 = v5;
                        if (!(char)ptr[2481] || v67 < 0xfe00 && !((v12 = v5, (int)ptr[60] >= 0x7e00)))
                            goto LABEL_1000c3383;
                        v7 = v4;
                        if (!sub_1000c3db0(ptr, &v4))
                            sub_1000c3d58(ptr, v7 & 4294967295); /* do not return */
                        goto LABEL_1000c3374;
                    }
                    else
                    {
                        v70 = *((int *)(112 + (char *)ptr + 4 * v16));
                        if ((unsigned int)v70 == 3 && (unsigned int)v16 > 16)
                        {
                            sub_1000c49fc(ptr, (unsigned int)v7 + 1, (unsigned int)v7 - (int)ptr[8] + 5);
                        }
                        else
                        {
                            v71 = 1;
                            if ((unsigned int)v16 > 1)
                            {
                                do
                                {
                                    sub_1000c49fc(ptr, v71 + v7, (unsigned int)v71 - (int)ptr[8] + (unsigned int)v7 + 4);
                                    v71 = (unsigned int)v71 + 1;
                                } while ((unsigned int)v71 < (unsigned int)v16);
                            }
                        }
                        v72 = (int)ptr[56];
                        v7 += v16;
                        *((char *)((v72 >> 3) + (long long)ptr[80])) = *((char *)((v72 >> 3) + (long long)ptr[80])) | (char)(1 << ((char)v72 & 7 & 31));
                        *((char *)((int)ptr[56] + (long long)ptr[72])) = (char)v16 - 2;
                        idx8 = (int)ptr[60];
                        *((unsigned int *)&ptr[56]) = (int)ptr[56] + 1;
                        v4 = v7;
                        *((unsigned int *)((long long)ptr[64] + idx8 * 4)) = v70;
                        *((unsigned int *)&ptr[60]) = (int)ptr[60] + 1;
                        if ((unsigned int)v70 >= 3)
                        {
                            *((int *)&ptr[108]) = (int)ptr[104];
                            *((int *)&ptr[104]) = (int)ptr[100];
                            *((unsigned int *)&ptr[100]) = v70 - 2;
                        }
                        else if ((unsigned int)v70)
                        {
                            v74 = (int)ptr[100];
                            *((int *)&ptr[100]) = *((int *)(100 + (char *)ptr + 4 * v70));
                            *((unsigned int *)(100 + (char *)ptr + 4 * v70)) = v74;
                        }
                        if ((int)ptr[56] < 65528 && (v12 = v5, (int)ptr[60] < 32760))
                            goto LABEL_1000c3383;
                        sub_1000c3d58(ptr, v7 & 4294967295); /* do not return */
                    }
                }
            }
            v76 = (unsigned int)v7 - (int)ptr[8];
            *((unsigned int *)&ptr[2496]) = v76;
            if (a1 >= 0x8000)
            {
                v77 = (unsigned int)v76 + 54;
                v78 = 1;
                do
                {
                    index = (v7 & 4294967295) - v78;
                    pos = index & 4294967295;
                    ptr3 = (long long)ptr[16] + *((short *)(index + *((long long *)ptr))) * 4;
                    if (*(ptr3) == (unsigned int)index)
                    {
                        p = (long long)ptr[24];
                        addr = (long long)ptr[32];
                        if (*(ptr3) <= v77)
                        {
                            *(ptr3) = 0;
                            *((unsigned int *)(addr + index * 4)) = 0;
                            *((unsigned int *)(p + index * 4)) = 0;
                        }
                        else
                        {
                            v84 = *((int *)(p + index * 4));
                            if (v84 <= v77)
                            {
                                *((unsigned int *)(p + pos * 4)) = 0;
                                v84 = 0;
                            }
                            v85 = *((int *)(addr + pos * 4));
                            if (v85 <= v77)
                            {
                                *((unsigned int *)(addr + pos * 4)) = 0;
                                v85 = 0;
                            }
                            while (true)
                            {
                                if (v84 > v85)
                                {
                                    idx4 = -(v77 < v84) & v84;
                                    *(ptr3) = idx4;
                                    if (!(unsigned int)idx4)
                                        break;
                                    v84 = *((int *)(addr + idx4 * 4));
                                    ptr3 = addr + idx4 * 4;
                                }
                                else
                                {
                                    off = -(v77 < v85) & v85;
                                    *(ptr3) = off;
                                    if (!(unsigned int)off)
                                        break;
                                    v85 = *((int *)(p + off * 4));
                                    ptr3 = p + off * 4;
                                }
                            }
                        }
                    }
                } while ((v78 = (unsigned long long)((unsigned int)v78 + 1), (unsigned int)v78 <= 50));
                v76 = *((int *)ptr) - (int)ptr[17272] + v7;
                if ((unsigned int)v76 < (int)ptr[8])
                {
                    *((unsigned int *)&ptr[1144]) = v7;
                    return v76;
                }
                v76 = (unsigned int)v76 - (int)ptr[8];
                if ((unsigned int)v76 < (int)ptr[2492])
                {
                    *((unsigned int *)&ptr[1144]) = v7;
                    return v76;
                }
                if ((char)ptr[2481])
                {
                    if (!sub_1000c3db0(ptr, &v4))
                        4295811690();
                }
                else
                {
                    4295811690();
                }
            }
            else if ((char)ptr[2481])
            {
                v76 = sub_1000c3db0(ptr, &v4);
                if (!(unsigned int)v76)
                {
                    *((unsigned int *)&ptr[1144]) = v4;
                    return v76;
                }
            }
            else
            {
                *((unsigned int *)&ptr[1144]) = v7;
                return v76;
            }
            v7 = v4;
            v12 = v5;
        }
LABEL_1000c3374:
        v8 = v5;
    }
}
