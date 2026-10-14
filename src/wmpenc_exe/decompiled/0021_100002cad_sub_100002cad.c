/* sub_100002cad @ 0x100002cad
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100002cad  (153 bytes, 12 basic blocks)
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

void sub_100002cad(void)
{
    unsigned long ptr;  // rax
    unsigned long v3;  // r15
    struct_0 **p;  // rsi
    unsigned short *v5;  // rbx
    int v6;  // r13d
    int v7;  // r12d
    int v8;  // r13d
    unsigned long v1;  // [bp+0x100008]

    if (ptr == v3)
        4296016552();
    *(p) = v5;
    if (*(v5) != (unsigned short)v3)
    {
        if (*(p)->field_0 == 37)
        {
            4296016320();
        }
        else if (v6 + 1 > v7)
        {
            4296016568();
        }
        else
        {
            *((unsigned short *)(ptr + v6 * 2)) = *(p)->field_0;
            4296016320();
        }
    }
    else
    {
        if (v6 + 1 > v7)
            4296016568();
        *((unsigned short *)(ptr + v8 * 2)) = *(p)->field_0;
        v1 = ptr;
        4296016552();
    }
}
