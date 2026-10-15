/* DllMain @ 0x7ff33ca6e98
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33ca6e98  (104 bytes, 5 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 5b1cf8de17dc039349e1af0bc0d728e3de3c0a96d9c50e81fc909b8ceb4927e0
 *   Evidence: analysis/report/rea-evidence/mpvis_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern char g_7ff33cc6118;
extern long long g_7ff33ccdb00;
extern unsigned int g_7ff33ccecb0;
extern unsigned int g_7ff33cced60;
extern unsigned long long g_7ff33cced78;
extern unsigned long long g_7ff33cd1260;

int DllMain(void)
{
    unsigned int flag;  // edx
    long long v2;  // rcx

    if (flag == 1)
    {
        g_7ff33ccecb0 = 248;
        g_7ff33cced60 = 769;
        g_7ff33cced78 = &g_7ff33cc6118;
        g_7ff33cd1260 = &g_7ff33ccecb0;
        sub_7ff33ca8634(&g_7ff33ccecb0, &g_7ff33ccdb00, v2); /* do not return */
    }
    else if (!flag)
    {
        sub_7ff33ca84cc(&g_7ff33ccecb0); /* do not return */
    }
    else
    {
        return;
    }
}
