/* sub_100066442 @ 0x100066442
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100066442  (499 bytes, 31 basic blocks)
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

void sub_100066442(void)
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
    struct_0 **v6;  // rcx
    char *v7;  // r8
    char *v8;  // rdx
    char *v9;  // r9
    long long v10;  // r14
    struct_0 **v11;  // rcx
    char *v12;  // r8
    struct_0 **v1;  // [bp+0x20]
    char v2;  // [bp+0x1030]

    if (v3 != (unsigned int)v4)
        goto LABEL_0x10006663a;
    v6 = *(ptr);
    v1 = v6;
    if (v6 != v4)
        *(v6)->field_8();
    v7 = &v2;
    v8 = L"MenuURL";
    v9 = 0x800;
    if (sub_10005969c(&v1, L"MenuURL", &v2, 0x800) == (unsigned int)v4)
    {
        sub_100052cbc(v10 + 168, &v2);
        v9 = &v2;
        v7 = L"MenuURL";
        v8 = "XML Parser: Parsing child element '%S': '%S'.\r\n";
        sub_1000527f4(6, "XML Parser: Parsing child element '%S': '%S'.\r\n", L"MenuURL", &v2);
    }
    v11 = *(ptr);
    v1 = v11;
    if (v11 != v4)
        *(v11)->field_8();
    v12 = &v2;
    v13 = L"ServiceSmallURL";
    v14 = 0x800;
    if (sub_10005969c(&v1, L"ServiceSmallURL", &v2, 0x800) == (unsigned int)v4)
    {
        sub_100052cbc(v10 + 176, &v2);
        v14 = &v2;
        v12 = L"ServiceSmallURL";
        v13 = "XML Parser: Parsing Element '%S': '%S'.\r\n";
        sub_1000527f4(6, "XML Parser: Parsing Element '%S': '%S'.\r\n", L"ServiceSmallURL", &v2);
    }
    v15 = *(ptr);
    v1 = v15;
    if (v15 != v4)
        *(v15)->field_8();
    v16 = &v2;
    v17 = L"ServiceLargeURL";
    v18 = 0x800;
    if (sub_10005969c(&v1, L"ServiceLargeURL", &v2, 0x800) == (unsigned int)v4)
    {
        sub_100052cbc(v10 + 184, &v2);
        v18 = &v2;
        v16 = L"ServiceLargeURL";
        v17 = "XML Parser: Parsing child element '%S': '%S'.\r\n";
        sub_1000527f4(6, "XML Parser: Parsing child element '%S': '%S'.\r\n", L"ServiceLargeURL", &v2);
    }
    v19 = *(ptr);
    v1 = v19;
    if (v19 != v4)
        *(v19)->field_8();
    v20 = &v2;
    v21 = L"SetupURL";
    v22 = 0x800;
    if (sub_10005969c(&v1, L"SetupURL", &v2, 0x800) == (unsigned int)v4)
    {
        sub_100052cbc(v10 + 48, &v2);
        v22 = &v2;
        v20 = L"SetupURL";
        v21 = "XML Parser: Parsing child element '%S': '%S'.\r\n";
        sub_1000527f4(6, "XML Parser: Parsing child element '%S': '%S'.\r\n", L"SetupURL", &v2);
    }
    v23 = *(ptr);
    v1 = v23;
    if (v23 != v4)
        *(v23)->field_8();
    if (sub_10005969c(&v1, L"EulaURL", &v2, 0x800) != (unsigned int)v4)
        goto LABEL_0x10006663a;
    sub_100052cbc(v10 + 56, &v2);
}
