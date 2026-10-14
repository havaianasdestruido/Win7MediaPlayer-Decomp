/* sub_1000042bb @ 0x1000042bb
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x1000042bb  (200 bytes, 19 basic blocks)
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
    unsigned short field_0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern struct_2 *g_10000b170;
extern struct_1 *g_10000b1a8;

long long sub_1000042bb(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned short a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, long long a10)
{
    int v2;  // eax
    int v3;  // ebx
    struct_0 **v4;  // r13
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    char v1;  // [bp+0x180]

    if (v2 != v3)
    {
        v5 = *(v4)->field_0;
        if (v5 >= 9 && (v5 <= 10 || v5 == 13 || v5 == 32))
            g_10000b1a8();
        if ((int)sub_1000049b8(v4, &v1) < v3)
            goto LABEL_0x1000046bd;
        v6 = a5;
        if (v6 == 8)
        {
            4296016672();
        }
        else if (v6 == 17)
        {
            4296016672();
        }
        else if (v6 == 19)
        {
            g_10000b170();
        }
        else if (v6 == 16392)
        {
            4296016672();
        }
    }
}
