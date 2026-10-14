/* sub_7ff3b16bb4c @ 0x7ff3b16bb4c
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b16bb4c  (624 bytes, 33 basic blocks)
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
    char padding_0[64];
    struct struct_0 *field_40;
} struct_2;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

void sub_7ff3b16bb4c(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long long a8, unsigned long a9, unsigned long a10, long long a11, long long a12, unsigned long a13, unsigned long a14, unsigned long a15, long long a16, long long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, unsigned long a28, long long a29, long long a30, unsigned long a31, unsigned long a32, unsigned int a33)
{
    unsigned long long v1;  // rdx
    unsigned long v2;  // r14
    long long v6;  // rsi
    long long v7;  // rbx
    struct_2 *v8;  // rdi, Other Possible Types: long long
    unsigned int v9;  // eax
    long long v3;  // r14
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    long long v12;  // r8
    long long v13;  // rcx
    unsigned int v4;  // eax
    long long v5;  // r12

    v1 = a8;
    a13 = vvar_135{r56|8b} + v2 * 4;
    v3 = vvar_135{r56|8b} + v2 * 8;
    a7 = vvar_135{r56|8b} + a8 * 12;
    a9 = a8 * 16 + vvar_135{r56|8b};
    a10 = vvar_135{r56|8b} + a8 * 20;
    a8 = vvar_135{r56|8b} + a8 * 24;
    if (a33)
    {
        if (sub_7ff3b16de7c(a30, v3, v7, v8, v6))
            v4 = sub_7ff3b16de7c(a16, a9, v7, v8, v6);
LABEL_7ff3b16bc96:
        v9 = 0;
    }
    else
    {
        if (!sub_7ff3b16dea0(a12, a12, vvar_135{r56|8b}, v7, v8, v5, v6) || !sub_7ff3b16dea0(a30, vvar_135{r56|8b}, v3, v7, v8, v5, v6) || !sub_7ff3b16dea0(a12, vvar_135{r56|8b}, vvar_135{r56|8b}, v7, v8, v5, v6) || (v4 = (unsigned int)(unsigned long long)sub_7ff3b16dea0(a16, vvar_135{r56|8b}, a9, v7, v8, v5, v6), !v4))
            goto LABEL_7ff3b16bc96;
        v9 = v7;
    }
    if (v10)
    {
        if (v9 && sub_7ff3b16de7c(a29, a13, v7, v8, v6))
            v11 = sub_7ff3b16de7c(a17, a7, v7, v8, v6);
LABEL_7ff3b16bd9f:
    }
    else if (!v9 || !sub_7ff3b16dea0(a11, a11, vvar_135{r56|8b}, v7, v8, v5, v6) || !sub_7ff3b16dea0(a29, vvar_135{r56|8b}, a13, v7, v8, v5, v6) || !sub_7ff3b16dea0(a11, vvar_135{r56|8b}, vvar_135{r56|8b}, v7, v8, v5, v6) || (v12 = a7, v13 = a17, v11 = (unsigned int)(unsigned long long)sub_7ff3b16dea0(a17, vvar_135{r56|8b}, a7, v7, v8, v5, v6), !v11))
    {
        goto LABEL_7ff3b16bd9f;
    }
    v8->field_40->field_8();
}
