/* sub_100042869 @ 0x100042869
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100042869  (567 bytes, 39 basic blocks)
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

extern long long g_1000255e0;
extern unsigned long long g_100086f30;
extern unsigned int g_100088814;
extern char g_1000888cc;
extern long long g_100088e00;
extern unsigned long long g_100088e18;
extern char g_100088e20;
extern char g_100088e2c;
extern char g_100088e30;

int sub_100042869(void)
{
    unsigned long v1;  // rax
    unsigned long v2;  // rdi
    unsigned long long v10;  // rcx
    unsigned long v3;  // rdx
    unsigned long v4;  // r8
    unsigned long long v5;  // rcx
    unsigned int v6;  // r13d
    unsigned long long cur;  // rdx
    unsigned int v8;  // eax
    unsigned int v9;  // eax

    if (v1 != v2)
        4298114920();
    v3 = g_100088814;
    v4 = g_100086f30;
    v5 = g_100088814 * 6;
    if (*((long long *)(g_100086f30 + v5 * 8 + 32)) == sub_10004e8d8)
    {
        sub_10004e85c(v5, g_100088814, g_100086f30);
        v4 = g_100086f30;
        v3 = g_100088814;
    }
    if (*((long long *)(v4 + (int)v3 * 48 + 32)) == sub_10004d1d0)
    {
        sub_1000527a0(4, "User chose Custom mode.\r\n");
        if (*((int *)&g_100088e2c) != (unsigned int)v2 && (g_100088e30 >= 4 || g_100088e30 == (char)v2) && (0x8000000000000000 & g_100088e18) && (*((long long *)&g_100088e20) & 0x8000000000000000) == *((long long *)&g_100088e20))
            sub_10003a31c(g_100088e00, &g_1000255e0, v6); /* do not return */
        v3 = g_100088814;
        v4 = g_100086f30;
    }
    if (*((long long *)(v4 + (int)v3 * 48 + 32)) == sub_10004d9d8)
        v3 += vvar_132{r56|8b};
    cur = v3 + vvar_132{r56|8b};
    g_100088814 = cur;
    if (*((long long *)(v4 + (int)cur * 48 + 32)) == sub_100045284)
    {
        v8 = sub_100044744(0);
        cur = g_100088814;
        v4 = g_100086f30;
        if (v8 == (unsigned int)v2)
        {
            cur += vvar_132{r56|8b};
            g_100088814 = cur;
        }
    }
    if (*((long long *)(v4 + (int)cur * 48 + 32)) == sub_100045a4c)
    {
        v9 = sub_1000453c0(0);
        cur = g_100088814;
        v4 = g_100086f30;
        if (v9 == (unsigned int)v2)
        {
            cur += vvar_132{r56|8b};
            g_100088814 = cur;
        }
    }
    if (*((int *)&g_1000888cc) != (unsigned int)v2)
    {
        if (*((long long *)(v4 + (int)cur * 48 + 32)) == sub_10004d9d8)
        {
            cur += vvar_132{r56|8b};
            g_100088814 = cur;
        }
        if (*((long long *)(v4 + (int)cur * 48 + 32)) == sub_10004e454)
        {
            cur += vvar_132{r56|8b};
            g_100088814 = cur;
        }
        if (*((long long *)(v4 + (int)cur * 48 + 32)) == sub_10004e594)
        {
            cur += vvar_132{r56|8b};
            g_100088814 = cur;
        }
        if (*((long long *)(v4 + (int)cur * 48 + 32)) == sub_10004e8d8)
        {
            cur += vvar_132{r56|8b};
            g_100088814 = cur;
        }
        if (*((long long *)(v4 + (int)cur * 48 + 32)) == sub_10004ec5c)
        {
            cur += vvar_132{r56|8b};
            g_100088814 = cur;
        }
        if (*((long long *)(v4 + (int)cur * 48 + 32)) == sub_1000462a8)
        {
            cur += vvar_132{r56|8b};
            g_100088814 = cur;
        }
    }
    v10 = (int)cur * 6;
    if (sub_10004ec5c != *((long long *)(v4 + v10 * 8 + 32)))
        goto LABEL_0x10004244e;
    sub_100053ae4(v10); /* do not return */
}
