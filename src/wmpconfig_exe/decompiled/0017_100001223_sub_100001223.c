/* sub_100001223 @ 0x100001223
 *
 * MODULE   : wmpconfig_exe  (bin/wmpconfig.exe)
 * ADDRESS  : 0x100001223  (23 bytes, 4 basic blocks)
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

void sub_100001223(void)
{
    unsigned long v1;  // cc_op
    unsigned long v2;  // cc_dep1
    unsigned long v3;  // cc_dep2
    unsigned long v4;  // cc_ndep
    unsigned long v5;  // 4101
    unsigned long long *v6;  // rax

    v5 = _ccall(4, v1, v2, v3, v4);
    if (!((char)v5))
        v6();
    4296015888();
}
