/* sub_100001618 @ 0x100001618
 *
 * MODULE   : wmpconfig_exe  (bin/wmpconfig.exe)
 * ADDRESS  : 0x100001618  (65 bytes, 8 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f1726e36b8a016069b7d9eef811f5ca3799bfed355423f70f51947e67d2ef4f
 *   Evidence: analysis/report/rea-evidence/wmpconfig_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[20];
    unsigned int field_18;
    char padding_1c[4];
    unsigned int field_20;
} struct_0;

unsigned int sub_100001618(struct_0 **ptr)
{
    unsigned int p[9];  // rax
    unsigned int v2;  // eax

    p = *(ptr);
    if (p[0] != 3765269347)
    {
        return 0;
    }
    else if (p[6] == 4)
    {
        v2 = p[8];
        if (v2 != 429065504 && v2 != 429065505 && v2 != 429065506 && v2 != 0x1994000)
            return 0;
        4296016024();
    }
    else
    {
        return 0;
    }
}
