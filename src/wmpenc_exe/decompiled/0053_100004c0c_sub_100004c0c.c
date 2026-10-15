/* sub_100004c0c @ 0x100004c0c
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100004c0c  (75 bytes, 6 basic blocks)
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

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned int field_8;
    char padding_c[4];
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned int g_1000077b8;
extern char g_1000078a0;

void sub_100004c0c(void)
{
    unsigned int v1;  // eax
    unsigned long v2;  // rdi
    struct_2 *ptr;  // rbx
    unsigned long v4;  // r13
    struct_0 **v5;  // rcx

    v2 = v1;
    if (!v1)
        goto LABEL_0x100004c6e;
    ptr->field_0 = v4;
    ptr->field_8 = 1;
    InterlockedExchangeAdd(&g_1000077b8, 4294967295);
    if (!g_1000077b8 + 4294967295)
    {
        g_1000078a0 = 1;
        4296016024();
    }
    v5 = ptr->field_10;
    if (!ptr->field_10)
        4294988150();
    ptr->field_10->field_0->field_10();
}
