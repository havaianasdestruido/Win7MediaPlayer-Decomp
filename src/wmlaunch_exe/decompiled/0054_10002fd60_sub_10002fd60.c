/* sub_10002fd60 @ 0x10002fd60
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10002fd60  (182 bytes, 19 basic blocks)
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
    long long field_0;
    unsigned int field_8;
    char field_c;
} struct_0;

int sub_10002fd60(void)
{
    long long v1;  // rdx
    int v2;  // r8d
    int v3;  // esi
    struct_0 *v4;  // rcx
    long long v5;  // rdi
    long long v6;  // rdx

    if (!v1)
    {
        sub_100030020();
    }
    else if (v2 < 0)
    {
        4296016320();
    }
    else
    {
        v3 = v2 + 1;
        if (v3 < 0)
            return;
        if ((v4->field_c & 32))
        {
            sub_10002f938(v4->field_0, v4->field_8, v1, v3 - 1);
        }
        else
        {
            v5 = sub_100030890(v4, v3);
            if (!v5)
                return;
            sub_10002f938(v5, v3, v1, v3 - 1);
            v6 = v5;
            if ((v4->field_c & 4))
                sub_100030808(v4, v6);
            else
                sub_100030794(v4, v6);
        }
    }
    return;
}
