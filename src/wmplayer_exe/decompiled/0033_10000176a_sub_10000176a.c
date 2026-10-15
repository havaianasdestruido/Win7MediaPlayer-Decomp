/* sub_10000176a @ 0x10000176a
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x10000176a  (12 bytes, 4 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 883d9616dfc7586fa88c58013f70e055df9328f3cfc3ef39898c15c6970fb0db
 *   Evidence: analysis/report/rea-evidence/wmplayer_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

void sub_10000176a(void)
{
    unsigned long v1;  // cc_op
    unsigned long v2;  // cc_dep1
    char *v11;  // rsi
    unsigned long v3;  // cc_dep2
    unsigned long v4;  // cc_ndep
    unsigned long v5;  // 4119
    void* ptr;  // rax
    char v7;  // 4109
    unsigned long v8;  // 4140
    unsigned long v9;  // 4101
    char *p;  // rdi

    v5 = _ccall(v1, v2, v3, v4);
    *((unsigned int *)ptr) = *((int *)ptr) * 2 | *((int *)ptr) >> 31;
    *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
    v7 = *((char *)ptr);
    *((char *)ptr) = v7 + *((char *)&ptr);
    v8 = _ccall(6, 1, (unsigned long long)v7, (unsigned long long)*((char *)(void*)&ptr), v5);
    if ((char)v8)
    {
        v9 = _ccall(0, 1, (unsigned long long)v7, (unsigned long long)*((char *)(void*)&ptr), v5);
        if ((char)v9)
            goto LABEL_1000017e0;
        else
            goto LABEL_0x100001774;
    }
    else
    {
        [D] Unsupported jumpkind Ijk_NoDecode at address 4294973407()
    }
LABEL_1000017e0:
    *(p) = *(v11);
}
