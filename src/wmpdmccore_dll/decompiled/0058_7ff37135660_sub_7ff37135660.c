/* sub_7ff37135660 @ 0x7ff37135660
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37135660  (351 bytes, 30 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 9334fde75c4e6d018f3c698b0a6b5d415f65d71716906af037147b61b3911242
 *   Evidence: analysis/report/rea-evidence/wmpdmccore_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

int sub_7ff37135660(void)
{
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rsi
    unsigned short *v22;  // r8
    unsigned long long v23;  // r11
    unsigned short *v24;  // rdi
    unsigned short *v25;  // r9
    unsigned short *v26;  // rdi
    unsigned short *v27;  // r9
    long long v28;  // rcx
    unsigned long long v14;  // rdi
    unsigned long long v15;  // r12
    unsigned long long v16;  // r14
    unsigned long long v17;  // r15
    unsigned short *v18;  // rdx
    unsigned long long v19;  // r10
    unsigned long long v20;  // rbx
    unsigned short *v21;  // rdi
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v3;  // [bp+0x8]
    unsigned long v4;  // [bp+0x10]
    unsigned long long v5;  // [bp+0x18]
    unsigned long long v6;  // [bp+0x20]
    unsigned short *v7;  // [bp+0x28]
    char v8;  // [bp+0x30]
    char v9;  // [bp+0x38]
    unsigned short *v10;  // [bp+0x40]

    v3 = v12;
    v4 = vvar_111{r56|8b};
    v5 = v13;
    v6 = v14;
    v2 = v15;
    v1 = v16;
    v0 = v17;
    v18 = v10;
    v19 = 14;
    if (!v18)
    {
        v20 = 10;
    }
    else if (!*(v18))
    {
        v20 = 14;
    }
    else
    {
        v21 = v18;
        do
        {
            if (false)
                break;
        } while (*(v21));
        v20 = ~(18446744073709551615) * 2;
    }
    if (v18)
    {
        if (!*(v18))
            v18 = L"<NULL>";
    }
    else
    {
        v18 = "N";
    }
    v22 = v7;
    if (!v22)
    {
        v23 = 10;
    }
    else if (!*(v22))
    {
        v23 = 14;
    }
    else
    {
        v24 = v22;
        do
        {
            if (false)
                break;
        } while (*(v24));
        v23 = ~(18446744073709551615) * 2;
    }
    if (v22)
    {
        if (!*(v22))
            v22 = L"<NULL>";
    }
    else
    {
        v22 = "N";
    }
    if (!v25)
    {
        v19 = 10;
    }
    else if (*(v25))
    {
        v26 = v25;
        do
        {
            if (false)
                break;
        } while (*(v26));
        v19 = ~(18446744073709551615) * 2;
    }
    if (v25)
    {
        if (!*(v25))
            v27 = L"<NULL>";
    }
    else
    {
        v27 = "N";
    }
    sub_7ff37149fda(v28, 43, sub_7ff3710c940, 98, v27, v19, v22, v23, &v8, 8, &v9, 8, v18, v20, NULL); /* do not return */
}
