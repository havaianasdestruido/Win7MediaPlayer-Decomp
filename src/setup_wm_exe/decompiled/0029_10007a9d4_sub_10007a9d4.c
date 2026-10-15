/* sub_10007a9d4 @ 0x10007a9d4
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10007a9d4  (472 bytes, 40 basic blocks)
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
    char padding_0[48];
    long long field_30;
    char padding_38[1];
    char field_39;
    char padding_3a[2];
    char field_3c;
} struct_0;

extern long long g_100022090;
extern unsigned long long g_100086110;
extern struct_0 *g_100087a50;

int sub_10007a9d4(long long a0, unsigned int a1, unsigned int *ptr)
{
    unsigned long long v5;  // rsi
    unsigned int v6;  // eax
    unsigned int v8;  // eax
    char v0;  // [bp-0x348]
    char p;  // [bp-0x2e8]
    unsigned int v2;  // [bp-0x2c8]
    unsigned long long v3;  // [bp-0x48]

    v3 = g_100086110 ^ &v0;
    v2 = a1;
    sub_10007d40c(&p);
    if (g_100087a50 != &g_100087a50 && (g_100087a50->field_3c & 1) && g_100087a50->field_39 >= 7)
        sub_100070d94(g_100087a50->field_30, 17, &g_100022090); /* do not return */
    *(ptr) = 0;
    v5 = 4;
    if (sub_1000754ac(a0) == 4)
    {
        v6 = sub_100075298(a0, 0, &p);
        if (v6 >= 0)
        {
            if (p)
                4298113472();
            v6 = 2147942487;
        }
    }
    else
    {
        v8 = sub_10007592c(a0, &p);
        v6 = v8;
    }
    if (g_100087a50 != &g_100087a50 && (g_100087a50->field_3c & 1) && g_100087a50->field_39 >= 7)
        sub_100079cfc(g_100087a50->field_30, 18, &g_100022090); /* do not return */
    if (v6 >= 0)
        4298114152();
    if (g_100087a50 != &g_100087a50 && (g_100087a50->field_3c & 1) && g_100087a50->field_39 >= 7)
        sub_100070d94(g_100087a50->field_30, 25, &g_100022090); /* do not return */
    sub_10007d970(&p);
    return sub_10007fa70(v3 ^ &v0);
}
