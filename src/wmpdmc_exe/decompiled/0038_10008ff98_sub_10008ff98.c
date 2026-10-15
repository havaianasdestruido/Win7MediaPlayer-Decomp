/* sub_10008ff98 @ 0x10008ff98
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10008ff98  (877 bytes, 71 basic blocks)
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
    char padding_0[112];
    unsigned int field_70;
    char padding_74[21];
    char field_89;
} struct_0;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_2;

typedef struct struct_7 {
    char padding_0[32];
    struct struct_8 *field_20;
} struct_7;

typedef struct struct_3 {
    char padding_0[152];
    struct struct_4 *field_98;
} struct_3;

typedef struct struct_5 {
    char padding_0[152];
    struct struct_6 *field_98;
} struct_5;

typedef struct struct_11 {
    char padding_0[152];
    struct struct_12 *field_98;
} struct_11;

typedef struct struct_9 {
    char padding_0[152];
    struct struct_10 *field_98;
} struct_9;

typedef struct struct_8 {
    struct struct_5 *field_0;
} struct_8;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_12 {
    unsigned long long field_0;
} struct_12;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_1;

extern void g_100007160;
extern struct_1 *g_1000de270;

int sub_10008ff98(void)
{
    unsigned int v12;  // r9d
    unsigned int v13;  // edi
    unsigned int v22;  // eax
    unsigned int flag4;  // ecx
    struct_7 *v24;  // rcx
    unsigned int flag8;  // ecx
    unsigned int v26;  // cc_dep2
    unsigned int v27;  // cc_dep1
    struct_2 *ptr;  // r13
    struct_3 **v29;  // rax
    unsigned long long flag2;  // r14
    unsigned int flag;  // r15d
    unsigned int v14;  // eax
    unsigned int flag5;  // ecx
    unsigned int flag6;  // ecx
    unsigned int flag7;  // ecx
    unsigned int v35;  // r15d
    unsigned int v36;  // r12d
    unsigned long long v37;  // r14
    struct_7 *v38;  // rbx
    struct_7 *v39;  // r12
    struct_9 **v40;  // rax
    unsigned int v41;  // edx
    struct_0 *v15;  // rdx
    unsigned int v42;  // ecx
    struct_2 *p;  // rax
    unsigned int v17;  // ecx
    unsigned int i;  // ecx
    unsigned int v19;  // esi
    struct_0 *addr;  // r8
    unsigned int v21;  // ecx
    unsigned int v0;  // [bp-0x98]
    unsigned int v1;  // [bp-0x88]
    unsigned long v2;  // [bp-0x80]
    struct_2 *v3;  // [bp-0x78]
    unsigned long long flag3;  // [bp-0x70]
    struct_5 **v5;  // [bp-0x68]
    char v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    char choice;  // [bp+0x20]
    long long v10;  // [bp+0x28]
    unsigned int v11;  // [bp+0x30]

    v13 = v12;
    if (((char)v12 & 1))
        return;
    v14 = sub_10007c114();
    v1 = v14;
    if ((v15->field_89 & 2))
    {
        p = sub_100055880(v15, &g_100007160, 0);
        v17 = v1;
    }
    else
    {
        p = g_1000de270;
        v17 = v14;
    }
    i = v17;
    v19 = 0;
    i = 4294967295;
    v3 = p;
    v2 = p->field_8;
    if (addr == v15)
    {
        v21 = p->field_0;
        if ((v21 & 4294967168) == 4294967168)
            return;
        v22 = (v21 & 4294967168) - 1 ^ ~(v21) & 127;
        p->field_0 = v22;
        if (!(v22 & 4294967168))
            sub_100059224(p); /* do not return */
        return;
    }
    if (!addr)
    {
        if (v13 == 8)
        {
            v19 = 2;
        }
        else if (v13 != 10)
        {
            if (v13 == 12)
            {
                v19 = 3;
            }
            else if (v13 == 14)
            {
                v19 = v13 - 13;
            }
        }
LABEL_100090177:
        sub_10007c47c(&v6, v15, v13, v10);
        flag2 = 0;
        flag = 0;
        choice = 0;
        flag5 = v19;
        flag3 = 0;
        if (v19)
        {
            flag6 = flag5 - 1;
            if (flag5 != 1)
            {
                flag7 = flag6 - 1;
                v35 = flag;
                if (flag6 != 1)
                {
                    v35 = flag;
                    if (flag7 == 1)
                        v35 = flag7;
                }
            }
            else
            {
                v35 = 3;
            }
        }
        else
        {
            v35 = 2;
        }
        v36 = i + 1;
        v37 = flag2;
        if (v36 < v1)
        {
            v38 = v24;
            do
            {
                v5 = sub_10007c210(v38, v15, v36, v2);
                if (v5 != v38->field_20)
                {
                    v0 = v11;
                    *(v5)->field_98();
                }
            } while ((v36 += 1, v36 < v1));
            v37 = flag3;
        }
        v39 = v24;
        if (v39->field_20)
        {
            v0 = v11;
            v39->field_20->field_0->field_98();
        }
        ptr = p;
        if (!v7)
        {
            ptr = p;
            if (!v37)
            {
                ptr = p;
                if (i > 0)
                {
                    do
                    {
                        if (false)
                            break;
                        i -= 1;
                        v40 = sub_10007c210(v39, v15, i, v2);
                        if ((int)v40[14] == v35)
                            *(v40)->field_98();
                    } while (i > 0);
                    ptr = v3;
                }
            }
        }
LABEL_100090385:
        v41 = ptr->field_0;
        if ((v41 & 4294967168) == 4294967168)
            return;
        v42 = (v41 & 4294967168) - 1 ^ ~(v41) & 127;
        ptr->field_0 = v42;
        if (!(v42 & 4294967168))
            sub_100059224(ptr); /* do not return */
        return;
    }
    v19 = addr->field_70;
    if (v19 != 4)
    {
        flag4 = v19;
        i = sub_10007c1b4(v24, v15, addr);
        if (v19)
        {
            flag8 = flag4 - 1;
            if (flag4 == 1)
            {
                v26 = 14;
                v27 = v13;
            }
            else if (flag8 != 1)
            {
                if (flag8 - 1 != 1)
                    goto LABEL_1000900a7;
                v26 = 12;
                v27 = v13;
            }
            else
            {
                v26 = 8;
                v27 = v13;
            }
        }
        else
        {
            v26 = 10;
            v27 = v13;
        }
        if (v27 == v26)
            goto LABEL_100090177;
    }
LABEL_1000900a7:
    ptr = p;
    if (i > 0)
    {
        v29 = sub_10007c210(v24, v15, i - 1, v2);
        v0 = v11;
        *(v29)->field_98();
    }
    goto LABEL_100090385;
}
