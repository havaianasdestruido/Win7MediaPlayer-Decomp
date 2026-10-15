/* sub_10000448d @ 0x10000448d
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000448d  (152 bytes, 16 basic blocks)
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
    struct struct_1 *field_0;
    char padding_8[8];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_0;

typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

extern long long g_1000019c8;
extern struct_0 *g_10001c260;

unsigned int sub_10000448d(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21)
{
    unsigned int v1;  // eax
    struct_0 *ptr;  // rbx
    struct_0 **v3;  // r12

    if (v1 != 183)
        4296016160();
    ptr = g_10001c260;
    if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 4))
        sub_1000041c8(g_10001c260->field_10, 10, &g_1000019c8); /* do not return */
    if (vvar_48{r56|8b} != v3)
    {
        4296016168();
    }
    else if (g_10001c260 != &g_10001c260)
    {
        while (ptr != v3)
        {
            if (ptr->padding_8 != v3)
                4296015904();
            ptr = ptr->field_0;
        }
        g_10001c260 = &g_10001c260;
        return 0;
    }
    else
    {
        return 0;
    }
}
