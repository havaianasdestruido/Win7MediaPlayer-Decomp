/* _start @ 0x7ff2c17871c
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c17871c  (170 bytes, 10 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 714d193de7f062968c11a8a946f1fa066d03e1fc5a7bd90dbabc372605416413
 *   Evidence: analysis/report/rea-evidence/wmpmediasharing_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_7ff2c181150;
extern char g_7ff2c183400;
extern unsigned int g_7ff2c183404;
extern struct_0 *g_7ff2c183d78;

long long _start(unsigned long long a0, unsigned int choice, unsigned long long a2)
{
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rdi
    unsigned long long v11;  // rcx
    unsigned long v12;  // rdi
    unsigned long long v13;  // rsi
    unsigned long long v14;  // r8
    unsigned int flag;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v4;  // [bp-0x8]
    unsigned long long v5;  // [bp+0x8]
    unsigned long long v6;  // [bp+0x10]
    unsigned int flag2;  // [bp+0x10]

    v5 = v8;
    v6 = v9;
    v3 = v10;
    if (choice == 1)
        sub_7ff2c178c1c();
    v11 = a0;
    flag2 = choice;
    v5 = a0;
    v4 = v5;
    v2 = v6;
    v1 = v3;
    v12 = flag2;
    v13 = a0;
    flag = 1;
    g_7ff2c181150 = flag2;
    if (!flag2 && *((int *)&g_7ff2c183400) == flag2)
        flag = 0;
    if (flag2 != 1)
        if (flag2 == 2)
            goto LABEL_7ff2c178575;
        else
            goto LABEL_0x7ff2c1785ed;
LABEL_7ff2c178575:
    if (!g_7ff2c183d78)
        goto LABEL_0x7ff2c1785b2;
    g_7ff2c183404 = 1;
    v14 = a2;
    g_7ff2c183d78();
}
