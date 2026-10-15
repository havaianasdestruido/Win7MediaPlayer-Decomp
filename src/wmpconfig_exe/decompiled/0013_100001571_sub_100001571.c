/* sub_100001571 @ 0x100001571
 *
 * MODULE   : wmpconfig_exe  (bin/wmpconfig.exe)
 * ADDRESS  : 0x100001571  (82 bytes, 4 basic blocks)
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

extern unsigned int _commode;
extern unsigned int _fmode;
extern unsigned int g_100002108;
extern unsigned int g_100002150;
extern unsigned int g_100002154;
extern unsigned long long g_1000026d8;
extern unsigned long long g_1000026e0;

unsigned int sub_100001571(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    g_1000026d8 = 18446744073709551615;
    g_1000026e0 = 18446744073709551615;
    _fmode = g_100002154;
    _commode = g_100002150;
    sub_10000178c(&_commode);
    if (g_100002108)
        return 0;
    4296016056();
}
