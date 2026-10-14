/* sub_10000e38c @ 0x10000e38c
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000e38c  (67 bytes, 12 basic blocks)
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
    char padding_0[12];
    char field_c;
} struct_0;

long long sub_10000e38c(void)
{
    int v1;  // eax
    int v2;  // r14d
    unsigned long v3;  // rax
    int v4;  // ebx
    long long ptr;  // rsi
    struct_0 *v6;  // rdi

    if (!(v1 >= v2 && !((v3 = (unsigned long)(long long)v1, v3 > vvar_30{r56|8b}))))
    {
        v4 = -2147024774;
    }
    else if (!(v3 == vvar_30{r56|8b}))
    {
        goto LABEL_10000e3a6;
    }
    *((short *)(ptr + vvar_30{r56|8b} * 2)) = v2;
LABEL_10000e3a6:
    if (v4 < v2)
        goto LABEL_0x10000e3c2;
    if ((v6->field_c & 4))
        sub_10000e0b4(v6, ptr, 4294967295);
    else
        sub_10000e7d4(v6, ptr);
}
