/* sub_100002658 @ 0x100002658
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100002658  (159 bytes, 11 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 10888bb9c3799e1e8b010c0f9088ced376aad63a509fce1727c457b022cdc717
 *   Evidence: analysis/report/rea-evidence/wmpnscfg_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;


void sub_100002658(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, void* p, unsigned long a10, unsigned long a11, unsigned long a12, void* a13)
{
    long long v1;  // rax
    void* ptr;  // rdx
    unsigned int v3;  // r13d
    struct_0 **v4;  // rcx

    sub_100005db8(&vvar_9, v1);
    ptr = a13 - 24;
    InterlockedExchangeAdd(ptr + 16, 4294967295);
    if ((int)ptr[16] - 1 <= v3)
    {
        v4 = *((long long *)ptr);
        (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
    }
    while (true)
    {
        if (0)
            goto LABEL_0x10000269f;
    }
}
