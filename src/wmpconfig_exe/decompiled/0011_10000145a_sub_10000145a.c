/* sub_10000145a @ 0x10000145a
 *
 * MODULE   : wmpconfig_exe  (bin/wmpconfig.exe)
 * ADDRESS  : 0x10000145a  (38 bytes, 5 basic blocks)
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

extern unsigned int g_100002124;
extern unsigned int g_100002140;
extern char g_100002144;

void sub_10000145a(void)
{
    unsigned int v1;  // eax
    unsigned int v2;  // ebx

    g_100002140 = v1;
    if (g_100002124 == v2)
    {
        4296016088();
    }
    else if (*((int *)&g_100002144) == v2)
    {
        4296016096();
    }
}
