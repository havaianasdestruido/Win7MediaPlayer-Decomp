/* sub_100001f06 @ 0x100001f06
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100001f06  (146 bytes, 10 basic blocks)
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

int sub_100001f06(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long choice, unsigned long flag, unsigned long a6, unsigned long a7, unsigned long long a8, unsigned long a9, unsigned long a10, unsigned long long a11)
{
    unsigned long long v5;  // rcx
    unsigned int v6;  // eax
    char v0;  // [bp+0x0]
    unsigned long long flag2;  // [bp+0x20]
    char v3;  // [bp+0x68]
    unsigned long long v4;  // [bp+0x270]

    v5 = a8;
    if (!v6)
    {
        if (v5)
            4296015920();
        v5 = a11;
        a8 = v5;
        if (!v6)
        {
            a6 = &v3;
            flag = 0;
            choice = 0;
            flag2 = 0;
            a7 = 0x100;
            4296015912();
        }
    }
    if (!v5)
        return sub_100005150(v4 ^ &v0);
    4296015920();
}
