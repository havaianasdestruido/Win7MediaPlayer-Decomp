/* sub_7ff2c16fe44 @ 0x7ff2c16fe44
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c16fe44  (329 bytes, 23 basic blocks)
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

typedef struct struct_1 {
    char padding_0[8];
    struct struct_2 *field_8;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern long long g_7ff2c161a40;
extern struct_0 *g_7ff2c182e68;

long long sub_7ff2c16fe44(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, char a5, unsigned long a6, unsigned long a7, void* a8, unsigned long a9, unsigned long long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19)
{
    unsigned int v3;  // eax
    unsigned int v4;  // ebx
    struct_0 **v5;  // rdi
    void* ptr;  // rdx
    struct_1 **v7;  // rcx
    unsigned long v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x34]

    v4 = v3;
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 2) && g_7ff2c182e68->field_19 >= 4)
        sub_7ff2c1634e8(g_7ff2c182e68->field_10, 92, &g_7ff2c161a40, v4); /* do not return */
    if (!v4)
    {
        v2 = 4;
        a4 = &v2;
        v1 = &vvar_5;
        8792538349880();
    }
    if (v4 == 2)
    {
        v4 = 1168;
        if (g_7ff2c182e68 == &g_7ff2c182e68)
            goto LABEL_7ff2c1700c2;
        if ((g_7ff2c182e68->field_1c & 2))
        {
            if (g_7ff2c182e68->field_19 >= 4)
                sub_7ff2c1634c4(g_7ff2c182e68->field_10, 96, &g_7ff2c161a40); /* do not return */
            v5 = &g_7ff2c182e68;
        }
        else
        {
            v5 = &g_7ff2c182e68;
        }
    }
    else
    {
        v5 = &g_7ff2c182e68;
    }
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1) && g_7ff2c182e68->field_19 >= (!(0 < v4) & 4294967293) + 5)
        sub_7ff2c1634e8(g_7ff2c182e68->field_10, 97, &g_7ff2c161a40, v4); /* do not return */
LABEL_7ff2c1700c2:
    ptr = a8 - 24;
    InterlockedExchangeAdd(ptr + 16, 4294967295);
    if ((int)ptr[16] - 1 <= 0)
    {
        v7 = *((long long *)ptr);
        (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
    }
    else if (a10)
    {
        8792538349944();
    }
    else
    {
        return v4;
    }
}
