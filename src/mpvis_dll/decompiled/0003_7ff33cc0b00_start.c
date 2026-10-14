/* _start @ 0x7ff33cc0b00
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cc0b00  (170 bytes, 10 basic blocks)
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
    unsigned long long field_0;
} struct_0;

extern unsigned int g_7ff33cc6100;
extern char g_7ff33cce6f0;
extern unsigned int g_7ff33cce6f4;
extern struct_0 *g_7ff33cd1318;

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
        sub_7ff33cc0e98();
    v11 = a0;
    flag2 = choice;
    v5 = a0;
    v4 = v5;
    v2 = v6;
    v1 = v3;
    v12 = flag2;
    v13 = a0;
    flag = 1;
    g_7ff33cc6100 = flag2;
    if (!flag2 && *((int *)&g_7ff33cce6f0) == flag2)
        flag = 0;
    if (flag2 != 1)
        if (flag2 == 2)
            goto LABEL_7ff33cc0959;
        else
            goto LABEL_0x7ff33cc09d1;
LABEL_7ff33cc0959:
    if (!g_7ff33cd1318)
        goto LABEL_0x7ff33cc0996;
    g_7ff33cce6f4 = 1;
    v14 = a2;
    g_7ff33cd1318();
}
