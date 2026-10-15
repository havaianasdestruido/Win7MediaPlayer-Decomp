/* sub_7ff3b156a24 @ 0x7ff3b156a24
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b156a24  (363 bytes, 30 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962
 *   Evidence: analysis/report/rea-evidence/wmpnssci_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern long long g_7ff3b131eb0;

int sub_7ff3b156a24(void)
{
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rsi
    unsigned long long v21;  // rcx
    unsigned short *v22;  // r9
    unsigned long long v23;  // r11
    unsigned short *v24;  // rdi
    unsigned long long v25;  // rcx
    unsigned short *v26;  // rdx
    unsigned short *v27;  // rdi
    unsigned long long v28;  // rcx
    long long v29;  // rcx
    unsigned long long v13;  // rdi
    unsigned long long v14;  // r12
    unsigned long long v15;  // r14
    unsigned long long v16;  // r15
    unsigned short *v17;  // r8
    unsigned long long v18;  // r10
    unsigned long long v19;  // rbx
    unsigned short *v20;  // rdi
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long long v4;  // [bp-0x8]
    unsigned long long v5;  // [bp+0x8]
    unsigned long v6;  // [bp+0x10]
    unsigned short *v7;  // [bp+0x28]
    unsigned short *v8;  // [bp+0x30]
    unsigned short *v9;  // [bp+0x38]

    v5 = v11;
    v6 = vvar_123{r56|8b};
    v4 = v12;
    v3 = v13;
    v2 = v14;
    v1 = v15;
    v0 = v16;
    v17 = v9;
    v18 = 14;
    if (!v17)
    {
        v19 = 10;
    }
    else if (!*(v17))
    {
        v19 = 14;
    }
    else
    {
        v20 = v17;
        do
        {
            if (false)
                break;
        } while (*(v20));
        v21 = ~(18446744073709551615);
        if (v21 > 3900)
            v21 = 3900;
        v19 = v21 * 2;
    }
    if (v17)
    {
        if (!*(v17))
            v17 = L"<NULL>";
    }
    else
    {
        v17 = L"NULL";
    }
    v22 = v8;
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
        v25 = ~(18446744073709551615);
        if (v25 > 3900)
            v25 = 3900;
        v23 = v25 * 2;
    }
    if (v22)
    {
        if (!*(v22))
            v22 = L"<NULL>";
    }
    else
    {
        v22 = L"NULL";
    }
    v26 = v7;
    if (!v26)
    {
        v18 = 10;
    }
    else if (*(v26))
    {
        v27 = v26;
        do
        {
            if (false)
                break;
        } while (*(v27));
        v28 = ~(18446744073709551615);
        if (v28 > 3900)
            v28 = 3900;
        v18 = v28 * 2;
    }
    if (v26)
    {
        if (!*(v26))
            v26 = L"<NULL>";
    }
    else
    {
        v26 = L"NULL";
    }
    sub_7ff3b164486(v29, 43, &g_7ff3b131eb0, 45, &vvar_126{r88|4b}, 4, v26, v18, v22, v23, v17, v19, 0); /* do not return */
}
