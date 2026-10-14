/* sub_7ff3b14e639 @ 0x7ff3b14e639
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b14e639  (397 bytes, 36 basic blocks)
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
    char padding_0[8];
    struct struct_0 *field_8;
    char padding_10[80];
    unsigned long long field_60;
    char padding_68[8];
    struct struct_3 *field_70;
    char padding_78[8];
    int field_80;
} struct_2;

typedef struct struct_4 {
    struct struct_4 *field_0;
    struct struct_5 *field_8;
} struct_4;

typedef struct struct_0 {
    char padding_0[160];
    struct struct_1 *field_a0;
} struct_0;

typedef struct struct_3 {
    long long field_0;
} struct_3;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

extern struct_6 *g_7ff3b17a130;
extern struct_8 *g_7ff3b17c878;
extern struct_7 *g_7ff3b17c8c8;

int sub_7ff3b14e639(void)
{
    unsigned long long flag2;  // r8
    int i;  // r12d
    unsigned long long v15;  // cc_ndep
    unsigned int v16;  // esi
    unsigned int v17;  // ebx
    unsigned long long v18;  // cc_op
    unsigned long v19;  // cc_dep1
    unsigned long long v20;  // cc_dep2
    struct_4 *ptr;  // rdx
    struct_4 *v22;  // cc_dep1
    struct_2 *v23;  // rcx
    char *v24;  // rdx
    unsigned long long v9;  // rbx
    unsigned long v10;  // rax
    struct_2 *idx;  // rdi
    long long v12;  // rbp
    unsigned long long v13;  // rbx
    unsigned int v14;  // r15d
    unsigned long long choice;  // [bp+0x50]
    unsigned long flag;  // [bp+0x58]
    unsigned long long v3;  // [bp+0x68]
    unsigned int v4;  // [bp+0x70]
    unsigned int v5;  // [bp+0x128]
    unsigned long long *v6;  // [bp+0x130]

    flag2 = 0;
    i = 0;
    v10 = (unsigned int)v9 + 8;
    if (*((int *)&idx->padding_68[0]) > 0)
    {
        v12 = 0;
        do
        {
            if (v12 < 0 || i >= *((int *)&idx->padding_68[0]))
                8792790009312();
            if (v14 == v16)
            {
                if (v16)
                {
                    v17 = v14 * 2;
                    v18 = 7;
                    v19 = v17;
                    v20 = 0;
                    if (v17 >= 0)
                    {
                        v18 = 7;
                        v19 = v17;
                        v20 = 268435455;
                        if (v17 > 268435455)
                        {
                            v13 = v3;
                            continue;
                        }
                    }
                    else
                    {
                        v13 = v3;
                        continue;
                    }
                }
                g_7ff3b17a130();
            }
            else
            {
                ptr = v13 + v14 * 8;
                v22 = ptr;
                if (ptr)
                {
                    v22 = *((long long *)(idx->field_60 + v12));
                    ptr->field_0 = v22;
                    if (v22)
                        v22->field_0->field_8();
                }
                v15 = v22 < NULL;
                v18 = 23;
                v19 = v14 + 1;
                v20 = 0;
                v14 += 1;
                v4 = v14;
                v10 = 8;
            }
            v15 = _ccall(v18, v19, v20, v15);
            i += 1;
            v12 += v10;
        } while (i < *((int *)&idx->padding_68[0]));
    }
    if (v5 == 2002)
    {
        if (!*(v6))
        {
            if (idx->field_80 > 0)
                sub_7ff3b16467f(idx->field_70->field_0, 0, 0x400, 0); /* do not return */
            g_7ff3b17c8c8();
        }
        else
        {
            g_7ff3b17c878();
        }
    }
    else
    {
        if (v5 == 2001)
        {
            flag = 0;
            choice = 0;
            v23 = &idx->field_8;
            v24 = &flag;
            idx->field_8->field_a0();
        }
        8792790009304();
    }
}
