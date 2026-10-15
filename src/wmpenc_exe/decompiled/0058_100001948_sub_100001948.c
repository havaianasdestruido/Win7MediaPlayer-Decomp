/* sub_100001948 @ 0x100001948
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100001948  (59 bytes, 6 basic blocks)
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
    struct struct_0 *field_0;
} struct_2;

typedef struct struct_8 {
    char padding_0[8];
    struct struct_9 *field_8;
} struct_8;

typedef struct struct_5 {
    struct struct_3 *field_0;
} struct_5;

typedef struct struct_6 {
    char padding_0[8];
    struct struct_7 *field_8;
} struct_6;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_3 {
    char padding_0[8];
    struct struct_4 *field_8;
} struct_3;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

void sub_100001948(unsigned long a0, unsigned long long a1)
{
    unsigned long long v4;  // rbx
    struct_2 **ptr;  // rdi
    struct_8 **p;  // rcx
    struct_5 **addr;  // rsi
    struct_6 *v8;  // rdx
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    struct_2 **v3;  // [bp+0x8]

    v2 = a1;
    v1 = v4;
    v0 = v4;
    if (*((int *)ptr) != (unsigned int)v4)
    {
        p = *(ptr);
        *(addr) = p;
        v8 = *(p);
        *(p)->field_8();
    }
    v3 = ptr;
    4296016584();
}
