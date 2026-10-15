/* sub_7ff3b13bc2b @ 0x7ff3b13bc2b
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b13bc2b  (418 bytes, 30 basic blocks)
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

typedef struct struct_3 {
    struct struct_4 *field_0;
    char padding_8[8];
    unsigned int field_10;
} struct_3;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    struct struct_2 *field_8;
} struct_1;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern long long g_7ff3b131f90;
extern struct_0 *g_7ff3b17be78;

int sub_7ff3b13bc2b(void)
{
    unsigned long long v5;  // rdi
    struct_3 *v6;  // rax
    long long v12;  // r9
    unsigned long long v13;  // r8
    unsigned long long *v14;  // rsi
    struct_0 *v15;  // r14
    struct_3 *ptr;  // rdx
    struct_1 **v17;  // rcx
    int v7;  // ebx
    unsigned int v8;  // eax
    int v9;  // ebx
    struct_0 *v10;  // rcx
    long long p[12];  // r12
    char v1;  // [bp+0x30]
    unsigned long addr;  // [bp+0x38]
    unsigned int v3;  // [bp+0x40]
    struct_3 *v4;  // [bp+0x78]

    v5 = 2;
    v4 = (char *)&v6[1].field_0 + 4;
    if (v7 >= 0)
    {
        v13 = sub_7ff3b13a81c(vvar_93{r56|8b}) & 4294967295;
        sub_7ff3b13a748(&v4, vvar_93{r56|8b}, v13);
        v8 = sub_7ff3b13c2dc(&v1, &v4);
        if (v8 == 4294967295)
        {
            v9 = -2147023728;
            v10 = g_7ff3b17be78;
            if (g_7ff3b17be78 == v15)
                goto LABEL_7ff3b13bd88;
            if ((2 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 2)
                sub_7ff3b1388d4(g_7ff3b17be78->field_10, 57, &g_7ff3b131f90, 2147943568); /* do not return */
            goto LABEL_7ff3b13bca7;
        }
        else if (v8 >= 0 && v8 < v3)
        {
            if (g_7ff3b17be78 != v15 && (2 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 4)
                sub_7ff3b1388d4(g_7ff3b17be78->field_10, 58, &g_7ff3b131f90, *((int *)(addr + v8 * 4))); /* do not return */
            v12 = p[11];
            v13 = *((int *)(addr + v8 * 4));
            v9 = sub_7ff3b138e7c(p[9], v4, v13, p[11], p[10], v14);
        }
        else
        {
            8792790009312();
        }
    }
    v10 = g_7ff3b17be78;
LABEL_7ff3b13bca7:
    if (v10 != v15 && (v10->field_1c & 1))
    {
        v5 = (v9 >= 0 ? 5 : 2);
        if (v10->field_19 >= (unsigned int)v5)
            sub_7ff3b13aad4(v10->field_10, 59, &g_7ff3b131f90, v9, (!v14 ? NULL : *(v14))); /* do not return */
    }
LABEL_7ff3b13bd88:
    ptr = (char *)&v4[1].field_0 + 4;
    InterlockedExchangeAdd(&ptr->field_10, 4294967295);
    if (ptr->field_10 - 1 > 0)
    {
        sub_7ff3b13c250(&v1);
        return;
    }
    v17 = ptr->field_0;
    ptr->field_0->field_0->field_8();
}
