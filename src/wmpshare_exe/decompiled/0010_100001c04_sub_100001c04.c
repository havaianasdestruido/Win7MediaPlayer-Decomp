/* sub_100001c04 @ 0x100001c04
 *
 * MODULE   : wmpshare_exe  (bin/wmpshare.exe)
 * ADDRESS  : 0x100001c04  (56 bytes, 6 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): ab95a6aa118e853d71b326b68a409f24a6276f47e34ca9e8049f7d49b4825a51
 *   Evidence: analysis/report/rea-evidence/wmpshare_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[24];
    unsigned int field_18;
} struct_0;

long long sub_100001c04(void)
{
    unsigned long long v1;  // rax
    unsigned long v2;  // r12
    struct_0 *v3;  // rsi

    if (!v1)
        goto LABEL_0x100001c0c;
    InterlockedExchange64(v2, v1);
    if (*((long long *)v2) == v1)
    {
        0x100100000();
    }
    else if (v3->field_18)
    {
        4296015920();
    }
}
