/* sub_7ff2c173fc0 @ 0x7ff2c173fc0
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c173fc0  (442 bytes, 29 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 714d193de7f062968c11a8a946f1fa066d03e1fc5a7bd90dbabc372605416413
 *   Evidence: analysis/report/rea-evidence/wmpmediasharing_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_7ff2c161a00;
extern struct_0 *g_7ff2c182e68;

long long sub_7ff2c173fc0(struct_1 **ptr)
{
    unsigned long long v25;  // r13
    unsigned long long v26;  // rbx
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rdi
    unsigned int v29;  // eax
    unsigned short *v30;  // rsi
    unsigned int v34;  // edi
    unsigned int flag4;  // [bp-0xa8]
    unsigned long long flag7;  // [bp-0xa0]
    unsigned long long flag8;  // [bp-0x98]
    unsigned long long flag9;  // [bp-0x90]
    unsigned int flag;  // [bp-0x88]
    unsigned int choice;  // [bp-0x80]
    unsigned int flag2;  // [bp-0x7c]
    unsigned int flag3;  // [bp-0x78]
    unsigned int flag6;  // [bp-0x68]
    unsigned long long flag16;  // [bp-0x60]
    unsigned long long flag17;  // [bp-0x58]
    unsigned long long flag10;  // [bp-0x50]
    unsigned long long flag11;  // [bp-0x48]
    unsigned long flag12;  // [bp-0x40]
    unsigned long long flag13;  // [bp-0x38]
    unsigned long long flag14;  // [bp-0x30]
    unsigned int flag5;  // [bp-0x28]
    unsigned long long flag15;  // [bp-0x20]
    unsigned long long v18;  // [bp-0x18]
    unsigned long long v19;  // [bp-0x8]
    unsigned long long v20;  // [bp+0x8]
    unsigned long v21;  // [bp+0x10]
    unsigned long long v22;  // [bp+0x18]
    unsigned long long v23;  // [bp+0x20]

    v19 = v25;
    v18 = 18446744073709551614;
    v20 = v26;
    v21 = vvar_63{r56|8b};
    v22 = v27;
    v23 = v28;
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1) && g_7ff2c182e68->field_19 >= 5)
        sub_7ff2c1634c4(g_7ff2c182e68->field_10, 21, &g_7ff2c161a00); /* do not return */
    flag7 = 0;
    flag8 = 0;
    flag9 = 0;
    flag = 0;
    choice = 0;
    flag2 = 0;
    flag3 = 1;
    flag4 = 0;
    flag10 = 0;
    flag11 = 0;
    flag12 = 0;
    flag13 = 0;
    flag14 = 0;
    flag5 = 0;
    flag6 = 0;
    flag15 = 0;
    sub_7ff2c176638(&flag12, 0x100, 4294967295);
    flag16 = 0;
    flag17 = 0;
    v29 = 0;
    v30 = &*(ptr)->field_0;
    do
    {
        if (false)
            break;
    } while (*(v30) == 82);
    if (!v29)
    {
        v34 = 1;
    }
    else
    {
        sub_7ff2c1741bc(&flag4, L"^[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]$");
        v34 = (!*(ptr) ? 0 : (unsigned int)sub_7ff2c1742c4(&flag4));
        if (!v34)
        {
            sub_7ff2c1741bc(&flag4, L"^[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]$");
            v34 = (!*(ptr) ? 0 : (unsigned int)sub_7ff2c1742c4(&flag4));
        }
    }
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1) && g_7ff2c182e68->field_19 >= 5)
        sub_7ff2c1634e8(g_7ff2c182e68->field_10, 22, &g_7ff2c161a00, v34); /* do not return */
    if (!flag12)
        8792537794656();
    8792538349752();
}
