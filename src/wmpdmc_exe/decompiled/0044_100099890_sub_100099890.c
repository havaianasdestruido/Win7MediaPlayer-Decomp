/* sub_100099890 @ 0x100099890
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100099890  (1024 bytes, 68 basic blocks)
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
    char padding_0[24];
    char field_18;
    char padding_19[11];
    unsigned int field_24;
    unsigned int field_28;
    unsigned int field_2c;
    char padding_30[16];
    unsigned int field_40;
    char padding_44[4];
    struct struct_0 *field_48;
} struct_1;

typedef struct struct_3 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_3;

typedef struct struct_0 {
    int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    unsigned long long field_10;
    char padding_18[8];
    char field_20;
} struct_0;

typedef struct struct_4 {
    char padding_0[104];
    unsigned long long field_68;
} struct_4;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_2;

extern void g_100007160;
extern struct_2 *g_1000de270;

int sub_100099890(void)
{
    int v14;  // r8d
    unsigned int v15;  // r14d
    unsigned long v24;  // r10
    struct_0 *cur;  // rbx
    unsigned int v26;  // eax
    unsigned int j;  // r12d
    struct_3 *p;  // r13
    unsigned long long v29;  // r9
    int v30;  // r8d
    unsigned int v31;  // r13d
    int v16;  // r9d
    unsigned int v32;  // r13d
    unsigned int v33;  // ebp
    unsigned long v34;  // rcx
    unsigned int v35;  // r14d
    unsigned int v36;  // r14d
    unsigned long long v37;  // rsi
    struct_4 *addr;  // rax
    unsigned long v39;  // rcx
    unsigned int v40;  // r9d
    unsigned int v41;  // r12d
    unsigned long v17;  // rsi
    int v42;  // r8d
    unsigned int v43;  // r12d
    unsigned int v44;  // r12d
    int v45;  // ecx
    unsigned int v46;  // esi
    int v47;  // r8d
    int v48;  // r9d
    int v49;  // r9d
    unsigned long v51;  // cc_ndep
    struct_1 *ptr;  // rcx
    unsigned long v52;  // 4122
    int v53;  // esi
    int v54;  // r8d
    unsigned long v56;  // 4122
    unsigned long v57;  // r10
    long long v58;  // rax
    unsigned int v59;  // ecx
    unsigned int v60;  // eax
    char v19[141];  // rdx
    struct_3 *ptr4;  // r13
    unsigned int v22;  // r8d
    unsigned int flag2;  // edx
    unsigned long v0;  // [bp-0x88], Other Possible Types: unsigned int
    unsigned int k;  // [bp-0x80]
    unsigned int v2;  // [bp-0x7c]
    unsigned int i;  // [bp-0x78]
    unsigned int v4;  // [bp-0x74]
    unsigned int v5;  // [bp-0x70]
    unsigned int v6;  // [bp-0x6c]
    unsigned int v7;  // [bp-0x68]
    unsigned long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    struct_3 *v10;  // [bp-0x50]
    struct_4 *v11;  // [bp-0x48]
    unsigned int v12;  // [bp+0x8]
    int v13;  // [bp+0x18]

    v13 = v14;
    v15 = 0;
    v17 = v16;
    if (!ptr->field_40)
    {
        return;
    }
    else if (!ptr->field_18)
    {
        v6 = sub_10007c114();
        ptr4 = (!(v19[137] & 2) ? g_1000de270 : sub_100055880(v19, &g_100007160, 0));
        v22 = ptr->field_40;
        flag2 = ptr->field_2c;
        v24 = ptr4->field_8;
        cur = ptr->field_48;
        v10 = ptr4;
        v8 = v24;
        v12 = 0;
        v4 = 0;
        if (flag2)
        {
            v15 = *((int *)&(&cur->padding_18)[4 * v22]) + *((int *)&(&cur->padding_18)[4 * v22 + 4]);
            v26 = (v17 & 4294967295) - v15;
            v4 = v15;
            if (flag2 == 2)
            {
                v12 = v26 / 2;
            }
            else
            {
                if (flag2 != 1)
                    v26 = 0;
                v12 = v26;
            }
        }
        j = 0;
        v5 = 0;
        i = 0;
        p = ptr4;
        if (v22 > 0)
        {
            v29 = 0;
            v2 = 0;
            v30 = v13;
            v31 = v12;
            do
            {
                v31 = v32;
                v30 = v14;
                v33 = 0;
                if (ptr->field_24 == 2)
                {
                    v33 = v30 - cur->field_0 >> 1;
                }
                else if (ptr->field_24 == 1)
                {
                    v33 = v30 - cur->field_0;
                }
                v34 = cur->field_8;
                v0 = cur->field_4;
                if (ptr->field_2c == 3 && v15 < (unsigned int)v17)
                {
                    if (!v15)
                    {
                        v34 = (v29 & 4294967295) / ptr->field_40 & 4294967295;
                        v0 = ((v29 + v17 & 4294967295) / ptr->field_40 & 4294967295) - v34;
                    }
                    else
                    {
                        v0 = (unsigned int)v17 * cur->field_4 / v15;
                        v34 = v17 * v34 / v15;
                    }
                }
                k = 0;
                v35 = v15;
                if (cur->field_c > 0)
                {
                    v36 = v0;
                    v37 = 18446744073709551612;
                    v7 = (unsigned int)v34 + v31;
                    v9 = 18446744073709551612;
                    do
                    {
                        addr = sub_10007c210(ptr, v19, j, v24);
                        v39 = addr->field_68;
                        v11 = addr;
                        v40 = 0;
                        v0 = v39;
                        if (k && cur->field_10)
                            v40 = *((int *)(v37 + cur->field_10));
                        v41 = *((unsigned int *)((void*)&v0 + 4));
                        v42 = 0;
                        if (ptr->field_28 == 2)
                        {
                            v42 = (unsigned int)(v36 - (v39 >> 32) - ((unsigned int)(v36 - (v39 >> 32)) >> 31)) >> 1;
                            v43 = v41;
                        }
                        else if (ptr->field_28 == 1)
                        {
                            v42 = v36 - (v39 >> 32);
                            v43 = v41;
                        }
                        else if (ptr->field_28 == 3)
                        {
                            v43 = v36;
                        }
                        else
                        {
                            v43 = v41;
                        }
                        v44 = v43;
                        v45 = v13;
                        if (ptr->field_24 == 3 && cur->field_0 < v45)
                        {
                            v46 = (!cur->field_0 ? 0 : (unsigned int)((v45 * (unsigned int)v0 & 4294967295) / cur->field_0));
                            v40 = (!cur->field_0 ? 0 : (v45 * v40 & 4294967295) / cur->field_0 & 4294967295);
                        }
                        else
                        {
                            v46 = v0;
                        }
                        v47 = v42 + v7;
                        v48 = v40 + v33;
                        v49 = v48;
                        if (v49 < 0)
                        {
                            v52 = _ccall(8, 3, (unsigned long long)v46, (unsigned long long)(unsigned int)v48, v51);
                            v46 = ((char)v52 ? 0 : v46 + v48);
                            v49 = 0;
                        }
                        if (v46 + v49 > v45)
                        {
                            v53 = v45;
                            v46 = (v53 - v49 < 0 ? 0 : v53 - v49);
                        }
                        v54 = v47;
                        if (v54 < 0)
                        {
                            v56 = _ccall(8, 3, (unsigned long long)v44, (unsigned long long)(unsigned int)v47, v51);
                            v44 = ((char)v56 ? 0 : v44 + v47);
                            v54 = 0;
                        }
                        if (v44 + v54 > v16)
                            v44 = (v16 - v54 < 0 ? 0 : v16 - v54);
                        if ((v19[140] & 32))
                            v49 = v45 - v46 - v49;
                        sub_10005b404(v11, v49);
                        sub_10005b504(v11, v46, v44);
                        v24 = v8;
                        j = v5 + 1;
                        v37 = v9 + 4;
                        k += 1;
                        v5 = j;
                        v9 = v37;
                    } while (k < cur->field_c);
                    v17 = v16;
                    v29 = v2;
                    v30 = v13;
                    v31 = v12;
                    v35 = v4;
                }
                v15 = v35;
                v31 = v32;
                v30 = v14;
                v29 += v17;
                cur = &cur->field_20;
                v2 = v29;
                i += 1;
            } while (i < ptr->field_40);
            p = v10;
        }
        if (j < v6)
        {
            v57 = v24;
            do
            {
                v58 = sub_10007c210(ptr, v19, j, v57);
                j += 1;
                sub_10005b404();
                sub_10005b504(v58, 0, 0);
                v57 = v8;
            } while (j < v6);
        }
        v59 = p->field_0;
        if ((v59 & 4294967168) == 4294967168)
            return;
        v60 = (v59 & 4294967168) - 1 ^ ~(v59) & 127;
        p->field_0 = v60;
        if ((v60 & 4294967168))
            return;
        sub_100059224(p); /* do not return */
    }
    else
    {
        return;
    }
}
