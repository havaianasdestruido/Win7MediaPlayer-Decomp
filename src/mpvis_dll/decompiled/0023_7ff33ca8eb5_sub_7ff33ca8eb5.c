/* sub_7ff33ca8eb5 @ 0x7ff33ca8eb5
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33ca8eb5  (210 bytes, 25 basic blocks)
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

int sub_7ff33ca8eb5(void)
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
            8792667325544();
        if ((int)sub_7ff33ca9944(v6, v4) < (int)v5)
            8792667324640();
        v9 = v8;
        if (v9 != 8)
        {
            if (v9 == 17)
            {
                8792667325080();
            }
            else if (v9 == 19)
            {
                8792667325328();
            }
            else if ((int)sub_7ff33ca9944(v2, v1) < (int)v5)
            {
                8792667324640();
            }
            else
            {
                8792667324640();
            }
        }
        else
        {
            if (v3 != (char)v5)
                8792667325080();
            8792667325080();
        }
    }
}
