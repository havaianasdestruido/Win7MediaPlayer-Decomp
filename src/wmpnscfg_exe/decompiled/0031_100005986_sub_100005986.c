/* sub_100005986 @ 0x100005986
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100005986  (130 bytes, 13 basic blocks)
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

int sub_100005986(void)
{
    unsigned long v5;  // rbx
    unsigned long v6;  // rax
    long long v7;  // r12
    long long v8;  // rdi
    unsigned int v1;  // [bp+0x20]
    char v2;  // [bp+0x30]
    char v3;  // [bp+0x80]
    char v4;  // [bp+0x290]

    if (v5 == v6)
        goto LABEL_0x100005995;
    if (sub_100003be4(&v2, L"Module") < (int)v7)
        goto LABEL_0x100005a80;
    if (sub_100003be4(&v2, L"Module_Raw", &v4) < (int)v7)
        goto LABEL_0x100005a80;
    if (vvar_15{r56|4b} != (int)v7)
    {
        if (v8 != v7)
            v1 = 1;
    }
    else
    {
        if (v8 != v7)
            v1 = v7;
    }
    sub_100005634(&v2, &v3, v8, L"REGISTRY"); /* do not return */
}
