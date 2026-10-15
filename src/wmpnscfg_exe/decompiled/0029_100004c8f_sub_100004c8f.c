/* sub_100004c8f @ 0x100004c8f
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100004c8f  (150 bytes, 13 basic blocks)
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

long long sub_100004c8f(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned short **a12, unsigned long a13, unsigned long a14)
{
    unsigned int v2;  // eax
    long long v3;  // rbx
    long long v4;  // rsi
    unsigned short *v5;  // rsi
    unsigned long v1;  // [bp+0x98]

    if (v2)
    {
        if (v3 + 8 < L"HKEY_CURRENT_CONFIG")
            goto LABEL_0x100004c83;
        v1 = a14;
        sub_100004790(&v1, v4); /* do not return */
    }
    if (!vvar_18{r56|4b})
        goto LABEL_0x100004d00;
    if (sub_1000049b8(a12, v5) < 0)
        goto LABEL_0x100005441;
    if (sub_1000046e8(a12, v5) < 0)
        goto LABEL_0x100005441;
    if (*(v5) == 123)
        4296016672();
    if (*(v5) == 125)
        goto LABEL_0x100005441;
}
