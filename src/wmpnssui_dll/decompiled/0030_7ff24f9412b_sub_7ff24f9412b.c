/* sub_7ff24f9412b @ 0x7ff24f9412b
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f9412b  (104 bytes, 7 basic blocks)
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

void sub_7ff24f9412b(void)
{
    unsigned long long v3;  // rdx
    void* cur;  // rcx
    unsigned long v5;  // rdi
    unsigned int v6;  // eax
    unsigned long long v7;  // rdx
    char v2;  // [bp+0x13e]

    v3 = 260;
    cur = &v2 + 2;
    do
    {
    } while (v3 + 2147483386 && *((short *)(cur + -2 + v5 + 2 * v6 - &v2)) && (*((short *)cur) = *((short *)(cur + v5 + (long long)(int)v6 * 2 - (&v2 - 2))), cur += 2, v7 = v3 - 1, v3 -= 1, v3 != 1));
    if (!v3)
        cur -= 2;
    *((unsigned short *)cur) = 0;
    8792418812080();
}
