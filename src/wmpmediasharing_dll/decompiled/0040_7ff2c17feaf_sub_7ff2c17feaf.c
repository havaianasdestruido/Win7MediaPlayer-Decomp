/* sub_7ff2c17feaf @ 0x7ff2c17feaf
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c17feaf  (341 bytes, 27 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 714d193de7f062968c11a8a946f1fa066d03e1fc5a7bd90dbabc372605416413
 *   Evidence: analysis/report/rea-evidence/wmpmediasharing_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[101];
    unsigned int field_65;
    char field_68;
} struct_0;

typedef struct struct_1 {
    char padding_0[87];
    unsigned int field_57;
} struct_1;

void sub_7ff2c17feaf(unsigned long a0, unsigned long a1, char a2)
{
    char *ptr;  // rax
    char v5;  // 4100
    unsigned long v13;  // 4114
    unsigned long v14;  // 4101
    unsigned long v15;  // 4105
    struct_1 *addr;  // rdi
    unsigned int v17;  // 4100
    unsigned long v18;  // 4119
    unsigned long v19;  // 4101
    unsigned long v20;  // 4105
    unsigned long v21;  // 4101
    unsigned long v22;  // 4101
    unsigned long v6;  // cc_dep1
    unsigned long v23;  // 4101
    unsigned long v24;  // 4101
    unsigned long long v25;  // cc_dep2
    unsigned long v26;  // 4101
    unsigned long v27;  // 4101
    unsigned long v28;  // 4105
    unsigned long v29;  // 4101
    unsigned long v30;  // 4101
    unsigned long v7;  // cc_dep2
    struct_0 *p;  // rbx
    unsigned long v9;  // cc_ndep
    unsigned long v10;  // 4115
    unsigned int v11;  // 4096
    unsigned long v12;  // cc_dep1
    struct_0 *ptr3;  // [bp-0x18]
    struct_0 *v1;  // [bp-0x10]
    char *v2;  // [bp-0x8]

    v2 = ptr;
    v5 = *(ptr);
    *(ptr) = v5 + *((char *)&ptr);
    v6 = v5;
    v7 = *((char *)&ptr);
    v1 = p;
    v10 = _ccall(4, 1, (unsigned long long)v5, (unsigned long long)*((char *)(void*)&ptr), v9);
    if ((char)v10)
        goto LABEL_0x7ff2c17ff16;
    if (!((char)__CFADD__(v6, v7)))
    {
        ptr3 = p;
        if ((char)__CFADD__(v6, v7))
        {
            if (!((char)__CFADD__(v6, v7)))
                goto LABEL_0x7ff2c17ff78;
            v27 = _ccall(8, 1, v6, v7, v9);
            if ((char)v27)
                goto LABEL_7ff2c17ff35;
            goto LABEL_7ff2c17ff35;
        }
        v11 = *((int *)&(&p->padding_0)[1]);
        v12 = v11;
        v25 = 87;
        vvar_73{r48|8b} = v11 * 87;
        *((unsigned long *)(vvar_73{r48|8b} - 8)) = a0;
        v13 = _ccall(4, 51, (unsigned long long)v11, 87, v9);
        if (!((char)v13))
            goto LABEL_0x7ff2c17ff2a;
        v14 = _ccall(2, 51, v12, 87, v9);
        if (!((char)v14))
        {
            *((struct_0 **)(vvar_73{r48|8b} - 16)) = p;
            v15 = _ccall(2, 51, v12, 87, v9);
            if (!((char)v15))
            {
                v17 = *((int *)&(&addr->padding_0)[1]);
                v12 = v17;
                v25 = 0x51000000;
                vvar_80{r48|8b} = v17 * 0x51000000;
                v18 = _ccall(4, 51, (unsigned long long)v17, 0x51000000, v9);
                if (!((char)v18))
                    goto LABEL_7ff2c17ff40;
                v19 = _ccall(2, 51, v12, 0x51000000, v9);
                if (!((char)v19))
                {
                    vvar_84{r48|8b} = vvar_80{r48|8b} - 8;
                    *((struct_0 **)(vvar_80{r48|8b} - 8)) = p;
                    v20 = _ccall(2, 51, v12, 0x51000000, v9);
                    if (!((char)v20))
                        *((char *)&p->field_65) = (char)p->field_65 + *((char *)&ptr);
                    v21 = _ccall(2, 51, v12, 0x51000000, v9);
                    vvar_51{r48|8b} = vvar_84{r48|8b};
                    if ((char)v21)
                        goto LABEL_7ff2c17ffcd;
LABEL_7ff2c17ff59:
                    *((struct_0 **)(vvar_51{r48|8b} - 8)) = p;
                }
                else
                {
                    [D] Unsupported jumpkind Ijk_NoDecode at address 8792537825110()
                    v22 = _ccall(2, 51, v12, 0x51000000, v9);
                    vvar_51{r48|8b} = vvar_80{r48|8b};
                    if (!((char)v22))
                        goto LABEL_7ff2c17ff59;
LABEL_7ff2c17ffcd:
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                    *(ptr) = *(ptr) + *((char *)&ptr);
                }
            }
            else
            {
                v23 = _ccall(2, 51, v12, 87, v9);
                if (!((char)v23))
                    goto LABEL_0x7ff2c17ff43;
LABEL_7ff2c17ffac:
                v26 = _ccall(2, 51, v12, v25, v9);
                if ((char)v26)
                {
LABEL_7ff2c17ffae:
                    *(ptr) = *(ptr) + *((char *)&ptr);
                }
            }
        }
        else
        {
LABEL_7ff2c17ff40:
            [D] Unsupported jumpkind Ijk_NoDecode at address 8792537825088()
            v24 = _ccall(2, 51, v12, v25, v9);
            if ((char)v24)
                goto LABEL_7ff2c17ffac;
        }
    }
    else
    {
        ptr3 = p;
        v28 = _ccall(4, 1, v6, v7, v9);
        if ((char)v28)
            goto LABEL_0x7ff2c17ff90;
        v29 = _ccall(4, 1, v6, v7, v9);
        if (!((char)v29))
        {
            if (!((char)__CFADD__(v6, v7)))
                goto LABEL_0x7ff2c17ff78;
            v30 = _ccall(8, 1, v6, v7, v9);
            if (Conv(64I->1I, vvar_122)) { Goto None } else { Goto None }
LABEL_7ff2c17ff35:
        }
        if ((char)__CFADD__(v6, v7))
            goto LABEL_7ff2c18001b;
        [D] Unsupported jumpkind Ijk_NoDecode at address 8792537825192()
LABEL_7ff2c17ffac:
        if ((char)__CFADD__(v6, v7))
            goto LABEL_7ff2c17ffae;
        goto LABEL_7ff2c17ffae;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 8792537825306()
LABEL_7ff2c18001b:
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
}
