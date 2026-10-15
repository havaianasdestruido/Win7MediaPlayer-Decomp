/* sub_7ff37133d40 @ 0x7ff37133d40
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37133d40  (285 bytes, 31 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 9334fde75c4e6d018f3c698b0a6b5d415f65d71716906af037147b61b3911242
 *   Evidence: analysis/report/rea-evidence/wmpdmccore_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
} struct_1;

int sub_7ff37133d40(void)
{
    struct_0 *ptr;  // rcx
    struct_1 *index;  // rdx
    unsigned long long v0;  // [bp-0x18]
    struct_0 *v1;  // [bp+0x8]

    v1 = ptr;
    v0 = 18446744073709551614;
    ptr->field_0 = index->field_0;
    ptr->field_4 = index->field_4;
    ptr->field_8 = index->field_8;
    if (index->field_10)
        8792722900080();
    ptr->field_10 = 0;
    if (index->field_10)
        sub_7ff3711849c(2147942414); /* do not return */
    if (index->field_18)
        8792722900080();
    ptr->field_18 = 0;
    if (index->field_18)
        sub_7ff3711849c(2147942414); /* do not return */
    if (index->field_20)
        8792722900080();
    ptr->field_20 = 0;
    if (index->field_20)
        sub_7ff3711849c(2147942414); /* do not return */
    if (index->field_28)
        8792722900080();
    ptr->field_28 = 0;
    if (index->field_28)
        sub_7ff3711849c(2147942414); /* do not return */
    if (!index->field_30)
    {
        ptr->field_30 = 0;
        if (!index->field_30)
            return;
        sub_7ff3711849c(2147942414); /* do not return */
    }
    8792722900080();
}
