/* sub_100001ad4 @ 0x100001ad4
 *
 * MODULE   : wmpshare_exe  (bin/wmpshare.exe)
 * ADDRESS  : 0x100001ad4  (450 bytes, 26 basic blocks)
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

unsigned long long sub_100001ad4(unsigned int *ptr, unsigned long long *addr)
{
    unsigned int v10[8];  // rsi
    unsigned long v11;  // r9
    unsigned long v22;  // rax
    unsigned long p;  // rcx
    unsigned int ptr3[16];  // rdi
    unsigned long long idx;  // rbp
    unsigned long long v15;  // rbx
    unsigned int v0;  // [bp-0x88]
    unsigned int v1[8];  // [bp-0x80]
    unsigned long long *v2;  // [bp-0x78]
    unsigned long v3;  // [bp-0x70]
    unsigned int v4;  // [bp-0x68]
    unsigned int v5;  // [bp-0x60], Other Possible Types: unsigned long, unsigned long long
    unsigned int ptr4[16];  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x50]
    unsigned int flag;  // [bp-0x48]
    char *v9;  // [bp+0x8]

    v0 = 72;
    v10 = ptr;
    v1 = ptr;
    v2 = addr;
    v11 = *(ptr) & 1;
    v3 = ptr[1] + 0x100000000;
    v4 = 0;
    ptr4 = 0;
    v7 = 0;
    v5 = 0;
    flag = 0;
    p = ptr[4] + 0x100000000;
    if (!((char)*(ptr) & 1))
    {
        v9 = &v0;
        4296016040();
    }
    ptr3 = *((long long *)(ptr[2] + 0x100000000));
    idx = -0x100000000 + (char *)addr - ptr[3] >> 3 & 4294967295;
    v4 = !(0x8000000000000000 & *((long long *)(p + idx * 8)));
    if (v4)
        v5 = *((int *)(p + idx * 8)) + 4294967298;
    else
        v5 = *((short *)(p + idx * 8));
    v15 = 0;
    if (!ptr3)
        4296015904();
    ptr4 = ptr3;
    if (!ptr[5] || !ptr[7] || !((v22 = (unsigned long)(long long)(int)ptr3[15], *((int *)(v22 + (char *)ptr3)) == 17744 && *((int *)(8 + v22 + (char *)ptr3)) == ptr[7] && ptr3 == *((long long *)(48 + v22 + (char *)ptr3)) && (v15 = (unsigned long long)*((long long *)((unsigned long long)(ptr[5] + 0x100000000) + idx * 8)), *((long long *)((unsigned long long)(ptr[5] + 0x100000000) + idx * 8))))))
        4296015896();
    *(addr) = v15;
    return v15;
}
