/* sub_7ff3b14de0c @ 0x7ff3b14de0c
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b14de0c  (421 bytes, 35 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962
 *   Evidence: analysis/report/rea-evidence/wmpnssci_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_7ff3b131ed0;
extern struct_0 *g_7ff3b17be78;

int sub_7ff3b14de0c(void)
{
    struct_0 *v2;  // rcx
    unsigned long long v3;  // r8
    unsigned int v4;  // edx
    unsigned long long *ptr;  // r8
    int v6;  // ebx
    unsigned long long v7;  // rdi
    struct_0 *v9;  // rcx
    void* v10;  // rcx
    void* v11;  // rcx
    unsigned long long v0;  // [bp-0x28]

    v2 = g_7ff3b17be78;
    if (g_7ff3b17be78 != &g_7ff3b17be78 && (g_7ff3b17be78->field_1c & 1) && g_7ff3b17be78->field_19 >= 5)
    {
        v0 = v3;
        sub_7ff3b13aad4(g_7ff3b17be78->field_10, 101, &g_7ff3b131ed0, v4); /* do not return */
    }
    if (!ptr)
    {
        v6 = -2147467261;
        if (g_7ff3b17be78 == &g_7ff3b17be78)
        {
            return;
        }
        else if ((2 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 2)
        {
            sub_7ff3b1388d4(g_7ff3b17be78->field_10, 102, &g_7ff3b131ed0, 2147500035); /* do not return */
        }
        goto LABEL_7ff3b14df8e;
    }
    else
    {
        *(ptr) = 0;
        v7 = 2;
        if (v4 == 1)
        {
            v9 = g_7ff3b17be78;
            if (g_7ff3b17be78 == &g_7ff3b17be78)
            {
                v11 = v10 - 8;
                (*((long long *)((long long)v10[8] + 40)))();
            }
            if ((2 & g_7ff3b17be78->field_1c))
            {
                if (g_7ff3b17be78->field_19 < 4)
                {
                    v11 = v10 - 8;
                    (*((long long *)((long long)v10[8] + 40)))();
                }
            }
            else
            {
                v11 = v10 - 8;
                (*((long long *)((long long)v10[8] + 40)))();
            }
        }
        else if (v4 == 2)
        {
            v9 = g_7ff3b17be78;
            if (g_7ff3b17be78 == &g_7ff3b17be78)
            {
                v11 = v10 - 8;
                (*((long long *)((long long)v10[8] + 40)))();
            }
            if ((2 & g_7ff3b17be78->field_1c))
            {
                if (g_7ff3b17be78->field_19 < 4)
                {
                    v11 = v10 - 8;
                    (*((long long *)((long long)v10[8] + 40)))();
                }
            }
            else
            {
                v11 = v10 - 8;
                (*((long long *)((long long)v10[8] + 40)))();
            }
        }
        else if (v4 == 3)
        {
            v9 = g_7ff3b17be78;
            if (g_7ff3b17be78 == &g_7ff3b17be78 || !(2 & g_7ff3b17be78->field_1c) || g_7ff3b17be78->field_19 < 4)
            {
                v11 = v10 - 8;
                (*((long long *)((long long)v10[8] + 40)))();
            }
        }
        else
        {
            v6 = -2147024809;
            v2 = g_7ff3b17be78;
            if (g_7ff3b17be78 == &g_7ff3b17be78)
            {
                return;
            }
            else if ((2 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 4)
            {
                sub_7ff3b134f88(g_7ff3b17be78->field_10, 106, &g_7ff3b131ed0); /* do not return */
            }
LABEL_7ff3b14df8e:
            if (v2 == &g_7ff3b17be78)
            {
                return;
            }
            else if (!(v2->field_1c & 1))
            {
                return;
            }
            else if (v2->field_19 >= (v6 >= 0 ? 5 : 2))
            {
                sub_7ff3b1388d4(v2->field_10, 107, &g_7ff3b131ed0, v6); /* do not return */
            }
            else
            {
                return;
            }
        }
        sub_7ff3b134f88(v9->field_10); /* do not return */
    }
}
