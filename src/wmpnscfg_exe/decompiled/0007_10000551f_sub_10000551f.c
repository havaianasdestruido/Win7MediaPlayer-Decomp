/* sub_10000551f @ 0x10000551f
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x10000551f  (212 bytes, 23 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 10888bb9c3799e1e8b010c0f9088ced376aad63a509fce1727c457b022cdc717
 *   Evidence: analysis/report/rea-evidence/wmpnscfg_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 *g_10000b1a8;

long long sub_10000551f(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned short a7)
{
    int v2;  // eax
    long long v3;  // r14
    int v12;  // r13d
    unsigned int v13;  // eax
    unsigned int v4;  // esi
    long long v5;  // rsi
    unsigned long v6;  // r15
    unsigned long v7;  // rbx
    long long v9;  // rsi
    unsigned long long *ptr;  // rdi
    long long v11;  // r8
    long long v1;  // [bp+0x20]

    if (v2 != (int)v3)
    {
        if (v4 + 1 < 14)
            goto LABEL_0x100005510;
        v5 = v3;
    }
    else
    {
        v5 = *((long long *)(v6 + v7 * 16 + 8));
    }
    v9 = v5;
    if (v9 != v3)
    {
        if ((int)sub_1000049b8(ptr, &a7) < (int)v3)
            goto LABEL_0x1000055f8;
        if (a7 == 123)
        {
            *((int *)&v1) = v3;
            v11 = v9;
            if (v12 == (int)v3)
            {
                if (sub_100004b44(ptr, &a7, v11, 0, v1) < (int)v3)
                    goto LABEL_0x1000055f8;
                else
                    goto LABEL_1000055c3;
            }
            else if (sub_100004b44(ptr, &a7, v11, v12, v1) < (int)v3)
            {
                *(ptr) = *(ptr);
                *((int *)&v1) = v3;
                sub_100004b44(ptr, &a7, v9, 0, v1);
            }
LABEL_1000055c3:
            v13 = *((short *)*(ptr));
            if (v13 >= 9 && (v13 <= 10 || v13 == 13 || v13 == 32))
                g_10000b1a8();
            if ((unsigned short)v3 == *((short *)*(ptr)))
                goto LABEL_0x1000055f8;
        }
    }
}
