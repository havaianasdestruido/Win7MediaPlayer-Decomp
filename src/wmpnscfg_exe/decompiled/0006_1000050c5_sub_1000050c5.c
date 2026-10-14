/* sub_1000050c5 @ 0x1000050c5
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x1000050c5  (330 bytes, 23 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 10888bb9c3799e1e8b010c0f9088ced376aad63a509fce1727c457b022cdc717
 *   Evidence: analysis/report/rea-evidence/wmpnscfg_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

long long sub_1000050c5(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long flag7, unsigned long flag6, unsigned long flag5, unsigned long flag4, unsigned long flag3, unsigned long flag2, unsigned long choice, unsigned long flag, long long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned int a21)
{
    unsigned int v3;  // eax
    unsigned short *v4;  // rsi
    char *v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x2330]

    if (v3)
    {
        if (v3 == 12)
        {
            4294991632();
        }
        else if (!(v3 != 22 && v3 != 34))
        {
            4294991632();
        }
        else if (v3 != 80)
        {
            4294991632();
        }
    }
    if ((int)sub_1000049b8(a12, v4) < 0)
        goto LABEL_0x100005441;
    if ((int)sub_1000046e8(a12, v4) < 0)
        goto LABEL_0x100005441;
    if (*(v4) == 123)
        4296016672();
    v2 = a21;
    if (vvar_36{r56|4b} == 2)
        goto LABEL_0x100005332;
    if (vvar_36{r56|4b})
    {
        if (!a21)
            sub_1000049a4(vvar_36{r56|4b});
    }
    else
    {
        if (a21)
        {
            flag = 0;
            choice = 0;
            flag2 = 0;
            flag3 = 0;
            flag4 = 0;
            flag5 = 0;
            flag6 = 0;
            flag7 = 0;
            v1 = &flag;
            4296016264();
        }
        flag = 0;
        choice = 0;
        flag2 = 0;
        flag3 = 0;
        flag4 = 0;
        flag5 = 0;
        flag6 = 0;
        flag7 = 0;
        v1 = &flag;
        4296016264();
    }
}
