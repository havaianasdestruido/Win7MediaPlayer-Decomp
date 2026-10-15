/* DllGetClassObject @ 0x7ff33ca6f44
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33ca6f44  (273 bytes, 23 basic blocks)
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
    char padding_8[8];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_3 *field_20;
    char padding_28[16];
    char field_38;
    char padding_39[15];
    char field_48;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} struct_2;

typedef struct struct_3 {
    struct struct_4 *field_0;
} struct_3;

typedef struct struct_4 {
    struct struct_0 *field_0;
} struct_4;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_7ff33ccecb0;
extern struct_1 *g_7ff33ccecd0;

int DllGetClassObject(void)
{
    unsigned long long *p;  // r8
    unsigned long long *v8;  // r9
    unsigned int v17[4];  // rcx
    unsigned long v18;  // rcx
    unsigned long long v19;  // rcx
    unsigned long long *v20;  // r8
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rdx
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rdi
    unsigned long long v12;  // r12
    unsigned long long v13;  // r13
    unsigned long long v14;  // r14
    unsigned long long *v15;  // r12
    struct_1 *ptr;  // rdi
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned int *v3;  // [bp+0x8]
    unsigned long long v4;  // [bp+0x10]
    unsigned long long v5;  // [bp+0x18]
    unsigned long long v6;  // [bp+0x20]

    v8 = p;
    v4 = v9;
    v5 = v10;
    v6 = v11;
    v3 = &g_7ff33ccecb0;
    v2 = v12;
    v1 = v13;
    v0 = v14;
    v15 = p;
    v3 = &g_7ff33ccecb0;
    ptr = g_7ff33ccecd0;
    if (!g_7ff33ccecd0)
    {
        return;
    }
    else if (!p)
    {
        return;
    }
    else
    {
        *(p) = 0;
        while (true)
        {
            v17 = ptr->field_0;
            if (!v17)
            {
LABEL_7ff33ca8498:
                if (!*(v15))
                    break;
            }
            else if (ptr->field_10 && *((int *)v18) == v17[0] && *((int *)(v18 + 4)) == v17[1] && *((int *)(v18 + 8)) == v17[2] && *((int *)(v18 + 12)) == v17[3])
            {
                if (!ptr->field_20)
                {
                    8792667325144();
                }
                else if (ptr->field_20)
                {
                    v19 = ptr->field_20;
                    v20 = v15;
                    v22 = v21;
                    ptr->field_20->field_0->field_0();
                }
                goto LABEL_7ff33ca8498;
            }
            else
            {
                ptr = (g_7ff33ccecb0 == 176 ? (struct struct_1 *)&ptr->field_38 : (struct struct_1 *)&ptr->field_48);
            }
        }
        return;
    }
}
