/* sub_100004d20 @ 0x100004d20
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100004d20  (116 bytes, 8 basic blocks)
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
    char padding_0[8];
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

extern char g_100001918;
extern unsigned int g_1000077b8;
extern char g_1000078a0;

unsigned int sub_100004d20(struct_2 *ptr)
{
    unsigned int v1;  // 4104
    unsigned long v2;  // rdi
    struct_0 **p;  // rcx
    struct_0 *v4;  // rdx

    v1 = ptr->field_8;
    ptr->field_8 = ptr->field_8 - 1;
    v2 = ptr->field_8;
    if (v1 + 4294967295 || !ptr)
        return ptr->field_8;
    ptr->field_8 = 1;
    *((char **)&ptr->padding_0[0]) = &g_100001918;
    InterlockedExchangeAdd(&g_1000077b8, 4294967295);
    if (!g_1000077b8 + 4294967295)
    {
        g_1000078a0 = 1;
        4296016024();
    }
    p = ptr->field_10;
    if (!p)
        4294988150();
    v4 = *(p);
    *(p)->field_10();
    return ptr->field_8;
}
