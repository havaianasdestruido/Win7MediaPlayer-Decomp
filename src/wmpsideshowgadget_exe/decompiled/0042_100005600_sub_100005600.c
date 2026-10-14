/* sub_100005600 @ 0x100005600
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100005600  (218 bytes, 15 basic blocks)
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

typedef struct struct_7 {
    char padding_0[56];
    struct struct_8 *field_38;
} struct_7;

typedef struct struct_9 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_9;

typedef struct struct_4 {
    char padding_0[16];
    struct struct_2 *field_10;
} struct_4;

typedef struct struct_2 {
    char padding_0[56];
    struct struct_3 *field_38;
} struct_2;

typedef struct struct_0 {
    char padding_0[96];
    struct struct_1 *field_60;
} struct_0;

typedef struct struct_8 {
    struct struct_5 *field_0;
} struct_8;

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_5 {
    char padding_0[96];
    struct struct_6 *field_60;
} struct_5;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

extern long long g_1000019b8;
extern struct_9 *g_10001c260;

struct_7 * sub_100005600(struct_4 *ptr, unsigned long a1, unsigned int *p)
{
    unsigned int v6[5];  // rdi
    struct_9 **v7;  // rsi
    unsigned int choice;  // eax
    struct_2 *addr;  // rax
    struct_0 **v10;  // rcx
    char *v11;  // rdx
    long long v0;  // [bp-0x28]
    long long v1;  // [bp-0x20]
    long long v2;  // [bp-0x18]
    long long v3;  // [bp-0x10]
    unsigned long flag;  // [bp+0x18]

    v6 = p;
    v7 = &g_10001c260;
    if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 16))
    {
        *((unsigned int *)&v3) = p[4];
        *((unsigned int *)&v2) = p[3];
        *((unsigned int *)&v1) = p[2];
        *((unsigned int *)&v0) = p[1];
        sub_100004ddc(g_10001c260->field_10, 12, &g_1000019b8, *(p), v0, v1, v2, v3); /* do not return */
    }
    choice = p[4] - 50;
    if (p[4] == 50)
    {
        return sub_10000b920(ptr->field_10);
    }
    else if (choice != 1)
    {
        if (choice != 2)
        {
            if (g_10001c260 == &g_10001c260)
            {
                return choice - 1;
            }
            else if ((g_10001c260->field_1c & 8))
            {
                sub_1000041c8(g_10001c260->field_10, 13, &g_1000019b8); /* do not return */
            }
            else
            {
                return choice - 1;
            }
        }
        addr = ptr->field_10;
        flag = 0;
        v10 = addr->field_38;
        if (!addr->field_38)
            return addr;
        v11 = &flag;
        addr->field_38->field_0->field_60();
    }
    else
    {
        return sub_10000b96c(ptr->field_10);
    }
}
