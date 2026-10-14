/* sub_100014d5f @ 0x100014d5f
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100014d5f  (142 bytes, 13 basic blocks)
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

long long sub_100014d5f(void)
{
    unsigned int v3;  // eax
    unsigned int *ptr;  // rsi
    char v1;  // [bp+0x30]
    unsigned long long v2;  // [bp+0x100020]

    if ((v3 + 1) * 2 + 16 <= 0x400)
    {
        ptr = &(&v1)[-1 * sub_100019730()];
        if (!ptr)
            return sub_100018f20(v2 ^ vvar_12{r56|8b});
        *(ptr) = 52428;
        if (ptr + 4)
            4296016816();
        return sub_100018f20(v2 ^ vvar_12{r56|8b});
    }
    4296017176();
}
