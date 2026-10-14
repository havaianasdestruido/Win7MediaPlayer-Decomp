/* sub_7ff3714586c @ 0x7ff3714586c
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3714586c  (976 bytes, 78 basic blocks)
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

typedef struct struct_3 {
    struct struct_0 *field_0;
    char padding_8[112];
    char field_78;
    char padding_79[7];
    struct struct_4 *field_80;
    unsigned int field_88;
} struct_3;

typedef struct struct_5 {
    char padding_0[504];
    struct struct_6 *field_1f8;
    struct struct_7 *field_200;
} struct_5;

typedef struct struct_0 {
    char padding_0[504];
    struct struct_1 *field_1f8;
    struct struct_2 *field_200;
} struct_0;

typedef struct struct_4 {
    unsigned short field_0;
} struct_4;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int sub_7ff3714586c(void)
{
    unsigned long long v4;  // rdx
    struct_3 *ptr;  // rcx
    unsigned int v14;  // ebx
    unsigned short *p;  // rsi
    unsigned int v16;  // ecx
    unsigned short *v17;  // rax
    struct_5 *v18;  // r8
    struct_3 *v19;  // rcx
    unsigned short *v20;  // rdx
    struct_3 *v6;  // rdi
    unsigned long long v7;  // rsi
    unsigned int v8;  // ecx
    unsigned short *v9;  // rax
    unsigned long long v10;  // rdx
    struct_3 *v11;  // rcx
    unsigned long long v12;  // r13
    unsigned long long v13;  // r15
    unsigned short *v0;  // [bp-0x68], Other Possible Types: char
    unsigned long long v2;  // [bp+0x10]
    unsigned long long flag;  // [bp+0x18]

    v2 = v4;
    v6 = ptr;
    if (!v4)
        return;
    if (!ptr->field_78)
    {
        v7 = 9;
        v8 = ptr->field_88;
        if (v8 >= 1)
        {
            v9 = &ptr->field_80->field_0;
            v10 = 32;
            if (*(v9) == 32 || v8 >= 1 && (*(v9) == 9 || v8 >= 1 && !((v10 = 13, *(v9) != 13 && (v8 < 1 || (v10 = 10, *(v9) != 10))))))
            {
                v11 = ptr;
                ptr->field_0->field_1f8();
            }
        }
        if (v8 >= 4)
        {
            8792722899256();
        }
        else if (ptr->field_88 >= 9)
        {
            8792722899256();
        }
        else if (ptr->field_88 >= 2)
        {
            8792722899256();
        }
        else if (ptr->field_88 >= 1 && ptr->field_80->field_0 == 60)
        {
            sub_7ff37149ab6(112); /* do not return */
        }
    }
    else
    {
        sub_7ff37134410(&v0);
        v12 = 0x800;
        v13 = 0x800;
        v14 = sub_7ff37134540(&v0, 0x800);
        if (v14 >= 0)
        {
            flag = 0;
            p = (unsigned short *)v0;
            do
            {
                if (0 != (unsigned int)(v13 - 1))
                    continue;
                v13 += v12;
                *(p) = 0;
                if ((unsigned int)v13 >= 0)
                {
                    p = (unsigned short *)v0;
                    v14 = sub_7ff371346e0(&v0, v13 & 4294967295);
                }
                else
                {
                    v14 = 2147942487;
                }
                if (v14 < 0)
                    break;
                v12 = (unsigned int)v12 * 2;
                if (ptr->field_88 >= 2)
                    8792722899256();
                if (ptr->field_88 >= 4)
                    8792722899256();
                if (ptr->field_88 >= 9)
                    8792722899256();
                if (ptr->field_88 >= 1 && ptr->field_80->field_0 == 60)
                    sub_7ff37149ab6(112); /* do not return */
                if (ptr->field_88 >= 6)
                    8792722899256();
                if (ptr->field_88 >= 5)
                    8792722899256();
                if (ptr->field_88 >= 4)
                    8792722899256();
                if (ptr->field_88 >= 6)
                    8792722899256();
                if (ptr->field_88 >= 2)
                    8792722899256();
                if (ptr->field_88 >= 3)
                    8792722899256();
                v16 = ptr->field_88;
                if (v16 < 1 || !((v17 = (unsigned short *)ptr->field_80, *(v17) == 38 || v16 >= 1 && (*(v17) == 60 || v16 >= 1 && !*(v17)))))
                {
                    v18 = ptr->field_0;
                    v19 = ptr;
                    v20 = p;
                    ptr->field_0->field_200();
                }
                v14 = 3222081462;
            } while (true);
        }
        sub_7ff37134a64(&v0);
        if (v14 < 0)
        {
            sub_7ff37134a64(&v0);
        }
        else if (v0)
        {
            8792722898984();
        }
        else
        {
            sub_7ff37145e7c();
            return;
        }
    }
    return;
}
