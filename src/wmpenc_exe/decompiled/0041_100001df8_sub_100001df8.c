/* sub_100001df8 @ 0x100001df8
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100001df8  (89 bytes, 8 basic blocks)
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

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
    struct struct_2 *field_10;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

void sub_100001df8(struct_0 *a0, unsigned long a1)
{
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rdi
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v1;  // [bp+0x8]

    v1 = v2;
    v0 = v3;
    if (!a0->field_8 && !a0->field_10)
        4296016032();
    if (a0->field_8)
    {
        a0->field_8();
    }
    else if (a0->field_10)
    {
        a0->field_10();
    }
    else
    {
        4296015952();
    }
}
