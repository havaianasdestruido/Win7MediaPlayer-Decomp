/* sub_1000656ac @ 0x1000656ac
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000656ac  (1290 bytes, 63 basic blocks)
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

typedef struct struct_5 {
    char padding_0[16];
    struct struct_6 *field_10;
    struct struct_7 *field_18;
} struct_5;

typedef struct struct_0 {
    char padding_0[140];
    unsigned int field_8c;
} struct_0;

typedef struct struct_1 {
    char padding_0[140];
    unsigned int field_8c;
} struct_1;

typedef struct struct_2 {
    char padding_0[128];
    int field_80;
    char padding_84[8];
    unsigned int field_8c;
} struct_2;

typedef struct struct_8 {
    char padding_0[16];
    struct struct_9 *field_10;
    struct struct_10 *field_18;
} struct_8;

typedef struct struct_3 {
    char padding_0[128];
    int field_80;
} struct_3;

typedef struct struct_4 {
    char padding_0[140];
    char field_8c;
} struct_4;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

int sub_1000656ac(void)
{
    struct_5 **p;  // rax
    struct_5 **v43;  // r8
    struct_0 *v52;  // r13
    char v54;  // al
    struct_1 *v55;  // r13
    struct_2 *ptr;  // r13, Other Possible Types: struct_3 *
    int v58;  // ecx
    unsigned long v59;  // rdi
    long long v60;  // rdi
    char v61;  // bpl
    unsigned int v44;  // edx
    unsigned long long v63;  // rax
    struct_5 **v64;  // rcx
    unsigned long v65;  // r8
    struct_8 *v66;  // r9
    unsigned long long v67;  // rdx
    unsigned long long v68;  // rbx
    unsigned long v69;  // cc_ndep
    unsigned long v70;  // 4101
    unsigned int v45;  // esi
    unsigned long long v71;  // r9
    long long v72;  // r12
    int v73;  // ecx
    int v74;  // edx
    char v75;  // dl
    unsigned int v76;  // ecx
    unsigned int v77;  // eax
    unsigned int v78;  // r8d
    unsigned int v79;  // edx
    unsigned int v46;  // edx
    unsigned int v80;  // r9d
    unsigned int flag2;  // r9d
    struct_4 *v82;  // r13
    unsigned int v83;  // r9d
    unsigned int v84;  // edx
    unsigned int v85;  // edx
    unsigned int v86;  // edx
    unsigned long v47;  // rdx
    struct_5 **v87;  // rcx
    char v48;  // 4103
    char v49;  // cl
    char v50;  // r14b
    char v51;  // dl
    unsigned int v1;  // [bp+0x28]
    unsigned long long v2;  // [bp+0x60]
    char v3;  // [bp+0x68], Other Possible Types: unsigned int
    unsigned int v4;  // [bp+0x6c]
    unsigned int v5;  // [bp+0x70]
    unsigned int v6;  // [bp+0x74]
    unsigned int choice;  // [bp+0x78]
    unsigned int v8;  // [bp+0x7c]
    unsigned int v9;  // [bp+0x80]
    unsigned int v10;  // [bp+0x84]
    unsigned int v11;  // [bp+0x90]
    unsigned int v12;  // [bp+0x94]
    unsigned short v13;  // [bp+0x98]
    unsigned short v14;  // [bp+0x9a]
    unsigned short v15;  // [bp+0x9c]
    unsigned short v16;  // [bp+0x9e]
    int v17;  // [bp+0xa0], Other Possible Types: unsigned int
    int v18;  // [bp+0xa4], Other Possible Types: unsigned int
    unsigned short v19;  // [bp+0xa8]
    unsigned short v20;  // [bp+0xaa]
    unsigned short v21;  // [bp+0xac]
    unsigned short v22;  // [bp+0xae]
    int v23;  // [bp+0xb0], Other Possible Types: unsigned int
    int v24;  // [bp+0xb4], Other Possible Types: unsigned int
    unsigned short v25;  // [bp+0xb8]
    unsigned short v26;  // [bp+0xba]
    unsigned short v27;  // [bp+0xbc]
    unsigned short v28;  // [bp+0xbe]
    unsigned int v29;  // [bp+0xc0]
    unsigned int v30;  // [bp+0xc4]
    unsigned short v31;  // [bp+0xc8]
    unsigned short v32;  // [bp+0xca]
    unsigned short v33;  // [bp+0xcc]
    unsigned short v34;  // [bp+0xce]
    char flag;  // [bp+0x1f0]
    char v36;  // [bp+0x1f8]
    unsigned int v37;  // [bp+0x100008]
    char v38;  // [bp+0x100010]
    long long v39;  // [bp+0x100018]
    unsigned int v40;  // [bp+0x100020]
    char v41;  // [bp+0x100024]

    v43 = p;
    v44 = v37 & 63;
    v46 = v44 - v45;
    if (v44 != v45)
    {
        v47 = v46 - 8;
        if (v46 == 8)
        {
            v68 = vvar_139{r56|8b} + 8;
            if (v38 <= (char)v45)
            {
LABEL_100065db2:
                v61 = 0;
                flag = 0;
                if (v68)
                {
                    v76 = v3;
                    v77 = v4;
                    v78 = v5;
                    v79 = v6;
                    v11 = v76;
                    v12 = v77;
                    v17 = v76;
                    v18 = v77;
                    v23 = v78;
                    v24 = v79;
                    v29 = v78;
                    v30 = v79;
                    if (v38 && v38 != 3)
                    {
                        v24 = (unsigned int)(v77 + v79 - (v77 + v79 >> 31)) >> 1;
                        v18 = v24;
                        v80 = v45;
                    }
                    else
                    {
                        flag2 = 0;
                        v23 = (unsigned int)(v76 + v78 - (v76 + v78 >> 31)) >> 1;
                        v17 = v23;
                        v80 = 0;
                        if ((32 & v82->field_8c))
                        {
                            v11 = v78;
                            v29 = v76;
                            v80 = flag2;
                        }
                    }
                    v83 = v80;
                    v84 = v39;
                    v13 = (char)v84 * 0x100;
                    v14 = ((unsigned short)v84 >> 8) * 0x100;
                    v16 = (unsigned short)(v84 >> 24) * 0x100;
                    v15 = (char)(v84 >> 16) * 0x100;
                    if (v38 != 3 && v38 != 4)
                    {
                        choice = 0;
                        v85 = v39;
                        v8 = 3;
                    }
                    else
                    {
                        v86 = v39;
                        choice = 0;
                        v9 = v45;
                        v8 = 2;
                        v10 = 3;
                        v25 = (char)v86 * 0x100;
                        v19 = v25;
                        v26 = ((unsigned short)v86 >> 8) * 0x100;
                        v20 = v26;
                        v28 = (unsigned short)(v86 >> 24) * 0x100;
                        v22 = v28;
                        v85 = v40;
                        v27 = (char)(v86 >> 16) * 0x100;
                        v21 = v27;
                    }
                    v1 = v83;
                    v31 = (char)v85 * 0x100;
                    v32 = ((unsigned short)v85 >> 8) * 0x100;
                    v34 = (unsigned short)(v85 >> 24) * 0x100;
                    v33 = (char)(v85 >> 16) * 0x100;
                    4297065848();
                }
                goto LABEL_100065e95;
            }
            if (v38 != 2)
            {
                v70 = _ccall(6, 5, (unsigned long long)v38, 2, v69);
                if (!((char)v70))
                {
                    if (v38 <= 4)
                        goto LABEL_100065db2;
                    if (v38 == 5)
                        4297066672();
                    if (v38 == 6)
                    {
                        if (v39 && (int)sub_1000790a0(v39, &v36) >= 0)
                        {
                            v60 = v36;
                            if ((v60 & 0xffffffffffff0000))
                                4295809746();
                            v71 = *((int *)&v41);
                            v43 = v40;
                            sub_1000645dc(v60, v72, v43, v71, &v3);
                        }
                        v61 = 0;
                        goto LABEL_100065b7c;
                    }
                }
            }
            else
            {
                v73 = ptr->field_80 * (char)v39;
                v74 = (unsigned int)(2155905153 * v73 >> 32) + v73 >> 7;
                v75 = (char)v74 + (char)(v74 >> 31);
                v60 = _INSERT(0, 0, v75);
                if (v75)
                    4297065824();
                v61 = 0;
                flag = 0;
                goto LABEL_100065e95;
            }
        }
        else if (v46 == 10)
        {
            v48 = v41;
            v49 = v48;
            v50 = (char)v45 + 2;
            v51 = v48 & v50;
            if (!(v48 & v50))
            {
                v54 = v49 >> 2 & 15;
                if ((v49 >> 2 & 15) != (char)v45)
                {
                    if (v54 != 4)
                    {
                        if (v54 - 5 <= v50)
                            4295809746();
                    }
                    else
                    {
                        sub_100059a64(vvar_139{r56|8b}, _INSERT(v51 CONCAT 0, 0, ((char)v55->field_8c & 32) == 32));
                        4297066088();
                    }
                }
                else
                {
                    v58 = ptr->field_80 * v41;
                    v59 = v58 + (unsigned int)(2155905153 * v58 >> 32) >> 7;
                    v60 = v59 + ((unsigned int)v59 >> 31);
                    if (!(char)v60)
                    {
                        v61 = 0;
                        flag = 0;
                        goto LABEL_100065e92;
                    }
                }
                if (v43)
                {
                    v63 = sub_100059a64(vvar_139{r56|8b}, _INSERT(v51 CONCAT 0, 0, ((char)ptr->field_8c & 32) == 32));
                    v64 = p;
                    v65 = vvar_139{r56|8b};
                    v66 = *(p);
                    v67 = v63;
                    *(p)->field_10();
                }
                v61 = v45;
LABEL_100065e92:
LABEL_100065e95:
                if (!(char)v60)
                {
LABEL_100065b7c:
                    v87 = p;
                    if (p)
                        *(p)->field_18();
                    if (v2)
                    {
                        if (v61)
                            4297066072();
                        return;
                    }
                    else
                    {
                        return;
                    }
                }
            }
            else if ((v48 & v50) == 2)
            {
                sub_100059a64(vvar_139{r56|8b}, _INSERT(v51 CONCAT 0, 0, ((char)v52->field_8c & 32) == 32));
                4297065880();
            }
        }
        4297066656();
    }
    else
    {
        flag = 0;
        if (*((int *)&v38) < 10000)
            4295812062();
        4297066304();
    }
}
