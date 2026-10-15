/* sub_7ff24f94930 @ 0x7ff24f94930
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f94930  (24 bytes, 6 basic blocks)
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

long long sub_7ff24f94930(void)
{
    int v1;  // eax
    unsigned long v2;  // rax
    unsigned long idx;  // rdi
    unsigned long ptr;  // rsi

    if (v1 >= vvar_19{r56|4b} && !((v2 = (unsigned long)(long long)v1, v2 > idx)))
        if (v2 != idx)
            goto LABEL_0x7ff24f94948;
    *((short *)(ptr + idx * 2)) = vvar_19{r56|4b};
}
