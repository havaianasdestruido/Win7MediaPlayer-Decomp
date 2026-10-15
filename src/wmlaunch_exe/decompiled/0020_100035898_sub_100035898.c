/* sub_100035898 @ 0x100035898
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100035898  (388 bytes, 30 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 8ea713b95f32c31a11bb1dded4cc8b9620014600f122fff3852c082d9af67b1b
 *   Evidence: analysis/report/rea-evidence/wmlaunch_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[56];
    struct struct_1 *field_38;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

unsigned int sub_100035898(struct_0 *p)
{
    long long v4;  // r14
    unsigned short *ptr;  // rcx
    char v6;  // al
    unsigned int v7;  // eax
    char v0;  // [bp-0x68]
    char v1;  // [bp-0x38]
    unsigned int v3;  // [bp+0x10]

    v4 = 0;
    if (!(char)sub_100033ebc())
        return 0;
    ptr = &p->field_38->field_0;
    v6 = 0;
    if (ptr)
        v6 = *(ptr);
    if (!v6)
        return 0;
    if (ptr)
    {
        v4 = sub_100039be4();
        if (v4)
            4296016760();
    }
    if ((int)sub_100033554(p) == 4 && (char)sub_100039d50(p->field_38))
    {
        sub_10002fbf0(&v1);
        sub_10002fbf0(&v0);
        v7 = sub_10002fd60(&v1, p->field_38, 2);
        if (v7 >= 0)
        {
            v3 = 260;
            v7 = sub_10002fd00(&v0, 260);
            if (v7 >= 0)
                4295208712();
        }
        sub_100030020(&v0);
        sub_100030020(&v1);
        return v7;
    }
    if (!v4)
    {
        return 0;
    }
    else if ((char)sub_10002fba4(v4, "c"))
    {
        4296016752();
    }
    else
    {
        return 0;
    }
}
