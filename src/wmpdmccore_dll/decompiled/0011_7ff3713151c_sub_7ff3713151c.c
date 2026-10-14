/* sub_7ff3713151c @ 0x7ff3713151c
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3713151c  (932 bytes, 65 basic blocks)
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

typedef struct struct_1 {
    char padding_0[64];
    struct struct_2 *field_40;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_7ff3710c960;
extern struct_0 *g_7ff37153600;

int sub_7ff3713151c(void)
{
    unsigned int flag2;  // eax
    unsigned long long v19;  // rsi
    unsigned long long v24;  // rsi
    char v25[9];  // rax
    unsigned long long v26;  // rsi
    char v27[9];  // rax
    struct_1 **v29;  // rcx
    char v20[9];  // rax
    unsigned int v30;  // r15d
    unsigned long v31;  // rdx
    unsigned int v21;  // r13d
    unsigned int v22;  // r13d
    unsigned int v23;  // r13d
    unsigned long long v1;  // [bp+0x48]
    struct_1 **v2;  // [bp+0x50]
    int v3;  // [bp+0x58]
    char v4;  // [bp+0x60]
    unsigned int flag;  // [bp+0x6c]
    unsigned int choice;  // [bp+0x70]
    int v7;  // [bp+0xa0], Other Possible Types: char
    char v8;  // [bp+0xa8]
    int v9;  // [bp+0xb0], Other Possible Types: char
    char v10;  // [bp+0xb8]
    int v11;  // [bp+0xc8]
    char v12;  // [bp+0xd0]
    int v13;  // [bp+0xd8]
    char v14;  // [bp+0xe0]
    int v15;  // [bp+0xe8], Other Possible Types: char
    char v16;  // [bp+0xf0]
    unsigned int v17;  // [bp+0x1a8]

    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
    {
        if (flag2 == 1)
        {
            v1 = L"TRUE";
            if (v19 != L"TRUE")
            {
                v8 = v19;
                8792722900136();
            }
            v7 = (int)_INSERT(v7 CONCAT 0, 8, flag2);
            *((wchar **)&v7) = L"TRUE";
            v20 = &v7;
            v17 = v21 | 1;
        }
        else
        {
            v1 = L"FALSE";
            if (v19 != L"FALSE")
            {
                v12 = v19;
                8792722900136();
            }
            v11 = (int)_INSERT((char)v11 CONCAT 0, 8, 1);
            *((wchar **)&v11) = L"FALSE";
            v20 = &v11;
            v17 = v21 | 2;
        }
        sub_7ff37118638(g_7ff37153600->field_10, 76, &g_7ff3710c960); /* do not return */
    }
    if (((char)v22 & 2))
    {
        v23 = v22 & 4294967293;
        v17 = v23;
        sub_7ff37134368(&(char)v11);
    }
    if (((char)v23 & 1))
    {
        v23 &= 4294967294;
        v17 = v23;
        sub_7ff37134368(&v7);
    }
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
    {
        if (flag == 1)
        {
            v1 = L"TRUE";
            if (v19 != L"TRUE")
            {
                v16 = v24;
                8792722900136();
            }
            v15 = (int)_INSERT(v15 CONCAT 0, 8, 1);
            *((wchar **)&v15) = L"TRUE";
            v25 = &v15;
            v17 = v23 | 4;
        }
        else
        {
            v1 = L"FALSE";
            if (v19 != L"FALSE")
            {
                v14 = v24;
                8792722900136();
            }
            v13 = (int)_INSERT((char)v13 CONCAT 0, 8, 1);
            *((wchar **)&v13) = L"FALSE";
            v25 = &v13;
            v17 = v23 | 8;
        }
        sub_7ff37118638(g_7ff37153600->field_10, 77, &g_7ff3710c960); /* do not return */
    }
    if (((char)v23 & 8))
    {
        v23 &= 4294967287;
        v17 = v23;
        sub_7ff37134368(&(char)v13);
    }
    if (((char)v23 & 4))
    {
        v23 &= 4294967291;
        v17 = v23;
        sub_7ff37134368(&v15);
    }
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
    {
        if (choice == 1)
        {
            v1 = L"TRUE";
            if (v19 != L"TRUE")
            {
                v4 = v26;
                8792722900136();
            }
            v3 = (int)_INSERT((char)v3 CONCAT 0, 8, 1);
            *((wchar **)&v3) = L"TRUE";
            v27 = &v3;
            v17 = v23 | 16;
        }
        else
        {
            v1 = L"FALSE";
            if (v19 != L"FALSE")
            {
                v10 = v26;
                8792722900136();
            }
            v9 = (int)_INSERT(v9 CONCAT 0, 8, 1);
            *((wchar **)&v9) = L"FALSE";
            v27 = &v9;
            v17 = v23 | 32;
        }
        sub_7ff37118638(g_7ff37153600->field_10, 78, &g_7ff3710c960); /* do not return */
    }
    if (((char)v23 & 32))
    {
        v23 &= 4294967263;
        v17 = v23;
        sub_7ff37134368(&v9);
    }
    if (((char)v23 & 16))
    {
        v17 = v23 & 4294967279;
        sub_7ff37134368(&(char)v3);
    }
    if (flag2 == 1)
        goto LABEL_0x7ff37131a3c;
    v29 = v2;
    v31 = v30;
    *(v2)->field_40();
}
