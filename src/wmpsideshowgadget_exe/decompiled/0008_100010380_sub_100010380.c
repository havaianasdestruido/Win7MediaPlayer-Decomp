/* sub_100010380 @ 0x100010380
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100010380  (266 bytes, 28 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f8f45cd381f60a41cca4834188157d25906911108d7280cb2540d2245327a9d
 *   Evidence: analysis/report/rea-evidence/wmpsideshowgadget_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern unsigned long long g_10001c138;

long long sub_100010380(unsigned short *a0, unsigned long long *ptr, char *p, unsigned long a3)
{
    char v0;  // [bp-0x88]
    unsigned long long *v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x40]

    v2 = g_10001c138 ^ &v0;
    *(ptr) = 0;
    *(p) = 0;
    if (a0 && *(a0))
    {
        if ((*(a0) == 77 || *(a0) == 109) && (a0[1] == 83 || a0[1] == 115) && (a0[2] == 72 || a0[2] == 104) && (a0[3] == 84 || a0[3] == 116) && (a0[4] == 77 || a0[4] == 109) && (a0[5] == 76 || a0[5] == 108) && a0[6] == 58)
            v1 = ptr;
        if (!*(a0))
        {
            sub_10001048f(); /* do not return */
        }
        else if (*(a0) != 58)
        {
            4296016784();
        }
        else
        {
            4296016784();
        }
    }
    return sub_100018f20(v2 ^ &v0);
}
