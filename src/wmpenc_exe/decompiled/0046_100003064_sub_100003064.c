/* sub_100003064 @ 0x100003064
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100003064  (179 bytes, 7 basic blocks)
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

extern unsigned long long g_100007110;

int sub_100003064(unsigned short **a0, unsigned short *a1, unsigned long long a2, unsigned int a3, unsigned int a4)
{
    int <0x100003064[is_1]|Stack bp-0x2d8, 1 B>;  // [bp-0x2d8]
    unsigned short *v0;  // [bp-0x2d8]
    unsigned short **v1;  // [bp-0x2c8]
    unsigned int v2;  // [bp-0x2b0]
    unsigned long long v3;  // [bp-0x2a8]
    unsigned long long flag4;  // [bp-0x298]
    unsigned int flag;  // [bp-0x290]
    unsigned int v6;  // [bp-0x270]
    unsigned long long choice;  // [bp-0x268]
    unsigned long long flag2;  // [bp-0x260]
    unsigned long long flag3;  // [bp-0x258]
    unsigned long long v10;  // [bp-0x38]

    v10 = g_100007110 ^ &<0x100003064[is_1]|Stack bp-0x2d8, 1 B>;
    v0 = a1;
    choice = 0;
    flag2 = 0;
    flag3 = 0;
    flag4 = 0;
    v2 = a3;
    v3 = a2;
    v6 = a4;
    v1 = a0;
    flag = 1;
    if (sub_1000023c0(a0, a1) >= 0 && *(v0) != 125)
        4296016152();
    return sub_100005150(v10 ^ &v0);
}
