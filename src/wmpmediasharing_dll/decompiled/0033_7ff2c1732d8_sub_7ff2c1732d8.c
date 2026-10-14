/* sub_7ff2c1732d8 @ 0x7ff2c1732d8
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c1732d8  (363 bytes, 30 basic blocks)
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

extern long long g_7ff2c161a10;

long long sub_7ff2c1732d8(long long a0, unsigned long a1, unsigned long a2, unsigned int a3, unsigned short *a4, unsigned short *a5, unsigned short *a6)
{
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rsi
    unsigned long long v19;  // rcx
    unsigned short *v20;  // r9
    unsigned long long v21;  // r11
    unsigned short *v22;  // rdi
    unsigned long long v23;  // rcx
    unsigned short *v24;  // rdx
    unsigned short *v25;  // rdi
    unsigned long long v26;  // rcx
    unsigned long long v11;  // rdi
    unsigned long long v12;  // r12
    unsigned long long v13;  // r14
    unsigned long long v14;  // r15
    unsigned short *v15;  // r8
    unsigned long long v16;  // r10
    unsigned long long v17;  // rbx
    unsigned short *v18;  // rdi
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long long v4;  // [bp-0x8]
    unsigned long long v5;  // [bp+0x8]
    unsigned long v6;  // [bp+0x10]
    unsigned int v7;  // [bp+0x20]

    v5 = v9;
    v6 = vvar_129{r56|8b};
    v7 = a3;
    v4 = v10;
    v3 = v11;
    v2 = v12;
    v1 = v13;
    v0 = v14;
    v15 = a6;
    v16 = 14;
    if (!v15)
    {
        v17 = 10;
    }
    else if (!*(v15))
    {
        v17 = 14;
    }
    else
    {
        v18 = v15;
        do
        {
            if (false)
                break;
        } while (*(v18));
        v19 = ~(18446744073709551615);
        if (v19 > 3900)
            v19 = 3900;
        v17 = v19 * 2;
    }
    if (v15)
    {
        if (!*(v15))
            v15 = L"<NULL>";
    }
    else
    {
        v15 = L"NULL";
    }
    v20 = a5;
    if (!v20)
    {
        v21 = 10;
    }
    else if (!*(v20))
    {
        v21 = 14;
    }
    else
    {
        v22 = v20;
        do
        {
            if (false)
                break;
        } while (*(v22));
        v23 = ~(18446744073709551615);
        if (v23 > 3900)
            v23 = 3900;
        v21 = v23 * 2;
    }
    if (v20)
    {
        if (!*(v20))
            v20 = L"<NULL>";
    }
    else
    {
        v20 = L"NULL";
    }
    v24 = a4;
    if (!v24)
    {
        v16 = 10;
    }
    else if (*(v24))
    {
        v25 = v24;
        do
        {
            if (false)
                break;
        } while (*(v25));
        v26 = ~(18446744073709551615);
        if (v26 > 3900)
            v26 = 3900;
        v16 = v26 * 2;
    }
    if (v24)
    {
        if (!*(v24))
            v24 = L"<NULL>";
    }
    else
    {
        v24 = L"NULL";
    }
    sub_7ff2c1791b2(a0, 43, &g_7ff2c161a10, 45, &v7, 4, v24, v16, v20, v21, v15, v17, 0); /* do not return */
}
