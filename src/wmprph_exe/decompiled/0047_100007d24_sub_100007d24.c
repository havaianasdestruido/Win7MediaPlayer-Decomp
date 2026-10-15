/* sub_100007d24 @ 0x100007d24
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100007d24  (254 bytes, 12 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 395fce3d66ab1ed9a4fb2238172eaefc5cf78fc7a8b34c30686d638d16d9efca
 *   Evidence: analysis/report/rea-evidence/wmprph_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

uint128_t * sub_100007d24(unsigned long a0, uint128_t *p, void* ptr)
{
    int v5;  // eax
    int v6;  // eax
    int v15;  // xmm2
    int v17;  // xmm0
    int v18;  // eax
    int v19;  // eax
    int v7;  // r11d
    int v8;  // r10d
    int v9;  // ecx
    int v10;  // r8d
    int v11;  // eax
    unsigned long v12;  // xmm2lq
    unsigned long v13;  // xmm0lq
    int v0;  // [bp-0x18], Other Possible Types: uint128_t
    unsigned int flag;  // [bp-0x14]
    unsigned int choice;  // [bp-0x10]
    unsigned int flag2;  // [bp-0xc]

    v5 = (int)ptr[8] - *((int *)ptr);
    v6 = (int)ptr[4] - (int)ptr[12];
    v7 = (v5 ^ v5 >> 31) - (v5 >> 31);
    v8 = (v6 ^ v6 >> 31) - (v6 >> 31);
    if (v7 > 0 && v8 > 0)
    {
        v9 = v7 - 26;
        v10 = v8 - 26;
        flag = 0;
        choice = 0;
        flag2 = 0;
        v11 = v10 - 50;
        if (v9 > 0 && v11 > 0)
        {
            v12 = v9;
            v13 = v11;
            v15 = (int)_INSERT(_INSERT(v12, 0, (int)v12), 8, (int)(v12 >> 32));
            v17 = (int)_INSERT(_INSERT(v13, 0, (int)v13), 8, (int)(v13 >> 32));
            if (((CmpF(4608683618675807573, *((unsigned long long *)&DivV(v15, v17))) & 69 | (char)((CmpF(4608683618675807573, *((unsigned long long *)&DivV(v15, v17))) & 69) >> 6)) & 1) != 1)
                v10 = ((v9 * 3 >> 31 & 3) + v9 * 3 >> 2) + 50;
            else
                v9 = (1431655766 * (v11 * 4) >> 63) + (1431655766 * (v11 * 4) >> 32);
            v18 = (unsigned int)((v7 - v9 & 4294967295) - (v7 - v9 >> 31)) >> 1;
            *((int *)&v0) = v18;
            *((int *)&(&v0)[8]) = v18 + v9;
            v19 = (unsigned int)((v8 - v10 & 4294967295) - (v8 - v10 >> 31)) >> 1;
            *((int *)&(&v0)[4]) = v19;
            *((int *)((char *)&v0 + 12)) = v19 + v10;
        }
        else
        {
            *((unsigned int *)&(&v0)[12]) = 0;
            *((unsigned int *)&(&v0)[4]) = 0;
            *((unsigned int *)&(&v0)[8]) = 0;
            *((unsigned int *)&v0) = 0;
        }
    }
    else
    {
        v0 = *((int128_t *)ptr);
    }
    *(p) = v0;
    return p;
}
