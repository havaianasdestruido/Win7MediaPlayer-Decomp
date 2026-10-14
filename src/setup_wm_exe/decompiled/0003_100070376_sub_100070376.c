/* sub_100070376 @ 0x100070376
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100070376  (1676 bytes, 138 basic blocks)
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

extern char g_100000000;
extern long long g_100086f40;
extern void g_100087148;

long long sub_100070376(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, long long a5, int a6, unsigned long a7, long long a8, char a9)
{
    unsigned long v5;  // rax
    char *v6;  // r13
    long long v15;  // r13
    unsigned int flag;  // edi
    long long v17;  // rdi
    long long v18;  // rdi
    long long v19;  // rdi
    unsigned int flag2;  // eax
    unsigned int choice;  // edi
    unsigned int flag3;  // eax
    long long v7;  // r13
    unsigned int v8;  // ebx
    long long v9;  // r15
    unsigned long long v10;  // r14
    int v11;  // esi
    long long v12;  // rdi
    unsigned int v13;  // eax
    long long v14;  // r13
    unsigned long long v1;  // [bp+0x20], Other Possible Types: long long
    char v2;  // [bp+0x60]
    char v3;  // [bp+0x78]
    char v4;  // [bp+0x80]

    if (v5 == 18446744073709551615)
        4298114024();
    if (a6 != (unsigned int)v6)
    {
        a6 = v5;
        v7 = L"DEFAULTINSTALL";
        if (&v3 != v6)
        {
            v1 = L"IGNOREERRORS";
            if (sub_10006c460())
                sub_10006c300(&v2); /* do not return */
        }
    }
    else
    {
        v7 = L"DEFAULTINSTALL";
    }
    *((unsigned int *)&v1) = (unsigned int)v1 & v8;
    if (sub_10006e948(v9, v5, a8, 0, v1) < 0 && v10)
        4298115360();
    if (a6)
    {
        *((unsigned int *)&v1) = 0;
        if (sub_10006e948(v9, v5, L"NONADMININSTALL", 0, v1) < 0 && v10)
            4298115360();
    }
    if (&v4 && sub_10006dfc8(&v4, v5, a8, &vvar_9) >= v11)
    {
        v12 = a8;
        v13 = sub_10006daa4(v5, v12, &a5);
        if (v13 != 862969 && a6)
        {
            if (a5)
                4295490210();
            v13 = sub_10006daa4(v5, L"NONADMININSTALL", &a5);
        }
        sub_10006de54(v9, v5, v12);
        if (v12)
            v14 = v12;
        else
            v14 = v7;
        a6 = v5;
        if (sub_10006c460())
            sub_1000639e0(a6, &v2);
        a4 = _INSERT(1 CONCAT 0, 0, 1);
        a6 = v5;
        if (sub_10006c460(0, &a6, &v2, v14, L"DELETESERVICES", a4))
            sub_100063bdc(0, L"umwdf", v9 + 4, v9); /* do not return */
        v15 = a8;
        if (sub_10006ed5c(v9, v5, v15, 0, &g_100000000) < 0 && v10)
            4298115360();
        if (a6 && sub_10006ed5c(v9, v5, L"NONADMININSTALL", 0, &g_100000000) < 0 && v10)
            4298115360();
        if (sub_10006d004(v9, v5, v15, 0) < 0 && v10)
            4298115360();
        if (a6 && sub_10006d004(v9, v5, L"NONADMININSTALL", 0) < 0 && v10)
            4298115360();
        flag = sub_10006efc0(v9, v5, v15, 0, &vvar_9);
        if (flag < 0)
        {
            if (v10)
                4298115360();
LABEL_100070800:
            v17 = a5;
        }
        else
        {
            if (v13 != 862968 || flag == 1)
                goto LABEL_100070800;
            v18 = a5;
            sub_100053d64(&g_100086f40, 4, v18, 0);
            v17 = v18;
        }
        v19 = v17;
        if (a6)
        {
            flag2 = sub_10006efc0(v9, v5, L"NONADMININSTALL", 0, &vvar_9);
            if (flag2 >= 0 && v13 == 862968 && flag2 != 1)
                sub_100053d64(&g_100086f40, 4, v19, 0);
        }
        v1 = &vvar_9;
        choice = sub_10006efc0(v9, v5, v15, 1, &vvar_9);
        if (choice < 0)
        {
            if (v10)
                4298115360();
LABEL_1000708dd:
        }
        else
        {
            if (v13 != 862968 || choice == 1)
                goto LABEL_1000708dd;
            sub_100053d64(&g_100086f40, 4, a5, 0);
        }
        if (a6)
        {
            v1 = &vvar_9;
            flag3 = sub_10006efc0(v9, v5, L"NONADMININSTALL", 1, &vvar_9);
            if (flag3 >= 0 && v13 == 862968 && flag3 != 1)
                sub_100053d64(&g_100086f40, 4, a5, 0);
        }
        if (sub_10006d1f0(v9, v5, v15) < 0 && v10)
            4298115360();
        if (sub_10006d004(v9, v5, v15, 1) < 0 && v10)
            4298115360();
        *((unsigned int *)&v1) = *((int *)&g_100087148) & 8;
        if (sub_10006ed5c(v9, v5, v15, 1, v1) < 0 && v10)
            4298115360();
        if (a6)
            *((unsigned int *)&v1) = *((int *)&g_100087148) & 8;
        *((unsigned int *)&v1) = *((int *)&g_100087148) & 8;
        if (a6)
            *((unsigned int *)&v1) = *((int *)&g_100087148) & 8;
LABEL_100070ba6:
        4298115920();
    }
    goto LABEL_100070ba6;
}
