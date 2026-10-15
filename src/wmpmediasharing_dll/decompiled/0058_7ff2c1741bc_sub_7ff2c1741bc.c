/* sub_7ff2c1741bc @ 0x7ff2c1741bc
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c1741bc  (253 bytes, 21 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 714d193de7f062968c11a8a946f1fa066d03e1fc5a7bd90dbabc372605416413
 *   Evidence: analysis/report/rea-evidence/wmpmediasharing_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[8];
    unsigned int field_28;
    unsigned int field_2c;
    unsigned int field_30;
} struct_0;

unsigned long long sub_7ff2c1741bc(struct_0 *ptr, unsigned short *a1)
{
    unsigned long long v2;  // rdi
    unsigned short v3[2];  // rax
    char flag;  // [bp+0x8]
    unsigned short v1[2];  // [bp+0x10]

    if (ptr->field_8)
        8792538349752();
    ptr->field_10 = 0;
    ptr->field_18 = 0;
    ptr->field_2c = 0;
    ptr->field_28 = 0;
    ptr->field_0 = 0;
    ptr->field_30 = 1;
    v1 = a1;
    v2 = sub_7ff2c17501c(ptr, 16);
    if ((unsigned int)v2 < 0)
        return 1;
    if (v1[0] == 94)
    {
        if (sub_7ff2c17501c(ptr, 28) >= 0)
        {
            v3 = &v1[1];
            v1 = v3;
            goto LABEL_7ff2c174258;
        }
    }
    else
    {
        if (sub_7ff2c17501c(ptr, 29) >= 0)
        {
            v3 = v1;
LABEL_7ff2c174258:
            flag = 1;
            if (v3[0])
                sub_7ff2c175090(ptr, &v1, &flag);
            if (ptr->field_0)
                return ptr->field_0;
            if (v2 >= ptr->field_10)
                8792537709680();
            *((unsigned long *)(ptr->field_8 + v2 * 16 + 8)) = 2;
            if (sub_7ff2c17501c(ptr, 30) < 0)
                return 1;
            return ptr->field_0;
        }
    }
    return 1;
}
