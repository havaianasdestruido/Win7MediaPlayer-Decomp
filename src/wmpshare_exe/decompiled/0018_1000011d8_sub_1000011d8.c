/* sub_1000011d8 @ 0x1000011d8
 *
 * MODULE   : wmpshare_exe  (bin/wmpshare.exe)
 * ADDRESS  : 0x1000011d8  (46 bytes, 4 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): ab95a6aa118e853d71b326b68a409f24a6276f47e34ca9e8049f7d49b4825a51
 *   Evidence: analysis/report/rea-evidence/wmpshare_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[1466458815];
    char field_576862bf;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern struct_1 *g_100003128;

void sub_1000011d8(unsigned long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    struct_0 *addr;  // rbx
    char *p;  // rdi
    void* ptr;  // rax
    char v6;  // 4125
    unsigned long v7;  // cc_dep1
    unsigned long v8;  // cc_dep2
    unsigned long v9;  // cc_ndep
    unsigned long v10;  // 4160
    unsigned long v11;  // 4101
    unsigned long v12;  // 4105
    struct_0 *v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v1 = a1;
    v0 = addr;
    addr->field_576862bf = addr->field_576862bf >> 10;
    *(p) = *(p) + *((char *)((void*)&a1 + 1));
    *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
    v6 = *((char *)ptr);
    *((char *)ptr) = v6 + *((char *)&ptr);
    v7 = v6;
    v8 = *((char *)&ptr);
    v10 = _ccall(6, 1, (unsigned long long)v6, (unsigned long long)*((char *)(void*)&ptr), v9);
    if ((char)v10)
    {
        v11 = _ccall(0, 1, v7, v8, v9);
        if ((char)v11)
            goto LABEL_0x100001267;
        strncpy(&vvar_8{r40|8b}, "are.", 4);
        v12 = _ccall(0, 1, v7, v8, v9);
        if ((char)v12)
            goto LABEL_10000125f;
        else
            goto LABEL_0x1000011fb;
    }
LABEL_10000125f:
    g_100003128();
}
