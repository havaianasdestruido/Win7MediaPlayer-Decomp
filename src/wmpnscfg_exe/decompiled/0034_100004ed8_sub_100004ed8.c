/* sub_100004ed8 @ 0x100004ed8
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100004ed8  (160 bytes, 12 basic blocks)
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

int sub_100004ed8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long flag)
{
    unsigned int v3;  // eax
    unsigned long long v4;  // rdi
    unsigned short *v5;  // rsi
    char *v1;  // [bp+0x20]
    unsigned long v2;  // [bp+0x80]

    if (!v3)
    {
        if (v4)
            4296016320();
        v2 = flag;
        if (sub_1000049b8(vvar_25{r56|8b}, v5) < 0)
            goto LABEL_0x100005441;
        if (*(v5) != 61)
            goto LABEL_0x100004fd7;
    }
    flag = 0;
    v1 = &flag;
    4296016248();
}
