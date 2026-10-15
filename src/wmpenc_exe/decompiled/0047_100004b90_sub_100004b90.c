/* sub_100004b90 @ 0x100004b90
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100004b90  (102 bytes, 7 basic blocks)
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

unsigned int sub_100004b90(unsigned long long a0, unsigned long a1, unsigned long long *ptr)
{
    if (!a0)
    {
        if (ptr)
        {
            *(ptr) = 0;
            4294988162();
        }
    }
    else
    {
        if (ptr)
        {
            *(ptr) = 0;
            return 2147746064;
        }
    }
    return 2147500035;
}
