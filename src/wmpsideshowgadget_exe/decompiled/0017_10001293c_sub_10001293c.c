/* sub_10001293c @ 0x10001293c
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10001293c  (218 bytes, 23 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f8f45cd381f60a41cca4834188157d25906911108d7280cb2540d2245327a9d
 *   Evidence: analysis/report/rea-evidence/wmpsideshowgadget_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    struct struct_4 *field_20;
} struct_3;

typedef struct struct_7 {
    struct struct_5 *field_0;
} struct_7;

typedef struct struct_12 {
    struct struct_10 *field_0;
} struct_12;

typedef struct struct_8 {
    char padding_0[8];
    struct struct_9 *field_8;
} struct_8;

typedef struct struct_4 {
    struct struct_2 *field_0;
} struct_4;

typedef struct struct_5 {
    char padding_0[8];
    struct struct_6 *field_8;
} struct_5;

typedef struct struct_10 {
    char padding_0[8];
    struct struct_11 *field_8;
} struct_10;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_2 {
    struct struct_0 *field_0;
} struct_2;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

unsigned int sub_10001293c(struct_3 *ptr, unsigned int flag, struct_7 **cur, unsigned int *p)
{
    struct_3 *v1;  // rdi
    unsigned int v2;  // ebx
    unsigned int v4;  // ebx
    unsigned int v5;  // ebx
    unsigned long long v6;  // cc_ndep
    unsigned long long v7;  // 4122
    struct_8 **v8;  // rcx

    v1 = ptr;
    if (p)
        *(p) = 0;
    if (!flag)
        return 2147942487;
    if (!cur || flag != 1 && !p)
        return 2147500035;
    if (!ptr->field_10 || !ptr->field_18 || !ptr->field_20)
        return 2147500037;
    v2 = ptr->field_18 - (char *)ptr->field_20 >> 3;
    if (flag < v2)
        v4 = flag;
    else
        v4 = v2;
    v5 = v4;
    if (p)
        *(p) = v5;
    while (true)
    {
        if (!v5)
            return (v2 < flag ? 1 : 0);
        v7 = _ccall(19, (unsigned long long)v5, 0, v6);
        v6 = v7;
        v5 -= 1;
        if (!cur || !ptr->field_20)
            break;
        v8 = ptr->field_20->field_0;
        *(cur) = v8;
        if (v8)
            *(v8)->field_8();
        cur += 1;
        ptr->field_20 = ptr->field_20 + 1;
    }
    4295012220();
    return 2147500037;
    return 2147500035;
}
