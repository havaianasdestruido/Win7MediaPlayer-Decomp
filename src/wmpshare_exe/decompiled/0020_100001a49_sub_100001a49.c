/* sub_100001a49 @ 0x100001a49
 *
 * MODULE   : wmpshare_exe  (bin/wmpshare.exe)
 * ADDRESS  : 0x100001a49  (121 bytes, 3 basic blocks)
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

extern unsigned int g_100001ef8;

void sub_100001a49(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    uint128_t v8;  // xmm0
    uint128_t v9;  // xmm1
    uint128_t v10;  // xmm2
    uint128_t v11;  // xmm3
    unsigned long long *v12;  // rax
    uint128_t v0;  // [bp-0x48]
    uint128_t v1;  // [bp-0x38]
    uint128_t v2;  // [bp-0x28]
    uint128_t v3;  // [bp-0x18]
    unsigned long long v4;  // [bp+0x8]
    unsigned long long v5;  // [bp+0x10]
    unsigned long long v6;  // [bp+0x18]
    unsigned long long v7;  // [bp+0x20]

    v4 = a0;
    v5 = a1;
    v6 = a2;
    v7 = a3;
    v0 = v8;
    v1 = v9;
    v2 = v10;
    v3 = v11;
    goto sub_100001ad4(&g_100001ef8, v12);
}
