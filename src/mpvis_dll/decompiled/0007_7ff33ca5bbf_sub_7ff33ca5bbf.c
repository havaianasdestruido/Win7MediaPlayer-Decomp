/* sub_7ff33ca5bbf @ 0x7ff33ca5bbf
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33ca5bbf  (536 bytes, 114 basic blocks)
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
    char padding_0[101];
    unsigned int field_65;
} struct_0;

typedef struct struct_1 {
    char padding_0[120];
    char field_78;
} struct_1;

typedef struct struct_2 {
    char field_0;
    char padding_1[114];
    char field_73;
} struct_2;

typedef struct struct_3 {
    char padding_0[115];
    char field_73;
} struct_3;

typedef struct struct_4 {
    char padding_0[97];
    char field_61;
} struct_4;

typedef struct struct_5 {
    char padding_0[48];
    char field_30;
} struct_5;

typedef struct struct_10 {
    char padding_0[49];
    unsigned int field_31;
} struct_10;

typedef struct struct_6 {
    char padding_0[48];
    unsigned int field_30;
    char padding_34[46];
    char field_62;
} struct_6;

typedef struct struct_7 {
    char padding_0[48];
    char field_30;
    char padding_31[1];
    unsigned int field_32;
    char padding_36[43];
    char field_61;
} struct_7;

typedef struct struct_8 {
    char padding_0[49];
    unsigned int field_31;
    unsigned int field_34;
} struct_8;

typedef struct struct_9 {
    char padding_0[48];
    unsigned int field_30;
    unsigned int field_33;
} struct_9;

int sub_7ff33ca5bbf(void)
{
    void* ptr3;  // rsi
    struct_0 *v10;  // rdx
    unsigned long long v19;  // cc_dep1
    char ptr4[116];  // rax
    char v104;  // 4106
    unsigned long v105;  // cc_dep1
    unsigned long v106;  // cc_dep2
    unsigned long v107;  // 4123
    char v108;  // 4114
    unsigned long v109;  // 4153
    char v110;  // 4098
    unsigned long v111;  // 4111
    unsigned long v112;  // 4101
    unsigned long long v20;  // cc_dep2
    unsigned long v113;  // 4101
    unsigned long v114;  // 4101
    unsigned long v115;  // 4101
    char *v21;  // rbx
    unsigned long v22;  // 4111
    unsigned long v23;  // 4101
    char *ptr12;  // rbx
    char v25;  // 4104
    unsigned long v26;  // 4117
    char v27;  // 4104
    unsigned long v28;  // 4117
    char v11;  // bl
    struct_10 *ptr14;  // rdi
    char v30;  // 4104
    unsigned long v31;  // cc_dep1
    unsigned long v32;  // cc_dep2
    unsigned long v33;  // 4119
    char v34;  // 4104
    unsigned long v35;  // 4119
    char v36[121];  // rbp
    unsigned long v37;  // 4109
    char ptr5[121];  // rbp
    char *v12;  // rbx
    unsigned long v39;  // rcx
    char v40;  // ch
    unsigned long v41;  // 4114
    unsigned long v42;  // 4101
    unsigned long v43;  // 4101
    unsigned long v44;  // 4101
    unsigned long v45;  // 4101
    unsigned long v46;  // 4101
    struct_2 *ptr;  // rax
    char v47;  // bl
    char v48;  // 4104
    unsigned long v49;  // 4117
    char v50;  // 4098
    unsigned long v51;  // 4107
    char v52;  // 4104
    unsigned long v53;  // 4117
    char v54;  // 4104
    unsigned long v55;  // 4119
    char v14;  // 4108
    char v56;  // 4098
    unsigned long v57;  // 4107
    char v58;  // 4104
    unsigned long v59;  // 4119
    char v60;  // 4104
    unsigned long v61;  // 4119
    char v62;  // 4104
    unsigned long v63;  // 4119
    unsigned long v64;  // 4109
    char v65;  // 4098
    unsigned long v15;  // cc_ndep
    unsigned long v66;  // 4107
    char v67;  // 4098
    unsigned long v68;  // cc_dep1
    unsigned long v69;  // cc_dep2
    unsigned long v70;  // 4107
    void* p;  // rax
    unsigned long v72;  // 4105
    unsigned long v73;  // 4101
    char v74;  // 4098
    unsigned long v75;  // 4107
    unsigned long v16;  // 4125
    unsigned long v76;  // 4101
    void* addr;  // rax
    unsigned long v78;  // gs
    unsigned long v79;  // fs
    unsigned long v80;  // rcx
    char v81;  // 4102
    unsigned long v82;  // 4113
    unsigned long v83;  // 4101
    unsigned long long v84;  // cc_op
    unsigned long v85;  // cc_dep1
    char v17;  // 4099
    unsigned long v86;  // cc_dep2
    unsigned long v87;  // 4101
    struct_10 *v88;  // rdi
    unsigned int v89;  // 4097
    unsigned long v90;  // 4111
    unsigned long v91;  // 4101
    unsigned long v92;  // 4101
    char v93;  // 4102
    unsigned long v94;  // 4113
    unsigned long long v18;  // cc_op
    unsigned long v95;  // 4110
    char v96;  // 4098
    unsigned long v97;  // cc_dep1
    unsigned long v98;  // cc_dep2
    unsigned long v99;  // 4101
    unsigned long v100;  // 4101
    void* ptr6;  // rax
    void* ptr13;  // rax
    struct_1 *ptr16;  // [bp+0x0]
    struct_3 *ptr15;  // [bp+0x8]
    struct_4 *v2;  // [bp+0x10]
    struct_5 *v3;  // [bp+0x18]
    struct_10 *v4;  // [bp+0x20], Other Possible Types: void*
    struct_6 *ptr7;  // [bp+0x28]
    struct_7 *ptr8;  // [bp+0x30]
    struct_8 *ptr9;  // [bp+0x38]
    struct_9 *ptr10;  // [bp+0x40]

    *((char *)&ptr3[115]) = (char)ptr3[115] + *((char *)((void*)&v10 + 1));
    v12 = v11 ^ ptr16->field_78;
    v14 = ptr->field_0;
    ptr->field_0 = ptr->field_0 + *((char *)&ptr);
    v16 = _ccall(6, 1, (unsigned long long)v14, (unsigned long long)*((char *)(void*)&ptr), v15);
    if ((char)v16)
    {
        [D] Unsupported jumpkind Ijk_NoDecode at address 8792666954813()
        [D] Unsupported jumpkind Ijk_NoDecode at address 8792666954814()
        ptr->field_73 = ptr->field_73 + *((char *)((void*)&v10 + 1));
        v18 = 1;
        v19 = ptr->field_73;
        v20 = *((char *)((void*)&v10 + 1));
        ptr12 = v12;
        if ((char)__CFADD__(v19, v20))
            goto LABEL_7ff33ca5c47;
    }
    v17 = ptr15->field_73;
    v18 = 17;
    v19 = *((char *)&v12) ^ v17;
    v20 = 0;
    v21 = (char *)_INSERT(v12, 0, *((char *)&v12) ^ v17);
    v22 = _ccall(6, 17, (unsigned long long)(*((char *)(void*)&v12) ^ v17), 0, v15);
    if (Conv(64I->1I, vvar_559)) { Goto None } else { Goto None }
    v23 = _ccall(6, 17, v19, 0, v15);
    if ((char)v23)
    {
        v43 = _ccall(2, 17, v19, 0, v15);
        ptr12 = v21;
        if ((char)v43)
        {
LABEL_7ff33ca5c47:
            [D] Unsupported jumpkind Ijk_NoDecode at address 8792666954823()
            v44 = _ccall(0, v18, v19, v20, v15);
LABEL_7ff33ca5c4d:
            ptr->field_0 = ptr->field_0 ^ *((char *)&ptr);
            ptr->field_73 = ptr->field_73 + *((char *)((void*)&v10 + 1));
            v45 = _ccall(8, 1, (unsigned long long)ptr->field_73, (unsigned long long)*((char *)((void*)&v10 + 1)), v15);
            if ((char)v45)
                goto LABEL_7ff33ca5c57;
            goto LABEL_7ff33ca5c57;
        }
    }
    ptr12 = (char *)_INSERT(v21, 0, *((char *)&v21) ^ v2->field_61);
    v25 = ptr->field_0;
    ptr->field_0 = ptr->field_0 + *((char *)&ptr);
    v26 = _ccall(6, 1, (unsigned long long)v25, (unsigned long long)*((char *)(void*)&ptr), v15);
    if ((char)v26)
        goto LABEL_7ff33ca5c4d;
    ptr12 = (char *)_INSERT(ptr12, 0, *((char *)&ptr12) ^ v3->field_30);
    v27 = ptr->field_0;
    ptr->field_0 = v27 + *((char *)&ptr);
    v28 = _ccall(6, 1, (unsigned long long)v27, (unsigned long long)*((char *)(void*)&ptr), v15);
    if (!((char)v28))
    {
        ptr14 = v4;
        *((unsigned int *)&(&ptr14->padding_0)[1]) = *((int *)&(&ptr14->padding_0)[1]) ^ (unsigned int)ptr12;
        v30 = ptr->field_0;
        ptr->field_0 = v30 + *((char *)&ptr);
        v31 = v30;
        v32 = *((char *)&ptr);
        v33 = _ccall(6, 1, (unsigned long long)v30, (unsigned long long)*((char *)(void*)&ptr), v15);
        if (!((char)v33))
        {
            ptr7->field_30 = ptr7->field_30 ^ (unsigned int)ptr12;
            v34 = ptr->field_0;
            ptr->field_0 = ptr->field_0 + *((char *)&ptr);
            v35 = _ccall(6, 1, (unsigned long long)v34, (unsigned long long)*((char *)(void*)&ptr), v15);
            if ((char)v35)
                goto LABEL_0x7ff33ca5c65;
            v36 = vvar_271{r56|8b} ^ *((int *)ptr3);
            v37 = _ccall(2, 19, (unsigned long long)(unsigned int)((int)vvar_271{r56|8b} ^ *((int *)ptr3)), 0, v15);
            ptr5 = v36;
            if ((char)v37)
            {
                *((char *)&ptr3[115]) = (char)ptr3[115] + *((char *)((void*)&v10 + 1));
                ptr5 = (unsigned int)v36 ^ *((int *)ptr3);
                ptr->field_0 = ptr->field_0 ^ *((char *)&ptr);
                *((char *)&ptr3[115]) = (char)ptr3[115] + *((char *)((void*)&v10 + 1));
                v40 = *((char *)((void*)&v39 + 1)) ^ *((char *)ptr3);
                if (((Extract(vvar_267{r24|8b}, 8bits@0x1<64>) ^ Load(addr=vvar_272{r64|8b}, size=1, endness=Iend_LE)) <s 0x0<8>)) { Goto None } else { Goto None }
                *((char *)&ptr3[115]) = (char)ptr3[115] + *((char *)((void*)&v10 + 1));
                v41 = _ccall(2, 17, (unsigned long long)(v40 ^ *((char *)ptr3)), 0, v15);
                if ((char)v41)
                    *((char *)&ptr3[115]) = (char)ptr3[115] + *((char *)((void*)&v10 + 1));
            }
        }
        if ((char)__CFADD__(v31, v32))
            goto LABEL_7ff33ca5c5f;
        goto LABEL_7ff33ca5cd6;
    }
    v42 = _ccall(8, 1, (unsigned long long)v27, (unsigned long long)*((char *)(void*)&ptr), v15);
    if (Conv(64I->1I, vvar_568)) { Goto None } else { Goto None }
LABEL_7ff33ca5c57:
    ptr->field_73 = ptr->field_73 + *((char *)((void*)&v10 + 1));
    v31 = ptr->field_73;
    v32 = *((char *)((void*)&v10 + 1));
    ptr14 = v4;
    if (!((char)__CFADD__(v31, v32)))
        goto LABEL_7ff33ca5cd6;
LABEL_7ff33ca5c5f:
    [D] Unsupported jumpkind Ijk_NoDecode at address 8792666954847()
    v46 = _ccall(0, 1, v31, v32, v15);
    if ((char)v46)
    {
        [D] Unsupported jumpkind Ijk_NoDecode at address 8792666954965()
LABEL_7ff33ca5cd6:
        v67 = ptr->field_0;
        ptr->field_0 = v67 + *((char *)&ptr);
        v68 = v67;
        v69 = *((char *)&ptr);
        v70 = _ccall(0, 1, (unsigned long long)v67, (unsigned long long)*((char *)(void*)&ptr), v15);
        if (!((char)v70))
        {
            *((unsigned int *)ptr3) = *((int *)ptr3) ^ (unsigned int)ptr5;
        }
        else
        {
            v4 = p;
            v72 = _ccall(4, 1, v68, v69, v15);
            if (!((char)v72))
            {
                *((char *)p) = *((char *)p) + *((char *)&p);
                *((char *)p) = *((char *)p) + *((char *)&p);
            }
            v73 = _ccall(0, 1, v68, v69, v15);
            if (!((char)v73))
            {
                v74 = *((char *)p);
                *((char *)p) = v74 + *((char *)&p);
                v75 = _ccall(4, 1, (unsigned long long)v74, (unsigned long long)*((char *)(void*)&p), v15);
                if ((char)v75)
                    ptr5[120] = ptr5[120] + *((char *)((void*)&v10 + 1));
                v76 = _ccall(8, 1, (unsigned long long)v74, (unsigned long long)*((char *)(void*)&p), v15);
                if ((char)v76)
                    goto LABEL_0x7ff33ca5e39;
            }
            else
            {
                *((char *)p) = *((char *)p) + *((char *)&p);
                ptr5[102] = ptr5[102] + *((char *)((void*)&p + 1));
                addr = *((int *)p) * 0x64000000;
                ptr12[110 + v78] = ptr12[110 + v78] + *((char *)((void*)&addr + 1));
                *(103 + &ptr14->padding_0[0] + 0x2 * ptr5 + v79) = *(103 + &ptr14->padding_0[0] + 0x2 * ptr5 + v79) + *((char *)((void*)&v80 + 1));
                [D] Unsupported jumpkind Ijk_NoDecode at address 8792666955279()
                *((char *)addr) = *((char *)addr) + *((char *)&addr);
                v81 = *((char *)addr);
                *((char *)addr) = v81 + *((char *)&addr);
                v82 = _ccall(8, 1, (unsigned long long)v81, (unsigned long long)*((char *)(void*)&addr), v15);
                if ((char)v82)
                    goto LABEL_0x7ff33ca5e87;
                v83 = _ccall(0, 1, (unsigned long long)v81, (unsigned long long)*((char *)(void*)&addr), v15);
                if (!((char)v83))
                    goto LABEL_7ff33ca5e19;
LABEL_7ff33ca5e19:
                *((char *)addr) = *((char *)addr) + *((char *)&addr);
                *((char *)addr) = *((char *)addr) + *((char *)&addr);
                *((char *)addr) = *((char *)addr) + *((char *)&addr);
                v84 = 1;
                v85 = *((char *)addr);
                v86 = *((char *)&addr);
                [D] Unsupported jumpkind Ijk_NoDecode at address 8792666955295()
                v87 = _ccall(8, 1, v85, v86, v15);
                v88 = ptr14;
                if (!((char)v87))
                {
                    v89 = (int)addr[51];
                    v84 = 19;
                    v85 = (unsigned int)ptr14 ^ v89;
                    v86 = 0;
                    v88 = (unsigned int)ptr14 ^ v89;
                    v90 = _ccall(6, 19, (unsigned long long)((unsigned int)ptr14 ^ v89), 0, v15);
                    if ((char)v90)
                        goto LABEL_7ff33ca5e9c;
                    v91 = _ccall(0, 19, v85, 0, v15);
                    if (!((char)v91))
                        goto LABEL_0x7ff33ca5e2b;
                    [D] Unsupported jumpkind Ijk_NoDecode at address 8792666955408()
                }
                [D] Unsupported jumpkind Ijk_NoDecode at address 8792666955409()
                v92 = _ccall(8, v84, v85, v86, v15);
                if (!((char)v92))
                {
                    addr = (void*)_INSERT(addr, 1, *((char *)((void*)&addr + 1)) ^ *((char *)((v80 + 114 & 4294967295) + v78)));
                    *((char *)addr) = *((char *)addr) + *((char *)&addr);
LABEL_7ff33ca5e9c:
                    *((char *)addr) = *((char *)addr) + *((char *)&addr);
                    v93 = *((char *)addr);
                    *((char *)addr) = *((char *)addr) + *((char *)&addr);
                    v94 = _ccall(4, 1, (unsigned long long)v93, (unsigned long long)*((char *)(void*)&addr), v15);
                    if ((char)v94)
                        goto LABEL_7ff33ca5f07;
                    else
                        goto LABEL_0x7ff33ca5ea2;
                }
                else
                {
                    [D] Unsupported jumpkind Ijk_NoDecode at address 8792666955526()
                }
LABEL_7ff33ca5f07:
                vvar_351{r48|8b} = *((int *)ptr3) * 0x6c650000;
                v95 = _ccall(2, 51, (unsigned long long)(unsigned int)*((int *)ptr3), 0x6c650000, v15);
                if (!((char)v95))
                {
                    *((char *)addr) = *((char *)addr) + *((char *)&addr);
                    *((char *)addr) = *((char *)addr) + *((char *)&addr);
                }
                *((char *)addr) = *((char *)addr) + *((char *)&addr);
                *((char *)addr) = *((char *)addr) + *((char *)&addr);
                v96 = ptr5[110];
                ptr5[110] = v96 + *((char *)((void*)&addr + 1));
                v97 = v96;
                v98 = *((char *)((void*)&addr + 1));
                if ((char)__CFADD__(v96, *((char *)((void*)&addr + 1))))
                    *((char *)addr) = *((char *)addr) + *((char *)&addr);
                v99 = _ccall(0, 1, v97, v98, v15);
                if (!((char)v99))
                    goto LABEL_7ff33ca5f1f;
LABEL_7ff33ca5f1f:
                [D] Unsupported jumpkind Ijk_NoDecode at address 8792666955551()
                if (!((char)__CFADD__(v97, v98)))
                {
                    v100 = _ccall(0, 1, v97, v98, v15);
                    if (Conv(64I->1I, vvar_594)) { Goto None } else { Goto None }
                    ptr6 = addr;
                    if ((char)__CFADD__(v97, v98))
                        goto LABEL_0x7ff33ca5f26;
                    else
                        goto LABEL_7ff33ca5f8f;
                }
                else
                {
                    ptr13 = (void*)_INSERT(addr, 0, *((char *)&addr));
                    *((char *)ptr13) = *((char *)ptr13) + *((char *)&addr);
                    ptr5[52] = ptr5[52] + *((char *)((void*)&v80 + 1));
                    ptr6 = ptr13;
                }
LABEL_7ff33ca5f8f:
                ptr4 = (unsigned int)ptr6 ^ *((int *)ptr6);
                ptr4[0] = ptr4[0] + *((char *)&ptr4);
                v104 = ptr5[52];
                ptr5[52] = v104 + *((char *)((void*)&v80 + 1));
                v105 = v104;
                v106 = *((char *)((void*)&v80 + 1));
                v107 = _ccall(8, 1, (unsigned long long)v104, (unsigned long long)*((char *)((void*)&v80 + 1)), v15);
                if (!((char)v107))
                {
                    ptr4[0] = ptr4[0] + *((char *)&ptr4);
                    ptr4[0] = ptr4[0] + *((char *)&ptr4);
                    if ((char)__CFADD__(ptr4[0], *((char *)&ptr4)))
                        goto LABEL_0x7ff33ca6002;
                    *(112 + &v10->padding_0[0] + 0x2 * ptr3) = *(112 + &v10->padding_0[0] + 0x2 * ptr3) + *((char *)((void*)&v80 + 1));
                    *(116 + ptr12 + 0x2 * ptr3) = *(116 + ptr12 + 0x2 * ptr3) + *((char *)((void*)&ptr4 + 1));
                    *((char *)(v80 + ptr5 * 2 + 116)) = *((char *)(v80 + ptr5 * 2 + 116)) + *((char *)((void*)&v80 + 1));
                    *(103 + &v88->padding_0[0] + 0x2 * ptr5) = *(103 + &v88->padding_0[0] + 0x2 * ptr5) + *((char *)((void*)&v80 + 1));
                    v108 = ptr5[120];
                    ptr5[120] = v108 + *((char *)((void*)&ptr4 + 1));
                    v109 = _ccall(0, 1, (unsigned long long)v108, (unsigned long long)*((char *)((void*)&ptr4 + 1)), v15);
                    if (Conv(64I->1I, vvar_606)) { Goto None } else { Goto None }
                    if (!((char)__CFADD__(v108, *((char *)((void*)&ptr4 + 1)))))
                        ptr4[0] = ptr4[0] + *((char *)&ptr4);
                    v110 = ptr12[108 + v78];
                    ptr12[108 + v78] = ptr12[108 + v78] + *((char *)((void*)&v10 + 1));
                    v111 = _ccall(4, 1, (unsigned long long)v110, (unsigned long long)*((char *)((void*)&v10 + 1)), v15);
                    if ((char)v111)
                        goto LABEL_0x7ff33ca5fbc;
                    else
                        goto LABEL_0x7ff33ca5fbc;
                }
                else
                {
                    if (!((char)__CFADD__(v105, v106)))
                    {
                        v112 = _ccall(0, 1, v105, v106, v15);
                        if (Conv(64I->1I, vvar_600)) { Goto None } else { Goto None }
                        if (!((char)__CFADD__(v105, v106)))
                        {
                            v113 = _ccall(0, 1, v105, v106, v15);
                            if ((char)v113)
                                goto LABEL_0x7ff33ca5fd4;
                            else
                                goto LABEL_0x7ff33ca5fd4;
                        }
                        else
                        {
                            ptr4[0] = ptr4[0] + *((char *)&ptr4);
                            ptr4[115] = ptr4[115] + *((char *)&v10);
                            v114 = _ccall(0, 51, (unsigned long long)(unsigned int)*((int *)&(&v10->padding_0)[1]), 0x53000000, v15);
                            if ((char)v114)
                                goto LABEL_7ff33ca60a8;
                            else
                                goto LABEL_0x7ff33ca6043;
                        }
                    }
                    else
                    {
                        v115 = _ccall(0, 1, v105, v106, v15);
                        if ((char)v115)
                            goto LABEL_7ff33ca60a8;
                        else
                            goto LABEL_0x7ff33ca6043;
                    }
LABEL_7ff33ca60a8:
                    ptr4[0] = ptr4[0] + *((char *)&ptr4);
                    ptr4[0] = ptr4[0] + *((char *)&ptr4);
                    *((char *[116])(vvar_351{r48|8b} - 8)) = ptr4;
                    *((char **)(vvar_351{r48|8b} - 16)) = ptr12;
                }
            }
        }
LABEL_7ff33ca5cdd:
        p = (void*)_INSERT(ptr, 0, *((char *)&ptr));
        *((char *)&p[115]) = (char)p[115] + *((char *)((void*)&v10 + 1));
        *((unsigned int *)ptr3) = *((int *)ptr3) ^ (unsigned int)ptr5;
LABEL_7ff33ca5ce5:
        p = (unsigned int)p ^ *((int *)p);
        *((char *)&p[115]) = (char)p[115] + *((char *)((void*)&v10 + 1));
        *((unsigned int *)ptr3) = *((int *)ptr3) ^ (unsigned int)ptr5;
LABEL_7ff33ca5ced:
        p = (void*)_INSERT(p, 0, *((char *)&p) ^ *((char *)p));
        *((char *)&p[115]) = (char)p[115] + *((char *)((void*)&v10 + 1));
        *((unsigned int *)ptr3) = *((int *)ptr3) ^ (unsigned int)ptr5;
LABEL_7ff33ca5cf5:
        *((unsigned int *)p) = *((int *)p) ^ (unsigned int)p;
        *((char *)&p[115]) = (char)p[115] + *((char *)((void*)&v10 + 1));
        *((unsigned int *)ptr3) = *((int *)ptr3) ^ (unsigned int)ptr5;
LABEL_7ff33ca5cfd:
        *((char *)p) = *((char *)p) ^ *((char *)&p);
        *((char *)&p[115]) = (char)p[115] + *((char *)((void*)&v10 + 1));
        *((char *)p) = *((char *)p) + *((char *)&p);
    }
    v47 = *((char *)&ptr12) ^ ptr7->field_62;
    v48 = ptr->field_0;
    ptr->field_0 = ptr->field_0 + *((char *)&ptr);
    v49 = _ccall(0, 1, (unsigned long long)v48, (unsigned long long)*((char *)(void*)&ptr), v15);
    if ((char)v49)
        goto LABEL_7ff33ca5cdd;
    ptr12 = v47 ^ ptr8->padding_36[41];
    v50 = ptr->field_0;
    ptr->field_0 = ptr->field_0 + *((char *)&ptr);
    v51 = _ccall(0, 1, (unsigned long long)v50, (unsigned long long)*((char *)(void*)&ptr), v15);
    if ((char)v51)
        goto LABEL_7ff33ca5ce5;
    ptr12 = (char *)_INSERT(ptr12, 0, *((char *)&ptr12) ^ ptr8->field_30);
    v52 = ptr->field_0;
    ptr->field_0 = ptr->field_0 + *((char *)&ptr);
    v53 = _ccall(0, 1, (unsigned long long)v52, (unsigned long long)*((char *)(void*)&ptr), v15);
    if ((char)v53)
        goto LABEL_7ff33ca5ced;
    ptr9->field_31 = ptr9->field_31 ^ (unsigned int)ptr12;
    v54 = ptr->field_0;
    ptr->field_0 = ptr->field_0 + *((char *)&ptr);
    v55 = _ccall(0, 1, (unsigned long long)v54, (unsigned long long)*((char *)(void*)&ptr), v15);
    if ((char)v55)
        goto LABEL_7ff33ca5cf5;
    *((unsigned int *)((char *)&ptr10->field_30 + 3)) = *((int *)((char *)&ptr10->field_30 + 3)) ^ (unsigned int)ptr12;
    v56 = ptr->field_0;
    ptr->field_0 = ptr->field_0 + *((char *)&ptr);
    v57 = _ccall(0, 1, (unsigned long long)v56, (unsigned long long)*((char *)(void*)&ptr), v15);
    if ((char)v57)
        goto LABEL_7ff33ca5cfd;
    *((unsigned int *)&(&ptr8->padding_31)[1]) = *((int *)&(&ptr8->padding_31)[1]) ^ (unsigned int)ptr12;
    v58 = ptr->field_0;
    ptr->field_0 = ptr->field_0 + *((char *)&ptr);
    v59 = _ccall(0, 1, (unsigned long long)v58, (unsigned long long)*((char *)(void*)&ptr), v15);
    if ((char)v59)
    {
        ptr->field_0 = ptr->field_0 + *((char *)&ptr);
        ptr->field_0 = ptr->field_0 + *((char *)((void*)&v10 + 1));
        ptr->field_0 = ptr->field_0 + *((char *)&ptr);
    }
    *((unsigned int *)&(&ptr9->padding_0)[1]) = *((int *)&(&ptr9->padding_0)[1]) ^ (unsigned int)ptr12;
    v60 = ptr->field_0;
    ptr->field_0 = ptr->field_0 + *((char *)&ptr);
    v61 = _ccall(0, 1, (unsigned long long)v60, (unsigned long long)*((char *)(void*)&ptr), v15);
    if ((char)v61)
    {
        ptr->field_0 = ptr->field_0 + *((char *)&ptr);
        *((char *)&ptr3[70]) = (char)ptr3[70] + *((char *)((void*)&v10 + 1));
    }
    ptr10->field_30 = ptr10->field_30 ^ (unsigned int)ptr12;
    v62 = ptr->field_0;
    ptr->field_0 = ptr->field_0 + *((char *)&ptr);
    v63 = _ccall(0, 1, (unsigned long long)v62, (unsigned long long)*((char *)(void*)&ptr), v15);
    if ((char)v63)
    {
        ptr->field_0 = ptr->field_0 + *((char *)&ptr);
        *((char *)&ptr3[80]) = (char)ptr3[80] + *((char *)((void*)&v10 + 1));
    }
    v64 = _ccall(2, 19, (unsigned long long)((unsigned int)ptr5 ^ *((int *)ptr3)), 0, v15);
    if (!((char)v64))
        ptr->field_0 = ptr->field_0 + *((char *)&ptr);
    ptr->field_73 = ptr->field_73 + *((char *)((void*)&v10 + 1));
    v65 = ptr->field_0;
    ptr->field_0 = ptr->field_0 + *((char *)&ptr);
    v66 = _ccall(0, 1, (unsigned long long)v65, (unsigned long long)*((char *)(void*)&ptr), v15);
    if ((char)v66)
    {
        ptr->field_0 = ptr->field_0 + *((char *)&ptr);
        *(ptr12) = *(ptr12) + *((char *)((void*)&v10 + 1));
        ptr->field_0 = ptr->field_0 + *((char *)&ptr);
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 8792666954933()
    [D] Unsupported jumpkind Ijk_NoDecode at address 8792666954934()
    *((char *)&p[115]) = (char)p[115] + *((char *)((void*)&v10 + 1));
}
