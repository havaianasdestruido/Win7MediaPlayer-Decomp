/* sub_100008aec @ 0x100008aec
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100008aec  (232 bytes, 16 basic blocks)
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

typedef struct struct_5 {
    char padding_0[16];
    struct struct_3 *field_10;
} struct_5;

typedef struct struct_3 {
    char padding_0[56];
    struct struct_4 *field_38;
} struct_3;

typedef struct struct_1 {
    char padding_0[104];
    struct struct_2 *field_68;
} struct_1;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern long long g_1000019b8;
extern struct_0 *g_10001c260;

long long sub_100008aec(struct_5 *ptr, unsigned long a1, unsigned int *p)
{
    unsigned int v5[4];  // rdi
    struct_0 **v6;  // rsi
    struct_3 *addr;  // rbx
    unsigned int choice;  // eax
    struct_1 **v9;  // rcx
    char *v10;  // rdx
    unsigned long v11;  // rax
    long long v0;  // [bp-0x38]
    long long v1;  // [bp-0x30]
    long long v2;  // [bp-0x28]
    unsigned long flag;  // [bp-0x18]

    v5 = p;
    v6 = &g_10001c260;
    if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 16))
    {
        *((unsigned int *)&v2) = p[3];
        *((unsigned int *)&v1) = p[2];
        *((unsigned int *)&v0) = p[1];
        sub_100004d74(g_10001c260->field_10, 31, &g_1000019b8, *(p), v0, v1, v2); /* do not return */
    }
    addr = ptr->field_10;
    if (!addr)
        return v11;
    choice = p[3];
    if (!choice)
    {
        return sub_10000b9b8(addr);
    }
    else if (choice != 1)
    {
        if (choice != 2)
        {
            if (g_10001c260 == &g_10001c260)
            {
                return choice - 1;
            }
            else if ((g_10001c260->field_1c & 4))
            {
                sub_1000041c8(g_10001c260->field_10, 32, &g_1000019b8); /* do not return */
            }
            else
            {
                return choice - 1;
            }
        }
        v9 = addr->field_38;
        flag = 0;
        if (!addr->field_38)
            return choice - 1;
        v10 = &flag;
        addr->field_38->field_0->field_68();
    }
    else
    {
        return sub_10000ba4c(addr);
    }
}
