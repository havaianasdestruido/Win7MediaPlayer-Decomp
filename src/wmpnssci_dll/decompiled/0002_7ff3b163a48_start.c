/* _start @ 0x7ff3b163a48
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b163a48  (170 bytes, 10 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962
 *   Evidence: analysis/report/rea-evidence/wmpnssci_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_7ff3b17a150;
extern char g_7ff3b17cac0;
extern unsigned int g_7ff3b17cac4;
extern struct_0 *g_7ff3b17d500;

int _start(void)
{
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rdi
    unsigned int choice;  // edx
    unsigned long long v12;  // rcx
    unsigned long long v13;  // rcx
    unsigned long v14;  // rdi
    unsigned long long v15;  // rsi
    unsigned long long v16;  // r8
    unsigned long long v17;  // r8
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
        sub_7ff3b163f2c();
    v13 = v12;
    flag2 = choice;
    v5 = v12;
    v4 = v5;
    v2 = v6;
    v1 = v3;
    v14 = flag2;
    v15 = v12;
    flag = 1;
    g_7ff3b17a150 = flag2;
    if (!flag2 && *((int *)&g_7ff3b17cac0) == flag2)
        flag = 0;
    if (flag2 != 1)
        if (flag2 == 2)
            goto LABEL_7ff3b1638a1;
        else
            goto LABEL_0x7ff3b163919;
LABEL_7ff3b1638a1:
    if (!g_7ff3b17d500)
        goto LABEL_0x7ff3b1638de;
    g_7ff3b17cac4 = 1;
    v17 = v16;
    g_7ff3b17d500();
}
