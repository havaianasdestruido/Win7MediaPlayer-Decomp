/* sub_1000468e3 @ 0x1000468e3
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x1000468e3  (601 bytes, 49 basic blocks)
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

extern unsigned long long g_1000062c0;
extern long long g_100088818;
extern char g_100088860;
extern char g_100088888;
extern char g_100088ea4;
extern char g_100088ecc;

int sub_1000468e3(void)
{
    unsigned long long v5;  // rax
    unsigned long long v6;  // rsi
    unsigned int v15;  // cc_dep2
    unsigned int v16;  // r13d
    unsigned int v17;  // ebx
    unsigned long long ptr;  // rax
    unsigned long long v19;  // rcx
    unsigned long long p;  // rax
    unsigned long long v21;  // rcx
    unsigned int v22;  // r14d
    unsigned int v23;  // r15d
    unsigned int v7;  // edi
    unsigned long long v8;  // rax
    unsigned long v9;  // r12
    unsigned long long v10;  // rcx
    unsigned int v12;  // ecx
    unsigned int v13;  // cc_dep1
    unsigned long long v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x40]
    unsigned long long v3;  // [bp+0x48]
    unsigned int v4;  // [bp+0x58]

    if (v5 != v6)
    {
        v3 = sub_100066bf8(sub_10004fd8c(g_100088818));
        if (v7 == (unsigned int)v6)
            4298114872();
        v2 = v6;
        4298114872();
    }
    else
    {
        v8 = sub_10004fe1c(g_100088818);
        v10 = (*((long long *)(v8 + 72)) != v6 ? v9 & 4294967295 : v6 & 4294967295);
        if (*((long long *)(v8 + 80)) != v6)
            v10 += v9;
        if ((unsigned int)v10 != (unsigned int)v6)
            sub_100064948(sub_10004fe1c(g_100088818)); /* do not return */
        v12 = v6;
        if (*((int *)&g_100088ea4) == (unsigned int)v6)
        {
            if (v12 != (unsigned int)v6)
            {
                v13 = *((int *)&g_100088ecc);
                v15 = v6;
                goto LABEL_100046c1f;
            }
        }
        else
        {
            if (v12 != (unsigned int)v6)
            {
                v13 = *((int *)&g_100088ea4);
                v15 = v16;
LABEL_100046c1f:
                v17 = v9;
                if (v13 == v15)
                    goto LABEL_100046c26;
            }
        }
        v17 = v6;
LABEL_100046c26:
        if (*((long long *)&g_100088888) != v6)
        {
            if (_INSERT(v6 & 4294967295, 0, v17 == (unsigned int)v6) != (unsigned int)v6)
                4298114480();
            4298114920();
        }
        else
        {
            if (*((long long *)&g_100088860) != v6)
            {
                if (v17 != (unsigned int)v6)
                    4298114480();
                4298114920();
            }
            else
            {
                if (*((int *)&g_100088ecc) != (unsigned int)v6)
                {
                    ptr = sub_100066cac(sub_10004fd8c(g_100088818), 0);
                    v19 = &g_1000062c0;
                    if (*((long long *)(ptr + 24)) != v6)
                        v19 = *((long long *)(ptr + 24));
                    v1 = v19;
                    4298114888();
                }
                else if (v4 != (unsigned int)v6)
                {
                    p = sub_100066c28(sub_10004fd8c(g_100088818));
                    v21 = &g_1000062c0;
                    if (*((long long *)(p + 24)) != v6)
                        v21 = *((long long *)(p + 24));
                    v1 = v21;
                    4298114888();
                }
                else
                {
                    if (*((int *)&g_100088ecc) == (unsigned int)v6)
                    {
                        sub_100045f40(vvar_76{r56|8b}, v22, 1149, 0);
                        sub_100045f40(vvar_76{r56|8b}, 1149, v16, 0);
                        sub_100045f40(vvar_76{r56|8b}, v16, v23, v9 & 4294967295);
                        sub_100045f40(vvar_76{r56|8b}, 1161, v23, v9 & 4294967295);
                        sub_100045f40(vvar_76{r56|8b}, 1144, 1133, 0);
                        sub_100045f40(vvar_76{r56|8b}, 1133, 1146, v9 & 4294967295);
                        sub_100045f40(vvar_76{r56|8b}, 1143, 1134, 0);
                        sub_100045f40(vvar_76{r56|8b}, 1134, 1145, v9 & 4294967295);
                    }
                    if (v4 == (unsigned int)v6)
                        sub_100045f40(vvar_76{r56|8b}, v22, 1149, v9 & 4294967295);
                    4298114872();
                }
            }
        }
    }
}
