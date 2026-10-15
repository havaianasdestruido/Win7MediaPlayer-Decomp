/* sub_100055338 @ 0x100055338
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100055338  (927 bytes, 75 basic blocks)
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

typedef struct struct_1 {
    char padding_0[40];
    struct struct_0 *field_28;
} struct_1;

typedef struct struct_2 {
    char padding_0[72];
    long long field_48;
} struct_2;

typedef struct struct_6 {
    char padding_0[72];
    struct struct_5 *field_48;
    unsigned int field_50;
    unsigned int field_54;
    char padding_58[24];
    unsigned int field_70;
    char padding_74[24];
    char field_8c;
} struct_6;

typedef struct struct_5 {
    char padding_0[137];
    char field_89;
} struct_5;

typedef struct struct_9 {
    char padding_0[24];
    long long field_18;
} struct_9;

typedef struct struct_4 {
    unsigned int field_0;
} struct_4;

typedef struct struct_10 {
    char padding_0[136];
    char field_88;
} struct_10;

typedef struct struct_11 {
    char padding_0[136];
    char field_88;
} struct_11;

typedef struct struct_12 {
    char padding_0[72];
    unsigned long long field_48;
    char padding_50[8];
    unsigned int field_58;
    unsigned int field_5c;
    char padding_60[8];
    unsigned int field_68;
    unsigned int field_6c;
    unsigned int field_70;
} struct_12;

typedef struct struct_0 {
    char padding_0[12];
    int field_c;
} struct_0;

typedef struct struct_3 {
    unsigned int field_0;
} struct_3;

typedef struct struct_7 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} struct_7;

typedef struct struct_8 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} struct_8;

extern long long g_100007240;
extern long long g_100007470;
extern long long g_100007570;
extern unsigned int g_10000d998;
extern struct_7 *g_1000de430;
extern struct_8 *g_1000de490;
extern struct_3 *g_1000e1e90;
extern unsigned int g_1000e2d68;
extern unsigned int g_1000e2d6c;
extern unsigned int g_1000e2d70;
extern unsigned int g_1000e2d74;

int sub_100055338(void)
{
    struct_1 *idx4;  // rdx
    int flag;  // r8d
    struct_2 *v10;  // rcx, Other Possible Types: struct_9 *
    unsigned int *ptr6;  // r11
    struct_6 *p;  // rcx, Other Possible Types: unsigned int [22]
    struct_5 *v13;  // r12
    unsigned int v14;  // r13d
    unsigned int addr[5];  // rcx
    unsigned int v17;  // eax
    unsigned int v18;  // edx
    unsigned int v19;  // r14d
    unsigned int choice;  // r8d
    unsigned int v20;  // eax
    unsigned int ptr3[5];  // rcx
    unsigned int v23;  // eax
    unsigned int v24;  // r8d
    unsigned int v25;  // r14d
    unsigned int v26;  // eax
    unsigned int ptr4[3];  // rax
    unsigned int v28;  // edx
    unsigned int v29;  // r12d
    unsigned int flag2;  // r8d
    unsigned int v30;  // ecx
    unsigned int ptr5[3];  // rax
    unsigned int v32;  // r9d
    unsigned int v33;  // ebx
    unsigned int v34;  // r8d
    unsigned int v35;  // r8d
    unsigned int v36;  // r8d
    unsigned int v37;  // r8d
    struct_12 *ptr;  // rcx, Other Possible Types: unsigned int [26]
    struct_4 **ptr8;  // rax
    unsigned int v39;  // ecx
    unsigned int v40;  // eax
    unsigned int v42;  // edx
    unsigned int v43;  // ecx
    unsigned int v44;  // eax
    unsigned int v46;  // edx
    unsigned int v47;  // ecx
    struct_10 *ptr7;  // rcx, Other Possible Types: struct_11 *
    char v49;  // cc_dep1

    flag = idx4->field_28->field_c;
    if (flag <= 5)
    {
        if (flag == 5)
        {
            v13 = p->field_48;
            if (v13 && p->field_70 != 4294967294)
            {
                v14 = p->field_50;
                addr = (!(v13->field_89 & 8) ? g_1000de430 : sub_100056254(v13, &g_100007470, 2, 0));
                v17 = (!(p->field_8c & 32) ? addr[2] : addr[4]);
                v18 = addr[0];
                v19 = p->field_54 + addr[3];
                if ((v18 & 4294967168) != 4294967168)
                {
                    v20 = (v18 & 4294967168) - 1 ^ ~(v18) & 127;
                    addr[0] = v20;
                    if (!(v20 & 4294967168))
                        sub_100059224(); /* do not return */
                }
                ptr3 = (!(v13->field_89 & 16) ? g_1000de490 : sub_100056254(v13, &g_100007570, 2, 0));
                v23 = (!(p->field_8c & 32) ? ptr3[2] : ptr3[4]);
                v24 = ptr3[0];
                v25 = v19 + ptr3[3];
                if ((v24 & 4294967168) != 4294967168)
                {
                    v26 = (v24 & 4294967168) - 1 ^ ~(v24) & 127;
                    ptr3[0] = v26;
                    if (!(v26 & 4294967168))
                        sub_100059224(); /* do not return */
                }
                sub_100058a34(v14 + v17 + v23, v25); /* do not return */
            }
            ptr4 = sub_100056254();
            v28 = ptr4[0];
            v29 = ptr4[2];
            if ((v28 & 4294967168) != 4294967168)
            {
                v30 = (v28 & 4294967168) - 1 ^ ~(v28) & 127;
                ptr4[0] = v30;
                if (!(v30 & 4294967168))
                    sub_100059224(ptr4); /* do not return */
            }
            ptr5 = sub_100056254(p, &g_100007240, 2, 0);
            v32 = ptr5[0];
            v33 = ptr5[2];
            if ((v32 & 4294967168) != 4294967168)
            {
                v34 = (v32 & 4294967168) - 1 ^ ~(v32) & 127;
                ptr5[0] = v34;
                if (!(v34 & 4294967168))
                    sub_100059224(ptr5); /* do not return */
            }
            sub_100058a34(v33, v29); /* do not return */
        }
        if (flag)
        {
            choice = flag - 1;
            if (flag == 1)
                sub_100058a34(p[20], p[21]); /* do not return */
            flag2 = choice - 1;
            if (choice == 1)
            {
                sub_100058a9c(ptr->field_58, ptr->field_5c); /* do not return */
            }
            else if (flag2 == 1)
            {
                sub_100058a9c(ptr->field_68, ptr->field_6c); /* do not return */
            }
            else if (flag2 == 2)
            {
                sub_100058a9c(ptr[24], ptr[25]); /* do not return */
            }
LABEL_1000555b8:
            ptr8 = sub_100057fa0(v10->field_18);
            if (ptr8)
            {
                ptr6 = &*(ptr8)->field_0;
                v39 = *(ptr6);
                if ((v39 & 4294967168) != 4294967168)
                    *(ptr6) = (v39 & 4294967168) + 128 ^ v39 & 127;
            }
            else
            {
                ptr6 = &g_10000d998;
            }
        }
        else
        {
            if (v10->field_48)
                sub_1000587d8(v10->field_48); /* do not return */
            ptr6 = &g_1000e1e90->field_0;
        }
        if (!ptr6)
            return;
        return;
    }
    v35 = flag - 6;
    if (flag == 6)
    {
        if (!ptr->field_48)
        {
            sub_100058a9c(ptr->field_68, ptr->field_6c); /* do not return */
        }
        else if (p->field_70 != 4294967294)
        {
            sub_100058a9c(ptr->field_58, ptr->field_5c); /* do not return */
        }
        else
        {
            sub_100058a9c(ptr->field_68, ptr->field_6c); /* do not return */
        }
    }
    v36 = v35 - 13;
    if (v35 == 13)
    {
        v49 = ptr7->field_88 & 1;
LABEL_1000556f8:
        return;
    }
    v37 = v36 - 2;
    if (v36 == 2)
    {
        v49 = ptr7->field_88 & 2;
        goto LABEL_1000556f8;
    }
    else if (v37 == 42)
    {
        v44 = sub_10005ef0c();
        v46 = g_1000e2d6c != v44;
        if (v46)
            v47 = v44;
        else
            v47 = g_1000e2d6c;
        g_1000e2d6c = v47;
        if (g_1000e2d68 && !v46)
            return;
        4297066256();
    }
    else if (v37 == 43)
    {
        v40 = sub_10005ef0c();
        v42 = g_1000e2d74 != v40;
        if (v42)
            v43 = v40;
        else
            v43 = g_1000e2d74;
        g_1000e2d74 = v43;
        if (g_1000e2d70 && !v42)
            sub_100058780(); /* do not return */
        4297066256();
    }
    goto LABEL_1000555b8;
}
