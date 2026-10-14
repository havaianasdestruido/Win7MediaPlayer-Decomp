/* sub_100002f93 @ 0x100002f93
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100002f93  (129 bytes, 10 basic blocks)
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

long long sub_100002f93(void)
{
    unsigned int v1;  // eax
    unsigned short *v2;  // rbx
    unsigned short v11;  // r13w
    unsigned int v12;  // edi
    unsigned int v13;  // r14d
    void* *v14;  // rsi
    unsigned short *v3;  // r11
    unsigned int v4;  // edi
    unsigned int v5;  // edi
    unsigned long v6;  // cc_ndep
    unsigned long v7;  // 4114
    unsigned short *ptr;  // rbx
    unsigned int v9;  // edi
    unsigned int v10;  // edi

    v3 = v1 + (char *)v2;
    v5 = v4 & 15;
    v7 = _ccall(6, 19, (unsigned long long)(v4 & 15), 0, v6);
    if (!((char)v7))
    {
        do
        {
            v9 = v5;
        } while ((v10 = v9 - 1, ptr = ptr + (unsigned long long)*(ptr) * 2 + 2, v5 = v9 - 1, v9 + 4294967295));
    }
    if (ptr >= v3)
        goto LABEL_0x10000307a;
    if (*(ptr) == v11)
        goto LABEL_0x10000307a;
    v12 = *(ptr);
    if ((v13 - (int)(*(v14))[8] | (int)(*(v14))[12] - v12) < 0)
        sub_100005c94(v14, v12 & 65535);
    if (*(ptr) != 4294967295)
        4294998610();
    4296016672();
}
