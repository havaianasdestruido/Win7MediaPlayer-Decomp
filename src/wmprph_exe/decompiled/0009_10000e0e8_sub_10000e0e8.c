/* sub_10000e0e8 @ 0x10000e0e8
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000e0e8  (241 bytes, 27 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 395fce3d66ab1ed9a4fb2238172eaefc5cf78fc7a8b34c30686d638d16d9efca
 *   Evidence: analysis/report/rea-evidence/wmprph_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned int field_8;
    char field_c;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

long long sub_10000e0e8(void)
{
    int v1;  // eax
    int v2;  // edi
    unsigned long v11;  // rsi
    unsigned long v12;  // rdx
    void* p;  // r11
    unsigned long v14;  // rdx
    unsigned long v15;  // r8
    void* cur;  // rcx
    unsigned long v17;  // rdx
    unsigned long v18;  // rdx
    unsigned long v19;  // rdx
    unsigned long v20;  // rsi
    struct_0 *ptr;  // rbx
    unsigned long v21;  // rdx
    unsigned long v4;  // rdx
    unsigned short *iter;  // rcx
    unsigned long v6;  // r8
    unsigned long v7;  // rdx
    unsigned short *addr;  // rcx
    unsigned long i;  // rdx
    unsigned long v10;  // rdx

    v2 = v1 + 1;
    if (v2 >= vvar_107{r56|8b})
    {
        if ((ptr->field_c & 32))
        {
            v4 = ptr->field_8;
            iter = &ptr->field_0->field_0;
            v6 = v2 - 1;
            if (v4 == vvar_107{r56|8b})
                goto LABEL_0x10000e1d9;
            if (v4 > 2147483647)
                goto LABEL_0x10000e1d9;
            if (v6 <= 2147483646)
            {
                v7 = v4;
                addr = iter;
                do
                {
                    iter = addr;
                    i = v7;
                    v10 = i;
                    if (v6 - v4 + v10 == vvar_107{r56|8b} || !((v10 = i, *((short *)(v11 - iter + iter)) != (unsigned short)vvar_107{r56|8b})))
                        break;
                    *(iter) = *((short *)(v11 - (char *)iter + iter));
                    v12 = i - 1;
                    v10 = v12;
                    v7 = v12;
                    addr = iter + 1;
                } while (i != 1);
                if (v10 == vvar_107{r56|8b})
                    iter += 1;
            }
            *(iter) = vvar_107{r56|8b};
        }
        else
        {
            p = sub_10000e6f0(ptr, v2);
            if (p != vvar_107{r56|8b})
            {
                v14 = v2;
                v15 = v2 - 1;
                if (v14 != vvar_107{r56|8b} && v14 <= 2147483647)
                {
                    if (v15 > 2147483646)
                    {
                        *((unsigned short *)p) = vvar_107{r56|8b};
                    }
                    else
                    {
                        cur = p;
                        v17 = v14;
                        do
                        {
                            v18 = v17;
                            v19 = v18;
                            if (v15 - v14 + v19 == vvar_107{r56|8b} || !((v19 = v18, *((short *)(v20 - p + cur)) != (unsigned short)vvar_107{r56|8b})))
                                break;
                        } while ((*((short *)cur) = *((short *)(v20 - p + cur)), cur += 2, v21 = (unsigned long)(v18 - 1), v19 = v21, v17 = v21, v18 != 1));
                        if (v19 == vvar_107{r56|8b})
                            cur -= 2;
                        *((unsigned short *)cur) = vvar_107{r56|8b};
                    }
                }
                sub_10000e7d4(ptr, p);
            }
        }
    }
}
