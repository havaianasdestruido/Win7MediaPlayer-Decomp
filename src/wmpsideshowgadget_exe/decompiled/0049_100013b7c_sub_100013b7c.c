/* sub_100013b7c @ 0x100013b7c
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100013b7c  (195 bytes, 14 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f8f45cd381f60a41cca4834188157d25906911108d7280cb2540d2245327a9d
 *   Evidence: analysis/report/rea-evidence/wmpsideshowgadget_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} struct_0;

extern long long g_10001c468;
extern struct_0 *g_10001c470;
extern unsigned short g_10001c478;
extern unsigned short g_10001c47a;
extern unsigned long long g_10001c480;
extern unsigned long long g_10001c490;
extern unsigned int g_10001e068;
extern char g_10001e06c;
extern char g_10001e070;
extern char g_10001e074;

void sub_100013b7c(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long flag)
{
    char *v1;  // [bp+0x20]

    if (!g_10001c480)
    {
        flag = 0;
        if (g_10001e068 == g_10001c470->padding_0 && *((int *)&g_10001e06c) == g_10001c470->field_4 && *((int *)&g_10001e070) == g_10001c470->field_8 && *((int *)&g_10001e074) == g_10001c470->field_c && g_10001c478 == 65535 && g_10001c47a == 65535)
            4296016040();
        v1 = &flag;
        4296017256();
    }
    else
    {
        if (g_10001c480 && !g_10001c490)
            sub_100013988(&g_10001c468); /* do not return */
        4296016024();
    }
}
