/* sub_7ff3b14d984 @ 0x7ff3b14d984
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b14d984  (461 bytes, 33 basic blocks)
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

int sub_7ff3b14d984(void)
{
    struct_0 *v2;  // rax
    unsigned long long v3;  // r8
    int v5;  // ebx
    unsigned long long v6;  // rdi
    unsigned long long *ptr;  // r8
    unsigned short v8;  // dx
    void* v9;  // rcx
    void* v10;  // rcx
    unsigned long long v0;  // [bp-0x38]

    v2 = g_7ff3b17be78;
    if (g_7ff3b17be78 != &g_7ff3b17be78 && (g_7ff3b17be78->field_1c & 1) && g_7ff3b17be78->field_19 >= 5)
    {
        v0 = v3;
        sub_7ff3b13aa30(); /* do not return */
    }
    v5 = 0;
    v6 = 2;
    if (!ptr)
    {
        v5 = -2147467261;
        if (g_7ff3b17be78 != &g_7ff3b17be78 && (2 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 2)
            sub_7ff3b1388d4(g_7ff3b17be78->field_10, 89, &g_7ff3b131ed0, 2147500035); /* do not return */
    }
    if (v5 >= 0)
    {
        *(ptr) = 0;
        if (v8 == 65535)
        {
            v2 = g_7ff3b17be78;
            if (g_7ff3b17be78 != &g_7ff3b17be78 && (2 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 4)
                sub_7ff3b134f88(g_7ff3b17be78->field_10, 90, &g_7ff3b131ed0); /* do not return */
            goto LABEL_7ff3b14db10;
        }
        else if (!v8)
        {
            v2 = g_7ff3b17be78;
            if (g_7ff3b17be78 != &g_7ff3b17be78 && (2 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 4)
                sub_7ff3b134f88(g_7ff3b17be78->field_10, 91, &g_7ff3b131ed0); /* do not return */
LABEL_7ff3b14db10:
            if (v5 >= 0)
            {
                v10 = v9 - 8;
                (*((long long *)((long long)v9[8] + 40)))();
            }
        }
        else
        {
            v5 = -2147024809;
            v2 = g_7ff3b17be78;
            if (g_7ff3b17be78 == &g_7ff3b17be78)
            {
                return;
            }
            else if ((2 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 4)
            {
                sub_7ff3b134f88(g_7ff3b17be78->field_10, 92, &g_7ff3b131ed0); /* do not return */
            }
        }
    }
    if (v2 == &g_7ff3b17be78)
    {
        return;
    }
    else if (!(v2->field_1c & 1))
    {
        return;
    }
    else if (v2->field_19 >= (0 <= v5 ? 5 : 2))
    {
        sub_7ff3b1388d4(v2->field_10, 93, &g_7ff3b131ed0, v5); /* do not return */
    }
    else
    {
        return;
    }
}
