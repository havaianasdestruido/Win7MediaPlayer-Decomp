/* sub_10000c71f @ 0x10000c71f
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000c71f  (166 bytes, 14 basic blocks)
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

long long sub_10000c71f(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, char a5, int a6, unsigned long a7, unsigned long a8, int a9)
{
    unsigned int v2;  // eax
    unsigned int v3;  // edi
    int v4;  // r12d
    unsigned int v5;  // r12d
    unsigned short v6;  // cx
    unsigned long long iter;  // rdx
    unsigned short *cur;  // rax
    char v1;  // [bp+0x260]

    if (v2 == v3)
    {
        if (a6 > v4)
            4296017288();
        a6 = v4;
        4296017128();
    }
    else
    {
        if (v2 == v5)
            4296016248();
        v6 = *((unsigned short *)&a9);
        iter = &a9;
        cur = &v1;
        if (v6 != (unsigned short)v5)
        {
            do
            {
                *(cur) = v6;
                cur += 1;
                if (v6 == 39)
                {
                    *(cur) = 39;
                    cur += 1;
                }
            } while ((iter += 2, v6 = (unsigned short)*((short *)iter), *((short *)iter) != (unsigned short)v5));
        }
        *(cur) = v5;
        sub_10000abac(&vvar_5, L"Module", &v1); /* do not return */
    }
}
