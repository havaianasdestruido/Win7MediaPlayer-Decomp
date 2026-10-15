/* sub_1000023f5 @ 0x1000023f5
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x1000023f5  (216 bytes, 21 basic blocks)
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

typedef struct struct_2 {
    unsigned long long field_0;
    char padding_8[8];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern long long g_1000018f0;
extern struct_2 *g_10000b160;

unsigned int sub_1000023f5(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, void* a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, char a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27)
{
    unsigned long long v1;  // r13
    void* ptr;  // rdx
    struct_0 **v3;  // rcx
    unsigned long long v4;  // rdi
    int v5;  // esi
    struct_2 *p;  // rdi
    unsigned long long v7;  // r14

    if ((int)a8[16] >= (unsigned int)v1)
        4296016672();
    ptr = a8 - 24;
    InterlockedExchangeAdd(ptr + 16, 4294967295);
    if ((int)ptr[16] - 1 <= (unsigned int)v1)
    {
        v3 = *((long long *)ptr);
        (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
    }
    else if (v4 != v1)
    {
        4296016632();
    }
    else if (v5 == (unsigned int)v1)
    {
        sub_100006158(&vvar_16); /* do not return */
    }
    else
    {
        p = g_10000b160;
        if (g_10000b160 == v7)
            return 0;
        if ((1 & g_10000b160->field_1c) && g_10000b160->field_19 >= 5)
            sub_10000205c(g_10000b160->field_10, 21, &g_1000018f0, 0); /* do not return */
        if (g_10000b160 == v7)
            return 0;
        while (p != v1)
        {
            if (p->padding_8 != v1)
                4296016312();
            p = p->field_0;
        }
        g_10000b160 = v7;
        return 0;
    }
}
