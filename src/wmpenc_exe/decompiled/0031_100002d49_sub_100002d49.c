/* sub_100002d49 @ 0x100002d49
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100002d49  (113 bytes, 10 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): b8b174ae012a8a25a9d706f7f169e7a2553ab8ffe0ccef2beb34fe803ec0634a
 *   Evidence: analysis/report/rea-evidence/wmpenc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_1 {
    unsigned long long field_0;
    struct struct_0 *field_8;
} struct_1;

typedef struct struct_0 {
    char padding_0[8];
    int field_8;
} struct_0;

int sub_100002d49(void)
{
    struct_1 *v1;  // rsi
    unsigned short *v2;  // rbp

    if (v1->field_8->field_8 > 0)
        4296016152();
    v2 = NULL;
    if (1)
        goto LABEL_0x100002d88;
    else
        goto LABEL_0x100002ddb;
}
