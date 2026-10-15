/* sub_10004cbc4 @ 0x10004cbc4
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10004cbc4  (541 bytes, 42 basic blocks)
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
    char padding_0[24];
    struct struct_1 *field_18;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

extern unsigned short g_1000062c0;
extern unsigned long long g_100086110;
extern unsigned int g_100086890;
extern long long g_100088818;
extern unsigned long long g_100088888;
extern unsigned long long g_100088890;
extern unsigned int g_100088f80;

void sub_10004cbc4(unsigned long long a0, unsigned long a1, unsigned int a2, unsigned int a3)
{
    struct_0 *ptr;  // rax
    unsigned short *v6;  // cc_dep1
    unsigned short *v7;  // rdi
    char v0;  // [bp-0x1298]
    unsigned short *v1;  // [bp-0x1278]
    unsigned long long v2;  // [bp-0x1260]
    unsigned long long v3;  // [bp-0x48]

    v3 = g_100086110 ^ &v0;
    v2 = a0;
    if (g_100088f80)
    {
        if (g_100088888)
        {
            if (g_100088f80 == 1122)
                4298114480();
            4298114920();
        }
        else
        {
            if (g_100088890)
            {
                if (g_100088f80 == 1124)
                    4298114480();
                4298114920();
            }
        }
    }
    if (a2)
    {
        4298114504();
    }
    else if (!g_100088818)
    {
        sub_10007fa70(v3 ^ &v0);
        return;
    }
    else if (sub_10004fd8c(g_100088818))
    {
        if (!a3)
        {
            ptr = sub_100066cac(sub_10004fd8c(g_100088818), 0);
            if (ptr)
            {
                v6 = &ptr->field_18->field_0;
                v7 = &g_1000062c0;
                if (ptr->field_18)
                    v7 = &ptr->field_18->field_0;
                do
                {
                    if (false)
                        break;
                } while (!*(v7));
                if (v6)
                    4298114872();
                sub_1000527a0(2, "ERROR: Legacy service specified did not return valid XML.\r\n");
            }
            else if (sub_100066bf8(sub_10004fd8c(g_100088818)))
            {
                sub_100066bf8(sub_10004fd8c(g_100088818));
                4298114872();
            }
        }
        if (!a2 && (a3 || !sub_10004fe1c(g_100088818) && g_100086890))
            4298114912();
        v1 = &g_1000062c0;
        4298114888();
    }
    else
    {
        sub_10007fa70(v3 ^ &v0);
        return;
    }
}
