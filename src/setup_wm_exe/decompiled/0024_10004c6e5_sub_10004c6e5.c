/* sub_10004c6e5 @ 0x10004c6e5
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10004c6e5  (596 bytes, 42 basic blocks)
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

typedef struct struct_2 {
    struct struct_0 *field_0;
    char padding_8[32];
    unsigned int field_28;
    unsigned int field_2c;
    unsigned int field_30;
    char padding_34[28];
    struct struct_3 *field_50;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_3 {
    unsigned short field_0;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern long long g_1000255b0;
extern unsigned int g_100086894;
extern unsigned int g_1000887ec;
extern struct_2 *g_1000888a0;
extern long long g_100088e00;
extern unsigned long long g_100088e18;
extern char g_100088e20;
extern unsigned int g_100088e2c;
extern char g_100088e30;

long long sub_10004c6e5(unsigned long a0, char *a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, char a9, unsigned long a10, char a11)
{
    unsigned int v7;  // eax
    unsigned int v9;  // edi
    struct_2 *v10;  // rbx
    char v11;  // al
    struct_2 *v12;  // rsi
    struct_2 *v13;  // rcx
    unsigned int v14;  // r13d
    char v0;  // [bp+0x0]
    unsigned int v2;  // [bp+0x20], Other Possible Types: unsigned long
    unsigned short v3;  // [bp+0x6c]
    unsigned short v4;  // [bp+0xa0]
    unsigned long long v5;  // [bp+0x2b0]

    if (v7 != vvar_94{r56|8b})
    {
        sub_10007d40c(&vvar_11);
        v3 |= 4;
        if (sub_10004ba04(&vvar_11) >= vvar_94{r56|8b})
        {
            v2 = &vvar_9;
            4298113088();
        }
        if (v9 != vvar_94{r56|8b})
        {
            a7 = vvar_94{r56|8b};
            a6 = &vvar_9;
            a5 = vvar_94{r56|8b};
            a4 = 3;
            v2 = vvar_94{r56|8b};
            4298113032();
        }
        v10 = g_1000888a0;
        v4 = vvar_94{r56|8b};
        if (g_1000888a0 != vvar_94{r56|8b})
        {
            v4 = vvar_94{r56|8b};
            v11 = vvar_94{r56|8b};
            if (g_1000888a0->field_50 != vvar_94{r56|8b})
                v11 = g_1000888a0->field_50->field_0 != (unsigned short)vvar_94{r56|8b};
            if (v11 != (char)vvar_94{r56|8b})
            {
                a1 = &v4;
                a2 = 260;
                sub_10007e224(&g_1000888a0->field_50, &v4, 260);
                v10 = g_1000888a0;
            }
            v12 = v10;
            if (v10->field_28 != vvar_94{r56|8b})
                4298115592();
            if (v12->field_2c != vvar_94{r56|8b})
                4298115592();
            if (v12->field_30 != vvar_94{r56|8b})
                4298115592();
            v13 = v10;
            v10->field_0->field_10();
        }
        else
        {
            if (v9 != vvar_94{r56|8b})
            {
                if (v4 != (unsigned short)vvar_94{r56|8b} && &v4 != vvar_94{r56|8b})
                    sub_100052b94(&v4, &v4, 260);
                if (g_100086894 == vvar_94{r56|8b} || (int)sub_10004c184(&v4) == vvar_94{r56|8b})
                    sub_100058634(); /* do not return */
            }
            if (g_100088e2c != vvar_94{r56|8b} && (g_100088e30 >= 4 || g_100088e30 == (char)vvar_94{r56|8b}) && (0x8000000000000000 & g_100088e18) && (*((long long *)&g_100088e20) & 0x8000000000000000) == *((long long *)&g_100088e20))
                sub_10003a31c(g_100088e00, &g_1000255b0, v14); /* do not return */
            sub_10007d970(&vvar_11);
            return sub_10007fa70(v5 ^ &v0);
        }
    }
    else if (g_1000887ec != vvar_94{r56|8b})
    {
        4298113072();
    }
    else if (v9 != vvar_94{r56|8b})
    {
        a4 = 4;
        v2 = &vvar_96{r120|4b};
        4298113120();
    }
    else
    {
        4298113112();
    }
}
