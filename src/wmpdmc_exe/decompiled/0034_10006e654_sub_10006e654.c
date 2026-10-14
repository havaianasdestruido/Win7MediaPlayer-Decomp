/* sub_10006e654 @ 0x10006e654
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10006e654  (588 bytes, 73 basic blocks)
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
    struct struct_3 *field_0;
    struct struct_4 *field_8;
    unsigned short field_10;
    char padding_12[14];
    struct struct_5 *field_20;
} struct_2;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_1 *field_8;
    unsigned int field_10;
} struct_0;

typedef struct struct_3 {
    unsigned short field_0;
} struct_3;

typedef struct struct_4 {
    unsigned short field_0;
} struct_4;

typedef struct struct_5 {
    unsigned int field_0;
} struct_5;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

int sub_10006e654(void)
{
    struct_2 *ptr;  // rcx
    unsigned short *cur;  // rcx
    struct_2 *v11;  // rcx
    unsigned int v12;  // eax
    struct_2 *j;  // rcx
    struct_2 *v14;  // rcx
    struct_2 *v15;  // rcx
    unsigned int v4;  // edx
    unsigned short *addr;  // rcx
    unsigned int v6;  // eax
    unsigned int flag;  // ecx
    unsigned short *i;  // rax
    long long v9;  // rdx
    struct_2 *v10;  // rcx
    unsigned long p;  // [bp+0x8]

    if (ptr->field_10)
    {
        flag = 0;
    }
    else
    {
        while (true)
        {
            cur = &ptr->field_0->field_0;
            if (*(cur) < 9 || *(cur) > 10 && *(cur) != 13 && *(cur) != 32)
                break;
            ptr->field_0 = cur + 1;
        }
        ptr->field_8 = cur;
        v4 = *(cur);
        if (v4 <= 90)
        {
            if (v4 < 65 && (v4 < 45 || v4 > 46 && (v4 <= 47 || v4 > 57 && v4 > 59)))
                goto LABEL_10006e712;
            while (true)
            {
LABEL_10006e6c6:
                ptr->field_0 = (char *)&ptr->field_0->field_0 + 1;
                addr = &ptr->field_0->field_0;
                v6 = *(addr);
                if (v6 <= 90)
                {
                    if (v6 < 65 && (v6 < 45 || v6 > 46 && (v6 <= 47 || v6 > 57 && v6 > 59)))
                        break;
                }
                else
                {
                    if (v6 != 95 && v6 - 97 > 25)
                        break;
                }
            }
            ptr->field_10 = *(addr);
            *(addr) = 0;
            if (ptr->field_10)
                ptr->field_0 = (char *)&ptr->field_0->field_0 + 1;
            flag = 1;
        }
        else
        {
            if (v4 == 95 || v4 - 97 <= 25)
                goto LABEL_10006e6c6;
LABEL_10006e712:
            if (v4 == 34 || v4 == 39)
            {
                for (ptr->field_0 = cur + 1; *(i); i = &ptr->field_0->field_0)
                {
                    if (ptr->field_0->field_0 != (unsigned short)v4)
                    {
                        *(cur) = ptr->field_0->field_0;
                        cur += 1;
                        ptr->field_0 = ptr->field_0 + 1;
                    }
                    else if (ptr->field_0[1].field_0 == (unsigned short)v4)
                    {
                        *(cur) = v4;
                        cur += 1;
                        ptr->field_0 = ptr->field_0 + 2;
                    }
                    else
                    {
                        *(cur) = 0;
                        ptr->field_0 = ptr->field_0 + 1;
                        flag = 2;
                        goto LABEL_10006e79b;
                    }
                }
            }
        }
    }
LABEL_10006e79b:
    if (flag != 1)
    {
        if (flag != 2)
            return;
        v9 = 1;
        v10 = ptr;
        goto LABEL_10006e7de;
        goto LABEL_10006e7de;
    }
    else
    {
        v11 = ptr;
        if ((unsigned short)sub_10006e304(v11) == 40)
        {
            if (ptr->field_10)
                ptr->field_10 = 0;
            else
                ptr->field_0 = (char *)&ptr->field_0->field_0 + 1;
            v12 = sub_10006e8a8();
        }
        else
        {
            v9 = 0;
            v10 = v11;
LABEL_10006e7de:
            v12 = sub_10006e410(v10, v9);
        }
        if (v12 < 0 || (unsigned short)sub_10006e304(ptr) != 124)
            return;
        if (ptr->field_10)
            ptr->field_10 = 0;
        else
            ptr->field_0 = (char *)&ptr->field_0->field_0 + 1;
        if ((int)sub_100074d7c(ptr->field_20, (ptr->field_20->field_0 & 268435455) - 1, &p) >= 0)
        {
            *((unsigned int *)p) = 3;
            *((unsigned int *)(p + 16)) = 0;
            *((struct struct_4 **)(p + 8)) = ptr->field_8;
            for (j = ptr; true; j = v15)
            {
                v14 = j;
                if (sub_10006e654(v14) < 0)
                    break;
                v15 = ptr;
                if ((unsigned short)sub_10006e304(v15) != 124)
                {
                    sub_10006e968();
                    break;
                }
                else if (ptr->field_10)
                {
                    ptr->field_10 = 0;
                }
                else
                {
                    ptr->field_0 = (char *)&ptr->field_0->field_0 + 1;
                }
            }
        }
        return;
    }
}
