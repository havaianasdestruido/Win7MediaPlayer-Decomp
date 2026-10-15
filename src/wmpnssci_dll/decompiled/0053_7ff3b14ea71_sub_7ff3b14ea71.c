/* sub_7ff3b14ea71 @ 0x7ff3b14ea71
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b14ea71  (379 bytes, 28 basic blocks)
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

typedef struct struct_5 {
    struct struct_1 *field_0;
} struct_5;

typedef struct struct_6 {
    struct struct_7 *field_0;
    struct struct_8 *field_8;
    struct struct_9 *field_10;
} struct_6;

typedef struct struct_1 {
    struct struct_2 *field_0;
    struct struct_3 *field_8;
    struct struct_4 *field_10;
} struct_1;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_7ff3b131ed0;
extern unsigned long long g_7ff3b132400;
extern unsigned long long g_7ff3b133388;
extern struct_0 *g_7ff3b17be78;

int sub_7ff3b14ea71(void)
{
    int i;  // ecx
    long long idx;  // rax
    unsigned long long v17;  // rdx
    unsigned long v18;  // rcx
    unsigned long v19;  // rcx
    struct_5 **v20;  // rsi
    unsigned long v21;  // rdi
    unsigned long v22;  // rdi
    struct_6 **v23;  // rcx
    unsigned long v24;  // rdi
    int v9;  // r15d
    unsigned long v10;  // rsi
    int v11;  // r14d
    unsigned long v12;  // rcx
    char *v13;  // r8
    unsigned long long v14;  // rdx
    unsigned long v15;  // rcx
    char *v16;  // r8
    unsigned long v1;  // [bp+0x50]
    int v2;  // [bp+0x58]
    struct_5 **cur;  // [bp+0x68]
    long long v4;  // [bp+0xa0]
    unsigned long v5;  // [bp+0xc8]

    i = vvar_69{r56|8b};
    v2 = i;
    idx = vvar_69{r56|8b};
    v4 = idx;
    if (v9 > vvar_69{r56|8b})
    {
        do
        {
            if (idx < vvar_69{r56|8b} || i >= v9)
                8792790009312();
            v10 = cur[idx];
            v5 = v10;
            if (v10 != vvar_69{r56|8b})
            {
                v12 = v10;
                (*((long long *)(*((long long *)v10) + 8)))();
            }
            if (v10 != vvar_69{r56|8b})
            {
                v1 = vvar_69{r56|8b};
                v13 = &v1;
                v14 = &g_7ff3b133388;
                v15 = v10;
                (*((long long *)*((long long *)v10)))();
            }
            if (v11 < vvar_69{r56|8b})
            {
                v1 = vvar_69{r56|8b};
                v16 = &v1;
                v17 = &g_7ff3b132400;
                v18 = v10;
                (*((long long *)*((long long *)v10)))();
            }
            if (v10 != vvar_69{r56|8b})
            {
                v19 = v10;
                (*((long long *)(*((long long *)v10) + 16)))();
            }
            i = v2 + 1;
            v2 = i;
            idx = v4 + 1;
            v4 = idx;
        } while (i < v9);
    }
    if (g_7ff3b17be78 != &g_7ff3b17be78 && (1 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 5)
        sub_7ff3b1388d4(g_7ff3b17be78->field_10, 124, &g_7ff3b131ed0, 0); /* do not return */
    v20 = cur;
    if (cur == vvar_69{r56|8b})
        return;
    if (v9 > vvar_69{r56|8b})
    {
        v21 = v9;
        do
        {
            v22 = v21;
            v23 = *(cur);
            if (*(cur) != vvar_69{r56|8b})
                *(cur)->field_0->field_10();
        } while ((cur += 8, v24 = (unsigned long)(v22 - 1), v21 = (unsigned long)(v22 - 1), v22 != 1));
    }
    8792790007832();
}
