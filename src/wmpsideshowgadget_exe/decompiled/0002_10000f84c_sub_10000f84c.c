/* sub_10000f84c @ 0x10000f84c
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000f84c  (1532 bytes, 112 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f8f45cd381f60a41cca4834188157d25906911108d7280cb2540d2245327a9d
 *   Evidence: analysis/report/rea-evidence/wmpsideshowgadget_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_14 {
    char padding_0[96];
    struct struct_15 *field_60;
} struct_14;

typedef struct struct_9 {
    struct struct_10 *field_0;
    struct struct_11 *field_8;
} struct_9;

typedef struct struct_12 {
    char padding_0[72];
    struct struct_13 *field_48;
} struct_12;

typedef struct struct_15 {
    unsigned long long field_0;
} struct_15;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

typedef struct struct_13 {
    unsigned long long field_0;
} struct_13;

extern unsigned long long g_100003730;
extern char g_10001e078;
extern char g_10001e07c;

unsigned long long sub_10000f84c(void* ptr, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long p, unsigned int a6)
{
    unsigned long long v3;  // rsi
    void* v4;  // rdi
    long long v13;  // r9
    unsigned int v14;  // edx
    unsigned long v15;  // r9
    char v16;  // cl
    unsigned int v17;  // eax
    struct_14 **v18;  // rcx
    void* v19;  // r8
    unsigned long long flag;  // rdx
    unsigned long long v21;  // r9
    unsigned int v22;  // r10d
    struct_14 **v5;  // rdx
    char v23;  // cl
    struct_12 **v24;  // rcx
    unsigned long v25;  // rdx
    char v26;  // cl
    unsigned long v27;  // r9
    unsigned long v28;  // r8
    unsigned long v29;  // rdx
    char v30;  // cl
    unsigned int v31;  // r10d
    struct_12 **v32;  // rcx
    unsigned int v6;  // ecx
    unsigned long long v33;  // rdx
    unsigned long v34;  // r9
    unsigned long v35;  // r8
    char v36;  // al
    void* v37;  // rcx
    void* v38;  // rcx
    struct_9 **v39;  // rdi
    struct_9 **v40;  // rcx
    struct_9 **v41;  // rcx
    char *v42;  // r8
    unsigned long long v43;  // rdx
    unsigned long v8;  // r9
    unsigned long v9;  // r8
    unsigned long v10;  // r10
    unsigned long long v11;  // r9
    void* addr;  // rcx
    char *v0;  // [bp-0x50]
    struct_9 **v1;  // [bp-0x38], Other Possible Types: unsigned long, unsigned long long

    v3 = a2 & 4294967295;
    v4 = ptr;
    if (a6)
        return 0;
    if ((unsigned int)a2 == 20)
    {
        v5 = (long long)ptr[224];
        *((struct_9 ***)p) = 0x1;
        v6 = -(NULL < v5) & 1;
        goto LABEL_10000f8b1;
    }
    if ((unsigned int)a2 == 15)
    {
        a2 = a3;
        a6 = 1;
        *((unsigned long long *)p) = sub_10000f34c();
        v8 = a4;
        if (a6)
            return 1;
    }
    else
    {
        if ((unsigned int)a2 == 5)
        {
            v9 = (int)ptr[312];
            v10 = (int)ptr[308];
            v11 = (short)a4 + v10;
            addr = ptr + 300;
            *((unsigned int *)&addr[16]) = v11;
            v13 = v11 - v10;
            *((int *)addr) = v13;
            v14 = (short)(a4 >> 16) + (unsigned int)v9;
            *((unsigned int *)&addr[20]) = v14;
            *((unsigned int *)&ptr[304]) = v14 - v9;
            sub_10001059c(addr, ptr + 292, v9, v13); /* do not return */
        }
        if ((unsigned int)a2 == 33)
        {
            if (((char)((int)ptr[288] >> 14) & 1))
            {
                if ((long long)ptr[200] && !(1 & (char)ptr[280]))
                {
                    v1 = 0;
                    (*((long long *)(*((long long *)ptr) + 32)))();
                }
            }
            else
            {
                *((unsigned int *)&ptr[280]) = (int)ptr[280] | 32;
                if (!((char)ptr[280] & 64))
                    sub_10000f58c(); /* do not return */
            }
            goto LABEL_10000fabd;
        }
        else if ((unsigned int)a2 == 7)
        {
            *((unsigned int *)&ptr[280]) = (int)ptr[280] | 32;
            a6 = 1;
            if (!((char)ptr[280] & 64))
                sub_10000f58c(); /* do not return */
            v6 = 0;
            *((struct_9 ***)p) = NULL;
LABEL_10000f8b1:
            v8 = a3;
            if (v6)
                return 1;
        }
        else
        {
            v8 = a3;
            if ((unsigned int)a2 == 8)
            {
                *((unsigned int *)&ptr[280]) = (int)ptr[280] & 4294967263;
LABEL_10000fabd:
                *((struct_9 ***)p) = NULL;
                v8 = a3;
            }
        }
    }
    v15 = v8;
    v16 = (int)ptr[280];
    if ((v16 & 8) && (unsigned int)(v3 - 0x200) <= 14)
    {
        v17 = -(0 < (v16 & 16));
        a6 = v17 & 3;
        if (!((char)v17 & 3))
        {
            v18 = (long long)ptr[224];
            if ((long long)ptr[224])
            {
                v19 = ptr + 308;
                *((int *)&v1) = (short)a4;
                v0 = &a6;
                flag = 1;
                *((int *)((char *)&v1 + 4)) = (short)(a4 >> 16);
                v21 = v1;
                (*((long long *)(*((long long *)(long long)ptr[224]) + 96)))();
            }
        }
        else if (a6 == 3)
        {
            v22 = 0x200;
            if (...)
            {
                v23 = (int)ptr[280];
                v1 = 0;
                if ((v23 & 1) && (v23 & 8) && (long long)ptr[232])
                {
                    v24 = (long long)ptr[232];
                    v25 = v22;
                    v27 = a4;
                    v28 = a3;
                    (*((long long *)(*((long long *)(long long)ptr[232]) + 72)))();
                }
                goto LABEL_10000fc46;
            }
            else if ((unsigned int)v3 == 521)
            {
                v26 = (int)ptr[280];
                v1 = 0;
                if ((v26 & 1) && (v26 & 8))
                {
                    v24 = (long long)ptr[232];
                    if ((long long)ptr[232])
                    {
                        v25 = v3 & 4294967295;
                        v27 = a4;
                        v28 = a3;
                        *(v24)->field_48();
                    }
                }
LABEL_10000fc46:
                *((struct_9 ***)p) = NULL;
            }
        }
    }
    v29 = (int)ptr[280];
    v30 = (unsigned int)v29 >> 3;
    if (((char)((unsigned int)v29 >> 5) & v30 & 1))
    {
        v31 = 0x100;
        if ((unsigned int)v3 == 0x100 || (v31 = 257, (unsigned int)v3 == 257 || (v31 = 258, (unsigned int)v3 == 258 || (v31 = 259, (unsigned int)v3 == 259 || (v31 = 260, (unsigned int)v3 == 260 || (v31 = 261, (unsigned int)v3 == 261 || (v31 = 263, (unsigned int)v3 == 263)))))))
        {
LABEL_10000fc70:
            v1 = NULL;
            if (((char)v29 & 1) && (v30 & 1) && (long long)ptr[232])
            {
                v32 = (long long)ptr[232];
                v33 = v31;
                v34 = a4;
                v35 = a3;
                (*((long long *)(*((long long *)(long long)ptr[232]) + 72)))();
            }
        }
        else if ((unsigned int)v3 == 83)
        {
            v1 = NULL;
            if (((char)v29 & 1) && (v30 & 1) && (long long)ptr[232])
            {
                v32 = (long long)ptr[232];
                v33 = v3 & 4294967295;
                v34 = a4;
                v35 = a3;
                (*((long long *)(*((long long *)(long long)ptr[232]) + 72)))();
            }
        }
        else if ((unsigned int)v3 == 31)
        {
            v1 = NULL;
            if (((char)v29 & 1) && (v30 & 1) && (long long)ptr[232])
            {
                v32 = (long long)ptr[232];
                v33 = v3 & 4294967295;
                v34 = a4;
                v35 = a3;
                (*((long long *)(*((long long *)(long long)ptr[232]) + 72)))();
            }
        }
        else
        {
            if ((unsigned int)v3 == 646)
            {
                v1 = NULL;
                if (((char)v29 & 1) && (v30 & 1) && (long long)ptr[232])
                    (*((long long *)(*((long long *)(long long)ptr[232]) + 72)))();
                *((struct_9 ***)p) = v1;
                if (false)
                    return 1;
LABEL_10000fe08:
                v36 = (int)ptr[280];
                v1 = NULL;
                if ((v36 & 1) && (v36 & 8) && (long long)ptr[232])
                    (*((long long *)(*((long long *)(long long)ptr[232]) + 72)))();
                *((struct_9 ***)p) = v1;
                if (false)
                    return 1;
            }
            else
            {
                v31 = 521;
                if ((unsigned int)v3 == 521)
                    goto LABEL_10000fc70;
                if ((unsigned int)v3 >= 641 && (unsigned int)v3 <= 657)
                    goto LABEL_10000fe08;
                goto LABEL_10000fe5d;
            }
            goto LABEL_10000fe5d;
        }
        *((struct_9 ***)p) = v1;
        if (false)
            return 1;
        goto LABEL_10000fe99;
    }
    else
    {
LABEL_10000fe5d:
        if ((unsigned int)v3 == 2)
        {
            v37 = ptr;
            (*((long long *)(*((long long *)ptr) + 32)))();
        }
LABEL_10000fe99:
        if (((char)ptr[336] & 8))
        {
            v15 = a4;
            a2 = a3;
            v29 = v3 & 4294967295;
            a6 = 1;
            *((long long *)p) = sub_10000f66c(ptr, v29, a2, v15, &a6);
            if (a6)
                return 1;
        }
        if ((unsigned int)v3 == *((int *)&g_10001e078))
        {
            v38 = ptr;
            (*((long long *)(*((long long *)ptr) + 32)))();
        }
        else if ((unsigned int)v3 == *((int *)&g_10001e07c))
        {
            v39 = (long long)ptr[192];
            if (!v39)
            {
                *((struct_9 ***)p) = v39;
                return 1;
            }
            v40 = v39;
            *(v39)->field_8();
        }
        else if ((unsigned int)v3 == 895)
        {
            v41 = (long long)ptr[192];
            v1 = 0;
            if (!(long long)ptr[192])
            {
                *((struct_9 ***)p) = NULL;
                return 1;
            }
            v42 = &v1;
            v43 = &g_100003730;
            (*((long long *)*((long long *)(long long)ptr[192])))();
        }
        else
        {
            return 0;
        }
    }
}
