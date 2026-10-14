/* sub_7ff2c171e57 @ 0x7ff2c171e57
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c171e57  (399 bytes, 32 basic blocks)
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

int sub_7ff2c171e57(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, char a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, char a16, char a17, char a18, char a19, unsigned long a20, unsigned long long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, unsigned long a28, unsigned long a29, unsigned long a30)
{
    unsigned int flag;  // edi
    unsigned long v4;  // rsi
    long long *v5;  // rbx
    long long v6;  // rsi
    unsigned long v7;  // rbx
    unsigned int choice;  // edi
    struct_0 *v9;  // rcx
    long long v10;  // rax
    long long *v12;  // r12
    char v0;  // [bp+0x0]
    char v2;  // [bp+0x7c]

    if (flag == 1)
    {
        if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 2) && g_7ff2c182e68->field_19 >= 4)
            sub_7ff2c1643cc(g_7ff2c182e68->field_10, (unsigned int)v4 + 20, &g_7ff2c161a30, *(v5)); /* do not return */
        a15 = 7;
        sub_7ff2c16df64(&vvar_16);
        sub_7ff2c16df64(&vvar_17);
        sub_7ff2c16df64(&vvar_18);
        sub_7ff2c16df64(&vvar_19);
        v2 = v6;
        if (*((long long *)v7) != v6)
            sub_7ff2c17154c(&vvar_5, *((long long *)v7)); /* do not return */
        choice = (char)v6;
        v9 = g_7ff2c182e68;
        if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 2) && g_7ff2c182e68->field_19 >= 4)
            sub_7ff2c1634e8(g_7ff2c182e68->field_10, 21, &g_7ff2c161a30, choice & 255); /* do not return */
        if (flag == 1)
        {
            v10 = sub_7ff2c171818(&vvar_5);
            sub_7ff2c16e14c(v12, v10, sub_7ff2c16e220(v10) & 4294967295);
            v9 = g_7ff2c182e68;
            if (g_7ff2c182e68 == &g_7ff2c182e68)
            {
                sub_7ff2c16e4cc(&vvar_5);
                return sub_7ff2c178780(a21 ^ &v0);
            }
            else if ((g_7ff2c182e68->field_1c & 2) && g_7ff2c182e68->field_19 >= 4)
            {
                sub_7ff2c1643cc(g_7ff2c182e68->field_10, choice + 21, &g_7ff2c161a30, *(v12)); /* do not return */
            }
        }
    }
    else
    {
        v9 = g_7ff2c182e68;
    }
    if (v9 != &g_7ff2c182e68 && (v9->field_1c & 1) && v9->field_19 >= 5)
        sub_7ff2c1634e8(v9->field_10, 23, &g_7ff2c161a30, choice); /* do not return */
    sub_7ff2c16e4cc(&vvar_5);
    return sub_7ff2c178780(a21 ^ &v0);
}
