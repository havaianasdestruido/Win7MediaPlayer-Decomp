/* sub_7ff2c16499c @ 0x7ff2c16499c
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c16499c  (358 bytes, 20 basic blocks)
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

extern long long g_7ff2c161a50;

long long sub_7ff2c16499c(long long a0, unsigned long a1, unsigned long a2, unsigned short *a3, char a4, unsigned short *a5)
{
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rdi
    unsigned long long v11;  // r12
    unsigned short *v12;  // rdx
    unsigned long long v13;  // r8
    unsigned long long v14;  // r10
    unsigned short *v15;  // rdi
    unsigned long long v16;  // rcx
    unsigned short *v17;  // rdi
    unsigned long long v18;  // rcx
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v1;  // [bp+0x8]
    unsigned long v2;  // [bp+0x10]
    unsigned long long v3;  // [bp+0x18]
    char v4;  // [bp+0x38]
    unsigned int v5;  // [bp+0x40]
    char v6;  // [bp+0x48]
    char v7;  // [bp+0x50]

    v1 = v9;
    v2 = vvar_88{r56|8b};
    v3 = v10;
    v0 = v11;
    v12 = a5;
    v5 = 3;
    v13 = 14;
    if (!v12)
    {
        v14 = 10;
    }
    else if (!*(v12))
    {
        v14 = 14;
    }
    else
    {
        v15 = v12;
        do
        {
            if (false)
                break;
        } while (*(v15));
        v16 = ~(18446744073709551615);
        if (v16 > 3900)
            v16 = 3900;
        v14 = v16 * 2;
    }
    if (v12)
    {
        if (!*(v12))
            v12 = L"<NULL>";
    }
    else
    {
        v12 = L"NULL";
    }
    if (!a3)
    {
        v13 = 10;
    }
    else if (*(a3))
    {
        v17 = a3;
        do
        {
            if (false)
                break;
        } while (*(v17));
        v18 = ~(18446744073709551615);
        if (v18 > 3900)
            v18 = 3900;
        v13 = v18 * 2;
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
    sub_7ff2c1791b2(a0, 43, &g_7ff2c161a50, 109, a3, v13, &vvar_4, 4, v12, v14, &v4, 4, &v5, 4, &v6, 4, &v7, 8, 0); /* do not return */
}
