/* sub_1000021fa @ 0x1000021fa
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x1000021fa  (177 bytes, 18 basic blocks)
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

long long sub_1000021fa(void)
{
    unsigned int v2;  // eax
    char *v3;  // r13
    char v4;  // bl
    unsigned long v5;  // rdi
    char *v6;  // r12
    char v1;  // [bp+0x30]

    if (v3[v2] != v4)
    {
        v5 = v2 + 1;
        if ((unsigned int)v5 <= 0x400 && (char)sub_100001c38(v5 & 4294967295))
        {
            v6 = &(&v1)[-1 * sub_100005700()];
        }
        else
        {
            if (v5 + 16 < (v5 & 4294967295))
                v6 = NULL;
            else
                4296016400();
        }
        if (v6)
            4294989384();
    }
    else if (v3)
    {
        4296015968();
    }
    else
    {
        4296016400();
    }
}
