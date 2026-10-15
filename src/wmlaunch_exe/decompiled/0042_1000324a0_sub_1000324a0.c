/* sub_1000324a0 @ 0x1000324a0
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x1000324a0  (267 bytes, 21 basic blocks)
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

int sub_1000324a0(void)
{
    long long v3;  // rcx
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    long long v7;  // rdx
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x18], Other Possible Types: unsigned long

    sub_10002fbf0(&v1);
    v4 = sub_100033340(v3, 0, &v1);
    if (v4 >= 0)
        v4 = sub_10002ffec(&v1, 92);
    if (v1)
        4296016320();
    v4 = 2147942487;
    if (v4 < 0)
    {
        sub_100030020(&v1);
        return;
    }
    sub_100030a5c(&v0, v1 + 4);
    v5 = sub_100030630(&v0, "\\");
    if (v5 > 0)
    {
        sub_1000307c8(&v0, v0 + v5 * 2 + 2);
        v6 = sub_100030630(&v0, "\\");
        if (v6 <= 0)
            goto LABEL_100032563;
        *((unsigned short *)(v0 + v6 * 2 + 2)) = 0;
        sub_10002fd60(v7, v1, 4294967295);
    }
    else
    {
LABEL_100032563:
    }
    sub_100030020(&v0);
    sub_100030020(&v1);
    return;
}
