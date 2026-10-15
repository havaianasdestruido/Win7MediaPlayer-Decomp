/* sub_100002cea @ 0x100002cea
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100002cea  (116 bytes, 11 basic blocks)
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

void sub_100002cea(void)
{
    struct_0 **ptr;  // rsi
    unsigned short *v2;  // rax
    unsigned short *v3;  // r15

    *(ptr) = v2;
    if (*(v2) == 37)
        goto LABEL_0x100002dfa;
    if (v2 != v3 && *(v2) != *((unsigned short *)&v3))
    {
        if (*(v2) != 37)
            4296016320();
        if (v2 == v3)
            goto LABEL_100002d88;
        if ((unsigned int)(v2 - *(ptr) >> 1) <= 31)
            4296016088();
    }
    else
    {
LABEL_100002d88:
    }
    4296016552();
}
