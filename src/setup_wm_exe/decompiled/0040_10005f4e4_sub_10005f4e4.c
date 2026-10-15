/* sub_10005f4e4 @ 0x10005f4e4
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10005f4e4  (390 bytes, 37 basic blocks)
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

extern unsigned long long g_100086110;

int sub_10005f4e4(long long a0, unsigned short *a1)
{
    unsigned short *v3;  // rsi
    int v4;  // ebx
    unsigned long v5;  // cc_ndep
    unsigned long v6;  // 4123
    unsigned long v7;  // cc_ndep
    unsigned long v8;  // 4121
    int v9;  // esi
    char v0;  // [bp-0x268]
    unsigned long long v1;  // [bp-0x38]

    v1 = g_100086110 ^ &v0;
    v3 = a1;
    v4 = 0;
    if (a1)
    {
        if ((int)sub_100053354(a1))
        {
            do
            {
                if (false)
                    break;
            } while (*(v3));
            v6 = _ccall(0, 48, 2, ~(18446744073709551615) + 12, v5);
            4295490198();
        }
        else if ((int)sub_100053454(v3))
        {
            do
            {
                if (false)
                    break;
            } while (*(v3));
            v8 = _ccall(0, 48, 2, ~(18446744073709551615), v7);
            4295490198();
        }
    }
    v9 = 0;
    4295490198();
}
