/* sub_7ff3b14c534 @ 0x7ff3b14c534
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b14c534  (369 bytes, 31 basic blocks)
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

int sub_7ff3b14c534(void)
{
    struct_0 *v2;  // rax
    long long v3;  // rdx
    int v4;  // ebp
    long long v6;  // rcx
    long long v7;  // r12
    unsigned int flag;  // edi
    char v1;  // [bp+0x10]

    v2 = g_7ff3b17be78;
    if (g_7ff3b17be78 != &g_7ff3b17be78 && (g_7ff3b17be78->field_1c & 1) && g_7ff3b17be78->field_19 >= 5)
        sub_7ff3b1425cc(g_7ff3b17be78->field_10, 33, &g_7ff3b131ed0, v3); /* do not return */
    v4 = 0;
    if (!v3)
    {
        v4 = -2147467261;
        if (g_7ff3b17be78 == &g_7ff3b17be78)
        {
            return;
        }
        else if ((2 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 2)
        {
            sub_7ff3b1388d4(g_7ff3b17be78->field_10, 34, &g_7ff3b131ed0, 2147500035); /* do not return */
        }
    }
    else
    {
        *((unsigned int *)v3) = 0;
        v7 = v6 + 200;
        flag = sub_7ff3b15e3d8(v7);
        v2 = g_7ff3b17be78;
        if (g_7ff3b17be78 != &g_7ff3b17be78 && (2 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 4)
            sub_7ff3b1388d4(g_7ff3b17be78->field_10, 35, &g_7ff3b131ed0, flag); /* do not return */
        if (flag == 4)
            sub_7ff3b15e650(v7, &v1); /* do not return */
        if (flag == 1)
        {
            *((unsigned int *)v3) = flag;
        }
        else
        {
            if (flag != 2 && flag != 3 && flag != 5 && flag != 6 && flag != 7)
                goto LABEL_7ff3b14c712;
            *((unsigned int *)v3) = 3;
        }
        v2 = g_7ff3b17be78;
LABEL_7ff3b14c712:
    }
    if (v2 == &g_7ff3b17be78)
    {
        return;
    }
    else if (!(v2->field_1c & 1))
    {
        return;
    }
    else if (v2->field_19 >= (v4 >= 0 ? 5 : 2))
    {
        sub_7ff3b1388d4(v2->field_10, 39, &g_7ff3b131ed0, v4); /* do not return */
    }
    else
    {
        return;
    }
}
