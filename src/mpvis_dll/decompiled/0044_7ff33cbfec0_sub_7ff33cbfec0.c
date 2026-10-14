/* sub_7ff33cbfec0 @ 0x7ff33cbfec0
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cbfec0  (339 bytes, 18 basic blocks)
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

typedef struct struct_2 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 *g_7ff33ccd680;
extern struct_1 *g_7ff33ccd6a0;

long long sub_7ff33cbfec0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned int a5, unsigned long a6, unsigned long a7, unsigned long long a8, unsigned long a9, unsigned long a10, int a11)
{
    unsigned int v5;  // ebp
    unsigned int *v6;  // rbx
    unsigned long v15;  // r14
    unsigned int *v7;  // rbx
    unsigned long i;  // r10
    unsigned int v9[3];  // r8
    struct_2 **v10;  // r15
    struct_2 **p;  // rdx
    unsigned int ptr[3];  // rcx
    unsigned int v13[3];  // r8
    unsigned long v14;  // rdi
    unsigned int v1;  // [bp+0x3f0]
    unsigned int flag;  // [bp+0x3f8]
    char *v3;  // [bp+0x410]
    unsigned int v4;  // [bp+0x418]

    v5 = vvar_90{r56|4b};
    if (!(CmpF(*(v6), 0) & 1))
    {
        do
        {
            flag = 0;
            if (v4 > 0)
            {
                a9 = v3;
                if (!*(v3))
                    g_7ff33ccd6a0();
                if (*(v3) != 3)
                    if (*(v3) - 6 > 1)
                        goto LABEL_0x7ff33cc00a1;
                g_7ff33ccd680();
            }
        } while ((v7 += 4, !((char)(CmpF((unsigned long long)*(v7), 0)) & 1)));
        v5 = a5;
    }
    if (a8)
        8792667066888();
    if (v4 > 0)
    {
        i = v4;
        v9 = &vvar_11;
        p = v10;
        do
        {
            ptr = *(p);
            v13 = v9 + 1;
            ptr[0] = v9[0];
            ptr[1] = v13[2];
            ptr[2] = v13[1];
            *(p) = (char *)*(p) + v14;
            *((unsigned long *)(v15 - (char *)v10 + p)) = *((long long *)(v15 - (char *)v10 + p)) + v14;
            i -= 1;
            p += 1;
            v9 = v13;
        } while (i != 1);
    }
    a5 = v5 + 1;
    if (a5 < v1)
        goto LABEL_0x7ff33cbfeb1;
    else
        goto LABEL_0x7ff33cc00a1;
}
