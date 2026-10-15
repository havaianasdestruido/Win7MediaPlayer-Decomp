/* sub_100082293 @ 0x100082293
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100082293  (2085 bytes, 71 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3f6564d520c416147702a463a50724fd36c46c3a44a8447af89788586fc5efee
 *   Evidence: analysis/report/rea-evidence/wmpdmc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    uint128_t field_10;
    int field_20;
    char padding_24[4];
    unsigned long long field_28;
    char padding_30[32];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    unsigned int field_5c;
    char padding_60[16];
    unsigned long long field_70;
    unsigned int field_78;
    unsigned long long field_7c;
    char padding_84[4];
    unsigned long long field_88;
    unsigned long long field_90;
    unsigned int field_98;
    unsigned int field_9c;
    unsigned long long field_a0;
    unsigned long long field_a8;
    char padding_b0[4];
    unsigned int field_b4;
    unsigned int field_b8;
} struct_0;

int sub_100082293(void)
{
    struct_0 *ptr;  // rsi
    unsigned int v39;  // edx
    unsigned int v48;  // r12d
    unsigned long v49;  // r15
    unsigned int v50;  // eax
    unsigned int v51;  // r9d
    unsigned int v52;  // r10d
    unsigned int v53;  // edx
    unsigned int v54;  // r8d
    int v55;  // ebx
    unsigned int v56;  // r9d
    int v57;  // xmm0
    unsigned int v40;  // edi
    int v58;  // xmm1
    int v60;  // xmm0
    int v61;  // xmm0
    int v62;  // xmm0
    int v64;  // xmm1
    int v65;  // xmm1
    int v66;  // xmm1
    unsigned int v67;  // ymm1
    unsigned long long v41;  // rax
    int v69;  // xmm1
    int v70;  // eax
    int v71;  // xmm0
    int v72;  // xmm1
    int v74;  // xmm0
    int v75;  // xmm0
    int v76;  // xmm0
    int v42;  // eax
    int v78;  // xmm1
    int v79;  // xmm1
    int v80;  // xmm1
    unsigned int v81;  // ymm1
    int v83;  // xmm1
    int v85;  // r11d
    int v86;  // r11d
    unsigned long v87;  // rbx
    long long v43;  // r13
    unsigned int v88;  // ecx
    unsigned int v89;  // ecx
    int v91;  // r10d
    int v92;  // r10d
    unsigned int v44;  // r11d
    unsigned int v46;  // ecx
    unsigned int v47;  // ecx
    long long v1;  // [bp+0x20]
    long long v2;  // [bp+0x28]
    long long v3;  // [bp+0x30]
    long long v4;  // [bp+0x38]
    long long v5;  // [bp+0x40]
    long long v6;  // [bp+0x48]
    unsigned long long v7;  // [bp+0x50]
    unsigned long v8;  // [bp+0x58]
    int v11;  // [bp+0x68], Other Possible Types: unsigned int
    unsigned int v12;  // [bp+0x6c]
    unsigned int v13;  // [bp+0x70]
    unsigned int v14;  // [bp+0x74]
    unsigned int v15;  // [bp+0x78]
    unsigned int v16;  // [bp+0x7c]
    unsigned long v17;  // [bp+0x80]
    unsigned int v18;  // [bp+0x90]
    unsigned long v19;  // [bp+0x98]
    unsigned int v20;  // [bp+0xa0]
    unsigned int v21;  // [bp+0xb0]
    unsigned long v22;  // [bp+0xb8]
    long long v23;  // [bp+0xc0]
    int v24;  // [bp+0xc8]
    unsigned long v25;  // [bp+0xd8]
    unsigned long v26;  // [bp+0xe0]
    unsigned int v27;  // [bp+0xe8]
    unsigned long v28;  // [bp+0xec]
    unsigned long v29;  // [bp+0xf8]
    unsigned long v30;  // [bp+0x100]
    unsigned int v31;  // [bp+0x108]
    unsigned int v32;  // [bp+0x10c]
    unsigned long v33;  // [bp+0x110]
    unsigned int v34;  // [bp+0x118]
    unsigned long cur;  // [bp+0x188], Other Possible Types: unsigned int
    int iter;  // [bp+0x190], Other Possible Types: unsigned int
    unsigned int v37;  // [bp+0x198]

    v39 = ptr->field_78;
    v24 = (int)ptr->field_10;
    v34 &= v40;
    v31 = ptr->field_90;
    v7 = v41;
    v25 = ptr->field_28;
    v22 = ptr->field_8;
    v30 = ptr->field_88;
    v32 = *((int *)((char *)&ptr->field_90 + 4));
    v29 = *((long long *)&ptr->padding_84);
    v28 = *((long long *)&(&ptr->field_78)[1]);
    v33 = *((long long *)&ptr->field_98);
    v26 = ptr->field_70;
    v42 = ptr->field_20;
    v23 = v43;
    v27 = v39;
    v44 = ~(v39 >> 17) & 1;
    v14 = ~(v39 >> 16) & 1;
    if (!(!v42 && v14 && v44))
    {
        v47 = v13;
        if (2 < v42)
            v42 = 1;
        if (!v47 && v11 == v40 && !v48 && !(unsigned int)v49)
        {
            if (!v44)
                goto LABEL_0x100082206;
            v34 &= v40;
            if (v21 == 112)
                goto LABEL_100082b4a;
        }
        else
        {
            v50 = cur;
            v51 = ptr->field_54;
            v52 = ptr->field_50;
            v53 = ptr->field_5c;
            v54 = ptr->field_58;
            cur = v50;
            cur -= v51;
            iter = v55;
            v15 = v51;
            iter -= v53;
            cur -= v52;
            v56 = v51 + v52;
            iter -= v54;
            v12 = v52;
            v37 = v54;
            v16 = v53;
            if (v56 > v50)
            {
                v57 = (int)v56;
                v58 = (int)(v50 * v52);
                v60 = (int)_INSERT(_INSERT(v57, 12, (unsigned int)(v57 >> 96)), 8, (unsigned int)(v57 >> 64));
                v61 = (int)_INSERT(v60, 4, (unsigned long long)v57 >> 32);
                v62 = (int)_INSERT(v61, 0, (unsigned int)v57);
                v64 = (int)_INSERT(_INSERT(v58, 12, (unsigned int)(v58 >> 96)), 8, (unsigned int)(v58 >> 64));
                v65 = (int)_INSERT(v64, 4, (unsigned long long)v58 >> 32);
                v66 = (int)_INSERT(v65, 0, (unsigned int)v58);
                v67 = (unsigned int)(DivV(v66, v62));
                v69 = (int)_INSERT(_INSERT(v67, 8, v67), 0, v67);
                v52 = *((unsigned long long *)&AddV(v69, 0x3fe0000000000000));
                v12 = v52;
                v15 = v50 - v52;
            }
            v70 = v53 + v54;
            if (v70 > v55)
            {
                v71 = (int)v70;
                v72 = (int)(v55 * v54);
                v74 = (int)_INSERT(_INSERT(v71, 12, (unsigned int)(v71 >> 96)), 8, (unsigned int)(v71 >> 64));
                v75 = (int)_INSERT(v74, 4, (unsigned long long)v71 >> 32);
                v76 = (int)_INSERT(v75, 0, (unsigned int)v71);
                v78 = (int)_INSERT(_INSERT(v72, 12, (unsigned int)(v72 >> 96)), 8, (unsigned int)(v72 >> 64));
                v79 = (int)_INSERT(v78, 4, (unsigned long long)v72 >> 32);
                v80 = (int)_INSERT(v79, 0, (unsigned int)v72);
                v81 = (unsigned int)(DivV(v80, v76));
                v83 = (int)_INSERT(_INSERT(v81, 8, v81), 0, v81);
                v54 = *((unsigned long long *)&AddV(v83, 0x3fe0000000000000));
                v37 = v54;
                v16 = v55 - v54;
            }
            if (v44)
            {
                if (((char)(ptr->field_78 >> 19) & 1) && ptr->field_a0)
                    4297065896();
                if (ptr->field_20 == 5)
                    v85 = 2;
                else
                    v85 = v42;
                v86 = v85;
                v34 &= v40;
                v18 = (unsigned int)v8 + v52;
                if (v21 == 112)
                {
                    v87 = v11;
                    *((unsigned int *)&v6) = (vvar_273{r56|8b} & 4294967295) - v49 - v48;
                    *((unsigned int *)&v5) = (v19 - v87 & 4294967295) - v47;
                    *((unsigned int *)&v4) = *((unsigned int *)((void*)&v17 + 4)) + v48;
                    *((unsigned int *)&v3) = v47 + (unsigned int)v17;
                    *((unsigned int *)&v2) = iter;
                    *((unsigned int *)&v1) = cur;
                    if (sub_100081c88(&v21, v86, v18, v54 + *((unsigned int *)((void*)&v8 + 4)) & 4294967295, v1, v2, v3, v4, v5, v6) < 0)
                        goto LABEL_0x100082206;
                    v88 = v13;
LABEL_1000826a3:
                    v89 = v88;
                    if (!v14)
                        goto LABEL_0x100082206;
                    if (((char)(ptr->field_78 >> 18) & 1) && ptr->field_a0)
                    {
                        *((unsigned int *)&v2) = v49;
                        *((unsigned int *)&v1) = v48;
                        sub_100081e04(ptr, v43, v89, v87 & 4294967295, v1, v2); /* do not return */
                    }
                    v34 = 2;
                    if (ptr->field_20 == 3)
                        v91 = 2;
                    else
                        v91 = v42;
                    v92 = v91;
                    v11 = v92;
                    if (v21 == 112)
                    {
                        v14 = (unsigned int)v19 - v87 - v89;
                        v18 = v89 + (unsigned int)v17;
                        if (sub_100081c88(&v21, v92) < 0)
                            goto LABEL_0x100082206;
                        v34 = 4;
                        if (v21 == 112)
                        {
                            v20 = (unsigned int)(*((unsigned int *)((void*)&v17 + 4)) - v49) + vvar_273{r56|8b};
                            if (sub_100081c88(&v21, v11) < 0)
                                goto LABEL_0x100082206;
                            if (ptr->field_20 == 4)
                                v42 = 2;
                            v34 = 1;
                            if (v21 == 112)
                            {
                                v14 = *((unsigned int *)((void*)&v17 + 4)) + v48;
                                if (sub_100081c88(&v21, v42, (unsigned int)v8) < 0)
                                    goto LABEL_0x100082206;
                                v34 = 3;
                                if (v21 == 112)
                                {
                                    cur = (unsigned int)((unsigned int)v17 - v87) + (unsigned int)v19;
                                    if (sub_100081c88(&v21, v42) < 0)
                                        goto LABEL_0x100082206;
                                    if (v21 == 112)
                                    {
                                        v6 = _INSERT((unsigned int)(vvar_273{r56|8b} - v49 - v48) CONCAT 0, 0, v48);
                                        v5 = _INSERT((unsigned int)v87 CONCAT 0, 0, v13);
                                        v4 = _INSERT(v14 CONCAT 0, 0, *((unsigned int *)((void*)&v17 + 4)));
                                        v3 = _INSERT(cur CONCAT 0, 0, v17);
                                        v2 = _INSERT(iter CONCAT 0, 0, v37);
                                        v1 = _INSERT(v15 CONCAT 0, 0, v12);
                                        if (sub_100081c88(&v21, v42, (unsigned int)v8, *((unsigned int *)((void*)&v8 + 4)), v1, v2, v3, v4, v5, v6) < 0)
                                            goto LABEL_0x100082206;
                                        if (v21 == 112)
                                        {
                                            if (sub_100081c88(&v21, v42) < 0)
                                                goto LABEL_0x100082206;
                                            if (v21 == 112)
                                            {
                                                if (sub_100081c88(&v21, v42) < 0)
                                                    goto LABEL_0x100082206;
                                                if (v21 == 112)
                                                {
LABEL_100082b4a:
                                                    sub_100081c88(&v21);
                                                    sub_100082204(&v21);
                                                    return;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                v87 = v11;
                v88 = v47;
                goto LABEL_1000826a3;
            }
        }
    }
    else if (((char)(v39 >> 20) & 1))
    {
        4297065824();
    }
    else
    {
        if (*((int *)((char *)&ptr->field_a8 + 4)))
            v46 = *((unsigned int *)((void*)&v8 + 4));
        if (v21 == 112)
        {
            sub_100081c88(&v21);
            sub_100082204(&v21);
            return;
        }
    }
}
