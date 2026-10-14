/* sub_100001788 @ 0x100001788
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100001788  (54 bytes, 7 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 883d9616dfc7586fa88c58013f70e055df9328f3cfc3ef39898c15c6970fb0db
 *   Evidence: analysis/report/rea-evidence/wmplayer_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[4];
    unsigned int field_24;
    char field_28;
} struct_0;

unsigned long long sub_100001788(unsigned long a0, unsigned int flag, char a2, unsigned long long a3, unsigned long long a4, unsigned long a5, struct_0 *ptr)
{
    unsigned long long v1;  // rax

    v1 = 0;
    if (!ptr)
        return 0;
    if (!flag)
    {
        ptr->field_24 = 0;
        ptr->field_28 = 0;
        ptr->field_10 = 0;
    }
    else if (flag == 1)
    {
        v1 = a4;
        ptr->field_28 = a2;
        ptr->field_10 = a3;
        ptr->field_24 = flag;
    }
    else
    {
        return 0;
    }
    ptr->field_18 = v1;
    return v1;
}
