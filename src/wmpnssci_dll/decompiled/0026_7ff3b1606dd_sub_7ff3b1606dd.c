/* sub_7ff3b1606dd @ 0x7ff3b1606dd
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b1606dd  (284 bytes, 41 basic blocks)
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

int sub_7ff3b1606dd(void)
{
    unsigned int v1;  // ebx
    unsigned int v2;  // ebx
    unsigned int v11;  // eax
    unsigned int v12;  // eax
    unsigned int v13;  // eax
    unsigned int v14;  // eax
    unsigned int v3;  // eax
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    unsigned int v8;  // eax
    unsigned int v9;  // eax
    unsigned int v10;  // eax

    v2 = -(v1);
    v3 = v2;
    if ((unsigned int)-(v1) < 0)
        v3 = -(v3);
    while (true)
    {
        v4 = v3;
        v5 = v4 >> 1;
        if (!v4 >> 1)
            break;
        v3 = v5;
    }
    v6 = v2;
    if (v2 < 0)
        v6 = -(v6);
    while (true)
    {
        v7 = v6;
        v8 = v7 >> 1;
        if (!v7 >> 1)
            break;
        v6 = v8;
    }
    v9 = v2;
    if (v2 < 0)
        v9 = -(v9);
    while (true)
    {
        v10 = v9;
        v11 = v10 >> 1;
        if (!v10 >> 1)
            break;
        v9 = v11;
    }
    v12 = v2;
    if (v2 < 0)
        v12 = -(v12);
    while (true)
    {
        v13 = v12;
        v14 = v13 >> 1;
        if (!v13 >> 1)
            break;
        v12 = v14;
    }
    8792789424002();
}
