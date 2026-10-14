/* sub_10000353d @ 0x10000353d
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x10000353d  (116 bytes, 10 basic blocks)
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

void sub_10000353d(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned short a4)
{
    unsigned long v4;  // rbx
    unsigned long v5;  // rax
    unsigned int v6;  // r12d
    unsigned int v1;  // [bp+0x20]
    char v2;  // [bp+0x30]
    char v3;  // [bp+0x290]

    if (v4 == v5)
        goto LABEL_0x10000354c;
    if (sub_100003be4(&v2, L"Module") < v6)
        goto LABEL_0x100003627;
    if (sub_100003be4(&v2, L"Module_Raw", &v3) < v6)
        goto LABEL_0x100003627;
    if (vvar_8{r56|4b} != v6)
        v1 = 1;
    else
        v1 = v6;
    sub_100005634(); /* do not return */
}
