/* sub_7ff33cb1033 @ 0x7ff33cb1033
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb1033  (211 bytes, 16 basic blocks)
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
    char padding_0[84];
    unsigned int field_54;
    char padding_58[24];
    struct struct_1 *field_70;
    struct struct_2 *field_78;
    struct struct_1 *field_80;
    struct struct_2 *field_88;
    char padding_90[1152];
    unsigned long long field_510;
    unsigned long long field_518;
    char padding_520[1];
    char field_521;
} struct_0;

typedef struct struct_1 {
    char padding_0[36];
    char field_24;
    char padding_25[44];
    char field_51;
} struct_1;

typedef struct struct_2 {
    char padding_0[36];
    char field_24;
    char padding_25[44];
    char field_51;
} struct_2;

int sub_7ff33cb1033(void)
{
    int v1;  // eax
    int v2;  // edx
    struct_0 *ptr;  // rbx
    unsigned long long v4;  // rcx
    char p[82];  // rax
    char v6[82];  // rax
    char v7[82];  // rax

    v2 = (unsigned int)(2290649225 * v1 >> 32) + v1 >> 3;
    ptr->field_54 = v1 - (v2 + (v2 >> 31)) * 15 + 1;
    if (ptr->field_521 != (char)vvar_36{r56|8b} && (ptr->field_70 != vvar_36{r56|8b} && ptr->field_70->field_51 != (char)vvar_36{r56|8b} || ptr->field_78 != vvar_36{r56|8b} && ptr->field_78->field_51 != (char)vvar_36{r56|8b} || ptr->field_80 != vvar_36{r56|8b} && ptr->field_80->field_51 != (char)vvar_36{r56|8b} || ptr->field_88 != vvar_36{r56|8b} && ptr->field_88->field_51 != (char)vvar_36{r56|8b}))
        ptr->field_54 = 1;
    v4 = ptr->field_510;
    ptr->field_510 = ptr->field_518;
    p = ptr->field_70;
    ptr->field_518 = v4;
    if (p != vvar_36{r56|8b})
        p[36] = vvar_36{r56|8b};
    if (ptr->field_78 != vvar_36{r56|8b})
        ptr->field_78->field_24 = vvar_36{r56|8b};
    v6 = ptr->field_80;
    *((int *)&ptr->field_80) = vvar_36{r56|8b};
    ptr->field_70 = v6;
    v7 = ptr->field_88;
    *((int *)&ptr->field_88) = vvar_36{r56|8b};
    ptr->field_78 = v7;
}
