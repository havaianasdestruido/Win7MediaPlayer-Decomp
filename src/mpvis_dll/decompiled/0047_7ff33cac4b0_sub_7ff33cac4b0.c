/* sub_7ff33cac4b0 @ 0x7ff33cac4b0
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cac4b0  (239 bytes, 18 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 5b1cf8de17dc039349e1af0bc0d728e3de3c0a96d9c50e81fc909b8ceb4927e0
 *   Evidence: analysis/report/rea-evidence/mpvis_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_4 {
    char padding_0[4096];
    unsigned int field_1000;
} struct_4;

int sub_7ff33cac4b0(void)
{
    unsigned long long flag;  // rdi
    struct_4 *v3;  // rdx
    struct_4 *v4;  // rsi
    void* ptr;  // rcx
    unsigned long long v6;  // rdx
    unsigned int v7;  // r8d
    unsigned long v8;  // 4114
    void* v9;  // rcx
    unsigned long v10;  // r8
    struct_4 *v11;  // rdx
    char v0;  // [bp-0x38]

    flag = 0;
    v4 = v3;
    if ((char)ptr[3340])
    {
        v6 = (long long)ptr[3352];
        (*((long long *)(*((long long *)ptr) + 120)))();
    }
    if (!(char)ptr[109])
    {
        if (v3->field_1000 == 2)
            *((char *)&ptr[109]) = 1;
        else
            sub_7ff33cac6a0(ptr - 192); /* do not return */
    }
    if (!(char)ptr[108] && (v7 || v3->field_1000 && v3->field_1000 != 1))
    {
        v8 = (char)ptr[88];
        *((char *)&ptr[108]) = 1;
        if (!(char)v8)
            sub_7ff33cad844(&v0, 0); /* do not return */
        v9 = ptr - 192;
        v10 = v7;
        v11 = v3;
        (*((long long *)((long long)ptr[192] + 152)))();
    }
    if (!(char)ptr[3297])
    {
        return;
    }
    else if (!(char)ptr[88])
    {
        sub_7ff33cac6a0(ptr - 192); /* do not return */
    }
    else if ((char)sub_7ff33cab75c(ptr - 192))
    {
        sub_7ff33cac6a0(ptr - 192); /* do not return */
    }
    else
    {
        return;
    }
}
