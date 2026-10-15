/* sub_7ff33c91d0e @ 0x7ff33c91d0e
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33c91d0e  (2131 bytes, 32 basic blocks)
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
    char field_0;
    char padding_1[2];
    char field_3;
    char padding_4[28];
    char field_20;
} struct_0;


int sub_7ff33c91d0e(void)
{
    void* v5;  // rcx
    void* ptr7;  // rcx
    char v15;  // 4098
    char v16;  // 4101
    void* ptr4;  // rax
    char v18;  // 4241
    void* ptr46;  // rax
    char v20;  // 4254
    char v21;  // 4257
    void* ptr;  // rax
    char v23;  // 4221
    char *ptr54;  // rax
    void* ptr8;  // rax
    char v25;  // 4226
    char v26;  // 4229
    void* ptr6;  // rax
    char *ptr5;  // rdx
    char *ptr16;  // rbx
    char v10;  // 4255
    void* ptr48;  // rax
    char v12;  // 4268
    char v13;  // 4271
    void* ptr12;  // rax
    void* v2;  // [bp-0x10]
    void* v3;  // [bp-0x8]

    ptr7 = v5 - 1;
    if (v5 == 1)
    {
        vvar_204{r48|8b} = vvar_27{r56|4b};
        *((void* *)(vvar_204{r48|8b} - 8)) = ptr7;
        *((unsigned long *)(vvar_204{r48|8b} - 16)) = 894372660;
    }
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((unsigned int *)ptr8) = *((int *)ptr8) + (unsigned int)ptr8;
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((unsigned int *)ptr8) = *((int *)ptr8) + (unsigned int)ptr8;
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    v3 = ptr8;
    *(ptr5) = *(ptr5) & *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr5);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr5);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *(ptr5) = *(ptr5) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *(ptr16) = *(ptr16) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr5);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr5);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *(ptr5) = *(ptr5) + *((char *)&ptr5);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)&ptr8[32]) = (char)ptr8[32] + *((char *)&ptr8);
    v10 = *((char *)ptr8);
    ptr48 = (void*)_INSERT(ptr8, 0, *((char *)&ptr8) + v10);
    *((char *)ptr48) = *((char *)ptr48) + *((char *)&ptr8) + v10;
    *((unsigned int *)ptr48) = *((int *)ptr48) + (unsigned int)ptr48;
    v12 = *((char *)ptr48);
    *((char *)ptr48) = *((char *)ptr48) + *((char *)&ptr8) + v10;
    v13 = *((char *)ptr48);
    ptr12 = (void*)_INSERT(ptr48, 0, *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1));
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((unsigned int *)ptr12) = *((int *)ptr12) + (unsigned int)ptr12;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((unsigned int *)ptr12) = *((int *)ptr12) + (unsigned int)ptr12;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    v2 = ptr12;
    *(ptr5) = *(ptr5) & *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr5);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr5);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr7);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *(ptr5) = *(ptr5) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *(ptr16) = *(ptr16) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr5);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8) + v10 + v13 + ((char)(v12 + *((char *)&ptr8) + v10 <= v12 ? 1 : 0) & 1);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr5);
    v15 = *((char *)ptr12);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr12);
    v16 = *((char *)ptr12);
    ptr4 = (void*)_INSERT(ptr12, 0, *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1));
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *(ptr5) = *(ptr5) & *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *(ptr5) = *(ptr5) + *((char *)&ptr5);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr12) + v16 + ((char)(v15 + *((char *)&ptr12) <= v15 ? 1 : 0) & 1);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((unsigned int *)ptr4) = *((int *)ptr4) + (unsigned int)ptr4;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *(ptr5) = *(ptr5) & *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr5);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr5);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *(ptr5) = *(ptr5) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *(ptr16) = *(ptr16) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr5);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr5);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *(ptr5) = *(ptr5) + *((char *)&ptr5);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)&ptr4[32]) = (char)ptr4[32] + *((char *)&ptr4);
    v18 = *((char *)ptr4);
    ptr46 = (void*)_INSERT(ptr4, 0, *((char *)&ptr4) + v18);
    *((char *)ptr46) = *((char *)ptr46) + *((char *)&ptr4) + v18;
    *((unsigned int *)ptr46) = *((int *)ptr46) + (unsigned int)ptr46;
    v20 = *((char *)ptr46);
    *((char *)ptr46) = *((char *)ptr46) + *((char *)&ptr4) + v18;
    v21 = *((char *)ptr46);
    ptr = (void*)_INSERT(ptr46, 0, *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1));
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *(ptr5) = *(ptr5) & *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr5);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr5);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *(ptr5) = *(ptr5) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *(ptr16) = *(ptr16) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr5);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr5);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *(ptr5) = *(ptr5) + *((char *)&ptr5);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4) + v18 + v21 + ((char)(v20 + *((char *)&ptr4) + v18 <= v20 ? 1 : 0) & 1);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *(ptr5) = *(ptr5) & *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *(ptr5) = *(ptr5) + *((char *)&ptr5);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)&ptr[32]) = (char)ptr[32] + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr5);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr5);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *(ptr5) = *(ptr5) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *(ptr16) = *(ptr16) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr5);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr5);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *(ptr5) = *(ptr5) + *((char *)&ptr5);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)&ptr[32]) = (char)ptr[32] + *((char *)&ptr);
    v23 = *((char *)ptr);
    ptr54 = (char *)_INSERT(ptr, 0, *((char *)&ptr) + v23);
    v25 = *(ptr54);
    *(ptr54) = *(ptr54) + *((char *)&ptr) + v23;
    v26 = *(ptr54);
    ptr6 = (void*)_INSERT(ptr54, 0, *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1));
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((unsigned int *)ptr6) = *((int *)ptr6) + (unsigned int)ptr6;
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((unsigned int *)ptr6) = *((int *)ptr6) + (unsigned int)ptr6;
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *(ptr5) = *(ptr5) & *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr5);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr5);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr7);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *(ptr5) = *(ptr5) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *(ptr16) = *(ptr16) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr5);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr5);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *(ptr5) = *(ptr5) + *((char *)&ptr5);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr) + v23 + v26 + ((char)(v25 + *((char *)&ptr) + v23 <= v25 ? 1 : 0) & 1);
    *((char *)&ptr6[3]) = (char)ptr6[3] ^ *((char *)((void*)&ptr5 + 1));
}
