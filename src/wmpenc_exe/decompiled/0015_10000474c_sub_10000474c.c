/* sub_10000474c @ 0x10000474c
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x10000474c  (158 bytes, 14 basic blocks)
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
    unsigned long long field_0;
    char padding_8[8];
    struct struct_1 *field_10;
    char padding_18[32];
    char field_38;
    char padding_39[15];
    char field_48;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned int g_100007790;
extern struct_0 *g_1000077b0;
extern unsigned long long g_100007890;

void sub_10000474c(void)
{
    unsigned long v5;  // rax
    struct_0 *v6;  // rbx
    unsigned int v7;  // edi
    unsigned int v8;  // r14d
    unsigned int v1;  // [bp+0x20]
    char *v2;  // [bp+0x28]
    char v3;  // [bp+0x30], Other Possible Types: unsigned long

    g_100007890 = v5;
    if (v5 != vvar_26{r56|8b})
    {
        v2 = &v3;
        v1 = vvar_26{r56|8b};
        4296016216();
    }
    v6 = g_1000077b0;
    if (g_1000077b0 != vvar_26{r56|8b})
    {
        v7 = vvar_26{r56|8b};
        while (v6->field_0 != vvar_26{r56|8b} && v7 == vvar_26{r56|8b})
        {
            v3 = vvar_26{r56|8b};
            if (v6->field_10 != vvar_26{r56|8b})
                v6->field_10();
            v7 = vvar_26{r56|8b};
            v6 = (g_100007790 == v8 ? (struct struct_0 *)&v6->field_38 : (struct struct_0 *)&v6->field_48);
        }
    }
    4296016336();
}
