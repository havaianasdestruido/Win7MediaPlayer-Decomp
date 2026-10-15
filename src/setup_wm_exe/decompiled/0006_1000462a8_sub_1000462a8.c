/* sub_1000462a8 @ 0x1000462a8
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x1000462a8  (938 bytes, 80 basic blocks)
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

typedef struct struct_2 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_2;

typedef struct struct_1 {
    struct struct_0 *field_0;
    struct struct_1 *field_8;
} struct_1;

typedef struct struct_0 {
    char padding_0[264];
    unsigned int field_108;
} struct_0;

extern long long g_1000062c0;
extern unsigned long long g_100086110;
extern unsigned int g_100086890;
extern char g_100086f30;
extern long long g_100088818;
extern unsigned long long g_100088850;
extern unsigned long long g_1000888e8;
extern unsigned int g_100088ea4;
extern unsigned long long g_100088ea8;
extern unsigned long long g_100088eb0;
extern unsigned long long g_100088eb8;
extern unsigned long long g_100088ec0;
extern unsigned int g_100088ecc;

int sub_1000462a8(void)
{
    unsigned long long v15;  // rbx
    unsigned long long v16;  // rsi
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned int v29;  // ecx
    struct_2 *ptr;  // rax
    unsigned long long v31;  // rdi
    struct_1 *cur;  // rbx
    unsigned long long v17;  // rdi
    unsigned long long v18;  // r12
    unsigned long long v19;  // r13
    unsigned long long v20;  // r14
    unsigned long long v21;  // r15
    unsigned long v22;  // rcx
    unsigned int v23;  // edx
    unsigned long long v24;  // r8
    char v0;  // [bp-0x8c8]
    unsigned int v1;  // [bp-0x878]
    unsigned int v2;  // [bp-0x870]
    char v3;  // [bp-0x438]
    unsigned long v4;  // [bp-0x38]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned long long v8;  // [bp-0x10]
    unsigned long long v9;  // [bp-0x8]
    unsigned long long v11;  // [bp+0x10]
    unsigned long v12;  // [bp+0x18]
    unsigned long long v13;  // [bp+0x20]

    v11 = v15;
    v12 = vvar_194{r56|8b};
    v13 = v16;
    v9 = v17;
    v8 = v18;
    v7 = v19;
    v6 = v20;
    v5 = v21;
    v4 = g_100086110 ^ &v0;
    g_1000888e8 = v22;
    switch (v23)
    {
    case 272:
        if (g_100086890 && g_100088818 && sub_10004fd8c(g_100088818) && sub_100066bf8(sub_10004fd8c(g_100088818)))
        {
            v2 = sub_100066c28(sub_10004fd8c(g_100088818));
            g_100088ecc = sub_100066cac(sub_10004fd8c(g_100088818), 0);
            if (v2)
            {
                v26 = sub_100066c28(sub_10004fd8c(g_100088818));
                if (sub_100066bf8(sub_10004fd8c(g_100088818)) != v26)
                {
                    v27 = sub_100066cac(sub_10004fd8c(g_100088818), 0);
                    if (v27 != sub_100066c28(sub_10004fd8c(g_100088818)))
                        goto LABEL_1000467c4;
                }
                v2 = 0;
            }
LABEL_1000467c4:
            if (g_100088ecc)
            {
                v28 = sub_100066cac(sub_10004fd8c(g_100088818), 0);
                v29 = (sub_100066bf8(sub_10004fd8c(g_100088818)) == v28 ? 0 : g_100088ecc);
                g_100088ecc = v29;
            }
            ptr = sub_10004fd8c(g_100088818);
            v31 = 0;
            v1 = 0;
            cur = ptr->field_10;
            if (ptr->field_10)
            {
                do
                {
                    if (!cur->field_0)
                        break;
                    if (cur->field_0->field_108 && sub_100064988())
                        v31 += 1;
                    cur = cur->field_8;
                } while (cur);
                v1 = v31;
            }
            sub_100039e6c(&v3, 0x400, &g_1000062c0);
            if (*((long long *)&g_100086f30) == "8" && g_100088850)
                4298114920();
            if (!g_100088ea4)
                4298114872();
            4298114536();
        }
        g_100086890 = 0;
        4298114744();
        break;
    case 273:
        if ((unsigned short)v24 != 1148 && (unsigned short)v24 != 1147 && (unsigned short)v24 != 1149 && (unsigned short)v24 != 1150)
        {
            if ((unsigned short)v24 != 1161)
            {
                sub_100047523();
                return;
            }
            else if ((unsigned short)(v24 >> 16) == 1)
            {
                4298114872();
            }
            else
            {
                sub_100047523();
                return;
            }
        }
        if ((unsigned short)(v24 >> 16))
        {
            sub_100047523();
            return;
        }
        else if (!g_100088818)
        {
            sub_100047523();
            return;
        }
        else if (sub_10004fd8c(g_100088818))
        {
            4298114928();
        }
        else
        {
            sub_100047523();
            return;
        }
        break;
    default:
        if (v23 != 307)
        {
            if (v23 <= 308)
            {
                sub_100047523();
                return;
            }
            else if (v23 > 310 && v23 != 312)
            {
                sub_100047523();
                return;
            }
        }
        sub_100040aa8(); /* do not return */
    }
    if (g_100088ec0)
    {
        4298114320();
    }
    else if (g_100088eb8)
    {
        4298114320();
    }
    else if (g_100088eb0)
    {
        4298114320();
    }
    else if (g_100088ea8)
    {
        4295491564();
    }
    else
    {
        4298114872();
    }
}
