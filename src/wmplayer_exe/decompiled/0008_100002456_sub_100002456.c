/* sub_100002456 @ 0x100002456
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100002456  (388 bytes, 9 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 883d9616dfc7586fa88c58013f70e055df9328f3cfc3ef39898c15c6970fb0db
 *   Evidence: analysis/report/rea-evidence/wmplayer_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char g_10000126c;
extern struct_0 *g_100004140;

void sub_100002456(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, char a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned int a14, unsigned long a15, unsigned int a16, unsigned long a17, unsigned long a18)
{
    unsigned long v14;  // rax
    unsigned long v15;  // r15
    unsigned long v16;  // rax
    char *v1;  // [bp+0x20], Other Possible Types: unsigned long
    unsigned int v2;  // [bp+0x7c]
    unsigned int v3;  // [bp+0x8c]
    unsigned long v4;  // [bp+0xa0]
    unsigned long v5;  // [bp+0xb0]
    unsigned long v6;  // [bp+0xb8]
    unsigned long v7;  // [bp+0xc0]
    unsigned long v8;  // [bp+0xc8]
    unsigned long v9;  // [bp+0xd0]
    unsigned long v10;  // [bp+0xd8]
    unsigned long v11;  // [bp+0xe0]
    unsigned long v12;  // [bp+0xe8]
    unsigned long v13;  // [bp+0xf0]

    if (v14 != v15)
    {
        g_100004140();
    }
    else if (a9 == (char)v15)
    {
        if (vvar_23{r56|1b} != (char)v15)
        {
            a5 = v15;
            a4 = v15;
            v1 = &vvar_24{r136|8b};
            4296016032();
        }
        v16 = v15;
        a13 = v16;
        if (a18 != v15)
        {
            v5 = a18;
            v6 = (unsigned short)(a16 >> 16);
            v7 = (unsigned short)a16;
            v8 = (unsigned short)(v3 >> 16);
            v9 = (unsigned short)v3;
            v10 = (unsigned short)(a14 >> 16);
            v11 = (unsigned short)a14;
            v12 = (unsigned short)(v2 >> 16);
            v13 = (unsigned short)v2;
            a5 = &v5;
            a4 = v15;
            v1 = &a13;
            4296016032();
        }
        if (v16 == v15)
            v16 = &g_10000126c;
        v4 = v16;
        a5 = &v4;
        a4 = v15;
        v1 = &a13;
        4296016032();
    }
}
