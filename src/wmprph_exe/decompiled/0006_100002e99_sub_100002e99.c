/* sub_100002e99 @ 0x100002e99
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100002e99  (190 bytes, 29 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 395fce3d66ab1ed9a4fb2238172eaefc5cf78fc7a8b34c30686d638d16d9efca
 *   Evidence: analysis/report/rea-evidence/wmprph_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    char padding_10[101];
    char field_75;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

typedef struct struct_4 {
    struct struct_2 *field_0;
    unsigned long long field_8;
    struct struct_5 *field_10;
} struct_4;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
} struct_2;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

unsigned int sub_100002e99(unsigned long long a0, struct_1 *a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9)
{
    char v2;  // 4098
    unsigned long v3;  // cc_dep1
    unsigned long v12;  // 4101
    unsigned long long v13;  // cc_ndep
    unsigned long v14;  // 4101
    unsigned long v15;  // 4101
    struct_0 *ptr;  // rsi
    unsigned long v4;  // cc_dep2
    unsigned long long v5;  // cc_ndep
    unsigned long v6;  // 4107
    unsigned long v7;  // 4101
    unsigned long v8;  // 4101
    unsigned long v9;  // 4101
    unsigned long v10;  // 4101
    unsigned long v11;  // 4101
    char v0;  // [bp+0x0]

    if (a0)
        [D] Unsupported jumpkind Ijk_NoDecode at address 4294979229()
    v2 = v0;
    v0 = v2 + *((char *)&&v0);
    v3 = v2;
    v4 = *((char *)&&v0);
    v6 = _ccall(6, 1, (unsigned long long)v2, (unsigned long long)*((char *)(void*)&&v0), v5);
    if ((char)v6)
    {
        v7 = _ccall(0, 1, v3, v4, v5);
        if ((char)v7)
            goto LABEL_100002f16;
        v8 = _ccall(0, 1, v3, v4, v5);
        if (!((char)v8))
        {
            v9 = _ccall(0, 1, v3, v4, v5);
            if (!((char)v9))
                goto LABEL_0x100002ea9;
            [D] Unsupported jumpkind Ijk_NoDecode at address 4294979341()
        }
        [D] Unsupported jumpkind Ijk_NoDecode at address 4294979342()
        v10 = _ccall(8, 1, v3, v4, v5);
        if (!((char)v10))
            goto LABEL_100002f11;
        v11 = _ccall(8, 1, v3, v4, v5);
        if (!((char)v11))
            goto LABEL_100002f1b;
    }
    v12 = _ccall(8, 1, v3, v4, v5);
    if (!((char)v12))
    {
LABEL_100002f11:
LABEL_100002f16:
        [D] Unsupported jumpkind Ijk_NoDecode at address 4294979350()
        [D] Unsupported jumpkind Ijk_NoDecode at address 4294979351()
        v14 = _ccall(8, 1, v3, v4, v13);
        if (!((char)v14))
            goto LABEL_100002f1b;
    }
    v15 = _ccall(8, 1, v3, v4, v13);
LABEL_100002f1b:
    v0 += *((char *)&&v0);
    ptr->field_75 = ptr->field_75 + *((char *)&&v0);
}
