/* _start @ 0x1000015cc
 *
 * MODULE   : wmpconfig_exe  (bin/wmpconfig.exe)
 * ADDRESS  : 0x1000015cc  (58 bytes, 3 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f1726e36b8a016069b7d9eef811f5ca3799bfed355423f70f51947e67d2ef4f
 *   Evidence: analysis/report/rea-evidence/wmpconfig_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
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

    sub_100001840();
    v2 = v5;
    v3 = v6;
    v4 = v7;
    v1 = v8;
    flag = 0;
    4296015992();
}
