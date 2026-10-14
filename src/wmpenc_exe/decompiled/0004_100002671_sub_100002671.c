/* sub_100002671 @ 0x100002671
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100002671  (210 bytes, 25 basic blocks)
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

void sub_100002671(void)
{
    long long v4;  // rax
    long long v5;  // r14
    struct_0 **v6;  // r13
    unsigned int v7;  // eax
    unsigned short v8;  // r12w
    unsigned int v9;  // eax
    long long v1;  // [bp+0x100008]
    long long v2;  // [bp+0x100038]
    char v3;  // [bp+0x100098]

    if (v4 != v5)
    {
        v7 = *(v6)->field_0;
        if (v7 >= 9 && (v7 <= 10 || v7 == 13 || v7 == 32))
            4296016320();
        if ((int)sub_1000023c0(v6, v4) < (int)v5)
            4296016408();
        v9 = v8;
        if (v9 != 8)
        {
            if (v9 == 17)
            {
                4296016112();
            }
            else if (v9 == 19)
            {
                4296016592();
            }
            else if ((int)sub_1000023c0(v2, v1) < (int)v5)
            {
                4296016408();
            }
            else
            {
                4296016408();
            }
        }
        else
        {
            if (v3 != (char)v5)
                4296016112();
            4296016112();
        }
    }
}
