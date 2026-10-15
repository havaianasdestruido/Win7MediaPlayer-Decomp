/* sub_100038eac @ 0x100038eac
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100038eac  (208 bytes, 18 basic blocks)
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
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

char sub_100038eac(unsigned long long a0, struct_0 *a1, unsigned short *a2)
{
    unsigned long long v3;  // r13
    char v4;  // sil
    int v5;  // edi
    unsigned long v0;  // [bp-0x28]
    unsigned short v1;  // [bp-0x1c]

    v3 = 0;
    if (a0 + 48)
        4296016072();
    v4 = 0;
    sub_10002fbf0(&v0);
    v1 |= 4;
    if (a2 && *(a2) && (int)sub_10002fd60(&v0) >= 0)
    {
        v5 = 0;
        if (*((int *)&a1[1].padding_0[0]) > 0)
        {
            do
            {
                if ((char)sub_10002fba4(v0, *((long long *)(v3 + a1->field_8))))
                {
                    v4 = 1;
                    break;
                }
            } while ((v5 = (int)(v5 + 1), v3 += 8, v5 < *((int *)&a1[1].padding_0[0])));
        }
    }
    sub_100030020(&v0);
    return v4;
}
