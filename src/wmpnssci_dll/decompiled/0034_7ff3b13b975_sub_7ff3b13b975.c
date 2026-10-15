/* sub_7ff3b13b975 @ 0x7ff3b13b975
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b13b975  (466 bytes, 35 basic blocks)
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

int sub_7ff3b13b975(void)
{
    unsigned int v5;  // r13d
    unsigned long long v6;  // rsi
    unsigned long long v13;  // rdi
    unsigned long long v16;  // r8
    long long v17;  // r9
    struct_3 *ptr;  // rdx
    struct_1 **v15;  // rcx
    struct_3 *v7;  // rax
    struct_3 *v8;  // rbx
    unsigned long v9;  // rdi
    struct_0 *v10;  // rcx
    long long p[12];  // r14
    unsigned long long *v12;  // r12
    unsigned long v1;  // [bp+0x30]
    unsigned long addr;  // [bp+0x38]
    int v3;  // [bp+0x40]
    struct_3 *v4;  // [bp+0x90]

    v6 = v5 + 1;
    v8 = (char *)&v7[1].field_0 + 4;
    v4 = v8;
    if ((unsigned int)v9 >= 0)
    {
        if (vvar_116{r56|8b} >= 0 && vvar_116{r56|8b} < v3)
        {
            sub_7ff3b13c640(&v4, v1 + vvar_116{r56|8b} * 8);
            v10 = g_7ff3b17be78;
            v8 = v4;
            if (g_7ff3b17be78 != &g_7ff3b17be78 && ((char)v6 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 4)
                sub_7ff3b138910(g_7ff3b17be78->field_10, (unsigned int)v6 + 51, &g_7ff3b131f90, v8); /* do not return */
            if (vvar_116{r56|8b} >= v3)
                8792790009312();
            if (g_7ff3b17be78 != &g_7ff3b17be78 && ((char)v6 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 4)
                sub_7ff3b1388d4(g_7ff3b17be78->field_10, 54, &g_7ff3b131f90, *((int *)(addr + vvar_116{r56|8b} * 4))); /* do not return */
            if ((unsigned int)v9 >= 0)
            {
                v17 = p[11];
                v16 = *((int *)(addr + vvar_116{r56|8b} * 4));
                v13 = sub_7ff3b138e7c(p[9], v8, v16, p[11], p[10], v12) & 4294967295;
LABEL_7ff3b13badb:
                v10 = g_7ff3b17be78;
            }
        }
        else
        {
            v13 = 2147614731;
            v10 = g_7ff3b17be78;
            if (g_7ff3b17be78 == &g_7ff3b17be78)
                goto LABEL_7ff3b13bb29;
            if (((char)v6 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= (char)v6)
                sub_7ff3b1388d4(g_7ff3b17be78->field_10, 52, &g_7ff3b131f90, 2147614731); /* do not return */
        }
        if (v10 != &g_7ff3b17be78 && (v10->field_1c & 1))
        {
            v6 = ((unsigned int)v13 >= 0 ? 5 : v6 & 4294967295);
            if (v10->field_19 >= (unsigned int)v6)
                sub_7ff3b13aad4(v10->field_10, 55, &g_7ff3b131f90, v13 & 4294967295, (!v12 ? NULL : *(v12))); /* do not return */
        }
LABEL_7ff3b13bb29:
        ptr = (char *)&v8[1].field_0 + 4;
        InterlockedExchangeAdd(&ptr->field_10, 4294967295);
        if (ptr->field_10 - 1 > 0)
        {
            sub_7ff3b13c250(&v1);
            return;
        }
        v15 = ptr->field_0;
        ptr->field_0->field_0->field_8();
    }
    else
    {
        goto LABEL_7ff3b13badb;
    }
}
