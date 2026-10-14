/* sub_100074480 @ 0x100074480
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100074480  (897 bytes, 76 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3f6564d520c416147702a463a50724fd36c46c3a44a8447af89788586fc5efee
 *   Evidence: analysis/report/rea-evidence/wmpdmc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_2 {
    char padding_0[32];
    long long field_20;
    char padding_28[57];
    char field_61;
    char padding_62[14];
    struct struct_0 *field_70;
    char padding_78[8];
    unsigned long long field_80;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;


int sub_100074480(void)
{
    int v17;  // eax
    unsigned int *v18;  // rdi
    unsigned int choice;  // edx
    unsigned int flag3;  // edx
    unsigned long long v29;  // r8
    unsigned long long v30;  // rdx
    long long v31;  // r15
    unsigned long long v32;  // r15
    unsigned long long v19;  // r13
    struct_2 *ptr;  // rsi
    unsigned long long v21;  // rdx
    unsigned int flag;  // edx
    unsigned int flag2;  // edx
    unsigned int v24;  // edx
    unsigned int flag4;  // edx
    int v26;  // ebx
    long long v1;  // [bp+0x20]
    char v3;  // [bp+0x30]
    unsigned int v4;  // [bp+0x34]
    unsigned int v5;  // [bp+0x38]
    unsigned int v6;  // [bp+0x3c]
    char v7;  // [bp+0x40]
    unsigned int v8;  // [bp+0x48]
    char v9;  // [bp+0x50]
    unsigned int v10;  // [bp+0x58]
    unsigned int *v11;  // [bp+0xa0]
    unsigned short v12;  // [bp+0xa8]
    unsigned short v13;  // [bp+0xaa]
    long long v14;  // [bp+0xc0]
    char v15;  // [bp+0xc8]
    long long v16;  // [bp+0xd0]

    if (v17 >= 0)
    {
        v18 = v11;
        if (*(v18) == 2)
            4297067168();
        v19 = 0;
        if (ptr->field_70->field_10->field_0 == 4294967295)
            goto LABEL_100074862;
        v21 = 0;
        do
        {
            flag = *((int *)(v21 + (char *)ptr->field_70->field_10));
            if (flag <= 8)
            {
                if (flag == 8)
                {
                    if (*(v18) != 2)
                    {
                        v26 = -2147220495;
                        goto LABEL_100074835;
                    }
                    else
                    {
                        v26 = sub_100073b14(ptr, v18, &v3);
                        if (v26 >= 0)
                            sub_100058b04(v3, v4, v5, v6); /* do not return */
                    }
                }
                flag2 = flag - 1;
                if (flag != 1)
                {
                    v24 = flag2 - 1;
                    if (flag2 == 1)
                    {
                        v26 = -2147220495;
                        if (!*(v18))
                            4297067168();
                        goto LABEL_100074835;
                    }
                    flag4 = v24 - 3;
                    if (v24 == 3)
                    {
                        v26 = sub_100073930(ptr, v18, v16);
                        goto LABEL_100074833;
                    }
                    else if (flag4 == 1)
                    {
                        if (*(v18) != 2)
                        {
                            v26 = -2147220495;
                            sub_100058a34(v9, v10); /* do not return */
                        }
                        *((unsigned int *)&v1) = 2;
                        sub_1000734d8(ptr, L"point", v18, &v9, v1, "##"); /* do not return */
                        goto LABEL_100074835;
                    }
                    else if (flag4 == 2)
                    {
                        if (*(v18) != 2)
                        {
                            v26 = -2147220495;
                            sub_100058a9c(v7, v8); /* do not return */
                        }
                        *((unsigned int *)&v1) = 2;
                        sub_1000734d8(ptr, L"size", v18, &v7, v1, "##"); /* do not return */
                        goto LABEL_100074835;
                    }
                }
                else
                {
                    v26 = sub_10007354c(ptr, v18, v16);
                    goto LABEL_100074833;
                }
            }
            else
            {
                choice = flag - 9;
                if (flag != 9)
                {
                    flag3 = choice - 1;
                    if (choice == 1)
                    {
                        v16 = 0;
                        v26 = sub_100073efc(ptr, v18);
                        goto LABEL_100074833;
                    }
                    else if (flag3 == 1)
                    {
                        v26 = -2147220495;
                        if (*(v18) == 2)
                            4297067168();
                        goto LABEL_100074835;
                        goto LABEL_100074835;
                    }
                    else if (flag3 == 4)
                    {
                        if (*(v18) != 2)
                        {
                            v26 = -2147220495;
                            sub_1000591bc(v15); /* do not return */
                        }
                        *((unsigned int *)&v1) = 1;
                        sub_1000734d8(ptr, "a", v18, &v15, v1, "L"); /* do not return */
                        goto LABEL_100074835;
                    }
                    v26 = -2147220495;
                }
                else
                {
                    v26 = sub_100073e4c(ptr, v18, v16);
LABEL_100074833:
LABEL_100074835:
                    if (v26 != -2147220495)
                        goto LABEL_1000748cb;
                }
            }
        } while ((v19 += 1, v21 = v19 * 4, *((int *)(v21 + (char *)ptr->field_70->field_10)) != 4294967295));
    }
    else
    {
LABEL_100074862:
    }
    if (v26 == -2147220495)
    {
        v29 = 0;
        if (ptr->field_70->field_10->field_0 != 4294967295)
        {
            v30 = 0;
            do
            {
                if (*((int *)(v30 + (char *)ptr->field_70->field_10)) == 5)
                    sub_100058898(v14, 0); /* do not return */
            } while ((v29 += 1, v30 = v29 * 4, *((int *)(v30 + (char *)ptr->field_70->field_10)) != 4294967295));
        }
    }
    else
    {
LABEL_1000748cb:
        if (v26 < 0)
        {
        }
        else
        {
            if (ptr->field_80)
                sub_10006cb74(v31); /* do not return */
            ptr->field_80 = v32;
        }
    }
    *((unsigned int *)&v1) = v13;
    sub_100074abc(ptr, L"unrecognized value", v14, v12, v1);
    if (ptr->field_80)
        sub_10006cb74(v31); /* do not return */
    ptr->field_80 = v32;
}
