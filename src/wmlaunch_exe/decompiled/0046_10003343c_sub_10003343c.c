/* sub_10003343c @ 0x10003343c
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10003343c  (205 bytes, 20 basic blocks)
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

unsigned int sub_10003343c(long long a0, unsigned int flag, long long a2)
{
    unsigned int v3;  // eax
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x18]

    sub_10002fbf0(&v0);
    sub_10002fbf0(&v1);
    sub_1000332c8(a0);
    if (!a2)
    {
        sub_100030020(&v1);
        sub_100030020(&v0);
        return 2147500035;
    }
    v3 = sub_10002fd60(&v0, a2, 4294967295);
    if (v3 < 0)
    {
        sub_100030020(&v1);
        sub_100030020(&v0);
        return v3;
    }
    if (v0)
        sub_10003046c(&v0);
    if (flag && flag != 2)
    {
        if (flag != 1 && flag != 2)
        {
            sub_100030020(&v1);
            sub_100030020(&v0);
            return (-(0 < flag) & 2) - 1072884953;
        }
        sub_1000355e4(a0); /* do not return */
    }
    sub_100039cf8(v0); /* do not return */
}
