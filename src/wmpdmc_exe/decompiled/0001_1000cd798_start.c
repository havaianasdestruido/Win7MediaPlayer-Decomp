/* _start @ 0x1000cd798
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000cd798  (58 bytes, 3 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3f6564d520c416147702a463a50724fd36c46c3a44a8447af89788586fc5efee
 *   Evidence: analysis/report/rea-evidence/wmpdmc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

void _start(void)
{
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rdi
    unsigned long long v7;  // r12
    unsigned long long v8;  // r13
    unsigned int flag;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x8]
    unsigned long long v2;  // [bp+0x8]
    unsigned long long v3;  // [bp+0x10]
    unsigned long long v4;  // [bp+0x18]

    sub_1000cde34();
    v2 = v5;
    v3 = v6;
    v4 = v7;
    v1 = v8;
    flag = 0;
    4297065432();
}
