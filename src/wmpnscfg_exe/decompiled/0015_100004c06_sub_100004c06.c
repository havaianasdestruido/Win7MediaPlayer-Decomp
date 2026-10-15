/* sub_100004c06 @ 0x100004c06
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100004c06  (164 bytes, 16 basic blocks)
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

int sub_100004c06(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned short **a12)
{
    unsigned int v5;  // eax
    unsigned int v6;  // ebx
    unsigned short *v7;  // rsi
    unsigned long long v8;  // rdi
    unsigned int v1;  // [bp+0x74]
    unsigned long long flag;  // [bp+0x98]
    unsigned long long choice;  // [bp+0xa0]
    unsigned long long flag2;  // [bp+0xa8]

    if (v5 == v6 || vvar_44{r56|4b} != v6)
    {
        if (sub_1000049b8(a12, v7) < 0)
            goto LABEL_0x100005441;
        if (v1)
        {
            flag = 0;
            choice = 0;
            flag2 = 0;
            if (*(v7))
            {
                if (*(v7) != 92)
                {
                    g_10000b1a8();
                }
                else if (v7 && v8)
                {
                    4296016320();
                }
            }
            4296016600();
        }
    }
    4296016600();
}
