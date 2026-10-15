/* sub_10003d788 @ 0x10003d788
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10003d788  (379 bytes, 33 basic blocks)
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

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int sub_10003d788(void)
{
    struct_0 **v13;  // rdi
    unsigned int v14;  // eax
    struct_0 **v23;  // rcx
    struct_0 **v24;  // rcx
    struct_0 **v25;  // rcx
    struct_0 **v26;  // rcx
    struct_0 **v27;  // rcx
    unsigned int v15;  // ecx
    unsigned int v16;  // eax
    long long v17;  // rdx
    unsigned long v18;  // r9
    long long v19;  // rsi
    long long v20;  // r8
    unsigned int v21;  // r14d
    struct_0 **v22;  // rcx
    unsigned int v1;  // [bp+0x30]
    unsigned int v2;  // [bp+0x34]
    struct_0 **v3;  // [bp+0x38]
    struct_0 **v4;  // [bp+0x48]
    struct_0 **v5;  // [bp+0x60]
    struct_0 **v6;  // [bp+0x70]
    struct_0 **v7;  // [bp+0x78]
    struct_0 **v8;  // [bp+0x90]
    struct_0 **v9;  // [bp+0x98]
    struct_0 **v10;  // [bp+0xa0]
    struct_0 **v11;  // [bp+0xa8]
    unsigned short v12;  // [bp+0xb0]

    v12 = *((unsigned short *)&v13);
    if (v14 != (unsigned int)v13)
        v15 = (unsigned int)v13;
    v1 = v15;
    v16 = sub_10003ceb8();
    if (v16 >= (unsigned int)v13)
        4298114912();
    v17 = "  ERROR: Could not load data for client '%S': '0x%x'.\r\n";
    v18 = v16;
    v20 = v19;
    sub_1000527f4(1, "  ERROR: Could not load data for client '%S': '0x%x'.\r\n", v19, v16);
    if (v1 == (unsigned int)v13 && v21 == (unsigned int)v13 && v2 != (unsigned int)v13)
        4298114912();
    if (2147500037 < (unsigned int)v13)
    {
        v17 = "  ERROR: Note that Windows Update failures are tracked in %windir%\\WindowsUpdate.log\r\n";
        sub_1000527a0(1, "  ERROR: Note that Windows Update failures are tracked in %windir%\\WindowsUpdate.log\r\n");
    }
    if (v11 != v13)
    {
        4298115664();
    }
    else if (v10 != v13)
    {
        4298115664();
    }
    else if (v8 != v13)
    {
        4298115664();
    }
    else
    {
        v22 = v6;
        if (v6 != v13)
            *(v6)->field_10();
        v23 = v4;
        if (v4 != v13)
            *(v4)->field_10();
        v24 = v3;
        if (v3 != v13)
            *(v3)->field_10();
        v25 = v5;
        if (v5 != v13)
            *(v5)->field_10();
        v26 = v7;
        if (v7 != v13)
            *(v7)->field_10();
        v27 = v9;
        if (v9 != v13)
            *(v9)->field_10();
    }
}
