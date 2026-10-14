/* sub_7ff33caca35 @ 0x7ff33caca35
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33caca35  (169 bytes, 17 basic blocks)
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
    char padding_0[16];
    struct struct_5 *field_10;
} struct_4;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

int sub_7ff33caca35(void)
{
    unsigned long long v2;  // rdi
    unsigned long long v3;  // r12
    void* ptr;  // rbx
    struct_4 **v5;  // rcx
    struct_2 **v6;  // rcx
    void* v7;  // rcx
    char v1;  // [bp+0x38]

    if (v2 != v3 && (char)ptr[176] == (char)v3)
    {
        if ((char)ptr[88] != (char)v3)
        {
            v5 = (long long)ptr[80];
            if ((long long)ptr[80] != v3)
                (*((long long *)(*((long long *)(long long)ptr[80]) + 16)))();
            v6 = (long long)ptr[72];
            if ((long long)ptr[72] != v3)
                (*((long long *)(*((long long *)(long long)ptr[72]) + 16)))();
            *((char *)&ptr[88]) = v3;
        }
        if (*((long long *)((long long)ptr[2288] + 168)) == v3)
        {
            v7 = ptr - 192;
            (*((long long *)((long long)ptr[192] + 144)))();
        }
        else if (*((long long *)((long long)ptr[2288] + 168)) != v3 && *((long long *)((long long)ptr[2296] + 168)) != v3 && *((long long *)((long long)ptr[0x900] + 168)) != v3)
        {
            sub_7ff33cb5ea4(); /* do not return */
        }
    }
    sub_7ff33cad738(&v1); /* do not return */
}
