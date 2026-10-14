/* sub_100005ce4 @ 0x100005ce4
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100005ce4  (163 bytes, 10 basic blocks)
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

void sub_100005ce4(void* *ptr, unsigned long long a1, unsigned int a2)
{
    void* v1;  // rax

    if (!a2)
    {
        sub_100005b14();
        return;
    }
    if (!a1)
        4294991632();
    v1 = *(ptr);
    if ((1 - (int)v1[8] | (int)v1[12] - a2) < 0)
        sub_100005c94(ptr, a2);
    if (a1 - v1 >> 1 > (int)v1[16])
        4294998610();
    4294998622();
}
