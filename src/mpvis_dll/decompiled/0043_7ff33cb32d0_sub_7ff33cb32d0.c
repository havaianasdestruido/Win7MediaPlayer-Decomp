/* sub_7ff33cb32d0 @ 0x7ff33cb32d0
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb32d0  (137 bytes, 19 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 5b1cf8de17dc039349e1af0bc0d728e3de3c0a96d9c50e81fc909b8ceb4927e0
 *   Evidence: analysis/report/rea-evidence/mpvis_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

int sub_7ff33cb32d0(void)
{
    void* ptr;  // rcx
    unsigned int v2;  // r9d
    unsigned int v3;  // ebx
    unsigned int *p;  // r8
    unsigned int v5;  // r10d
    unsigned int *addr;  // rdx
    unsigned int v7;  // edx
    unsigned int v8;  // eax

    v2 = (int)ptr[100];
    v3 = v2 * 2;
    v5 = (v3 <= 0 ? 0 : *(p) % v3 & 4294967295);
    v7 = (v3 <= 0 ? 0 : *(addr) % v3);
    if ((char)ptr[104])
    {
        v8 = (int)ptr[96];
        if (v7 <= v2)
        {
            *(p) = *(p) - (int)ptr[96];
            return;
        }
    }
    else
    {
        if (v5 > v2)
        {
            if ((int)ptr[8] - *(addr) >= v2 || v7 <= v5 - v2)
            {
                *(addr) = *(addr) + (int)ptr[96];
                return;
            }
        }
        else
        {
            if (*(addr) >= v2 || v7 <= v5)
            {
                *(addr) = *(addr) - (int)ptr[96];
                return;
            }
        }
        v8 = (int)ptr[96];
    }
    *(p) = *(p) + v8;
    return;
}
