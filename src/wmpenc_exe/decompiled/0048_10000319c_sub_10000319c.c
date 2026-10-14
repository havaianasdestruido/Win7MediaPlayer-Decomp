/* sub_10000319c @ 0x10000319c
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x10000319c  (101 bytes, 7 basic blocks)
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

extern long long g_100007140;

long long sub_10000319c(void)
{
    unsigned int v7;  // eax
    long long v8;  // rax
    long long v9;  // rdi
    unsigned short *v10;  // rdi
    unsigned int v11;  // eax
    long long v1;  // [bp+0x100008]
    unsigned int v2;  // [bp+0x100010], Other Possible Types: long long
    unsigned long v3;  // [bp+0x100018]
    unsigned int v4;  // [bp+0x100028]
    unsigned long v5;  // [bp+0x100038]
    unsigned long v6;  // [bp+0x100058]

    if (!v7)
    {
        if (!v4)
            goto LABEL_0x1000031d9;
        v11 = sub_1000023c0(v3, v10);
        v2 = v11;
        if (v11 < 0)
            goto LABEL_0x10000337b;
        sub_100002b88(v3, v1); /* do not return */
    }
    v8 = v2 + 8;
    v2 = v8;
    if (v8 < &g_100007140)
        goto LABEL_0x100003190;
    v6 = v5;
    sub_100001ea8(vvar_2{r56|8b} + 80, v9); /* do not return */
}
