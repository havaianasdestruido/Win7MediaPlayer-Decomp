/* sub_1001271b4 @ 0x1001271b4
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1001271b4  (3714 bytes, 223 basic blocks)
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
    char padding_0[4];
    unsigned int field_4;
} struct_0;

typedef struct struct_1 {
    char padding_0[4];
    unsigned int field_4;
} struct_1;

typedef struct struct_2 {
    char padding_0[4];
    unsigned int field_4;
} struct_2;

extern long long g_1000225e4;

int sub_1001271b4(void)
{
    char *v37;  // r8
    char *v38;  // rcx
    void* v47;  // rax
    char *v125;  // rcx
    char *v126;  // rax
    long long idx6;  // rdi
    long long v128;  // rbp
    char *v129;  // rcx
    unsigned long long v131;  // rcx
    char *iter;  // rdi
    long long v133;  // rbx
    unsigned long v134;  // rsi
    long long v48;  // rax
    struct_0 *ptr7;  // r15
    unsigned long v136;  // rsi
    long long i2;  // rbx
    unsigned long v138;  // rsi
    long long v139;  // rbx
    long long v140;  // rbx
    unsigned long long v141;  // rdx
    void* v142;  // rax
    unsigned long long v143;  // rdx
    char *ptr;  // r15
    unsigned long long v144;  // rdx
    long long v145;  // r14
    unsigned long long v146;  // r13
    unsigned long i3;  // rsi
    unsigned long long v148;  // rcx
    char *v149;  // rbp
    char *ptr9;  // rdi
    unsigned long long v151;  // rcx
    char *ptr10;  // rdi
    char *cur;  // rdi
    unsigned int v50;  // ebx
    long long v154;  // r13
    char *v155;  // rcx
    char *v156;  // rax
    long long idx5;  // rsi
    long long v158;  // rbx
    unsigned long long v159;  // rcx
    struct_1 *ptr11;  // r14
    long long v161;  // r15
    unsigned long v162;  // r13
    long long i6;  // r15
    long long idx8;  // r13
    unsigned long v164;  // r13
    unsigned long v165;  // r13
    long long v166;  // r15
    char *v167;  // rax
    char *v168;  // rbx
    long long idx7;  // rdi
    long long v170;  // rsi
    unsigned long long v171;  // rcx
    void* v52;  // rsi
    char *node;  // rdi
    unsigned long v173;  // r13
    struct_2 *ptr12;  // r14
    long long v175;  // rbx
    unsigned long v176;  // r13
    long long i8;  // rbx
    unsigned long v178;  // r13
    long long v179;  // rbx
    long long v180;  // rdi
    char *i9;  // rsi
    unsigned long long v53;  // rcx
    void* v182;  // rax
    long long v183;  // rdi
    unsigned long long v185;  // rcx
    void* ptr13;  // rdi
    long long v55;  // rcx
    unsigned long v56;  // rax
    long long v39;  // r9
    void* v57;  // rsi
    unsigned long long v58;  // rdi
    unsigned long long v59;  // rax
    char *v60;  // rsi
    long long v61;  // rcx
    void* p;  // rdx
    void* addr;  // r11
    unsigned long long v64;  // rcx
    char *j;  // rsi
    void* ptr3;  // rdi
    long long v40;  // r14
    unsigned long long v67;  // rcx
    char *k;  // rsi
    void* ptr4;  // rdi
    unsigned long long ptr5;  // rdi
    unsigned long long ptr6;  // rsi
    unsigned long long v72;  // rdx
    unsigned int l;  // ecx
    unsigned long long v74;  // r9
    unsigned int m;  // ecx
    long long v41;  // rdx
    unsigned long long v76;  // rax
    unsigned long long index;  // r8
    unsigned long long pos;  // r10
    unsigned long v79;  // r9
    unsigned int v80;  // eax
    unsigned long long ptr21;  // r8
    unsigned long long ptr22;  // r9
    unsigned long long ptr23;  // r10
    unsigned long long ptr24;  // r11
    unsigned long long v85;  // rax
    long long ptr30;  // rbp
    unsigned long long v86;  // rax
    char *v43;  // rax
    void* ptr33;  // rsi
    void* ptr25;  // rdi
    unsigned int v89;  // eax
    unsigned int v90;  // eax
    void* ptr26;  // rsi
    void* ptr27;  // rbx
    unsigned long v93;  // r8
    char v94;  // r10b
    char v95;  // r9b
    char v96;  // cl
    void* v44;  // rax
    char v97;  // cl
    unsigned long v98;  // rax
    unsigned int v99;  // edi
    void* v100;  // rdx
    unsigned long v101;  // rcx
    unsigned long v102;  // rcx
    unsigned long v103;  // rcx
    void* v104;  // rcx
    unsigned long v105;  // rax
    unsigned long v106;  // rax
    char *v45;  // rax
    void* ptr28;  // rdi
    unsigned int v108;  // eax
    unsigned long v109;  // rbp
    long long v110;  // r13
    void* v111;  // rcx
    long long v112;  // r13
    long long v113;  // r13
    unsigned long ptr16;  // rdi
    long long v46;  // rdi
    void* v115;  // rax
    long long v116;  // rbx
    void* v117;  // rax
    unsigned long v118;  // rbp
    unsigned long v119;  // rbp
    char *v120;  // rdx
    unsigned long long v121;  // rcx
    char *ptr31;  // rsi
    unsigned long v123;  // cc_ndep
    unsigned long v124;  // 4105
    long long ptr29;  // [bp-0x118]
    long long v1;  // [bp-0x110]
    void* ptr19;  // [bp-0x108]
    void* ptr20;  // [bp-0x100]
    char *v4;  // [bp-0xf8], Other Possible Types: unsigned long long, long long
    void* ptr18;  // [bp-0xf0]
    void* v6;  // [bp-0xe8]
    char *idx4;  // [bp-0xe0], Other Possible Types: long long, unsigned long long
    long long ptr34;  // [bp-0xd8]
    long long v9;  // [bp-0xd0]
    char *v10;  // [bp-0xc8]
    unsigned long long off;  // [bp-0xc0]
    unsigned int v12;  // [bp-0xb8]
    unsigned int v13;  // [bp-0xb4]
    unsigned int v14;  // [bp-0xb0]
    unsigned int v15;  // [bp-0xac]
    char *v16;  // [bp-0xa8]
    char v17;  // [bp-0xa0], Other Possible Types: unsigned long
    char *v18;  // [bp-0x98], Other Possible Types: unsigned long long
    long long v19;  // [bp-0x90]
    char v20;  // [bp-0x88], Other Possible Types: unsigned long
    void* v21;  // [bp-0x80]
    unsigned long v22;  // [bp-0x78]
    unsigned int flag;  // [bp-0x70]
    unsigned long long v24;  // [bp-0x68]
    unsigned int v25;  // [bp-0x60]
    unsigned int v26;  // [bp-0x5c]
    unsigned long long v27;  // [bp-0x58]
    char *v28;  // [bp+0x8]
    char *v29;  // [bp+0x18]
    char *v30;  // [bp+0x28]
    char *ptr17;  // [bp+0x30]
    char *v32;  // [bp+0x38]
    char *v33;  // [bp+0x40]
    long long *ptr32;  // [bp+0x48]
    void* v35;  // [bp+0x50], Other Possible Types: char *, long long, unsigned int, unsigned long long
    long long v36;  // [bp+0x58]

    v29 = v37;
    v28 = v38;
    v40 = v39;
    ptr30 = v41;
    v43 = v37;
    if (v41)
    {
        v44 = &v38[4 * v41 + 4];
        do
        {
        } while (!*((int *)v44) && (ptr30 = (long long)(ptr30 - 1), v44 -= 4, ptr30));
        v43 = v29;
    }
    v45 = v43;
    v46 = v39;
    v19 = v39;
    if (v39)
    {
        v47 = &v45[4 * v39 + 4];
        do
        {
        } while (!*((int *)v47) && (v46 = (long long)(v46 - 1), v47 -= 4, v46));
        v19 = v46;
    }
    if (v41 > v39)
        v48 = v41;
    else
        v48 = v39;
    v1 = 0;
    ptr19 = NULL;
    v4 = v48;
    ptr20 = NULL;
    ptr18 = NULL;
    v6 = NULL;
    v22 = v48 * 8 + 6;
    ptr = NULL;
    v16 = NULL;
    v10 = NULL;
    flag = 0;
    v21 = v35;
    v50 = sub_100121888();
    idx8 = v46;
    v9 = v46;
    if (v50)
    {
        if (!(ptr30 && v46))
        {
            v61 = 15;
        }
        else if (!(v38 && v29 && v32 && v30))
        {
            v61 = 11;
        }
        else if (v38 != v32 && v29 != v32 && v38 != v30 && v29 != v30)
        {
            v52 = v21;
            v53 = v22 * 4;
            for (ptr13 = v52; v53; ptr13 += 1)
            {
                v53 -= 1;
                *((char *)ptr13) = 0;
            }
            v55 = v4;
            v56 = v55 * 4 + 8;
            v57 = v52 + v56;
            v58 = v55 * 8;
            v59 = v55 * 4;
            ptr18 = v57 + v56;
            v6 = ptr18 + v59;
            v60 = v6 + v59;
            ptr = v60;
            v16 = v60;
            v10 = &v60[v58];
            if (&v10[v58 + 8] != v21 + v22 * 4)
            {
                v61 = 4;
            }
            else
            {
                p = v52 + 4;
                addr = v57 + 4;
                ptr19 = p;
                v64 = ptr30 * 4;
                ptr20 = addr;
                j = v28;
                for (ptr3 = p; v64; j += 1)
                {
                    v64 -= 1;
                    *((char *)ptr3) = *(j);
                    ptr3 += 1;
                }
                v67 = v19 * 4;
                k = v29;
                for (ptr4 = addr; v67; k += 1)
                {
                    v67 -= 1;
                    *((char *)ptr4) = *(k);
                    ptr4 += 1;
                }
                *((unsigned int *)ptr18) = 1;
                goto LABEL_100127457;
            }
        }
        else
        {
            v61 = 13;
        }
        v50 = 0;
        sub_1001259d8(v61, &g_1000225e4, v36);
    }
    addr = ptr20;
    p = ptr19;
LABEL_100127457:
    ptr29 = 1;
    v24 = 0;
    if (v50)
    {
        while (true)
        {
            if (!ptr30 || !idx8)
            {
LABEL_100127c48:
                if (v50)
                {
                    v35 = !ptr30;
                    v146 = v35 * 8;
                    i3 = *((long long *)((char *)&ptr19 + v146));
                    v1 = *((long long *)((char *)&ptr34 + v146));
                    v148 = *((long long *)((char *)&ptr34 + v146)) * 4;
                    v149 = *((long long *)((char *)&v6 - v146));
                    for (ptr9 = v32; v148; i3 += 1)
                    {
                        v148 -= 1;
                        *(ptr9) = *((char *)i3);
                        ptr9 += 1;
                    }
                    v18 = v149;
                    if ((int)sub_100121280(v29, v149) < 0 || (int)sub_100121280(v149, *((long long *)((char *)&ptr18 + v146)), v40) < 0)
                    {
                        v50 = 0;
                        sub_1001259d8(4, &g_1000225e4, v36);
                    }
                    if (!v50)
                        break;
                    if (!v35)
                    {
                        v151 = v40 * 4;
                        for (ptr10 = v30; v151; ptr18 += 1)
                        {
                            v151 -= 1;
                            *(ptr10) = *((char *)ptr18);
                            ptr10 += 1;
                        }
                    }
                    else
                    {
                        sub_1001212c0(ptr18, v6, v30, v40);
                    }
                    cur = v33;
                    v154 = v41;
                    if (cur)
                    {
                        if (v154 > v40)
                        {
                            v155 = v28;
                            v156 = v149;
                            idx5 = v154;
                            v158 = v40;
                        }
                        else
                        {
                            v156 = v28;
                            v155 = v149;
                            v158 = v154;
                            idx5 = v40;
                        }
                        v4 = v155;
                        v35 = v156;
                        if (v28 != cur && v149 != cur)
                        {
                            if (!v158)
                            {
                                for (v159 = idx5 * 4; v159; cur += 1)
                                {
                                    v159 -= 1;
                                    *(cur) = 0;
                                }
                            }
                            else
                            {
                                *((unsigned int *)&cur[4 * idx5]) = sub_100120fb0();
                                if (v158 != 1)
                                {
                                    ptr11 = &cur[4 * idx5 + 4];
                                    v161 = v158 - 1;
                                    v162 = v35 + 4;
                                    do
                                    {
                                        i6 = v161;
                                        v164 = v162;
                                        v165 = v164 + 4;
                                        *((unsigned int *)&ptr11->padding_0[0]) = sub_100120e04(v4, *((int *)v164), cur - v35 + v164, idx5, v36);
                                        ptr11 = &ptr11->field_4;
                                        v166 = i6 - 1;
                                        v162 = v165;
                                        v161 = v166;
                                    } while (i6 != 1);
                                    v40 = v39;
                                    ptr = v16;
                                    v154 = v41;
                                }
                            }
                            v50 = 1;
                            goto LABEL_100127e23;
                        }
                        else
                        {
                            v50 = 0;
                        }
                    }
                    if (!v50)
                        break;
LABEL_100127e23:
                    if (!ptr17)
                        break;
                    sub_1001212c0(v149, v30, v149, v40);
                    if (v154 > v40)
                    {
                        v167 = v28;
                        v168 = v149;
                        idx7 = v154;
                        v170 = v40;
                    }
                    else
                    {
                        v168 = v28;
                        v167 = v149;
                        v170 = v154;
                        idx7 = v40;
                    }
                    v35 = v167;
                    if (v28 != ptr && v149 != ptr)
                    {
                        if (!v170)
                        {
                            v171 = idx7 * 4;
                            for (node = ptr; v171; node += 1)
                            {
                                v171 -= 1;
                                *(node) = 0;
                            }
                        }
                        else
                        {
                            *((unsigned int *)&ptr[4 * idx7]) = sub_100120fb0(v167, *((int *)&v168), ptr, idx7, v36);
                            if (v170 != 1)
                            {
                                v173 = v168 + 4;
                                ptr12 = &ptr[4 * idx7 + 4];
                                v175 = v170 - 1;
                                do
                                {
                                    v176 = v173;
                                    i8 = v175;
                                    v178 = v176 + 4;
                                    *((unsigned int *)&ptr12->padding_0[0]) = sub_100120e04(v35, *((int *)v176), v176 + ptr - v168, idx7, v36);
                                    ptr12 = &ptr12->field_4;
                                    v179 = i8 - 1;
                                    v175 = v179;
                                    v173 = v178;
                                } while (i8 != 1);
                                v149 = v18;
                                v40 = v39;
                                v154 = v41;
                            }
                        }
                        v145 = v1;
                        if ((int)sub_10012137c(ptr, v154 + v40, v32, v145, ptr, 0, v36) && !((v180 = v19, i9 = v10, !(int)sub_100126af0(ptr, v180 + v154, v29, v180, 0, i9, v149, v36))))
                        {
                            v50 = 1;
                            if (v180)
                            {
                                v182 = &v149[4 * v180 + 4];
                                do
                                {
                                } while (!*((int *)v182) && (v182 -= 4, v183 = (long long)(v180 - 1), v180 = (long long)(v180 - 1), v180 != 1));
                                if (v180)
                                {
                                    v50 = 0;
                                    sub_1001259d8(4, &g_1000225e4, v36);
                                    goto LABEL_100127ff5;
                                }
                            }
                            for (v185 = v154 * 4; v185; i9 += 1)
                            {
                                v185 -= 1;
                                *(ptr17) = *(i9);
                                ptr17 += 1;
                            }
                            goto LABEL_100127ff5;
                        }
                    }
                    else
                    {
                        v145 = v1;
                    }
                    v50 = 0;
                    goto LABEL_100127ff5;
                }
                break;
            }
            ptr5 = *((int *)(-4 + (char *)p + 4 * ptr30));
            ptr6 = *((int *)(-4 + (char *)addr + 4 * idx8));
            v72 = 32;
            for (l = (unsigned int)ptr5 | 1; l < 0x8000000; l *= 32)
            {
                v72 -= 5;
            }
            v74 = 32;
            for (m = (unsigned int)ptr6 | 1; m < 0x8000000; m *= 32)
            {
                v74 -= 5;
            }
            v27 = (ptr30 - 1) * 32 + v72 - ((unsigned int)(2397340 >> ((char)(l >> 28) & 63) >> ((char)(l >> 28) * 2 & 63)) & 7);
            v76 = (idx8 - 1) * 32 - ((unsigned int)(2397340 >> ((char)(m >> 28) & 63) >> ((char)(m >> 28) * 2 & 63)) & 7) + v74;
            v4 = v76;
            if (v27 > v76)
                v76 = v27;
            v18 = v76;
            v35 = (ptr30 > idx8 ? (int)ptr30 : (int)idx8);
            index = sub_1001211f8() > 0;
            off = index;
            pos = 1 - index;
            v24 += 1;
            idx4 = pos;
            if (v24 > (v41 + v40 + 1) * 32)
            {
                v50 = 0;
                sub_1001259d8(14, &g_1000225e4, v36);
                index = off;
                pos = idx4;
            }
            if (!v50)
                break;
            v79 = v35;
            if ((unsigned int)v79 == 1)
            {
                if ((unsigned int)ptr5 > 4294967295 - (unsigned int)ptr6)
                {
                    if (!index)
                        ptr5 -= ptr6;
                    else
                        ptr6 -= ptr5;
                    v80 = sub_100121120(ptr18, v6, (&ptr18)[index], ptr29);
                    if (v80)
                    {
                        if (ptr29 >= v40)
                        {
                            v50 = 0;
                            sub_1001259d8(4, &g_1000225e4, v36);
                        }
                        else
                        {
                            *((unsigned int *)((char *)(&ptr18)[index] + 4 * ptr29)) = v80;
                            ptr29 += 1;
                        }
                    }
                }
                ptr21 = 1;
                ptr22 = 0;
                ptr23 = 0;
                if (v50)
                {
                    for (ptr24 = 1; (unsigned int)ptr6; ptr24 += ptr22 * v86)
                    {
                        if ((unsigned int)ptr5 >= (unsigned int)ptr6)
                        {
                            if ((unsigned int)ptr5 >> 2 >= (unsigned int)ptr6)
                            {
                                v85 = (ptr5 & 4294967295) / (ptr6 & 4294967295) & 4294967295;
                                ptr5 -= ptr6 * (v85 & 4294967295);
                                ptr21 += ptr23 * (v85 & 4294967295);
                                ptr22 += ptr24 * v85;
                            }
                            else
                            {
                                do
                                {
                                    ptr5 -= ptr6;
                                    ptr21 += ptr23;
                                    ptr22 += ptr24;
                                } while ((unsigned int)ptr5 >= (unsigned int)ptr6);
                            }
                        }
                        if (!(unsigned int)ptr5)
                            break;
                        if ((unsigned int)ptr6 >> 2 >= (unsigned int)ptr5)
                        {
                            v86 = (ptr6 & 4294967295) / (ptr5 & 4294967295) & 4294967295;
                            ptr6 -= ptr5 * (v86 & 4294967295);
                            ptr23 += ptr21 * (v86 & 4294967295);
                        }
                        else
                        {
                            do
                            {
                                ptr6 -= ptr5;
                                ptr23 += ptr21;
                                ptr24 += ptr22;
                            } while ((unsigned int)ptr6 >= (unsigned int)ptr5);
                        }
                    }
                }
                *((unsigned int *)ptr19) = ptr5;
                *((unsigned int *)ptr20) = ptr6;
                ptr30 = (unsigned int)ptr5;
                idx8 = (unsigned int)ptr6;
                v12 = ptr21;
                ptr34 = ptr30;
                v13 = ptr22;
                v14 = ptr23;
                v9 = idx8;
                v15 = ptr24;
                if (v50 && !((ptr33 = v6, ptr25 = ptr18, !(unsigned int)(unsigned long long)sub_100128ad8(&v12, ptr25, ptr33, ptr29, &v17, v36))))
                {
                    v89 = v17;
                    v50 = 1;
                    if (!v89 && (addr = ptr20, p = ptr19, *((unsigned int *)((void*)&v17 + 4)) == v89))
                        continue;
                    if (ptr29 >= v40)
                        goto LABEL_100127c12;
                    *((unsigned int *)((char *)ptr25 + 4 * ptr29)) = v89;
                    v90 = *((unsigned int *)((void*)&v17 + 4));
                    goto LABEL_10012778d;
                }
            }
            if (v27 <= v4 + 16 && v4 <= v27 + 16)
            {
                ptr26 = ptr19;
                ptr27 = ptr20;
                v93 = v79;
                *((unsigned int *)((char *)ptr27 + 4 * idx8)) = 0;
                *((unsigned int *)((char *)ptr26 + 4 * ptr30)) = 0;
                v94 = (unsigned int)v79 * 32 - v18;
                v95 = 31 - v94;
                v96 = v95;
                idx4 = *((int *)(-12 + (char *)ptr26 + 4 * v93)) >> 1 >> (v95 & 63) | *((int *)(-8 + (char *)ptr26 + 4 * v93)) << (v94 & 31);
                *((int *)((char *)&idx4 + 4)) = *((int *)(-4 + (char *)ptr26 + 4 * v93)) << (v94 & 31) | *((int *)(-8 + (char *)ptr26 + 4 * v93)) >> 1 >> (v96 & 31);
                v97 = v94;
                v35 = *((int *)(-12 + (char *)ptr27 + 4 * v93)) >> 1 >> (v96 & 63) | *((int *)(-8 + (char *)ptr27 + 4 * v93)) << (v97 & 31);
                *((int *)((char *)&v35 + 4)) = *((int *)(-4 + (char *)ptr27 + 4 * v93)) << (v97 & 31) | *((int *)(-8 + (char *)ptr27 + 4 * v93)) >> 1 >> (v95 & 31);
                if ((int)sub_100126df8(idx4, v35, &v12, v36))
                {
                    if (!v14 && !v13)
                        (&v13)[off] = 1;
                    if (ptr30 > idx8)
                        idx8 = ptr30;
                    if (sub_100128bcc())
                    {
                        if (!v25 && !v26)
                        {
                            v98 = (int)idx8;
                            v99 = idx8;
                            if ((int)idx8)
                            {
                                v100 = ptr19 + v98 * 4 - 4;
                                v101 = v98;
                                do
                                {
                                    v102 = v101;
                                } while (!*((int *)v100) && (idx8 = (long long)(unsigned long long)((int)idx8 - 1), v100 -= 4, v103 = (unsigned long)(v102 - 1), v101 = (unsigned long)(v102 - 1), v102 != 1));
                            }
                            if (v98)
                            {
                                v104 = ptr27 + v98 * 4 - 4;
                                do
                                {
                                    v105 = v98;
                                } while (!*((int *)v104) && (v99 -= 1, v104 -= 4, v106 = (unsigned long)(v105 - 1), v98 = (unsigned long)(v105 - 1), v105 != 1));
                            }
                            ptr33 = v6;
                            ptr30 = (int)idx8;
                            idx8 = v99;
                            ptr28 = ptr18;
                            ptr34 = ptr30;
                            v9 = idx8;
                            if (sub_100128ad8(&v12, ptr28, ptr33, ptr29, &v20, v36))
                            {
                                v108 = v20;
                                v50 = 1;
                                if (!v108 && (addr = ptr20, p = ptr19, *((unsigned int *)((void*)&v20 + 4)) == v108))
                                    continue;
                                if (ptr29 < v40)
                                {
                                    *((unsigned int *)((char *)ptr28 + 4 * ptr29)) = v108;
                                    v90 = *((unsigned int *)((void*)&v20 + 4));
                                }
                                else
                                {
LABEL_100127c12:
                                    v50 = 0;
                                    sub_1001259d8(4, &g_1000225e4, v36);
                                    goto LABEL_100127c3e;
                                }
LABEL_10012778d:
                                *((unsigned int *)((char *)ptr33 + 4 * ptr29)) = v90;
                                ptr29 += 1;
                                goto LABEL_10012779a;
                            }
                        }
                        else
                        {
                            sub_1001259d8(4, &g_1000225e4, v36);
                        }
                    }
                }
            }
            v109 = (&ptr34)[pos];
            v110 = ptr29;
            v140 = (&ptr34)[index] - v109 + 1;
            v4 = v140;
            if (v110)
            {
                v111 = (&ptr18)[pos] + v110 * 4 - 4;
                do
                {
                } while (!*((int *)v111) && (v111 -= 4, v112 = (long long)(v110 - 1), v110 = (long long)(v110 - 1), v110 != 1));
            }
            v113 = v110;
            ptr16 = (&ptr19)[index];
            if ((int)sub_100126af0(ptr16))
            {
                if (v140)
                {
                    v115 = &v10[4 * v140 + 4];
                    do
                    {
                    } while (!*((int *)v115) && (v115 -= 4, v116 = (long long)(v140 - 1), v140 = (long long)(v140 - 1), v140 != 1));
                    v4 = v140;
                }
                if (v109)
                {
                    v117 = &ptr[4 * v109 + 4];
                    do
                    {
                    } while (!*((int *)v117) && (v117 -= 4, v118 = (unsigned long)(v109 - 1), v109 = (unsigned long)(v109 - 1), v109 != 1));
                }
                v119 = v109;
                v120 = (&ptr18)[idx4];
                v121 = v119 * 4;
                ptr31 = ptr;
                for ((&ptr34)[off] = v119; v121; ptr31 += 1)
                {
                    v121 -= 1;
                    *((char *)ptr16) = *(ptr31);
                    ptr16 += 1;
                }
                v124 = _ccall(6, 8, v140, v113, v123);
                if (!((char)v124))
                {
                    v125 = v10;
                    v126 = v120;
                    idx6 = v140;
                    v128 = v113;
                    v129 = v125;
                }
                else
                {
                    v126 = v125;
                    v128 = v140;
                    idx6 = v113;
                    v129 = v120;
                }
                idx4 = v129;
                v35 = v126;
                if (v125 == ptr || v120 == ptr)
                    goto LABEL_100127c3c;
                if (!v128)
                {
                    v131 = idx6 * 4;
                    for (iter = ptr; v131; iter += 1)
                    {
                        v131 -= 1;
                        *(iter) = 0;
                    }
                }
                else
                {
                    *((unsigned int *)&ptr[4 * idx6]) = sub_100120fb0();
                    if (v128 != 1)
                    {
                        v133 = v128 - 1;
                        v134 = v35 + 4;
                        ptr7 = &ptr[4 * idx6 + 4];
                        do
                        {
                            v136 = v134;
                            i2 = v133;
                            v138 = v136 + 4;
                            *((unsigned int *)&ptr7->padding_0[0]) = sub_100120e04(idx4, *((int *)v136), ptr - v35 + v136, idx6, v36);
                            ptr7 = &ptr7->field_4;
                            v139 = i2 - 1;
                            v133 = v139;
                            v134 = v138;
                        } while (i2 != 1);
                        v40 = v39;
                        ptr = v16;
                        v140 = v4;
                    }
                }
                v141 = v140 + v113;
                if (v141)
                {
                    v142 = &ptr[4 * v141 + 4];
                    do
                    {
                        v143 = v141;
                    } while (!*((int *)v142) && (v142 -= 4, v144 = v143 - 1, v141 = v143 - 1, v143 != 1));
                }
                ptr30 = ptr34;
                if ((int)sub_100121458(ptr))
                {
                    idx8 = v9;
                    v50 = 1;
                }
                else
                {
                    v50 = 0;
                    goto LABEL_100127c48;
                }
LABEL_10012779a:
                addr = ptr20;
                p = ptr19;
            }
            else
            {
LABEL_100127c3c:
                v50 = 0;
LABEL_100127c3e:
                v145 = 0;
                goto LABEL_100127ff5;
            }
        }
        goto LABEL_100127ff5;
    }
    v145 = v1;
LABEL_100127ff5:
    if (flag)
        sub_10012185c(v21, 0, v36);
    if (v50)
        *(ptr32) = v145;
    return;
}
