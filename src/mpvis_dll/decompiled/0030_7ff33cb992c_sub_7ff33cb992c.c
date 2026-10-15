/* sub_7ff33cb992c @ 0x7ff33cb992c
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb992c  (478 bytes, 22 basic blocks)
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

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern struct_0 *g_7ff33ccd668;
extern struct_2 *g_7ff33ccd6a0;
extern struct_1 *g_7ff33ccd6e8;

int sub_7ff33cb992c(void)
{
    unsigned long long v24;  // rbx
    unsigned long long v25;  // rsi
    unsigned int flag15;  // r10d
    unsigned int flag14;  // r10d
    unsigned int flag13;  // r10d
    unsigned int v37[6];  // r8
    unsigned int ptr[3];  // rcx
    unsigned int v39[3];  // rdx
    unsigned long long v26;  // rdi
    uint128_t v27;  // xmm6
    unsigned int v28;  // r10d
    unsigned long long v29;  // r9
    unsigned int v30;  // eax
    unsigned int flag12;  // r10d
    unsigned long v32;  // r10
    unsigned long v33;  // r10
    unsigned int v0;  // [bp-0x58]
    unsigned int flag11;  // [bp-0x54]
    unsigned int flag10;  // [bp-0x50]
    unsigned int flag9;  // [bp-0x4c]
    unsigned int flag8;  // [bp-0x48]
    unsigned int v5;  // [bp-0x44]
    unsigned int flag7;  // [bp-0x40]
    unsigned int flag6;  // [bp-0x3c]
    unsigned int flag5;  // [bp-0x38]
    unsigned int flag4;  // [bp-0x34]
    unsigned int v10;  // [bp-0x30]
    unsigned int flag3;  // [bp-0x2c]
    unsigned int flag2;  // [bp-0x28]
    unsigned int choice;  // [bp-0x24]
    unsigned int flag;  // [bp-0x20]
    unsigned int v15;  // [bp-0x1c]
    uint128_t v16;  // [bp-0x18]
    unsigned long long v17;  // [bp-0x8]
    unsigned long long v18;  // [bp+0x8]
    unsigned long v19;  // [bp+0x10]
    unsigned long long v20;  // [bp+0x18]
    unsigned long long v21;  // [bp+0x28]
    unsigned long long v22;  // [bp+0x30]

    v18 = v24;
    v19 = vvar_60{r56|8b};
    v20 = v25;
    v17 = v26;
    v16 = v27;
    v28 = ((v22) * 2 | v21) * 2;
    v30 = v29;
    flag12 = v28 | v30;
    if (v28 || v30)
    {
        v32 = flag12 - 1;
        if (flag12 != 1)
        {
            v33 = v32 - 1;
            if ((unsigned int)v32 != 1)
            {
                flag15 = v33 - 1;
                if ((unsigned int)v33 == 1)
                {
LABEL_7ff33cb99db:
                    g_7ff33ccd668();
                }
                flag14 = flag15 - 1;
                if (flag15 != 1)
                {
                    flag13 = flag14 - 1;
                    if (flag14 == 1)
                        goto LABEL_7ff33cb99db;
                    if (flag13 == 1)
                    {
                        goto LABEL_7ff33cb99db;
                    }
                    else if (flag13 == 2)
                    {
                        g_7ff33ccd668();
                    }
                    goto LABEL_7ff33cb9a6d;
                }
            }
        }
        g_7ff33ccd6e8();
    }
    else
    {
        v15 = 0x3f800000;
        v10 = 0x3f800000;
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
        v5 = 0x3f800000;
        v0 = 0x3f800000;
LABEL_7ff33cb9a6d:
        if (v37)
        {
            ptr[0] = SubV(MulV(DivV(SubV(v39[0], v37[0]), v37[2]), 0x40000000), 0x3f800000);
            ptr[1] = SubV(MulV(DivV(SubV(v39[1], v37[1]), v37[3]), 0x40000000), 0x3f800000) ^ 0x80000000800000008000000080000000;
            ptr[2] = DivV(SubV(v39[2], v37[4]), SubV(v37[5], v37[4]));
        }
        g_7ff33ccd6a0();
    }
}
