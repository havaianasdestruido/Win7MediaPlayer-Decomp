/* sub_10000e60a @ 0x10000e60a
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000e60a  (155 bytes, 16 basic blocks)
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

long long sub_10000e60a(void)
{
    unsigned int v3;  // eax
    void* ptr;  // rdi
    unsigned long v12;  // rsi
    unsigned long v13;  // rcx
    unsigned short *v14;  // rsi
    unsigned long v5;  // rcx
    unsigned short *cur;  // rdx
    int v7;  // ebx
    unsigned long v8;  // rcx
    unsigned short *p;  // rdx
    unsigned long i;  // rcx
    unsigned long v11;  // rcx
    unsigned long v1;  // [bp+0x38]

    if (v3 == vvar_74{r56|8b})
        goto LABEL_0x10000e6ac;
    if (!((char)ptr[12] & 32))
    {
        sub_10000e1f8(ptr);
        *((unsigned short **)ptr) = v14;
        *((unsigned short *)&ptr[12]) = (short)ptr[12] & 65423;
        v1 = vvar_74{r56|8b};
    }
    v5 = (int)ptr[8];
    cur = *((long long *)ptr);
    v7 = vvar_74{r56|8b};
    if (v5 == vvar_74{r56|8b} || v5 > 2147483647)
        v7 = -2147024809;
    if (v7 < vvar_74{r56|8b})
        goto LABEL_0x10000e6c0;
    if (v5 != vvar_74{r56|8b})
    {
        v8 = v5;
        p = cur;
        do
        {
            cur = p;
            i = v8;
            v11 = i;
            if (2147483646 - v5 + v11 == vvar_74{r56|8b} || !((v11 = i, *((short *)(v12 - cur + cur)) != (unsigned short)vvar_74{r56|8b})))
                break;
            *(cur) = *((short *)(v12 - (char *)cur + cur));
            v13 = i - 1;
            v11 = v13;
            v8 = v13;
            p = cur + 1;
        } while (i != 1);
        if (v11 != vvar_74{r56|8b})
            *(cur) = vvar_74{r56|8b};
    }
    cur += 1;
    *(cur) = vvar_74{r56|8b};
}
