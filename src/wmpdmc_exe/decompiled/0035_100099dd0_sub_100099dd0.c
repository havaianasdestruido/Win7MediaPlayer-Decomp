/* sub_100099dd0 @ 0x100099dd0
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100099dd0  (1152 bytes, 72 basic blocks)
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

typedef struct struct_1 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    unsigned long long field_10;
    unsigned int field_18;
} struct_1;

typedef struct struct_2 {
    char padding_0[137];
    char field_89;
} struct_2;

typedef struct struct_3 {
    char padding_0[137];
    char field_89;
} struct_3;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
} struct_0;

extern void g_1000075a8;
extern struct_0 *g_1000de4b0;

int sub_100099dd0(void)
{
    unsigned long v29;  // rax
    unsigned long v30;  // rbx
    unsigned long long v36;  // r15
    int v37;  // esi
    struct_2 *v38;  // rbx
    unsigned int addr[6];  // rcx
    unsigned int v41;  // edx
    int v42;  // ebx
    unsigned long v43;  // rdi
    unsigned int v44;  // eax
    unsigned int *ptr3;  // r13
    struct_1 *ptr;  // r8
    unsigned long v46;  // r11
    unsigned long v47;  // r9
    unsigned long long v48;  // cc_op
    unsigned long v49;  // cc_dep1
    unsigned long long v50;  // cc_dep2
    unsigned int v51;  // eax
    unsigned int v52;  // eax
    unsigned int v53;  // edi
    unsigned long v54;  // r10
    unsigned int v32;  // ecx
    unsigned long long v55;  // cc_ndep
    unsigned long long v56;  // 4152
    unsigned long long v57;  // cc_ndep
    unsigned int v58;  // ebx
    struct_3 *v59;  // rsi
    unsigned long v60;  // rbx
    unsigned int p[6];  // rcx
    unsigned int v63;  // edx
    unsigned int v64;  // edi
    unsigned int v33;  // eax
    unsigned int v65;  // eax
    int v66;  // ecx
    unsigned long v67;  // rdi
    unsigned long long v68;  // cc_ndep
    int v69;  // ecx
    unsigned int flag;  // eax
    unsigned long v71;  // rcx
    unsigned int v72;  // eax
    unsigned long v73;  // 4189
    unsigned long v74;  // rcx
    unsigned long long v34;  // rax
    unsigned long v75;  // rax
    unsigned long v77;  // 4236
    unsigned long v78;  // rcx
    unsigned long long v79;  // rax
    int v80;  // r11d
    unsigned long long v81;  // rbx
    int v82;  // eax
    int v83;  // eax
    unsigned int v84;  // ecx
    unsigned int v85;  // eax
    unsigned long long *ptr4;  // r14
    int v35;  // edi
    unsigned int v1;  // [bp+0x30]
    int v2;  // [bp+0x34]
    int v3;  // [bp+0x38]
    unsigned int v4;  // [bp+0x3c]
    unsigned int v5;  // [bp+0x40]
    int v6;  // [bp+0x44]
    unsigned int v7;  // [bp+0x48]
    int v8;  // [bp+0x4c]
    unsigned int v9;  // [bp+0x50]
    int v10;  // [bp+0x54]
    struct_1 *v11;  // [bp+0x58]
    unsigned long v12;  // [bp+0x60], Other Possible Types: unsigned long long
    unsigned int v13;  // [bp+0x68]
    long long v14;  // [bp+0x70]
    char v15;  // [bp+0x78]
    char v16;  // [bp+0x80]
    int v17;  // [bp+0xd0]
    long long v18;  // [bp+0xe0]
    int v19;  // [bp+0xe8]
    int v20;  // [bp+0xf0]
    long long v21;  // [bp+0xf8]
    char v22;  // [bp+0x100020]
    char v23;  // [bp+0x100028]
    unsigned int choice;  // [bp+0x100030]
    unsigned int v25;  // [bp+0x100038]
    int v26;  // [bp+0x10003c]
    unsigned int v27;  // [bp+0x100048]
    unsigned long v28;  // [bp+0x100050]

    v28 = v29;
    if (v29 == v30)
    {
        v32 = *(ptr3);
        if ((v32 & 4294967168) != 4294967168)
        {
            v33 = (v32 & 4294967168) - 1 ^ ~(v32) & 127;
            *(ptr3) = v33;
            if (!(v33 & 4294967168))
                sub_100059224(ptr3); /* do not return */
        }
        v34 = 0;
    }
    else
    {
        v69 = v30;
        v6 = v30;
        v17 = v30;
        v36 = v30 & 4294967295;
        v10 = v30;
        if (v35 > (unsigned int)v30)
        {
            while (true)
            {
                v27 += 1;
                if (v27 > 1)
                    4297065496();
                v11 = (v27 - 1) * 32 + v28;
                v38 = sub_10007c210(vvar_333{r56|8b}, v18, v1, v14);
                sub_10005ae94(v38, &v12, v37, v20, v21);
                addr = (!(v38->field_89 & 32) ? g_1000de4b0 : sub_100055880(v38, &g_1000075a8, 0));
                v41 = addr[0];
                v42 = addr[3];
                v43 = addr[5];
                v5 = addr[4];
                if ((v41 & 4294967168) != 4294967168)
                {
                    v44 = (v41 & 4294967168) - 1 ^ ~(v41) & 127;
                    addr[0] = v44;
                    if (!(v44 & 4294967168))
                        sub_100059224(); /* do not return */
                }
                ptr = v11;
                v46 = v2;
                v47 = *((unsigned int *)((void*)&v12 + 4));
                ptr->field_8 = v46;
                ptr->field_c = 1;
                ptr->field_18 = v1;
                ptr->field_10 = 0;
                v8 = v47;
                v48 = 5;
                v49 = v23;
                v50 = 0;
                if (v23)
                {
                    if (v27 > 1)
                    {
                        v51 = choice;
                        if (v51 && v51 != 3)
                            v17 = (v51 == 2 ? v42 + ((unsigned int)v47 + 1) / 2 : (unsigned int)v47 + v42);
                        else
                            v17 = v42;
                    }
                    v48 = 7;
                    v49 = choice;
                    v50 = 1;
                    if (choice != 1 && !((v48 = 7, v49 = (unsigned long)(unsigned long long)choice, v50 = 3, choice == 3)))
                    {
                        v48 = 7;
                        v49 = choice;
                        v50 = 2;
                        if (choice == 2)
                        {
                            v52 = (v47 & 4294967295) - ((unsigned int)v47 >> 31);
                            v48 = 35;
                            v49 = v52 >> 1;
                            v50 = v52;
                            v36 = v43 + (v52 >> 1);
                        }
                        else
                        {
                            v36 = v47 + v43;
                        }
                    }
                    else
                    {
                        v36 = v43 & 4294967295;
                    }
                }
                v53 = v4;
                v54 = (unsigned int)v12;
                v56 = _ccall(v48, v49, v50, v55);
                v57 = v56;
                v58 = v1 + 1;
                v3 = v54;
                v1 = v58;
                if (v58 < v53)
                {
                    v59 = sub_10007c210(vvar_333{r56|8b}, v18, v58, v14);
                    v60 = *((long long *)sub_10005ae94(v59, &v15, v19, v20, v21));
                    v12 = *((long long *)sub_10005ae94(v59, &v15, v19, v20, v21));
                    p = (!(v59->field_89 & 32) ? g_1000de4b0 : sub_100055880(v59, &g_1000075a8, 0));
                    v63 = p[0];
                    v64 = p[2];
                    v9 = p[3];
                    v13 = p[4];
                    v7 = p[5];
                    if ((v63 & 4294967168) != 4294967168)
                    {
                        v65 = (v63 & 4294967168) - 1 ^ ~(v63) & 127;
                        p[0] = v65;
                        if (!(v65 & 4294967168))
                            sub_100059224(); /* do not return */
                    }
                    v54 = v3;
                    v66 = v19;
                    if (v64 < v5)
                    {
                        v67 = v5;
                        v68 = v55;
                    }
                    else
                    {
                        v67 = v64;
                        v68 = v55;
                    }
                    v57 = v68;
                    v5 = v67;
                    if (!v23 || (unsigned int)v12 + (unsigned int)v67 + (unsigned int)v54 <= v66)
                    {
                        if ((unsigned int)v12 + (unsigned int)v67 + (unsigned int)v54 > v66)
                            v12 = *((long long *)sub_10005ae94(v59, &v16, v66 - v67 - v54, v20, v21));
                        if (v11->field_c != 1)
                            4297065496();
                        4297065496();
                    }
                    else
                    {
                        ptr = v11;
                        v47 = v8;
                        v46 = v2;
                        v58 = v1;
                        v53 = v4;
                    }
                }
                v69 = v6;
                if (v69 < (unsigned int)v54)
                    v69 = v54;
                v6 = v69;
                if (v23)
                {
                    flag = choice;
                    v71 = v17;
                    if (flag == 2)
                    {
                        v72 = -(((unsigned int)v47 + 1) / 2);
                        v73 = _ccall(8, 3, v71 & 4294967295, (unsigned long long)v72, v57);
                        v74 = ((char)v73 ? 0 : (unsigned int)v71 + v72);
                        v17 = v74;
                        v75 = -((unsigned int)((v47 & 4294967295) - ((unsigned int)v47 >> 31)) >> 1);
                        v77 = _ccall(8, 3, v36 & 4294967295, v75 & 4294967295, v57);
                        v36 += v75;
                        if ((char)v77)
                            v36 = 0;
                    }
                    else if (flag == 1)
                    {
                        v78 = v71 - v47;
                        v17 = v78;
                        v74 = v78;
                        if ((unsigned int)((v71 & 4294967295) - v47) < 0)
                        {
                            v74 = 0;
                            v17 = 0;
                        }
                    }
                    else
                    {
                        v74 = v71;
                        if (!flag)
                        {
                            v36 = ((unsigned int)((v36 & 4294967295) - v47) < 0 ? 0 : v36 - v47 & 4294967295);
                            v74 = v71;
                        }
                    }
                    if (v27 > 1)
                    {
                        v79 = ((unsigned int)v74 < v10 ? v10 : v74 & 4294967295);
                        ptr->field_8 = ptr->field_8 + (unsigned int)v79;
                        v46 += v79;
                    }
                    v69 = v6;
                    v10 = v36;
                }
                v80 = (unsigned int)v46 + (unsigned int)v47;
                ptr->field_0 = v54;
                ptr->field_4 = v47;
                v2 = v80;
                if (v58 >= v53)
                    break;
                v37 = v19;
            }
            v81 = 0;
        }
        else
        {
            v80 = v2;
        }
        v82 = v19;
        if (v69 < v82)
            v82 = v69;
        v25 = v82;
        v83 = v20;
        if (v80 < v83)
            v83 = v80;
        v26 = v83;
        v84 = *(ptr3);
        if ((v84 & 4294967168) != 4294967168)
        {
            v85 = (v84 & 4294967168) - 1 ^ ~(v84) & 127;
            *(ptr3) = v85;
            if (!(v85 & 4294967168))
                sub_100059224(ptr3); /* do not return */
        }
        v34 = *((long long *)&v25);
        v22 = v81;
    }
    *(ptr4) = v34;
    return;
}
