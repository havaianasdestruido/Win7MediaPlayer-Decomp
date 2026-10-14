/* sub_100002bad @ 0x100002bad
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100002bad  (136 bytes, 17 basic blocks)
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
    unsigned short field_0;
} struct_0;

unsigned int sub_100002bad(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7)
{
    unsigned short *v1;  // rax
    unsigned short *v2;  // rsi
    struct_0 **v3;  // rdi
    unsigned int v4;  // eax

    if (!v1)
        return 2147942414;
    if (*(v2) != 61)
    {
LABEL_100002c1a:
    }
    else if (sub_1000023c0(v3, v2) >= 0)
    {
        v4 = *(v3)->field_0;
        if (v4 >= 9 && (v4 <= 10 || v4 == 13 || v4 == 32))
            4296016320();
        if (sub_1000023c0(v3, v1) >= 0 && sub_1000023c0(v3, v2) >= 0)
            goto LABEL_100002c1a;
    }
    4296016408();
}
