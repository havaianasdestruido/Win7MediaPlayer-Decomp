/* sub_100033340 @ 0x100033340
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100033340  (194 bytes, 19 basic blocks)
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
    unsigned short field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[40];
    struct struct_2 *field_28;
} struct_1;

typedef struct struct_2 {
    unsigned short field_0;
} struct_2;

unsigned long long sub_100033340(struct_1 *a0, int a1, struct_0 **a2)
{
    char v1;  // al
    unsigned int v2;  // eax
    char v3;  // al

    sub_100030020(a2);
    v1 = 0;
    if (a0->field_28)
        v1 = a0->field_28->field_0;
    if (!v1)
    {
        return 2147549183;
    }
    else if (!(char)sub_100034588(a0, a1))
    {
        return 3222082340;
    }
    else if ((char)sub_100033ebc(a0, "f"))
    {
        v2 = sub_100033ef0(a0, a2);
        if (v2 < 0)
            return v2;
        v3 = 0;
        if (*(a2))
            v3 = *(a2)->field_0;
        if (!v3)
            return v2;
        sub_100039c5c(a0->field_28); /* do not return */
    }
    else
    {
        return sub_100034ecc(a0, a2) & 4294967295;
    }
}
