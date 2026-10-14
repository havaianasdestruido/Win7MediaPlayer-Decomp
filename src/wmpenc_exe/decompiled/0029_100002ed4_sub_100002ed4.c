/* sub_100002ed4 @ 0x100002ed4
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100002ed4  (149 bytes, 10 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): b8b174ae012a8a25a9d706f7f169e7a2553ab8ffe0ccef2beb34fe803ec0634a
 *   Evidence: analysis/report/rea-evidence/wmpenc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

void sub_100002ed4(unsigned short **ptr, unsigned long a1, unsigned long a2, unsigned short *a3)
{
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rsi
    unsigned long long v12;  // rdi
    unsigned long long v13;  // r12
    unsigned long long v14;  // r13
    unsigned long long v15;  // r14
    unsigned long long v16;  // r15
    unsigned short *flag;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]
    unsigned long long v6;  // [bp+0x8]
    unsigned long v7;  // [bp+0x10]
    unsigned long long v8;  // [bp+0x18]

    v6 = v10;
    v7 = vvar_24{r56|8b};
    v8 = v11;
    v5 = v12;
    v4 = v13;
    v3 = v14;
    v2 = v15;
    v1 = v16;
    flag = NULL;
    if (sub_100002c44() < 0)
        4296016408();
    *(ptr) = flag;
    if (*(flag) && sub_1000023c0(ptr, a3) >= 0)
        4296016152();
    4296016552();
}
