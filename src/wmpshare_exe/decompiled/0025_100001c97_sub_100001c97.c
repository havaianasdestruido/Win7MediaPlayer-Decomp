/* sub_100001c97 @ 0x100001c97
 *
 * MODULE   : wmpshare_exe  (bin/wmpshare.exe)
 * ADDRESS  : 0x100001c97  (28 bytes, 2 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): ab95a6aa118e853d71b326b68a409f24a6276f47e34ca9e8049f7d49b4825a51
 *   Evidence: analysis/report/rea-evidence/wmpshare_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern unsigned long long g_1000036f8;

void sub_100001c97(void)
{
    unsigned long long ptr[2];  // rax
    unsigned long v2;  // rsi

    if (!ptr)
        goto LABEL_0x100001cbc;
    ptr[1] = v2;
    ptr[0] = g_1000036f8;
    g_1000036f8 = ptr;
}
