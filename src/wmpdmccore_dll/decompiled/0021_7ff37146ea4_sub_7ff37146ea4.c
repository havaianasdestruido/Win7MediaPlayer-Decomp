/* sub_7ff37146ea4 @ 0x7ff37146ea4
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37146ea4  (597 bytes, 48 basic blocks)
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

typedef struct struct_2 {
    struct struct_0 *field_0;
    char padding_8[120];
    struct struct_3 *field_80;
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
} struct_2;

typedef struct struct_0 {
    char padding_0[312];
    struct struct_1 *field_138;
} struct_0;

typedef struct struct_3 {
    unsigned short field_0;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned long long g_7ff37153138;

int sub_7ff37146ea4(void)
{
    struct_2 *ptr;  // rcx
    unsigned int v5;  // r14d
    unsigned short v14;  // ax
    unsigned long v15;  // r8
    unsigned long v16;  // rdx
    unsigned long long v17;  // r9
    struct_2 *v18;  // rcx
    unsigned int v19;  // eax
    unsigned long long v20;  // r9
    unsigned long v21;  // r8
    unsigned int v22;  // ebp
    unsigned short *cur;  // rsi
    unsigned short *p;  // rdx
    unsigned long v24;  // rdx
    struct_2 *v25;  // rcx
    unsigned short v7;  // si
    unsigned int v8;  // eax
    unsigned long v9;  // rdi
    unsigned int v10;  // ebp
    unsigned short v11;  // cx
    unsigned short v12;  // ax
    unsigned short v13;  // cx
    char v0;  // [bp-0x78]
    unsigned short v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x48]

    v2 = g_7ff37153138 ^ &v0;
    v5 = ptr->field_8c;
    *(p) = 0;
    v7 = 0;
    v8 = sub_7ff37144c60();
    v9 = v8;
    if (v8 < 0)
    {
        sub_7ff371498a0(v2 ^ &v0);
        return;
    }
    if (ptr->field_88 >= 1 && ptr->field_80->field_0 == 120)
    {
        v10 = 0;
        v9 = sub_7ff37144ba0(ptr, 1) & 4294967295;
        if (ptr->field_88 >= 1)
        {
            do
            {
                if (v10 >= 4)
                    break;
                if ((unsigned int)v9 < 0)
                {
                    v21 = ptr->field_8c;
                    v20 = 4;
                    v24 = ptr->field_90;
                    v25 = ptr;
                    ptr->field_0->field_138();
                }
                v11 = ptr->field_80->field_0;
                v12 = v11 - 48;
                if (v12 <= 9)
                {
                    v13 = v12;
                }
                else
                {
                    if (v11 - 65 <= 5)
                    {
                        v14 = 65481;
                    }
                    else
                    {
                        if (v11 - 97 > 5)
                            break;
                        v14 = 65449;
                    }
                    v13 = v11 + v14;
                }
            } while ((v10 += 1, v7 = v7 * 16 | v13, v9 = (unsigned long)(sub_7ff37144ba0(ptr, 1) & 4294967295), ptr->field_88 >= 1));
        }
        if ((unsigned int)v9 < 0)
        {
            v21 = ptr->field_8c;
            v20 = 4;
            v24 = ptr->field_90;
            v25 = ptr;
            ptr->field_0->field_138();
        }
        else if (!v10)
        {
            v15 = ptr->field_8c;
            v16 = ptr->field_90;
            v17 = 12;
            v18 = ptr;
            ptr->field_0->field_138();
        }
        else if ((unsigned int)v9 >= 0)
        {
            v19 = sub_7ff37144c60(ptr, ";", 1);
            v9 = v19;
            if (v19 < 0)
            {
                sub_7ff371498a0(v2 ^ &v0);
                return;
            }
            if (v7 != 9 && v7 != 10 && v7 != 13 && (v7 < 32 || v7 > 55295) && (v7 < 0xe000 || v7 > 65533))
            {
                v20 = 14;
                v21 = v5;
                v24 = ptr->field_90;
                v25 = ptr;
                ptr->field_0->field_138();
            }
            *(p) = v7;
            sub_7ff371498a0(v2 ^ &v0);
            return;
        }
        else
        {
            sub_7ff371498a0(v2 ^ &v0);
            return;
        }
    }
    v22 = 0;
    if (ptr->field_88 >= 1)
    {
        cur = &v1;
        do
        {
            if (v22 >= 5)
                break;
            if ((unsigned int)v9 < 0)
            {
                v21 = ptr->field_8c;
                v20 = 4;
                v24 = ptr->field_90;
                v25 = ptr;
                ptr->field_0->field_138();
            }
        } while (ptr->field_80->field_0 - 48 <= 9 && !((*(cur) = ptr->field_80->field_0, v22 += 1, cur += 2, v9 = (unsigned long)(sub_7ff37144ba0(ptr, 1) & 4294967295), ptr->field_88 < 1)));
    }
    if ((unsigned int)v9 >= 0)
    {
        (&v1)[v22] = 0;
        8792722898976();
    }
    v21 = ptr->field_8c;
    v20 = 4;
    v24 = ptr->field_90;
    v25 = ptr;
    ptr->field_0->field_138();
}
