/* sub_7ff24f9507e @ 0x7ff24f9507e
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f9507e  (112 bytes, 10 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 28d793e5077afb34b57fd3ac404413a60f06a3985fcc4aa16cccb8525411f8bb
 *   Evidence: analysis/report/rea-evidence/wmpnssui_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[64];
    struct struct_1 *field_40;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

void sub_7ff24f9507e(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned short a5, unsigned short *a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14)
{
    int v2;  // eax
    unsigned short *v3;  // rax
    struct_0 *ptr;  // rsi

    if (v2 < vvar_49{r56|8b})
        8792418812256();
    if ((!(0 < a5 - 8) & 2147500037) >= 0)
    {
        v3 = a6;
        a6 = vvar_49{r56|8b};
        ptr->field_40 = v3;
        if (v3 != vvar_49{r56|8b})
        {
            do
            {
                if (false)
                    break;
            } while (*(v3));
            8792418812400();
        }
    }
    8792418812208();
}
