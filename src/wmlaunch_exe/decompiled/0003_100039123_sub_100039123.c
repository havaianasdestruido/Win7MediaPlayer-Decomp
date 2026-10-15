/* sub_100039123 @ 0x100039123
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100039123  (793 bytes, 76 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 8ea713b95f32c31a11bb1dded4cc8b9620014600f122fff3852c082d9af67b1b
 *   Evidence: analysis/report/rea-evidence/wmlaunch_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned long long field_0;
    struct struct_1 *field_8;
    unsigned long long field_10;
    unsigned int field_18;
    char padding_1c[36];
    unsigned long long field_40;
    char padding_48[8];
    struct struct_1 *field_50;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

void sub_100039123(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned short *a6, unsigned short *addr, unsigned long a8, unsigned short *a9, unsigned long a10, unsigned short *p, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21)
{
    struct_0 *ptr;  // rbx
    long long v3;  // r13
    unsigned long long ptr3;  // rcx
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

    if ((int)sub_10002fd60(&ptr->field_40, v3, v4) < vvar_109{r56|8b})
    {
        sub_100030020(&ptr[1].field_8);
        sub_100030020(&ptr->field_50);
        sub_100030020(&ptr->field_40);
        4295207406();
    }
    ptr->field_0 = ptr->field_40;
    sub_10002fbf0(&vvar_11);
    sub_10002fd60(&vvar_11, ".", v4);
    sub_10002fe84(&vvar_11, v3, v4);
    v5 = vvar_178{r56|8b};
    if (vvar_11 != vvar_109{r56|8b})
        v5 = *((short *)vvar_11) != (unsigned short)vvar_178{r56|8b};
    if (v5 != (char)vvar_109{r56|8b})
    {
        sub_10002fbf0(&a9);
        sub_100030020(&a9);
        if (vvar_11 != vvar_109{r56|8b})
            sub_100030254(&a9, -0x80000000, vvar_11, L"PerceivedType");
        ptr5 = a9;
        v7 = vvar_178{r56|8b};
        if (ptr5 != vvar_109{r56|8b})
            v7 = *(ptr5) != (unsigned short)vvar_178{r56|8b};
        if (v7 != (char)vvar_109{r56|8b})
        {
            if ((char)sub_10002fba4(ptr5, L"image") != (char)vvar_178{r56|8b})
            {
                ptr->field_18 = 2;
            }
            else if (ptr5 != vvar_178{r56|8b})
            {
                4296016600();
            }
        }
        sub_10002fbf0(&vvar_7);
        sub_100030020(&vvar_7);
        if (vvar_11 != vvar_109{r56|8b})
            sub_100030254(&vvar_7, -0x80000000, vvar_11, L"Content Type");
        v8 = vvar_178{r56|8b};
        if (vvar_7 != vvar_109{r56|8b})
            v8 = *((short *)vvar_7) != (unsigned short)vvar_178{r56|8b};
        if (v8 != (char)vvar_109{r56|8b})
        {
            if (vvar_7 == vvar_178{r56|8b})
            {
                ptr6 = &ptr->field_50;
                sub_10002fd60(ptr6, vvar_7, 4294967295);
                ptr7 = ptr6->field_0;
                v11 = 0;
                if (ptr7)
                    v11 = *(ptr7);
                if (v11)
                    ptr->field_8 = ptr7;
                ptr3 = ptr[1].field_8;
                v13 = NULL;
                v14 = 0;
                if (ptr3)
                    v14 = *((short *)ptr3);
                if (v14)
                    ptr->field_10 = ptr3;
            }
            else if (*((short *)vvar_7) != (unsigned short)vvar_178{r56|8b})
            {
                4296016728();
            }
            else
            {
                4296016720();
            }
        }
        sub_100030020(&vvar_7);
        sub_100030020(&a9);
        v15 = 4294967295;
    }
    v16 = (char)v13;
    if (vvar_11 != vvar_109{r56|8b})
        v16 = *((short *)vvar_11) != *((unsigned short *)&v13);
    if (v16 != *((char *)&v13))
    {
        sub_10002fbf0(&a9);
        sub_10002fd60(&a9, L"Software\\Microsoft\\Multimedia\\WMPlayer\\Extensions\\", v15);
        sub_10002fe84(&a9, vvar_11, v15);
        v1 = &vvar_7;
        addr = v13;
        4296015904();
    }
    sub_10002fbf0(&a9);
    sub_100030020(&a9);
    sub_100030254(&a9, -2147483646, L"Software\\Microsoft\\MediaPlayer\\MLS\\Extensions", v3);
    ptr4 = a9;
    v18 = (char)v13;
    if (ptr4 != v13)
        v18 = *(ptr4) != *((unsigned short *)&v13);
    if (v18 != *((char *)&v13) && ptr4 != v13)
        4296016600();
    if (sub_1000397e0(v19, &vvar_6) < (unsigned int)v13 && vvar_6 != v13)
    {
        sub_100030020(vvar_6 + 96);
        sub_100030020(vvar_6 + 80);
        sub_100030020(vvar_6 + 64);
        4295207406();
    }
    sub_100030020(&a9);
    sub_100030020(&vvar_11);
}
