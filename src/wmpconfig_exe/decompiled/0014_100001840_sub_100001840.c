/* sub_100001840 @ 0x100001840
 *
 * MODULE   : wmpconfig_exe  (bin/wmpconfig.exe)
 * ADDRESS  : 0x100001840  (72 bytes, 4 basic blocks)
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

extern unsigned long long g_100002110;
extern unsigned long long g_100002118;

unsigned long long sub_100001840(void)
{
    unsigned long long flag;  // [bp+0x8]

    flag = 0;
    if (g_100002110 != 47936899621426)
    {
        g_100002118 = ~(g_100002110);
        return ~(g_100002110);
    }
    4296015936();
}
