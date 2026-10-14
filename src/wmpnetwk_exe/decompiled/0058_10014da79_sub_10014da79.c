/* sub_10014da79 @ 0x10014da79
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x10014da79  (348 bytes, 60 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 306467d280e99d0616e839278a4db5bed684f002ae284c3678cabb5251459cb3
 *   Evidence: analysis/report/rea-evidence/wmpnetwk_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[19];
    char field_13;
} struct_0;

typedef struct struct_1 {
    char field_0;
    char padding_1[18];
    char field_13;
} struct_1;

typedef struct struct_2 {
    char field_0;
    char padding_1[18];
    char field_13;
} struct_2;


int sub_10014da79(void* a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, char a5)
{
    void* v5;  // rax
    char v6;  // dl
    void* v14;  // rcx
    unsigned long v7;  // cc_ndep
    unsigned long v8;  // 4119
    char addr[805311359];  // rdx
    unsigned long v9;  // 4130
    unsigned long long v10;  // cc_ndep
    void* p;  // rax
    unsigned long v12;  // 4142
    unsigned long v13;  // 4106
    unsigned long long v1;  // [bp-0x8]

    v1 = a1;
    v6 = _INSERT(a1, 1, *((char *)((void*)&a1 + 1)) + (char)v5[108]);
    v8 = _ccall(1, (unsigned long long)*((char *)((void*)&a1 + 1)), (unsigned long long)(char)(char)v5[108], v7);
    v9 = _ccall(0, v8 & 0x800 | v5 >> 8 & 213, 0, 0);
    v10 = v9 & 1;
    p = (void*)_INSERT(v5, 0, *((char *)&v5) + *((char *)v5) + ((char)v9 & 1));
    v12 = _ccall(0, 9, (unsigned long long)*((char *)(void*)&v5), (unsigned long long)(char)(*((char *)v5) ^ (char)v9 & 1), v9 & 1);
    addr = (char [805311359])_INSERT(v6, 0, v6 + *((char *)&p));
    v13 = _ccall(8, 1, (unsigned long long)v6, (unsigned long long)*((char *)(void*)&p), v10);
    v14 = a0;
    if ((char)v13)
        goto LABEL_0x10014dade;
    else
        goto LABEL_0x10014dacb;
}
