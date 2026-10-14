/* sub_10000341b @ 0x10000341b
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x10000341b  (171 bytes, 12 basic blocks)
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

long long sub_10000341b(void)
{
    unsigned int v8;  // eax
    unsigned long long v9;  // rsi
    unsigned short *ptr;  // rdi
    unsigned long v11;  // 4113
    unsigned int v12;  // eax
    long long v1;  // [bp+0x20]
    unsigned short *v2;  // [bp+0x100008]
    unsigned int v3;  // [bp+0x100010]
    unsigned long v4;  // [bp+0x100018]
    unsigned long v5;  // [bp+0x100020], Other Possible Types: unsigned long long
    char v6;  // [bp+0x100040]
    unsigned long v7;  // [bp+0x100078]

    if (!v8)
    {
        if (v9)
            4296015920();
        v7 = v5;
        v11 = *(ptr);
        v6 = 0;
        if ((unsigned short)v11 != 76 && *(ptr) != 108)
        {
            v12 = sub_1000023c0(v4, ptr);
            v3 = v12;
            if (v12 < 0)
                goto LABEL_0x10000337b;
            if (*(v2) != 61)
                goto LABEL_0x100003937;
            *((char *)&v1) = *((int *)&v6);
            sub_100002548(v4, vvar_18{r56|8b} + 112, 0, v2, v1); /* do not return */
        }
        4296016152();
    }
    v5 = 0;
    4296015904();
}
