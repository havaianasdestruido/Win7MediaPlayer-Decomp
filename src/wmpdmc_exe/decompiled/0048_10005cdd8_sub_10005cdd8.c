/* sub_10005cdd8 @ 0x10005cdd8
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10005cdd8  (765 bytes, 64 basic blocks)
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
    char padding_0[16];
    unsigned int field_10;
    char padding_14[92];
    unsigned int field_70;
    char padding_74[20];
    char field_88;
    char field_89;
    char padding_8a[2];
    char field_8c;
} struct_0;

typedef struct struct_7 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_8 *field_8;
} struct_7;

typedef struct struct_5 {
    char padding_0[56];
    struct struct_6 *field_38;
} struct_5;

typedef struct struct_12 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_11 *field_8;
} struct_12;

typedef struct struct_11 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_11;

typedef struct struct_8 {
    struct struct_5 *field_0;
} struct_8;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_1 {
    char padding_0[56];
    struct struct_2 *field_38;
} struct_1;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_9 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_9;

typedef struct struct_3 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_4 *field_8;
} struct_3;

typedef struct struct_10 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_9 *field_8;
} struct_10;

extern void g_100007160;
extern void g_1000072e8;
extern void g_100007400;
extern struct_10 *g_1000de270;
extern struct_3 *g_1000de3f0;

int sub_10005cdd8(void)
{
    struct_0 *v7;  // rdx
    unsigned int v8;  // r8d
    unsigned int v17;  // eax
    struct_0 *v18;  // rsi
    char v19;  // al
    unsigned int v20;  // r13d
    unsigned long long v21;  // rbp
    struct_7 *p;  // rdi
    unsigned long long v24;  // r9
    unsigned long long v25;  // rdx
    unsigned int v26;  // edx
    unsigned int v9;  // r14d
    unsigned int v27;  // ecx
    struct_12 *ptr;  // rsi
    struct_11 *v30;  // r12
    unsigned int v31;  // r14d
    unsigned int v32;  // edi
    unsigned long long v33;  // rcx
    unsigned int v34;  // ecx
    unsigned int v35;  // eax
    struct_0 *v11;  // rcx
    char v12;  // r15b
    struct_0 *v13;  // rsi
    unsigned int addr[4];  // rax
    char v15;  // sil
    unsigned int v16;  // edx
    unsigned int v0;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned int v1;  // [bp-0x60]
    unsigned int v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    char v4;  // [bp+0x8]
    struct_0 *v5;  // [bp+0x10]
    unsigned int v6;  // [bp+0x28]

    v5 = v7;
    v9 = v8;
    if (!(v11->field_88 & 4))
    {
        return;
    }
    else if (v11->field_70 != 4294967293)
    {
        v12 = 0;
        v13 = v7;
        if (!((char)v6 & 2))
        {
            addr = sub_100055338(v11, &g_1000072e8);
            if (!addr[2] || (v15 = 0, !addr[3]))
                v15 = 1;
            v16 = addr[0];
            if ((v16 & 4294967168) != 4294967168)
            {
                v17 = (v16 & 4294967168) - 1 ^ ~(v16) & 127;
                addr[0] = v17;
                if (!(v17 & 4294967168))
                    sub_100059224(); /* do not return */
            }
            if (v15)
                return;
            v13 = v5;
        }
        v18 = v13;
        if (((char)v6 & 1) && (!(v11->field_89 & 1) || !(v11->field_8c & 8)))
            v19 = 0;
        else
            v19 = 1;
        v4 = v19;
        v20 = v9 & 2;
        if (v18 || !v19 || !v20 && ((char)v9 & 1))
        {
            v21 = 18446744073709551615;
            if (v18 && ((char)v9 & 8))
                v12 = 1;
            p = (!(v11->field_89 & 4) ? g_1000de3f0 : sub_100055880(v11, &g_100007400, 0));
            if (p->field_8)
            {
                v25 = v24;
                v1 = v6;
                v0 = v24;
                p->field_8->field_0->field_38();
            }
            v26 = p->field_0;
            if ((v26 & 4294967168) != 4294967168)
            {
                v27 = (v26 & 4294967168) - 1 ^ ~(v26) & 127;
                p->field_0 = v27;
                if (!(v27 & 4294967168))
                    sub_100059224(p); /* do not return */
            }
            v21 = 0;
            ptr = (!(v11->field_89 & 2) ? g_1000de270 : sub_100055880(v11, &g_100007160, 0));
            v30 = ptr->field_8;
            if (v30)
            {
                v31 = (-(0 < v20) & 2) - 1;
                v2 = (v20 ? v30->field_0 & 268435455 : 4294967295);
                v32 = (!v12 ? (v20 ? 0 : (unsigned int)v11 - 1) : (v5 == v11 ? ~(-(0 < v20)) : v31 + v5->field_10));
                if (v32 != v2)
                {
                    v3 = v31 * 8;
                    v33 = ((v30->field_0 >> 28 & 1) ? v30->field_8 : (struct struct_11 *)&v30->field_8);
                    v0 = v6;
                    (*((long long *)(*((long long *)*((long long *)(v32 * 8 + ((v30->field_0 >> 28 & 1) ? v30->field_8 : (struct struct_11 *)&v30->field_8)))) + 152)))();
                }
                v9 = v8;
            }
            v34 = ptr->field_0;
            if ((v34 & 4294967168) != 4294967168)
            {
                v35 = (v34 & 4294967168) - 1 ^ ~(v34) & 127;
                ptr->field_0 = v35;
                if (!(v35 & 4294967168))
                    sub_100059224(ptr); /* do not return */
            }
            v18 = v5;
            if (!((char)v9 & 1) || v21 || v18 == v11 || v20 || !v4)
                return;
        }
        return;
    }
    else
    {
        return;
    }
}
