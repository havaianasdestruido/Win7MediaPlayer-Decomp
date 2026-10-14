/* sub_7ff3712cf48 @ 0x7ff3712cf48
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3712cf48  (536 bytes, 40 basic blocks)
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

extern long long g_7ff3710c970;

int sub_7ff3712cf48(void)
{
    unsigned long long v16;  // rbx
    unsigned long long v17;  // rsi
    unsigned long long v26;  // rbp
    unsigned short *v27;  // rdi
    unsigned short *v28;  // r8
    unsigned long long v29;  // rsi
    unsigned short *v30;  // rdi
    unsigned short *v31;  // r9
    unsigned long long v32;  // rbx
    unsigned short *v33;  // rdi
    unsigned short *v34;  // rdi
    long long v35;  // rcx
    unsigned long long v18;  // rdi
    unsigned long long v19;  // r12
    unsigned long long v20;  // r13
    unsigned long long v21;  // r14
    unsigned short *v22;  // rdx
    unsigned long long v23;  // r11
    unsigned short *v24;  // r9
    unsigned short *v25;  // r10
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v3;  // [bp+0x8]
    unsigned long v4;  // [bp+0x10]
    unsigned long long v5;  // [bp+0x18]
    unsigned long long v6;  // [bp+0x20]
    unsigned short *v7;  // [bp+0x28]
    unsigned short *v8;  // [bp+0x30]
    char v9;  // [bp+0x38]
    char v10;  // [bp+0x40]
    unsigned short *v11;  // [bp+0x48]
    char v12;  // [bp+0x50]
    char v13;  // [bp+0x58]
    char v14;  // [bp+0x60]

    v3 = v16;
    v4 = vvar_151{r56|8b};
    v5 = v17;
    v6 = v18;
    v2 = v19;
    v1 = v20;
    v0 = v21;
    v22 = v11;
    v23 = 14;
    v25 = v24;
    if (!v22)
    {
        v26 = 10;
    }
    else if (!*(v22))
    {
        v26 = 14;
    }
    else
    {
        v27 = v22;
        do
        {
            if (false)
                break;
        } while (*(v27));
        v26 = ~(18446744073709551615) * 2;
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
    v28 = v8;
    if (!v28)
    {
        v29 = 10;
    }
    else if (!*(v28))
    {
        v29 = 14;
    }
    else
    {
        v30 = v28;
        do
        {
            if (false)
                break;
        } while (*(v30));
        v29 = ~(18446744073709551615) * 2;
    }
    if (v28)
    {
        if (!*(v28))
            v28 = L"<NULL>";
    }
    else
    {
        v28 = "N";
    }
    v31 = v7;
    if (!v31)
    {
        v32 = 10;
    }
    else if (!*(v31))
    {
        v32 = 14;
    }
    else
    {
        v33 = v31;
        do
        {
            if (false)
                break;
        } while (*(v33));
        v32 = ~(18446744073709551615) * 2;
    }
    if (v31)
    {
        if (!*(v31))
            v31 = L"<NULL>";
    }
    else
    {
        v31 = "N";
    }
    if (!v25)
    {
        v23 = 10;
    }
    else if (*(v25))
    {
        v34 = v25;
        do
        {
            if (false)
                break;
        } while (*(v34));
        v23 = ~(18446744073709551615) * 2;
    }
    if (v25)
    {
        if (!*(v25))
            v25 = L"<NULL>";
    }
    else
    {
        v25 = "N";
    }
    sub_7ff37149fda(v35, 43, &g_7ff3710c970, 39, v25, v23, v31, v32, v28, v29, &v9, 4, &v10, 4, v22, v26, &v12, 8, &v13, 8, &v14, 8, 0); /* do not return */
}
