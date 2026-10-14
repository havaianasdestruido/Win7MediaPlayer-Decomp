/* sub_7ff2c167400 @ 0x7ff2c167400
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c167400  (502 bytes, 30 basic blocks)
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

long long sub_7ff2c167400(long long a0, unsigned short a1)
{
    unsigned long v4;  // r13
    int v5;  // ebx
    unsigned long flag2;  // [bp-0x38]
    unsigned int flag;  // [bp-0x30]
    unsigned int choice;  // [bp-0x2c]

    if (g_7ff2c183d4c && (g_7ff2c183d50 >= 4 || !g_7ff2c183d50) && (0x8000000000000000 & g_7ff2c183d38) && (*((long long *)&g_7ff2c183d40) & 0x8000000000000000) == *((long long *)&g_7ff2c183d40))
        sub_7ff2c163f7c(g_7ff2c183d20, "z", 65535 == a1, 0); /* do not return */
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1) && g_7ff2c182e68->field_19 >= 5)
        sub_7ff2c1643cc(); /* do not return */
    v4 = 65535 == a1;
    if (a1 != 65535 && a1)
    {
        v5 = -2147024809;
        flag2 = 0;
        flag = 0;
        choice = 0;
        v5 = (0 ? 87 : -2147024809);
        if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1) && g_7ff2c182e68->field_19 >= (0 <= v5 ? 5 : 2))
            sub_7ff2c1634e8(g_7ff2c182e68->field_10, 72, &g_7ff2c161a50, v5); /* do not return */
        if (!g_7ff2c183d4c)
        {
            sub_7ff2c16cea4(&flag2);
            return v5;
        }
        if (g_7ff2c183d50 < 4 && g_7ff2c183d50)
        {
            sub_7ff2c16cea4(&flag2);
            return v5;
        }
        if (!(0x8000000000000000 & g_7ff2c183d38))
        {
            sub_7ff2c16cea4(&flag2);
            return v5;
        }
        else if ((*((long long *)&g_7ff2c183d40) & 0x8000000000000000) == *((long long *)&g_7ff2c183d40))
        {
            sub_7ff2c163f7c(g_7ff2c183d20, "{", v4 & 1, v5); /* do not return */
        }
        else
        {
            sub_7ff2c16cea4(&flag2);
            return v5;
        }
    }
    sub_7ff2c1706e0(a0 + 64, v4 & 1); /* do not return */
}
