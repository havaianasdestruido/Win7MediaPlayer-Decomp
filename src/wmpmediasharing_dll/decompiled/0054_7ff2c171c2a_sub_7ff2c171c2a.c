/* sub_7ff2c171c2a @ 0x7ff2c171c2a
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c171c2a  (279 bytes, 22 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 714d193de7f062968c11a8a946f1fa066d03e1fc5a7bd90dbabc372605416413
 *   Evidence: analysis/report/rea-evidence/wmpmediasharing_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_7ff2c161a30;
extern struct_0 *g_7ff2c182e68;

long long sub_7ff2c171c2a(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11)
{
    unsigned int v1;  // eax
    int v2;  // esi
    void* *ptr;  // rdi
    struct_0 *v8;  // r13
    unsigned int v9;  // esi
    struct_0 *v3;  // rax
    void* p;  // rbx
    unsigned int v5;  // eax
    unsigned int v6;  // r14d

    if (v1 == vvar_66{r56|4b})
    {
        v2 = -2147024774;
        if (g_7ff2c182e68 != v8 && (2 & g_7ff2c182e68->field_1c) && g_7ff2c182e68->field_19 >= 2)
            sub_7ff2c1634e8(g_7ff2c182e68->field_10, 15, &g_7ff2c161a30, 2147942522); /* do not return */
        if ((int)(*(ptr))[12] < vvar_66{r56|4b})
            8792537709680();
        *((int *)&(*(ptr))[16]) = vvar_66{r56|4b};
        *((short *)*(ptr)) = vvar_66{r56|4b};
        v3 = g_7ff2c182e68;
    }
    else
    {
        p = *(ptr);
        v5 = sub_7ff2c16e220(p);
        if (v5 < vvar_66{r56|4b} || v5 > (int)p[12])
            8792537709680();
        *((unsigned int *)&p[16]) = v5;
        *((short *)((char *)*(ptr) + 2 * v5)) = vvar_66{r56|4b};
        v3 = g_7ff2c182e68;
        if (g_7ff2c182e68 == v8)
        {
            return v9;
        }
        else if ((2 & g_7ff2c182e68->field_1c) && g_7ff2c182e68->field_19 >= (char)v6)
        {
            sub_7ff2c1643cc(g_7ff2c182e68->field_10, 16, &g_7ff2c161a30, *(ptr)); /* do not return */
        }
    }
    if (v3 == v8)
    {
        return v2;
    }
    else if (!(v3->field_1c & 1))
    {
        return v2;
    }
    else if (v3->field_19 >= (vvar_66{r56|4b} <= v2 ? v6 : 2))
    {
        sub_7ff2c164b78(v3->field_10, 17, &g_7ff2c161a30, v2, *(ptr)); /* do not return */
    }
    else
    {
        return v2;
    }
}
