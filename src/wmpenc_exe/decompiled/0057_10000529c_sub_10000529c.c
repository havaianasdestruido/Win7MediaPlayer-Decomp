/* sub_10000529c @ 0x10000529c
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x10000529c  (63 bytes, 6 basic blocks)
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
    char padding_0[36];
    unsigned int field_24;
} struct_0;

extern char g_100000000;

struct_0 * sub_10000529c(unsigned int a0)
{
    struct_0 *v1;  // rax
    struct_0 *v2;  // rax

    v1 = sub_100005210(&g_100000000);
    if (!(unsigned int)v1)
        return v1;
    v2 = sub_100005250(&g_100000000, a0 - &g_100000000);
    if (!v2)
        return v2;
    return ~(v2->field_24 >> 31) & 1;
}
