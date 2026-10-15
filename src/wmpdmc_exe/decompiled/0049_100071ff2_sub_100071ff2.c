/* sub_100071ff2 @ 0x100071ff2
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100071ff2  (727 bytes, 64 basic blocks)
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
    char padding_4[4];
    struct struct_1 *field_8;
    char padding_10[8];
    struct struct_2 *field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    struct struct_0 *field_30;
} struct_1;

typedef struct struct_3 {
    void* field_0;
    char padding_8[4];
    unsigned int field_c;
} struct_3;

typedef struct struct_6 {
    struct struct_4 *field_0;
} struct_6;

typedef struct struct_4 {
    char padding_0[256];
    struct struct_5 *field_100;
} struct_4;

typedef struct struct_7 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_7;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
} struct_0;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

extern char g_1000e21ac;

int sub_100071ff2(void)
{
    struct_1 *ptr;  // rsi
    unsigned long v4;  // r14
    unsigned int flag2;  // ecx
    unsigned int flag4;  // ecx
    unsigned long v15;  // rax
    unsigned long v16;  // r12
    unsigned long v17;  // rbx
    unsigned long p;  // rbx
    unsigned int *addr;  // rcx
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rdx
    struct_3 *ptr5;  // rdi
    unsigned int v23;  // eax
    struct_6 **ptr6;  // rax
    struct_4 **v25;  // rcx
    unsigned long v26;  // rbx
    unsigned int v27;  // eax
    unsigned long v28;  // cc_ndep
    unsigned long v29;  // 4114
    unsigned int *v30;  // r15
    unsigned long long v31;  // rbx
    unsigned long v6;  // r13
    unsigned int *i;  // r15
    struct_1 *v33;  // rdi
    struct_7 *v34;  // rcx
    unsigned int j;  // r14d
    unsigned long v36;  // 4116
    unsigned long long v37;  // r13
    unsigned long v38;  // r12
    unsigned int *ptr4;  // rcx
    unsigned int v40;  // edx
    unsigned int v41;  // eax
    void* cur;  // rdi
    unsigned int *v8;  // r15
    int v9;  // ebp
    unsigned int flag3;  // ecx
    unsigned int flag;  // ecx
    unsigned int choice;  // ecx
    unsigned int v1;  // [bp+0x88]
    unsigned long long *ptr7;  // [bp+0xb0]

    ptr->field_20 = v4;
    v6 = ptr5->field_c;
    cur = ptr5->field_0;
    v8 = NULL;
    v9 = 0;
    do
    {
        if (!(unsigned int)v6)
            break;
        flag3 = *((short *)cur);
        if (!flag3)
        {
            v26 = cur + 16;
            if (*((long long *)v26) && (int)cur[24] == *((int *)&g_1000e21ac))
            {
                if ((ptr->field_0 & 268435455))
                    sub_100072a98(ptr);
                sub_100072894(); /* do not return */
            }
            sub_100074cbc(ptr->field_30, (int)cur[4], (long long)cur[8], ptr->field_30->field_10, v26); /* do not return */
        }
        flag = flag3 - 1;
        if (flag3 == 1)
            sub_1000726d0(ptr, (int)cur[4]); /* do not return */
        choice = flag - 1;
        if (flag == 1)
            sub_1000727a0(ptr, (int)cur[4]); /* do not return */
        flag2 = choice - 1;
        if (choice == 1)
        {
            v16 = cur + 24;
            if (*((long long *)v16))
            {
                v17 = cur + 32;
                if (*((long long *)v17) && (int)cur[40] == *((int *)&g_1000e21ac))
                    sub_100072610(ptr, (int)cur[4], *((long long *)v16), *((long long *)v17)); /* do not return */
            }
            p = cur + 32;
            addr = *((long long *)p);
            if (addr)
            {
                v20 = *(addr);
                v21 = v20;
                if (((unsigned int)v21 & 4294967168) != 4294967168)
                {
                    v22 = ~((unsigned int)v20) & 127;
                    v23 = ((unsigned int)v20 & 4294967168) - 1 ^ (unsigned int)v22;
                    *(addr) = v23;
                    v21 = v22;
                    if (!(v23 & 4294967168))
                        sub_100059224(); /* do not return */
                }
                *((unsigned int **)p) = NULL;
            }
            ptr6 = sub_100072a98(ptr);
            v25 = *(ptr6);
            *(ptr6)->field_0->field_100();
        }
        flag4 = flag2 - 1;
        if (flag2 == 1)
        {
            v1 = (int)cur[4];
            (long long)cur[8]();
        }
        if (flag4 == 1)
            sub_1000723d0(ptr->field_30, (int)cur[4], (long long)cur[8], (int)cur[16], &ptr->field_18); /* do not return */
        if (flag4 == 2)
            sub_100072514(ptr, (int)cur[4], (long long)cur[8]); /* do not return */
        v9 = -2147418113;
        v15 = (short)cur[2];
        v6 -= v15;
        cur += v15;
    } while (true);
    if (v9 >= 0)
    {
        *(ptr7) = ptr->field_28;
        ptr->field_28 = 0;
    }
    else
    {
        v27 = ptr->field_0 & 268435455;
        v29 = _ccall(6, 19, (unsigned long long)(ptr->field_0 & 268435455), 0, v28);
        if (!((char)v29))
        {
            v30 = v27;
            v31 = v27 * 16 - 16;
            do
            {
                i = v30;
                v33 = ((ptr->field_0 >> 28 & 1) ? ptr->field_8 : (struct struct_1 *)&ptr->field_8);
                v34 = *((long long *)(8 + v31 + (char *)v33));
                if (v34)
                {
                    j = 0;
                    v36 = _ccall(6, 19, (unsigned long long)(v34->field_0 & 268435455), 0, 0);
                    if (!((char)v36))
                    {
                        v37 = 0;
                        do
                        {
                            v38 = *((long long *)(v37 + ((v34->field_0 >> 28 & 1) ? v34->field_8 : (struct struct_7 *)&v34->field_8)));
                            if (v38)
                            {
                                sub_10005c8dc(v38, 0);
                                sub_10005c80c(v38, 0);
                            }
                            v34 = *((long long *)(8 + v31 + (char *)v33));
                            j += 1;
                            v37 += 8;
                        } while (j < (v34->field_0 & 268435455));
                    }
                    sub_10005a0b0(*((long long *)(8 + v31 + (char *)v33))); /* do not return */
                }
                if (*((long long *)(v31 + (char *)v33)))
                {
                    sub_10005c8dc(*((long long *)(v31 + (char *)v33)), 0);
                    if (*((long long *)(v31 + (char *)v33)) != v4)
                        sub_10005c80c(*((long long *)(v31 + (char *)v33)), 0);
                }
                v31 -= 16;
                v8 = (char *)i + 1;
                v30 = v8;
            } while (i != 0x1);
        }
        ptr4 = &ptr->field_18->field_0;
        ptr->field_0 = ptr->field_0 & 0xf0000000;
        if (ptr4 != v8)
        {
            v40 = *(ptr4);
            if ((v40 & 4294967168) != 4294967168)
            {
                v41 = (v40 & 4294967168) - 1 ^ ~(v40) & 127;
                *(ptr4) = v41;
                if (!(v41 & 4294967168))
                    sub_100059224(); /* do not return */
            }
            ptr->field_18 = v8;
        }
    }
    4297065488();
}
