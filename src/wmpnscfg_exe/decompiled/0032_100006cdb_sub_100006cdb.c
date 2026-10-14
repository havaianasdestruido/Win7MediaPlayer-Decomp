/* sub_100006cdb @ 0x100006cdb
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100006cdb  (116 bytes, 13 basic blocks)
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

char sub_100006cdb(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, char *a9)
{
    unsigned int v2;  // eax
    unsigned short *v3;  // rdi
    unsigned short *v4;  // rsi
    unsigned short *v5;  // rdi
    unsigned long long v6;  // rdi
    long long v7;  // rbx
    unsigned short *v8;  // r12
    unsigned short *v9;  // rdi
    char v1;  // [bp+0x58]

    if (v2 == (unsigned int)v3)
        goto LABEL_0x100006d4f;
    if (v4 != v3)
    {
        v5 = v4;
        do
        {
            if (false)
                break;
        } while (*(v5));
        v6 = ~(18446744073709551615) - 1 & 4294967295;
    }
    sub_100005ce4(v7 + 96, v4, v6 & 4294967295);
    v9 = v8;
    do
    {
        if (false)
            break;
    } while (*(v9));
    sub_100005ce4(v7 + 88, v8, ~(18446744073709551615) - 1 & 4294967295);
    sub_100005ce4(v7 + 112, 0, 0);
    if (a9 != &v1)
        4294984236();
}
