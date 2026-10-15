/* sub_100001ac5 @ 0x100001ac5
 *
 * MODULE   : wmpconfig_exe  (bin/wmpconfig.exe)
 * ADDRESS  : 0x100001ac5  (48 bytes, 5 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f1726e36b8a016069b7d9eef811f5ca3799bfed355423f70f51947e67d2ef4f
 *   Evidence: analysis/report/rea-evidence/wmpconfig_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

void sub_100001ac5(unsigned long a0, char *p)
{
    char v2;  // 4097
    char v3;  // al
    void* ptr;  // rax
    char v5;  // 4112
    unsigned long v6;  // cc_ndep
    unsigned long v7;  // 4137
    char v8;  // 4106
    unsigned long v9;  // 4124
    unsigned int *addr;  // rsi
    void* v0;  // [bp-0x8]

    v2 = *(p);
    ptr = v3 ^ v2;
    v0 = ptr;
    *((unsigned int *)(a0 + (char *)ptr)) = *((int *)(a0 + (char *)ptr)) | (unsigned int)ptr;
    *(p + 0x2 * ptr) = *(p + 0x2 * ptr) + (v3 ^ v2);
    v5 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + (v3 ^ v2);
    v7 = _ccall(14, 1, (unsigned long long)v5, (unsigned long long)(v3 ^ v2), v6);
    if (!((char)v7))
    {
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    }
    *((unsigned int *)(a0 + (char *)ptr)) = *((int *)(a0 + (char *)ptr)) | (unsigned int)ptr;
    *(p) = *(p) + *((char *)&ptr);
    v8 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v9 = _ccall(14, 1, (unsigned long long)v8, (unsigned long long)*((char *)(void*)&ptr), v6);
    if ((char)v9)
        *(addr) = *(addr) + (unsigned int)ptr;
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
}
