/* sub_7ff24f91fa5 @ 0x7ff24f91fa5
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f91fa5  (47 bytes, 7 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 28d793e5077afb34b57fd3ac404413a60f06a3985fcc4aa16cccb8525411f8bb
 *   Evidence: analysis/report/rea-evidence/wmpnssui_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[109];
    char field_6d;
} struct_0;

void sub_7ff24f91fa5(unsigned long a0, char a1)
{
    unsigned int v1;  // eax
    char *ptr;  // rax
    unsigned long v11;  // 4101
    struct_0 *p;  // rdi
    char v4;  // 4109
    char v5;  // dh
    unsigned long v6;  // cc_dep1
    unsigned long v7;  // cc_dep2
    unsigned long v8;  // cc_ndep
    unsigned long v9;  // 4131
    unsigned long v10;  // 4101

    ptr = v1 ^ 32866113;
    *(ptr) = *(ptr) + *((char *)&ptr);
    v4 = p->field_6d;
    p->field_6d = v4 + v5;
    v6 = v4;
    v7 = v5;
    v9 = _ccall(0, 1, (unsigned long long)v4, (unsigned long long)v5, v8);
    if (!((char)v9))
    {
        if (!((char)__CFADD__(v6, v7)))
            goto LABEL_0x7ff24f92029;
        v10 = _ccall(4, 1, v6, v7, v8);
        if ((char)v10)
        {
            v11 = _ccall(0, 1, v6, v7, v8);
            if (!((char)v11))
                goto LABEL_0x7ff24f91fbb;
            [D] Unsupported jumpkind Ijk_NoDecode at address 8792418361375()
        }
        [D] Unsupported jumpkind Ijk_NoDecode at address 8792418361377()
    }
    *(ptr) = *(ptr) + *((char *)&ptr);
    8792418812440();
}
