/* DllGetClassObject @ 0x7ff24f92318
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f92318  (53 bytes, 1 basic blocks)
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

void DllGetClassObject(unsigned long a0, unsigned long a1, unsigned long long *ptr)
{
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rdi
    unsigned long long v9;  // r12
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v1;  // [bp+0x8]
    unsigned long v2;  // [bp+0x10]
    unsigned long long v3;  // [bp+0x18]
    unsigned long long v4;  // [bp+0x20]

    v1 = v6;
    v2 = vvar_5{r56|8b};
    v3 = v7;
    v4 = v8;
    v0 = v9;
    *(ptr) = 0;
    8792418377186();
}
