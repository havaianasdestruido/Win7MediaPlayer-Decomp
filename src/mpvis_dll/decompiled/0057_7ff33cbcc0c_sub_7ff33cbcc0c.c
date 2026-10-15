/* sub_7ff33cbcc0c @ 0x7ff33cbcc0c
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cbcc0c  (474 bytes, 16 basic blocks)
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

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 *g_7ff33ccd758;

int sub_7ff33cbcc0c(void)
{
    unsigned int p[2];  // r9
    unsigned int v20;  // ymm2
    unsigned int ptr[14];  // rcx
    unsigned int v22[2];  // rdx
    unsigned int v0;  // [bp-0xd8]
    unsigned int flag11;  // [bp-0xd4]
    unsigned int flag10;  // [bp-0xd0]
    unsigned int flag9;  // [bp-0xcc]
    unsigned int flag8;  // [bp-0xc8]
    unsigned int v5;  // [bp-0xc4]
    unsigned int flag7;  // [bp-0xc0]
    unsigned int flag6;  // [bp-0xbc]
    unsigned int flag5;  // [bp-0xb8]
    unsigned int flag4;  // [bp-0xb4]
    unsigned int v10;  // [bp-0xb0]
    unsigned int flag3;  // [bp-0xac]
    unsigned int flag2;  // [bp-0xa8]
    unsigned int choice;  // [bp-0xa4]
    unsigned int flag;  // [bp-0xa0]
    unsigned int v15;  // [bp-0x9c]
    unsigned int v17;  // [bp+0x30]
    unsigned int v18[2];  // [bp+0x38]

    if (p)
    {
        if (((char)((CmpF(0, v20) & 69) >> 2) & 1) || (CmpF(0, v20) & 64))
        {
            v0 = p[0];
            v5 = p[1];
            v10 = 0x3f800000;
            v15 = 0x3f800000;
            flag = 0;
            choice = 0;
            flag2 = 0;
            flag3 = 0;
            flag4 = 0;
            flag5 = 0;
            flag6 = 0;
            flag7 = 0;
            flag8 = 0;
            flag9 = 0;
            flag10 = 0;
            flag11 = 0;
            g_7ff33ccd758();
        }
        ptr[11] = 0;
        memset(&ptr[6], 0, 16);
        memset(&ptr[1], 0, 16);
        if (v22)
        {
            ptr[0] = p[0];
            ptr[5] = p[1];
            ptr[10] = 0x3f800000;
            ptr[12] = MulV(SubV(0x3f800000, p[0]), v22[0]);
            ptr[13] = MulV(SubV(0x3f800000, p[1]), v22[1]);
LABEL_7ff33cbce64:
            ptr[1] = 0;
        }
        else
        {
            memset(&ptr[12], 0, 12);
            ptr[0] = p[0];
            ptr[5] = p[1];
            ptr[10] = 0x3f800000;
        }
        ptr[1 + 1] = 0x3f800000;
        if (!((char)((CmpF(0, v17) & 69) >> 2) & 1) && !(CmpF(0, v17) & 64))
        {
            if (!v18)
                return;
            ptr[12] = AddV(v18[0], ptr[12]);
            ptr[13] = AddV(v18[1], ptr[13]);
            return;
        }
        g_7ff33ccd758();
    }
    else
    {
        ptr[13] = 0;
        ptr[12] = 0;
        ptr[11] = 0;
        ptr[9] = 0;
        ptr[8] = 0;
        ptr[10] = 0x3f800000;
        ptr[5] = 0x3f800000;
        ptr[0] = 0x3f800000;
        ptr[7] = 0;
        ptr[6] = 0;
        memset(&ptr[1], 0, 16);
        goto LABEL_7ff33cbce64;
    }
}
