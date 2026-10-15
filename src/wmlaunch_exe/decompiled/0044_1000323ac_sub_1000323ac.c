/* sub_1000323ac @ 0x1000323ac
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x1000323ac  (238 bytes, 20 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 8ea713b95f32c31a11bb1dded4cc8b9620014600f122fff3852c082d9af67b1b
 *   Evidence: analysis/report/rea-evidence/wmlaunch_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[48];
    long long field_30;
    char padding_38[1];
    char field_39;
    char padding_3a[2];
    char field_3c;
} struct_0;

extern long long g_100023188;
extern struct_0 *g_10003daf8;

int sub_1000323ac(void)
{
    unsigned int v3;  // edx
    unsigned int v4;  // ebx
    long long v5;  // rcx
    unsigned int v6;  // eax
    struct_0 *v7;  // rcx
    long long v0;  // [bp-0x18]
    unsigned int v2;  // [bp+0x10]

    v2 = v3;
    v2 = 1;
    v4 = 0;
    while (true)
    {
        v6 = sub_100031bf4(v5, 333, &v2);
        if (v6 >= 0)
        {
            v7 = g_10003daf8;
            if (g_10003daf8 == &g_10003daf8)
                return;
            if ((g_10003daf8->field_3c & 1))
            {
                if (g_10003daf8->field_39 >= 5)
                    break;
                else
                    return;
            }
            else
            {
                return;
            }
        }
        else if (v2)
        {
            if (g_10003daf8 != &g_10003daf8 && (g_10003daf8->field_3c & 1) && g_10003daf8->field_39 >= 2)
            {
                *((unsigned int *)&v0) = v6;
                sub_100030ca8(g_10003daf8->field_30, 28, &g_100023188, v4, v0); /* do not return */
            }
            v4 += 1;
            if (v4 >= 3)
                return;
        }
        else
        {
            v7 = g_10003daf8;
            if (g_10003daf8 == &g_10003daf8)
            {
                return;
            }
            else if (!(g_10003daf8->field_3c & 1))
            {
                return;
            }
            else if (g_10003daf8->field_39 >= 5)
            {
                break;
            }
            else
            {
                return;
            }
        }
    }
    sub_100030bc0(v7->field_30); /* do not return */
}
