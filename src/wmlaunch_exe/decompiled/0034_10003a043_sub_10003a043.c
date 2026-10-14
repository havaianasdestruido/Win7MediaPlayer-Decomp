/* sub_10003a043 @ 0x10003a043
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10003a043  (286 bytes, 24 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 8ea713b95f32c31a11bb1dded4cc8b9620014600f122fff3852c082d9af67b1b
 *   Evidence: analysis/report/rea-evidence/wmlaunch_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern char g_10002c940;

void sub_10003a043(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned int *a19, unsigned int a20)
{
    char *v3;  // rax
    char *v4;  // r15
    unsigned int node;  // r13d
    unsigned short *cur;  // r14
    unsigned long v14;  // rax
    unsigned long long v15;  // rsi
    unsigned int v5;  // edi
    char *iter;  // r15
    unsigned int *v7;  // r13
    unsigned int *ptr;  // r13
    unsigned int v9;  // r14d
    unsigned int v10;  // r14d
    unsigned int ptr3;  // r12d
    char *v1;  // [bp+0x20]
    unsigned short v2;  // [bp+0x100008]

    a7 = v3;
    if (v3 != v4)
    {
        a6 = v4;
        a5 = v4;
        a4 = v5;
        v1 = v3;
        4296016096();
    }
    if (2147942414 < (unsigned int)v4)
        goto LABEL_0x10003a19d;
    if (v3 == v4)
        goto LABEL_0x10003a19d;
    v15 = v4 & 4294967295;
    iter = v3;
    ptr = v7;
    v10 = v9;
    if (*(v3))
    {
        ptr3 = 1;
        node = 3;
        cur = (unsigned short *)vvar_147{r56|8b};
        do
        {
            v14 = *(iter);
            if ((&g_10002c940)[v14])
            {
                if (vvar_147{r56|8b} && node < a20)
                    sub_100036e7c(vvar_147{r56|8b} + (v15 & 4294967295) * 2, a20 - v15, L"%%%.2X", v14 & 255);
                v15 = (unsigned int)v15 + 3;
                node += 3;
                ptr3 += 3;
                cur += 3;
            }
            else
            {
                if (vvar_147{r56|8b} && ptr3 < a20)
                    *(cur) = v14;
                v15 = (unsigned int)v15 + 1;
                node += 1;
                ptr3 += 1;
                cur += 1;
            }
        } while ((iter += 1, *(iter)));
        ptr = a19;
        v10 = a20;
    }
    if (vvar_147{r56|8b})
    {
        if ((unsigned int)v15 < v10)
            *((unsigned short *)(vvar_147{r56|8b} + (v15 & 4294967295) * 2)) = 0;
        else
            v2 = 0;
    }
    *(ptr) = (unsigned int)v15 + 1;
    4295207382();
}
