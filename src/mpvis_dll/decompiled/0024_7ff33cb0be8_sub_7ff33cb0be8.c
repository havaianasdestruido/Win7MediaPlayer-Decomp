/* sub_7ff33cb0be8 @ 0x7ff33cb0be8
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb0be8  (304 bytes, 24 basic blocks)
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
    char padding_0[56];
    char field_38;
} struct_0;

int sub_7ff33cb0be8(void)
{
    struct_0 *v2;  // rdx
    struct_0 *v3;  // rsi
    void* ptr;  // rcx
    unsigned long long flag;  // rdx
    void* v6;  // rcx
    void* v7;  // rdi
    void* v8;  // rdi
    unsigned long long v9;  // rbp
    unsigned long long i;  // rbp
    unsigned long long v11;  // rbp
    char v0;  // [bp-0x28]

    v3 = v2;
    if (!(long long)ptr[112])
    {
        flag = 0;
        (*((long long *)(*((long long *)ptr) + 32)))();
    }
    *((char *)&ptr[1312]) = !v2->field_38;
    if (!*((long long *)((long long)ptr[1296] + 8)))
    {
        v6 = ptr;
        (*((long long *)(*((long long *)ptr) + 64)))();
    }
    if (*((char *)((long long)ptr[1296] + 16)) && (long long)ptr[112])
    {
        sub_7ff33cb1454(ptr);
        goto LABEL_7ff33cb0ce2;
    }
    else if ((char)ptr[1313] && (char)sub_7ff33cb12c8(ptr))
    {
        v7 = ((int)ptr[1316] * 3 + 15) * 16 + ptr;
    }
    else
    {
        if ((long long)ptr[128] && *((long long *)((long long)ptr[1304] + 8)))
        {
            if ((char)ptr[1312] && !(long long)ptr[248])
            {
                v8 = ptr + 240;
                v9 = 22;
                do
                {
                    i = v9;
                    sub_7ff33cb0850(v8, (int)ptr[8], (int)ptr[12]);
                    v8 += 48;
                    v11 = i - 1;
                    v9 = v11;
                } while (i != 1);
            }
            sub_7ff33cb15e0(ptr);
        }
LABEL_7ff33cb0ce2:
        v7 = (long long)ptr[1296];
    }
    if (!v7)
        return;
    sub_7ff33cad844(&v0, 10); /* do not return */
}
