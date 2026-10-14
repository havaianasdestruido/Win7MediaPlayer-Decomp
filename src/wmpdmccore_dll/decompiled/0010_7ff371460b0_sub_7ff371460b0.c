/* sub_7ff371460b0 @ 0x7ff371460b0
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff371460b0  (1046 bytes, 68 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 9334fde75c4e6d018f3c698b0a6b5d415f65d71716906af037147b61b3911242
 *   Evidence: analysis/report/rea-evidence/wmpdmccore_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_7 {
    struct struct_4 *field_0;
    char padding_8[120];
    struct struct_8 *field_80;
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
} struct_7;

typedef struct struct_0 {
    char padding_0[12];
    char field_c;
} struct_0;

typedef struct struct_1 {
    char padding_0[24];
    struct struct_2 *field_18;
} struct_1;

typedef struct struct_4 {
    char padding_0[304];
    struct struct_5 *field_130;
    struct struct_6 *field_138;
} struct_4;

typedef struct struct_8 {
    unsigned short field_0;
} struct_8;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_3 {
    struct struct_1 *field_0;
} struct_3;

extern struct_3 *g_7ff37153fe0;

int sub_7ff371460b0(void)
{
    unsigned long long v4;  // r12
    unsigned long long v5;  // r14
    unsigned long long flag;  // rdi
    struct_0 *v15;  // rdx
    struct_1 **v16;  // rcx
    unsigned long long v17;  // rdx
    unsigned long v18;  // cc_ndep
    unsigned long v19;  // 4113
    unsigned int v20;  // r12d
    unsigned long long v22;  // rsi
    unsigned long long v6;  // r15
    unsigned int v24;  // eax
    unsigned long long v25;  // r9
    unsigned short v26;  // cx
    unsigned long long choice;  // r8
    unsigned int v28;  // edx
    unsigned short *v29;  // rax
    char v30;  // cl
    struct_7 *v31;  // rcx
    unsigned long long v32;  // r8
    unsigned int v33;  // eax
    struct_7 *ptr;  // rcx
    unsigned long v34;  // r8
    unsigned long v35;  // rdx
    unsigned long long v36;  // r9
    struct_7 *v37;  // rcx
    unsigned long v38;  // r8
    unsigned long v39;  // rdx
    unsigned long v40;  // r9
    struct_7 *v41;  // rcx
    unsigned long v42;  // r8
    unsigned long v43;  // rdx
    char v8;  // r15b
    unsigned long long v44;  // r9
    struct_7 *v45;  // rcx
    unsigned long long v9;  // r13
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rdx
    unsigned int v12;  // eax
    unsigned long v13;  // rdi
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp+0x8]
    unsigned long long v2;  // [bp+0x10]
    unsigned long long v3;  // [bp+0x18]

    v2 = v4;
    v3 = v5;
    v0 = v6;
    if (ptr->field_88 >= 1 && ptr->field_80->field_0 == 39)
        v8 = 1;
    else
        v8 = 0;
    v9 = 0;
    v1 = v10;
    if (ptr->field_88 >= 1)
    {
        v11 = "\"";
        if (v8)
            v11 = "'";
        if (*((short *)v11) == ptr->field_80->field_0)
        {
            v12 = sub_7ff37144ba0(ptr, 1);
            v13 = v12;
            if (v12 >= 0)
            {
                flag = 0;
                if ((v15->field_c & 4))
                    8792722900064();
                v16 = g_7ff37153fe0;
                if (!g_7ff37153fe0)
                {
                    v19 = _ccall(0, 48, 2, 96, v18);
                    sub_7ff3714a00a(); /* do not return */
                }
                v17 = 96;
                g_7ff37153fe0->field_0->field_18();
            }
            else
            {
                v20 = 0;
                if ((unsigned int)v13 >= 0)
                {
                    v22 = 192;
                    while (true)
                    {
                        if (v20 == (unsigned int)(v22 - 97))
                        {
                            *((unsigned short *)(v9 + *((long long *)&v15->padding_0[0]))) = 0;
                            if ((unsigned int)v22 >= 0)
                            {
                                v24 = sub_7ff371346e0(v15, v22 & 4294967295);
                                v13 = v24;
                                if (v24 < 0)
                                    goto LABEL_7ff37146479;
                                v22 = (unsigned int)v22 + 96;
                            }
                            else
                            {
                                v13 = 2147942487;
                                goto LABEL_7ff3714654e;
                            }
                        }
                        if (ptr->field_88 < 1)
                        {
                            v13 = 3222081462;
                            v38 = ptr->field_8c;
                            v39 = ptr->field_90;
                            v40 = 10;
                            v41 = ptr;
                            ptr->field_0->field_138();
                        }
                        v25 = 39;
                        if (ptr->field_80->field_0 != (v8 ? 39 : 34))
                        {
                            if (ptr->field_80->field_0 == 38)
                            {
                                if (ptr->field_88 >= 6)
                                {
                                    8792722899256();
                                }
                                else if (ptr->field_88 >= 5)
                                {
                                    8792722899256();
                                }
                                else if (ptr->field_88 >= 4)
                                {
                                    8792722899256();
                                }
                                else if (ptr->field_88 >= 4)
                                {
                                    8792722899256();
                                }
                                else if (ptr->field_88 >= 6)
                                {
                                    8792722899256();
                                }
                                else if (ptr->field_88 >= 2)
                                {
                                    8792722899256();
                                }
                            }
                            v26 = ptr->field_80->field_0;
                            if (v26 == 60 || v26 == 38)
                            {
                                v13 = 3222081462;
                                v38 = ptr->field_8c;
                                v39 = ptr->field_90;
                                v40 = 8;
                                v41 = ptr;
                                ptr->field_0->field_138();
                            }
                            if (v26 == 13 || v26 == 10 || !v26)
                            {
                                v13 = 3222081462;
                                v38 = ptr->field_8c;
                                v39 = ptr->field_90;
                                v40 = 9;
                                v41 = ptr;
                                ptr->field_0->field_138();
                            }
                            choice = 0;
                            v20 += 1;
                            *((unsigned short *)(v9 + *((long long *)&v15->padding_0[0]))) = v26;
                            v28 = ptr->field_88;
                            v9 += 2;
                            v13 = 0;
                            if (v28 >= 1)
                            {
                                v29 = &ptr->field_80->field_0;
                                v30 = 0;
                                if (*(v29) == 10)
                                {
                                    ptr->field_90 = ptr->field_90 + 1;
                                    ptr->field_8c = 0;
                                    v30 = 1;
                                }
                                ptr->field_8c = ptr->field_8c + 1;
                                ptr->field_80 = v29 + 1;
                                ptr->field_88 = v28 - 1;
                                if (v30)
                                {
                                    v31 = ptr;
                                    ptr->field_0->field_130();
                                }
                            }
                            else
                            {
                                v13 = 3222081461;
                            }
                            if ((unsigned int)v13 < 0)
                                goto LABEL_7ff37146479;
                        }
                        else
                        {
LABEL_7ff37146479:
                            if ((unsigned int)v13 == 3222081462)
                            {
                                v38 = ptr->field_8c;
                                v39 = ptr->field_90;
                                v40 = 0;
                                v41 = ptr;
                                ptr->field_0->field_138();
                            }
                            if ((unsigned int)v13 < 0)
                                goto LABEL_7ff3714654e;
                            if (ptr->field_88 < 1)
                            {
                                v34 = ptr->field_8c;
                                v35 = ptr->field_90;
                                v36 = 3;
                                v37 = ptr;
                                ptr->field_0->field_138();
                            }
                            v32 = "\"";
                            if (v8)
                                v32 = "'";
                            if (*((short *)v32) != ptr->field_80->field_0)
                            {
                                v34 = ptr->field_8c;
                                v35 = ptr->field_90;
                                v36 = 3;
                                v37 = ptr;
                                ptr->field_0->field_138();
                            }
                            v33 = sub_7ff37144ba0(ptr, 1);
                            v13 = v33;
                            if (v33 < 0)
                                goto LABEL_7ff3714654e;
                            *((unsigned short *)(*((long long *)&v15->padding_0[0]) + v20 * 2)) = 0;
                            goto LABEL_7ff37146559;
                        }
                    }
                }
LABEL_7ff3714654e:
                sub_7ff37134a64(v15);
LABEL_7ff37146559:
                if ((unsigned int)v13 < 0)
                {
                    return;
                }
                else if (*((long long *)&v15->padding_0[0]))
                {
                    8792722898984();
                }
                else
                {
                    return;
                }
            }
        }
    }
    v42 = ptr->field_8c;
    v43 = ptr->field_90;
    v44 = 3;
    v45 = ptr;
    ptr->field_0->field_138();
}
