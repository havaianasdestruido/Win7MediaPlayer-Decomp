/* sub_7ff33ca6c8f @ 0x7ff33ca6c8f
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33ca6c8f  (240 bytes, 24 basic blocks)
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
    char padding_0[180];
    char field_b4;
} struct_0;

typedef struct struct_1 {
    char padding_0[40];
    struct struct_2 *field_28;
} struct_1;

typedef struct struct_7 {
    struct struct_3 *field_0;
    char field_8;
    char padding_9[103];
    struct struct_8 *field_70;
} struct_7;

typedef struct struct_5 {
    char padding_0[152];
    struct struct_6 *field_98;
} struct_5;

typedef struct struct_3 {
    char padding_0[48];
    struct struct_4 *field_30;
} struct_3;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_8 {
    struct struct_5 *field_0;
} struct_8;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

int sub_7ff33ca6c8f(void)
{
    char v3;  // 4106
    char v4;  // ch
    unsigned int v13;  // r8d
    unsigned long long v14;  // r9
    struct_0 *p;  // rbx
    char v16;  // 4138
    unsigned long long v17;  // r9
    unsigned long long v18;  // rdx
    struct_1 **v19;  // rbx
    struct_1 **v20;  // rcx
    struct_7 *ptr;  // rbx
    struct_5 **v22;  // rcx
    unsigned long v5;  // cc_dep1
    struct_3 *v23;  // rax
    unsigned long v6;  // cc_dep2
    unsigned long v7;  // cc_ndep
    unsigned long v8;  // 4126
    unsigned long v9;  // 4101
    unsigned int *addr;  // rdx
    char v11;  // 4104
    unsigned long v12;  // 4122
    unsigned long long *ptr3;  // [bp+0x58]
    char v2;  // [bp+0x100078]

    *((char *)*((int *)0x1d2fcababaef917)) = *((char *)*((int *)0x1d2fcababaef917)) + (char)*((int *)0x1d2fcababaef917);
    v3 = v2;
    v2 = v3 + v4;
    v5 = v3;
    v6 = v4;
    v8 = _ccall(6, 1, (unsigned long long)v3, (unsigned long long)v4, v7);
    if (!((char)v8))
    {
        if (!((char)__CFADD__(v5, v6)))
            goto LABEL_0x7ff33ca6cd4;
        v9 = _ccall(0, 1, v5, v6, v7);
        if (!((char)v9))
            goto LABEL_0x7ff33ca6ca8;
        [D] Unsupported jumpkind Ijk_NoDecode at address 8792666959116()
    }
    *(addr) = *(addr) + *((int *)0x1d2fcababaef917);
    v11 = *((char *)*((int *)0x1d2fcababaef917));
    *((char *)*((int *)0x1d2fcababaef917)) = *((char *)*((int *)0x1d2fcababaef917)) + (char)*((int *)0x1d2fcababaef917);
    v12 = _ccall(4, 1, (unsigned long long)v11, (unsigned long long)(char)(char)*((int *)0x1d2fcababaef917), 0);
    if ((char)v12)
    {
        8792667325384();
    }
    else if (v13 == 0x100)
    {
        if (v14 == 27)
        {
            8792667325384();
        }
        else if (v14 == 112)
        {
            v16 = p->field_b4;
            p->field_b4 = !p->field_b4;
            if (v16)
                8792667325888();
            8792667325880();
        }
        else
        {
            *(ptr3) = 0;
            return;
        }
    }
    else
    {
        if (v13 == 258)
        {
            v18 = v17;
            v20 = v19;
            *(v19)->field_28();
        }
        else if (v13 == 8)
        {
            8792667325384();
        }
        else if (v13 == 2)
        {
            v22 = ptr->field_70;
            if (!ptr->field_70)
            {
                v23 = ptr->field_0;
                ptr->field_8 = 0;
                v23->field_30();
            }
            ptr->field_70->field_0->field_98();
        }
        else
        {
            return;
        }
    }
}
