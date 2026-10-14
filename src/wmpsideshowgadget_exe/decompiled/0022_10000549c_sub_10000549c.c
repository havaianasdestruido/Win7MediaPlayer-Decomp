/* sub_10000549c @ 0x10000549c
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000549c  (259 bytes, 20 basic blocks)
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

typedef struct struct_9 {
    char padding_0[56];
    struct struct_10 *field_38;
} struct_9;

typedef struct struct_5 {
    char padding_0[16];
    struct struct_3 *field_10;
} struct_5;

typedef struct struct_3 {
    char padding_0[56];
    struct struct_4 *field_38;
} struct_3;

typedef struct struct_0 {
    char padding_0[88];
    struct struct_1 *field_58;
    struct struct_2 *field_60;
} struct_0;

typedef struct struct_10 {
    struct struct_6 *field_0;
} struct_10;

typedef struct struct_4 {
    struct struct_0 *field_0;
} struct_4;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_6 {
    char padding_0[88];
    struct struct_7 *field_58;
    struct struct_8 *field_60;
} struct_6;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_11 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_11;

extern long long g_1000019b8;
extern struct_11 *g_10001c260;

struct_9 * sub_10000549c(struct_5 *ptr, unsigned long a1, unsigned int *p)
{
    unsigned int v4[3];  // rdi
    unsigned int choice;  // eax
    struct_0 **v14;  // rcx
    char *v15;  // rdx
    unsigned int flag2;  // eax
    unsigned int flag3;  // eax
    struct_3 *addr;  // rax
    struct_0 **v9;  // rcx
    char *v10;  // rdx
    struct_3 *ptr3;  // rax
    struct_0 **v12;  // rcx
    char *v13;  // rdx
    long long v0;  // [bp-0x18]
    long long v1;  // [bp-0x10]
    unsigned long flag;  // [bp+0x18]

    v4 = p;
    if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 16))
    {
        *((unsigned int *)&v1) = p[2];
        *((unsigned int *)&v0) = p[1];
        sub_100004d18(g_10001c260->field_10, 11, &g_1000019b8, *(p), v0, v1); /* do not return */
    }
    choice = p[2] - 2;
    if (p[2] != 2)
    {
        flag2 = choice - 1;
        if (choice == 1)
            return sub_10000b9b8(ptr->field_10);
        flag3 = flag2 - 1;
        if (flag2 == 1)
        {
            return sub_10000ba4c(ptr->field_10);
        }
        else if (flag3 == 1)
        {
            ptr3 = ptr->field_10;
            flag = 0;
            v12 = ptr3->field_38;
            if (!ptr3->field_38)
                return ptr3;
            v13 = &flag;
            ptr3->field_38->field_0->field_60();
        }
        else if (flag3 == 2)
        {
            addr = ptr->field_10;
            flag = 0;
            v9 = addr->field_38;
            if (!addr->field_38)
                return addr;
            v10 = &flag;
            addr->field_38->field_0->field_60();
        }
        else
        {
            return flag3 - 1;
        }
    }
    else
    {
        v14 = ptr->field_10->field_38;
        if (!ptr->field_10->field_38)
            return sub_10000b920(ptr->field_10);
        v15 = &flag;
        ptr->field_10->field_38->field_0->field_58();
    }
}
