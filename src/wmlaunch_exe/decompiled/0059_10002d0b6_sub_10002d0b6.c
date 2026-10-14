/* sub_10002d0b6 @ 0x10002d0b6
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10002d0b6  (177 bytes, 18 basic blocks)
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

int sub_10002d0b6(void)
{
    unsigned int v2;  // eax
    char *v3;  // r13
    char v4;  // bl
    unsigned long v5;  // rdi
    char *v6;  // r12
    char v1;  // [bp+0x30]

    if (v3[v2] != v4)
    {
        v5 = v2 + 1;
        if ((unsigned int)v5 <= 0x400 && (char)sub_10002cc3c(v5 & 4294967295))
        {
            v6 = &(&v1)[-1 * sub_10003b0a0()];
        }
        else
        {
            if (v5 + 16 < (v5 & 4294967295))
                v6 = NULL;
            else
                4296016424();
        }
        if (v6)
            4295208928();
    }
    else if (v3)
    {
        4296016192();
    }
    else
    {
        4296016424();
    }
}
