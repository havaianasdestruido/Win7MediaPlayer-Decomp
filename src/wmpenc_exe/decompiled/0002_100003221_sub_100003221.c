/* sub_100003221 @ 0x100003221
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100003221  (504 bytes, 42 basic blocks)
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

long long sub_100003221(void)
{
    unsigned int v15;  // eax
    unsigned int v16;  // eax
    unsigned long long v26;  // rbx
    unsigned int v17;  // eax
    unsigned short *v18;  // rax
    unsigned long long v19;  // rcx
    unsigned long long v20;  // rsi
    unsigned long long v21;  // rbx
    unsigned short *v22;  // rdi
    char v0;  // [bp-0x1b0]
    long long v2;  // [bp+0x20]
    unsigned short *v3;  // [bp+0x100008]
    unsigned int v4;  // [bp+0x100010]
    long long v5;  // [bp+0x100018]
    unsigned long long v6;  // [bp+0x100020]
    unsigned long long v7;  // [bp+0x100028]
    unsigned int v8;  // [bp+0x100030]
    unsigned long long v9;  // [bp+0x100038]
    char *v10;  // [bp+0x100048], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp+0x100058]
    unsigned long long v12;  // [bp+0x100060]
    unsigned long long v13;  // [bp+0x100068]
    unsigned int v14;  // [bp+0x100308]

    if (!v15)
    {
        v16 = sub_1000023c0(v5, vvar_21{r56|8b} + 144);
        v4 = v16;
        if (v16 < 0)
            goto LABEL_0x10000337b;
        v17 = sub_1000023c0(v5, v3);
        v4 = v17;
        if (v17 < 0)
            goto LABEL_0x10000337b;
        v18 = v3;
        if (*(v18) == 61)
        {
            if (v8)
            {
                v19 = v9;
                v12 = 0;
                v13 = 0;
                v11 = v19;
                *((char *)&v2) = 0;
                sub_100002548(v5, vvar_21{r56|8b} + 80, vvar_21{r56|8b} + 144, v18, v2); /* do not return */
            }
            if (v14)
                sub_100002b88(v5); /* do not return */
            v7 = 0;
            v6 = 0;
            4296015904();
        }
        else if (v20)
        {
            4296015920();
        }
        else
        {
            if (!v21)
                goto LABEL_0x1000039bf;
            4296016408();
        }
    }
    else
    {
        if (*(v22))
        {
            if (*(v22) != 92)
            {
                4296016320();
            }
            else if (v22)
            {
                if (v20)
                    4296015920();
                if (!v21)
                    goto LABEL_0x1000039bf;
                4296016408();
            }
        }
        if (v8)
        {
            v6 = 0;
            4296015904();
        }
        else if (!v14)
        {
            v6 = 0;
            4296015904();
        }
        else
        {
            if (!v10)
            {
                if ((char)sub_100001c38(520))
                {
                    v10 = &v0;
                    if (!&v0)
                    {
                        if (v20)
                        {
                            4296015920();
                        }
                        else if (v26)
                        {
                            4296016408();
                        }
                    }
                }
                else
                {
                    4296016400();
                }
            }
            4296016088();
        }
    }
}
