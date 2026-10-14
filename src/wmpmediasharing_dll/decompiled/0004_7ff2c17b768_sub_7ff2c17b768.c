/* sub_7ff2c17b768 @ 0x7ff2c17b768
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c17b768  (3714 bytes, 223 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 714d193de7f062968c11a8a946f1fa066d03e1fc5a7bd90dbabc372605416413
 *   Evidence: analysis/report/rea-evidence/wmpmediasharing_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
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

extern long long g_7ff2c1616ca;

unsigned int sub_7ff2c17b768(char *a0, long long a1, char *a2, long long a3, char *a4, char *ptr7, char *a6, char *a7, long long *ptr30, void* a9, long long a10)
{
    long long v29;  // r14
    long long ptr31;  // rbp
    long long idx8;  // r13
    long long idx7;  // rdi
    long long v114;  // rbp
    char *v115;  // rcx
    unsigned long long v117;  // rcx
    char *iter;  // rdi
    long long v119;  // rbx
    unsigned long v120;  // rsi
    struct_0 *ptr8;  // r15
    unsigned long v122;  // rsi
    void* v38;  // rsi
    long long i2;  // rbx
    unsigned long v124;  // rsi
    long long v125;  // rbx
    long long v126;  // rbx
    unsigned long long v127;  // rdx
    void* v128;  // rax
    unsigned long long v129;  // rdx
    unsigned long long v130;  // rdx
    long long v131;  // r14
    unsigned long long v39;  // rcx
    unsigned long long v132;  // r13
    unsigned long i3;  // rsi
    unsigned long long v134;  // rcx
    char *v135;  // rbp
    char *ptr9;  // rdi
    unsigned long long v137;  // rcx
    char *ptr10;  // rdi
    char *cur;  // rdi
    long long v140;  // r13
    char *v141;  // rcx
    void* ptr11;  // rdi
    char *v142;  // rax
    long long idx5;  // rsi
    long long v144;  // rbx
    unsigned long long v145;  // rcx
    struct_1 *ptr12;  // r14
    long long v147;  // r15
    unsigned long v148;  // r13
    long long i6;  // r15
    unsigned long v150;  // r13
    unsigned long v151;  // r13
    long long v41;  // rcx
    long long v152;  // r15
    unsigned int v153;  // ebx
    char *ptr;  // r15
    char *v155;  // rax
    char *v156;  // rbx
    long long idx6;  // rdi
    long long v158;  // rsi
    unsigned long long v159;  // rcx
    char *node;  // rdi
    unsigned long v161;  // r13
    unsigned long v42;  // rax
    struct_2 *ptr14;  // r14
    long long v163;  // rbx
    unsigned long v164;  // r13
    long long i8;  // rbx
    unsigned long v166;  // r13
    long long v167;  // rbx
    long long v168;  // rdi
    char *i9;  // rsi
    void* v170;  // rax
    long long v171;  // rdi
    void* v43;  // rsi
    unsigned long long v173;  // rcx
    unsigned long long v44;  // rdi
    unsigned long long v45;  // rax
    char *v46;  // rsi
    char *v31;  // rax
    long long v47;  // rcx
    void* p;  // rdx
    void* addr;  // r11
    unsigned long long v50;  // rcx
    char *j;  // rsi
    void* ptr3;  // rdi
    unsigned long long v53;  // rcx
    char *k;  // rsi
    void* ptr4;  // rdi
    void* v32;  // rax
    unsigned long long ptr5;  // rdi
    unsigned long long ptr6;  // rsi
    unsigned long long v58;  // rdx
    unsigned int l;  // ecx
    unsigned long long v60;  // r9
    unsigned int m;  // ecx
    unsigned long long v62;  // rax
    unsigned long long index;  // r8
    unsigned long long pos;  // r10
    unsigned long v65;  // r9
    char *v33;  // rax
    unsigned int v66;  // eax
    unsigned long long ptr21;  // r8
    unsigned long long ptr22;  // r9
    unsigned long long ptr23;  // r10
    unsigned long long ptr24;  // r11
    unsigned long long v71;  // rax
    unsigned long long v72;  // rax
    long long v34;  // rdi
    void* ptr33;  // rsi
    void* ptr25;  // rdi
    void* v35;  // rax
    unsigned int v75;  // eax
    unsigned int v76;  // eax
    void* ptr26;  // rsi
    void* ptr27;  // rbx
    unsigned long v79;  // r8
    char v80;  // r10b
    char v81;  // r9b
    char v82;  // cl
    char v83;  // cl
    unsigned long v84;  // rax
    long long v36;  // rax
    unsigned int v85;  // edi
    void* v86;  // rdx
    unsigned long v87;  // rcx
    unsigned long v88;  // rcx
    unsigned long v89;  // rcx
    void* v90;  // rcx
    unsigned long v91;  // rax
    unsigned long v92;  // rax
    void* ptr28;  // rdi
    unsigned int v94;  // eax
    unsigned long v95;  // rbp
    long long v96;  // r13
    void* v97;  // rcx
    long long v98;  // r13
    long long v99;  // r13
    unsigned long ptr17;  // rdi
    void* v101;  // rax
    long long v102;  // rbx
    void* v103;  // rax
    unsigned long v104;  // rbp
    unsigned long v105;  // rbp
    char *v106;  // rdx
    unsigned long long v107;  // rcx
    char *ptr32;  // rsi
    unsigned long v109;  // cc_ndep
    unsigned long v110;  // 4105
    char *v111;  // rcx
    char *v112;  // rax
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
    unsigned long v21;  // [bp-0x78]
    unsigned int flag;  // [bp-0x70]
    unsigned long long v23;  // [bp-0x68]
    unsigned int v24;  // [bp-0x60]
    unsigned int v25;  // [bp-0x5c]
    unsigned long long v26;  // [bp-0x58]
    char *v27;  // [bp+0x8]
    char *v28;  // [bp+0x18]

    v28 = a2;
    v27 = a0;
    v29 = a3;
    ptr31 = a1;
    v31 = a2;
    if (a1)
    {
        v32 = &a0[4 * a1 + 4];
        do
        {
        } while (!*((int *)v32) && (ptr31 = (long long)(ptr31 - 1), v32 -= 4, ptr31));
        v31 = v28;
    }
    v33 = v31;
    v34 = a3;
    v19 = a3;
    if (a3)
    {
        v35 = &v33[4 * a3 + 4];
        do
        {
        } while (!*((int *)v35) && (v34 = (long long)(v34 - 1), v35 -= 4, v34));
        v19 = v34;
    }
    if (a1 > a3)
        v36 = a1;
    else
        v36 = a3;
    v1 = 0;
    ptr19 = NULL;
    v4 = v36;
    ptr20 = NULL;
    ptr18 = NULL;
    v6 = NULL;
    v21 = v36 * 8 + 6;
    ptr = NULL;
    v16 = NULL;
    v10 = NULL;
    flag = 0;
    v153 = sub_7ff2c17a49c();
    idx8 = v34;
    v9 = v34;
    if (v153)
    {
        if (!(ptr31 && v34))
        {
            v47 = 15;
        }
        else if (!(a0 && v28 && a6 && a4))
        {
            v47 = 11;
        }
        else if (a0 != a6 && v28 != a6 && a0 != a4 && v28 != a4)
        {
            v38 = a9;
            v39 = v21 * 4;
            for (ptr11 = v38; v39; ptr11 += 1)
            {
                v39 -= 1;
                *((char *)ptr11) = 0;
            }
            v41 = v4;
            v42 = v41 * 4 + 8;
            v43 = v38 + v42;
            v44 = v41 * 8;
            v45 = v41 * 4;
            ptr18 = v43 + v42;
            v6 = ptr18 + v45;
            v46 = v6 + v45;
            ptr = v46;
            v16 = v46;
            v10 = &v46[v44];
            if (&v10[v44 + 8] != a9 + v21 * 4)
            {
                v47 = 4;
            }
            else
            {
                p = v38 + 4;
                addr = v43 + 4;
                ptr19 = p;
                v50 = ptr31 * 4;
                ptr20 = addr;
                j = v27;
                for (ptr3 = p; v50; j += 1)
                {
                    v50 -= 1;
                    *((char *)ptr3) = *(j);
                    ptr3 += 1;
                }
                v53 = v19 * 4;
                k = v28;
                for (ptr4 = addr; v53; k += 1)
                {
                    v53 -= 1;
                    *((char *)ptr4) = *(k);
                    ptr4 += 1;
                }
                *((unsigned int *)ptr18) = 1;
                goto LABEL_7ff2c17ba0b;
            }
        }
        else
        {
            v47 = 13;
        }
        v153 = 0;
        sub_7ff2c17a4fc(v47, &g_7ff2c1616ca, a10);
    }
    addr = ptr20;
    p = ptr19;
LABEL_7ff2c17ba0b:
    ptr29 = 1;
    v23 = 0;
    if (v153)
    {
        while (true)
        {
            if (!ptr31 || !idx8)
            {
LABEL_7ff2c17c1fc:
                if (v153)
                {
                    a9 = !ptr31;
                    v132 = a9 * 8;
                    i3 = *((long long *)((char *)&ptr19 + v132));
                    v1 = *((long long *)((char *)&ptr34 + v132));
                    v134 = *((long long *)((char *)&ptr34 + v132)) * 4;
                    v135 = *((long long *)((char *)&v6 - v132));
                    for (ptr9 = a6; v134; i3 += 1)
                    {
                        v134 -= 1;
                        *(ptr9) = *((char *)i3);
                        ptr9 += 1;
                    }
                    v18 = v135;
                    if ((int)sub_7ff2c179e94(v28, v135) < 0 || (int)sub_7ff2c179e94(v135, *((long long *)((char *)&ptr18 + v132)), v29) < 0)
                    {
                        v153 = 0;
                        sub_7ff2c17a4fc(4, &g_7ff2c1616ca, a10);
                    }
                    if (!v153)
                        break;
                    if (!a9)
                    {
                        v137 = v29 * 4;
                        for (ptr10 = a4; v137; ptr18 += 1)
                        {
                            v137 -= 1;
                            *(ptr10) = *((char *)ptr18);
                            ptr10 += 1;
                        }
                    }
                    else
                    {
                        sub_7ff2c179ed4(ptr18, v6, a4, v29);
                    }
                    cur = a7;
                    v140 = a1;
                    if (cur)
                    {
                        if (v140 > v29)
                        {
                            v141 = v27;
                            v142 = v135;
                            idx5 = v140;
                            v144 = v29;
                        }
                        else
                        {
                            v142 = v27;
                            v141 = v135;
                            v144 = v140;
                            idx5 = v29;
                        }
                        v4 = v141;
                        a9 = v142;
                        if (v27 != cur && v135 != cur)
                        {
                            if (!v144)
                            {
                                for (v145 = idx5 * 4; v145; cur += 1)
                                {
                                    v145 -= 1;
                                    *(cur) = 0;
                                }
                            }
                            else
                            {
                                *((unsigned int *)&cur[4 * idx5]) = sub_7ff2c179cfc();
                                if (v144 != 1)
                                {
                                    ptr12 = &cur[4 * idx5 + 4];
                                    v147 = v144 - 1;
                                    v148 = a9 + 4;
                                    do
                                    {
                                        i6 = v147;
                                        v150 = v148;
                                        v151 = v150 + 4;
                                        *((unsigned int *)&ptr12->padding_0[0]) = sub_7ff2c179b50(v4, *((int *)v150), cur - a9 + v150, idx5, a10);
                                        ptr12 = &ptr12->field_4;
                                        v152 = i6 - 1;
                                        v148 = v151;
                                        v147 = v152;
                                    } while (i6 != 1);
                                    v29 = a3;
                                    ptr = v16;
                                    v140 = a1;
                                }
                            }
                            v153 = 1;
                            goto LABEL_7ff2c17c3d7;
                        }
                        else
                        {
                            v153 = 0;
                        }
                    }
                    if (!v153)
                        break;
LABEL_7ff2c17c3d7:
                    if (!ptr7)
                        break;
                    sub_7ff2c179ed4(v135, a4, v135, v29);
                    if (v140 > v29)
                    {
                        v155 = v27;
                        v156 = v135;
                        idx6 = v140;
                        v158 = v29;
                    }
                    else
                    {
                        v156 = v27;
                        v155 = v135;
                        v158 = v140;
                        idx6 = v29;
                    }
                    a9 = v155;
                    if (v27 != ptr && v135 != ptr)
                    {
                        if (!v158)
                        {
                            v159 = idx6 * 4;
                            for (node = ptr; v159; node += 1)
                            {
                                v159 -= 1;
                                *(node) = 0;
                            }
                        }
                        else
                        {
                            *((unsigned int *)&ptr[4 * idx6]) = sub_7ff2c179cfc(v155, *((int *)&v156), ptr, idx6, a10);
                            if (v158 != 1)
                            {
                                v161 = v156 + 4;
                                ptr14 = &ptr[4 * idx6 + 4];
                                v163 = v158 - 1;
                                do
                                {
                                    v164 = v161;
                                    i8 = v163;
                                    v166 = v164 + 4;
                                    *((unsigned int *)&ptr14->padding_0[0]) = sub_7ff2c179b50(a9, *((int *)v164), v164 + ptr - v156, idx6, a10);
                                    ptr14 = &ptr14->field_4;
                                    v167 = i8 - 1;
                                    v163 = v167;
                                    v161 = v166;
                                } while (i8 != 1);
                                v135 = v18;
                                v29 = a3;
                                v140 = a1;
                            }
                        }
                        v131 = v1;
                        if ((int)sub_7ff2c179f90(ptr, v140 + v29, a6, v131, ptr, 0, a10) && !((v168 = v19, i9 = v10, !(int)sub_7ff2c17b0a4(ptr, v168 + v140, v28, v168, 0, i9, v135, a10))))
                        {
                            v153 = 1;
                            if (v168)
                            {
                                v170 = &v135[4 * v168 + 4];
                                do
                                {
                                } while (!*((int *)v170) && (v170 -= 4, v171 = (long long)(v168 - 1), v168 = (long long)(v168 - 1), v168 != 1));
                                if (v168)
                                {
                                    v153 = 0;
                                    sub_7ff2c17a4fc(4, &g_7ff2c1616ca, a10);
                                    goto LABEL_7ff2c17c5a9;
                                }
                            }
                            for (v173 = v140 * 4; v173; i9 += 1)
                            {
                                v173 -= 1;
                                *(ptr7) = *(i9);
                                ptr7 += 1;
                            }
                            goto LABEL_7ff2c17c5a9;
                        }
                    }
                    else
                    {
                        v131 = v1;
                    }
                    v153 = 0;
                    goto LABEL_7ff2c17c5a9;
                }
                break;
            }
            ptr5 = *((int *)(-4 + (char *)p + 4 * ptr31));
            ptr6 = *((int *)(-4 + (char *)addr + 4 * idx8));
            v58 = 32;
            for (l = (unsigned int)ptr5 | 1; l < 0x8000000; l *= 32)
            {
                v58 -= 5;
            }
            v60 = 32;
            for (m = (unsigned int)ptr6 | 1; m < 0x8000000; m *= 32)
            {
                v60 -= 5;
            }
            v26 = (ptr31 - 1) * 32 + v58 - ((unsigned int)(2397340 >> ((char)(l >> 28) & 63) >> ((char)(l >> 28) * 2 & 63)) & 7);
            v62 = (idx8 - 1) * 32 - ((unsigned int)(2397340 >> ((char)(m >> 28) & 63) >> ((char)(m >> 28) * 2 & 63)) & 7) + v60;
            v4 = v62;
            if (v26 > v62)
                v62 = v26;
            v18 = v62;
            a9 = (ptr31 > idx8 ? (int)ptr31 : (int)idx8);
            index = sub_7ff2c179e0c() > 0;
            off = index;
            pos = 1 - index;
            v23 += 1;
            idx4 = pos;
            if (v23 > (a1 + v29 + 1) * 32)
            {
                v153 = 0;
                sub_7ff2c17a4fc(14, &g_7ff2c1616ca, a10);
                index = off;
                pos = idx4;
            }
            if (!v153)
                break;
            v65 = a9;
            if ((unsigned int)v65 == 1)
            {
                if ((unsigned int)ptr5 > 4294967295 - (unsigned int)ptr6)
                {
                    if (!index)
                        ptr5 -= ptr6;
                    else
                        ptr6 -= ptr5;
                    v66 = sub_7ff2c179d34(ptr18, v6, (&ptr18)[index], ptr29);
                    if (v66)
                    {
                        if (ptr29 >= v29)
                        {
                            v153 = 0;
                            sub_7ff2c17a4fc(4, &g_7ff2c1616ca, a10);
                        }
                        else
                        {
                            *((unsigned int *)((char *)(&ptr18)[index] + 4 * ptr29)) = v66;
                            ptr29 += 1;
                        }
                    }
                }
                ptr21 = 1;
                ptr22 = 0;
                ptr23 = 0;
                if (v153)
                {
                    for (ptr24 = 1; (unsigned int)ptr6; ptr24 += ptr22 * v72)
                    {
                        if ((unsigned int)ptr5 >= (unsigned int)ptr6)
                        {
                            if ((unsigned int)ptr5 >> 2 >= (unsigned int)ptr6)
                            {
                                v71 = (ptr5 & 4294967295) / (ptr6 & 4294967295) & 4294967295;
                                ptr5 -= ptr6 * (v71 & 4294967295);
                                ptr21 += ptr23 * (v71 & 4294967295);
                                ptr22 += ptr24 * v71;
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
                            v72 = (ptr6 & 4294967295) / (ptr5 & 4294967295) & 4294967295;
                            ptr6 -= ptr5 * (v72 & 4294967295);
                            ptr23 += ptr21 * (v72 & 4294967295);
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
                ptr31 = (unsigned int)ptr5;
                idx8 = (unsigned int)ptr6;
                v12 = ptr21;
                ptr34 = ptr31;
                v13 = ptr22;
                v14 = ptr23;
                v9 = idx8;
                v15 = ptr24;
                if (v153 && !((ptr33 = v6, ptr25 = ptr18, !(unsigned int)(unsigned long long)sub_7ff2c17c74c(&v12, ptr25, ptr33, ptr29, &v17, a10))))
                {
                    v75 = v17;
                    v153 = 1;
                    if (!v75 && (addr = ptr20, p = ptr19, *((unsigned int *)((void*)&v17 + 4)) == v75))
                        continue;
                    if (ptr29 >= v29)
                        goto LABEL_7ff2c17c1c6;
                    *((unsigned int *)((char *)ptr25 + 4 * ptr29)) = v75;
                    v76 = *((unsigned int *)((void*)&v17 + 4));
                    goto LABEL_7ff2c17bd41;
                }
            }
            if (v26 <= v4 + 16 && v4 <= v26 + 16)
            {
                ptr26 = ptr19;
                ptr27 = ptr20;
                v79 = v65;
                *((unsigned int *)((char *)ptr27 + 4 * idx8)) = 0;
                *((unsigned int *)((char *)ptr26 + 4 * ptr31)) = 0;
                v80 = (unsigned int)v65 * 32 - v18;
                v81 = 31 - v80;
                v82 = v81;
                idx4 = *((int *)(-12 + (char *)ptr26 + 4 * v79)) >> 1 >> (v81 & 63) | *((int *)(-8 + (char *)ptr26 + 4 * v79)) << (v80 & 31);
                *((int *)((char *)&idx4 + 4)) = *((int *)(-4 + (char *)ptr26 + 4 * v79)) << (v80 & 31) | *((int *)(-8 + (char *)ptr26 + 4 * v79)) >> 1 >> (v82 & 31);
                v83 = v80;
                a9 = *((int *)(-12 + (char *)ptr27 + 4 * v79)) >> 1 >> (v82 & 63) | *((int *)(-8 + (char *)ptr27 + 4 * v79)) << (v83 & 31);
                *((int *)((char *)&a9 + 4)) = *((int *)(-4 + (char *)ptr27 + 4 * v79)) << (v83 & 31) | *((int *)(-8 + (char *)ptr27 + 4 * v79)) >> 1 >> (v81 & 31);
                if ((int)sub_7ff2c17b3ac(idx4, a9, &v12, a10))
                {
                    if (!v14 && !v13)
                        (&v13)[off] = 1;
                    if (ptr31 > idx8)
                        idx8 = ptr31;
                    if (sub_7ff2c17c840())
                    {
                        if (!v24 && !v25)
                        {
                            v84 = (int)idx8;
                            v85 = idx8;
                            if ((int)idx8)
                            {
                                v86 = ptr19 + v84 * 4 - 4;
                                v87 = v84;
                                do
                                {
                                    v88 = v87;
                                } while (!*((int *)v86) && (idx8 = (long long)(unsigned long long)((int)idx8 - 1), v86 -= 4, v89 = (unsigned long)(v88 - 1), v87 = (unsigned long)(v88 - 1), v88 != 1));
                            }
                            if (v84)
                            {
                                v90 = ptr27 + v84 * 4 - 4;
                                do
                                {
                                    v91 = v84;
                                } while (!*((int *)v90) && (v85 -= 1, v90 -= 4, v92 = (unsigned long)(v91 - 1), v84 = (unsigned long)(v91 - 1), v91 != 1));
                            }
                            ptr33 = v6;
                            ptr31 = (int)idx8;
                            idx8 = v85;
                            ptr28 = ptr18;
                            ptr34 = ptr31;
                            v9 = idx8;
                            if (sub_7ff2c17c74c(&v12, ptr28, ptr33, ptr29, &v20, a10))
                            {
                                v94 = v20;
                                v153 = 1;
                                if (!v94 && (addr = ptr20, p = ptr19, *((unsigned int *)((void*)&v20 + 4)) == v94))
                                    continue;
                                if (ptr29 < v29)
                                {
                                    *((unsigned int *)((char *)ptr28 + 4 * ptr29)) = v94;
                                    v76 = *((unsigned int *)((void*)&v20 + 4));
                                }
                                else
                                {
LABEL_7ff2c17c1c6:
                                    v153 = 0;
                                    sub_7ff2c17a4fc(4, &g_7ff2c1616ca, a10);
                                    goto LABEL_7ff2c17c1f2;
                                }
LABEL_7ff2c17bd41:
                                *((unsigned int *)((char *)ptr33 + 4 * ptr29)) = v76;
                                ptr29 += 1;
                                goto LABEL_7ff2c17bd4e;
                            }
                        }
                        else
                        {
                            sub_7ff2c17a4fc(4, &g_7ff2c1616ca, a10);
                        }
                    }
                }
            }
            v95 = (&ptr34)[pos];
            v96 = ptr29;
            v126 = (&ptr34)[index] - v95 + 1;
            v4 = v126;
            if (v96)
            {
                v97 = (&ptr18)[pos] + v96 * 4 - 4;
                do
                {
                } while (!*((int *)v97) && (v97 -= 4, v98 = (long long)(v96 - 1), v96 = (long long)(v96 - 1), v96 != 1));
            }
            v99 = v96;
            ptr17 = (&ptr19)[index];
            if ((int)sub_7ff2c17b0a4(ptr17))
            {
                if (v126)
                {
                    v101 = &v10[4 * v126 + 4];
                    do
                    {
                    } while (!*((int *)v101) && (v101 -= 4, v102 = (long long)(v126 - 1), v126 = (long long)(v126 - 1), v126 != 1));
                    v4 = v126;
                }
                if (v95)
                {
                    v103 = &ptr[4 * v95 + 4];
                    do
                    {
                    } while (!*((int *)v103) && (v103 -= 4, v104 = (unsigned long)(v95 - 1), v95 = (unsigned long)(v95 - 1), v95 != 1));
                }
                v105 = v95;
                v106 = (&ptr18)[idx4];
                v107 = v105 * 4;
                ptr32 = ptr;
                for ((&ptr34)[off] = v105; v107; ptr32 += 1)
                {
                    v107 -= 1;
                    *((char *)ptr17) = *(ptr32);
                    ptr17 += 1;
                }
                v110 = _ccall(6, 8, v126, v99, v109);
                if (!((char)v110))
                {
                    v111 = v10;
                    v112 = v106;
                    idx7 = v126;
                    v114 = v99;
                    v115 = v111;
                }
                else
                {
                    v112 = v111;
                    v114 = v126;
                    idx7 = v99;
                    v115 = v106;
                }
                idx4 = v115;
                a9 = v112;
                if (v111 == ptr || v106 == ptr)
                    goto LABEL_7ff2c17c1f0;
                if (!v114)
                {
                    v117 = idx7 * 4;
                    for (iter = ptr; v117; iter += 1)
                    {
                        v117 -= 1;
                        *(iter) = 0;
                    }
                }
                else
                {
                    *((unsigned int *)&ptr[4 * idx7]) = sub_7ff2c179cfc();
                    if (v114 != 1)
                    {
                        v119 = v114 - 1;
                        v120 = a9 + 4;
                        ptr8 = &ptr[4 * idx7 + 4];
                        do
                        {
                            v122 = v120;
                            i2 = v119;
                            v124 = v122 + 4;
                            *((unsigned int *)&ptr8->padding_0[0]) = sub_7ff2c179b50(idx4, *((int *)v122), ptr - a9 + v122, idx7, a10);
                            ptr8 = &ptr8->field_4;
                            v125 = i2 - 1;
                            v119 = v125;
                            v120 = v124;
                        } while (i2 != 1);
                        v29 = a3;
                        ptr = v16;
                        v126 = v4;
                    }
                }
                v127 = v126 + v99;
                if (v127)
                {
                    v128 = &ptr[4 * v127 + 4];
                    do
                    {
                        v129 = v127;
                    } while (!*((int *)v128) && (v128 -= 4, v130 = v129 - 1, v127 = v129 - 1, v129 != 1));
                }
                ptr31 = ptr34;
                if ((int)sub_7ff2c17a06c(ptr))
                {
                    idx8 = v9;
                    v153 = 1;
                }
                else
                {
                    v153 = 0;
                    goto LABEL_7ff2c17c1fc;
                }
LABEL_7ff2c17bd4e:
                addr = ptr20;
                p = ptr19;
            }
            else
            {
LABEL_7ff2c17c1f0:
                v153 = 0;
LABEL_7ff2c17c1f2:
                v131 = 0;
                goto LABEL_7ff2c17c5a9;
            }
        }
        goto LABEL_7ff2c17c5a9;
    }
    v131 = v1;
LABEL_7ff2c17c5a9:
    if (flag)
        sub_7ff2c17a470(a9, 0, a10);
    if (v153)
        *(ptr30) = v131;
    return v153;
}
