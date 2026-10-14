/* sub_10006fe00 @ 0x10006fe00
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10006fe00  (417 bytes, 33 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): f069226052de289452ef5ff9dd67557193c15308c5351bc7b70b6692b350951b
 *   Evidence: analysis/report/rea-evidence/setup_wm_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

extern long long g_100086f40;

int sub_10006fe00(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long long a8)
{
    unsigned int v3;  // eax
    unsigned int v4;  // r12d
    unsigned long long v13;  // rdx
    void* cur;  // rcx
    unsigned long long v15;  // rdx
    long long v5;  // rsi
    unsigned long long v6;  // rdx
    unsigned short *iter;  // rcx
    unsigned long long v8;  // rdx
    unsigned int v10;  // r13d
    struct_0 *ptr;  // r15
    unsigned long long v12;  // rdi
    char v1;  // [bp+0x80]
    char v2;  // [bp+0x290]

    if (v3 == v4)
    {
        4295490210();
    }
    else if (v3 > 260)
    {
        4295490210();
    }
    else if ((int)sub_100053454(v5))
    {
        4298115368();
    }
    else
    {
        v6 = 258;
        iter = &v1;
        do
        {
        } while (v6 + 2147483388 && *((short *)(iter + vvar_93{r56|8b} - &v1)) && (*(iter) = (unsigned short)*((short *)(iter + vvar_93{r56|8b} - &v1)), iter += 2, v8 = v6 - 1, v6 -= 1, v6 != 1));
        if (!v6)
            iter += 1;
        *(iter) = 0;
        if (&v1)
            4298115984();
        sub_100039ee4(&v1, 259, v5);
        if ((int)sub_100053454(&v1))
        {
            if (a8)
                4298115360();
            if (v10)
                sub_100053d64(&g_100086f40, 8, L"INFParser using delayed transactions", 0);
            v12 = ptr->field_18;
            if (!v12)
                4298115432();
            v13 = 259;
            cur = &v2;
            do
            {
            } while (v13 + 2147483387 && *((short *)(cur + v12 - &v2)) && (*((short *)cur) = *((short *)(cur + v12 - &v2)), cur += 2, v15 = v13 - 1, v13 -= 1, v13 != 1));
            if (!v13)
                cur -= 2;
            *((unsigned short *)cur) = 0;
            4298115368();
        }
    }
}
