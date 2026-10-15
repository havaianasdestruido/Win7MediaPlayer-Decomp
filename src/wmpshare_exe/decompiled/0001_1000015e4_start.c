/* _start @ 0x1000015e4
 *
 * MODULE   : wmpshare_exe  (bin/wmpshare.exe)
 * ADDRESS  : 0x1000015e4  (53 bytes, 3 basic blocks)
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

void _start(void)
{
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rdi
    unsigned long long v6;  // r12
    unsigned int flag;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x8]
    unsigned long long v2;  // [bp+0x8]
    unsigned long long v3;  // [bp+0x10]

    sub_100001860();
    v2 = v4;
    v3 = v5;
    v1 = v6;
    flag = 0;
    4296016032();
}
