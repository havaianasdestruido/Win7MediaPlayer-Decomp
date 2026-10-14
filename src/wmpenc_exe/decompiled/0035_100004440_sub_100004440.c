/* sub_100004440 @ 0x100004440
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100004440  (90 bytes, 9 basic blocks)
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

typedef struct struct_0 {
    char padding_0[56];
    struct struct_1 *field_38;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

unsigned int sub_100004440(struct_0 *a0, unsigned long long a1, unsigned int *a2, unsigned long long *ptr)
{
    unsigned long long *v1;  // r8
    unsigned int v2[4];  // rdx
    unsigned long long v3;  // rcx

    if (!ptr)
        return 2147500035;
    *(ptr) = 0;
    if (a1 && (*(a2) || a2[1] || a2[2] != 192 || a2[3] != 0x46000000))
        return 2147746064;
    v1 = ptr;
    v2 = a2;
    v3 = a1;
    a0->field_38();
}
