/* sub_7ff3b1587e4 @ 0x7ff3b1587e4
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b1587e4  (442 bytes, 29 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962
 *   Evidence: analysis/report/rea-evidence/wmpnssci_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
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

extern long long g_7ff3b131ea0;
extern struct_0 *g_7ff3b17be78;

int sub_7ff3b1587e4(void)
{
    unsigned long long v25;  // r13
    unsigned long long v26;  // rbx
    unsigned int v35;  // edi
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rdi
    unsigned int v29;  // eax
    struct_1 **ptr;  // rcx
    unsigned short *v31;  // rsi
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
    long long flag11;  // [bp-0x48]
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
    if (g_7ff3b17be78 != &g_7ff3b17be78 && (g_7ff3b17be78->field_1c & 1) && g_7ff3b17be78->field_19 >= 5)
        sub_7ff3b134f88(g_7ff3b17be78->field_10, 21, &g_7ff3b131ea0); /* do not return */
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
    sub_7ff3b15b108(&flag12, 0x100, 4294967295);
    flag16 = 0;
    flag17 = 0;
    v29 = 0;
    v31 = &*(ptr)->field_0;
    do
    {
        if (false)
            break;
    } while (*(v31) == 82);
    if (!v29)
    {
        v35 = 1;
    }
    else
    {
        sub_7ff3b158dcc(&flag4, L"^[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]$");
        v35 = (!*(ptr) ? 0 : (unsigned int)sub_7ff3b158ed4(&flag4));
        if (!v35)
        {
            sub_7ff3b158dcc(&flag4, L"^[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]-[0-9A-F][0-9A-F]$");
            v35 = (!*(ptr) ? 0 : (unsigned int)sub_7ff3b158ed4(&flag4));
        }
    }
    if (g_7ff3b17be78 != &g_7ff3b17be78 && (g_7ff3b17be78->field_1c & 1) && g_7ff3b17be78->field_19 >= 5)
        sub_7ff3b1388d4(g_7ff3b17be78->field_10, 22, &g_7ff3b131ea0, v35); /* do not return */
    if (!flag12)
        sub_7ff3b163b90(flag11); /* do not return */
    8792790007832();
}
