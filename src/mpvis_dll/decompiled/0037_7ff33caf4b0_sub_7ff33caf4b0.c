/* sub_7ff33caf4b0 @ 0x7ff33caf4b0
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33caf4b0  (349 bytes, 20 basic blocks)
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

typedef struct struct_1 {
    char padding_0[28];
    unsigned int field_1c;
    char padding_20[4];
    unsigned int field_24;
    char padding_28[16];
    struct struct_0 *field_38;
} struct_1;

typedef struct struct_0 {
    char padding_0[48];
    unsigned int field_30;
    char padding_34[116];
    unsigned long long field_a8;
} struct_0;

int sub_7ff33caf4b0(void)
{
    unsigned int v4;  // r8d
    unsigned long v5;  // rsi
    unsigned long long v13;  // r14
    void* cur;  // rbx
    unsigned long long iter;  // rdi
    unsigned long long v16;  // r15
    unsigned int v17;  // r15d
    unsigned int v18;  // r15d
    unsigned long long node;  // rbp
    struct_1 *ptr;  // rcx
    unsigned int v7;  // ecx
    unsigned int v8;  // r9d
    unsigned long v9;  // r14
    unsigned long long v10;  // r12
    unsigned long long v11;  // r13
    unsigned long v12;  // rdx
    unsigned int v1;  // [bp+0x10]
    unsigned long long v2;  // [bp+0x18]
    unsigned int v3;  // [bp+0x28]

    v5 = v4;
    v7 = ptr->field_38->field_30;
    v9 = v8;
    v10 = 1;
    v11 = v3 - v5;
    node = v12 & 4294967295;
    v1 = v7;
    v3 = 1;
    v13 = v9 - v12;
    cur = ptr->field_38->field_a8 + ((unsigned int)v5 * v7 + (unsigned int)v12) * 4;
    if ((unsigned int)((v9 & 4294967295) - v12) < 0)
    {
        v13 = -((unsigned int)v13);
        v10 = 4294967295;
    }
    if ((unsigned int)v11 < 0)
    {
        v11 = -((unsigned int)v11);
        v3 = 4294967295;
        v1 = -(v7);
    }
    iter = 0;
    v2 = v16;
    if ((unsigned int)v13 > (unsigned int)v11)
    {
        v17 = v13;
        ptr->field_1c = (unsigned int)v13 / ptr->field_24;
        if ((unsigned int)v13 <= 0)
            return;
        do
        {
            sub_7ff33caf614(ptr, cur, node & 4294967295, v5 & 4294967295);
            iter += v11;
            if ((unsigned int)iter > (unsigned int)v13)
            {
                iter -= v13;
                v5 = (unsigned int)v5 + v3;
                cur += (v1 + (unsigned int)v10) * 4;
            }
            else
            {
                cur += (int)v10 * 4;
            }
        } while ((v17 -= 1, node += v10, v17 > 0));
        return;
    }
    else
    {
        v18 = v11;
        ptr->field_1c = (unsigned int)v11 / ptr->field_24;
        if ((unsigned int)v11 <= 0)
            return;
        do
        {
            sub_7ff33caf614(ptr, cur, node & 4294967295, v5 & 4294967295);
            iter += v13;
            if ((unsigned int)iter > (unsigned int)v11)
            {
                iter -= v11;
                node += v10;
                cur += (v1 + (unsigned int)v10) * 4;
            }
            else
            {
                cur += v1 * 4;
            }
        } while ((v5 = (unsigned long)(unsigned long long)((unsigned int)v5 + v3), v18 -= 1, v18 > 0));
        return;
    }
}
