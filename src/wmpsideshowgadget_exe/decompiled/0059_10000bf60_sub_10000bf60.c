/* sub_10000bf60 @ 0x10000bf60
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000bf60  (142 bytes, 13 basic blocks)
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

unsigned int sub_10000bf60(unsigned long a0, unsigned int flag, unsigned long a2, unsigned long long a3)
{
    unsigned int choice;  // edx

    if (!a3)
        return 2147942487;
    if (!flag)
        4295069694();
    choice = flag - 1;
    if (flag == 1)
    {
        4295069694();
    }
    else if (choice != 1)
    {
        if (choice != 2)
            return 2147500037;
        4295069694();
    }
    else
    {
        4295069694();
    }
}
