/* sub_100059654 @ 0x100059654
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100059654  (1031 bytes, 73 basic blocks)
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

typedef struct struct_0 {
    char padding_0[254];
    unsigned short field_fe;
} struct_0;

int sub_100059654(void)
{
    struct_0 *v12;  // rdx
    struct_0 *p;  // r14
    unsigned int flag5;  // ecx
    unsigned int flag6;  // ecx
    char v24;  // al
    unsigned long v25;  // cc_ndep
    unsigned long v26;  // 4101
    void* ptr;  // rcx
    unsigned int flag3;  // ecx
    struct_0 *v16;  // rcx
    struct_0 *addr;  // rcx
    unsigned int flag;  // ecx
    unsigned int choice;  // ecx
    unsigned int flag2;  // ecx
    unsigned int flag4;  // ecx
    long long v0;  // [bp-0x88]
    long long v1;  // [bp-0x80]
    long long v2;  // [bp-0x78]
    long long v3;  // [bp-0x70]
    long long v4;  // [bp-0x68]
    long long v5;  // [bp-0x60]
    long long v6;  // [bp-0x58]
    long long v7;  // [bp-0x50]
    long long v8;  // [bp-0x48]
    long long v9;  // [bp-0x40]
    long long v10;  // [bp-0x38]

    p = v12;
    if (!v12)
        return;
    flag3 = *((int *)ptr) & 63;
    if (flag3 <= 7)
    {
        if (flag3 == 7)
        {
LABEL_1000597d4:
            sub_100058674(p, 128);
            p->field_fe = 0;
            return;
        }
        if (flag3 == 4294967294)
        {
            goto LABEL_10005996a;
        }
        else if (flag3 == 4294967295)
        {
            goto LABEL_10005996a;
        }
        else if (flag3)
        {
            if (flag3 == 1)
            {
                sub_100058674(p, 128);
                p->field_fe = 0;
                return;
            }
            if (flag3 == 2)
            {
                goto LABEL_10005986a;
            }
            else if (flag3 != 3)
            {
                if (flag3 == 4)
                {
                    sub_100058674(p, 128);
                    p->field_fe = 0;
                    return;
                }
                if (flag3 == 5)
                {
                    v16 = p;
                    if (!(long long)ptr[8])
                    {
                        addr = v16;
                        sub_100045190(addr, 128);
                        p->field_fe = 0;
                        return;
                    }
                    addr = v16;
                    sub_100058674(addr, 128);
                    p->field_fe = 0;
                    return;
                }
                if (flag3 != 6)
                    goto LABEL_100059810;
                goto LABEL_1000597d4;
            }
            else
            {
                goto LABEL_10005986a;
            }
        }
        else
        {
            goto LABEL_10005996a;
        }
    }
    else
    {
        flag = flag3 - 8;
        if (flag3 == 8)
        {
LABEL_1000599ff:
            sub_100058674(p, 128);
            p->field_fe = 0;
            return;
        }
        choice = flag - 1;
        if (flag != 1)
        {
            flag2 = choice - 1;
            if (choice != 1)
            {
                flag4 = flag2 - 1;
                if (flag2 != 1)
                {
                    flag5 = flag4 - 1;
                    if (flag4 != 1)
                    {
                        flag6 = flag5 - 1;
                        if (flag5 != 1)
                        {
                            if (flag6 == 1)
                            {
                                sub_100058674(p, 128);
                                p->field_fe = 0;
                                return;
                            }
                            if (flag6 != 2)
                            {
LABEL_100059810:
                                goto LABEL_10005996a;
                            }
                            else
                            {
                                goto LABEL_10005986a;
                            }
                        }
                        else
                        {
                            goto LABEL_10005986a;
                        }
                    }
                    else
                    {
                        goto LABEL_10005986a;
                    }
                }
                else
                {
                    goto LABEL_10005986a;
                }
            }
            else
            {
LABEL_10005986a:
            }
        }
        else
        {
            v24 = (char)ptr[8];
            if ((char)ptr[8] <= 1)
            {
                *((unsigned int *)&v6) = (char)ptr[22];
                *((unsigned int *)&v5) = (char)ptr[21];
                *((unsigned int *)&v4) = (char)ptr[20];
                *((unsigned int *)&v3) = (char)ptr[23];
                *((unsigned int *)&v2) = (char)ptr[18];
                *((unsigned int *)&v1) = (char)ptr[17];
                *((unsigned int *)&v0) = (char)ptr[16];
                sub_100058674(p, 128, L"ARGB0<%d,%d,%d,%d>,ARGB1<%d,%d,%d,%d>", (char)ptr[19], v0, v1, v2, v3, v4, v5, v6);
                p->field_fe = 0;
                return;
            }
            if (v24 != 2)
            {
                v26 = _ccall(6, 5, (unsigned long long)v24, 2, v25);
                if (!((char)v26))
                {
                    if (v24 <= 4)
                    {
                        *((unsigned int *)&v10) = (char)ptr[26];
                        *((unsigned int *)&v9) = (char)ptr[25];
                        *((unsigned int *)&v8) = (char)ptr[24];
                        *((unsigned int *)&v7) = (char)ptr[27];
                        *((unsigned int *)&v6) = (char)ptr[22];
                        *((unsigned int *)&v5) = (char)ptr[21];
                        *((unsigned int *)&v4) = (char)ptr[20];
                        *((unsigned int *)&v3) = (char)ptr[23];
                        *((unsigned int *)&v2) = (char)ptr[18];
                        *((unsigned int *)&v1) = (char)ptr[17];
                        *((unsigned int *)&v0) = (char)ptr[16];
                        sub_100058674(p, 128, L"ARGB0<%d,%d,%d,%d>,ARGB1<%d,%d,%d,%d>,ARGB2<%d,%d,%d,%d>", (char)ptr[19], v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10);
                        p->field_fe = 0;
                        return;
                    }
                    else if (v24 == 5)
                    {
                        sub_100058674(p, 128);
                        p->field_fe = 0;
                        return;
                    }
                    else if (v24 == 6)
                    {
                        *((int *)&v1) = (int)ptr[28];
                        *((int *)&v0) = (int)ptr[24];
                        sub_100058674(p, 128, L"DTBFill<C:0x%s,P:%d,S:%d>", (long long)ptr[16], v0, v1);
                        p->field_fe = 0;
                        return;
                    }
                }
LABEL_10005996a:
            }
            else
            {
                goto LABEL_1000599ff;
            }
            addr = p;
            sub_100045190(addr, 128);
            p->field_fe = 0;
            return;
        }
    }
    addr = p;
    sub_100058674(addr, 128);
    p->field_fe = 0;
    return;
}
