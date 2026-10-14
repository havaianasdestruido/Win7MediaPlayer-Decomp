/* sub_7ff37146750 @ 0x7ff37146750
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37146750  (1008 bytes, 77 basic blocks)
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

typedef struct struct_5 {
    struct struct_2 *field_0;
    char padding_8[120];
    struct struct_6 *field_80;
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
} struct_5;

typedef struct struct_0 {
    char padding_0[2];
    unsigned short field_2;
} struct_0;

typedef struct struct_1 {
    char padding_0[2];
    unsigned short field_2;
} struct_1;

typedef struct struct_7 {
    char padding_0[48];
    struct struct_8 *field_30;
} struct_7;

typedef struct struct_2 {
    char padding_0[304];
    struct struct_3 *field_130;
    struct struct_4 *field_138;
} struct_2;

typedef struct struct_6 {
    unsigned short field_0;
} struct_6;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_9 {
    struct struct_7 *field_0;
} struct_9;

extern unsigned short g_7ff370f24d0[3];
extern struct_0 g_7ff370f25e0;
extern unsigned short g_7ff370f2620[3];
extern struct_1 g_7ff370f2630;
extern struct_9 *g_7ff37153fe0;

int sub_7ff37146750(void)
{
    unsigned short *v7;  // rax
    unsigned long long v8;  // rsi
    unsigned long v15;  // rdx
    unsigned long long v16;  // r9
    struct_5 *v17;  // rcx
    unsigned long long v18;  // r9
    unsigned long long v19;  // r13
    unsigned int v20;  // ebx
    unsigned long long v21;  // rcx
    unsigned int v22;  // eax
    unsigned long v23;  // rdx
    unsigned short v9;  // ax
    unsigned int v24;  // eax
    unsigned short v25;  // cx
    unsigned short cur[3];  // rax
    unsigned short v27;  // cx
    unsigned short v28;  // dx
    unsigned short iter[3];  // rax
    struct_0 *node;  // rcx
    unsigned short v31;  // ax
    unsigned short v32;  // cx
    unsigned short v33;  // dx
    struct_5 *ptr;  // rdi
    unsigned short ptr5[3];  // rax
    struct_1 *ptr6;  // rcx
    unsigned short v36;  // ax
    unsigned int v37;  // ebx
    unsigned int v38;  // r14d
    unsigned long v39;  // cc_ndep
    unsigned long v40;  // 4120
    unsigned int v41;  // eax
    unsigned int v42;  // edx
    unsigned short *v43;  // rax
    char v44;  // cl
    struct_5 *v45;  // rcx
    unsigned long long v50;  // r8
    char v46;  // al
    unsigned long long v47;  // rdi
    struct_7 **v48;  // rcx
    long long v49;  // rdx
    unsigned int v11;  // eax
    unsigned short v12;  // r15w
    unsigned int v13;  // r12d
    unsigned long v14;  // r8
    unsigned int v0;  // [bp-0x120]
    long long v2;  // [bp+0x20]
    unsigned short v3;  // [bp+0x2c]
    unsigned long long v4;  // [bp+0x68]
    unsigned short *p;  // [bp+0x100008]
    char v6;  // [bp+0x100014], Other Possible Types: unsigned short

    if (!v7)
    {
        v8 = 2147942414;
    }
    else if ((v6 & 4))
    {
        sub_7ff37134a64(vvar_402{r56|8b});
        v9 = *((short *)&v6) & 65487;
        p = v7;
        v6 = v9 | 64;
    }
    else
    {
        sub_7ff37134a64(vvar_402{r56|8b});
        p = v7;
        v6 &= 65423;
    }
    if ((unsigned int)v8 >= 0)
    {
        v18 = ptr->field_88;
        if ((unsigned int)v18 < 1 || (v50 = (unsigned long long)ptr->field_80->field_0, v11 = (((unsigned int)v50 & 65535) + (((unsigned int)v50 & 65535) >> 31 & 31) & 31) - (((unsigned int)v50 & 65535) >> 31 & 31), v0 = (unsigned int)*((int *)&ptr[1].padding_8[92 + 4 * (v50 >> 5)]), !(*((char *)((char *)&v0 + ((long long)(int)(v11 & 31) >> 3))) >> (unsigned long long)((char)v11 & 31 & 7) & 1)))
        {
            if ((unsigned int)v18 < 1 || (v50 = (unsigned long long)_INSERT(v50, 0, ptr->field_80->field_0), v12 != (unsigned short)v50))
            {
                if ((unsigned int)v18 < 1 || !((v50 = (unsigned long long)_INSERT(v50, 0, ptr->field_80->field_0), (unsigned short)v50 == 58)))
                {
                    v14 = ptr->field_8c;
                    v15 = ptr->field_90;
                    v16 = 11;
                    v17 = ptr;
                    ptr->field_0->field_138();
                }
            }
        }
        v13 = 1;
        *(p) = v50;
        v8 = sub_7ff37144ba0(ptr, 1) & 4294967295;
    }
    if ((unsigned int)v8 >= 0)
    {
        v18 = 46;
        v19 = v13 * 2;
        v20 = 192;
        while (true)
        {
            v50 = ptr->field_88;
            if ((unsigned int)v50 >= 1)
            {
                v21 = ptr->field_80->field_0;
                v22 = (unsigned int)v21 & 65535;
                v23 = v22 >> 31 & 31;
                v24 = (v22 + (v22 >> 31 & 31) & 31) - (v22 >> 31 & 31);
                v0 = *((int *)&ptr[1].padding_8[92 + 4 * (v21 >> 5)]);
                if ((*((char *)&v0 + ((v24 & 31) >> 3)) >> ((char)v24 & 31 & 7) & 1))
                    goto LABEL_7ff37146a6f;
            }
            if ((unsigned int)v50 >= 1)
            {
                v25 = 48;
                cur = L"09٠٩۰۹०९০৯੦੯૦૯୦୯௧௯౦౯೦೯൦൯๐๙໐໙༠༩";
                do
                {
                    if (ptr->field_80->field_0 >= v25 && ptr->field_80->field_0 <= cur[1])
                        goto LABEL_7ff37146a6f;
                } while ((v25 = cur[2], cur += 4, v25));
            }
            else if (((unsigned int)v50 < 1 || ptr->field_80->field_0 != 46) && ((unsigned int)v50 < 1 || ptr->field_80->field_0 != 45) && ((unsigned int)v50 < 1 || v12 != ptr->field_80->field_0) && ((unsigned int)v50 < 1 || ptr->field_80->field_0 != 58))
            {
                if ((unsigned int)v50 >= 1)
                {
                    v27 = 0x300;
                    v28 = ptr->field_80->field_0;
                    iter = &g_7ff370f24d0[0];
                    if (v28 < v27 || v28 > iter[1])
                    {
                        v27 = iter[2];
                        iter = &iter[2];
                        if (v27)
                            continue;
                        node = &g_7ff370f25e0.padding_0[0];
                        v31 = 12441;
                        do
                        {
                            if (v28 == v31)
                                goto LABEL_7ff37146a6f;
                        } while ((v31 = node->field_2, node += 2, v31));
                    }
                }
                else if ((unsigned int)v50 >= 1)
                {
                    v32 = 12337;
                    v33 = ptr->field_80->field_0;
                    ptr5 = &g_7ff370f2620[0];
                    if (v33 < v32 || v33 > ptr5[1])
                    {
                        v32 = ptr5[2];
                        ptr5 = &ptr5[2];
                        if (v32)
                            continue;
                        ptr6 = &g_7ff370f2630.padding_0[0];
                        v36 = 183;
                        do
                        {
                            if (v33 == v36)
                                goto LABEL_7ff37146a6f;
                        } while ((v36 = ptr6->field_2, ptr6 += 2, v36));
                    }
                }
                else
                {
                    if ((unsigned int)v8 < 0)
                        break;
                    p[v13] = v38;
                    goto LABEL_7ff37146b3c;
                }
            }
LABEL_7ff37146a6f:
            if (v13 == v20 - 97)
            {
                v37 = v20 + 96;
                *((unsigned short *)(v19 + (char *)p)) = v38;
                v40 = _ccall(8, 3, (unsigned long long)v20, 96, v39);
                if (!((char)v40))
                {
                    v41 = sub_7ff371346e0(vvar_402{r56|8b}, v37);
                    v8 = v41;
                    v20 = v37;
                    if (v41 < 0)
                        break;
                }
                else
                {
                    v8 = 2147942487;
                    break;
                }
            }
            v13 += 1;
            v19 += 2;
            v8 = v38;
            *((unsigned short *)(-2 + v19 + (char *)p)) = ptr->field_80->field_0;
            v42 = ptr->field_88;
            if (v42 >= 1)
            {
                v43 = &ptr->field_80->field_0;
                v44 = 0;
                if (*(v43) == 10)
                {
                    ptr->field_90 = ptr->field_90 + 1;
                    ptr->field_8c = v38;
                    v44 = 1;
                }
                ptr->field_8c = ptr->field_8c + 1;
                ptr->field_80 = v43 + 1;
                ptr->field_88 = v42 - 1;
                if (v44)
                {
                    v45 = ptr;
                    ptr->field_0->field_130();
                }
            }
            else
            {
                v8 = 3222081461;
            }
            if ((unsigned int)v8 < 0)
                break;
            v18 = 46;
        }
        goto LABEL_7ff37146b3c;
    }
    sub_7ff37134a64(vvar_402{r56|8b});
LABEL_7ff37146b3c:
    v46 = v3;
    v47 = v4;
    if ((v46 & 32))
    {
        sub_7ff37146b5e();
        return;
    }
    if ((v46 & 16))
        return;
    if ((v46 & 68))
    {
        if (!v2)
            return;
        8792722900160();
    }
    else
    {
        if (!v2)
            return;
        v48 = g_7ff37153fe0;
        if (!g_7ff37153fe0)
            sub_7ff37149980(v2); /* do not return */
        v49 = v2;
        g_7ff37153fe0->field_0->field_30();
    }
}
