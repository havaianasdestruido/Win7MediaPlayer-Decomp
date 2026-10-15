/* sub_7ff33cbfbdc @ 0x7ff33cbfbdc
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cbfbdc  (518 bytes, 22 basic blocks)
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
    unsigned long long field_0;
} struct_0;

extern struct_0 *g_7ff33ccd6a0;

void* sub_7ff33cbfbdc(void* a0, void* a1, unsigned long long a2, unsigned long long a3, unsigned int a4, unsigned int a5, unsigned long long *p, void* *ptr, char *a8, unsigned int a9, unsigned int *a10)
{
    unsigned long v7;  // rdi
    void* v8;  // rax
    void* v16;  // r15
    void* v17;  // r15
    void* v18;  // r15
    unsigned long long v9;  // r12
    void* v10;  // rax
    void* v11;  // rbp
    void* cur;  // rbp
    unsigned long long v13;  // rcx
    void* v14;  // rax
    unsigned long long v15;  // rcx
    void* v0;  // [bp-0x398], Other Possible Types: unsigned int
    unsigned long long v1;  // [bp-0x390]
    unsigned long long v2;  // [bp-0x380]
    void* v3;  // [bp+0x8]
    void* iter;  // [bp+0x10]
    unsigned long long v5;  // [bp+0x18]
    unsigned long long v6;  // [bp+0x20]

    v6 = a3;
    v5 = a2;
    v3 = a0;
    v7 = a5;
    v8 = a1;
    v9 = 0;
    v1 = a9 * 12;
    if (!v8)
        v10 = a0;
    else
        v10 = v8;
    iter = v10;
    if (a9 == 2)
    {
        v10 = (void*)_INSERT(v10, 0, *(a8));
        if (!*(a8) && a8[1] == 3)
        {
            v9 = *(p);
            iter = *(ptr);
            v11 = ptr[1];
        }
        else
        {
            if (a8[1] || *((char *)&v10) != 3)
                goto LABEL_7ff33cbfca4;
            v9 = p[1];
            iter = ptr[1];
            v11 = *(ptr);
        }
    }
    else
    {
LABEL_7ff33cbfca4:
        v11 = iter;
    }
    cur = v11;
    v13 = v1 != v7;
    v2 = v13;
    if (v9)
    {
        v14 = a4;
        if ((unsigned int)v14 <= 0)
            return v14;
        v0 = v14;
        v15 = v13;
        v16 = v14;
        while (true)
        {
            v17 = v16;
            if (v15)
                8792667066888();
            memset(iter, 0, 12);
            memset(cur, 0, 12);
            if (!(CmpF(*(a10), 0) & 1))
                g_7ff33ccd6a0();
            iter += v7;
            cur += v7;
            a10 += 1;
            v18 = v17 - 1;
            v0 = v18;
            v15 = v2;
            v16 = v18;
            if (v17 == 0x1)
                return v14;
        }
    }
    else
    {
        v0 = 0;
        if (a4 <= 0)
            return v10;
        8792667066900();
    }
}
