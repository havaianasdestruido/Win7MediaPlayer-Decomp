/* sub_100002541 @ 0x100002541
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100002541  (148 bytes, 11 basic blocks)
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
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    struct struct_2 *field_8;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern long long g_1000018e0;
extern struct_0 *g_10000b160;

long long sub_100002541(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, void* a16)
{
    unsigned int v1;  // eax
    unsigned int v2;  // esi
    unsigned long long v3;  // rsi
    struct_0 *v4;  // r14
    void* ptr;  // rdx
    unsigned int v6;  // r13d
    struct_1 **v7;  // rcx

    v3 = (v1 == 4 ? 1 : v2);
    if (g_10000b160 != v4 && (1 & g_10000b160->field_1c))
        sub_100002038(g_10000b160->field_10, 13, &g_1000018e0); /* do not return */
    sub_100006650(&a16);
    if (g_10000b160 != v4 && (1 & g_10000b160->field_1c))
        sub_100002038(g_10000b160->field_10, 14, &g_1000018e0); /* do not return */
    ptr = a16 - 24;
    InterlockedExchangeAdd(ptr + 16, 4294967295);
    if ((int)ptr[16] - 1 > v6)
    {
        if ((unsigned int)(v1 == 4 ? 1 : v2) != v6)
            goto LABEL_0x100002ae5;
        sub_10000682c(); /* do not return */
    }
    v7 = *((long long *)ptr);
    (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
}
