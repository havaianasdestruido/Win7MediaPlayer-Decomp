/* sub_7ff24f92e89 @ 0x7ff24f92e89
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f92e89  (126 bytes, 11 basic blocks)
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

void sub_7ff24f92e89(void)
{
    unsigned int v2;  // eax
    unsigned int v3;  // ebx
    long long v4;  // rsi
    unsigned int v1;  // [bp+0x20]

    if (!v2)
        goto LABEL_0x7ff24f92fdb;
    v1 &= v3;
    if ((int)sub_7ff24f93c8c(v4 - 8, &v1) < 0)
        goto LABEL_0x7ff24f92fdb;
    if (v1 == v3)
        goto LABEL_0x7ff24f92fdb;
    v1 &= v3;
    if ((int)sub_7ff24f925c8(L"wmpnetworksvc", &v1) < 0)
        goto LABEL_0x7ff24f92fdb;
    if (v1 == v3)
        goto LABEL_0x7ff24f92fdb;
    v1 = 1;
    if ((int)sub_7ff24f928ec(&v1) < 0)
        goto LABEL_0x7ff24f92fdb;
    if (v1 != v3)
        goto LABEL_0x7ff24f92fdb;
    8792418812368();
}
