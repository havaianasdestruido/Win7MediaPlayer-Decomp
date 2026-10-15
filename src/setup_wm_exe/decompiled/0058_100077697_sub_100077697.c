/* sub_100077697 @ 0x100077697
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100077697  (350 bytes, 30 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): f069226052de289452ef5ff9dd67557193c15308c5351bc7b70b6692b350951b
 *   Evidence: analysis/report/rea-evidence/setup_wm_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[56];
    struct struct_1 *field_38;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

extern long long g_1000062c0;

int sub_100077697(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, long long a9, unsigned long a10, long long a11)
{
    long long v2;  // rax
    long long v3;  // r14
    long long v4;  // rdi
    struct_0 *v5;  // rsi
    unsigned short v1;  // [bp+0x3c]

    if (v2 == v3)
        goto LABEL_0x1000778b7;
    v4 = v2 + 2;
    if (!v2 + 2)
        goto LABEL_0x1000778b7;
    if ((char)sub_10007d3c0(v4, "v") == (char)v3)
        if ((char)sub_10007d3c0(v4, "i") == (char)v3)
            goto LABEL_0x1000778b7;
        else
            goto LABEL_1000776d9;
LABEL_1000776d9:
    a6 = v3;
    v1 = v3;
    sub_10007d4d0(&vvar_47{r128|8b}, &v5->field_38);
    sub_10007d40c(&a11);
    if ((int)sub_10007578c(v5, &a11) >= (int)v3 && (int)sub_100075804(v5, &g_1000062c0) >= (int)v3)
    {
        sub_10007d40c(&a9);
        if ((int)sub_100075298(v5, 0, &a9) < (int)v3)
        {
            sub_10007d970(&a9);
        }
        else if (sub_10007756c(a9) != (int)v3)
        {
            sub_100075ea0(v5, vvar_47{r128|8b});
            sub_10007d970(&a9);
            sub_10007d970(&a11);
            sub_10007d970(&vvar_47{r128|8b});
        }
        else if (a11 != v3)
        {
            4298115392();
        }
        else
        {
            return sub_1000777d9();
        }
    }
    sub_10007d970(&a11);
}
