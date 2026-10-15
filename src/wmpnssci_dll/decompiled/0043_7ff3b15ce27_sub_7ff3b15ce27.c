/* sub_7ff3b15ce27 @ 0x7ff3b15ce27
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b15ce27  (399 bytes, 32 basic blocks)
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

extern long long g_7ff3b131e90;
extern struct_0 *g_7ff3b17be78;

int sub_7ff3b15ce27(void)
{
    unsigned int flag;  // edi
    unsigned long v11;  // rsi
    long long *v12;  // rbx
    long long v13;  // rsi
    unsigned long v14;  // rbx
    unsigned int choice;  // edi
    struct_0 *v16;  // rcx
    long long v17;  // rax
    long long *v19;  // r12
    char v0;  // [bp+0x0]
    char v2;  // [bp+0x30]
    char v3;  // [bp+0x7c]
    unsigned int v4;  // [bp+0x80]
    char v5;  // [bp+0x88]
    char v6;  // [bp+0x90]
    char v7;  // [bp+0x98]
    char v8;  // [bp+0xa0]
    unsigned long long v9;  // [bp+0xb0]

    if (flag == 1)
    {
        if (g_7ff3b17be78 != &g_7ff3b17be78 && (g_7ff3b17be78->field_1c & 2) && g_7ff3b17be78->field_19 >= 4)
            sub_7ff3b138910(g_7ff3b17be78->field_10, (unsigned int)v11 + 20, &g_7ff3b131e90, *(v12)); /* do not return */
        v4 = 7;
        sub_7ff3b13a560(&v5);
        sub_7ff3b13a560(&v6);
        sub_7ff3b13a560(&v7);
        sub_7ff3b13a560(&v8);
        v3 = v13;
        if (*((long long *)v14) != v13)
            sub_7ff3b15b26c(&v2, *((long long *)v14)); /* do not return */
        choice = (char)v13;
        v16 = g_7ff3b17be78;
        if (g_7ff3b17be78 != &g_7ff3b17be78 && (g_7ff3b17be78->field_1c & 2) && g_7ff3b17be78->field_19 >= 4)
            sub_7ff3b1388d4(g_7ff3b17be78->field_10, 21, &g_7ff3b131e90, choice & 255); /* do not return */
        if (flag == 1)
        {
            v17 = sub_7ff3b15b538(&v2);
            sub_7ff3b13a748(v19, v17, sub_7ff3b13a81c(v17) & 4294967295);
            v16 = g_7ff3b17be78;
            if (g_7ff3b17be78 == &g_7ff3b17be78)
            {
                sub_7ff3b151c60(&v2);
                sub_7ff3b163ab0(v9 ^ &v0);
                return;
            }
            else if ((g_7ff3b17be78->field_1c & 2) && g_7ff3b17be78->field_19 >= 4)
            {
                sub_7ff3b138910(g_7ff3b17be78->field_10, choice + 21, &g_7ff3b131e90, *(v19)); /* do not return */
            }
        }
    }
    else
    {
        v16 = g_7ff3b17be78;
    }
    if (v16 == &g_7ff3b17be78)
    {
        sub_7ff3b151c60(&v2);
        sub_7ff3b163ab0(v9 ^ &v0);
        return;
    }
    else if (!(v16->field_1c & 1))
    {
        sub_7ff3b151c60(&v2);
        sub_7ff3b163ab0(v9 ^ &v0);
        return;
    }
    else if (v16->field_19 >= 5)
    {
        sub_7ff3b1388d4(v16->field_10, 23, &g_7ff3b131e90, choice); /* do not return */
    }
    else
    {
        sub_7ff3b151c60(&v2);
        sub_7ff3b163ab0(v9 ^ &v0);
        return;
    }
}
