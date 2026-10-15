/* sub_100001824 @ 0x100001824
 *
 * MODULE   : wmpshare_exe  (bin/wmpshare.exe)
 * ADDRESS  : 0x100001824  (53 bytes, 8 basic blocks)
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
    char padding_0[92];
    unsigned short field_5c;
} struct_0;

unsigned int sub_100001824(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    void* v1;  // rax
    struct_0 *v2;  // rax
    unsigned int v3;  // ebx

    if (v1)
    {
        v2 = sub_1000017b8(v1);
        if (v2)
        {
            if (v2->field_5c == 2)
            {
                return 2;
            }
            else if (v2->field_5c == 3)
            {
                return 1;
            }
        }
    }
    return v3;
}
