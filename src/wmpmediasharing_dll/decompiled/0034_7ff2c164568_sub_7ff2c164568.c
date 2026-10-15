/* sub_7ff2c164568 @ 0x7ff2c164568
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c164568  (356 bytes, 30 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 714d193de7f062968c11a8a946f1fa066d03e1fc5a7bd90dbabc372605416413
 *   Evidence: analysis/report/rea-evidence/wmpmediasharing_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

long long sub_7ff2c164568(long long a0, unsigned short a1, long long a2, unsigned short *a3, unsigned short *a4, unsigned short *a5)
{
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rsi
    unsigned long long v18;  // rcx
    unsigned short *v19;  // rdx
    unsigned long long v20;  // r8
    unsigned short *v21;  // rdi
    unsigned long long v22;  // rcx
    unsigned short *v23;  // rdi
    unsigned long long v24;  // rcx
    unsigned long long v10;  // rdi
    unsigned long long v11;  // r12
    unsigned long long v12;  // r13
    unsigned long long v13;  // r15
    unsigned short *v14;  // r10
    unsigned long long v15;  // r11
    unsigned long long v16;  // rbx
    unsigned short *v17;  // rdi
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v3;  // [bp+0x8]
    unsigned long v4;  // [bp+0x10]
    unsigned long long v5;  // [bp+0x18]
    unsigned long long v6;  // [bp+0x20]

    v3 = v8;
    v4 = vvar_130{r56|8b};
    v5 = v9;
    v6 = v10;
    v2 = v11;
    v1 = v12;
    v0 = v13;
    v14 = a5;
    v15 = 14;
    if (!v14)
    {
        v16 = 10;
    }
    else if (!*(v14))
    {
        v16 = 14;
    }
    else
    {
        v17 = v14;
        do
        {
            if (false)
                break;
        } while (*(v17));
        v18 = ~(18446744073709551615);
        if (v18 > 3900)
            v18 = 3900;
        v16 = v18 * 2;
    }
    if (v14)
    {
        if (!*(v14))
            v14 = L"<NULL>";
    }
    else
    {
        v14 = L"NULL";
    }
    v19 = a4;
    if (!v19)
    {
        v20 = 10;
    }
    else if (!*(v19))
    {
        v20 = 14;
    }
    else
    {
        v21 = v19;
        do
        {
            if (false)
                break;
        } while (*(v21));
        v22 = ~(18446744073709551615);
        if (v22 > 3900)
            v22 = 3900;
        v20 = v22 * 2;
    }
    if (v19)
    {
        if (!*(v19))
            v19 = L"<NULL>";
    }
    else
    {
        v19 = L"NULL";
    }
    if (!a3)
    {
        v15 = 10;
    }
    else if (*(a3))
    {
        v23 = a3;
        do
        {
            if (false)
                break;
        } while (*(v23));
        v24 = ~(18446744073709551615);
        if (v24 > 3900)
            v24 = 3900;
        v15 = v24 * 2;
    }
    if (a3)
    {
        if (!*(a3))
            a3 = L"<NULL>";
    }
    else
    {
        a3 = L"NULL";
    }
    sub_7ff2c1791b2(a0, 43, a2, a1, a3, v15, v19, v20, v14, v16, 0); /* do not return */
}
