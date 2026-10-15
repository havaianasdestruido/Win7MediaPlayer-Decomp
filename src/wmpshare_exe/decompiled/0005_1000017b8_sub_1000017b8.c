/* sub_1000017b8 @ 0x1000017b8
 *
 * MODULE   : wmpshare_exe  (bin/wmpshare.exe)
 * ADDRESS  : 0x1000017b8  (79 bytes, 8 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): ab95a6aa118e853d71b326b68a409f24a6276f47e34ca9e8049f7d49b4825a51
 *   Evidence: analysis/report/rea-evidence/wmpshare_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

void* sub_1000017b8(void* ptr)
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
