/* sub_100001e37 @ 0x100001e37
 *
 * MODULE   : wmpshare_exe  (bin/wmpshare.exe)
 * ADDRESS  : 0x100001e37  (66 bytes, 5 basic blocks)
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

void sub_100001e37(unsigned long long a0, unsigned long ptr3)
{
    char p[24];  // rbx
    char v2;  // 4098
    unsigned long long v11;  // 4137
    unsigned long long v12;  // rcx
    char v13;  // 4098
    unsigned long v14;  // 4141
    unsigned long v15;  // 4144
    char *addr;  // rdi
    char v17;  // 4104
    char v18;  // dl
    char *ptr4;  // rdx
    unsigned long v3;  // cc_ndep
    unsigned long v4;  // 4107
    char v5;  // 4098
    unsigned long v6;  // rax
    unsigned long v7;  // fs
    unsigned long v8;  // 4133
    void* ptr;  // rax
    unsigned long v10;  // 4135

    v2 = p[0];
    p[0] = v2 + (char)ptr3;
    v4 = _ccall(4, 1, (unsigned long long)v2, (unsigned long long)(char)ptr3, v3);
    if (!((char)v4))
    {
        v5 = p[0];
        p[0] = p[0] + (char)ptr3;
        *((char *)(v6 + v7)) = *((char *)(v6 + v7)) - (char)v6 - ((char)(v5 + (char)ptr3 <= v5 ? 1 : 0) & 1);
    }
    v8 = _ccall(1, (unsigned long long)v2, (unsigned long long)(char)ptr3, v3);
    v10 = _ccall((unsigned long long)(char)*((char *)(ptr * 2)), 0, v8, 1);
    v11 = _ccall((unsigned long long)(char)*((char *)(ptr * 2)), 0, v8, 18446744073709551615);
    *((char *)(ptr * 2)) = v10;
    v12 = a0 - 1;
    if (a0 - 1 & !(v11 >> 6 & 1))
    {
        p[23] = p[23] + (char)ptr3;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        v17 = *(addr);
        InterlockedExchange8(addr, ptr3);
        v18 = *(addr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        InterlockedExchange8(addr, v17);
        ptr4 = (char *)_INSERT(v18 CONCAT 0, 0, *(addr));
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((unsigned int *)(v12 + (char *)ptr)) = *((int *)(v12 + (char *)ptr)) | (unsigned int)ptr;
        *(ptr4) = *(ptr4) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    }
    v13 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v14 = _ccall(1, (unsigned long long)v13, (unsigned long long)*((char *)(void*)&ptr), 0);
    v15 = _ccall((unsigned long long)(char)*((char *)(ptr * 2)), 0, v14, 1);
    *((char *)(ptr * 2)) = v15;
    *((unsigned int *)(v12 + (char *)ptr)) = *((int *)(v12 + (char *)ptr)) + (unsigned int)ptr;
    *((char *)(ptr3 + ptr * 2)) = *((char *)(ptr3 + ptr * 2)) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((unsigned int *)(v12 + (char *)ptr)) = *((int *)(v12 + (char *)ptr)) | (unsigned int)ptr;
    *((char *)(ptr3 + ptr * 2)) = *((char *)(ptr3 + ptr * 2)) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
}
