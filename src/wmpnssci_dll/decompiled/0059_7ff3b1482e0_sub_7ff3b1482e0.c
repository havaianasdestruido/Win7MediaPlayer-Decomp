/* sub_7ff3b1482e0 @ 0x7ff3b1482e0
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b1482e0  (383 bytes, 27 basic blocks)
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

typedef struct struct_1 {
    char padding_0[104];
    unsigned int field_68;
} struct_1;

extern long long g_7ff3b131f40;
extern struct_0 *g_7ff3b17be78;

int sub_7ff3b1482e0(void)
{
    struct_0 *v4;  // rax
    long long v5;  // rdx
    struct_1 *p;  // rcx
    unsigned int v8;  // eax
    int v9;  // ebx
    unsigned long flag2;  // [bp-0x28]
    unsigned int flag;  // [bp-0x20]
    unsigned int choice;  // [bp-0x1c]

    v4 = g_7ff3b17be78;
    if (g_7ff3b17be78 != &g_7ff3b17be78 && (g_7ff3b17be78->field_1c & 1) && g_7ff3b17be78->field_19 >= 5)
        sub_7ff3b1425cc(g_7ff3b17be78->field_10, 31, &g_7ff3b131f40, v5); /* do not return */
    if (v5)
    {
        *((unsigned int *)v5) = 0;
        flag2 = 0;
        flag = 0;
        choice = 0;
        p->field_68 = 1;
        v8 = sub_7ff3b1487e8(p, &flag2);
        if (g_7ff3b17be78 != &g_7ff3b17be78 && (2 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 4)
            sub_7ff3b1388d4(g_7ff3b17be78->field_10, 32, &g_7ff3b131f40, v8); /* do not return */
        if (v8 >= 0)
        {
            *((unsigned int *)v5) = flag;
            if (g_7ff3b17be78 != &g_7ff3b17be78 && (2 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 4)
                sub_7ff3b1388d4(g_7ff3b17be78->field_10, 33, &g_7ff3b131f40); /* do not return */
        }
        v9 = 0;
        sub_7ff3b145b3c(&flag2);
        v4 = g_7ff3b17be78;
    }
    else
    {
        v9 = -2147467261;
        if (g_7ff3b17be78 == &g_7ff3b17be78)
        {
            return;
        }
        else if ((2 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 2)
        {
            sub_7ff3b1388d4(g_7ff3b17be78->field_10, 34, &g_7ff3b131f40, 2147500035); /* do not return */
        }
    }
    if (v4 == &g_7ff3b17be78)
    {
        return;
    }
    else if (!(v4->field_1c & 1))
    {
        return;
    }
    else if (v4->field_19 >= (v9 >= 0 ? 5 : 2))
    {
        sub_7ff3b1388d4(v4->field_10, 35, &g_7ff3b131f40, v9); /* do not return */
    }
    else
    {
        return;
    }
}
