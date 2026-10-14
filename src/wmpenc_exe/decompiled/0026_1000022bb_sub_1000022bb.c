/* sub_1000022bb @ 0x1000022bb
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x1000022bb  (114 bytes, 11 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): b8b174ae012a8a25a9d706f7f169e7a2553ab8ffe0ccef2beb34fe803ec0634a
 *   Evidence: analysis/report/rea-evidence/wmpenc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[48];
    unsigned short field_30;
} struct_0;

long long sub_1000022bb(void)
{
    unsigned int v2;  // eax
    unsigned int v3;  // r13d
    unsigned long long v4;  // rdi
    struct_0 *v5;  // r15
    struct_0 *ptr;  // rsi
    char v0;  // [bp+0x0]

    v3 = v2 + 1;
    v4 = v3 * 2;
    if (v4 <= 0x400 && (char)sub_100001c38(v4) != *((char *)&v5))
    {
        vvar_52{r48|8b} = (int)&(&v0)[-1 * sub_100005700()];
        ptr = vvar_52{r48|8b} + 48;
        if (ptr == v5)
            goto LABEL_0x100002346;
        *((unsigned int *)(vvar_52{r48|8b} + 40)) = v3;
        *((unsigned short *)&ptr->padding_0[0]) = *((unsigned short *)&v5);
        *((struct_0 **)(vvar_52{r48|8b} + 32)) = ptr;
        4296016104();
    }
    if (v4 + 16 < v4)
        goto LABEL_0x100002346;
    4296016400();
}
