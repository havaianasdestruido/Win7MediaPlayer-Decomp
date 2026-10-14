/* sub_7ff33caf128 @ 0x7ff33caf128
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33caf128  (299 bytes, 19 basic blocks)
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
    int field_0;
    char padding_4[4];
    char field_8;
    char padding_9[3];
    unsigned int field_c;
    unsigned int field_10;
} struct_0;

int sub_7ff33caf128(void)
{
    struct_0 *ptr;  // rcx
    unsigned int flag;  // ecx

    flag = ptr->field_c;
    if (!flag)
    {
        goto LABEL_7ff33caf191;
    }
    else if (flag == 1)
    {
LABEL_7ff33caf191:
    }
    if (ptr->field_10)
    {
        if (ptr->field_10 == 1)
            return;
        return;
    }
    8792667067092();
}
