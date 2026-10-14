/* sub_1000912f6 @ 0x1000912f6
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000912f6  (1233 bytes, 98 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 306467d280e99d0616e839278a4db5bed684f002ae284c3678cabb5251459cb3
 *   Evidence: analysis/report/rea-evidence/wmpnetwk_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[8];
    int field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_1;

typedef struct struct_2 {
    struct struct_1 *field_0;
    char padding_8[8];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_2;

extern long long g_10001e380;
extern struct_2 g_100153eb8;
extern long long g_1001544d8;
extern long long g_100154510;
extern long long g_100154548;

int sub_1000912f6(void)
{
    struct_0 *v26;  // rax
    unsigned int *addr;  // r14
    struct_1 *v35;  // rcx, Other Possible Types: struct_2 *
    unsigned int v36;  // r12d
    unsigned long long p[8];  // r14
    unsigned long long ptr[8];  // r14
    unsigned int v39;  // r12d
    int v40;  // edi
    unsigned int v41;  // edx
    uint128_t v42;  // xmm2
    unsigned long v43;  // cc_ndep
    unsigned long v44;  // 4149
    unsigned int *ptr3;  // r13
    unsigned long v45;  // 4157
    unsigned int v46;  // eax
    uint128_t v47;  // xmm1
    unsigned int v48;  // eax
    unsigned int v49;  // eax
    unsigned int v50;  // ebx
    uint128_t v51;  // xmm2
    unsigned int v52;  // eax
    uint128_t v53;  // xmm1
    unsigned int v54;  // eax
    unsigned int *ptr4;  // r12
    unsigned int v55;  // eax
    unsigned long long *v30;  // rsi
    unsigned int v31;  // eax
    unsigned int v32;  // eax
    unsigned int v33;  // eax
    unsigned int v34;  // ebx
    long long v1;  // [bp+0x20]
    long long v2;  // [bp+0x28]
    long long v3;  // [bp+0x30]
    long long v4;  // [bp+0x38]
    long long v5;  // [bp+0x40]
    struct_0 *ptr7;  // [bp+0x50]
    unsigned int v7;  // [bp+0x58]
    char v8;  // [bp+0x5c], Other Possible Types: unsigned int
    unsigned int flag;  // [bp+0x60]
    unsigned long v10;  // [bp+0x70]
    unsigned long v11;  // [bp+0x78]
    unsigned int flag2;  // [bp+0x80]
    unsigned long long flag3;  // [bp+0x88]
    unsigned long long flag4;  // [bp+0x90]
    unsigned long long flag5;  // [bp+0x98]
    unsigned long long flag6[8];  // [bp+0xa0]
    unsigned long flag7;  // [bp+0xa8]
    unsigned long long flag8;  // [bp+0xb0]
    unsigned long long flag9;  // [bp+0xb8]
    unsigned int choice;  // [bp+0xc0]
    unsigned long long flag10;  // [bp+0xc8]
    char v22;  // [bp+0xe8]
    unsigned int *v23;  // [bp+0x148]
    unsigned int *ptr5;  // [bp+0x160]
    unsigned int *ptr6;  // [bp+0x168]

    ptr7 = v26 + 2;
    *(addr) = 0;
    *(ptr3) = 4294967295;
    *(ptr4) = 4294967295;
    *(ptr5) = 4294967295;
    *(ptr6) = 4294967295;
    flag5 = 0;
    flag6 = NULL;
    flag7 = 0;
    flag8 = 0;
    flag9 = 0;
    choice = 0;
    flag2 = 0;
    flag10 = 0;
    sub_10007b50c(&flag7, 0x100, 4294967295);
    flag3 = 0;
    flag4 = 0;
    v35 = g_100153eb8.field_0;
    if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (g_100153eb8.field_0->field_1c & 8) && g_100153eb8.field_0->field_19 >= 5)
        sub_100034784(g_100153eb8.field_0->field_10, 88, &g_10001e380); /* do not return */
    if (*(v30))
    {
        v31 = sub_100079340(&g_1001544d8);
        v35 = g_100153eb8.field_0;
    }
    else
    {
        v31 = 0;
    }
    if (!v31)
    {
        if (v35 != &g_100153eb8.field_0 && (v35->field_1c & 8) && v35->field_19 >= 5)
            sub_100034784(v35->field_10, 89, &g_10001e380); /* do not return */
        if (*(v30))
        {
            v32 = sub_100079340(&g_100154510);
            v35 = g_100153eb8.field_0;
        }
        else
        {
            v32 = 0;
        }
        if (!v32)
        {
            if (v35 != &g_100153eb8.field_0 && (v35->field_1c & 8) && v35->field_19 >= 5)
                sub_100034784(v35->field_10, v32 + 90, &g_10001e380); /* do not return */
            if (*(v30))
            {
                v33 = sub_100079340(&g_100154548);
                v35 = g_100153eb8.field_0;
            }
            else
            {
                v33 = 0;
            }
            if (!v33)
            {
                v34 = v33 + 2;
                if (v35 != &g_100153eb8.field_0 && (v35->field_1c & 8) && v35->field_19 >= (char)v34)
                    sub_100034784(v35->field_10, v33 + 91, &g_10001e380); /* do not return */
                if (v35 != &g_100153eb8.field_0 && (v35->field_1c & 1))
                {
                    v34 = 5;
                    if (v35->field_19 >= v34)
                    {
                        *((unsigned int *)&v5) = *(ptr6);
                        *((unsigned int *)&v4) = *(ptr5);
                        *((unsigned int *)&v3) = *(ptr4);
                        *((unsigned int *)&v2) = *(ptr3);
                        *((unsigned int *)&v1) = *(v23);
                        sub_10008f23c(v35->field_10, 115, &g_10001e380, 2147746668, v1, v2, v3, v4, v5); /* do not return */
                    }
                }
                if (!flag7)
                    sub_10011bdb8(flag6); /* do not return */
                4297066584();
            }
            else
            {
                flag = 1;
            }
        }
        else
        {
            flag = 1;
        }
        v36 = flag2;
        if (v35 != &g_100153eb8.field_0 && (8 & v35->field_1c) && v35->field_19 >= 5)
            sub_100036510(v35->field_10, 92, &g_10001e380, v36); /* do not return */
        if (v36 <= 3)
            sub_100036284(2147500037); /* do not return */
        p = flag6;
        v10 = p[6];
        v11 = p[7];
        sub_1000361b0(&ptr7, v10, p[7] - v10 >> 1 & 4294967295);
        if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (8 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= 5)
            sub_1000347a8(g_100153eb8.field_0->field_10, 93, &g_10001e380, ptr7); /* do not return */
        sub_100066aa4(&ptr7, &v8); /* do not return */
    }
    else
    {
        ptr = flag6;
        v39 = flag2;
        v40 = *((int *)&ptr7[1].padding_0[4]);
        if (v40)
        {
            if (vvar_231{r56|4b} > 214748364)
            {
                v41 = 3435973837 * vvar_231{r56|4b} >> 32;
                v8 = v41 >> 3;
                v42 = 0x4024000000000000;
                v44 = _ccall(35, (unsigned long long)v41 >> 3, (unsigned long long)v41 >> 2, v43);
                v45 = _ccall(8, 27, (unsigned long long)(v40 - 1), 0, v44);
                v46 = ((char)v45 ? -((unsigned int)v26) : v40 - 1);
                v47 = 0x3ff0000000000000;
                while (true)
                {
                    v48 = v46;
                    if (((char)v48 & 1))
                        v47 = MulV(v47, v42);
                    v49 = v48 >> 1;
                    if (!v48 >> 1)
                        break;
                    v42 = MulV(v42, v42);
                    v46 = v49;
                }
                v50 = ((unsigned int)v26 < 0 ? (unsigned long long)(DivV(0x3ff0000000000000, v47)) : (unsigned long long)v47);
                v7 = v50;
            }
            else
            {
                v51 = 0x4024000000000000;
                v52 = (v40 < 0 ? -(v40) : v40);
                v53 = 0x3ff0000000000000;
                while (true)
                {
                    v54 = v52;
                    if (((char)v54 & 1))
                        v53 = MulV(v53, v51);
                    v55 = v54 >> 1;
                    if (!v54 >> 1)
                        break;
                    v51 = MulV(v51, v51);
                    v52 = v55;
                }
                v50 = (v40 < 0 ? (unsigned long long)(DivV(0x3ff0000000000000, v53)) : (unsigned long long)v53);
                v7 = v50;
            }
        }
        if (v35 != &g_100153eb8.field_0)
        {
            if ((v35->field_1c & 8) && v35->field_19 >= 5)
                sub_100036510(v35->field_10, 96, &g_10001e380, v50); /* do not return */
            if (v35 != &g_100153eb8.field_0 && (v35->field_1c & 8) && v35->field_19 >= 5)
                sub_100036510(v35->field_10, 102, &g_10001e380, v39); /* do not return */
        }
        if (v39)
        {
            v10 = ptr[0];
            v11 = ptr[1];
            sub_1000361b0(&ptr7, v10, ptr[1] - v10 >> 1 & 4294967295);
            sub_100035a14(&ptr7, &v22, 1); /* do not return */
        }
        sub_100036284(2147500037); /* do not return */
    }
}
