/* sub_100097534 @ 0x100097534
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100097534  (1001 bytes, 68 basic blocks)
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

int sub_100097534(void)
{
    int v14;  // r9d
    unsigned int v15;  // r12d
    unsigned int flag2;  // edx
    unsigned long v25;  // r11
    struct_0 *cur;  // rbx
    int v27;  // r9d
    unsigned int v28;  // r14d
    unsigned int v29;  // ebp
    struct_3 *p;  // r13
    unsigned long v31;  // r11
    unsigned long long v32;  // r10
    int v33;  // r9d
    int v16;  // r8d
    int v34;  // r8d
    int v35;  // r9d
    unsigned int v36;  // ebp
    unsigned long v37;  // rcx
    unsigned int v38;  // r14d
    unsigned int v39;  // r14d
    unsigned long long v40;  // rsi
    unsigned long v17;  // rsi
    unsigned int v41;  // r8d
    unsigned int v42;  // esi
    int v43;  // ecx
    int v44;  // r9d
    unsigned int v45;  // r12d
    int v46;  // ecx
    int v47;  // r8d
    int v48;  // ecx
    unsigned long v50;  // cc_ndep
    struct_1 *ptr;  // rcx
    unsigned long v51;  // 4122
    int v52;  // r8d
    unsigned long v54;  // 4122
    int v55;  // r12d
    unsigned long v56;  // r11
    long long v57;  // rax
    unsigned int v58;  // ecx
    unsigned int v59;  // eax
    unsigned int v19;  // eax
    char v20[141];  // rdx
    struct_3 *addr;  // r13
    unsigned int v23;  // r8d
    unsigned int j;  // [bp-0x78]
    int v1;  // [bp-0x74]
    unsigned int v2;  // [bp-0x70]
    unsigned int i;  // [bp-0x6c]
    unsigned int v4;  // [bp-0x68]
    unsigned int v5;  // [bp-0x64]
    unsigned int v6;  // [bp-0x60]
    unsigned int v7;  // [bp-0x5c]
    unsigned long v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    struct_3 *v10;  // [bp-0x48]
    struct_4 *ptr4;  // [bp-0x40]
    unsigned long v12;  // [bp+0x8], Other Possible Types: unsigned int
    int v13;  // [bp+0x20]

    v13 = v14;
    v15 = 0;
    v17 = v16;
    if (!ptr->field_40)
    {
        return;
    }
    else if (!ptr->field_18)
    {
        v19 = sub_10007c114();
        v6 = v19;
        addr = (!(v20[137] & 2) ? g_1000de270 : sub_100055880(v20, &g_100007160, 0));
        v23 = ptr->field_40;
        flag2 = ptr->field_2c;
        v25 = addr->field_8;
        cur = ptr->field_48;
        v10 = addr;
        v8 = v25;
        v27 = 0;
        v1 = 0;
        v28 = 0;
        v4 = 0;
        if (flag2)
        {
            v28 = *((int *)&(&cur->padding_18)[4 * v23]) + *((int *)&(&cur->padding_18)[4 * v23 + 4]);
            v27 = (v17 & 4294967295) - v28;
            v4 = v28;
            if (flag2 == 2)
            {
                v27 /= 2;
                v1 = v27;
            }
            else
            {
                if (flag2 != 1)
                    v27 = 0;
                v1 = v27;
            }
        }
        v5 = 0;
        i = 0;
        v29 = v19;
        p = addr;
        v31 = v25;
        if (v23 > 0)
        {
            v32 = 0;
            v2 = 0;
            v33 = v27;
            v34 = v13;
            do
            {
                v34 = v16;
                v35 = v33;
                v36 = 0;
                if (ptr->field_28 == 2)
                {
                    v36 = v34 - cur->field_0 >> 1;
                }
                else if (ptr->field_28 == 1)
                {
                    v36 = v34 - cur->field_0;
                }
                v37 = cur->field_8;
                v12 = cur->field_4;
                if (ptr->field_2c == 3 && v28 < (unsigned int)v17)
                {
                    if (!v28)
                    {
                        v37 = (v32 & 4294967295) / ptr->field_40 & 4294967295;
                        v12 = ((v32 + v17 & 4294967295) / ptr->field_40 & 4294967295) - v37;
                    }
                    else
                    {
                        v12 = (unsigned int)v17 * cur->field_4 / v28;
                        v37 = v17 * v37 / v28;
                    }
                }
                j = 0;
                v38 = v28;
                if (cur->field_c > 0)
                {
                    v39 = v12;
                    v40 = 18446744073709551612;
                    v7 = (unsigned int)v37 + v35;
                    v9 = 18446744073709551612;
                    do
                    {
                        ptr4 = sub_10007c210(ptr, v20, v15, v25);
                        v41 = 0;
                        v12 = ptr4->field_68;
                        if (j && cur->field_10)
                            v41 = *((int *)(v40 + cur->field_10));
                        v42 = v12;
                        v43 = 0;
                        if (ptr->field_24 == 2)
                        {
                            v43 = (unsigned int)(v39 - v42 - (v39 - v42 >> 31)) >> 1;
                        }
                        else if (ptr->field_24 == 1)
                        {
                            v43 = v39 - v42;
                        }
                        else
                        {
                            v42 = (ptr->field_24 == 3 ? v39 : v42);
                        }
                        v44 = v13;
                        if (ptr->field_28 == 3 && cur->field_0 < v44)
                        {
                            v45 = (!cur->field_0 ? 0 : (unsigned int)((v44 * *((unsigned int *)((void*)&v12 + 4)) & 4294967295) / cur->field_0));
                            v41 = (!cur->field_0 ? 0 : (v44 * v41 & 4294967295) / cur->field_0 & 4294967295);
                        }
                        else
                        {
                            v45 = *((unsigned int *)((void*)&v12 + 4));
                        }
                        v46 = v43 + v7;
                        v47 = v41 + v36;
                        v48 = v46;
                        if (v48 < 0)
                        {
                            v51 = _ccall(8, 3, (unsigned long long)v42, (unsigned long long)v46, v50);
                            v42 = ((char)v51 ? 0 : v42 + v46 & 4294967295);
                            v48 = 0;
                        }
                        if (v42 + v48 > v16)
                            v42 = (v16 - v48 < 0 ? 0 : v16 - v48 & 4294967295);
                        v52 = v47;
                        if (v52 < 0)
                        {
                            v54 = _ccall(8, 3, (unsigned long long)v45, (unsigned long long)(unsigned int)v47, v50);
                            v45 = ((char)v54 ? 0 : v45 + v47);
                            v52 = 0;
                        }
                        if (v45 + v52 > v44)
                        {
                            v55 = v44;
                            v45 = (v55 - v52 < 0 ? 0 : v55 - v52);
                        }
                        if ((v20[140] & 32))
                            v48 = v16 - v42 - v48;
                        sub_10005b404(ptr4, v48);
                        sub_10005b504(ptr4, v42, v45);
                        v25 = v8;
                        v15 = v5 + 1;
                        v40 = v9 + 4;
                        j += 1;
                        v5 = v15;
                        v9 = v40;
                    } while (j < cur->field_c);
                    v17 = v16;
                    v32 = v2;
                    v34 = v13;
                    v38 = v4;
                }
                v28 = v38;
                v34 = v16;
                v32 += v17;
                cur = &cur->field_20;
                v2 = v32;
                i += 1;
                v33 = v1;
            } while (i < ptr->field_40);
            v29 = v6;
            p = v10;
            v31 = v25;
        }
        while (true)
        {
            v56 = v31;
            if (v15 >= v29)
                break;
            v57 = sub_10007c210(ptr, v20, v15, v56);
            v15 += 1;
            sub_10005b404();
            sub_10005b504(v57, 0, 0);
            v31 = v8;
        }
        v58 = p->field_0;
        if ((v58 & 4294967168) == 4294967168)
            return;
        v59 = (v58 & 4294967168) - 1 ^ ~(v58) & 127;
        p->field_0 = v59;
        if ((v59 & 4294967168))
            return;
        sub_100059224(p); /* do not return */
    }
    else
    {
        return;
    }
}
