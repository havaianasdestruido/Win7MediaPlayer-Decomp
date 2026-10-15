/* sub_7ff2c16ad79 @ 0x7ff2c16ad79
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c16ad79  (482 bytes, 37 basic blocks)
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

typedef struct struct_1 {
    char padding_0[16];
    struct struct_2 *field_10;
    char padding_18[144];
    struct struct_3 *field_a8;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern long long g_7ff2c161a50;
extern struct_0 *g_7ff2c182e68;

int sub_7ff2c16ad79(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, struct_1 **a5)
{
    struct_1 **v3;  // rax
    struct_1 **v4;  // r12
    struct_1 **v13;  // rcx
    unsigned long long choice;  // rdx
    struct_1 **v15;  // rcx
    char *v16;  // r9
    struct_1 **v17;  // r8
    unsigned int v18;  // edi
    struct_1 **v19;  // rcx
    char *v20;  // r9
    struct_1 **v21;  // r8
    unsigned long v22;  // rdx
    struct_1 **ptr;  // rcx
    unsigned long long v23;  // rdx
    struct_1 **v24;  // rcx
    char *v25;  // r9
    struct_1 **v26;  // r8
    struct_0 **v27;  // rdx
    unsigned int v28;  // eax
    unsigned int *p;  // r14
    struct_1 **v30;  // rcx
    unsigned long v6;  // rdx
    unsigned int v7;  // esi
    struct_0 **v8;  // rdx
    unsigned int v9;  // edi
    struct_1 **v10;  // rcx
    struct_0 **v11;  // rdx
    long long v1;  // [bp+0x20]
    unsigned short flag;  // [bp+0x90]

    if (v3 == v4)
    {
        ptr = a5;
        if (ptr == v4)
            goto LABEL_0x7ff2c16b1ad;
        v6 = *(ptr);
        *(ptr)->field_10();
    }
    else if ((v7 & 0xfffffff8))
    {
        v8 = &g_7ff2c182e68;
        if (g_7ff2c182e68 != &g_7ff2c182e68 && ((char)v9 & g_7ff2c182e68->field_1c) && g_7ff2c182e68->field_19 >= (char)v9)
            sub_7ff2c1634e8(g_7ff2c182e68->field_10, 131, &g_7ff2c161a50, v7 & 0xfffffff8); /* do not return */
        v10 = a5;
        if (a5 == v4)
            goto LABEL_0x7ff2c16b1ad;
        *(a5)->field_10();
    }
    else if (v7 == (unsigned int)v4)
    {
        v11 = &g_7ff2c182e68;
        if (g_7ff2c182e68 != &g_7ff2c182e68 && ((char)v9 & g_7ff2c182e68->field_1c) && g_7ff2c182e68->field_19 >= (char)v9)
            sub_7ff2c1634c4(g_7ff2c182e68->field_10, 132, &g_7ff2c161a50); /* do not return */
        v13 = a5;
        if (a5 == v4)
            goto LABEL_0x7ff2c16b1ad;
        *(a5)->field_10();
    }
    else
    {
        choice = 1;
        if (((char)v7 & 1))
        {
            flag = 0;
            v15 = a5;
            v16 = &flag;
            v17 = v3;
            *(a5)->field_a8();
        }
        else if (((char)v7 & (char)v18))
        {
            flag = 0;
            v19 = a5;
            v20 = &flag;
            v21 = v3;
            v22 = v18;
            *(a5)->field_a8();
        }
        else
        {
            v23 = 4;
            if (((char)v7 & 4))
            {
                flag = 0;
                v24 = a5;
                v25 = &flag;
                v26 = v3;
                *(a5)->field_a8();
            }
            v27 = &g_7ff2c182e68;
            if (g_7ff2c182e68 != &g_7ff2c182e68 && ((char)v9 & g_7ff2c182e68->field_1c) && g_7ff2c182e68->field_19 >= 5)
            {
                *((unsigned int *)&a4) = 1;
                *((unsigned int *)&v1) = 1;
                sub_7ff2c164c6c(g_7ff2c182e68->field_10, 136, &g_7ff2c161a50, 1, v1, a4); /* do not return */
            }
            v28 = 1;
            *(p) = v28;
            v30 = a5;
            if (a5)
                *(a5)->field_10();
        }
    }
}
