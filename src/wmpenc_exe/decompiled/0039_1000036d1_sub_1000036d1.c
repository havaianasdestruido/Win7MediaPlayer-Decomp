/* sub_1000036d1 @ 0x1000036d1
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x1000036d1  (101 bytes, 8 basic blocks)
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

long long sub_1000036d1(void)
{
    unsigned int v9;  // eax
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rax
    long long v12;  // rdx
    unsigned int v1;  // [bp+0x100010]
    unsigned int flag;  // [bp+0x100028]
    unsigned long long v3;  // [bp+0x100038]
    long long v4;  // [bp+0x100048]
    unsigned int v5;  // [bp+0x100050]
    unsigned long long v6;  // [bp+0x100058]
    unsigned long long v7;  // [bp+0x100060]
    unsigned long long v8;  // [bp+0x100068]

    if (!v9)
    {
        if (flag == 1)
        {
            v1 = 0x1000;
            4296016400();
        }
        if (0 >= flag)
            goto LABEL_1000038bb;
        else
            goto LABEL_0x10000375d;
    }
LABEL_1000038bb:
    if (!v10)
    {
        if (!v5)
            goto LABEL_0x1000038fc;
        v11 = v3;
        v7 = 0;
        v8 = 0;
        v12 = v4;
        v6 = v11;
        sub_100001df8(vvar_12{r56|8b} + 80, v12); /* do not return */
    }
    4296015920();
}
