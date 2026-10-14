/* sub_100004e84 @ 0x100004e84
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100004e84  (167 bytes, 12 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 395fce3d66ab1ed9a4fb2238172eaefc5cf78fc7a8b34c30686d638d16d9efca
 *   Evidence: analysis/report/rea-evidence/wmprph_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

long long sub_100004e84(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9)
{
    unsigned int v1;  // eax
    unsigned long v2;  // rbx
    unsigned long long v3;  // rsi
    unsigned long v4;  // r12
    long long v5;  // r8
    long long v6;  // r13

    v3 = -(0 < v1) & v2;
    if (*((long long *)(v4 - 56)) && *((long long *)(v4 - 56)) != v3)
        4296016808();
    if (!v3)
        return vvar_35{r56|4b};
    if (*((long long *)(v4 - 56)) != v3)
        sub_100009f0c(v4 - 64, v3); /* do not return */
    v5 = _INSERT(a2, 0, vvar_39{r56|1b});
    if (sub_100006514(v4 - 64, v6, v5, 0) >= 0)
        return vvar_35{r56|4b};
    sub_1000043c0(v4 - 64);
    if (!*((long long *)(v4 - 56)))
        return vvar_35{r56|4b};
    4296016808();
}
