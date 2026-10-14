/* sub_100016954 @ 0x100016954
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100016954  (202 bytes, 13 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f8f45cd381f60a41cca4834188157d25906911108d7280cb2540d2245327a9d
 *   Evidence: analysis/report/rea-evidence/wmpsideshowgadget_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_2 {
    char padding_0[32];
    struct struct_3 *field_20;
} struct_2;

typedef struct struct_5 {
    char padding_0[24];
    struct struct_6 *field_18;
} struct_5;

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_0 {
    char padding_0[24];
    struct struct_1 *field_18;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_4 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_4;

extern long long g_100001958;
extern struct_4 *g_10001c260;

void sub_100016954(struct_2 *ptr)
{
    struct_2 *v1;  // rdi
    char *v2;  // r8
    struct_5 **v3;  // rcx
    unsigned long v4;  // rdx
    char *v5;  // r8
    struct_5 **v6;  // rcx
    unsigned long v7;  // rdx
    unsigned long flag;  // [bp+0x8]

    flag = 0;
    v1 = ptr;
    v2 = &flag;
    if ((char)sub_100017374(ptr + 1, 7, &flag))
    {
        v3 = ptr->field_20;
        v4 = flag;
        ptr->field_20->field_0->field_18();
    }
    if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 4))
        sub_1000041c8(g_10001c260->field_10, 38, &g_100001958); /* do not return */
    v5 = &flag;
    if ((char)sub_100017374(ptr + 1, 100, &flag))
    {
        v6 = ptr->field_20;
        v7 = flag;
        ptr->field_20->field_0->field_18();
    }
    else if (g_10001c260 == &g_10001c260)
    {
        return;
    }
    else if ((g_10001c260->field_1c & 4))
    {
        sub_1000041c8(g_10001c260->field_10, 39, &g_100001958); /* do not return */
    }
    else
    {
        return;
    }
}
