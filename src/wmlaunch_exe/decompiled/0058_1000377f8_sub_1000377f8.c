/* sub_1000377f8 @ 0x1000377f8
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x1000377f8  (206 bytes, 18 basic blocks)
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
    char padding_0[132];
    unsigned int field_84;
} struct_0;

extern long long g_100022101;

char sub_1000377f8(struct_0 *ptr, unsigned int a1[2])
{
    int v2;  // eax
    unsigned int v1[2];  // [bp+0x10]

    v1 = a1;
    if (!(char)sub_100033ebc() && !(char)sub_100033ebc(ptr, L"wmpdvd"))
    {
        if (!(char)sub_100033ebc(ptr, "f"))
        {
            v2 = (!&v1 ? -2147467261 : (unsigned int)sub_1000376bc(ptr, &v1));
            return v1;
        }
        else if (ptr->field_84 != 4294967295)
        {
            4296016152();
        }
        else
        {
            ptr->field_84 = sub_100031468(ptr, &g_100022101);
            4296016152();
        }
    }
    return 0;
}
