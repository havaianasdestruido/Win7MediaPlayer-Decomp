/* sub_1000504ec @ 0x1000504ec
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x1000504ec  (395 bytes, 37 basic blocks)
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
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[16];
    struct struct_3 *field_18;
    char padding_20[8];
    unsigned long long field_28;
    char padding_30[24];
    int field_48;
} struct_2;

typedef struct struct_0 {
    char padding_0[128];
    struct struct_1 *field_80;
} struct_0;

typedef struct struct_4 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[260];
    unsigned int field_124;
    char padding_128[4];
    unsigned int field_12c;
} struct_4;

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int sub_1000504ec(void)
{
    int v8;  // eax
    unsigned long v9;  // r8
    unsigned long long *v18;  // r13
    unsigned long long v19;  // r15
    int v10;  // esi
    unsigned int v11;  // r14d
    long long v12;  // rdi
    struct_2 *ptr;  // rdi
    struct_0 **v14;  // rcx
    unsigned long long v15;  // rdx
    struct_4 *v16;  // rbx
    unsigned int v17;  // eax
    unsigned int v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x20]
    unsigned long long v3;  // [bp+0x2c]
    unsigned int v4;  // [bp+0x40]
    unsigned long long v5;  // [bp+0x48]
    struct_2 *v6;  // [bp+0x100010]
    struct_4 **p;  // [bp+0x100090]

    v9 = v8;
    v10 = v8;
    sub_1000527f4(4, "\r\nSetup complete.  Result: '0x%x'.\r\n", v8);
    if (v11)
        sub_100063030(0, v12, 1); /* do not return */
    if (v10 >= 0)
    {
        ptr = v6;
        if (ptr && ptr->field_0 && ptr->field_4 && ptr->field_48 > 0)
        {
            if (!ptr->field_0)
            {
                sub_1000527f4(4, "\r\nWindows Update Setup complete.  Result: '0x%x'.\r\n", 2147549183);
                if (v10 != 862969)
                    v10 = -2147418113;
            }
            else
            {
                v14 = ptr->field_18;
                v15 = ptr->field_28;
                ptr->field_18->field_0->field_80();
            }
        }
        if (p)
        {
            v16 = *(p);
            if (*(p) || (v16 = (struct_4 *)sub_100066bf8(), v16))
            {
                if (v16->field_124 && v16->field_12c)
                {
                    sub_1000527f4();
                    sub_10004fb94(0);
                    v17 = sub_100064f34(v16);
                    sub_1000527f4();
                }
            }
        }
    }
    v2 = -(v1);
    v4 = (-(0 < v1) & 2) + 101;
    v5 = v3;
    if (v18)
    {
        v18();
    }
    else if (v19)
    {
        4298114136();
    }
}
