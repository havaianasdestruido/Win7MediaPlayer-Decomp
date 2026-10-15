/* sub_1000016a0 @ 0x1000016a0
 *
 * MODULE   : wmpconfig_exe  (bin/wmpconfig.exe)
 * ADDRESS  : 0x1000016a0  (47 bytes, 5 basic blocks)
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

unsigned int sub_1000016a0(void* ptr)
{
    void* p;  // rcx
    unsigned int v2;  // eax

    if (*((short *)ptr) != 23117)
        return 0;
    p = (int)ptr[60] + ptr;
    v2 = 0;
    if (*((int *)p) == 17744)
        v2 = (short)p[24] == 523;
    return v2;
}
