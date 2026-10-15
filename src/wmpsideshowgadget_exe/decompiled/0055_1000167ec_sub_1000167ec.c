/* sub_1000167ec @ 0x1000167ec
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x1000167ec  (190 bytes, 13 basic blocks)
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

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_0;

typedef struct struct_3 {
    char padding_0[24];
    struct struct_4 *field_18;
} struct_3;

typedef struct struct_1 {
    char padding_0[24];
    struct struct_2 *field_18;
} struct_1;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern long long g_100001958;
extern struct_0 *g_10001c260;

struct_0 ** sub_1000167ec(struct_3 *a0)
{
    struct_3 *v1;  // rbx
    struct_3 *ptr;  // rcx
    char *v3;  // r8
    struct_1 **v4;  // rcx
    unsigned long v5;  // rdx
    unsigned long flag;  // [bp+0x8]

    if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 16))
        sub_1000041c8(g_10001c260->field_10, 35, &g_100001958); /* do not return */
    v1 = &a0->padding_0[8];
    sub_100016954(v1);
    sub_100016a58(v1);
    ptr = v1;
    flag = 0;
    v3 = &flag;
    if ((char)sub_100017374(&ptr[1].padding_0[8], 0, &flag))
    {
        v4 = *((long long *)&ptr[1].padding_0[0]);
        v5 = flag;
        (*((long long *)(*((long long *)*((long long *)&ptr[1].padding_0[0])) + 24)))();
    }
    else if (g_10001c260 == &g_10001c260)
    {
        return &g_10001c260;
    }
    else if ((g_10001c260->field_1c & 4))
    {
        sub_1000041c8(g_10001c260->field_10, 43, &g_100001958); /* do not return */
    }
    else
    {
        return &g_10001c260;
    }
}
