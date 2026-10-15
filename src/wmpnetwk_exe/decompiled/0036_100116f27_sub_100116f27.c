/* sub_100116f27 @ 0x100116f27
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100116f27  (1032 bytes, 70 basic blocks)
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

int sub_100116f27(void)
{
    unsigned int v25;  // esi
    unsigned long v26;  // rcx
    unsigned int v35;  // r9d
    unsigned long long v36;  // rbp
    unsigned long long v37;  // rdx
    char *v38;  // rax
    unsigned int v39;  // r11d
    unsigned int j;  // edi
    unsigned long long v41;  // r9
    unsigned int i;  // r11d
    unsigned long long idx5;  // rax
    long long v27;  // r12
    unsigned long long pos;  // rcx
    unsigned int v45;  // eax
    unsigned int v46;  // r11d
    unsigned long long v47;  // rdx
    unsigned int v48;  // ecx
    long long v49;  // rax
    long long v50;  // rax
    unsigned long long v52;  // rcx
    unsigned int *iter;  // rbx
    unsigned long v28;  // r10
    unsigned long idx4;  // rax
    unsigned long off;  // rdx
    unsigned long long cur;  // rdx
    char p[4];  // r8
    unsigned long long node;  // rbx
    unsigned int v59;  // r14d
    long long ptr10;  // r13
    unsigned int l;  // r15d
    long long ptr6;  // r12
    unsigned long long v63;  // rcx
    unsigned int *v29;  // rbx
    unsigned int k;  // esi
    unsigned int v65;  // eax
    unsigned long long v66;  // rdi
    unsigned long long v67;  // rsi
    unsigned int v68;  // r8d
    unsigned long long v69;  // rcx
    unsigned int v70;  // edx
    unsigned int v71;  // edx
    unsigned int ptr11[2];  // rax
    unsigned int *addr;  // r11
    unsigned int ptr8[2];  // rax
    unsigned int v75;  // edx
    unsigned long v76;  // rax
    unsigned long ptr12;  // rax
    unsigned long v78;  // rcx
    unsigned long v79;  // rdi
    unsigned int v80;  // eax
    unsigned long long v81;  // rcx
    unsigned long index;  // rax
    unsigned long long v82;  // rdx
    unsigned int m;  // eax
    unsigned long long ptr4;  // rcx
    unsigned int v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x24]
    unsigned int v3;  // [bp+0x28]
    int v4;  // [bp+0x38], Other Possible Types: uint128_t
    unsigned int v5;  // [bp+0x48]
    char v6[4];  // [bp+0x50]
    unsigned int ptr9[2];  // [bp+0x58]
    int <0x100116f27[is_1]|Stack bp+0x60, 1 B>;  // [bp+0x60]
    char v9;  // [bp+0x64]
    char v11;  // [bp+0x9c]
    unsigned int v12;  // [bp+0xb0]
    int <0x100116f27[is_8]|Stack bp+0xb0, 1 B>;  // [bp+0xb0]
    char v13;  // [bp+0xf8]
    char v14;  // [bp+0x180]
    unsigned int v15;  // [bp+0x650]
    unsigned int v16;  // [bp+0x658]
    unsigned int v17;  // [bp+0x660]
    unsigned long v18;  // [bp+0x668]
    unsigned int v19;  // [bp+0x670]
    unsigned long v20;  // [bp+0x678]
    unsigned int v21;  // [bp+0x680]
    unsigned long v22;  // [bp+0x688]
    unsigned int v23;  // [bp+0x690]
    unsigned int *ptr;  // [bp+0x698]

    v26 = v25;
    v28 = (int)v27 + 1;
    addr = v29;
    do
    {
        index = *(addr);
        *((unsigned int *)((char *)&<0x100116f27[is_1]|Stack bp+0x60, 1 B> + 4 * index)) = *((int *)((char *)&<0x100116f27[is_1]|Stack bp+0x60, 1 B> + 4 * index)) + (unsigned int)v28;
        addr += 1;
        v26 += 4294967295;
    } while ((unsigned int)v26 + 4294967295);
    if (<0x100116f27[is_1]|Stack bp+0x60, 1 B> == v25)
    {
        *(ptr) = v27;
        return;
    }
    ptr4 = v28 & 4294967295;
    v35 = *(ptr);
    do
    {
    } while (*((int *)((char *)&<0x100116f27[is_1]|Stack bp+0x60, 1 B> + 4 * (ptr4 & 4294967295))) == (int)v27 && (ptr4 = (unsigned long long)(ptr4 + v28), (unsigned int)ptr4 <= 16));
    v36 = ptr4 & 4294967295;
    v37 = 16;
    if (*(ptr) < (unsigned int)ptr4)
        v35 = ptr4;
    v38 = &v11 + 4;
    do
    {
    } while (*((int *)&v38) == (int)v27 && (v37 += 4294967295, v38 -= 4, (unsigned int)v37 != (int)v27));
    v39 = v28;
    j = v37;
    v41 = ((unsigned int)v37 < v35 ? v37 & 4294967295 : v35);
    v2 = v37;
    i = (((char)ptr4 & 31) ? v39 << ((char)ptr4 & 31) : v39 << ((char)ptr4 & 31));
    for (*(ptr) = v41; (unsigned int)ptr4 < (unsigned int)v37; i = (i - *((int *)((char *)&<0x100116f27[is_1]|Stack bp+0x60, 1 B> + 4 * idx5))) * 2)
    {
        idx5 = ptr4 & 4294967295;
        if (i - *((int *)((char *)&<0x100116f27[is_1]|Stack bp+0x60, 1 B> + 4 * idx5)) < 0)
            return;
        ptr4 += v28;
    }
    pos = v37 & 4294967295;
    v45 = *((int *)((char *)&<0x100116f27[is_1]|Stack bp+0x60, 1 B> + 4 * pos));
    v46 = i - v45;
    if (i - v45 < 0)
        return;
    v47 = v37 + 4294967295;
    *((unsigned int *)((char *)&<0x100116f27[is_1]|Stack bp+0x60, 1 B> + 4 * pos)) = v45 + v46;
    v48 = v27;
    if ((unsigned int)v37 + 4294967295)
    {
        v49 = v27;
        do
        {
            v48 += *((int *)&(&v9)[v49]);
            v50 = v49 + 4;
            *((unsigned int *)((char *)&vvar_519{r112|8b} + v50)) = v48;
            v49 = v50;
            v47 += 4294967295;
        } while ((unsigned int)v47 + 4294967295);
    }
    v52 = v27 & 4294967295;
    do
    {
        idx4 = *(iter);
        iter += 1;
        if ((unsigned int)idx4 != (int)v27)
        {
            if ((unsigned int)idx4 <= 16)
            {
                off = *((int *)((char *)&<0x100116f27[is_8]|Stack bp+0xb0, 1 B> + 4 * idx4));
                if ((unsigned int)off >= 288)
                    return;
                *((unsigned int *)&(&v14)[4 * off]) = v52;
                *((unsigned int *)((char *)&<0x100116f27[is_8]|Stack bp+0xb0, 1 B> + 4 * idx4)) = (unsigned int)off + 1;
            }
            else
            {
                return;
            }
        }
    } while ((v52 = (unsigned long long)(v52 + v28), (unsigned int)v52 < v25));
    cur = 18446744073709551615;
    p = &v14;
    node = -((unsigned int)v41);
    v59 = v27;
    v12 = v27;
    ptr10 = v27;
    l = v27;
    v6 = &v14;
    cur = 18446744073709551615;
    ptr6 = -1;
    if ((unsigned int)v36 <= j)
    {
        v63 = v36 - 1 & 4294967295;
        v15 = v63;
        do
        {
            ptr9 = (char *)&<0x100116f27[is_1]|Stack bp+0x60, 1 B> + 4 * (unsigned int)v36;
            k = ptr9[0];
            if (k)
            {
                v65 = k + 1;
                do
                {
                    v66 = node + v41;
                    k += 4294967295;
                    v3 = k;
                    v1 = v65 + 4294967295;
                    if ((unsigned int)v36 > (unsigned int)v66)
                    {
                        v67 = (node & 4294967295) - v41;
                        do
                        {
                            ptr6 += v28;
                            cur += v28;
                            if (ptr6 >= 16)
                                return;
                            node += v41;
                            v67 += v41;
                            v68 = (unsigned short)v2 - node;
                            v66 += v41;
                            if (v68 > (unsigned int)v41)
                                v68 = (unsigned short)v41;
                            v69 = (v36 & 4294967295) - node;
                            v70 = (unsigned int)v28 << ((char)v69 & 31);
                            if (v70 > v1)
                            {
                                v71 = v70 + 4294967295 - v3;
                                ptr11 = ptr9;
                                while (true)
                                {
                                    v69 += v28;
                                    if ((unsigned int)v69 >= v68 || !((ptr8 = ptr11 + 4, v75 = v71 * 2, v75 > ptr8[0])))
                                        break;
                                    v71 = v75 - ptr8[0];
                                    ptr11 = ptr8;
                                }
                            }
                            v76 = v5;
                            ptr10 = v76 * 16 + v22;
                            v5 = (unsigned int)v76 + ((unsigned int)v28 << ((char)v69 & 31));
                            if (v5 > v23)
                                return;
                            *((long long *)&(&vvar_519{r112|8b})[2 * ptr6]) = ptr10;
                            if (ptr6)
                            {
                                ptr12 = *((long long *)&(&v13)[8 * ptr6]);
                                *((char *)&(&v4)[1]) = v41;
                                *((char *)&v4) = (char)v69 + 16;
                                *((long long *)((char *)&v4 + 8)) = ptr10;
                                (&v12)[ptr6] = v59;
                                *((uint128_t *)(ptr12 + (v59 >> ((char)v67 & 63)) * 16)) = v4;
                            }
                        } while ((unsigned int)v36 > (unsigned int)v66);
                        k = v3;
                        p = v6;
                    }
                    *((char *)&(&v4)[1]) = (char)v36 - (char)node;
                    if (p < &(&v14)[4 * v16])
                    {
                        v78 = (unsigned long long)*(p);
                        v79 = v17;
                        if ((unsigned int)v78 < (unsigned int)v79)
                        {
                            *((unsigned short *)&(&v4)[8]) = v78;
                            *((char *)&v4) = (char)(((unsigned int)v78 < 0x100) + 15);
                        }
                        else
                        {
                            v80 = v21;
                            if (v19 < v80)
                                v80 = v19;
                            if ((unsigned int)v78 >= v80 + (unsigned int)v79)
                                goto LABEL_100117251;
                            v81 = v78 - v79;
                            *((char *)&v4) = *((char *)(v20 + v81 * 2));
                            *((short *)((char *)&v4 + 8)) = *((short *)(v18 + v81 * 2));
                        }
                        v6 = p + 1;
                        continue;
                    }
                    else
                    {
LABEL_100117251:
                        *((char *)&v4) = 99;
                    }
                    v82 = v59 >> ((char)(node & 4294967295) & 31);
                    if ((unsigned int)v82 < l)
                    {
                        do
                        {
                            *((uint128_t *)(ptr10 + (v82 & 4294967295) * 16)) = v4;
                            v82 += (unsigned int)v28 << ((char)((v36 & 4294967295) - node) & 31);
                        } while ((unsigned int)v82 < l);
                    }
                    for (m = (v28 & 4294967295) << ((char)v15 & 31); (m & v59); m >>= 1)
                    {
                        v59 ^= m;
                    }
                    v59 ^= m;
                    while (true)
                    {
                        if (((unsigned int)(((unsigned int)v28 << ((char)(node & 4294967295) & 31)) - v28) & v59) == (&v12)[ptr6])
                            break;
                        cur -= v28;
                        if ((char)(ptr6 - v28 >> 63))
                            return;
                        node -= v41;
                        ptr6 -= v28;
                    }
                    p = v6;
                    v65 = v1;
                } while (k);
                j = v2;
                v63 = v15;
            }
            v63 += v28;
            v36 += v28;
            v15 = v63;
        } while ((unsigned int)v36 <= j);
    }
    return;
}
