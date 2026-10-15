/* sub_100002cd0 @ 0x100002cd0
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100002cd0  (56 bytes, 6 basic blocks)
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
    char padding_0[24];
    unsigned int field_18;
} struct_0;

long long sub_100002cd0(void)
{
    unsigned long long v1;  // rax
    unsigned long v2;  // r12
    struct_0 *v3;  // rsi

    if (!v1)
        goto LABEL_0x100002cd8;
    InterlockedExchange64(v2, v1);
    if (*((long long *)v2) == v1)
    {
        4296015952();
    }
    else if (v3->field_18)
    {
        4296016232();
    }
}
