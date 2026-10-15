/* sub_10000417c @ 0x10000417c
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x10000417c  (142 bytes, 6 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): b8b174ae012a8a25a9d706f7f169e7a2553ab8ffe0ccef2beb34fe803ec0634a
 *   Evidence: analysis/report/rea-evidence/wmpenc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
    char padding_18[48];
    struct struct_2 *field_48;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern unsigned long long g_100007110;

void sub_10000417c(unsigned long long a0)
{
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rdi
    char *v14;  // r9
    char *v15;  // r8
    unsigned long long choice;  // rdx
    unsigned int v17;  // eax
    unsigned long v18;  // rdi
    struct_0 **v19;  // rcx
    struct_0 **v20;  // rcx
    char v0;  // [bp-0x278]
    unsigned long long flag4;  // [bp-0x258]
    char *v2;  // [bp-0x250]
    char flag;  // [bp-0x248], Other Possible Types: unsigned long long
    struct_0 **flag2;  // [bp-0x240], Other Possible Types: char
    unsigned long flag3;  // [bp-0x238]
    unsigned long v6;  // [bp-0x18]
    unsigned long long v7;  // [bp-0x8]
    unsigned long v9;  // [bp+0x10]
    unsigned long long v10;  // [bp+0x18]

    v9 = vvar_2{r56|8b};
    v10 = v12;
    v7 = v13;
    v6 = g_100007110 ^ &v0;
    v14 = &flag2;
    v15 = &flag;
    choice = 0;
    flag = 0;
    flag2 = NULL;
    v17 = sub_100003ff0(a0, 0, &flag, &flag2);
    v18 = v17;
    if (v17 >= 0)
    {
        v19 = flag2;
        flag3 = 0;
        v2 = &flag3;
        flag4 = 0;
        *(flag2)->field_48();
    }
    v20 = flag2;
    if (!flag2)
        4296016624();
    *(flag2)->field_10();
}
