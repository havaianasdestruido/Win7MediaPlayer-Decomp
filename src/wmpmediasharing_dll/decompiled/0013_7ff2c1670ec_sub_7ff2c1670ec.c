/* sub_7ff2c1670ec @ 0x7ff2c1670ec
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c1670ec  (635 bytes, 46 basic blocks)
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

long long sub_7ff2c1670ec(long long a0, unsigned short *ptr)
{
    int v3;  // edi
    long long v0;  // [bp-0x48]
    unsigned int flag;  // [bp+0x10]

    if (g_7ff2c183d4c && (g_7ff2c183d50 >= 4 || !g_7ff2c183d50) && (0x8000000000000000 & g_7ff2c183d38) && (*((long long *)&g_7ff2c183d40) & 0x8000000000000000) == *((long long *)&g_7ff2c183d40))
        sub_7ff2c163f7c(g_7ff2c183d20, "x", 0, 0); /* do not return */
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1) && g_7ff2c182e68->field_19 >= 5)
        sub_7ff2c164de8(g_7ff2c182e68->field_10, 67, &g_7ff2c161a50, ptr); /* do not return */
    v3 = 0;
    if (!ptr)
    {
        v3 = -2147467261;
        if (g_7ff2c182e68 != &g_7ff2c182e68 && (2 & g_7ff2c182e68->field_1c) && g_7ff2c182e68->field_19 >= 2)
            sub_7ff2c1634e8(g_7ff2c182e68->field_10, 68, &g_7ff2c161a50, 2147500035); /* do not return */
    }
    flag = 0;
    if (v3 >= 0)
    {
        *(ptr) = 0;
        sub_7ff2c17046c(a0 + 64, &flag); /* do not return */
    }
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1) && g_7ff2c182e68->field_19 >= (0 <= v3 ? 5 : 2))
    {
        *((unsigned int *)&v0) = (!ptr ? 123 : *(ptr));
        sub_7ff2c164c24(g_7ff2c182e68->field_10, 70, &g_7ff2c161a50, v3, v0); /* do not return */
    }
    if (!g_7ff2c183d4c)
        return v3;
    if (g_7ff2c183d50 < 4 && g_7ff2c183d50)
        return v3;
    if (!(0x8000000000000000 & g_7ff2c183d38))
    {
        return v3;
    }
    else if ((*((long long *)&g_7ff2c183d40) & 0x8000000000000000) == *((long long *)&g_7ff2c183d40))
    {
        sub_7ff2c163f7c(g_7ff2c183d20, "y", (!ptr ? 123 : 65535 == *(ptr)), v3); /* do not return */
    }
    else
    {
        return v3;
    }
}
