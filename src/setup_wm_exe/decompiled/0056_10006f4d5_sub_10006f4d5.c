/* sub_10006f4d5 @ 0x10006f4d5
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10006f4d5  (361 bytes, 30 basic blocks)
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

typedef struct struct_1 {
    char padding_0[16];
    struct struct_0 *field_10;
} struct_1;

typedef struct struct_0 {
    char padding_0[116];
    unsigned int field_74;
} struct_0;

void sub_10006f4d5(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned int flag, unsigned long a8, unsigned long a9, unsigned int a10, unsigned long a11, struct_1 *a12)
{
    unsigned int v3;  // r8d
    unsigned short *ptr;  // rax
    unsigned int v5;  // ecx
    unsigned int v6;  // ecx
    unsigned int v7;  // r12d
    unsigned int v8;  // r12d
    long long v9;  // rsi
    long long v10;  // r14
    unsigned int v11;  // eax
    unsigned int choice;  // ebp
    char v1;  // [bp+0xc0]
    char v2;  // [bp+0x2d0]

    v3 = vvar_103{r56|8b} + 1;
    if (ptr)
    {
        v5 = v3;
        *(ptr) = 0;
        v6 = v5 - v3;
        if (v5 != v3 && v6 != v3)
        {
            if (v6 - v3 != v3)
                sub_1000527a0(5, "ERROR: Too many commas in CopyFiles section.\r\n");
            else
                sub_100053148(ptr + 1);
        }
        4298115360();
    }
    else
    {
        if (a12->field_10 && !a12->field_10->field_74 && !((char)(v7 >> 24) & 1))
            v8 = v7 & 4294967231;
        v11 = sub_1000558e8(&v2, v9, &v1, v10, vvar_103{r56|8b}, v8, a10, &vvar_7);
        choice = v11;
        if (v11 < 0 && v11 != 3010)
        {
            a4 = _INSERT(v8 CONCAT 0, 0, v11);
            sub_1000527f4(2, "ERROR: Could not find file '%S' at source '%S' for dest '%S': 0x%x.\r\n", v10, &v2, &v1, a4);
            goto LABEL_10006f6f3;
        }
        if (!v11)
        {
            if (flag == 1)
                choice = 1;
            sub_1000527f4();
        }
        if (a12->field_10)
            4295490198();
LABEL_10006f6f3:
        if (choice == 1)
            flag = 1;
        4295490210();
    }
}
