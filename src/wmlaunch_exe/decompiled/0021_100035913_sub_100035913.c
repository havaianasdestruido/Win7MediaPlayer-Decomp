/* sub_100035913 @ 0x100035913
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100035913  (350 bytes, 30 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 8ea713b95f32c31a11bb1dded4cc8b9620014600f122fff3852c082d9af67b1b
 *   Evidence: analysis/report/rea-evidence/wmlaunch_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[56];
    struct struct_1 *field_38;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

extern long long g_100023cf8;

int sub_100035913(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, long long a9, unsigned long a10, long long a11)
{
    long long v2;  // rax
    long long v3;  // r14
    long long v4;  // rdi
    struct_0 *v5;  // rsi
    unsigned short v1;  // [bp+0x3c]

    if (v2 == v3)
        goto LABEL_0x100035b33;
    v4 = v2 + 2;
    if (!v2 + 2)
        goto LABEL_0x100035b33;
    if ((char)sub_10002fba4(v4, "v") == (char)v3)
        if ((char)sub_10002fba4(v4, "i") == (char)v3)
            goto LABEL_0x100035b33;
        else
            goto LABEL_100035955;
LABEL_100035955:
    a6 = v3;
    v1 = v3;
    sub_10002fcb4(&vvar_47{r128|8b}, &v5->field_38);
    sub_10002fbf0(&a11);
    if ((int)sub_100033834(v5, &a11) >= (int)v3 && (int)sub_1000338ac(v5, &g_100023cf8) >= (int)v3)
    {
        sub_10002fbf0(&a9);
        if ((int)sub_100033340(v5, 0, &a9) < (int)v3)
        {
            sub_100030020(&a9);
        }
        else if (sub_1000357e8(a9) != (int)v3)
        {
            sub_100033f48(v5, vvar_47{r128|8b});
            sub_100030020(&a9);
            sub_100030020(&a11);
            sub_100030020(&vvar_47{r128|8b});
        }
        else if (a11 != v3)
        {
            4296016752();
        }
        else
        {
            return sub_100035a55();
        }
    }
    sub_100030020(&a11);
}
