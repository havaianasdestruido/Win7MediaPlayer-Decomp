/* sub_100003c90 @ 0x100003c90
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100003c90  (197 bytes, 13 basic blocks)
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

extern struct_0 *g_10000b1b8;

unsigned int sub_100003c90(int *ptr, unsigned long a1, int a2)
{
    int v1;  // ecx
    int v2;  // edi
    int v3;  // eax

    v1 = *(ptr) + a2 + 1;
    if (v1 <= *(ptr))
    {
        return 0;
    }
    else if (v1 > a2)
    {
        v2 = ptr[1];
        if (v1 >= ptr[1])
        {
            do
            {
                if (v2 > 1073741823)
                    return 0;
            } while ((v2 = (int)(v2 * 2), v1 >= v2));
            if (v2 * 2 > 4294967295)
                return 0;
            g_10000b1b8();
        }
        else if (*(ptr) >= 0)
        {
            v3 = ptr[1];
            if (*(ptr) >= v3)
            {
                return 0;
            }
            else if (v3 - *(ptr) <= v3)
            {
                4294998610();
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}
