/* sub_10002d52d @ 0x10002d52d
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10002d52d  (210 bytes, 25 basic blocks)
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

typedef struct struct_0 {
    unsigned short field_0;
} struct_0;

int sub_10002d52d(void)
{
    long long v4;  // rax
    long long v5;  // r14
    struct_0 **v6;  // r13
    unsigned int v7;  // eax
    unsigned short v8;  // r12w
    unsigned int v9;  // eax
    long long v1;  // [bp+0x100008]
    long long v2;  // [bp+0x100038]
    char v3;  // [bp+0x100098]

    if (v4 != v5)
    {
        v7 = *(v6)->field_0;
        if (v7 >= 9 && (v7 <= 10 || v7 == 13 || v7 == 32))
            4296016400();
        if ((int)sub_10002d27c(v6, v4) < (int)v5)
            4296016432();
        v9 = v8;
        if (v9 != 8)
        {
            if (v9 == 17)
            {
                4296016320();
            }
            else if (v9 == 19)
            {
                4296016936();
            }
            else if ((int)sub_10002d27c(v2, v1) < (int)v5)
            {
                4296016432();
            }
            else
            {
                4296016432();
            }
        }
        else
        {
            if (v3 != (char)v5)
                4296016320();
            4296016320();
        }
    }
}
