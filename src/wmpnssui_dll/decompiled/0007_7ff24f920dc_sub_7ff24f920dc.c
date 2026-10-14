/* sub_7ff24f920dc @ 0x7ff24f920dc
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f920dc  (237 bytes, 22 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 28d793e5077afb34b57fd3ac404413a60f06a3985fcc4aa16cccb8525411f8bb
 *   Evidence: analysis/report/rea-evidence/wmpnssui_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[12];
    unsigned long long field_c;
    unsigned long long field_14;
} struct_0;

unsigned int sub_7ff24f920dc(struct_0 *a0, unsigned long long a1, long long a2, unsigned long long *p)
{
    struct_0 *ptr;  // rdx
    unsigned long long v2;  // r8
    unsigned long long v11;  // cc_dep2
    unsigned int v12;  // eax
    unsigned long v13;  // 4131
    unsigned long long v3;  // cc_dep2
    unsigned int v4;  // eax
    unsigned long v5;  // 4131
    unsigned long long v6;  // r8
    unsigned long long v7;  // cc_dep2
    unsigned int v8;  // eax
    unsigned long v9;  // 4131
    unsigned long long v10;  // rcx

    *(p) = 0;
    if (a1)
        return 2147746064;
    ptr = &(&a0->padding_0)[1];
    v2 = *((long long *)&ptr->padding_0[0]);
    v3 = 5338603617519159685;
    if (*((long long *)&ptr->padding_0[0]) == 5338603617519159685 && !((v2 = (unsigned long long)*((long long *)&ptr->padding_0[8]), v3 = 17838955647187245246, *((long long *)&ptr->padding_0[8]) != 17838955647187245246)))
    {
        v4 = 0;
    }
    else
    {
        v5 = _ccall(15, 0, (unsigned long long)(char)(v2 < v3), (unsigned long long)(char)(v2 < v3));
        v4 = -(v2 < v3) + 1 - ((unsigned int)v5 & 1);
    }
    if (!v4)
        sub_7ff24f92bdc(0, a2, p); /* do not return */
    v6 = *((long long *)&ptr->padding_0[0]);
    v7 = 4638519181553888299;
    if (*((long long *)&ptr->padding_0[0]) == 4638519181553888299 && !((v6 = (unsigned long long)*((long long *)&ptr->padding_0[8]), v7 = 13825856503133126319, *((long long *)&ptr->padding_0[8]) != 13825856503133126319)))
    {
        v8 = 0;
    }
    else
    {
        v9 = _ccall(15, 0, (unsigned long long)(char)(v6 < v7), (unsigned long long)(char)(v6 < v7));
        v8 = -(v6 < v7) + 1 - ((unsigned int)v9 & 1);
    }
    if (!v8)
        8792418377186();
    v10 = *((long long *)&ptr->padding_0[0]);
    v11 = 4796355653914073728;
    if (*((long long *)&ptr->padding_0[0]) == 4796355653914073728 && !((v10 = (unsigned long long)*((long long *)&ptr->padding_0[8]), v11 = 7469309768978026406, *((long long *)&ptr->padding_0[8]) != 7469309768978026406)))
    {
        v12 = 0;
    }
    else
    {
        v13 = _ccall(15, 0, (unsigned long long)(char)(v10 < v11), (unsigned long long)(char)(v10 < v11));
        v12 = -(v10 < v11) + 1 - ((unsigned int)v13 & 1);
    }
    if (v12)
        return 2147746065;
    8792418377186();
}
