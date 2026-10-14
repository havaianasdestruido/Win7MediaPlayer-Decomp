/* sub_100002428 @ 0x100002428
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100002428  (73 bytes, 9 basic blocks)
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

long long sub_100002428(void)
{
    struct_0 **ptr;  // rbx
    unsigned short *v2;  // rax
    unsigned short v3;  // r12w
    unsigned short v4;  // r13w
    unsigned short *p;  // rdi

    *(ptr) = v2;
    if (v3 == *(v2))
    {
        if (v3 == *(ptr)->field_0)
            goto LABEL_0x100002524;
        *(p) = v3;
        4296016320();
    }
    else if (v4 == *(ptr)->field_0)
    {
        4296016320();
    }
    else if (v4 == *(ptr)->field_0)
    {
        4296016320();
    }
    else
    {
        4296016320();
    }
}
