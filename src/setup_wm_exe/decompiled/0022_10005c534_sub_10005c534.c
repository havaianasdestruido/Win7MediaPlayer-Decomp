/* sub_10005c534 @ 0x10005c534
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10005c534  (600 bytes, 43 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): f069226052de289452ef5ff9dd67557193c15308c5351bc7b70b6692b350951b
 *   Evidence: analysis/report/rea-evidence/setup_wm_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[40];
    unsigned long long field_28;
    long long field_30;
    long long field_38;
    char padding_40[24];
    int field_58;
    char padding_5c[100];
    long long field_c0;
} struct_0;

extern unsigned long long g_100086110;
extern unsigned int g_100088900;

long long sub_10005c534(struct_0 *ptr, unsigned int a1, unsigned long a2, unsigned long a3)
{
    long long v10;  // r12
    int flag5;  // eax
    unsigned long long v12;  // rdx
    void* cur;  // rcx
    unsigned long long v14;  // rdx
    unsigned long long v16;  // rax
    unsigned int v17;  // ecx
    unsigned int v18;  // ecx
    char v0;  // [bp-0x1538]
    unsigned int flag;  // [bp-0x14e0]
    unsigned int choice;  // [bp-0x14dc]
    unsigned int flag2;  // [bp-0x14d8]
    unsigned long long flag3;  // [bp-0x14d0]
    unsigned long long flag4;  // [bp-0x14c8]
    unsigned int v6;  // [bp-0x14c0]
    char v7;  // [bp-0xa78]
    unsigned long long v8;  // [bp-0x48]

    v8 = g_100086110 ^ &v0;
    v10 = ptr->field_30;
    if (a1 != 3 && ptr->field_38 && sub_100053454(ptr->field_38) && (int)sub_10005c3c8(ptr) < 0 || !v10 || !sub_100053454(v10))
        return sub_10007fa70(v8 ^ &v0);
    flag5 = ptr->field_58;
    if (flag5 != 1)
    {
        if (flag5 > 1)
        {
            if (flag5 <= 4)
            {
                flag3 = 0;
                flag4 = 0;
                v6 = 42;
                flag = 0;
                choice = 0;
                flag2 = 0;
                sub_100053c90(); /* do not return */
            }
            else if (flag5 == 5)
            {
                4298113992();
            }
            else if (flag5 == 6)
            {
                4298113992();
            }
        }
        sub_1000527f4(4, "  Package install complete.  Last result 0x%x.\r\n", 2147500037);
        sub_10005b218(ptr, 0);
    }
    else
    {
        v12 = 519;
        cur = &v7;
        do
        {
        } while (v12 + 2147483127 && *((short *)(cur + v10 - &v7)) && (*((short *)cur) = *((short *)(cur + v10 - &v7)), cur += 2, v14 = v12 - 1, v12 -= 1, v12 != 1));
        if (!v12)
            cur -= 2;
        *((unsigned short *)cur) = 0;
        sub_100039ee4(&v7, 520, " ");
        if (ptr->field_28)
            sub_100039ee4(&v7, 520);
        v16 = sub_100061aa4(ptr->field_c0, 0);
        v17 = v16;
        v18 = (v16 < 100000 ? v17 / 10000 : (unsigned int)((((v17 - (1334532239 * v17 >> 32) & 4294967295) >> 1 & 4294967295) + (1334532239 * v17 >> 32) & 4294967295) >> 16));
        if (v18 > 100)
        {
            g_100088900 = v18 / 10;
        }
        else
        {
            if (v18 < 20)
                v18 = 20;
            g_100088900 = v18;
        }
        4298115360();
    }
    return sub_10007fa70(v8 ^ &v0);
}
