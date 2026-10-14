/* sub_10007761c @ 0x10007761c
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10007761c  (388 bytes, 30 basic blocks)
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
    char padding_0[56];
    struct struct_1 *field_38;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

unsigned int sub_10007761c(struct_0 *p)
{
    long long v4;  // r14
    unsigned short *ptr;  // rcx
    char v6;  // al
    unsigned int v7;  // eax
    char v0;  // [bp-0x68]
    char v1;  // [bp-0x38]
    unsigned int v3;  // [bp+0x10]

    v4 = 0;
    if (!(char)sub_100075e14())
        return 0;
    ptr = &p->field_38->field_0;
    v6 = 0;
    if (ptr)
        v6 = *(ptr);
    if (!v6)
        return 0;
    if (ptr)
    {
        v4 = sub_10007e894();
        if (v4)
            4298115368();
    }
    if ((int)sub_1000754ac(p) == 4 && (char)sub_10007ea00(p->field_38))
    {
        sub_10007d40c(&v1);
        sub_10007d40c(&v0);
        v7 = sub_10007d57c(&v1, p->field_38, 2);
        if (v7 >= 0)
        {
            v3 = 260;
            v7 = sub_10007d51c(&v0, 260);
            if (v7 >= 0)
                4295491852();
        }
        sub_10007d970(&v0);
        sub_10007d970(&v1);
        return v7;
    }
    if (!v4)
    {
        return 0;
    }
    else if ((char)sub_10007d3c0(v4, L"cda"))
    {
        4298115392();
    }
    else
    {
        return 0;
    }
}
