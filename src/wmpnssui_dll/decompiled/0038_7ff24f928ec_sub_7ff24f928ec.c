/* sub_7ff24f928ec @ 0x7ff24f928ec
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f928ec  (122 bytes, 6 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 28d793e5077afb34b57fd3ac404413a60f06a3985fcc4aa16cccb8525411f8bb
 *   Evidence: analysis/report/rea-evidence/wmpnssui_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

int sub_7ff24f928ec(unsigned int *ptr)
{
    unsigned int v3;  // eax
    char *v0;  // [bp-0x28]
    unsigned int choice;  // [bp+0x8]
    char flag;  // [bp+0x10], Other Possible Types: unsigned long long

    *(ptr) = 1;
    choice = 0;
    v3 = sub_7ff24f925c8(L"mpssvc", &choice);
    if (v3 < 0)
    {
        return v3;
    }
    else if (choice)
    {
        v0 = &flag;
        flag = 0;
        8792418812224();
    }
    else
    {
        *(ptr) = 0;
        return v3;
    }
}
