/* sub_100004318 @ 0x100004318
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100004318  (264 bytes, 23 basic blocks)
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
    unsigned long long field_0;
    unsigned long long field_8;
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

unsigned int sub_100004318(unsigned long long a0, struct_0 *p, unsigned int *a2, unsigned long long *ptr)
{
    unsigned long long flag;  // rdi
    unsigned int v2[4];  // rsi
    struct_0 *cur;  // rbx
    struct_2 **v4;  // rbx
    unsigned long long v5;  // rcx
    struct_2 **v6;  // rcx

    flag = 0;
    v2 = a2;
    cur = p;
    if (!a0 || !p)
        return 2147942487;
    if (!ptr)
        return 2147500035;
    *(ptr) = 0;
    if (!*(a2) && !a2[1] && a2[2] == 192 && a2[3] == 0x46000000)
    {
        v4 = a0 + p->field_8;
        v6 = v4;
        *(v4)->field_8();
    }
    if (!p->field_10)
        return 2147500034;
    do
    {
        v5 = cur->field_0;
        if (!v5 || *((int *)v5) == *(a2) && *((int *)(v5 + 4)) == a2[1] && *((int *)(v5 + 8)) == a2[2] && *((int *)(v5 + 12)) == a2[3])
        {
            if (cur->field_10 != 0x1)
                cur->field_10();
            v4 = a0 + cur->field_8;
            v6 = v4;
            *(v4)->field_8();
        }
    } while ((cur += 24, cur->field_10));
    return 2147500034;
    return 2147942487;
}
