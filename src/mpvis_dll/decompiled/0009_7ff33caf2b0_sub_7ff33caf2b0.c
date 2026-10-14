/* sub_7ff33caf2b0 @ 0x7ff33caf2b0
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33caf2b0  (499 bytes, 61 basic blocks)
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
    int field_0;
    unsigned int field_4;
    unsigned int field_8;
} struct_0;

int sub_7ff33caf2b0(void)
{
    struct_0 *ptr;  // rcx
    int v4;  // r10d
    int v13;  // xmm0
    int v14;  // xmm2
    int v16;  // xmm0
    int v17;  // xmm0
    int v18;  // xmm0
    int v20;  // xmm2
    int v21;  // xmm2
    int v22;  // xmm2
    int v5;  // r11d
    int v23;  // xmm0
    int v24;  // xmm3
    int v26;  // xmm0
    int v27;  // xmm0
    int v28;  // xmm0
    int v30;  // xmm3
    int v31;  // xmm3
    int v32;  // xmm3
    int v6;  // edx
    int v33;  // xmm3
    int v34;  // ebx
    int v36;  // xmm0
    int v38;  // xmm0
    int v39;  // xmm0
    int v40;  // xmm0
    int v41;  // xmm0
    int v7;  // ebx
    int v42;  // r8d
    int v44;  // r8d
    int v45;  // xmm0
    int v47;  // xmm0
    int v48;  // xmm0
    int v49;  // xmm0
    int v50;  // xmm0
    int v51;  // r9d
    int v8;  // r8d
    int v53;  // r9d
    int v54;  // xmm0
    int v56;  // xmm0
    int v57;  // xmm0
    int v58;  // xmm0
    int v59;  // xmm0
    int v60;  // r11d
    int v9;  // r9d
    int v62;  // xmm0
    int v64;  // xmm0
    int v65;  // xmm0
    int v66;  // xmm0
    int v67;  // xmm0
    unsigned int v10;  // edi
    unsigned int v11;  // edx
    uint128_t v12;  // xmm2
    int v0;  // [bp-0x18]
    int v2;  // [bp+0x28]

    v4 = ptr->field_0;
    v5 = v2;
    v7 = v6;
    if (v6 < v4 || v6 >= ptr->field_8 || v8 < v4 || v8 >= ptr->field_4 || v9 < v4 || v9 >= ptr->field_8 || v5 < v4 || v5 >= ptr->field_4)
    {
        if (v7 < v4 && v9 < v4)
            return;
        v10 = ptr->field_8;
        if (v7 >= v10 && v9 >= v10)
            return;
        if (v8 < v4 && v5 < v4)
            return;
        v11 = ptr->field_4;
        if (v8 >= v11 && v5 >= v11)
            return;
        if (v9 == v7)
        {
            v12 = 0x3f800000;
        }
        else
        {
            v13 = (int)(v9 - v7);
            v14 = (int)(v5 - v8);
            v16 = (int)_INSERT(_INSERT(v13, 12, (unsigned int)(v13 >> 96)), 8, (unsigned int)(v13 >> 64));
            v17 = (int)_INSERT(v16, 4, (unsigned long long)v13 >> 32);
            v18 = (int)_INSERT(v17, 0, (unsigned int)v13);
            v20 = (int)_INSERT(_INSERT(v14, 12, (unsigned int)(v14 >> 96)), 8, (unsigned int)(v14 >> 64));
            v21 = (int)_INSERT(v20, 4, (unsigned long long)v14 >> 32);
            v22 = (int)_INSERT(v21, 0, (unsigned int)v14);
            v12 = (uint128_t)(DivV(v22, v18));
        }
        v23 = (int)v7;
        v24 = (int)v8;
        v26 = (int)_INSERT(_INSERT(v23, 12, (unsigned int)(v23 >> 96)), 8, (unsigned int)(v23 >> 64));
        v27 = (int)_INSERT(v26, 4, (unsigned long long)v23 >> 32);
        v28 = (int)_INSERT(v27, 0, (unsigned int)v23);
        v30 = (int)_INSERT(_INSERT(v24, 12, (unsigned int)(v24 >> 96)), 8, (unsigned int)(v24 >> 64));
        v31 = (int)_INSERT(v30, 4, (unsigned long long)v24 >> 32);
        v32 = (int)_INSERT(v31, 0, (unsigned int)v24);
        v33 = SubV(v32, MulV(v28, v12));
        if (v7 < v4)
        {
            v34 = v4;
        }
        else
        {
            if (v7 < v10)
                goto LABEL_7ff33caf3b9;
            v34 = v10 - 1;
        }
        v7 = v34;
        v36 = (int)v7;
        v38 = (int)_INSERT(_INSERT(v36, 12, (unsigned int)(v36 >> 96)), 8, (unsigned int)(v36 >> 64));
        v39 = (int)_INSERT(v38, 4, (unsigned long long)v36 >> 32);
        v40 = (int)_INSERT(v39, 0, (unsigned int)v36);
        v41 = AddV(MulV(v40, v12), v33);
        v44 = (((CmpF(*((unsigned int *)&v41), 0) & 69 | (CmpF(*((unsigned int *)&v41), 0) & 69) >> 6) & 1) == 1 ? (unsigned int)(SubV(v41, 0x3f000000)) : (unsigned int)(AddV(v41, 0x3f000000)));
LABEL_7ff33caf3b9:
        if (v8 < v4)
        {
            v42 = v4;
        }
        else
        {
            if (v44 < v11)
                goto LABEL_7ff33caf3ef;
            v42 = v11 - 1;
        }
        v44 = v42;
        v45 = (int)v44;
        v47 = (int)_INSERT(_INSERT(v45, 12, (unsigned int)(v45 >> 96)), 8, (unsigned int)(v45 >> 64));
        v48 = (int)_INSERT(v47, 4, (unsigned long long)v45 >> 32);
        v49 = (int)_INSERT(v48, 0, (unsigned int)v45);
        v50 = DivV(SubV(v49, v33), v12);
        v7 = (((CmpF(*((unsigned int *)&v50), 0) & 69 | (CmpF(*((unsigned int *)&v50), 0) & 69) >> 6) & 1) == 1 ? (unsigned int)(SubV(v50, 0x3f000000)) : (unsigned int)(AddV(v50, 0x3f000000)));
LABEL_7ff33caf3ef:
        if (v9 < v4)
        {
            v51 = v4;
        }
        else
        {
            if (v9 < v10)
                goto LABEL_7ff33caf426;
            v51 = v10 - 1;
        }
        v53 = v51;
        v54 = (int)v53;
        v56 = (int)_INSERT(_INSERT(v54, 12, (unsigned int)(v54 >> 96)), 8, (unsigned int)(v54 >> 64));
        v57 = (int)_INSERT(v56, 4, (unsigned long long)v54 >> 32);
        v58 = (int)_INSERT(v57, 0, (unsigned int)v54);
        v59 = AddV(MulV(v58, v12), v33);
        v5 = (((CmpF(*((unsigned int *)&v59), 0) & 69 | (CmpF(*((unsigned int *)&v59), 0) & 69) >> 6) & 1) == 1 ? (unsigned int)(SubV(v59, 0x3f000000)) : (unsigned int)(AddV(v59, 0x3f000000)));
LABEL_7ff33caf426:
        if (v5 < v4)
        {
            v60 = v4;
        }
        else
        {
            if (v5 < v11)
                goto LABEL_7ff33caf45d;
            v60 = v11 - 1;
        }
        v5 = v60;
        v62 = (int)v5;
        v64 = (int)_INSERT(_INSERT(v62, 12, (unsigned int)(v62 >> 96)), 8, (unsigned int)(v62 >> 64));
        v65 = (int)_INSERT(v64, 4, (unsigned long long)v62 >> 32);
        v66 = (int)_INSERT(v65, 0, (unsigned int)v62);
        v67 = DivV(SubV(v66, v33), v12);
        v53 = (((CmpF(*((unsigned int *)&v67), 0) & 69 | (CmpF(*((unsigned int *)&v67), 0) & 69) >> 6) & 1) == 1 ? (unsigned int)(SubV(v67, 0x3f000000)) : (unsigned int)(AddV(v67, 0x3f000000)));
LABEL_7ff33caf45d:
        if (v7 < v4)
        {
            return;
        }
        else if (v7 >= v10)
        {
            return;
        }
        else if (v44 < v4)
        {
            return;
        }
        else if (v44 >= v11)
        {
            return;
        }
        else if (v53 < v4)
        {
            return;
        }
        else if (v53 >= v10)
        {
            return;
        }
        else if (v5 < v4)
        {
            return;
        }
        else if (v5 >= v11)
        {
            return;
        }
    }
    v0 = v5;
    sub_7ff33caf4b0(ptr, v7);
    return;
}
