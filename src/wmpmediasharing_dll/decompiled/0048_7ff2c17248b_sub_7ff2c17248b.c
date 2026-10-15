/* sub_7ff2c17248b @ 0x7ff2c17248b
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c17248b  (239 bytes, 24 basic blocks)
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

extern long long g_7ff2c161a30;
extern struct_0 *g_7ff2c182e68;

long long sub_7ff2c17248b(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned int a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned int flag)
{
    int v2;  // eax
    int v3;  // ebx
    unsigned short *v4;  // r14
    unsigned short *p;  // rdi
    unsigned long v6;  // rax
    int v7;  // eax
    void* ptr;  // [bp+0x100008]

    v3 = v2;
    if (v2 == (unsigned int)v4)
    {
        if (flag != 1 && flag != 2)
        {
LABEL_7ff2c1724a6:
            v3 = 13;
        }
        else
        {
            if (p != v4)
            {
                v6 = a5;
                if ((unsigned int)v6 == (unsigned int)v4)
                {
                    *(p) = *((unsigned short *)&v4);
                }
                else if (((char)v6 & 1) || p[1 + (v6 >> 1)] != *((unsigned short *)&v4))
                {
                    goto LABEL_7ff2c1724a6;
                }
            }
            v3 = (unsigned int)v4;
        }
    }
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 2) && g_7ff2c182e68->field_19 >= 4)
        sub_7ff2c1634e8(g_7ff2c182e68->field_10, 76, &g_7ff2c161a30, v3); /* do not return */
    v7 = -(-(0 < v3)) - 1;
    if (v7 == -1)
        v7 = sub_7ff2c16e220(ptr);
    if (v7 >= (unsigned int)v4 && v7 <= (int)ptr[12])
    {
        *((int *)&ptr[16]) = v7;
        *((unsigned short *)((char *)ptr + 2 * v7)) = *((unsigned short *)&v4);
        if (g_7ff2c182e68 == &g_7ff2c182e68)
            goto LABEL_0x7ff2c1725c4;
        if (!(g_7ff2c182e68->field_1c & 2))
            goto LABEL_0x7ff2c17258b;
        if (g_7ff2c182e68->field_19 < 4)
            goto LABEL_0x7ff2c17258b;
        sub_7ff2c1643cc(g_7ff2c182e68->field_10, 77, &g_7ff2c161a30, ptr); /* do not return */
    }
    8792537709680();
}
