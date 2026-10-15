/* sub_7ff3b14e0fc @ 0x7ff3b14e0fc
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b14e0fc  (499 bytes, 35 basic blocks)
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

typedef struct struct_1 {
    char padding_0[176];
    unsigned long long field_b0;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_7ff3b131eb0;
extern long long g_7ff3b131ed0;
extern struct_0 *g_7ff3b17be78;

int sub_7ff3b14e0fc(void)
{
    unsigned long long v7;  // r8
    struct_1 *v8;  // rcx
    unsigned int v9;  // eax
    unsigned long long v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x40]
    unsigned long flag2;  // [bp-0x38]
    int flag;  // [bp-0x30]
    unsigned int choice;  // [bp-0x2c]
    char v6;  // [bp+0x20]

    v1 = 18446744073709551614;
    if (g_7ff3b17be78 != &g_7ff3b17be78 && (1 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 5)
    {
        v0 = v7;
        sub_7ff3b14b22c(g_7ff3b17be78->field_10, 111, &g_7ff3b131ed0); /* do not return */
    }
    flag2 = 0;
    flag = 0;
    choice = 0;
    v9 = sub_7ff3b157050(&v8->field_b0, &flag2);
    if (g_7ff3b17be78 != &g_7ff3b17be78 && (g_7ff3b17be78->field_1c & 2) && g_7ff3b17be78->field_19 >= 4)
        sub_7ff3b1388d4(g_7ff3b17be78->field_10, 112, &g_7ff3b131ed0, v9); /* do not return */
    if (!v9 && flag > 0)
    {
        if (0 < flag)
            sub_7ff3b13c5a8(&v6, 0 + flag2 + 8); /* do not return */
        8792790009312();
    }
    if (g_7ff3b17be78 != &g_7ff3b17be78 && (1 & g_7ff3b17be78->field_1c))
        sub_7ff3b134f88(g_7ff3b17be78->field_10, 42, &g_7ff3b131eb0); /* do not return */
    if (v8->field_b0)
    {
        8792790009480();
    }
    else if (g_7ff3b17be78 != &g_7ff3b17be78)
    {
        if ((1 & g_7ff3b17be78->field_1c) && g_7ff3b17be78->field_19 >= 5)
            sub_7ff3b1388d4(g_7ff3b17be78->field_10, 44, &g_7ff3b131eb0, 1); /* do not return */
        if (g_7ff3b17be78 == &g_7ff3b17be78)
        {
            sub_7ff3b151698(&flag2);
            return;
        }
        if ((g_7ff3b17be78->field_1c & 2) && g_7ff3b17be78->field_19 >= 4)
            sub_7ff3b1388d4(g_7ff3b17be78->field_10, 114, &g_7ff3b131ed0, 1); /* do not return */
        if (g_7ff3b17be78 == &g_7ff3b17be78)
        {
            sub_7ff3b151698(&flag2);
            return;
        }
        else if (!(1 & g_7ff3b17be78->field_1c))
        {
            sub_7ff3b151698(&flag2);
            return;
        }
        else if (g_7ff3b17be78->field_19 >= 5)
        {
            sub_7ff3b1388d4(g_7ff3b17be78->field_10, 115, &g_7ff3b131ed0, 0); /* do not return */
        }
        else
        {
            sub_7ff3b151698(&flag2);
            return;
        }
    }
    else
    {
        sub_7ff3b151698(&flag2);
        return;
    }
}
