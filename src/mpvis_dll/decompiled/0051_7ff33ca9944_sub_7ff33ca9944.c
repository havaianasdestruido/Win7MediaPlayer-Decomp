/* sub_7ff33ca9944 @ 0x7ff33ca9944
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33ca9944  (172 bytes, 18 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 5b1cf8de17dc039349e1af0bc0d728e3de3c0a96d9c50e81fc909b8ceb4927e0
 *   Evidence: analysis/report/rea-evidence/mpvis_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned short field_0;
} struct_0;

int sub_7ff33ca9944(void)
{
    struct_0 **ptr;  // rcx
    unsigned short *p;  // rcx
    unsigned int v3;  // eax
    unsigned int v4;  // eax
    unsigned short *addr;  // rdx

    p = &*(ptr)->field_0;
    v3 = *(p);
    if (v3 >= 9 && (v3 <= 10 || v3 == 13 || v3 == 32))
        8792667325544();
    if (!*(p))
    {
        return;
    }
    else if (*(p) == 39)
    {
        8792667325544();
    }
    else
    {
        v4 = *(ptr)->field_0;
        if (v4 >= 9 && (v4 <= 10 || v4 == 13 || v4 == 32))
        {
            *(addr) = 0;
            return;
        }
        8792667325544();
    }
}
