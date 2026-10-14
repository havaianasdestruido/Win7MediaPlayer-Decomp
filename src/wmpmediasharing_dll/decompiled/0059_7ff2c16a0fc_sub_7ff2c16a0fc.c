/* sub_7ff2c16a0fc @ 0x7ff2c16a0fc
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c16a0fc  (248 bytes, 21 basic blocks)
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
    unsigned long long field_0;
} struct_1;

extern long long g_7ff2c161a20;
extern struct_0 *g_7ff2c182e68;
extern struct_1 *g_7ff2c1831a8;

int sub_7ff2c16a0fc(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, char a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, char a19, unsigned long a20, unsigned long a21, unsigned long a22)
{
    struct_0 *v1;  // r15
    unsigned int v2;  // r14d
    unsigned int v3;  // ebx
    char v4;  // sil
    unsigned int v5;  // r13d

    if (sub_7ff2c172ccc(&vvar_19) != 4)
    {
        if (g_7ff2c182e68 != v1 && ((char)v2 & g_7ff2c182e68->field_1c))
            sub_7ff2c1634c4(g_7ff2c182e68->field_10, 32, &g_7ff2c161a20); /* do not return */
        v3 = sub_7ff2c172f4c(&vvar_19, 0);
        if (g_7ff2c182e68 != v1 && (v4 & g_7ff2c182e68->field_1c) && g_7ff2c182e68->field_19 >= 4)
            sub_7ff2c1634e8(g_7ff2c182e68->field_10, 33, &g_7ff2c161a20, v3); /* do not return */
        if (v3 == v2)
            g_7ff2c1831a8();
        sub_7ff2c173188(&vvar_19);
        if (g_7ff2c182e68 != v1 && ((char)v2 & g_7ff2c182e68->field_1c) && g_7ff2c182e68->field_19 >= 5)
            sub_7ff2c1634e8(g_7ff2c182e68->field_10, 35, &g_7ff2c161a20, v3); /* do not return */
        if (v3 == v5)
            sub_7ff2c172c30(&vvar_19);
    }
    sub_7ff2c16b4e8(); /* do not return */
}
