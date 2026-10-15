/* sub_100033fb5 @ 0x100033fb5
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100033fb5  (198 bytes, 23 basic blocks)
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

int sub_100033fb5(void)
{
    unsigned short v2[3];  // rdi
    unsigned short iter[3];  // rcx
    unsigned short i;  // ax
    long long v5;  // rsi
    unsigned short cur[3];  // rdx
    unsigned short node[3];  // rcx
    unsigned short v8[3];  // rax
    unsigned short v1[3];  // [bp+0x20]

    v2 = v1;
    iter = v2;
    if (v2[0] != (short)vvar_76{r56|4b})
    {
        do
        {
            if (iter[0] == (i == 47 ? 92 : 47))
                iter[0] = i;
        } while ((iter += 2, iter[0] != (short)vvar_76{r56|4b}));
    }
    if ((char)sub_100033ebc(v5, "f") != (char)vvar_76{r56|4b} && (char)sub_100039db8(v2) != (char)vvar_76{r56|4b})
    {
        cur = &v2[2];
        node = cur;
        if (cur[0] == i)
        {
            do
            {
                node = &node[1];
            } while (node[0] == i);
        }
    }
    else
    {
        cur = v2;
        node = v2;
    }
    for (; node[0] != (short)vvar_76{r56|4b}; cur = &cur[1])
    {
        if (node[0] == i)
        {
            while (true)
            {
                v8 = &node[1];
                if (v8[0] != i)
                    break;
                node = v8;
            }
        }
        if (cur != node)
            cur[0] = node[0];
        node = &node[1];
    }
    cur[0] = vvar_76{r56|4b};
    if ((int)sub_100036024(v5, v2) < vvar_76{r56|4b})
        goto LABEL_0x100034087;
    sub_10002fd60(v5 + 56, v2, 4294967295);
}
