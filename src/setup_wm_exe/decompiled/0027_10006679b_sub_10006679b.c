/* sub_10006679b @ 0x10006679b
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10006679b  (502 bytes, 41 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): f069226052de289452ef5ff9dd67557193c15308c5351bc7b70b6692b350951b
 *   Evidence: analysis/report/rea-evidence/setup_wm_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_2 {
    struct struct_0 *field_0;
} struct_2;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

void sub_10006679b(void)
{
    unsigned int v3;  // eax
    struct_2 **ptr;  // rsi
    long long v13;  // rdx
    struct_0 **v14;  // rcx
    char *v15;  // r8
    long long v16;  // rdx
    unsigned long long v17;  // r9
    struct_0 **v18;  // rcx
    char *v19;  // r8
    char *v20;  // rdx
    char *v21;  // r9
    struct_0 **v22;  // rcx
    struct_0 **v5;  // rcx
    unsigned int v23;  // eax
    unsigned int v24;  // edi
    unsigned long long v6;  // r9
    unsigned int v7;  // eax
    unsigned long v8;  // rdi
    unsigned int v9;  // r12d
    long long v10;  // r14
    unsigned long v11;  // rbx
    char *v12;  // r8
    struct_0 **v1;  // [bp+0x20]
    char v2;  // [bp+0x30]

    if (v3)
        goto LABEL_0x1000669fd;
    v5 = *(ptr);
    v1 = v5;
    if (v5)
        *(v5)->field_8();
    v6 = 0x800;
    v7 = sub_10005969c(&v1, L"Key", &v2, 0x800);
    v8 = v7;
    if (v7)
        goto LABEL_0x1000669fd;
    v9 = 0;
    if (&v2)
    {
        v11 = sub_100066cfc(v10, &v2);
        if (v11)
        {
            sub_100052cbc(v11, &v2);
            v12 = &v2;
            v13 = "XML Parser: ServiceNameFromXML: '%S'.\r\n";
            sub_1000527f4(6, "XML Parser: ServiceNameFromXML: '%S'.\r\n", &v2);
            v14 = *(ptr);
            v1 = v14;
            if (v14)
                *(v14)->field_8();
            v15 = &v2;
            v16 = L"Featured";
            v17 = 0x800;
            if (!sub_10005969c(&v1, L"Featured", &v2, 0x800))
                4298115416();
            v18 = *(ptr);
            v1 = v18;
            if (v18)
                *(v18)->field_8();
            v19 = &v2;
            v20 = L"Type";
            v21 = 0x800;
            if (!sub_10005969c(&v1, L"Type", &v2, 0x800))
            {
                if (&v2)
                    0x100300900();
                v21 = &v2;
                v19 = L"Type";
                v20 = "XML Parser: Parsing child element '%S': '%S'.\r\n";
                sub_1000527f4(6, "XML Parser: Parsing child element '%S': '%S'.\r\n", L"Type", &v2);
            }
            v22 = *(ptr);
            v1 = v22;
            if (v22)
                *(v22)->field_8();
            if (!sub_10005969c(&v1, L"XMLURL", &v2, 0x800))
            {
                v23 = sub_100052cbc(v11 + 8, &v2);
                sub_1000527f4(6, "XML Parser: Parsing child element '%S': '%S'.\r\n", L"XMLURL", &v2);
                if (!v23)
                {
                    v24 = sub_100065a8c(v10, v11);
                    if (v24 < 0)
                        v9 = (sub_100065b28(v10, v11) == 1 ? 1 : 0);
                    sub_1000527f4(6, "XML Parser: AddService returned '0x%x'.\r\n", v24);
                    if (!v24)
                        goto LABEL_0x1000669fd;
                    else
                        goto LABEL_1000669e3;
                }
            }
LABEL_1000669e3:
            if (!v9)
                goto LABEL_0x1000669fd;
            if (!v11)
                goto LABEL_0x1000669fd;
            sub_100064400(v11);
            4295490222();
        }
    }
    4295490234();
}
