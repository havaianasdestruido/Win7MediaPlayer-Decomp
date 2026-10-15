/* sub_100076c50 @ 0x100076c50
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100076c50  (790 bytes, 66 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): f069226052de289452ef5ff9dd67557193c15308c5351bc7b70b6692b350951b
 *   Evidence: analysis/report/rea-evidence/setup_wm_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[40];
    struct struct_1 *field_28;
    char padding_30[8];
    long long field_38;
    char padding_40[8];
    long long field_48;
    char padding_50[32];
    unsigned long long field_70;
    unsigned int field_78;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

int sub_100076c50(struct_0 *addr, long long a1)
{
    unsigned int v4;  // r15d
    unsigned int v5;  // r14d
    unsigned short *ptr;  // rcx
    unsigned int i;  // eax
    unsigned long v15;  // rdi
    unsigned short *p;  // rcx
    unsigned long long v7;  // r12
    char v8;  // al
    unsigned int v9;  // ebp
    unsigned int v10;  // r14d
    unsigned int v11;  // r15d
    char v12;  // al
    unsigned short *v0;  // [bp-0x58]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x38]
    unsigned int flag;  // [bp+0x8]

    v4 = 4294967295;
    v5 = 4294967295;
    sub_10007d40c(&v2);
    p = &addr->field_28->field_0;
    v7 = 0;
    v8 = 0;
    if (p)
        v8 = *(p);
    if (!v8)
    {
        i = 2147549183;
        goto LABEL_100077065;
    }
    i = sub_10007db7c(a1, L"%s://", p);
    if (i >= 0)
    {
        if ((char)sub_10007eac0(addr->field_28))
        {
            if (addr->field_48)
                4298113472();
            return sub_100076ce9(addr->field_48);
        }
        if (i >= 0)
        {
            if (addr->field_38)
                4298113472();
            return sub_100076df1(addr->field_38);
        }
        v9 = 0;
        if (i >= 0)
        {
            do
            {
                if (v9 >= addr->field_78)
                    break;
                sub_10007d40c(&v1);
                if ((char)sub_10007d3c0(*((long long *)(v7 + addr->field_70)), "#"))
                {
                    v10 = v5;
                    v11 = v9;
                    continue;
                }
                if ((char)sub_10007d3c0(*((long long *)(v7 + addr->field_70)), "&"))
                {
                    v10 = v9;
                    v11 = v4;
                    continue;
                }
                v12 = 0;
                ptr = *((long long *)(v7 + addr->field_70 + 16));
                if (ptr)
                    v12 = *(ptr);
                if (v12)
                {
                    v0 = ptr;
                    i = sub_10007db7c();
                }
                else
                {
                    i = sub_10007db7c();
                    v10 = v5;
                    v11 = v4;
                    if (i < 0)
                        continue;
                    if (!(*((char *)(v7 + addr->field_70 + 32)) & 1))
                        goto LABEL_100076f28;
                    i = sub_10007d7d4(&v1, "=", 4294967295);
                }
LABEL_100076f28:
                v10 = v5;
                v11 = v4;
                if (i >= 0)
                {
                    i = sub_10007d7d4(a1, v1, 4294967295);
                    v10 = v5;
                    v11 = v4;
                }
                v4 = v11;
                v5 = v10;
                sub_10007d970(&v1);
                v9 += 1;
                v7 += 40;
            } while (i >= 0);
            if (v4 != 4294967295)
            {
                i = sub_10007d7d4(a1, "#", 4294967295);
                if (i >= 0)
                    goto LABEL_10007704c;
            }
            else if (v5 != 4294967295)
            {
                i = sub_10007d7d4(a1, "&", 4294967295);
                if (i >= 0)
                {
                    flag = 0;
                    v15 = *((long long *)(addr->field_70 + v5 * 40 + 16));
                    if (v15)
                    {
                        i = sub_10007ec68(v15, 0, &flag);
                        if (i < 0 || !((i = (unsigned int)(int)sub_10007d51c(&v2, (unsigned long long)flag), i >= 0)))
                            goto LABEL_100077038;
                        i = sub_10007ec68(v15, v2, &flag);
                    }
                    else
                    {
                        i = 2147942487;
                    }
                    if (i >= 0)
                        goto LABEL_100077047;
LABEL_100077038:
                    sub_10007d970(&v2);
                    if (i >= 0)
                    {
LABEL_100077047:
LABEL_10007704c:
                        i = sub_10007d7d4(a1);
LABEL_100077065:
                        if (i >= 0)
                        {
                            sub_10007d970(&v2);
                            return i;
                        }
                    }
                }
            }
            else
            {
                goto LABEL_100077065;
            }
        }
    }
    sub_10007d970(a1);
    sub_10007d970(&v2);
    return i;
}
