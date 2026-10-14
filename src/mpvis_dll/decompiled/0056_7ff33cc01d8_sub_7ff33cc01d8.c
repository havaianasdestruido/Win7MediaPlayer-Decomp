/* sub_7ff33cc01d8 @ 0x7ff33cc01d8
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cc01d8  (1288 bytes, 16 basic blocks)
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

char * sub_7ff33cc01d8(long long a0, unsigned int *ptr, unsigned int a2, unsigned long a3, unsigned int *a4, unsigned int *p, unsigned int *addr, unsigned int a7)
{
    int v42;  // xmm4
    uint128_t v43;  // xmm5
    int v52;  // xmm0
    int v53;  // xmm2
    void* v54;  // rax
    unsigned long long v55;  // rdx
    unsigned int v56[4];  // rcx
    unsigned long j;  // r10
    uint128_t v44;  // xmm6
    uint128_t v45;  // xmm7
    char cur[4];  // rcx
    void* ptr3;  // rax
    unsigned long long i;  // rdx
    int v49;  // xmm2
    int v50;  // xmm3
    int v51;  // xmm1
    char *v0;  // [bp-0x238]
    int v3;  // [bp-0x228]
    unsigned int v4;  // [bp-0x210]
    unsigned int v5;  // [bp-0x20c]
    unsigned int v6;  // [bp-0x208]
    unsigned int v7;  // [bp-0x204]
    unsigned int v8;  // [bp-0x200]
    unsigned int v9;  // [bp-0x1fc]
    unsigned int v10;  // [bp-0x1f8]
    unsigned int v11;  // [bp-0x1f4]
    unsigned int v12;  // [bp-0x1f0]
    unsigned int v13;  // [bp-0x1ec]
    unsigned int v14;  // [bp-0x1e8]
    unsigned int v15;  // [bp-0x1e4]
    unsigned int v16;  // [bp-0x1e0]
    unsigned int v17;  // [bp-0x1dc]
    unsigned int v18;  // [bp-0x1d8]
    unsigned int v19;  // [bp-0x1d4]
    unsigned int v20;  // [bp-0x1d0]
    unsigned int v21;  // [bp-0x1cc]
    unsigned int v22;  // [bp-0x1c8]
    unsigned int v23;  // [bp-0x1c4]
    unsigned int v24;  // [bp-0x1c0]
    unsigned int v25;  // [bp-0x1bc]
    unsigned int v26;  // [bp-0x1b8]
    unsigned int v27;  // [bp-0x1b4]
    char v28;  // [bp-0x1a8], Other Possible Types: unsigned long
    unsigned int v29;  // [bp-0x1a0]
    unsigned int v30;  // [bp-0x19c]
    unsigned int v31;  // [bp-0x198]
    unsigned int v32;  // [bp-0x194]
    unsigned int v33;  // [bp-0x190]
    unsigned int v34;  // [bp-0x18c]
    unsigned int v35;  // [bp-0x188]
    unsigned int v36;  // [bp-0x184]
    unsigned int v37;  // [bp-0x178]
    unsigned int v38;  // [bp-0x174]
    unsigned int v39;  // [bp-0x170]
    char v40;  // [bp+0x0]

    if (a7 >= 68)
        return &v40;
    *((unsigned int *)&v3) = *(a4);
    *((unsigned int *)&(&v3)[4]) = a4[1];
    *((unsigned int *)&(&v3)[8]) = a4[2];
    v16 = *(p);
    v17 = p[1];
    v18 = p[2];
    v25 = *(addr);
    v26 = addr[1];
    v27 = addr[2];
    v0 = &v3 - 12;
    sub_7ff33cc00c4(&v16, &v3, a0);
    v0 = &v4;
    sub_7ff33cc00c4(&v25, &v3, a0);
    v0 = &v7;
    sub_7ff33cc00c4(&v3, &v16, a0 + 12);
    v0 = &v13;
    sub_7ff33cc00c4(&v3, &v25, a0 + 24);
    v0 = &v19;
    sub_7ff33cc00c4(&v25, &v16, a0 + 12);
    v0 = &v22;
    sub_7ff33cc00c4(&v16, &v25, a0 + 24);
    v10 = *((unsigned int *)(&v3 + 12));
    v11 = *((unsigned int *)(&v3 + 16));
    v12 = *((unsigned int *)(&v3 + 20));
    v10 = AddV(MulV(AddV(AddV(AddV(AddV(AddV(v4, *((unsigned int *)(&v3 + 12))), v7), v13), v19), v22), 0x3e800000), SubV(0, MulV(AddV(v25, AddV(v16, *((unsigned int *)&v3))), 1042983550)));
    v11 = AddV(MulV(AddV(AddV(AddV(AddV(AddV(v11, v5), v8), v14), v20), v23), 0x3e800000), SubV(0, MulV(AddV(v26, AddV(v17, *((unsigned int *)(&v3 + 4)))), 1042983550)));
    v12 = AddV(MulV(AddV(AddV(AddV(AddV(AddV(v12, v6), v9), v15), v21), v24), 0x3e800000), SubV(0, MulV(AddV(v27, AddV(v18, *((unsigned int *)(&v3 + 8)))), 1042983550)));
    if (!a2)
        return *((unsigned int *)(&v3 + 20));
    v42 = (int)ptr[1];
    v43 = 0;
    v44 = 0;
    v45 = 0;
    cur = &v28;
    ptr3 = &v3 - 4;
    i = 10;
    v49 = MulV(v42, 0x40400000);
    v50 = SubV(SubV(0x3f800000, *(ptr)), v42);
    v29 = *((unsigned int *)&MulV(MulV(MulV(*(ptr), 0x40400000), v42), v42));
    v28 = _INSERT(v28 CONCAT 0, 0, *((unsigned int *)&MulV(MulV(v42, v42), v42)));
    *((unsigned int *)((char *)&v28 + 4)) = *((unsigned int *)&MulV(MulV(v49, v42), v50));
    v31 = *((unsigned int *)&MulV(MulV(MulV(*(ptr), 0x40c00000), v50), v42));
    v51 = MulV(v50, 0x40400000);
    v30 = *((unsigned int *)&MulV(MulV(v49, v50), v50));
    v32 = (unsigned int)(MulV(MulV(v49, *(ptr)), *(ptr)));
    v33 = *((unsigned int *)&MulV(MulV(v50, v50), v50));
    v35 = *((unsigned int *)&MulV(MulV(v51, *(ptr)), *(ptr)));
    v34 = *((unsigned int *)&MulV(MulV(v51, v50), *(ptr)));
    v52 = (int)*(ptr);
    v36 = *((unsigned int *)&MulV(MulV(v52, v52), *(ptr)));
    do
    {
        v53 = (int)(uint128_t)*(cur);
        cur += 1;
        v54 = ptr3 + 12;
        v55 = i - 1;
        v45 = (uint128_t)(AddV(v45, MulV(v53, (int)ptr3[4])));
        v43 = (uint128_t)(AddV(v43, MulV(v53, (int)ptr3[4])));
        v44 = (uint128_t)(AddV(v44, MulV(v53, *((int *)ptr3))));
        ptr3 = v54;
        i = v55;
    } while (i != 1);
    v37 = v43;
    v38 = v44;
    v39 = v45;
    if (a7 > 3)
    {
        v56 = p + 3;
        j = a7 - 3;
        do
        {
            *((unsigned int *)(&v37 - p + (char *)v56)) = *((unsigned int *)&AddV(AddV(MulV(v42, *((int *)(a4 - p + (char *)v56))), MulV(v50, v56[0])), MulV(*(ptr), *((int *)(addr - p + (char *)v56)))));
            v56 = &v56[1];
            j -= 1;
        } while (j != 1);
    }
    8792667066888();
}
