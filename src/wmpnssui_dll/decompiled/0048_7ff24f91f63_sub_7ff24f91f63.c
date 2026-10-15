/* sub_7ff24f91f63 @ 0x7ff24f91f63
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f91f63  (70 bytes, 6 basic blocks)
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
    char padding_0[2106605515];
    unsigned int field_7d903fcb;
} struct_0;

typedef struct struct_1 {
    char padding_0[15];
    unsigned long long field_f;
    unsigned long long field_17;
    char padding_1f[4];
    unsigned int field_23;
    char field_27;
} struct_1;

long long sub_7ff24f91f63(struct_1 *a0, unsigned int flag, char a2, unsigned long a3, unsigned long a4)
{
    struct_0 *p;  // rsi
    unsigned short v2;  // gs_seg
    struct_1 *ptr;  // rcx
    unsigned long v4;  // cc_op
    unsigned long v5;  // cc_dep1
    unsigned long v6;  // cc_dep2
    unsigned long v7;  // cc_ndep
    unsigned long v8;  // 4113
    unsigned long v9;  // rax

    *((unsigned short *)&p->padding_0[914370334 + vvar_10{r56|8b}]) = v2;
    ptr = &a0->padding_0[1];
    v8 = _ccall(4, v4, v5, v6, v7);
    if (!(&a0->padding_0[1] & (char)v8))
    {
        if ([D] unsupported_<class 'pyvex.expr.GetI'>())
        {
            [D] PutI(904:F64x8)[t3,0] = t6()
            [D] PutI(968:I8x8)[t3,0] = 0x01()
        }
        else
        {
            [D] PutI(904:F64x8)[t3,0] = t6()
            [D] PutI(968:I8x8)[t3,0] = 0x01()
        }
        *((unsigned int *)&(&p->padding_0)[1]) = *((int *)&(&p->padding_0)[1]) ^ (unsigned int)(struct struct_1 *)((char *)&ptr[6208356].field_17 + 6);
    }
    else if (flag == 1)
    {
        ptr->field_27 = a2;
        ptr->field_f = a3;
        ptr->field_23 = flag;
        ptr->field_17 = a4;
        return a4;
    }
    else
    {
        return v9;
    }
}
