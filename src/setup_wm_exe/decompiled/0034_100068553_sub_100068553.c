/* sub_100068553 @ 0x100068553
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100068553  (345 bytes, 39 basic blocks)
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

typedef struct struct_1 {
    char padding_0[16];
    struct struct_0 *field_10;
    char padding_18[16];
    long long field_28;
    long long field_30;
    unsigned long long field_38;
} struct_1;

typedef struct struct_0 {
    long long field_0;
    struct struct_0 *field_8;
} struct_0;

int sub_100068553(void)
{
    struct_1 *ptr;  // rdi
    unsigned int v5;  // eax
    long long v6;  // rbx
    struct_0 *cur;  // rdi
    unsigned long long v8;  // rbp
    char v0;  // [bp+0x0]
    char v2;  // [bp+0x20]
    unsigned long long v3;  // [bp+0x230]

    if (!ptr->field_30 || !sub_100053454(ptr->field_30))
    {
        v5 = sub_1000656b8(ptr, 0);
        if (v5 >= 0)
        {
            v5 = 2147500037;
            if (ptr->field_38 == vvar_155{r56|8b})
                sub_1000640d4(); /* do not return */
            if (ptr->field_38)
            {
                v5 = sub_10003a0f0(&v2, 520, L"%sallservices.xml");
                if (v5 >= 0)
                    v5 = sub_100052cbc((struct struct_1 *)&ptr->field_30, &v2);
            }
            if (v5 >= 0 && !((v5 = (unsigned int)(int)sub_100067800(ptr, ptr->field_28, ptr->field_30), v5 < 0)))
                goto LABEL_1000685ee;
        }
        if (ptr->field_30)
            4295490210();
LABEL_1000685ee:
        if (v5 < 0)
        {
            sub_1000527f4(4, "Service data gathering complete: %lu interesting service(s) found. Result 0x%x.\r\n", v8 & 4294967295, v5);
            return sub_10007fa70(v3 ^ &v0);
        }
    }
    v6 = ptr->field_30;
    if (v6 && sub_100053454(v6))
    {
        v5 = sub_100067e24(ptr, v6, 0);
        if (v5 >= 0)
            sub_1000671b4(ptr); /* do not return */
        sub_1000527f4(4, "Service data gathering returned 0x%x.\r\n", v5);
    }
    else
    {
        v5 = 2147942487;
    }
    if (v5 >= 0)
    {
        for (cur = ptr->field_10; cur && cur->field_0; cur = cur->field_8)
        {
            if (sub_100064cd4(cur->field_0))
                v8 += 1;
        }
        if (!(unsigned int)v8)
            v5 = 1;
    }
    sub_1000527f4(4, "Service data gathering complete: %lu interesting service(s) found. Result 0x%x.\r\n", v8 & 4294967295, v5);
    return sub_10007fa70(v3 ^ &v0);
}
