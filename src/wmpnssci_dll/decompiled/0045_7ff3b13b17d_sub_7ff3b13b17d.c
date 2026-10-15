/* sub_7ff3b13b17d @ 0x7ff3b13b17d
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b13b17d  (444 bytes, 30 basic blocks)
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

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_7ff3b131f90;
extern struct_0 *g_7ff3b17be78;

int sub_7ff3b13b17d(void)
{
    struct_3 *v5;  // rax
    struct_3 *v6;  // rbx
    unsigned long v15;  // rdi
    struct_3 *ptr;  // rdx
    struct_1 **v18;  // rcx
    int v7;  // edi
    char v8;  // sil
    unsigned int v9;  // r12d
    long long p[11];  // r14
    long long v11;  // r9
    unsigned long v12;  // r8
    long long v13;  // r13
    unsigned int v14;  // eax
    unsigned long v1;  // [bp+0x30]
    unsigned long addr;  // [bp+0x38]
    int v3;  // [bp+0x40]
    struct_3 *v4;  // [bp+0x90]

    v6 = (char *)&v5[1].field_0 + 4;
    v4 = v6;
    if (v7 < 0)
    {
        sub_7ff3b13b31d();
        return;
    }
    if (vvar_46{r56|8b} >= 0 && vvar_46{r56|8b} < v3)
    {
        sub_7ff3b13c640(&v4, v1 + vvar_46{r56|8b} * 8);
        v6 = v4;
        if (g_7ff3b17be78 != &g_7ff3b17be78 && (v8 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 4)
            sub_7ff3b138910(g_7ff3b17be78->field_10, v9 + 31, &g_7ff3b131f90, v6); /* do not return */
        if (vvar_46{r56|8b} >= v3)
            8792790009312();
        if (g_7ff3b17be78 != &g_7ff3b17be78 && (v8 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 4)
            sub_7ff3b1388d4(g_7ff3b17be78->field_10, 33, &g_7ff3b131f90, *((int *)(addr + vvar_46{r56|8b} * 4))); /* do not return */
        if (v7 < 0)
            goto LABEL_0x7ff3b13b324;
        v11 = p[10];
        v12 = *((int *)(addr + vvar_46{r56|8b} * 4));
        v14 = sub_7ff3b138d48(p[8], v6, v12, p[10], p[9], v13);
        v15 = v14;
        if (g_7ff3b17be78 != &g_7ff3b17be78)
        {
            if (!(v8 & g_7ff3b17be78->field_1c))
                goto LABEL_0x7ff3b13b324;
            if (g_7ff3b17be78->field_19 < v8)
                goto LABEL_0x7ff3b13b324;
            sub_7ff3b1388d4(g_7ff3b17be78->field_10, 34, &g_7ff3b131f90, v14); /* do not return */
        }
    }
    else
    {
        v15 = 2147614731;
        if (g_7ff3b17be78 != &g_7ff3b17be78)
        {
            if (!(v8 & g_7ff3b17be78->field_1c))
                goto LABEL_0x7ff3b13b324;
            if (g_7ff3b17be78->field_19 < v8)
                goto LABEL_0x7ff3b13b324;
            sub_7ff3b1388d4(g_7ff3b17be78->field_10, 31, &g_7ff3b131f90, 2147614731); /* do not return */
        }
    }
    ptr = (char *)&v6[1].field_0 + 4;
    InterlockedExchangeAdd(&ptr->field_10, 4294967295);
    if (ptr->field_10 - 1 > 0)
    {
        sub_7ff3b13c250(&v1);
        return;
    }
    v18 = ptr->field_0;
    ptr->field_0->field_0->field_8();
}
