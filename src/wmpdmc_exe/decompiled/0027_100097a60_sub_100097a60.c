/* sub_100097a60 @ 0x100097a60
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100097a60  (1204 bytes, 75 basic blocks)
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
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned int field_10;
    unsigned int field_14;
} struct_0;

extern void g_1000075a8;
extern struct_0 *g_1000de4b0;

int sub_100097a60(void)
{
    void* ptr;  // r12
    unsigned long v24;  // rax
    int i;  // r11d
    int v33;  // ebp
    struct_2 *v34;  // rbx
    unsigned int ptr3[6];  // rcx
    unsigned int v37;  // edx
    int v38;  // ebx
    unsigned long v39;  // rbp
    unsigned int v40;  // eax
    struct_1 *p;  // r8
    unsigned long v25;  // r13
    unsigned long long v42;  // r9
    unsigned long long v43;  // rdi
    unsigned long long v44;  // cc_op
    unsigned long v45;  // cc_dep1
    unsigned long long v46;  // cc_dep2
    unsigned int v47;  // eax
    unsigned int v48;  // eax
    int v49;  // ebx
    unsigned long v50;  // r10
    unsigned long long v51;  // cc_ndep
    unsigned int *ptr4;  // r14
    unsigned long long v52;  // 4146
    unsigned long long v53;  // cc_ndep
    struct_3 *v54;  // rbp
    unsigned int addr[6];  // rcx
    unsigned int v57;  // edx
    unsigned int v58;  // ebp
    unsigned int v59;  // eax
    unsigned int v60;  // ecx
    unsigned long v61;  // rbp
    unsigned int v27;  // ecx
    unsigned long long v62;  // cc_ndep
    unsigned int flag;  // eax
    unsigned long v64;  // rcx
    unsigned int v65;  // eax
    unsigned long v66;  // 4190
    unsigned long v67;  // rcx
    unsigned long v68;  // rax
    unsigned long long v69;  // rsi
    unsigned long v70;  // 4241
    unsigned long long v71;  // rsi
    unsigned int v28;  // eax
    unsigned long v72;  // rcx
    unsigned long long v73;  // rax
    int v74;  // r9d
    int v75;  // ecx
    int v76;  // eax
    unsigned int v77;  // ecx
    unsigned int v78;  // eax
    unsigned long long v29;  // rax
    unsigned long long *ptr5;  // r15
    int v30;  // ecx
    unsigned int v31;  // edi
    int v1;  // [bp+0x30], Other Possible Types: unsigned int
    int v2;  // [bp+0x34]
    int v3;  // [bp+0x38]
    unsigned int v4;  // [bp+0x3c]
    int v5;  // [bp+0x40]
    int v6;  // [bp+0x44]
    int v7;  // [bp+0x48]
    int v8;  // [bp+0x4c]
    unsigned long v9;  // [bp+0x50], Other Possible Types: unsigned long long
    unsigned int v10;  // [bp+0x58]
    int v11;  // [bp+0x5c]
    struct_1 *v12;  // [bp+0x60]
    unsigned int v13;  // [bp+0x68]
    long long v14;  // [bp+0x70]
    struct_3 *v15;  // [bp+0x78]
    char v16;  // [bp+0x80]
    char v17;  // [bp+0x88]
    int v18;  // [bp+0xd0]
    long long v19;  // [bp+0xe0]
    int v20;  // [bp+0xe8]
    int v21;  // [bp+0xf0]
    long long v22;  // [bp+0xf8]

    *((unsigned long *)&ptr[72]) = v24;
    if (v24 == v25)
    {
        v27 = *(ptr4);
        if ((v27 & 4294967168) != 4294967168)
        {
            v28 = (v27 & 4294967168) - 1 ^ ~(v27) & 127;
            *(ptr4) = v28;
            if (!(v28 & 4294967168))
                sub_100059224(ptr4); /* do not return */
        }
        v29 = 0;
    }
    else
    {
        v30 = v25;
        v18 = v25;
        v71 = v25 & 4294967295;
        v1 = v25;
        v11 = v25;
        v7 = v30;
        if (v31 > 0)
        {
            i = v30;
            do
            {
                *((unsigned int *)&ptr[64]) = (int)ptr[64] + 1;
                if ((int)ptr[64] > 1)
                    4297065496();
                v12 = ((int)ptr[64] - 1) * 32 + (long long)ptr[72];
                v34 = sub_10007c210(ptr, v19, i, v14);
                sub_10005ae94(v34, &v9, v20, v33, v22);
                ptr3 = (!(v34->field_89 & 32) ? g_1000de4b0 : sub_100055880(v34, &g_1000075a8, 0));
                v37 = ptr3[0];
                v38 = ptr3[2];
                v39 = ptr3[4];
                v4 = ptr3[5];
                if ((v37 & 4294967168) != 4294967168)
                {
                    v40 = (v37 & 4294967168) - 1 ^ ~(v37) & 127;
                    ptr3[0] = v40;
                    if (!(v40 & 4294967168))
                        sub_100059224(); /* do not return */
                }
                p = v12;
                v42 = v3;
                v43 = v9;
                p->field_8 = v42;
                p->field_c = 1;
                p->field_18 = v2;
                p->field_10 = 0;
                v44 = 5;
                v45 = (char)ptr[32];
                v46 = 0;
                if ((char)ptr[32])
                {
                    if ((int)ptr[64] > 1)
                    {
                        v47 = (int)ptr[36];
                        if (v47 && v47 != 3)
                            v18 = (v47 == 2 ? ((unsigned int)v43 + 1) / 2 + v38 : (unsigned int)v43 + v38);
                        else
                            v18 = v38;
                    }
                    v44 = 7;
                    v45 = (int)ptr[36];
                    v46 = 1;
                    if ((int)ptr[36] != 1 && !((v44 = 7, v45 = (unsigned long)(unsigned long long)(unsigned int)(int)ptr[36], v46 = 3, (int)ptr[36] == 3)))
                    {
                        v44 = 7;
                        v45 = (int)ptr[36];
                        v46 = 2;
                        if ((int)ptr[36] == 2)
                        {
                            v48 = (v43 & 4294967295) - ((unsigned int)v43 >> 31);
                            v44 = 35;
                            v45 = v48 >> 1;
                            v46 = v48;
                            v71 = v39 + (v48 >> 1);
                        }
                        else
                        {
                            v71 = v43 + v39;
                        }
                        v1 = v71;
                    }
                    else
                    {
                        v71 = v39 & 4294967295;
                        v1 = v39;
                    }
                }
                v49 = v5;
                v50 = *((unsigned int *)((void*)&v9 + 4));
                v52 = _ccall(v44, v45, v46, v51);
                v53 = v52;
                i = v2 + 1;
                v6 = v50;
                v2 = i;
                if (i < v49)
                {
                    v54 = sub_10007c210(ptr, v19, i, v14);
                    v15 = v54;
                    v9 = *((long long *)sub_10005ae94(v54, &v16, v20, v21, v22));
                    addr = (!(v54->field_89 & 32) ? g_1000de4b0 : sub_100055880(v54, &g_1000075a8, 0));
                    v57 = addr[0];
                    v58 = addr[3];
                    v8 = addr[2];
                    v10 = addr[4];
                    v13 = addr[5];
                    if ((v57 & 4294967168) != 4294967168)
                    {
                        v59 = (v57 & 4294967168) - 1 ^ ~(v57) & 127;
                        addr[0] = v59;
                        if (!(v59 & 4294967168))
                            sub_100059224(); /* do not return */
                    }
                    v60 = *((unsigned int *)((void*)&v9 + 4));
                    v50 = v6;
                    if (v58 < v4)
                    {
                        v61 = v4;
                        v62 = v51;
                    }
                    else
                    {
                        v61 = v58;
                        v62 = v51;
                    }
                    v53 = v62;
                    v4 = v61;
                    if (!(char)ptr[32] || v60 + (unsigned int)v61 + (unsigned int)v50 <= v21)
                    {
                        v75 = v21;
                        if (v60 + (unsigned int)v61 + (unsigned int)v50 > v75)
                            v9 = *((long long *)sub_10005ae94(v15, &v17, v20, v75 - v61 - v50, v22));
                        if (v12->field_c != 1)
                            4297065496();
                        4297065496();
                    }
                    else
                    {
                        p = v12;
                        v42 = v3;
                        i = v2;
                        v49 = v5;
                    }
                }
                v30 = ((unsigned int)v50 < v7 ? v7 : (unsigned int)v50);
                v7 = v30;
                if ((char)ptr[32])
                {
                    flag = (int)ptr[36];
                    v64 = v18;
                    if (flag == 2)
                    {
                        v65 = -(((unsigned int)v43 + 1) / 2);
                        v66 = _ccall(8, 3, v64 & 4294967295, (unsigned long long)v65, v53);
                        v67 = ((char)v66 ? 0 : (unsigned int)v64 + v65);
                        v18 = v67;
                        v68 = -((unsigned int)((v43 & 4294967295) - ((unsigned int)v43 >> 31)) >> 1);
                        v69 = v71 + v68;
                        v1 = v69;
                        v70 = _ccall(8, 3, v71 & 4294967295, v68 & 4294967295, v53);
                        v71 = v69;
                        if ((char)v70)
                        {
                            v71 = 0;
                            v1 = 0;
                        }
                    }
                    else if (flag == 1)
                    {
                        v72 = v64 - v43;
                        v18 = v72;
                        v67 = v72;
                        if ((unsigned int)((v64 & 4294967295) - v43) < 0)
                        {
                            v67 = 0;
                            v18 = 0;
                        }
                    }
                    else
                    {
                        v67 = v64;
                        if (!flag)
                        {
                            v71 = ((unsigned int)((v71 & 4294967295) - v43) < 0 ? 0 : v71 - v43 & 4294967295);
                            v1 = v71;
                            v67 = v64;
                        }
                    }
                    if ((int)ptr[64] > 1)
                    {
                        v73 = ((unsigned int)v67 < v11 ? v11 : v67 & 4294967295);
                        p->field_8 = p->field_8 + (unsigned int)v73;
                        v42 += v73;
                    }
                    v30 = v7;
                    v11 = v71;
                }
                v33 = v21;
                v74 = (unsigned int)v42 + (unsigned int)v43;
                p->field_0 = v50;
                v3 = v74;
                p->field_4 = v43;
            } while (i < v49);
        }
        else
        {
            v74 = v30;
        }
        v76 = v20;
        if (v30 < v33)
            v33 = v30;
        if (v74 < v76)
            v76 = v74;
        *((int *)&ptr[52]) = v33;
        *((int *)&ptr[48]) = v76;
        v77 = *(ptr4);
        if ((v77 & 4294967168) != 4294967168)
        {
            v78 = (v77 & 4294967168) - 1 ^ ~(v77) & 127;
            *(ptr4) = v78;
            if (!(v78 & 4294967168))
                sub_100059224(ptr4); /* do not return */
        }
        v29 = (long long)ptr[48];
        *((char *)&ptr[24]) = 0;
    }
    *(ptr5) = v29;
    return;
}
