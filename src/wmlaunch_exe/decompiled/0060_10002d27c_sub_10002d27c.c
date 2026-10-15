/* sub_10002d27c @ 0x10002d27c
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10002d27c  (172 bytes, 18 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 8ea713b95f32c31a11bb1dded4cc8b9620014600f122fff3852c082d9af67b1b
 *   Evidence: analysis/report/rea-evidence/wmlaunch_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned short field_0;
} struct_0;

int sub_10002d27c(void)
{
    struct_0 **ptr;  // rcx
    unsigned short *p;  // rcx
    unsigned int v3;  // eax
    unsigned int v4;  // eax
    unsigned short *addr;  // rdx

    p = &*(ptr)->field_0;
    v3 = *(p);
    if (v3 >= 9 && (v3 <= 10 || v3 == 13 || v3 == 32))
        4296016400();
    if (!*(p))
    {
        return;
    }
    else if (*(p) == 39)
    {
        4296016400();
    }
    else
    {
        v4 = *(ptr)->field_0;
        if (v4 >= 9 && (v4 <= 10 || v4 == 13 || v4 == 32))
        {
            *(addr) = 0;
            return;
        }
        4296016400();
    }
}
