/* sub_1000011a5 @ 0x1000011a5
 *
 * MODULE   : wmpconfig_exe  (bin/wmpconfig.exe)
 * ADDRESS  : 0x1000011a5  (27 bytes, 2 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f1726e36b8a016069b7d9eef811f5ca3799bfed355423f70f51947e67d2ef4f
 *   Evidence: analysis/report/rea-evidence/wmpconfig_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char field_0;
    char padding_1[58];
    unsigned int field_3b;
} struct_0;

typedef struct struct_1 {
    char padding_0[109];
    char field_6d;
} struct_1;

struct_0 * sub_1000011a5(unsigned long a0, char a1)
{
    char v2;  // al
    struct_0 *ptr;  // rax
    struct_1 *p;  // rdi
    char v5;  // 4113
    char v6;  // dh
    unsigned long v7;  // 4172
    char v1;  // [bp+0x100009]

    if ([D] unsupported_<class 'pyvex.expr.GetI'>())
    {
        [D] PutI(904:F64x8)[t1,0] = t2()
        [D] PutI(968:I8x8)[t1,0] = 0x01()
    }
    else
    {
        [D] PutI(904:F64x8)[t1,0] = t2()
        [D] PutI(968:I8x8)[t1,0] = 0x01()
    }
    ptr = (struct_0 *)_INSERT(v2 ^ 417206783, 1, (v2 ^ 255) + v1);
    ptr->field_0 = ptr->field_0 + *((char *)&ptr);
    v5 = p->field_6d;
    p->field_6d = p->field_6d + v6;
    v7 = _ccall(0, 1, (unsigned long long)v5, (unsigned long long)v6, 0);
    if (!((char)v7))
        goto LABEL_0x1000011bc;
    *((unsigned int *)&(&ptr->padding_1)[1]) = *((int *)&(&ptr->padding_1)[1]) - 1;
    return ptr;
}
