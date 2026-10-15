/* sub_7ff3b15f198 @ 0x7ff3b15f198
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b15f198  (238 bytes, 30 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962
 *   Evidence: analysis/report/rea-evidence/wmpnssci_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_2 {
    struct struct_0 *field_0;
    struct struct_1 *field_8;
} struct_2;

typedef struct struct_3 {
    char padding_0[8];
    struct struct_4 *field_8;
} struct_3;

typedef struct struct_7 {
    struct struct_5 *field_0;
} struct_7;

typedef struct struct_5 {
    char padding_0[8];
    struct struct_6 *field_8;
} struct_5;

typedef struct struct_8 {
    char padding_0[8];
    struct struct_8 *field_8;
} struct_8;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_0 *field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_1;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

int sub_7ff3b15f198(void)
{
    struct_2 *ptr;  // rdx
    struct_2 *v2;  // r9
    struct_8 *v11;  // cc_dep2
    unsigned int v12;  // ecx
    unsigned long v13;  // 4131
    struct_8 *v14;  // r10
    struct_8 *v15;  // cc_dep2
    unsigned int v16;  // ecx
    unsigned long v17;  // 4131
    struct_3 **v18;  // rcx
    struct_8 *v19;  // rdx
    struct_8 *v20;  // cc_dep2
    struct_3 **v3;  // rcx
    struct_8 *cur;  // rdx
    unsigned int v22;  // ecx
    unsigned long v23;  // 4131
    struct_5 **v24;  // rcx
    struct_3 **v4;  // rax
    struct_7 **p;  // r8
    struct_8 *v6;  // r10
    struct_8 *v7;  // cc_dep2
    unsigned int v8;  // ecx
    unsigned long v9;  // 4131
    struct_8 *v10;  // r10

    v2 = ptr;
    v4 = v3;
    if (!p)
        return;
    *(p) = NULL;
    v6 = ptr->field_0;
    v7 = NULL;
    if (!ptr->field_0 && !((v6 = (struct_8 *)ptr->field_8, v7 = 0x46000000000000c0, ptr->field_8 != 0x46000000000000c0)))
    {
        v8 = 0;
    }
    else
    {
        v9 = _ccall(15, 0, (unsigned long long)(char)(v6 < v7), (unsigned long long)(char)(v6 < v7));
        v8 = -(v6 < v7) + 1 - ((unsigned int)v9 & 1);
    }
    if (v8)
    {
        v10 = ptr->field_0;
        v11 = 0x4e948d21f6211f03;
        if (ptr->field_0 == 0x4e948d21f6211f03 && !((v10 = (struct_8 *)ptr->field_8, v11 = 0x992d5f801085e693, ptr->field_8 != 0x992d5f801085e693)))
        {
            v12 = 0;
        }
        else
        {
            v13 = _ccall(15, 0, (unsigned long long)(char)(v10 < v11), (unsigned long long)(char)(v10 < v11));
            v12 = -(v10 < v11) + 1 - ((unsigned int)v13 & 1);
        }
        if (v12)
        {
            v14 = ptr->field_0;
            v15 = 0x4bf0b6516a9fd8ee;
            if (ptr->field_0 == 0x4bf0b6516a9fd8ee && !((v14 = (struct_8 *)ptr->field_8, v15 = 0xb1a279ce4e7d49b8, ptr->field_8 != 0xb1a279ce4e7d49b8)))
            {
                v16 = 0;
            }
            else
            {
                v17 = _ccall(15, 0, (unsigned long long)(char)(v14 < v15), (unsigned long long)(char)(v14 < v15));
                v16 = -(v14 < v15) + 1 - ((unsigned int)v17 & 1);
            }
            if (!v16)
            {
                v18 = v4 + 1;
            }
            else
            {
                v19 = ptr->field_0;
                v20 = 0x4c9925a0a73a0072;
                cur = v19;
                if (cur == 0x4c9925a0a73a0072 && !((cur = (struct_8 *)cur->field_8, v19 = cur, v20 = 0x396c1a10e8eda5b4, cur != 0x396c1a10e8eda5b4)))
                {
                    v22 = 0;
                }
                else
                {
                    v23 = _ccall(15, 0, (unsigned long long)(char)(v19 < v20), (unsigned long long)(char)(v19 < v20));
                    v22 = -(v19 < v20) + 1 - ((unsigned int)v23 & 1);
                }
                if (v22)
                    goto LABEL_7ff3b15f26e;
                v18 = v4 + 2;
            }
            v4 = -(NULL < v4) & v18;
        }
    }
    *(p) = v4;
LABEL_7ff3b15f26e:
    v24 = *(p);
    if (!*(p))
        return;
    *(p)->field_0->field_8();
}
