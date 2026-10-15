/* sub_100001804 @ 0x100001804
 *
 * MODULE   : wmpconfig_exe  (bin/wmpconfig.exe)
 * ADDRESS  : 0x100001804  (53 bytes, 8 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f1726e36b8a016069b7d9eef811f5ca3799bfed355423f70f51947e67d2ef4f
 *   Evidence: analysis/report/rea-evidence/wmpconfig_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[92];
    unsigned short field_5c;
} struct_0;

unsigned int sub_100001804(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    void* v1;  // rax
    struct_0 *v2;  // rax
    unsigned int v3;  // ebx

    if (v1)
    {
        v2 = sub_100001798(v1);
        if (v2)
        {
            if (v2->field_5c == 2)
            {
                return 2;
            }
            else if (v2->field_5c == 3)
            {
                return 1;
            }
        }
    }
    return v3;
}
