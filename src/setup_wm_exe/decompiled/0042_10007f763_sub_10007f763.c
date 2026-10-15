/* sub_10007f763 @ 0x10007f763
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10007f763  (378 bytes, 36 basic blocks)
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
    unsigned long long field_0;
} struct_0;

typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_3 {
    char field_0;
} struct_3;

typedef struct struct_4 {
    char field_0;
} struct_4;

typedef struct struct_5 {
    char field_0;
} struct_5;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern char _acmdln;
extern struct_0 *g_100001d68;
extern struct_0 *g_100001d80;
extern unsigned int g_100087ae4;
extern unsigned int g_1000897c0;
extern unsigned long long g_1000897c8;
extern struct_1 *g_1000897d0;

unsigned long long sub_10007f763(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long i, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, char a14, unsigned short a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24)
{
    unsigned long v2;  // rdi
    unsigned long long v3;  // 4101
    unsigned long long v4;  // rsi
    unsigned int v5;  // eax
    struct_0 **cur;  // rdi
    unsigned long v7;  // rcx
    char *v8;  // rdi
    unsigned int v1;  // [bp+0x20]

    v3 = InterlockedCompareExchange64(&g_1000897c8, v2, 0);
    if (v3)
    {
        if ((0 == v3 ? 0 : v3) == v2)
            v4 = 1;
        else
            4298113952();
    }
    if (g_1000897c0 == 1)
        4295490608();
    v5 = g_1000897c0;
    if (!v5)
    {
        g_1000897c0 = 1;
        cur = &g_100001d68;
        a6 = &g_100001d68;
        a5 = v5;
        while (cur < &g_100001d80 && !a5)
        {
            v7 = *(cur);
            if (*(cur))
                (*(cur))();
            a6 = cur + 1;
        }
        if (a5)
            return 255;
    }
    else
    {
        g_100087ae4 = 1;
    }
    if (g_1000897c0 == 1)
        4295490596();
    if (!(unsigned int)v4)
        InterlockedExchange64(&g_1000897c8, 0);
    if (g_1000897d0 && sub_10007fbdc(&g_1000897d0))
        g_1000897d0();
    v8 = *((long long *)&_acmdln);
    if (*((char *)*((long long *)&_acmdln)) <= 32 && (!*((char *)*((long long *)&_acmdln)) || !v1))
    {
        for (i = *((long long *)&_acmdln); *(v8) && *(v8) <= 32; i = v8 + 1);
        sub_10003e528(); /* do not return */
    }
    if (*((char *)*((long long *)&_acmdln)) == 34)
        v1 = !v1;
    4298115264();
}
