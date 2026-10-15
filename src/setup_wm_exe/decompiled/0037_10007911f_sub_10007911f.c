/* sub_10007911f @ 0x10007911f
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10007911f  (364 bytes, 38 basic blocks)
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

extern char g_10008895e;

long long sub_10007911f(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, long long a5)
{
    unsigned int v2;  // eax
    unsigned int ptr[35];  // rsi
    unsigned int v4;  // eax
    unsigned long v5;  // rbx
    unsigned int v6;  // ebp
    char v7;  // r12b
    char v1;  // [bp+0x20]

    v4 = v2 - ptr[34];
    if ((v4 ^ v4 >> 31) - (v4 >> 31) > 5000)
        goto LABEL_0x100079131;
    if (ptr[33] != vvar_87{r56|4b})
        if (!((char)ptr[33] & 16))
            goto LABEL_10007915c;
        else
            goto LABEL_0x1000790e9;
LABEL_10007915c:
    if ((int)sub_1000754ac(ptr) == 128)
        goto LABEL_0x1000790e9;
    sub_10007d40c(&a5);
    v6 = v5;
    if (sub_1000755e0(ptr, &a5) >= (unsigned int)v5)
    {
        if (&(unsigned int)v5 != v5)
        {
            sub_100078dcc(a5, &(unsigned int)v5);
            v6 = v5;
        }
        if (!((char)(v6 >> 3) & v7))
        {
            if (((char)v6 & v7) && (char)sub_100075728(ptr, 15) != (char)v5)
            {
                sub_10007d40c(&v1);
                sub_10007d970(&v1);
            }
            else if (g_10008895e != (char)v5)
            {
                sub_10007d40c(&v1);
                if (sub_1000755e0(ptr, &v1) >= (unsigned int)v5)
                    sub_1000792f0(v1);
                sub_10007d970(&v1);
            }
        }
    }
    sub_10007d970(&a5);
}
