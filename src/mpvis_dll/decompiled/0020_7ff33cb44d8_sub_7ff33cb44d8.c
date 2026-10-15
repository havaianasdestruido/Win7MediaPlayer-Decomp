/* sub_7ff33cb44d8 @ 0x7ff33cb44d8
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb44d8  (668 bytes, 29 basic blocks)
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
    unsigned int field_8;
    unsigned int field_c;
    char padding_10[64];
    unsigned long long field_50;
    unsigned long long field_58;
    unsigned long long field_60;
    unsigned long long field_68;
    unsigned long long field_70;
    char padding_78[8];
    unsigned int field_80;
    unsigned int field_84;
    char padding_88[4];
    char field_8c;
    char padding_8d[83];
    unsigned long long field_e0;
    char padding_e8[80];
    char field_138;
    char padding_139[7];
    unsigned long long field_140;
    unsigned long long field_148;
    unsigned long long field_150;
    unsigned long long field_158;
    unsigned long long field_160;
    unsigned long long field_168;
    unsigned int field_170;
    char padding_174[68];
    unsigned long long field_1b8;
    char padding_1c0[32];
    unsigned long long field_1e0;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[13];
    char field_1d;
    char padding_1e[10];
    unsigned long long field_28;
    char padding_30[24];
    unsigned long long field_48;
} struct_1;

int sub_7ff33cb44d8(void)
{
    struct_0 *ptr;  // rcx
    int v3;  // xmm2
    unsigned long long v12;  // xmm1lq
    unsigned long v13;  // xmm0lq
    int v14;  // xmm0
    unsigned int v15;  // r13d
    int v16;  // xmm0
    struct_1 *p;  // rdx
    unsigned int v18;  // ymm6
    int v19;  // xmm2
    unsigned int v20;  // r15d
    unsigned int v21;  // r12d
    int v4;  // xmm1
    int v22;  // xmm0
    int v23;  // xmm1
    int v24;  // xmm2
    int v25;  // xmm2
    unsigned long v26;  // xmm2lq
    unsigned int v27;  // esi
    unsigned int v28;  // r14d
    char v29;  // 4098
    unsigned long v30;  // xmm1lq
    unsigned long v31;  // xmm0lq
    unsigned long v5;  // xmm4lq
    int v33;  // xmm1
    int v35;  // xmm0
    int v36;  // xmm2
    unsigned long long v37;  // rcx
    unsigned long v6;  // xmm3lq
    unsigned long v7;  // xmm0lq
    unsigned long v8;  // xmm0lq
    unsigned long long v9;  // xmm2lq
    unsigned long v10;  // xmm0lq
    unsigned long v11;  // xmm0lq
    long long v0;  // [bp-0x48]
    unsigned int v1;  // [bp+0x8]

    ptr->field_8c = 0;
    v3 = (int)ptr->field_60;
    v4 = (int)ptr->field_68;
    v5 = (unsigned long long)(AddV(v3, ptr->field_50));
    v6 = (unsigned long long)(AddV(v4, ptr->field_58));
    ptr->field_50 = v5;
    ptr->field_58 = v6;
    if (((CmpF(0, v5) & 69 | (char)((CmpF(0, v5) & 69) >> 6)) & 1) == 1 && !((v7 = (unsigned long)(unsigned long long)ptr->field_80, v8 = (unsigned long)(unsigned long long)_INSERT((long long)(int)(unsigned int)v7 CONCAT 0, 8, (long long)(int)(unsigned int)(v7 >> 32)), (((char)(CmpF(v5, v8)) & 69 | (char)((CmpF(v5, v8) & 69) >> 6)) & 1) != 1)))
    {
        v9 = (unsigned long long)(MulV(v3, ptr->field_70));
    }
    else
    {
        ptr->field_8c = 1;
        v9 = (unsigned long long)v3 ^ 0x8000000000000000;
    }
    ptr->field_60 = v9;
    if (((CmpF(0, v6) & 69 | (char)((CmpF(0, v6) & 69) >> 6)) & 1) == 1 && !((v10 = (unsigned long)(unsigned long long)ptr->field_84, v11 = (unsigned long)(unsigned long long)_INSERT((long long)(int)(unsigned int)v10 CONCAT 0, 8, (long long)(int)(unsigned int)(v10 >> 32)), (((char)(CmpF(v6, v11)) & 69 | (char)((CmpF(v6, v11) & 69) >> 6)) & 1) != 1)))
    {
        v12 = (unsigned long long)(MulV(v4, ptr->field_70));
    }
    else
    {
        ptr->field_8c = 1;
        v12 = (unsigned long long)v4 ^ 0x8000000000000000;
    }
    ptr->field_68 = v12;
    if (!ptr->field_8c)
        8792667324584();
    v14 = (int)_INSERT(v13 CONCAT 0, 0, ptr->field_50);
    v15 = (((CmpF(*((unsigned int *)&v14), 0) & 69 | (CmpF(*((unsigned int *)&v14), 0) & 69) >> 6) & 1) == 1 ? (unsigned int)(SubV(v14, 0x3f000000)) : (unsigned int)(AddV(v14, 0x3f000000)));
    v16 = (int)_INSERT(v15, 0, ptr->field_58);
    v18 = p->field_28;
    v19 = (int)ptr->field_160;
    v20 = ptr->field_8 - v15;
    v21 = (((CmpF(*((unsigned int *)&v16), 0) & 69 | (CmpF(*((unsigned int *)&v16), 0) & 69) >> 6) & 1) == 1 ? (unsigned int)(SubV(v16, 0x3f000000)) : (unsigned int)(AddV(v16, 0x3f000000)));
    v22 = (int)ptr->field_158;
    v1 = ptr->field_c - v21;
    v23 = AddV(DivV(MulV(SubV(ptr->field_e0, ptr->field_140), ptr->field_148), v22), ptr->field_150);
    ptr->field_150 = *((unsigned long long *)&v23);
    v24 = MulV(AddV(DivV(MulV(v19, p->field_28), v22), v23), ptr->field_168);
    ptr->field_150 = *((unsigned long long *)&v24);
    v25 = AddV(v24, ptr->field_140);
    ptr->field_140 = *((unsigned long long *)&v25);
    v26 = (unsigned long long)(MulV(v25, p->field_28));
    v27 = (unsigned int)v26 + 1;
    v28 = v27;
    if (p->field_1d)
    {
        v29 = ptr->field_138;
        v18 = 1053609165;
        ptr->field_170 = 5;
        v27 *= 2;
        v28 *= 2;
        ptr->field_138 = !v29;
    }
    else if (ptr->field_170)
    {
        v30 = ptr->field_170;
        v31 = v27;
        v33 = (int)_INSERT(_INSERT(v30, 0, (int)v30), 8, (int)(v30 >> 32));
        v35 = (int)_INSERT(_INSERT(v31, 0, (int)v31), 8, (int)(v31 >> 32));
        v36 = (int)_INSERT(v26, 0, *((unsigned long long *)&MulV(DivV(v33, 0x4004000000000000), v35)));
        v27 = (((CmpF(*((unsigned int *)&v36), 0) & 69 | (CmpF(*((unsigned int *)&v36), 0) & 69) >> 6) & 1) == 1 ? (unsigned int)(SubV(v36, 0x3f000000)) : (unsigned int)(AddV(v36, 0x3f000000)));
    }
    if (!ptr->field_170)
    {
        *((unsigned int *)&v0) = v18;
        sub_7ff33cb4890(ptr, v15, v21, v27, v0, p);
        *((unsigned int *)&v0) = v18;
        sub_7ff33cb4890(ptr, v20, v1, v28, v0, p);
        sub_7ff33caf054(&ptr->padding_e8[8]);
        sub_7ff33caf054(&ptr->padding_e8[44]);
        return;
    }
    v37 = p->field_8;
    ptr->field_1b8 = p->field_48;
    ptr->field_1e0 = v37;
    8792667324584();
}
