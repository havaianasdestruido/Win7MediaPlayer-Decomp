/* sub_7ff3b141738 @ 0x7ff3b141738
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b141738  (330 bytes, 28 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962
 *   Evidence: analysis/report/rea-evidence/wmpnssci_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

int sub_7ff3b141738(void)
{
    unsigned int v4;  // edi
    unsigned short v5[2];  // rcx
    unsigned int v14;  // ecx
    unsigned int v15;  // eax
    unsigned short cur[2];  // rbx
    unsigned int v17;  // eax
    unsigned int v19;  // eax
    unsigned short iter[2];  // rbx
    long long idx;  // rsi
    unsigned short ptr[2];  // rdx
    unsigned int v9;  // eax
    unsigned short node[2];  // rbx
    unsigned int v11;  // eax
    unsigned int v13;  // eax
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]

    v0 = 4294967295;
    v1 = 4294967295;
    v2 = 4294967295;
    v4 = 0;
    iter = v5;
    idx = 0;
    do
    {
        ptr = iter;
        if (iter[0])
        {
            if (ptr[0] != 44)
                8792790008192();
            for (ptr[0] = 0; iter[0] == 32; iter = &iter[1]);
            v9 = iter[0];
            node = &iter[1];
            if (v9 == 45 || (v11 = v9, v11 == 43))
            {
                node = &node[1];
                v11 = node[0];
            }
            v13 = v11;
            v14 = 0;
            if ((unsigned short)v13 >= 48)
            {
                do
                {
                } while ((unsigned short)v13 <= 57 && (v14 = (unsigned int)((unsigned long long)(unsigned short)v13 + (unsigned long long)(v14 * 5) * 2 - 48), v13 = (unsigned int)node[0], node += 2, v13 >= 48));
            }
            iter = &ptr[1];
            (&v0)[idx] = ((unsigned short)v9 != 45 ? -(v14) : v14);
        }
        if ((&v0)[idx] == 4294967295)
            return;
        idx += 1;
    } while (idx < 2);
    if (!iter[0])
        return;
    for (; iter[0] == 32; iter = &iter[1]);
    v15 = iter[0];
    cur = &iter[1];
    if (v15 == 45 || (v17 = v15, v17 == 43))
    {
        cur = &cur[1];
        v17 = cur[0];
    }
    v19 = v17;
    if ((unsigned short)v19 >= 48)
    {
        do
        {
        } while ((unsigned short)v19 <= 57 && (v4 = (unsigned int)((unsigned long long)(unsigned short)v19 + (unsigned long long)(v4 * 5) * 2 - 48), v19 = (unsigned int)cur[0], cur += 2, v19 >= 48));
    }
    v2 = ((unsigned short)v15 != 45 ? v4 : -(v4));
    return;
}
