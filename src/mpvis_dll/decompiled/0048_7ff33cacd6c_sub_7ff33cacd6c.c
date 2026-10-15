/* sub_7ff33cacd6c @ 0x7ff33cacd6c
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cacd6c  (213 bytes, 18 basic blocks)
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

typedef struct struct_0 {
    char padding_0[3521];
    char field_dc1;
} struct_0;

typedef struct struct_1 {
    char padding_0[3523];
    char field_dc3;
} struct_1;

typedef struct struct_4 {
    char padding_0[2417];
    char field_971;
} struct_4;

int sub_7ff33cacd6c(void)
{
    unsigned short v1;  // dx
    unsigned int v2;  // r8d
    struct_1 *ptr;  // rcx
    long long v11;  // rcx
    uint128_t flag;  // xmm0
    void* p;  // rcx
    unsigned long long v14;  // rax
    void* v15;  // rcx
    struct_4 *addr;  // rcx
    unsigned int v3;  // r8d
    unsigned int v4;  // r8d
    unsigned int v5;  // r8d
    unsigned int v6;  // r8d
    long long v7;  // rcx
    long long v8;  // r9
    struct_0 *ptr3;  // rcx

    v2 = v1;
    v3 = v2 - 32;
    if (v2 == 32)
    {
        addr->field_971 = !addr->field_971;
        return;
    }
    v4 = v3 - 4;
    if (v3 != 4)
    {
        v5 = v4 - 41;
        if (v4 != 41)
        {
            v6 = v5 - 28;
            if (v5 == 28)
            {
                ptr->field_dc3 = !ptr->field_dc3;
                return;
            }
            else if (v6 == 3)
            {
                ptr3->field_dc1 = !ptr3->field_dc1;
                return;
            }
            else if (v6 == 4)
            {
                v7 = v11 + 3392;
                v8 = 0;
            }
            else
            {
                return;
            }
        }
        else
        {
            v7 = v11 + 3392;
            v8 = 1;
        }
        sub_7ff33cae050(v7, 3, 0, v8);
        return;
    }
    flag = 0;
    if (((char)((CmpF((long long)p[3512], 0x3ff0000000000000) & 69) >> 2) & 1) || (v14 = 0x3fe8000000000000, ((char)(CmpF((long long)p[3512], 0x3ff0000000000000)) & 64)))
        v14 = 0x3ff0000000000000;
    *((unsigned long long *)&p[3512]) = v14;
    v15 = p - 8;
    (*((long long *)((long long)p[8] + 144)))();
}
