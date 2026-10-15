/* sub_1000052fc @ 0x1000052fc
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x1000052fc  (79 bytes, 8 basic blocks)
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

void* sub_1000052fc(void* ptr)
{
    void* v2;  // rdx
    void* v0;  // [bp-0x18]

    v2 = NULL;
    if (!ptr)
    {
        return NULL;
    }
    else if (ptr != 0xffffffffffffffff)
    {
        if (*((short *)ptr) == 23117 && (int)ptr[60] >= 0 && (int)ptr[60] < 0x10000000)
        {
            v2 = (int)ptr[60] + ptr;
            v0 = v2;
            if (*((int *)v2) != 17744)
                v2 = NULL;
            v0 = v2;
        }
        return v2;
    }
    else
    {
        return NULL;
    }
}
