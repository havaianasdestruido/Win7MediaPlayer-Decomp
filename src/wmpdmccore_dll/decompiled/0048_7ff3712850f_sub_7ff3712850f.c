/* sub_7ff3712850f @ 0x7ff3712850f
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3712850f  (447 bytes, 32 basic blocks)
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

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    struct struct_2 *field_10;
} struct_1;

typedef struct struct_4 {
    struct struct_3 *field_0;
} struct_4;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern long long g_7ff3710c980;
extern unsigned long long g_7ff3710d8b8;
extern long long g_7ff37153220;
extern long long g_7ff37153240;
extern long long g_7ff37153260;
extern struct_0 *g_7ff37153600;

int sub_7ff3712850f(void)
{
    struct_0 *v7;  // rdi
    unsigned int v8;  // eax
    long long v17;  // rdx
    struct_1 **v18;  // rcx
    struct_4 **v19;  // rcx
    unsigned long long v20;  // r8
    unsigned long long v21;  // rdx
    long long v22;  // rdx
    struct_1 **v23;  // rcx
    struct_4 **v24;  // rcx
    unsigned long long v25;  // r8
    unsigned long long v26;  // rdx
    struct_1 **v10;  // r15
    long long v11;  // rdx
    long long v12;  // r8
    struct_1 **v13;  // rcx
    struct_4 **v14;  // rcx
    unsigned long long v15;  // r8
    unsigned long long v16;  // rdx
    char v1;  // [bp+0x50]
    unsigned long v2;  // [bp+0x60]
    struct_4 **v3;  // [bp+0xd0]
    struct_1 **v4;  // [bp+0x1000d8]
    struct_1 **v5;  // [bp+0x1000e0]
    struct_1 **v6;  // [bp+0x1000e8]

    if (g_7ff37153600 != v7 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
        sub_7ff37118abc(g_7ff37153600->field_10, 44, &g_7ff3710c980, v8, v2); /* do not return */
    if (v8 < (unsigned int)v10)
        goto LABEL_0x7ff37128874;
    if ((int)sub_7ff37134e88(&v1, L"AVTransport") < (unsigned int)v10 || (v11 = (long long)L"upnp-org", (int)sub_7ff37134e88(&v1, L"upnp-org") < (unsigned int)v10))
    {
        v12 = &g_7ff37153220;
        v11 = 4;
        if ((char)sub_7ff3713c714(&v2, 4, &g_7ff37153220) != 1)
        {
            if ((int)sub_7ff37134e88(&v1, L"RenderingControl") < (unsigned int)v10 || (v17 = (long long)L"upnp-org", (int)sub_7ff37134e88(&v1, L"upnp-org") < (unsigned int)v10))
            {
                v12 = &g_7ff37153240;
                v17 = 4;
                if ((char)sub_7ff3713c714(&v2, 4, &g_7ff37153240) != 1)
                {
                    if ((int)sub_7ff37134e88(&v1, L"ConnectionManager") >= (unsigned int)v10)
                    {
                        v22 = L"upnp-org";
                        if ((int)sub_7ff37134e88(&v1, L"upnp-org") >= (unsigned int)v10)
                        {
                            v23 = v6;
                            if (v23 == v10)
                            {
                                v24 = v3;
                                v25 = vvar_98{r56|8b} + 224;
                                v26 = &g_7ff3710d8b8;
                                *(v3)->field_0();
                            }
                            v6 = v10;
                            *(v23)->field_10();
                        }
                    }
                    if ((char)sub_7ff3713c714(&v2, 4, &g_7ff37153260) != 1)
                        goto LABEL_0x7ff37128874;
                    v22 = 4;
                    v12 = &g_7ff37153260;
                    v23 = v6;
                    if (v23 == v10)
                    {
                        v24 = v3;
                        v25 = vvar_98{r56|8b} + 224;
                        v26 = &g_7ff3710d8b8;
                        *(v3)->field_0();
                    }
                    v6 = v10;
                    *(v23)->field_10();
                }
            }
            v18 = v5;
            if (v18 == v10)
            {
                v19 = v3;
                v20 = vvar_98{r56|8b} + 216;
                v21 = &g_7ff3710d8b8;
                *(v3)->field_0();
            }
            v5 = v10;
            *(v18)->field_10();
        }
    }
    v13 = v4;
    if (v13 == v10)
    {
        v14 = v3;
        v15 = vvar_98{r56|8b} + 208;
        v16 = &g_7ff3710d8b8;
        *(v3)->field_0();
    }
    v4 = v10;
    *(v13)->field_10();
}
