/* sub_100067a88 @ 0x100067a88
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100067a88  (594 bytes, 43 basic blocks)
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
    unsigned long long field_0;
    struct struct_1 *field_8;
    long long field_10;
    char padding_18[16];
    long long field_28;
    long long field_30;
    long long field_38;
    char padding_40[224];
    unsigned int field_120;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

extern unsigned long long g_100086110;

int sub_100067a88(long long a0, struct_0 *ptr)
{
    unsigned short *v4;  // r13
    unsigned short *v5;  // rdi
    unsigned short *v6;  // cc_dep1
    long long v7;  // rsi
    long long v8;  // rdi
    char v0;  // [bp-0x268]
    char v1;  // [bp-0x248]
    unsigned long long v2;  // [bp-0x38]

    v2 = g_100086110 ^ &v0;
    if (!ptr || ptr->field_120)
        return sub_10007fa70(v2 ^ &v0);
    v4 = &ptr->field_8->field_0;
    if (v4)
    {
        v5 = v4;
        v6 = v4;
        do
        {
            if (false)
                break;
        } while (!*(v5));
        if (v6)
        {
            if (!ptr->field_10)
                sub_1000640d4(); /* do not return */
            v7 = ptr->field_10;
            if (v7 && sub_10003a0f0(&v1, 520, L"%sserviceinfo.xml", v7) >= 0 && (int)sub_100067800(a0, v4, &v1) >= 0 && (int)sub_100052cbc((struct struct_0 *)&ptr->padding_40[24], &v1) >= 0 && (int)sub_10006818c(a0, &v1, ptr) >= 0)
            {
                sub_1000527f4();
                v8 = ptr->field_28;
                ptr->field_120 = 1;
                if (v8 && sub_10003a0f0(&v1, 520, L"%seula.txt", v7) >= 0 && (int)sub_100067800(a0, v8, &v1) >= 0)
                    sub_100052cbc((struct struct_0 *)&ptr->padding_40[32], &v1);
                if (ptr->field_30 && sub_10003a0f0(&v1, 520, L"%slogo.jpg", v7) >= 0 && (int)sub_100067800(a0, ptr->field_30, &v1) >= 0)
                    sub_100052cbc((struct struct_0 *)&ptr->padding_40[40], &v1);
                if (ptr->field_38 && sub_10003a0f0(&v1, 520, L"%swatermark.jpg", v7) >= 0 && (int)sub_100067800(a0, ptr->field_38, &v1) >= 0)
                {
                    sub_100052cbc((struct struct_0 *)&ptr->padding_40[48], &v1);
                    goto LABEL_100067cb0;
                }
            }
        }
    }
    sub_1000527f4();
LABEL_100067cb0:
    return sub_10007fa70(v2 ^ &v0);
}
