/* sub_100001700 @ 0x100001700
 *
 * MODULE   : wmpshare_exe  (bin/wmpshare.exe)
 * ADDRESS  : 0x100001700  (70 bytes, 6 basic blocks)
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
    char padding_0[6];
    unsigned short field_6;
    char padding_8[12];
    unsigned short field_14;
    char padding_16[38];
    unsigned int field_3c;
} struct_0;

unsigned int [10] sub_100001700(struct_0 *p, unsigned long a1)
{
    unsigned int v1;  // r9d
    struct_0 *ptr;  // r8
    unsigned int v3;  // r11d
    unsigned int cur[10];  // rcx
    unsigned long v5;  // rdx

    v1 = 0;
    ptr = &p->padding_0[p->field_3c];
    v3 = ptr->field_6;
    cur = &ptr->padding_0[ptr->field_14 + 24];
    if (!v3)
        return NULL;
    while (true)
    {
        v5 = cur[3];
        if (a1 >= v5 && a1 < cur[2] + v5)
            return cur;
        v1 += 1;
        cur += 1;
        if (v1 >= v3)
            return NULL;
    }
}
