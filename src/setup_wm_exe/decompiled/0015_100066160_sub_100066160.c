/* sub_100066160 @ 0x100066160
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100066160  (674 bytes, 51 basic blocks)
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

typedef struct struct_3 {
    char padding_0[72];
    struct struct_4 *field_48;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_4 {
    unsigned short field_0;
} struct_4;

extern unsigned long long g_1000062c0;

void sub_100066160(void)
{
    unsigned int v3;  // eax
    unsigned long v4;  // rsi
    char *v13;  // rdx
    char *v14;  // r9
    struct_0 **v15;  // rcx
    char *v16;  // r8
    char *v17;  // rdx
    char *v18;  // r9
    struct_0 **v19;  // rcx
    char *v20;  // r8
    char *v21;  // rdx
    char *v22;  // r9
    struct_2 **ptr;  // rbx
    struct_0 **v23;  // rcx
    char *v24;  // r8
    char *v25;  // rdx
    char *v26;  // r9
    unsigned short *v27;  // rsi
    unsigned long long v28;  // rdi
    unsigned short *v29;  // rsi
    unsigned long v30;  // rsi
    struct_0 **v31;  // rcx
    struct_0 **v6;  // rcx
    char *v32;  // r8
    char *v33;  // rdx
    char *v34;  // r9
    struct_0 **v35;  // rcx
    char *v7;  // r8
    char *v8;  // rdx
    char *v9;  // r9
    struct_3 *p;  // r14
    struct_0 **v11;  // rcx
    char *v12;  // r8
    struct_0 **v1;  // [bp+0x20]
    char v2;  // [bp+0x30]

    if (v3 != (unsigned int)v4)
        4298115416();
    v6 = *(ptr);
    v1 = v6;
    if (v6 != v4)
        *(v6)->field_8();
    v7 = &v2;
    v8 = L"CodeURL";
    v9 = 0x800;
    if (sub_10005969c(&v1, L"CodeURL", &v2, 0x800) == (unsigned int)v4)
    {
        sub_100052cbc(&p->field_48, &v2);
        v9 = &v2;
        v7 = L"CodeURL";
        v8 = "XML Parser: Parsing child element '%S': '%S'.\r\n";
        sub_1000527f4(6, "XML Parser: Parsing child element '%S': '%S'.\r\n", L"CodeURL", &v2);
    }
    v11 = *(ptr);
    v1 = v11;
    if (v11 != v4)
        *(v11)->field_8();
    v12 = &v2;
    v13 = L"CatalogURL";
    v14 = 0x800;
    if (sub_10005969c(&v1, L"CatalogURL", &v2, 0x800) == (unsigned int)v4)
    {
        sub_100052cbc(p + 1, &v2);
        v14 = &v2;
        v12 = L"CatalogURL";
        v13 = "XML Parser: Parsing child element '%S': '%S'.\r\n";
        sub_1000527f4(6, "XML Parser: Parsing child element '%S': '%S'.\r\n", L"CatalogURL", &v2);
    }
    v15 = *(ptr);
    v1 = v15;
    if (v15 != v4)
        *(v15)->field_8();
    v16 = &v2;
    v17 = L"EULAURL";
    v18 = 0x800;
    if (sub_10005969c(&v1, L"EULAURL", &v2, 0x800) == (unsigned int)v4)
    {
        sub_100052cbc(&p->padding_0[40], &v2);
        v18 = &v2;
        v16 = L"EULAURL";
        v17 = "XML Parser: Parsing child element '%S': '%S'.\r\n";
        sub_1000527f4(6, "XML Parser: Parsing child element '%S': '%S'.\r\n", L"EULAURL", &v2);
    }
    v19 = *(ptr);
    v1 = v19;
    if (v19 != v4)
        *(v19)->field_8();
    v20 = &v2;
    v21 = L"PrivacyInfoURL";
    v22 = 0x800;
    if (sub_10005969c(&v1, L"PrivacyInfoURL", &v2, 0x800) == (unsigned int)v4)
    {
        sub_100052cbc(&p->padding_0[64], &v2);
        v22 = &v2;
        v20 = L"PrivacyInfoURL";
        v21 = "XML Parser: Parsing child element '%S': '%S'.\r\n";
        sub_1000527f4(6, "XML Parser: Parsing child element '%S': '%S'.\r\n", L"PrivacyInfoURL", &v2);
    }
    v23 = *(ptr);
    v1 = v23;
    if (v23 != v4)
        *(v23)->field_8();
    v24 = &v2;
    v25 = L"InstallApp";
    v26 = 0x800;
    if (sub_10005969c(&v1, L"InstallApp", &v2, 0x800) == (unsigned int)v4)
    {
        sub_100052cbc(&p[1].padding_0[56], &v2);
        v26 = &v2;
        v24 = L"InstallApp";
        v25 = "XML Parser: Parsing child element '%S': '%S'.\r\n";
        sub_1000527f4(6, "XML Parser: Parsing child element '%S': '%S'.\r\n", L"InstallApp", &v2);
    }
    else
    {
        v27 = &p->field_48->field_0;
        if (v27)
        {
            v28 = &g_1000062c0;
            v29 = v27;
            do
            {
                if (false)
                    break;
            } while (!*(v29));
            if (v27)
                goto LABEL_10006634e;
        }
        v25 = "ERROR: Code URL specified but no InstallApp indicated.  Install is not possible.\r\n";
        sub_1000527a0(2, "ERROR: Code URL specified but no InstallApp indicated.  Install is not possible.\r\n");
LABEL_10006634e:
        v30 = 0;
    }
    v31 = *(ptr);
    v1 = v31;
    if (v31 != v30)
        *(v31)->field_8();
    v32 = &v2;
    v33 = L"InstallData";
    v34 = 0x800;
    if (sub_10005969c(&v1, L"InstallData", &v2, 0x800) == (unsigned int)v30)
    {
        sub_100052cbc(&p[1].padding_0[64], &v2);
        v34 = &v2;
        v32 = L"InstallData";
        v33 = "XML Parser: Parsing child element '%S': '%S'.\r\n";
        sub_1000527f4(6, "XML Parser: Parsing child element '%S': '%S'.\r\n", L"InstallData", &v2);
    }
    v35 = *(ptr);
    v1 = v35;
    if (v35 != v30)
    {
        *(v35)->field_8();
    }
    else if (sub_10005969c(&v1, L"NonAdmin", &v2, 0x800) == (unsigned int)v30)
    {
        4298115416();
    }
}
