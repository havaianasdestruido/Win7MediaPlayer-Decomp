/* sub_1000188e4 @ 0x1000188e4
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x1000188e4  (160 bytes, 15 basic blocks)
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

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[52];
    unsigned long long field_38;
    int field_40;
    unsigned int field_44;
} struct_0;

unsigned int sub_1000188e4(struct_0 *ptr, unsigned long a1)
{
    if (ptr)
    {
        if (!ptr->field_0)
        {
            return 0;
        }
        else if (ptr->field_0 == 72)
        {
            if (ptr->field_40 > 0)
            {
                if (0 < ptr->field_40)
                    4296016792();
                0x100100100();
            }
            else if (ptr->field_38)
            {
                4295069706();
            }
            else
            {
                ptr->field_40 = 0;
                ptr->field_44 = 0;
                4296016136();
            }
        }
    }
    return 2147942487;
}
