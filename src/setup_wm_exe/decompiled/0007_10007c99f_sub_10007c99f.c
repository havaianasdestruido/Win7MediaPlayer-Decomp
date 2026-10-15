/* sub_10007c99f @ 0x10007c99f
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10007c99f  (793 bytes, 76 basic blocks)
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

typedef struct struct_0 {
    unsigned long long field_0;
    struct struct_1 *field_8;
    struct struct_2 *field_10;
    unsigned int field_18;
    char padding_1c[36];
    unsigned long long field_40;
    char padding_48[8];
    struct struct_1 *field_50;
    char padding_58[8];
    struct struct_2 *field_60;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

typedef struct struct_2 {
    unsigned short field_0;
} struct_2;

void sub_10007c99f(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned short *a6, unsigned short *addr, unsigned long a8, unsigned short *a9, unsigned long a10, unsigned short *p, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21)
{
    struct_0 *ptr;  // rbx
    long long v3;  // r13
    unsigned short *ptr3;  // rcx
    unsigned short *v13;  // rbp
    char v14;  // al
    unsigned int v15;  // esi
    char v16;  // al
    unsigned short *ptr4;  // rsi
    char v18;  // al
    long long v19;  // r15
    unsigned int v4;  // esi
    char v5;  // al
    unsigned short *ptr5;  // rsi
    char v7;  // al
    char v8;  // al
    struct_0 *ptr6;  // rbp
    unsigned short *ptr7;  // rcx
    char v11;  // al
    unsigned long v1;  // [bp+0x20]

    if ((int)sub_10007d57c(&ptr->field_40, v3, v4) < vvar_109{r56|8b})
    {
        sub_10007d970(&ptr->field_60);
        sub_10007d970(&ptr->field_50);
        sub_10007d970(&ptr->field_40);
        4295490222();
    }
    ptr->field_0 = ptr->field_40;
    sub_10007d40c(&vvar_11);
    sub_10007d57c(&vvar_11, ".", v4);
    sub_10007d7d4(&vvar_11, v3, v4);
    v5 = vvar_178{r56|8b};
    if (vvar_11 != vvar_109{r56|8b})
        v5 = *((short *)vvar_11) != (unsigned short)vvar_178{r56|8b};
    if (v5 != (char)vvar_109{r56|8b})
    {
        sub_10007d40c(&a9);
        sub_10007d970(&a9);
        if (vvar_11 != vvar_109{r56|8b})
            sub_10007dcf0(&a9, -0x80000000, vvar_11, L"PerceivedType");
        ptr5 = a9;
        v7 = vvar_178{r56|8b};
        if (ptr5 != vvar_109{r56|8b})
            v7 = *(ptr5) != (unsigned short)vvar_178{r56|8b};
        if (v7 != (char)vvar_109{r56|8b})
        {
            if ((char)sub_10007d3c0(ptr5, L"image") != (char)vvar_178{r56|8b})
            {
                ptr->field_18 = 2;
            }
            else if (ptr5 != vvar_178{r56|8b})
            {
                4298115416();
            }
        }
        sub_10007d40c(&vvar_7);
        sub_10007d970(&vvar_7);
        if (vvar_11 != vvar_109{r56|8b})
            sub_10007dcf0(&vvar_7, -0x80000000, vvar_11, L"Content Type");
        v8 = vvar_178{r56|8b};
        if (vvar_7 != vvar_109{r56|8b})
            v8 = *((short *)vvar_7) != (unsigned short)vvar_178{r56|8b};
        if (v8 != (char)vvar_109{r56|8b})
        {
            if (vvar_7 == vvar_178{r56|8b})
            {
                ptr6 = &ptr->field_50;
                sub_10007d57c(ptr6, vvar_7, 4294967295);
                ptr7 = ptr6->field_0;
                v11 = 0;
                if (ptr7)
                    v11 = *(ptr7);
                if (v11)
                    ptr->field_8 = ptr7;
                ptr3 = &ptr->field_60->field_0;
                v13 = NULL;
                v14 = 0;
                if (ptr3)
                    v14 = *(ptr3);
                if (v14)
                    ptr->field_10 = ptr3;
            }
            else if (*((short *)vvar_7) != (unsigned short)vvar_178{r56|8b})
            {
                4298115152();
            }
            else
            {
                4298115432();
            }
        }
        sub_10007d970(&vvar_7);
        sub_10007d970(&a9);
        v15 = 4294967295;
    }
    v16 = (char)v13;
    if (vvar_11 != vvar_109{r56|8b})
        v16 = *((short *)vvar_11) != *((unsigned short *)&v13);
    if (v16 != *((char *)&v13))
    {
        sub_10007d40c(&a9);
        sub_10007d57c(&a9, L"Software\\Microsoft\\Multimedia\\WMPlayer\\Extensions\\", v15);
        sub_10007d7d4(&a9, vvar_11, v15);
        v1 = &vvar_7;
        addr = v13;
        4298113088();
    }
    sub_10007d40c(&a9);
    sub_10007d970(&a9);
    sub_10007dcf0(&a9, -2147483646, L"Software\\Microsoft\\MediaPlayer\\MLS\\Extensions", v3);
    ptr4 = a9;
    v18 = (char)v13;
    if (ptr4 != v13)
        v18 = *(ptr4) != *((unsigned short *)&v13);
    if (v18 != *((char *)&v13) && ptr4 != v13)
        4298115416();
    if (sub_10007d05c(v19, &vvar_6) < (unsigned int)v13 && vvar_6 != v13)
    {
        sub_10007d970(vvar_6 + 96);
        sub_10007d970(vvar_6 + 80);
        sub_10007d970(vvar_6 + 64);
        4295490222();
    }
    sub_10007d970(&a9);
    sub_10007d970(&vvar_11);
}
