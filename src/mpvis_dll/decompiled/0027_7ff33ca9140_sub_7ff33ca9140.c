/* sub_7ff33ca9140 @ 0x7ff33ca9140
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33ca9140  (234 bytes, 23 basic blocks)
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
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_7ff33ca9140(void)
{
    unsigned short *v3;  // rax
    unsigned short *v4;  // r14
    struct_0 *v5;  // r13
    unsigned short *v6;  // rdi
    unsigned short *v7;  // rsi
    unsigned short *ptr;  // r15
    unsigned short *v1;  // [bp+0x100008]
    unsigned short *v2;  // [bp+0x100030]

    v2 = v3;
    if (v3 == v4)
    {
        8792667324640();
    }
    else if (*((int *)(v5->field_8 + 8)) > (unsigned int)v4)
    {
        8792667325040();
    }
    else
    {
        v7 = v6;
        if (v4)
        {
            if (*(v4))
            {
                if (*(v6))
                {
                    if (*(v7))
                    {
                        if (!*(v4))
                            goto LABEL_7ff33ca9305;
                        if (*(v7) == *(v4))
                            8792667325544();
                    }
                    if (*(v4))
                        8792667325544();
LABEL_7ff33ca9305:
                    ptr = v2;
                }
                else
                {
                    v7 = NULL;
                }
            }
            if (v7)
            {
                if (v7 != v1)
                    8792667325552();
                *(ptr) = 0;
                8792667325136();
            }
        }
    }
}
