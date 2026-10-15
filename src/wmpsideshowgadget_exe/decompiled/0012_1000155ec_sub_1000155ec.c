/* sub_1000155ec @ 0x1000155ec
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x1000155ec  (368 bytes, 25 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f8f45cd381f60a41cca4834188157d25906911108d7280cb2540d2245327a9d
 *   Evidence: analysis/report/rea-evidence/wmpsideshowgadget_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_4 {
    char padding_0[72];
    struct struct_2 *field_48;
} struct_4;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_3 *field_20;
} struct_2;

typedef struct struct_9 {
    char padding_0[80];
    struct struct_10 *field_50;
} struct_9;

typedef struct struct_8 {
    struct struct_6 *field_0;
} struct_8;

typedef struct struct_0 {
    char padding_0[24];
    struct struct_1 *field_18;
} struct_0;

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_6 {
    char padding_0[80];
    struct struct_7 *field_50;
} struct_6;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_5 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_5;

extern long long g_1000018c8;
extern long long g_100001958;
extern struct_5 *g_10001c260;

unsigned long long sub_1000155ec(struct_4 *ptr, unsigned int a1)
{
    struct_2 *p;  // rbp
    struct_8 **v3;  // r8
    struct_0 **v4;  // rcx
    struct_9 **v5;  // rdx
    struct_9 **v6;  // rcx
    unsigned long v7;  // rdx
    unsigned long long v0;  // [bp-0x28]
    struct_9 **flag;  // [bp+0x8]

    p = ptr->field_48;
    if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 16))
        sub_1000041ec(g_10001c260->field_10, 22, &g_100001958, a1); /* do not return */
    if (*((long long *)((char *)&g_10001c260[1].field_10 + 3)))
    {
        v0 = L"CWMPConnector::OnContentMissing";
        sub_100017b10(&g_1000018c8, 2); /* do not return */
    }
    flag = NULL;
    v3 = &flag;
    if ((char)sub_100017374(p + 1, a1, &flag))
    {
        v4 = p->field_20;
        v5 = flag;
        p->field_20->field_0->field_18();
    }
    if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 16))
        sub_1000041ec(g_10001c260->field_10, 23, &g_100001958, a1); /* do not return */
    if (a1 - 0x5f5e100 > 99999999 && a1 - 0xbebc200 > 99999999 && a1 - 0x11e1a300 > 99999999 && a1 - 0x17d78400 > 99999999)
        goto LABEL_10001571f;
    v3 = &flag;
    sub_100017374(p + 1);
LABEL_10001571f:
    v6 = flag;
    if (flag)
    {
        v7 = a1;
        *(flag)->field_50();
    }
    else if (*((long long *)((char *)&g_10001c260[1].field_10 + 3)))
    {
        v0 = L"CWMPConnector::OnContentMissing";
        sub_100017b10(&g_1000018c8, 2); /* do not return */
    }
    else
    {
        return 1;
    }
}
