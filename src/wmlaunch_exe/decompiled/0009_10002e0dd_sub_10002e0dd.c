/* sub_10002e0dd @ 0x10002e0dd
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10002e0dd  (504 bytes, 42 basic blocks)
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

int sub_10002e0dd(void)
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
        v16 = sub_10002d27c(v5, vvar_21{r56|8b} + 144);
        v4 = v16;
        if (v16 < 0)
            goto LABEL_0x10002e237;
        v17 = sub_10002d27c(v5, v3);
        v4 = v17;
        if (v17 < 0)
            goto LABEL_0x10002e237;
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
                sub_10002d404(v5, vvar_21{r56|8b} + 80, vvar_21{r56|8b} + 144, v18, v2); /* do not return */
            }
            if (v14)
                sub_10002da44(v5); /* do not return */
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
                goto LABEL_0x10002e87b;
            4296016432();
        }
    }
    else
    {
        if (*(v22))
        {
            if (*(v22) != 92)
            {
                4296016400();
            }
            else if (v22)
            {
                if (v20)
                    4296015920();
                if (!v21)
                    goto LABEL_0x10002e87b;
                4296016432();
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
                if ((char)sub_10002cc3c(520))
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
                            4296016432();
                        }
                    }
                }
                else
                {
                    4296016424();
                }
            }
            4296016296();
        }
    }
}
