/* sub_7ff3b13c848 @ 0x7ff3b13c848
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b13c848  (529 bytes, 29 basic blocks)
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

int sub_7ff3b13c848(void)
{
    unsigned long long v1[59];  // rcx
    unsigned long long v2[59];  // rdi
    unsigned int v3;  // edx

    v2 = &v1[21];
    if (!v3 && !v1[32])
        8792790008288();
    sub_7ff3b141a54(v2, 1027, &v1[33], v3);
    if (!v3 && !v1[52])
        8792790008288();
    sub_7ff3b141a54(v2, 1007, &v1[1 + 38], v3);
    if (!v3)
    {
        if (!v1[53])
        {
            8792790008288();
        }
        else if (!v3 && !v1[54])
        {
            8792790008288();
        }
    }
    sub_7ff3b141a54(v2, 1011, v1 + 1, v3);
    sub_7ff3b141a54(v2, 1016, &v1[1 + 19], v3);
    if (v3)
    {
        return;
    }
    else if (!v1[55])
    {
        8792790008288();
    }
    else if (v3)
    {
        return;
    }
    else if (!v1[56])
    {
        8792790008288();
    }
    else if (v3)
    {
        return;
    }
    else if (!v1[57])
    {
        8792790008288();
    }
    else if (v3)
    {
        return;
    }
    else if (!v1[58])
    {
        8792790008288();
    }
    else
    {
        return;
    }
}
