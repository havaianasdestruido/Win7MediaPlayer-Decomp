/* sub_100003785 @ 0x100003785
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100003785  (199 bytes, 10 basic blocks)
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

long long sub_100003785(void)
{
    int v15;  // eax
    long long v16;  // rsi
    unsigned int v17;  // eax
    unsigned short *v18;  // rdx
    unsigned long v19;  // rcx
    unsigned int v20;  // eax
    long long v1;  // [bp+0x20]
    unsigned long long flag6;  // [bp+0x28]
    unsigned long long flag5;  // [bp+0x30]
    unsigned long long flag4;  // [bp+0x38]
    unsigned long long flag3;  // [bp+0x40]
    unsigned long long flag2;  // [bp+0x48]
    unsigned long long choice;  // [bp+0x50]
    unsigned long long flag;  // [bp+0x58]
    unsigned short *v9;  // [bp+0x100008]
    int v10;  // [bp+0x100010], Other Possible Types: unsigned int
    unsigned long v11;  // [bp+0x100018]
    unsigned int v12;  // [bp+0x100028]
    unsigned int v13;  // [bp+0x100070]
    unsigned int v14;  // [bp+0x100308]

    v10 = v15;
    if (v15 < 0)
        goto LABEL_0x10000337b;
    if (*(v9) != 123)
    {
        if (v14)
            goto LABEL_0x100003988;
        flag = 0;
        choice = 0;
        flag2 = 0;
        flag3 = 0;
        flag4 = 0;
        flag5 = 0;
        flag6 = 0;
        v12 = 0;
        4296015880();
    }
    *((unsigned int *)&v1) = v14;
    v17 = sub_100003064(v11, v9, v16, 0, v1);
    v10 = v17;
    if (v17 < 0)
        goto LABEL_0x10000337b;
    if (!v14)
    {
        flag = 0;
        choice = 0;
        flag2 = 0;
        flag3 = 0;
        flag4 = 0;
        flag5 = 0;
        flag6 = 0;
        v12 = 0;
        4296015880();
    }
    v18 = v9;
    v19 = v11;
    v14 = v13;
    v20 = sub_1000023c0(v19, v18);
    v10 = v20;
    if (v20 < 0)
        goto LABEL_0x10000337b;
}
