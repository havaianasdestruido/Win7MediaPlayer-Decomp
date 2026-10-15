/* sub_100040aec @ 0x100040aec
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100040aec  (1470 bytes, 106 basic blocks)
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

extern long long g_1000255e0;
extern unsigned long long g_100086110;
extern unsigned int g_100086890;
extern char g_100086f30;
extern unsigned int g_1000887ec;
extern unsigned int g_1000887fc;
extern unsigned int g_100088814;
extern long long g_100088820;
extern unsigned int g_1000888cc;
extern long long g_100088e00;
extern unsigned long long g_100088e18;
extern char g_100088e20;
extern unsigned int g_100088e2c;
extern char g_100088e30;

int sub_100040aec(void)
{
    unsigned int v5;  // edx
    unsigned int v6;  // edx
    unsigned int v15;  // ecx
    unsigned int v16;  // ecx
    unsigned int v17;  // ecx
    unsigned int flag4;  // ecx
    unsigned int v19;  // ecx
    unsigned long v20;  // rdx
    unsigned long long v21;  // rcx
    unsigned long long v22;  // rcx
    unsigned long long v23;  // rcx
    unsigned int v24;  // edx
    unsigned int flag2;  // edx
    unsigned long long v25;  // rcx
    unsigned int v26;  // ecx
    unsigned long v27;  // rcx
    unsigned int flag6;  // ecx
    unsigned int flag5;  // ecx
    unsigned int flag3;  // ecx
    unsigned long long v31;  // rcx
    unsigned long long v32;  // rcx
    unsigned long v33;  // rdx
    unsigned int v8;  // edx
    unsigned int v9;  // edx
    unsigned long long v10;  // r8
    long long v11;  // r9
    long long v12;  // rcx
    unsigned int v14;  // r13d
    char v0;  // [bp-0x618]
    unsigned int flag;  // [bp-0x5d4]
    unsigned int choice;  // [bp-0x5b8]
    unsigned long long v3;  // [bp-0x68]

    v3 = g_100086110 ^ &v0;
    if (v5 <= 83)
    {
        if (v5 != 83)
        {
            v6 = v5 - 2;
            if (v5 == 2)
                4298114944();
            flag2 = v6 - 13;
            if (v6 == 13)
            {
                flag = 0;
                choice = 0;
                4298114792();
            }
            v8 = flag2 - 1;
            if (flag2 != 1)
            {
                v9 = v8 - 2;
                if (v8 == 2)
                    4298114944();
                if (v9 != 2)
                {
                    if (v9 == 25 && v10 == 1026 && g_100088820)
                    {
                        sub_10004f908(g_100088820, v11, 0);
                        sub_10007fa70(v3 ^ &v0);
                        return;
                    }
                }
                else
                {
                    4298114896();
                }
            }
            else if (*((long long *)&g_100086f30) == "K")
            {
                sub_100040460(); /* do not return */
            }
            else if (!g_1000887fc)
            {
                4298114944();
            }
            else if (g_1000887ec)
            {
                4298114944();
            }
            else if (sub_10003b400(v12))
            {
                4298114944();
            }
        }
        else
        {
            4298114944();
        }
    }
    else
    {
        if (v5 == 272)
        {
            4298114792();
        }
        else if (v5 == 273)
        {
            v14 = (unsigned short)v10;
            if (v14 <= 39298)
            {
                if ((unsigned short)v14 == 39298)
                    4298114944();
                v15 = v14 & 65535;
                v16 = v15 - 2;
                if (v15 != 2)
                {
                    v17 = v16 - 0x400;
                    if (v16 != 0x400)
                    {
                        flag4 = v17 - 53;
                        if (v17 != 53)
                        {
                            v19 = flag4 - 1;
                            if (flag4 != 1)
                            {
                                if (v19 == 38216)
                                    4298114872();
                                if (v19 == 38217)
                                {
                                    if (g_100088814)
                                    {
                                        v20 = g_100088814 - 1;
                                        g_100088814 = v20;
                                        v21 = (int)v20 * 6;
                                        if (*((long long *)(*((long long *)&g_100086f30) + v21 * 8 + 32)) == sub_10004ec5c)
                                            sub_100053ae4(v21, v20); /* do not return */
                                        v22 = (int)v20 * 6;
                                        if ((*((long long *)(*((long long *)&g_100086f30) + v22 * 8 + 32)) == sub_10004d9d8 || *((long long *)(*((long long *)&g_100086f30) + v22 * 8 + 32)) == sub_10004e454) && (unsigned int)v20)
                                            g_100088814 = v20 - 1;
                                        4298114872();
                                    }
                                    else
                                    {
                                        sub_10003be30(0); /* do not return */
                                    }
                                }
                                goto LABEL_10004262c;
                            }
                            else
                            {
                                v23 = g_100088814 * 6;
                                if (*((long long *)(*((long long *)&g_100086f30) + v23 * 8 + 32)) == sub_10004d9d8 || *((long long *)(*((long long *)&g_100086f30) + v23 * 8 + 32)) == sub_10004ec5c)
                                {
                                    g_100088814 = g_100088814 + 1;
                                    sub_1000424c4(); /* do not return */
                                }
                            }
                        }
                        else
                        {
                            if (*((long long *)(*((long long *)&g_100086f30) + g_100088814 * 48 + 32)) == sub_10004e454)
                            {
                                v24 = g_100088814 - 1;
                                g_100088814 = v24;
                                sub_1000424c4(); /* do not return */
                            }
                        }
                    }
                    else
                    {
                        if (!(unsigned short)(v10 >> 16) && g_100088820)
                        {
                            v25 = g_100088814 * 6;
                            if (*((long long *)(*((long long *)&g_100086f30) + v25 * 8 + 32)) == sub_10004d9d8)
                                sub_1000537e4(v25); /* do not return */
                            if (!sub_10004f884(g_100088820))
                                4298114912();
                        }
                    }
                }
            }
            else
            {
                v26 = v14 & 65535;
                v27 = v26 - 39299;
                if (v26 == 39299)
                {
                    v33 = *((long long *)&g_100086f30);
                    if (*((long long *)&g_100086f30) == "K")
                        sub_10003c0a8(1); /* do not return */
                    if (*((long long *)(*((long long *)&g_100086f30) + g_100088814 * 48 + 32)) == sub_10004d1d0)
                    {
                        g_1000888cc = 1;
                        sub_1000527a0(4, "User chose Express mode.\r\n");
                        if (g_100088e2c && (g_100088e30 >= 4 || !g_100088e30) && (0x8000000000000000 & g_100088e18) && (*((long long *)&g_100088e20) & 0x8000000000000000) == *((long long *)&g_100088e20))
                            sub_10003a31c(g_100088e00, &g_1000255e0, v14 & 65535); /* do not return */
                        if (g_100086890)
                        {
                            sub_1000527a0(4);
                            4298114712();
                        }
                        v33 = *((long long *)&g_100086f30);
                    }
                    if (v33 == "K")
                    {
                        sub_1000527a0(4);
                        4298114712();
                    }
                    4298114944();
                }
                flag6 = v27 - 1;
                if ((unsigned int)v27 == 1)
                    4298114872();
                flag5 = flag6 - 1;
                if (flag6 == 1)
                {
                    if (*((long long *)(*((long long *)&g_100086f30) + g_100088814 * 48 + 32)) != sub_100043d9c)
                        sub_10003be30(0); /* do not return */
                    g_100088814 = g_100088814 + 1;
                    sub_10003be30(0); /* do not return */
                }
                flag3 = flag5 - 1;
                if (flag5 == 1)
                {
                    v32 = g_100088814 * 6;
                    if (*((long long *)(*((long long *)&g_100086f30) + v32 * 8 + 32)) == sub_100045cbc)
                        sub_100045b68(v32, sub_100045cbc); /* do not return */
                    if (*((long long *)(*((long long *)&g_100086f30) + v32 * 8 + 32)) == sub_100047560)
                        4298114872();
                    4298114872();
                }
                if (flag3 != 1)
                {
                    if (flag3 == 2)
                        4298114256();
LABEL_10004262c:
                    4298114944();
                }
                else
                {
                    v31 = g_100088814 * 6;
                    if (*((long long *)(*((long long *)&g_100086f30) + v31 * 8 + 32)) == sub_100045cbc)
                    {
                        sub_1000527a0(2, "User has declined the EULA.  Setup will terminate.\r\n");
                        4298114944();
                    }
                    if (*((long long *)(*((long long *)&g_100086f30) + v31 * 8 + 32)) == sub_100047560)
                    {
                        sub_1000527a0(2, "User has declined the Service EULA.  The service will not be installed.\r\n");
                        4298114944();
                    }
                }
            }
            4298114440();
        }
        else if (v5 == 307)
        {
            sub_100040aa8(); /* do not return */
        }
        else if (v5 > 308)
        {
            if (v5 <= 310)
            {
                sub_100040aa8(); /* do not return */
            }
            else if (v5 == 312)
            {
                sub_100040aa8(); /* do not return */
            }
        }
    }
    sub_10007fa70(v3 ^ &v0);
    return;
}
