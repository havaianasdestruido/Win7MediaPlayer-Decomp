/* sub_7ff33cb12c8 @ 0x7ff33cb12c8
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb12c8  (231 bytes, 17 basic blocks)
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

int sub_7ff33cb12c8(void)
{
    void* ptr;  // rcx
    unsigned int flag;  // ecx
    unsigned long v3;  // 4129
    unsigned int v4;  // ecx
    unsigned int v5;  // eax
    unsigned int v6;  // ecx
    unsigned long v7;  // rax

    if (!(char)ptr[1313])
        return;
    flag = (int)ptr[80];
    if (!flag)
    {
        v5 = (int)ptr[1320];
        v6 = (int)ptr[84] * 22;
        *((unsigned int *)&ptr[1320]) = v5 + 1;
        if (v5 <= v6)
            8792667067092();
        *((unsigned int *)&ptr[1316]) = 22;
    }
    else if (flag == 1)
    {
        v3 = (int)ptr[84];
        v4 = (int)ptr[1320];
        *((unsigned int *)&ptr[1320]) = v4 + 1;
        if ((unsigned int)v3 <= 0 || !v4 % (int)ptr[84])
            *((unsigned int *)&ptr[1316]) = (int)ptr[1316] + 1;
    }
    else if (flag == 2)
    {
        8792667324584();
    }
    v7 = (int)ptr[1316];
    if ((unsigned int)v7 < 22 && *((long long *)(248 + (char *)ptr + 48 * v7)))
        return;
    *((char *)&ptr[1313]) = 0;
    return;
}
