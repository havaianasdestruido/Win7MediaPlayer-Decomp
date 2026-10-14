/* sub_1000bab14 @ 0x1000bab14
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000bab14  (875 bytes, 69 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 306467d280e99d0616e839278a4db5bed684f002ae284c3678cabb5251459cb3
 *   Evidence: analysis/report/rea-evidence/wmpnetwk_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern long long g_10001dcb8;

int sub_1000bab14(void)
{
    unsigned long long v18;  // rbx
    unsigned long long v19;  // rsi
    unsigned short *v28;  // rdi
    unsigned long long v29;  // rcx
    unsigned short *v30;  // r10
    unsigned short *v31;  // rdi
    unsigned long long v32;  // rcx
    unsigned short *v33;  // rbx
    unsigned long long v34;  // r15
    unsigned short *v35;  // rdi
    unsigned long long v36;  // rcx
    unsigned short *v37;  // rsi
    unsigned long long v20;  // rdi
    unsigned long long v38;  // r14
    unsigned short *v39;  // rdi
    unsigned long long v40;  // rcx
    unsigned short *v41;  // r11
    unsigned long long v42;  // r13
    unsigned short *v43;  // rdi
    unsigned long long v44;  // rcx
    unsigned short *v45;  // r9
    unsigned short *v46;  // rdi
    unsigned long long v47;  // rcx
    unsigned long long v21;  // r12
    unsigned short *v48;  // rdx
    unsigned short *v49;  // rdi
    unsigned long long v50;  // rcx
    long long v51;  // rcx
    unsigned long long v22;  // r13
    unsigned long long v23;  // r14
    unsigned long long v24;  // r15
    unsigned short *v25;  // r8
    unsigned long long v26;  // rbp
    unsigned long long v27;  // r12
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v7;  // [bp+0x10]
    unsigned short *v8;  // [bp+0x28]
    unsigned short *v9;  // [bp+0x30]
    unsigned short *v10;  // [bp+0x38]
    unsigned short *v11;  // [bp+0x40]
    unsigned short *v12;  // [bp+0x48]
    unsigned short *v13;  // [bp+0x50], Other Possible Types: unsigned long long
    unsigned short *v14;  // [bp+0x58], Other Possible Types: unsigned long long
    char v15;  // [bp+0x60]
    char v16;  // [bp+0x68]
    char v17;  // [bp+0x70]

    v7 = v18;
    v5 = v19;
    v4 = v20;
    v3 = v21;
    v2 = v22;
    v1 = v23;
    v0 = v24;
    v25 = v14;
    v26 = 14;
    v27 = 10;
    if (!v25)
    {
        v14 = 10;
    }
    else if (!*(v25))
    {
        v14 = 14;
    }
    else
    {
        v28 = v25;
        do
        {
            if (false)
                break;
        } while (*(v28));
        v29 = ~(18446744073709551615);
        if (v29 > 3900)
            v29 = 3900;
        v14 = v29 * 2;
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
    v30 = v13;
    if (!v30)
    {
        v13 = 10;
    }
    else if (!*(v30))
    {
        v13 = 14;
    }
    else
    {
        v31 = v30;
        do
        {
            if (false)
                break;
        } while (*(v31));
        v32 = ~(18446744073709551615);
        if (v32 > 3900)
            v32 = 3900;
        v13 = v32 * 2;
    }
    if (v30)
    {
        if (!*(v30))
            v30 = L"<NULL>";
    }
    else
    {
        v30 = "N";
    }
    v33 = v12;
    if (!v33)
    {
        v34 = 10;
    }
    else if (!*(v33))
    {
        v34 = 14;
    }
    else
    {
        v35 = v33;
        do
        {
            if (false)
                break;
        } while (*(v35));
        v36 = ~(18446744073709551615);
        if (v36 > 3900)
            v36 = 3900;
        v34 = v36 * 2;
    }
    if (v33)
    {
        if (!*(v33))
            v33 = L"<NULL>";
    }
    else
    {
        v33 = "N";
    }
    v37 = v11;
    if (!v37)
    {
        v38 = 10;
    }
    else if (!*(v37))
    {
        v38 = 14;
    }
    else
    {
        v39 = v37;
        do
        {
            if (false)
                break;
        } while (*(v39));
        v40 = ~(18446744073709551615);
        if (v40 > 3900)
            v40 = 3900;
        v38 = v40 * 2;
    }
    if (v37)
    {
        if (!*(v37))
            v37 = L"<NULL>";
    }
    else
    {
        v37 = "N";
    }
    v41 = v10;
    if (!v41)
    {
        v42 = 10;
    }
    else if (!*(v41))
    {
        v42 = 14;
    }
    else
    {
        v43 = v41;
        do
        {
            if (false)
                break;
        } while (*(v43));
        v44 = ~(18446744073709551615);
        if (v44 > 3900)
            v44 = 3900;
        v42 = v44 * 2;
    }
    if (v41)
    {
        if (!*(v41))
            v41 = L"<NULL>";
    }
    else
    {
        v41 = "N";
    }
    v45 = v9;
    if (v45)
    {
        if (!*(v45))
        {
            v27 = 14;
        }
        else
        {
            v46 = v45;
            do
            {
                if (false)
                    break;
            } while (*(v46));
            v47 = ~(18446744073709551615);
            if (v47 > 3900)
                v47 = 3900;
            v27 = v47 * 2;
        }
        if (!v45)
            goto LABEL_1000bad35;
        if (!*(v45))
            v45 = L"<NULL>";
    }
    else
    {
LABEL_1000bad35:
        v45 = "N";
    }
    v48 = v8;
    if (!v48)
    {
        v26 = 10;
    }
    else if (*(v48))
    {
        v49 = v48;
        do
        {
            if (false)
                break;
        } while (*(v49));
        v50 = ~(18446744073709551615);
        if (v50 > 3900)
            v50 = 3900;
        v26 = v50 * 2;
    }
    if (v48)
    {
        if (!*(v48))
            v48 = L"<NULL>";
    }
    else
    {
        v48 = "N";
    }
    sub_10011b684(v51, 43, &g_10001dcb8, 172, &vvar_310{r88|8b}, 8, v48, v26, v45, v27, v41, v42, v37, v38, v33, v34, v30, v13, v25, v14, &v15, 4, &v16, 8, &v17, 8, 0); /* do not return */
}
