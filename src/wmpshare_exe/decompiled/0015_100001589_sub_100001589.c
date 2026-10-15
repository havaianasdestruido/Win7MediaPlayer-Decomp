/* sub_100001589 @ 0x100001589
 *
 * MODULE   : wmpshare_exe  (bin/wmpshare.exe)
 * ADDRESS  : 0x100001589  (82 bytes, 4 basic blocks)
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

extern unsigned int _commode;
extern unsigned int _fmode;
extern unsigned int g_100003108;
extern unsigned int g_100003170;
extern unsigned int g_100003174;
extern unsigned long long g_100003750;
extern unsigned long long g_100003758;

unsigned int sub_100001589(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    g_100003750 = 18446744073709551615;
    g_100003758 = 18446744073709551615;
    _fmode = g_100003174;
    _commode = g_100003170;
    sub_1000017ac(&_commode);
    if (g_100003108)
        return 0;
    4296016088();
}
