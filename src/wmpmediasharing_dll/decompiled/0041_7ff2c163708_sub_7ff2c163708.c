/* sub_7ff2c163708 @ 0x7ff2c163708
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c163708  (441 bytes, 26 basic blocks)
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
    struct struct_1 *field_0;
    unsigned long long field_8;
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

extern long long g_7ff2c161778;
extern char g_7ff2c1619e8;
extern long long g_7ff2c161d00;
extern struct_0 *g_7ff2c182e68;
extern unsigned long long g_7ff2c183a08;
extern unsigned long long g_7ff2c183a10;
extern unsigned long long g_7ff2c183a18;
extern char g_7ff2c183a20;
extern char g_7ff2c183a21;
extern unsigned short g_7ff2c183a22;
extern unsigned int g_7ff2c183a24;
extern unsigned long long g_7ff2c183a28;
extern char g_7ff2c183d00;
extern long long g_7ff2c183d20;
extern long long g_7ff2c183d28;

unsigned int sub_7ff2c163708(unsigned long a0, unsigned int flag, unsigned long a2)
{
    struct_0 *ptr;  // rbx
    char *v0;  // [bp-0x58]
    unsigned long long flag2;  // [bp-0x50]
    unsigned long long choice;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    unsigned long v4;  // [bp-0x38]
    unsigned long long flag3;  // [bp-0x30]

    if (flag == 1)
    {
        sub_7ff2c163454(&g_7ff2c161778, sub_7ff2c163418, &g_7ff2c183d28, &g_7ff2c183d20);
        g_7ff2c183a18 = 0;
        g_7ff2c183a08 = 0;
        g_7ff2c183a28 = &g_7ff2c1619e8;
        g_7ff2c183a20 = 1;
        g_7ff2c183a21 = 0;
        g_7ff2c182e68 = &g_7ff2c183a08;
        g_7ff2c183a22 = 0;
        g_7ff2c183a24 = 0;
        v3 = &g_7ff2c183a10;
        choice = 0;
        flag2 = 0;
        v4 = g_7ff2c183a28;
        flag3 = 0;
        v0 = &v4;
        8792538350008();
    }
    ptr = g_7ff2c182e68;
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 2) && g_7ff2c182e68->field_19 >= 4)
        sub_7ff2c1634e8(g_7ff2c182e68->field_10, 11, &g_7ff2c161d00, flag); /* do not return */
    if (flag == 1)
    {
        if (g_7ff2c183d00)
            return 0;
        8792538350280();
    }
    else if (!flag)
    {
        if (g_7ff2c182e68 != &g_7ff2c182e68)
        {
            if ((1 & g_7ff2c182e68->field_1c) && g_7ff2c182e68->field_19 >= 5)
                sub_7ff2c1634e8(g_7ff2c182e68->field_10, 12, &g_7ff2c161d00, 1); /* do not return */
            if (g_7ff2c182e68 != &g_7ff2c182e68)
            {
                while (ptr)
                {
                    if (ptr->field_8)
                        8792538350016();
                    ptr = ptr->field_0;
                }
                g_7ff2c182e68 = &g_7ff2c182e68;
            }
        }
        sub_7ff2c163494(&g_7ff2c183d20);
        return 1;
    }
    else
    {
        return 1;
    }
}
