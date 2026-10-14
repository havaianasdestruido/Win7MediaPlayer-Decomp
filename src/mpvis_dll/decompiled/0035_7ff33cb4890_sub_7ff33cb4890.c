/* sub_7ff33cb4890 @ 0x7ff33cb4890
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb4890  (569 bytes, 20 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 5b1cf8de17dc039349e1af0bc0d728e3de3c0a96d9c50e81fc909b8ceb4927e0
 *   Evidence: analysis/report/rea-evidence/mpvis_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[8];
    int field_8;
    int field_c;
    char padding_10[296];
    char field_138;
} struct_0;

typedef struct struct_2 {
    char padding_0[72];
    struct struct_1 *field_48;
} struct_2;

typedef struct struct_1 {
    char padding_0[48];
    unsigned int field_30;
    char padding_34[116];
    unsigned long long field_a8;
} struct_1;

int sub_7ff33cb4890(void)
{
    unsigned int v9;  // r9d
    unsigned long v10;  // rsi
    int v19;  // xmm8
    unsigned long long v20;  // rcx
    int v21;  // r8d
    unsigned int v22;  // eax
    int v23;  // r9d
    int v24;  // edx
    int v25;  // r8d
    unsigned long long v26;  // cc_ndep
    int j;  // r12d
    unsigned int v11;  // r8d
    unsigned int v28;  // eax
    unsigned long long v29;  // rcx
    int v30;  // cc_dep2
    unsigned int v31;  // r14d
    unsigned long long v32;  // cc_op
    unsigned long v33;  // cc_dep1
    unsigned long v34;  // cc_dep2
    unsigned long long v35;  // xmm1lq
    unsigned long v36;  // xmm0lq
    unsigned long v12;  // r15
    int v38;  // xmm1
    int v40;  // xmm0
    unsigned long v41;  // xmm6lq
    struct_0 *ptr;  // rcx
    int v14;  // edx
    int i;  // edi
    unsigned long v16;  // xmm8lq
    unsigned long v17;  // rbx
    int v0;  // [bp-0xc8]
    int v1;  // [bp-0xc4]
    unsigned long long p;  // [bp-0xc0]
    unsigned long addr;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xb0]
    int v5;  // [bp+0x8]
    unsigned int v6;  // [bp+0x10]
    unsigned int v7;  // [bp+0x20]
    struct_2 *idx;  // [bp+0x30]

    v10 = v9;
    v12 = v11;
    i = v14 - v10;
    v0 = v14 + (unsigned int)v10;
    v16 = v10 * v10;
    v17 = i;
    addr = v17;
    v19 = (int)_INSERT(_INSERT(v16, 0, (int)v16), 8, (int)(v16 >> 32));
    if (i > v0)
        return;
    v20 = v12 - v10;
    v21 = (v12 & 4294967295) - v10;
    v22 = i - v14;
    v23 = (unsigned int)v12 + (unsigned int)v10;
    v4 = v20;
    v7 = v22;
    v1 = v21;
    v5 = v23;
    v24 = v0;
    v25 = v21;
    do
    {
        v24 = v14;
        j = v25;
        p = v20;
        v28 = v22;
        v29 = v20;
        v30 = v23;
        if (j <= v30)
        {
            v31 = j - v12;
            do
            {
                v32 = 7;
                v33 = i;
                v34 = ptr->field_8;
                if (i < ptr->field_8)
                {
                    v32 = 7;
                    v33 = j;
                    v34 = ptr->field_c;
                    if (j < ptr->field_c)
                    {
                        v35 = v10 & 4294967295;
                        v36 = v7 * v7 + v31 * v31;
                        v38 = (int)_INSERT(_INSERT(v35, 0, (int)v35), 8, (int)(v35 >> 32));
                        v40 = (int)_INSERT(_INSERT(v36, 0, (int)v36), 8, (int)(v36 >> 32));
                        v41 = (unsigned long long)(DivV(SubV(v19, v40), v38));
                        v6 = *((int *)(idx->field_48->field_a8 + (v20 * idx->field_48->field_30 + v17) * 4));
                        if (!(CmpF(v41, 0x3ff0000000000000) & 1))
                            8792667067080();
                        v32 = 0;
                        v34 = 0;
                        v33 = CmpF(v41, 0xc0091eb860000000) & 69;
                        if (((CmpF(v41, 0xc0091eb860000000) & 69 | (char)((CmpF(v41, 0xc0091eb860000000) & 69) >> 6)) & 1) != 1)
                        {
                            v32 = 0;
                            v34 = 0;
                            v33 = CmpF(0x40091eb860000000, v41) & 69;
                            if (((CmpF(0x40091eb860000000, v41) & 69 | (char)((CmpF(0x40091eb860000000, v41) & 69) >> 6)) & 1) != 1)
                                8792667067080();
                        }
                    }
                }
                v26 = _ccall(v32, v33, v34, v26);
                v20 += 1;
                j += 1;
                v31 += 1;
                p = v20;
            } while (j <= v23);
            v12 = v11;
            v28 = v7;
            v29 = v4;
            v30 = v23;
            v24 = v0;
        }
        v24 = v14;
        v20 = v29;
        v22 = v28 + 1;
        v17 += 1;
        v26 = j < v30;
        i += 1;
        v7 = v22;
        addr = v17;
        v25 = v1;
    } while (i <= v24);
    return;
}
