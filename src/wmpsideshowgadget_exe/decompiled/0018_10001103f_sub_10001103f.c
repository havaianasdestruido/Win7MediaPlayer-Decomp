/* sub_10001103f @ 0x10001103f
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10001103f  (258 bytes, 22 basic blocks)
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

typedef struct struct_15 {
    char padding_0[192];
    struct struct_16 *field_c0;
    struct struct_17 *field_c8;
    struct struct_18 *field_d0;
    struct struct_19 *field_d8;
    struct struct_20 *field_e0;
    struct struct_21 *field_e8;
    char padding_f0[32];
    unsigned int field_110;
    unsigned int field_114;
    unsigned int field_118;
    unsigned int field_11c;
    char padding_120[40];
    unsigned long long field_148;
} struct_15;

typedef struct struct_16 {
    struct struct_0 *field_0;
} struct_16;

typedef struct struct_17 {
    struct struct_3 *field_0;
} struct_17;

typedef struct struct_18 {
    struct struct_6 *field_0;
} struct_18;

typedef struct struct_19 {
    struct struct_8 *field_0;
} struct_19;

typedef struct struct_20 {
    struct struct_10 *field_0;
} struct_20;

typedef struct struct_21 {
    struct struct_13 *field_0;
} struct_21;

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[8];
    struct struct_2 *field_10;
} struct_0;

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
    char padding_18[136];
    struct struct_5 *field_a0;
} struct_3;

typedef struct struct_6 {
    char padding_0[16];
    struct struct_7 *field_10;
} struct_6;

typedef struct struct_8 {
    char padding_0[16];
    struct struct_9 *field_10;
} struct_8;

typedef struct struct_10 {
    char padding_0[16];
    struct struct_11 *field_10;
    char padding_18[32];
    struct struct_12 *field_38;
} struct_10;

typedef struct struct_13 {
    char padding_0[16];
    struct struct_14 *field_10;
} struct_13;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

typedef struct struct_12 {
    unsigned long long field_0;
} struct_12;

typedef struct struct_14 {
    unsigned long long field_0;
} struct_14;

int sub_10001103f(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long flag, long long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, unsigned long a28, unsigned long a29, unsigned long a30, unsigned long a31, unsigned long a32, unsigned long a33, uint128_t *a34)
{
    unsigned int v6;  // eax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rcx
    unsigned short *v9;  // r12
    long long *v10;  // r13
    unsigned int v11;  // r15
    unsigned int v12;  // eax
    unsigned long long v13;  // r14
    char v1;  // [bp+0xfffc0]
    unsigned long long v2;  // [bp+0xfffc8]
    unsigned long long v3;  // [bp+0x100080]
    int v4;  // [bp+0x1000c0]
    unsigned int v5;  // [bp+0x100114]

    if (v6)
    {
        if (v2 != v7)
        {
            v8 = vvar_120{r56|8b} - 72;
            (*((long long *)(*((long long *)&v1) + 16)))();
        }
        if (!v5)
            4296016688();
        flag = 0;
        v12 = sub_100010380(v9, v10, &flag, v11);
        if (v12 >= 0)
            v12 = sub_10001065c(vvar_120{r56|8b} - 72, *(v10), 0, a8);
        *((uint128_t *)&v4) = *(a34);
        if (v12 >= 0)
        {
            if (*(v10) && v13)
                sub_100010c38();
            if (flag && *(v10))
                4296016568();
            if (v12 < 0 || !v3)
                goto LABEL_1000114bc;
        }
        else
        {
LABEL_1000114bc:
            sub_100010d94(vvar_120{r56|8b} - 72);
            if (v2)
                4296016760();
        }
    }
}
