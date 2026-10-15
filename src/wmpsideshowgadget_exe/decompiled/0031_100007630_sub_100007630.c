/* sub_100007630 @ 0x100007630
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100007630  (250 bytes, 17 basic blocks)
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
    struct struct_1 *field_0;
    char padding_8[88];
    struct struct_7 *field_60;
    char padding_68[8];
    unsigned long long field_70;
} struct_3;

typedef struct struct_1 {
    char padding_0[104];
    struct struct_2 *field_68;
} struct_1;

typedef struct struct_7 {
    char padding_0[56];
    struct struct_8 *field_38;
    struct struct_9 *field_40;
} struct_7;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_8 {
    struct struct_2 *field_0;
} struct_8;

typedef struct struct_9 {
    struct struct_6 *field_0;
} struct_9;

typedef struct struct_2 {
    char padding_0[120];
    struct struct_3 *field_78;
    char padding_80[40];
    struct struct_4 *field_a8;
} struct_2;

typedef struct struct_6 {
    struct struct_5 *field_0;
} struct_6;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

extern long long g_1000019b8;
extern struct_0 *g_10001c260;

struct_0 ** sub_100007630(struct_3 *a0, unsigned long long a1, unsigned int *a2, unsigned long long a3)
{
    unsigned long long v5;  // rsi
    struct_3 *v6;  // rdi
    unsigned int v7;  // eax
    unsigned long long v8;  // rdx
    struct_3 *v9;  // rcx
    unsigned long long v10;  // rdx
    struct_3 *v11;  // rcx
    long long v0;  // [bp-0x28]
    long long v1;  // [bp-0x20]
    long long v2;  // [bp-0x18]
    unsigned long flag;  // [bp+0x20]

    v5 = a3;
    v6 = a0;
    if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 16))
    {
        *((unsigned int *)&v2) = a2[3];
        *((unsigned int *)&v1) = a2[2];
        *((unsigned int *)&v0) = a2[1];
        sub_100004d74(g_10001c260->field_10, 22, &g_1000019b8, *(a2), v0, v1, v2); /* do not return */
    }
    if (!a3)
    {
        return &g_10001c260;
    }
    else if (a2[3] == 4294967294)
    {
        v10 = a1;
        v11 = a0;
        a0->field_0->field_68();
    }
    else if (a2[3] != 4294967295)
    {
        if (!a0->field_70)
        {
            flag = 0;
            if (a0->field_70)
                4295012220();
            v7 = sub_100006ed4(a0);
            sub_10000cf9c(a0->field_60, v7, &flag, a2[3], 0); /* do not return */
        }
        4296017296();
    }
    else
    {
        v8 = a1;
        v9 = a0;
        a0->field_0->field_68();
    }
}
