/* sub_1000626ec @ 0x1000626ec
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x1000626ec  (434 bytes, 32 basic blocks)
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
    char padding_0[16];
    unsigned int field_10;
    char padding_14[28];
    unsigned long long field_30;
    char padding_38[72];
    long long field_80;
    long long field_88;
    struct struct_0 *field_90;
} struct_0;

typedef struct struct_0 {
    char padding_0[40];
    unsigned long long field_28;
    long long field_30;
    long long field_38;
    char padding_40[24];
    int field_58;
    char padding_5c[100];
    long long field_c0;
} struct_0;

unsigned long long sub_1000626ec(struct_0 *ptr, unsigned int flag, unsigned long a2, unsigned int a3)
{
    long long v1;  // rcx
    unsigned int v2;  // eax

    if (!ptr->field_10)
    {
        sub_1000527f4();
        return 2147549183;
    }
    sub_1000527f4();
    if (!ptr->field_90)
    {
        if (ptr->field_88)
            ptr->field_90 = sub_10005cf68(ptr->field_88, 0);
        if (!ptr->field_90)
            return 2147500037;
    }
    if (flag == 1 && (int)sub_100062190(ptr))
    {
        sub_100060f34(ptr);
        sub_1000527f4();
        return 0;
    }
    if (!(int)sub_10006196c(ptr, 0))
    {
        sub_1000527f4();
        return 2147942402;
    }
    else if (flag != 3)
    {
        v1 = ptr->field_80;
        if (v1 && !sub_10005b038(v1))
        {
            sub_1000527f4();
            return 2147500037;
        }
        sub_1000532e8(v1); /* do not return */
    }
    else
    {
        v2 = sub_10005c534(ptr->field_90, flag, 0, a3);
        if (v2 < 0)
            return v2;
        sub_100060f34(ptr);
        return v2;
    }
}
