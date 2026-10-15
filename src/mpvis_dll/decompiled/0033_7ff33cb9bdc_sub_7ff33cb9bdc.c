/* sub_7ff33cb9bdc @ 0x7ff33cb9bdc
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb9bdc  (666 bytes, 21 basic blocks)
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
extern struct_1 *g_7ff33ccd6e8;
extern struct_2 *g_7ff33ccd850;

int sub_7ff33cb9bdc(void)
{
    unsigned long long v46;  // rsi
    unsigned long long v47;  // rdi
    unsigned int flag24;  // r10d
    unsigned int flag23;  // r10d
    unsigned int flag22;  // r10d
    unsigned int ptr[6];  // rcx
    int v60;  // xmm4
    int v61;  // xmm2
    uint128_t v62;  // xmm5
    int v63;  // xmm3
    unsigned long long v48;  // r12
    uint128_t v49;  // xmm6
    uint128_t v50;  // xmm7
    unsigned int v51;  // r10d
    unsigned int v52;  // eax
    unsigned int flag21;  // r10d
    unsigned long v54;  // r10
    unsigned long v55;  // r10
    char *v0;  // [bp-0xb8]
    unsigned int v1;  // [bp-0xb0]
    unsigned int v2;  // [bp-0xa8]
    unsigned int flag11;  // [bp-0xa4]
    unsigned int flag10;  // [bp-0xa0]
    unsigned int flag9;  // [bp-0x9c]
    unsigned int flag8;  // [bp-0x98]
    unsigned int v7;  // [bp-0x94]
    unsigned int flag7;  // [bp-0x90]
    unsigned int flag6;  // [bp-0x8c]
    unsigned int flag5;  // [bp-0x88]
    unsigned int flag4;  // [bp-0x84]
    unsigned int v12;  // [bp-0x80]
    unsigned int flag3;  // [bp-0x7c]
    unsigned int flag2;  // [bp-0x78]
    unsigned int choice;  // [bp-0x74]
    unsigned int flag;  // [bp-0x70]
    unsigned int v17;  // [bp-0x6c]
    unsigned int v18;  // [bp-0x68]
    unsigned int flag12;  // [bp-0x64]
    unsigned int flag13;  // [bp-0x60]
    unsigned int flag14;  // [bp-0x5c]
    unsigned int flag15;  // [bp-0x58]
    unsigned int v23;  // [bp-0x54]
    unsigned int flag16;  // [bp-0x50]
    unsigned int flag17;  // [bp-0x4c]
    unsigned int flag18;  // [bp-0x48]
    unsigned int flag19;  // [bp-0x44]
    unsigned int v28;  // [bp-0x40]
    unsigned int flag20;  // [bp-0x3c]
    unsigned int v30;  // [bp-0x38]
    unsigned int v31;  // [bp-0x34]
    unsigned int v32;  // [bp-0x30]
    unsigned int v33;  // [bp-0x2c]
    uint128_t v34;  // [bp-0x28]
    uint128_t v35;  // [bp-0x18]
    unsigned long long v36;  // [bp-0x8]
    unsigned long v37;  // [bp+0x8]
    unsigned long long v38;  // [bp+0x10]
    unsigned long long v39;  // [bp+0x18]
    unsigned int v40[6];  // [bp+0x28]
    unsigned long long v41;  // [bp+0x30]
    unsigned long long v42;  // [bp+0x38]
    unsigned long long v43;  // [bp+0x40]
    unsigned int v44;  // [bp+0x48]

    v37 = vvar_45{r56|8b};
    v38 = v46;
    v39 = v47;
    v36 = v48;
    v35 = v49;
    v34 = v50;
    v51 = ((v43) * 2 | v42) * 2;
    v52 = v41;
    flag21 = v51 | v52;
    if (v51 || v52)
    {
        v54 = flag21 - 1;
        if (flag21 != 1)
        {
            v55 = v54 - 1;
            if ((unsigned int)v54 != 1)
            {
                flag24 = v55 - 1;
                if ((unsigned int)v55 == 1)
                {
LABEL_7ff33cb9c9e:
                    g_7ff33ccd668();
                }
                flag23 = flag24 - 1;
                if (flag24 != 1)
                {
                    flag22 = flag23 - 1;
                    if (flag23 == 1)
                        goto LABEL_7ff33cb9c9e;
                    if (flag22 == 1)
                    {
                        goto LABEL_7ff33cb9c9e;
                    }
                    else if (flag22 == 2)
                    {
                        g_7ff33ccd668();
                    }
                    goto LABEL_7ff33cb9d37;
                }
            }
        }
        g_7ff33ccd6e8();
    }
    else
    {
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
        v17 = 0x3f800000;
        v12 = 0x3f800000;
        v7 = 0x3f800000;
        v2 = 0x3f800000;
LABEL_7ff33cb9d37:
        ptr = v40;
        if (!ptr)
        {
            v1 = v44;
            v0 = &v2;
            g_7ff33ccd850();
        }
        v60 = (int)ptr[4];
        flag12 = 0;
        flag13 = 0;
        flag14 = 0;
        v61 = (int)(DivV(0x40000000, ptr[2]));
        flag15 = 0;
        flag16 = 0;
        flag17 = 0;
        flag18 = 0;
        v62 = DivV(0x40000000, ptr[3]);
        v18 = *((unsigned int *)&v61);
        flag19 = 0;
        flag20 = 0;
        v33 = 0x3f800000;
        v63 = DivV(0x3f800000, SubV(ptr[5], v60));
        v28 = *((unsigned int *)&v63);
        v23 = v62 ^ 0x80000000;
        v32 = *((unsigned int *)&MulV(v60, v63) ^ 0x80000000);
        v30 = *((unsigned int *)&SubV(MulV(ptr[0], v61) ^ 0x80000000, 0x3f800000));
        v31 = AddV(MulV(ptr[1], v62), 0x3f800000);
        g_7ff33ccd668();
    }
}
