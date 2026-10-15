/* sub_100008cbd @ 0x100008cbd
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100008cbd  (312 bytes, 21 basic blocks)
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

typedef struct struct_5 {
    char padding_0[16];
    struct struct_6 *field_10;
    char padding_18[248];
    struct struct_7 *field_110;
} struct_5;

typedef struct struct_4 {
    char padding_0[16];
    struct struct_2 *field_10;
} struct_4;

typedef struct struct_2 {
    char padding_0[56];
    struct struct_3 *field_38;
} struct_2;

typedef struct struct_0 {
    char padding_0[104];
    struct struct_1 *field_68;
} struct_0;

typedef struct struct_8 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_8;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern long long g_1000019b8;
extern struct_8 *g_10001c260;

long long sub_100008cbd(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, struct_5 **a8, unsigned long a9, unsigned int a10)
{
    struct_5 **v8;  // rcx
    int v9;  // eax
    struct_4 *ptr;  // rbx
    unsigned int v11;  // eax
    struct_2 *p;  // rcx
    struct_0 **v13;  // rcx
    char *v14;  // rdx
    long long v15;  // r12
    struct_5 **v16;  // rcx
    struct_8 **v17;  // rdx
    char v0;  // [bp+0x0]
    long long v2;  // [bp+0x20]
    unsigned long v3;  // [bp+0x60]
    char v4;  // [bp+0x290]
    char v5;  // [bp+0x4a0]
    unsigned long long v6;  // [bp+0x6b0]

    v8 = a8;
    if (v9 >= vvar_66{r56|8b} && v8 != vvar_66{r56|8b})
    {
        a7 = vvar_66{r56|8b};
        v11 = sub_10000badc(ptr->field_10, &a7);
        if (v11 == vvar_66{r56|8b})
        {
            if (a7 == 1)
                4296016528();
            p = ptr->field_10;
            a9 = vvar_66{r56|8b};
            if (p->field_38 != vvar_66{r56|8b})
            {
                a10 = vvar_66{r56|8b};
                v13 = p->field_38;
                v14 = &a9;
                p->field_38->field_0->field_68();
            }
            *((unsigned int *)&v2) = a10;
            if ((int)sub_10000b1b4(&v4, v15, L"%ws %d%%", &v5, v2) < vvar_66{r56|8b})
            {
                v16 = a8;
                v3 = vvar_66{r56|8b};
                a7 = vvar_66{r56|8b};
                *(a8)->field_110();
            }
        }
        else
        {
            if (v11 < vvar_66{r56|8b})
            {
                v16 = a8;
                v3 = vvar_66{r56|8b};
                a7 = vvar_66{r56|8b};
                *(a8)->field_110();
            }
        }
        a9 = vvar_66{r56|8b};
        sub_100017f48(a8, L"body", &a9); /* do not return */
    }
    v17 = &g_10001c260;
    if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 8))
        sub_1000041c8(g_10001c260->field_10, 33, &g_1000019b8); /* do not return */
    if (v8 == vvar_66{r56|8b})
        return sub_100018f20(v6 ^ &v0);
    *(v8)->field_10();
}
