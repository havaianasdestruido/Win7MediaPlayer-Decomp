/* sub_1000558e8 @ 0x1000558e8
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x1000558e8  (1209 bytes, 91 basic blocks)
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

extern unsigned long long g_100086110;

long long sub_1000558e8(unsigned long a0, long long a1, unsigned long long a2, long long a3, long long a4, unsigned int a5, unsigned int a6, unsigned int *ptr)
{
    unsigned long long v10;  // rdx
    unsigned int v11;  // r15d
    unsigned long long v20;  // rdx
    unsigned int v21;  // ebx
    unsigned int v22;  // esi
    unsigned int v23;  // eax
    unsigned long long v24;  // rdx
    unsigned long long v25;  // r8
    unsigned int flag3;  // eax
    unsigned int v12;  // r13d
    unsigned int v13;  // r14d
    unsigned long long v14;  // r8
    void* cur;  // rcx
    unsigned long long v17;  // r8
    void* iter;  // rcx
    char v0;  // [bp-0x498]
    long long v1;  // [bp-0x478]
    unsigned int flag2;  // [bp-0x468]
    unsigned int flag;  // [bp-0x464]
    unsigned int choice;  // [bp-0x460]
    int v5;  // [bp-0x45c]
    char v7;  // [bp-0x24a]
    unsigned long long v8;  // [bp-0x38]

    v8 = g_100086110 ^ &v0;
    if (!a2)
        return sub_10007fa70(v8 ^ &v0);
    v10 = 259;
    v11 = 0;
    *((unsigned int *)&v5) = 0;
    flag = 0;
    v12 = 0;
    choice = 0;
    v13 = 0;
    flag2 = 0;
    v14 = 259;
    cur = &v5 - 4;
    do
    {
    } while (v14 + 2147483387 && *((short *)(a0 - (&v5 - 4) + cur)) && (*((short *)cur) = *((short *)(a0 - (&v5 - 4) + cur)), cur += 2, v14 -= 1, v14 != 1));
    v17 = v14;
    if (!v14)
        cur -= 2;
    *((unsigned short *)cur) = 0;
    iter = &v7 + 2;
    do
    {
    } while (v10 + 2147483387 && *((short *)(-2 + a2 - &v7 + iter)) && (*((short *)iter) = *((short *)(a2 - (&v7 - 2) + iter)), iter += 2, v10 -= 1, v10 != 1));
    v20 = v10;
    if (!v10)
        iter -= 2;
    *((unsigned short *)iter) = 0;
    if (a1)
    {
        if (&v5 != 4)
            4298115984();
        sub_100039ee4(&v5 - 4, 260, a1);
    }
    if (a3)
    {
        if (&v7 != 2)
            4298115984();
        sub_100039ee4(&v7 + 2, 260, a3);
        if (!sub_100053454(&v5 - 4) && !a1)
        {
            if (&v5 != 4)
                4298115984();
            sub_100039ee4(&v5 - 4, 260, a3);
        }
    }
    if (!sub_100053454(&v5 - 4))
        4298114024();
    if (((char)(a5 >> 10) & 1) && !sub_100053454(&v7 + 2))
    {
        goto LABEL_100055b14;
    }
    else if (((char)a5 & 16) && sub_100053454(&v7 + 2))
    {
LABEL_100055b14:
    }
    else
    {
        if (((char)a5 & 4))
        {
            sub_1000527f4(4, "  WMC_CopyFile: File '%S' should always to be installed.  This file will be installed.\r\n", &v5 - 4);
            v21 = a6;
            if (v21 && &v5 != 4)
                sub_100055788(&v5 - 4); /* do not return */
            if ((a5 ^ 8) && &v7 != 2)
                sub_100055690(&v5 - 4, &v7 + 2); /* do not return */
            sub_1000527f4(2, "  WMC_CopyFile: Could not replace file '%S'.  This file will be replaced on reboot.\r\n", &v7 + 2);
            if (&v5 != 4)
            {
                *((unsigned int *)&v1) = 1;
                sub_100054bc4(&v5 - 4, &v7 + 2, v21, a4, v1);
                return sub_10007fa70(v8 ^ &v0);
            }
            return sub_10007fa70(v8 ^ &v0);
        }
        v22 = 2147500037;
        if (&v7 != 2)
        {
            v23 = sub_100054598(&v7 + 2, &flag, &v5);
            v11 = *((unsigned int *)&v5);
        }
        else
        {
            v23 = 2147500037;
        }
        if (v23)
        {
            sub_1000527f4(4, "  WMC_CopyFile: Could not find file version for '%S'.  This file will be overwritten.\r\n", &v7 + 2);
            v21 = a6;
            if (v21 && &v5 != 4)
                sub_100055788(&v5 - 4); /* do not return */
            if ((a5 ^ 8))
                goto LABEL_100055d43;
            goto LABEL_100055d6a;
        }
        else
        {
            if (&v5 != 4)
            {
                v12 = choice;
                v13 = flag2;
                v22 = sub_100054598(&v5 - 4, &flag2, &choice);
            }
            if (v22)
            {
                goto LABEL_100055cf7;
            }
            else
            {
                v24 = (((unsigned short)(v13 >> 16) * 0x10000 | (unsigned short)v13) * 0x10000 | (unsigned short)(v12 >> 16)) * 0x10000 | (unsigned short)v12;
                v25 = (((unsigned short)(flag >> 16) * 0x10000 | (unsigned short)flag) * 0x10000 | (unsigned short)(v11 >> 16)) * 0x10000 | (unsigned short)v11;
                flag3 = (v25 == v24 ? 1 : ~(-(v25 < v24)) & 2);
                if (ptr)
                    *(ptr) = flag3;
                if (flag3 && (((char)a5 & 64) || flag3 != 1))
                {
LABEL_100055cf7:
                }
                else
                {
                    sub_1000527f4(4, "  WMC_CopyFile: File '%S' is newer than the installed version.  This file will be installed.\r\n", &v5 - 4);
                    v21 = a6;
                    if (v21 && &v5 != 4)
                        sub_100055788(&v5 - 4); /* do not return */
                    if (!((char)a5 & 8))
                    {
LABEL_100055d43:
                        if (&v7 != 2)
                            sub_100055690(&v5 - 4, &v7 + 2); /* do not return */
                    }
LABEL_100055d6a:
                    sub_1000527f4(2, "  WMC_CopyFile: Could not replace file '%S'.  This file will be replaced on reboot.\r\n", &v7 + 2);
                    if (&v5 != 4)
                    {
                        *((unsigned int *)&v1) = 1;
                        sub_100054bc4(&v5 - 4, &v7 + 2, v21, a4, v1);
                        return sub_10007fa70(v8 ^ &v0);
                    }
                    return sub_10007fa70(v8 ^ &v0);
                }
            }
            sub_1000527f4(4);
            return sub_10007fa70(v8 ^ &v0);
        }
    }
    sub_1000527f4(4);
    return sub_10007fa70(v8 ^ &v0);
}
