/* sub_7ff2c167bc8 @ 0x7ff2c167bc8
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c167bc8  (554 bytes, 37 basic blocks)
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

extern long long g_7ff2c161938;
extern long long g_7ff2c161a50;
extern struct_0 *g_7ff2c182e68;
extern long long g_7ff2c183d20;
extern unsigned long long g_7ff2c183d38;
extern char g_7ff2c183d40;
extern unsigned int g_7ff2c183d4c;
extern char g_7ff2c183d50;

unsigned long long sub_7ff2c167bc8(unsigned long long a0, long long a1, unsigned short a2)
{
    long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp+0x8]
    char v2;  // [bp+0x20]

    v1 = a0;
    if (g_7ff2c183d4c && (g_7ff2c183d50 >= 4 || !g_7ff2c183d50) && (0x8000000000000000 & g_7ff2c183d38) && (*((long long *)&g_7ff2c183d40) & 0x8000000000000000) == *((long long *)&g_7ff2c183d40))
    {
        *((unsigned int *)&v0) = 0;
        sub_7ff2c164134(g_7ff2c183d20, "~", a1, 65535 == a2, v0); /* do not return */
    }
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1) && g_7ff2c182e68->field_19 >= 5)
        sub_7ff2c164458(); /* do not return */
    if (a2 == 65535)
    {
        if (g_7ff2c182e68 == &g_7ff2c182e68)
        {
            sub_7ff2c16dbe8(&v2, a1); /* do not return */
        }
        else if (!(2 & g_7ff2c182e68->field_1c))
        {
            sub_7ff2c16dbe8(&v2, a1); /* do not return */
        }
        else if (g_7ff2c182e68->field_19 < 4)
        {
            sub_7ff2c16dbe8(&v2, a1); /* do not return */
        }
    }
    else
    {
        if (a2)
        {
            if (g_7ff2c182e68 != &g_7ff2c182e68)
            {
                if ((2 & g_7ff2c182e68->field_1c) && g_7ff2c182e68->field_19 >= 2)
                    sub_7ff2c1634c4(g_7ff2c182e68->field_10, 78, &g_7ff2c161a50); /* do not return */
                if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1) && g_7ff2c182e68->field_19 >= (1 ? 5 : 2))
                    sub_7ff2c1634e8(g_7ff2c182e68->field_10, 79, &g_7ff2c161a50, 2147942487); /* do not return */
            }
            if (!g_7ff2c183d4c)
                return 2147942487;
            if (g_7ff2c183d50 < 4 && g_7ff2c183d50)
                return 2147942487;
            if (!(0x8000000000000000 & g_7ff2c183d38))
                return 2147942487;
            if ((*((long long *)&g_7ff2c183d40) & 0x8000000000000000) == *((long long *)&g_7ff2c183d40))
            {
                *((unsigned int *)&v0) = 2147942487;
                sub_7ff2c164134(g_7ff2c183d20, &g_7ff2c161938, a1, 65535 == a2, v0); /* do not return */
            }
            return 2147942487;
        }
        else if (!(g_7ff2c182e68 != &g_7ff2c182e68 && (2 & g_7ff2c182e68->field_1c) && g_7ff2c182e68->field_19 >= 4))
        {
            sub_7ff2c16dbe8(&v2, a1); /* do not return */
        }
    }
    sub_7ff2c1634c4(g_7ff2c182e68->field_10); /* do not return */
}
