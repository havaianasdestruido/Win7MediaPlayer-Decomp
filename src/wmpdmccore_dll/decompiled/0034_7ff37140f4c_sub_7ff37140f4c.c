/* sub_7ff37140f4c @ 0x7ff37140f4c
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37140f4c  (531 bytes, 37 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 9334fde75c4e6d018f3c698b0a6b5d415f65d71716906af037147b61b3911242
 *   Evidence: analysis/report/rea-evidence/wmpdmccore_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern char g_7ff37116020;

int sub_7ff37140f4c(void)
{
    unsigned int v3;  // r10d
    int v4;  // edx
    unsigned int v12;  // edx
    unsigned int v13;  // eax
    unsigned int v14;  // edx
    unsigned int v15;  // ecx
    unsigned long long v16;  // r11
    unsigned int i;  // r13d
    unsigned int v18;  // edx
    unsigned int v19;  // ebx
    char *cur;  // r8
    unsigned long v5;  // rsi
    unsigned long long v21;  // cc_ndep
    unsigned int j;  // r12d
    unsigned long long v23;  // cc_op
    unsigned long v24;  // cc_dep1
    unsigned long long v25;  // cc_dep2
    unsigned int v26;  // ecx
    int *ptr;  // r9d, Other Possible Types: unsigned int
    unsigned long long l;  // rcx
    char *v6;  // rcx
    unsigned int v31;  // r14d
    unsigned int v32;  // r9d
    unsigned long v34;  // r9
    unsigned int v35;  // edx
    unsigned int k;  // ecx
    unsigned long long v37;  // cc_op
    char *iter;  // rbp
    unsigned long v38;  // cc_dep1
    unsigned long long v39;  // cc_dep2
    unsigned long long v40;  // 4143
    unsigned int v41;  // ebx
    unsigned int v42;  // edx
    unsigned long long v44;  // rdi
    char *v8;  // r8
    unsigned int v9;  // ebx
    unsigned long long v10;  // rsi
    unsigned long long v11;  // r9
    char *v0;  // [bp-0x38]
    unsigned int v2;  // [bp+0x18]

    v3 = 0;
    v5 = v4;
    iter = v6;
    if (!v8 || !ptr || v4 <= 0 || *(ptr) <= 0)
        return;
    v9 = (unsigned int)v5 / 3;
    v10 = v5 - v9 * 3;
    v11 = v4 * 4 / 3 + v10;
    v12 = v11;
    v13 = (unsigned int)v11 / 76 * 76;
    v14 = v12 - v13;
    if (v12 != v13 && ((char)v14 & 3))
        v11 += 4 - (v14 & 3);
    if (*(ptr) >= (2147483647 < (unsigned int)v11 ? 2147483646 : (unsigned int)v11))
    {
        v15 = v9 * 4;
        v16 = 0;
        v2 = v15;
        v0 = &v8[*(ptr)];
        i = 0;
        v18 = 19;
        v19 = (((v15 - (2938661835 * v15 >> 32) & 4294967295) >> 1 & 4294967295) + (2938661835 * v15 >> 32) & 4294967295) >> 6;
        if (0 != v19)
            goto LABEL_7ff37141048;
        while (true)
        {
            v18 = (v15 - v19 * 76 & 4294967295) >> 2;
            do
            {
LABEL_7ff37141048:
                j = 0;
                v23 = 7;
                v24 = v18;
                v25 = 0;
                v26 = v15;
                if (v18 > 0)
                {
                    do
                    {
                        ptr = 0;
                        l = 3;
                        l = v24;
                        do
                        {
                            v21 = _ccall(v23, l, v25, v21);
                            iter += 1;
                            ptr = (ptr | *(iter)) * 0x100;
                            v23 = 8;
                            v25 = 1;
                            l -= 1;
                        } while (l != 1);
                        v31 = 0;
                        do
                        {
                            v32 = ptr;
                            if (cur >= v0)
                                return;
                        } while ((v31 += 1, *(cur) = *((char *)(unsigned long long)((char)(v32 >> 26) + &g_7ff37116020)), cur += 1, ptr = v32 * 64, v31 < 4));
                        v21 = v31 < 4;
                        j += 1;
                        v23 = 7;
                        v24 = j;
                        v25 = v18;
                    } while (j < v18);
                    v26 = v2;
                }
                v15 = v26;
                v21 = (unsigned int)v24 < (unsigned int)v25;
                i += 1;
                v16 = (unsigned int)v16 + v18 * 4;
                if (i > v19)
                {
                    v34 = (unsigned int)v10 + 1;
                    if (!(unsigned int)v10)
                        v34 = 0;
                    if (!(unsigned int)v34)
                    {
                        *(ptr) = v16;
                        return;
                    }
                    v35 = 0;
                    k = 0;
                    do
                    {
                        v37 = 7;
                        v38 = k;
                        v39 = v10 & 4294967295;
                        if (k < (unsigned int)v10)
                        {
                            v35 |= *(iter);
                            v21 = 0;
                            v37 = 24;
                            v38 = iter + 1;
                            v39 = 0;
                            iter += 1;
                        }
                        v40 = _ccall(v37, v38, v39, v21);
                        v21 = v40;
                        k += 1;
                        v35 *= 0x100;
                    } while (k < 3);
                    v41 = 0;
                    if ((unsigned int)v34 > 0)
                    {
                        do
                        {
                            v42 = v35;
                            if (cur >= v0)
                                return;
                        } while ((v41 += 1, *(cur) = *((char *)(unsigned long long)((char)(v42 >> 26) + &g_7ff37116020)), cur += 1, v35 = v42 * 64, v41 < (unsigned int)v34));
                    }
                    v44 = 4 - v34;
                    if ((unsigned int)v34 != 4)
                    {
                        do
                        {
                            if (cur >= v0)
                                return;
                        } while ((v3 += 1, *(cur) = 61, cur += 1, v3 < (unsigned int)v44));
                    }
                    *(ptr) = (unsigned int)v16 + (unsigned int)v34 + (unsigned int)v44;
                    return;
                }
            } while (i != v19);
        }
    }
    return;
}
