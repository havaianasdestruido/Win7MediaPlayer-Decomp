/* sub_100001638 @ 0x100001638
 *
 * MODULE   : wmpshare_exe  (bin/wmpshare.exe)
 * ADDRESS  : 0x100001638  (65 bytes, 8 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): ab95a6aa118e853d71b326b68a409f24a6276f47e34ca9e8049f7d49b4825a51
 *   Evidence: analysis/report/rea-evidence/wmpshare_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[20];
    unsigned int field_18;
    char padding_1c[4];
    unsigned int field_20;
} struct_0;

unsigned int sub_100001638(struct_0 **ptr)
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
        4296016056();
    }
    else
    {
        return 0;
    }
}
