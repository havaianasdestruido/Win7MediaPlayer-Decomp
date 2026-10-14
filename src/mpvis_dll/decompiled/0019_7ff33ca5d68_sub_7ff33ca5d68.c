/* sub_7ff33ca5d68 @ 0x7ff33ca5d68
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33ca5d68  (118 bytes, 32 basic blocks)
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
    char field_0;
    char padding_1[49];
    unsigned int field_32;
} struct_0;

typedef struct struct_1 {
    char padding_0[108];
    unsigned int field_6c;
} struct_1;

typedef struct struct_2 {
    char padding_0[120];
    char field_78;
} struct_2;

int sub_7ff33ca5d68(void)
{
    unsigned long v2;  // cc_op
    unsigned long v3;  // cc_dep1
    unsigned long v12;  // cc_dep2
    unsigned long v13;  // 4107
    unsigned long v14;  // 4101
    unsigned long v15;  // 4101
    unsigned long v16;  // 4101
    unsigned long v17;  // 4101
    char v18;  // 4106
    unsigned long v19;  // 4119
    unsigned long v20;  // 4101
    char v21;  // 4098
    unsigned long v4;  // cc_dep2
    unsigned long v22;  // 4107
    unsigned long v23;  // 4101
    unsigned int v24;  // edi
    char v25;  // dl
    char v26;  // dl
    struct_1 *p;  // rcx
    struct_2 *addr;  // rbp
    unsigned long v29;  // 4101
    unsigned long v30;  // 4101
    unsigned long v31;  // 4101
    unsigned long v5;  // cc_ndep
    unsigned long v32;  // 4101
    unsigned long v33;  // 4101
    unsigned long v34;  // 4101
    unsigned long v35;  // 4101
    unsigned long v36;  // 4101
    char v38;  // 4106
    unsigned long v39;  // 4119
    unsigned long v40;  // 4101
    unsigned long v41;  // 4101
    unsigned long v6;  // 4101
    struct_0 *ptr;  // rax
    char v8;  // 4098
    unsigned long v9;  // 4107
    char v10;  // 4098
    unsigned long v11;  // cc_dep1
    char v1;  // [bp+0x100080]

    v6 = _ccall(2, v2, v3, v4, v5);
    if (Conv(64I->1I, vvar_69)) { Goto None } else { Goto None }
    v8 = ptr->field_0;
    ptr->field_0 = ptr->field_0 + *((char *)&ptr);
    v9 = _ccall(6, 1, (unsigned long long)v8, (unsigned long long)*((char *)(void*)&ptr), v5);
    if (Conv(64I->1I, vvar_71)) { Goto None } else { Goto None }
    v10 = ptr->field_0;
    ptr->field_0 = v10 + *((char *)&ptr);
    v11 = v10;
    v12 = *((char *)&ptr);
    v13 = _ccall(0, 1, (unsigned long long)v10, (unsigned long long)*((char *)(void*)&ptr), v5);
    if (!((char)v13))
        goto LABEL_0x7ff33ca5d72;
    v14 = _ccall(8, 1, v11, v12, v5);
    if (!((char)v14))
    {
        v15 = _ccall(0, 1, v11, v12, v5);
        if ((char)v15)
            goto LABEL_0x7ff33ca5e11;
        v16 = _ccall(4, 1, v11, v12, v5);
        if (!((char)v16))
        {
            v17 = _ccall(8, 1, v11, v12, v5);
            if (Conv(64I->1I, vvar_89)) { Goto None } else { Goto None }
            ptr->field_0 = ptr->field_0 + *((char *)&ptr);
            ptr->field_0 = ptr->field_0 + *((char *)&ptr);
            v18 = ptr->field_0;
            ptr->field_0 = v18 + *((char *)&ptr);
            v19 = _ccall(4, 1, (unsigned long long)v18, (unsigned long long)*((char *)(void*)&ptr), v5);
            if (!((char)v19))
            {
                v20 = _ccall(8, 1, (unsigned long long)v18, (unsigned long long)*((char *)(void*)&ptr), v5);
                if ((char)v20)
                {
                    v21 = ptr->field_0;
                    ptr->field_0 = v21 + *((char *)&ptr);
                    v22 = _ccall(4, 1, (unsigned long long)v21, (unsigned long long)*((char *)(void*)&ptr), v5);
                    if ((char)v22)
                    {
                        v1 += v26;
                        ptr->field_0 = ptr->field_0 + *((char *)&ptr);
                        ptr->field_0 = ptr->field_0 + *((char *)&ptr);
                        v1 += v26;
                        addr = p->field_6c * 108;
                        addr->field_78 = addr->field_78 + v26;
                    }
                    v23 = _ccall(8, 1, (unsigned long long)v21, (unsigned long long)*((char *)(void*)&ptr), v5);
                    if ((char)v23)
                        goto LABEL_0x7ff33ca5ed1;
                    if (!(v24 ^ *((int *)&(&ptr->padding_1)[1])))
                        goto LABEL_0x7ff33ca5ece;
                    if ((v24 ^ *((int *)&(&ptr->padding_1)[1])) >= 0)
                        goto LABEL_7ff33ca5e6b;
LABEL_7ff33ca5e6b:
                    ptr->field_0 = ptr->field_0 + *((char *)&ptr);
                    ptr->field_0 = ptr->field_0 + *((char *)&ptr);
                    v1 += v25;
                }
            }
        }
        else
        {
            v29 = _ccall(8, 1, v11, v12, v5);
            if ((char)v29)
            {
LABEL_7ff33ca5e7a:
                ptr->field_0 = ptr->field_0 + *((char *)&ptr);
                ptr->field_0 = ptr->field_0 + *((char *)&ptr);
                v38 = ptr->field_0;
                ptr->field_0 = v38 + *((char *)&ptr);
                v39 = _ccall(4, 1, (unsigned long long)v38, (unsigned long long)*((char *)(void*)&ptr), v5);
                if ((char)v39)
                {
                    [D] Unsupported jumpkind Ijk_NoDecode at address 8792666955495()
                    ptr->field_0 = ptr->field_0 + *((char *)&ptr);
                    ptr->field_0 = ptr->field_0 + *((char *)&ptr);
                }
                v40 = _ccall(8, 1, (unsigned long long)v38, (unsigned long long)*((char *)(void*)&ptr), v5);
                if ((char)v40)
                    goto LABEL_0x7ff33ca5ef6;
                else
                    goto LABEL_0x7ff33ca5e84;
            }
            v30 = _ccall(4, 1, v11, v12, v5);
            if ((char)v30)
                goto LABEL_7ff33ca5eae;
            v31 = _ccall(8, 1, v11, v12, v5);
            if (Conv(64I->1I, vvar_88)) { Goto None } else { Goto None }
LABEL_7ff33ca5e4b:
            ptr->field_0 = ptr->field_0 + *((char *)&ptr);
            ptr->field_0 = ptr->field_0 + *((char *)&ptr);
        }
        v1 += v26;
    }
    else
    {
        v32 = _ccall(4, 1, v11, v12, v5);
        if ((char)v32)
            v1 += v26;
        v33 = _ccall(8, 1, v11, v12, v5);
        if ((char)v33)
            goto LABEL_7ff33ca5eb1;
        [D] Unsupported jumpkind Ijk_NoDecode at address 8792666955332()
        v34 = _ccall(8, 1, v11, v12, v5);
        if ((char)v34)
            goto LABEL_7ff33ca5e7a;
        v35 = _ccall(4, 1, v11, v12, v5);
        if (!((char)v35))
        {
            v36 = _ccall(8, 1, v11, v12, v5);
            if ((char)v36)
                goto LABEL_7ff33ca5e4b;
            else
                goto LABEL_7ff33ca5e4b;
        }
        else
        {
LABEL_7ff33ca5eae:
            ptr->field_0 = ptr->field_0 + *((char *)&ptr);
            v11 = ptr->field_0;
            v12 = *((char *)&ptr);
LABEL_7ff33ca5eb1:
            [D] Unsupported jumpkind Ijk_NoDecode at address 8792666955441()
            v41 = _ccall(8, 1, v11, v12, v5);
            if ((char)v41)
                goto LABEL_0x7ff33ca5f20;
            else
                goto LABEL_0x7ff33ca5eb4;
        }
        if ((char)v36)
            goto LABEL_7ff33ca5e4b;
        goto LABEL_7ff33ca5e4b;
    }
}
