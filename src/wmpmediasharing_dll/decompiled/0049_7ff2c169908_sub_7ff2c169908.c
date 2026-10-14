/* sub_7ff2c169908 @ 0x7ff2c169908
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c169908  (438 bytes, 23 basic blocks)
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

unsigned long long sub_7ff2c169908(long long a0, unsigned int a1, long long a2, unsigned int a3, unsigned long a4, unsigned int a5, long long *ptr)
{
    long long v9;  // rbx
    long long v0;  // [bp-0x98]
    long long v1;  // [bp-0x88]
    long long v2;  // [bp-0x80]
    long long v3;  // [bp-0x78]
    long long *v4;  // [bp-0x70]
    unsigned long long flag2;  // [bp-0x68]
    unsigned long long choice;  // [bp-0x60]
    unsigned long long flag;  // [bp+0x18]

    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1) && g_7ff2c182e68->field_19 >= 5)
    {
        v4 = ptr;
        *((unsigned int *)&v3) = a5;
        *((unsigned int *)&v2) = 3;
        *((unsigned int *)&v1) = a3;
        *((unsigned int *)&v0) = a1;
        sub_7ff2c16499c(g_7ff2c182e68->field_10, 109, &g_7ff2c161a50, a0, v0, a2, v1, v2, v3); /* do not return */
    }
    v9 = 0;
    flag = 0;
    choice = 0;
    if (a2 && ptr)
    {
        *(ptr) = 0;
        flag2 = 0;
        8792538350032();
    }
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (2 & g_7ff2c182e68->field_1c) && g_7ff2c182e68->field_19 >= 2)
        sub_7ff2c1634c4(g_7ff2c182e68->field_10, 110, &g_7ff2c161a50); /* do not return */
    if (choice)
    {
        0x7ff2c200300();
    }
    else if (flag)
    {
        0x7ff2c200300();
    }
    else if (g_7ff2c182e68 == &g_7ff2c182e68)
    {
        return 2147942487;
    }
    else if (!(g_7ff2c182e68->field_1c & 1))
    {
        return 2147942487;
    }
    else if (g_7ff2c182e68->field_19 >= (1 ? 5 : 2))
    {
        if (ptr)
            v9 = *(ptr);
        sub_7ff2c164ccc(g_7ff2c182e68->field_10, 111, &g_7ff2c161a50, 2147942487, v9); /* do not return */
    }
    else
    {
        return 2147942487;
    }
}
