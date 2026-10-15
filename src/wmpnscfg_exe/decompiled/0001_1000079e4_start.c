/* _start @ 0x1000079e4
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x1000079e4  (58 bytes, 3 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 10888bb9c3799e1e8b010c0f9088ced376aad63a509fce1727c457b022cdc717
 *   Evidence: analysis/report/rea-evidence/wmpnscfg_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
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

    sub_100007e70();
    v2 = v5;
    v3 = v6;
    v4 = v7;
    v1 = v8;
    flag = 0;
    4296016408();
}
