/* sub_1000c879b @ 0x1000c879b
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000c879b  (1029 bytes, 70 basic blocks)
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

int sub_1000c879b(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long cur, uint128_t a5, unsigned long a6, unsigned int a7, unsigned long a8, unsigned long p, unsigned int a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned int a18, unsigned long a19, char a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, unsigned long a28, char a29, unsigned long a30, unsigned long a31, unsigned long a32, unsigned long a33, unsigned long a34, unsigned long a35, unsigned long a36, unsigned long a37, unsigned long a38, unsigned long a39, unsigned long a40, unsigned long a41, unsigned long a42, unsigned long a43, unsigned long a44, unsigned long a45, unsigned long a46)
{
    unsigned int v14;  // esi
    unsigned long v15;  // rcx
    unsigned int v24;  // r9d
    unsigned long long v25;  // rbp
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rax
    unsigned int v28;  // r11d
    unsigned int i;  // edi
    unsigned long long v30;  // r9
    unsigned int v31;  // r11d
    unsigned long long idx5;  // rax
    long long v16;  // r12
    unsigned long long pos;  // rcx
    unsigned int v34;  // eax
    unsigned int v35;  // r11d
    unsigned long long v36;  // rdx
    unsigned int v37;  // ecx
    long long v38;  // rax
    long long v39;  // rax
    unsigned long long v41;  // rcx
    unsigned int *iter;  // rbx
    unsigned long v17;  // r10
    unsigned long idx4;  // rax
    unsigned long off;  // rdx
    unsigned int *addr;  // r8
    unsigned long long node;  // rbx
    unsigned int v48;  // r14d
    long long ptr10;  // r13
    unsigned int j;  // r15d
    long long ptr7;  // r12
    unsigned long long v52;  // rcx
    unsigned int *v18;  // rbx
    unsigned int v53;  // esi
    unsigned int v54;  // eax
    unsigned long long v55;  // rdi
    unsigned long long v56;  // rsi
    unsigned int v57;  // r8d
    unsigned long long v58;  // rcx
    unsigned int v59;  // edx
    unsigned int v60;  // edx
    unsigned int ptr11[2];  // rax
    unsigned int *ptr8;  // r11
    unsigned int ptr9[2];  // rax
    unsigned int v64;  // edx
    unsigned long v65;  // rax
    unsigned long ptr12;  // rax
    unsigned long v67;  // rcx
    unsigned long v68;  // rdi
    unsigned int v69;  // eax
    unsigned long long v70;  // rcx
    unsigned long index;  // rax
    unsigned long long v71;  // rdx
    unsigned int k;  // eax
    unsigned long long ptr4;  // rcx
    unsigned int v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x24]
    char v3;  // [bp+0x64]
    unsigned int v4;  // [bp+0x650]
    unsigned int v5;  // [bp+0x658]
    unsigned int v6;  // [bp+0x660]
    unsigned long v7;  // [bp+0x668]
    unsigned int v8;  // [bp+0x670]
    unsigned long v9;  // [bp+0x678]
    unsigned int v10;  // [bp+0x680]
    unsigned long v11;  // [bp+0x688]
    unsigned int v12;  // [bp+0x690]
    unsigned int *ptr;  // [bp+0x698]

    v15 = v14;
    v17 = (int)v16 + 1;
    ptr8 = v18;
    do
    {
        index = *(ptr8);
        (&a10)[index] = (&a10)[index] + (unsigned int)v17;
        ptr8 += 1;
        v15 += 4294967295;
    } while ((unsigned int)v15 + 4294967295);
    if (a10 == v14)
    {
        *(ptr) = v16;
    }
    else
    {
        ptr4 = v17 & 4294967295;
        v24 = *(ptr);
        do
        {
        } while ((&a10)[ptr4 & 4294967295] == (int)v16 && (ptr4 = (unsigned long long)(ptr4 + v17), (unsigned int)ptr4 <= 16));
        v25 = ptr4 & 4294967295;
        v26 = 16;
        if (*(ptr) < (unsigned int)ptr4)
            v24 = ptr4;
        v27 = &vvar_19;
        do
        {
        } while (*((int *)v27) == (int)v16 && (v26 += 4294967295, v27 -= 4, (unsigned int)v26 != (int)v16));
        v28 = v17;
        i = v26;
        v30 = ((unsigned int)v26 < v24 ? v26 & 4294967295 : v24);
        v2 = v26;
        v31 = (((char)ptr4 & 31) ? v28 << ((char)ptr4 & 31) : v28 << ((char)ptr4 & 31));
        *(ptr) = v30;
        while (true)
        {
            if ((unsigned int)ptr4 < (unsigned int)v26)
            {
                idx5 = ptr4 & 4294967295;
                if (v31 - (&a10)[idx5] < 0)
                    goto LABEL_1000c8998;
                ptr4 += v17;
                v31 = (v31 - (&vvar_11)[idx5]) * 2;
            }
            else
            {
                pos = v26 & 4294967295;
                v34 = (&a10)[pos];
                v35 = v31 - v34;
                if (v31 - v34 >= 0)
                {
                    v36 = v26 + 4294967295;
                    (&a10)[pos] = v34 + v35;
                    v37 = v16;
                    if ((unsigned int)v26 + 4294967295)
                    {
                        v38 = v16;
                        do
                        {
                            v37 += *((int *)&(&v3)[v38]);
                            v39 = v38 + 4;
                            *((unsigned int *)((char *)&vvar_567{r112|8b} + v39)) = v37;
                            v38 = v39;
                            v36 += 4294967295;
                        } while ((unsigned int)v36 + 4294967295);
                    }
                    v41 = v16 & 4294967295;
                    do
                    {
                        idx4 = *(iter);
                        iter += 1;
                        if ((unsigned int)idx4 == (int)v16)
                            continue;
                        if ((unsigned int)idx4 > 16 || !((off = (unsigned long)(unsigned long long)(unsigned int)(&vvar_21)[idx4], (unsigned int)off < 288)))
                            goto LABEL_1000c8998;
                        (&vvar_47)[off] = v41;
                        (&vvar_21)[idx4] = (unsigned int)off + 1;
                    } while ((v41 = (unsigned long long)(v41 + v17), (unsigned int)v41 < v14));
                    cur = 18446744073709551615;
                    addr = &vvar_47;
                    node = -((unsigned int)v30);
                    v48 = v16;
                    ptr10 = v16;
                    j = v16;
                    a8 = &vvar_47;
                    cur = 18446744073709551615;
                    ptr7 = -1;
                    if ((unsigned int)v25 <= i)
                    {
                        v52 = v25 - 1 & 4294967295;
                        v4 = v52;
                        do
                        {
                            p = &(&vvar_11)[(unsigned int)v25];
                            v53 = p[0];
                            if (!v53)
                                continue;
                            v54 = v53 + 1;
                            do
                            {
                                v55 = node + v30;
                                v53 += 4294967295;
                                a4 = v53;
                                v1 = v54 + 4294967295;
                                if ((unsigned int)v25 > (unsigned int)v55)
                                {
                                    v56 = (node & 4294967295) - v30;
                                    while (true)
                                    {
                                        ptr7 += v17;
                                        cur += v17;
                                        if (ptr7 >= 16)
                                            break;
                                        node += v30;
                                        v56 += v30;
                                        v57 = (unsigned short)v2 - node;
                                        v55 += v30;
                                        if (v57 > (unsigned int)v30)
                                            v57 = (unsigned short)v30;
                                        v58 = (v25 & 4294967295) - node;
                                        v59 = (unsigned int)v17 << ((char)v58 & 31);
                                        if (v59 > v1)
                                        {
                                            v60 = v59 + 4294967295 - a4;
                                            ptr11 = p;
                                            while (true)
                                            {
                                                v58 += v17;
                                                if ((unsigned int)v58 >= v57 || !((ptr9 = ptr11 + 4, v64 = v60 * 2, v64 > ptr9[0])))
                                                    break;
                                                v60 = v64 - ptr9[0];
                                                ptr11 = ptr9;
                                            }
                                        }
                                        v65 = a7;
                                        ptr10 = v65 * 16 + v11;
                                        a7 = (unsigned int)v65 + ((unsigned int)v17 << ((char)v58 & 31));
                                        if (a7 > v12)
                                            return sub_1000c8b99();
                                        *((long long *)&(&vvar_567{r112|8b})[2 * ptr7]) = ptr10;
                                        if (ptr7)
                                        {
                                            ptr12 = *((long long *)&(&vvar_30)[2 * ptr7]);
                                            *((char *)&(&a5)[1]) = v30;
                                            *((char *)&a5) = (char)v58 + 16;
                                            *((long long *)((char *)&a5 + 8)) = ptr10;
                                            (&vvar_567{r112|8b})[ptr7] = v48;
                                            *((uint128_t *)(ptr12 + (v48 >> ((char)v56 & 63)) * 16)) = a5;
                                        }
                                        if ((unsigned int)v25 <= (unsigned int)v55)
                                        {
                                            v53 = a4;
                                            addr = a8;
                                            goto LABEL_1000c8a3e;
                                        }
                                    }
                                }
LABEL_1000c8a3e:
                                *((char *)&(&a5)[1]) = (char)v25 - (char)node;
                                if (addr < &(&vvar_47)[v5])
                                {
                                    v67 = *(addr);
                                    v68 = v6;
                                    if ((unsigned int)v67 < (unsigned int)v68)
                                    {
                                        *((unsigned short *)&(&a5)[8]) = v67;
                                        *((char *)&a5) = (char)(((unsigned int)v67 < 0x100) + 15);
                                    }
                                    else
                                    {
                                        v69 = v10;
                                        if (v8 < v69)
                                            v69 = v8;
                                        if ((unsigned int)v67 >= v69 + (unsigned int)v68)
                                            goto LABEL_1000c8ac5;
                                        v70 = v67 - v68;
                                        *((char *)&a5) = *((char *)(v9 + v70 * 2));
                                        *((short *)((char *)&a5 + 8)) = *((short *)(v7 + v70 * 2));
                                    }
                                    a8 = addr + 1;
                                    goto LABEL_1000c8aca;
                                }
                                else
                                {
LABEL_1000c8ac5:
                                    *((char *)&a5) = 99;
LABEL_1000c8aca:
                                    v71 = v48 >> ((char)(node & 4294967295) & 31);
                                    if ((unsigned int)v71 < j)
                                    {
                                        do
                                        {
                                            *((uint128_t *)(ptr10 + (v71 & 4294967295) * 16)) = a5;
                                            v71 += (unsigned int)v17 << ((char)((v25 & 4294967295) - node) & 31);
                                        } while ((unsigned int)v71 < j);
                                    }
                                    for (k = (v17 & 4294967295) << ((char)v4 & 31); (k & v48); k >>= 1)
                                    {
                                        v48 ^= k;
                                    }
                                    v48 ^= k;
                                    while (true)
                                    {
                                        if (((unsigned int)(((unsigned int)v17 << ((char)(node & 4294967295) & 31)) - v17) & v48) == (&vvar_567{r112|8b})[ptr7])
                                            break;
                                        cur -= v17;
                                        if ((char)(ptr7 - v17 >> 63))
                                            goto LABEL_1000c8998;
                                        node -= v30;
                                        ptr7 -= v17;
                                    }
                                }
                            } while ((addr = a8, v54 = v1, a5 = a5, v53));
                            i = v2;
                            v52 = v4;
                            v52 += v17;
                            v25 += v17;
                            v4 = v52;
                        } while ((unsigned int)v25 <= i);
                        goto LABEL_1000c8b78;
                    }
                    else
                    {
LABEL_1000c8b78:
                        break;
                    }
                }
LABEL_1000c8998:
                break;
            }
        }
    }
    return sub_1000c8b99();
}
