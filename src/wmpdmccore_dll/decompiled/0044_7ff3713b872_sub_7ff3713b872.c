/* sub_7ff3713b872 @ 0x7ff3713b872
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3713b872  (487 bytes, 34 basic blocks)
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
    char padding_0[160];
    struct struct_1 *field_a0;
} struct_0;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_6 {
    struct struct_4 *field_0;
} struct_6;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_4 {
    char padding_0[16];
    struct struct_5 *field_10;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;


int sub_7ff3713b872(void)
{
    unsigned long v12;  // rax
    char v5;  // [bp+0x90]

    if (v12 == vvar_26{r56|8b})
        sub_7ff3711849c(2147942414); /* do not return */
    sub_7ff3711ff24(&v5, &vvar_24{r16|8b});
    if (v12 == L"video")
    {
        sub_7ff3711ff24(&v5, &vvar_24{r16|8b});
        8792722900160();
    }
    8792722900160();
}
