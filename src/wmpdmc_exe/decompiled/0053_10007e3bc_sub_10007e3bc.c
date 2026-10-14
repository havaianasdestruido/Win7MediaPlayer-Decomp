/* sub_10007e3bc @ 0x10007e3bc
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10007e3bc  (696 bytes, 61 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3f6564d520c416147702a463a50724fd36c46c3a44a8447af89788586fc5efee
 *   Evidence: analysis/report/rea-evidence/wmpdmc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_2 {
    struct struct_0 *field_0;
    char padding_8[131];
    char field_8b;
    char padding_8c[45];
    char field_b9;
    char padding_ba[6];
    unsigned long long field_c0;
    unsigned long long field_c8;
    char padding_d0[8];
    unsigned long long field_d8;
} struct_2;

typedef struct struct_3 {
    unsigned int field_0;
    char padding_4[4];
    char field_8;
} struct_3;

typedef struct struct_0 {
    char padding_0[384];
    struct struct_1 *field_180;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern void g_100004c18;
extern void g_100007198;
extern void g_1000072e8;
extern void g_100007438;
extern void g_100007470;
extern void g_100007570;
extern void g_1000075e8;
extern void g_100007628;
extern void g_100007668;
extern void g_1000076a0;
extern void g_1000076d8;
extern void g_1000077c0;
extern void g_100007858;
extern void g_1000078f0;
extern void g_100007b60;
extern void g_100008070;
extern void g_100008560;

int sub_10007e3bc(void)
{
    struct_2 *ptr;  // rcx
    struct_2 *v3;  // rsi
    void* v4;  // rdx
    unsigned int flag;  // r8d
    unsigned long v6;  // rdx
    char v7;  // 4103
    void* v8;  // r9
    struct_3 *p;  // [bp+0x28]

    v3 = ptr;
    if (ptr->field_c0)
    {
        if (v4 == &g_1000076a0 && flag == 2 || v4 == &g_1000076d8 && flag == 2 || v4 == &g_1000077c0 && flag == 2 || v4 == &g_100007858 && flag == 2 || v4 == &g_1000078f0 && flag == 2)
        {
            sub_10007f730();
        }
        else if (v4 == &g_100007628 && flag == 2)
        {
            sub_10007f93c();
        }
        else if (v4 == &g_1000075e8 && flag == 2)
        {
            sub_10007fa8c();
        }
        else if (v4 == &g_100007668 && flag == 2)
        {
            sub_10007fb6c();
        }
        else if (v4 == &g_100007198 && flag == 3 || v4 == &g_1000072e8 && flag == 1 || v4 == &g_100007438 && flag == 2)
        {
            sub_10007f434();
        }
        else if (v4 == &g_100008070 && flag == 2)
        {
            if (!(ptr->field_8b & 4))
            {
                v6 = ptr->field_c8;
                ptr->field_0->field_180();
            }
        }
        else
        {
            if (v4 == &g_100008560 && flag == 2)
            {
                if (ptr->field_d8)
                {
                    sub_100055880(ptr, &g_100008560, 0);
                    4297067000();
                }
            }
            else
            {
                if (v4 == &g_100007470 && flag == 2 || v4 == &g_100007570 && flag == 2)
                    sub_10007ee10();
            }
        }
        if (v4 == &g_100007b60 && flag == 1 && ((char)p->field_0 & 63) != 63)
            4297066376();
    }
    if (v4 == &g_100004c18 && flag == 2)
    {
        v7 = p->field_8;
        ptr->field_b9 = p->field_8;
        if (!v7 && ptr->field_c0)
            sub_10007ee10(ptr);
    }
    if (v4 == &g_100007b60 && flag == 2)
        return;
    sub_100056910(ptr, v4, flag, v8, p);
    return;
}
