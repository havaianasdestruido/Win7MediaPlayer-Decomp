/* sub_7ff2c165b6c @ 0x7ff2c165b6c
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c165b6c  (431 bytes, 33 basic blocks)
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

extern long long g_7ff2c161a50;
extern struct_0 *g_7ff2c182e68;
extern long long g_7ff2c183d20;
extern unsigned long long g_7ff2c183d38;
extern char g_7ff2c183d40;
extern unsigned int g_7ff2c183d4c;
extern char g_7ff2c183d50;

unsigned long long sub_7ff2c165b6c(unsigned long a0, unsigned short *a1)
{
    long long v0;  // [bp-0x38]
    unsigned int flag;  // [bp+0x10]

    if (g_7ff2c183d4c && (g_7ff2c183d50 >= 4 || !g_7ff2c183d50) && (0x8000000000000000 & g_7ff2c183d38) && (*((long long *)&g_7ff2c183d40) & 0x8000000000000000) == *((long long *)&g_7ff2c183d40))
        sub_7ff2c163f7c(g_7ff2c183d20, "l", 0, 0); /* do not return */
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1) && g_7ff2c182e68->field_19 >= 5)
        sub_7ff2c164de8(g_7ff2c182e68->field_10, 35, &g_7ff2c161a50, a1); /* do not return */
    flag = 0;
    if (a1)
        sub_7ff2c16be14(&flag); /* do not return */
    if (g_7ff2c182e68 != &g_7ff2c182e68)
    {
        if ((2 & g_7ff2c182e68->field_1c) && g_7ff2c182e68->field_19 >= 2)
            sub_7ff2c1634e8(g_7ff2c182e68->field_10, 36, &g_7ff2c161a50, 2147500035); /* do not return */
        if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1) && g_7ff2c182e68->field_19 >= (1 ? 5 : 2))
        {
            *((unsigned int *)&v0) = (!a1 ? 123 : *(a1));
            sub_7ff2c164c24(g_7ff2c182e68->field_10, 37, &g_7ff2c161a50, 2147500035, v0); /* do not return */
        }
    }
    if (!g_7ff2c183d4c)
        return 2147500035;
    if (g_7ff2c183d50 < 4 && g_7ff2c183d50)
        return 2147500035;
    if (!(0x8000000000000000 & g_7ff2c183d38))
    {
        return 2147500035;
    }
    else if ((*((long long *)&g_7ff2c183d40) & 0x8000000000000000) == *((long long *)&g_7ff2c183d40))
    {
        sub_7ff2c163f7c(g_7ff2c183d20, "m", (!a1 ? 123 : 65535 == *(a1)), 2147500035); /* do not return */
    }
    else
    {
        return 2147500035;
    }
}
