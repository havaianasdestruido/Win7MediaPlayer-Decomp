/* sub_7ff33cafd7f @ 0x7ff33cafd7f
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cafd7f  (393 bytes, 20 basic blocks)
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

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[146];
    char field_9a;
} struct_1;

typedef struct struct_2 {
    struct struct_0 *field_0;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int sub_7ff33cafd7f(void)
{
    int v10;  // r14d
    uint128_t v11;  // xmm10
    int v20;  // xmm0
    int v21;  // xmm0
    int v22;  // xmm0
    uint128_t v23;  // xmm11
    uint128_t v24;  // xmm15
    int v25;  // xmm15
    int v27;  // xmm15
    int v28;  // xmm15
    int v29;  // xmm15
    unsigned int v12;  // edi
    int v30;  // xmm6
    struct_1 *v31;  // rsi
    int v32;  // xmm11
    int v33;  // xmm13
    int v34;  // xmm10
    uint128_t v35;  // xmm6
    int v36;  // xmm0
    unsigned int v37;  // ymm9
    int v38;  // xmm8
    unsigned long long v39;  // rdi
    int v13;  // xmm10
    int v40;  // xmm14
    uint128_t v41;  // xmm7
    int v42;  // xmm0
    uint128_t v43;  // xmm0
    unsigned int v44;  // ebx
    unsigned long v45;  // r8
    unsigned long v46;  // rdx
    unsigned long long v47;  // r9
    uint128_t v48;  // xmm12
    int v49;  // xmm6
    uint128_t v14;  // xmm0
    int v50;  // xmm7
    unsigned int v51;  // ebx
    unsigned int v52;  // r15d
    unsigned int v53;  // r13d
    struct_1 *v54;  // rcx
    int v16;  // xmm10
    int v17;  // xmm10
    int v18;  // xmm10
    unsigned int v1;  // [bp+0x30]
    uint128_t v2;  // [bp+0x40]
    uint128_t v3;  // [bp+0x80]
    uint128_t v4;  // [bp+0x90]
    unsigned int v5;  // [bp+0x130]
    unsigned int v6;  // [bp+0x138]
    unsigned int v7;  // [bp+0x140]
    unsigned int v8;  // [bp+0x148]
    unsigned int v9;  // [bp+0x150]

    if (v10 <= 1)
    {
        sub_7ff33caff33();
        return;
    }
    v4 = v11;
    v13 = (int)v12;
    v14 = vvar_47{r56|4b};
    v16 = (int)_INSERT(_INSERT(v13, 12, (unsigned int)(v13 >> 96)), 8, (unsigned int)(v13 >> 64));
    v17 = (int)_INSERT(v16, 4, (unsigned long long)v13 >> 32);
    v18 = (int)_INSERT(v17, 0, (unsigned int)v13);
    v20 = (int)_INSERT(_INSERT(v14, 12, v14 >> 96), 8, v14 >> 64);
    v21 = (int)_INSERT(v20, 4, (unsigned long long)v14 >> 32);
    v22 = (int)_INSERT(v21, 0, v14);
    v1 = *((unsigned int *)&v18);
    v8 = *((unsigned int *)&v22);
    v3 = v23;
    v2 = v24;
    v25 = (int)v10;
    v27 = (int)_INSERT(_INSERT(v25, 12, (unsigned int)(v25 >> 96)), 8, (unsigned int)(v25 >> 64));
    v28 = (int)_INSERT(v27, 4, (unsigned long long)v25 >> 32);
    v29 = (int)_INSERT(v28, 0, (unsigned int)v25);
    v30 = DivV(1, v29);
    sub_7ff33caf128(&v31->padding_8[72], 1);
    v32 = AddV(MulV(v18, v30), v7);
    v34 = AddV(MulV(v8, v30), v33);
    v35 = (uint128_t)(MulV(v22, v5));
    v36 = AddV(v35, v32);
    v39 = (((CmpF(*((unsigned int *)&v36), v37) & 69 | (CmpF(*((unsigned int *)&v36), v37) & 69) >> 6) & 1) == 1 ? (unsigned int)*((unsigned int *)&SubV(v36, v38)) : (unsigned int)*((unsigned int *)&AddV(v36, v38)));
    v41 = (uint128_t)(MulV(v22, v40));
    v42 = AddV(v41, v34);
    if (((CmpF(*((unsigned int *)&v42), v37) & 69 | (char)((CmpF(*((unsigned int *)&v42), v37) & 69) >> 6)) & 1) != 1)
    {
        v43 = (uint128_t)(AddV(v42, v38));
        v44 = v43;
    }
    else
    {
        v43 = (uint128_t)(SubV(v42, v38));
        v44 = v43;
    }
    v45 = v6;
    v46 = v9;
    v47 = v39 & 4294967295;
    sub_7ff33caf2b0(&v31->padding_8, v46, v45, v47, v44);
    v9 = v39;
    v6 = v44;
    if (v31->field_9a)
    {
        v49 = AddV(v35 ^ v48, v32);
        if (((CmpF(*((unsigned int *)&v49), v37) & 69 | (char)((CmpF(*((unsigned int *)&v49), v37) & 69) >> 6)) & 1) != 1)
        {
            v35 = (uint128_t)(AddV(v49, v38));
            v39 = (unsigned int)v35;
        }
        else
        {
            v35 = (uint128_t)(SubV(v49, v38));
            v39 = (unsigned int)v35;
        }
        v50 = AddV(v41 ^ v48, v34);
        if (((CmpF(*((unsigned int *)&v50), v37) & 69 | (char)((CmpF(*((unsigned int *)&v50), v37) & 69) >> 6)) & 1) != 1)
        {
            v41 = (uint128_t)(AddV(v50, v38));
            v51 = v41;
        }
        else
        {
            v41 = (uint128_t)(SubV(v50, v38));
            v51 = v41;
        }
        v47 = v39 & 4294967295;
        v45 = v52;
        v46 = v53;
        sub_7ff33caf2b0(&v31->padding_8, v46, v45, v47, v51);
    }
    v54 = v31;
    v31->field_0->field_0();
}
