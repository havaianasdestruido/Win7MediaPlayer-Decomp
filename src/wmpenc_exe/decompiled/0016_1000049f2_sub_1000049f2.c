/* sub_1000049f2 @ 0x1000049f2
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x1000049f2  (126 bytes, 14 basic blocks)
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
    struct struct_1 *field_0;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned long long g_1000077c0;
extern char g_100007850;
extern char g_100007860;
extern unsigned long long g_100007868;
extern struct_0 *g_100007878;

void sub_1000049f2(void)
{
    unsigned int v2;  // eax
    struct_0 *v3;  // rdi
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rdi
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rbx
    unsigned long v8;  // r13
    unsigned long long v9;  // rbx

    if (v2 != vvar_30{r56|8b})
        4296016184();
    v3 = g_100007878;
    if (g_100007878 != vvar_30{r56|8b})
    {
        v4 = g_100007878->field_8;
        g_100007878->field_0();
    }
    if (g_1000077c0 != vvar_30{r56|8b} && g_100007850 != (char)vvar_30{r56|8b})
    {
        if (g_100007868 != vvar_30{r56|8b})
        {
            v5 = vvar_30{r56|8b} & 4294967295;
            v6 = vvar_30{r56|8b};
            do
            {
                v7 = v6;
                if (*((long long *)(v7 + g_100007868)) != vvar_30{r56|8b})
                    4296016080();
            } while ((v5 = (unsigned long long)(v5 + v8), v9 = v7 + 8, v6 = v7 + 8, (unsigned int)v5 <= *((int *)&g_100007860)));
        }
        4296016080();
    }
    4296016576();
}
