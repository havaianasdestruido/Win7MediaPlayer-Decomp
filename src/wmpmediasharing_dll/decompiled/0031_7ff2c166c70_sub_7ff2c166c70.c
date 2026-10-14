/* sub_7ff2c166c70 @ 0x7ff2c166c70
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c166c70  (527 bytes, 31 basic blocks)
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

extern long long g_7ff2c1619c8;
extern long long g_7ff2c1619d8;
extern long long g_7ff2c161a50;
extern struct_0 *g_7ff2c182e68;
extern long long g_7ff2c183d20;
extern unsigned long long g_7ff2c183d38;
extern char g_7ff2c183d40;
extern unsigned int g_7ff2c183d4c;
extern char g_7ff2c183d50;

unsigned long long sub_7ff2c166c70(unsigned long a0, unsigned short *a1)
{
    unsigned long long v8;  // r14
    unsigned short *v9;  // rsi
    unsigned short *v10;  // rdi
    char *v0;  // [bp-0x68], Other Possible Types: unsigned long long
    char *v1;  // [bp-0x60]
    char *v2;  // [bp-0x58]
    char flag;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned int v5;  // [bp+0x10]
    unsigned int flag2;  // [bp+0x18]
    unsigned int choice;  // [bp+0x20]

    v8 = 0;
    v9 = a1;
    if (g_7ff2c183d4c && (g_7ff2c183d50 >= 4 || !g_7ff2c183d50) && (0x8000000000000000 & g_7ff2c183d38) && (*((long long *)&g_7ff2c183d40) & 0x8000000000000000) == *((long long *)&g_7ff2c183d40))
        sub_7ff2c163fd4(g_7ff2c183d20, &g_7ff2c1619c8, v9, 0); /* do not return */
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1) && g_7ff2c182e68->field_19 >= 5)
        sub_7ff2c1643cc(g_7ff2c182e68->field_10, 62, &g_7ff2c161a50, v9); /* do not return */
    if (v9)
    {
        v10 = v9;
        do
        {
            if (false)
                break;
        } while (*(v10));
        v8 = ~(18446744073709551615) - 1;
    }
    v5 = 7;
    choice = 0;
    flag2 = 0;
    if (v8 > 255)
    {
        if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1) && g_7ff2c182e68->field_19 >= (1 ? 5 : 2))
            sub_7ff2c1634e8(g_7ff2c182e68->field_10, 66, &g_7ff2c161a50, 2147942487); /* do not return */
        if (!g_7ff2c183d4c)
            return 2147942487;
        if (g_7ff2c183d50 < 4 && g_7ff2c183d50)
            return 2147942487;
        if (!(0x8000000000000000 & g_7ff2c183d38))
        {
            return 2147942487;
        }
        else if ((*((long long *)&g_7ff2c183d40) & 0x8000000000000000) == *((long long *)&g_7ff2c183d40))
        {
            sub_7ff2c163fd4(g_7ff2c183d20, &g_7ff2c1619d8, v9, 2147942487); /* do not return */
        }
        else
        {
            return 2147942487;
        }
    }
    if (v8 <= 0)
    {
        v0 = &flag;
        flag = 0;
        8792538349936();
    }
    v2 = &v5;
    v1 = &flag2;
    v0 = 0;
    8792538350024();
}
