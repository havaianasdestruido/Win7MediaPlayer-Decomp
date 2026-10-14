/* sub_100003c38 @ 0x100003c38
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100003c38  (1533 bytes, 115 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 395fce3d66ab1ed9a4fb2238172eaefc5cf78fc7a8b34c30686d638d16d9efca
 *   Evidence: analysis/report/rea-evidence/wmprph_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_9 {
    struct struct_10 *field_0;
    struct struct_11 *field_8;
} struct_9;

typedef struct struct_12 {
    char padding_0[72];
    struct struct_13 *field_48;
} struct_12;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

typedef struct struct_13 {
    unsigned long long field_0;
} struct_13;

extern unsigned long long g_1000017e0;
extern char g_100011970;
extern char g_100011974;

unsigned long long sub_100003c38(void* ptr, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long p, unsigned int a6)
{
    unsigned long long v3;  // rsi
    void* v4;  // rdi
    unsigned int v13;  // edx
    char v14;  // al
    unsigned long v15;  // r9
    char v16;  // al
    unsigned int v17;  // ecx
    unsigned long long v18;  // rcx
    void* v19;  // r8
    unsigned long long flag;  // rdx
    unsigned long long v21;  // r9
    char v22;  // cl
    unsigned long long v5;  // rcx
    struct_12 **v23;  // rcx
    unsigned long long v24;  // rdx
    char v25;  // cl
    char v26;  // cl
    char v27;  // cl
    unsigned long v28;  // r9
    unsigned long v29;  // r8
    unsigned long v30;  // rdx
    char v31;  // cl
    struct_12 **v32;  // rcx
    unsigned long v6;  // r9
    char v33;  // al
    void* v34;  // rcx
    void* v35;  // rcx
    struct_9 **v36;  // rdi
    struct_9 **v37;  // rcx
    struct_9 **v38;  // rcx
    char *v39;  // r8
    unsigned long long v40;  // rdx
    unsigned long v8;  // r8
    unsigned long v9;  // r10
    unsigned long long v10;  // r9
    void* addr;  // rcx
    long long v12;  // r9
    char *v0;  // [bp-0x50]
    struct_9 **v1;  // [bp-0x38], Other Possible Types: unsigned long, unsigned long long

    v3 = a2 & 4294967295;
    v4 = ptr;
    if (a6)
        return 0;
    if ((unsigned int)a2 == 20)
    {
        v5 = (long long)ptr[192];
        *((struct_9 ***)p) = 0x1;
        v6 = a3;
        if ((char)!(0 < v5))
            return 1;
    }
    else if ((unsigned int)a2 == 15)
    {
        a2 = a3;
        a6 = 1;
        *((unsigned long long *)p) = sub_1000045cc();
        v6 = a4;
        if (a6)
            return 1;
    }
    else
    {
        if ((unsigned int)a2 == 5)
        {
            v8 = (int)ptr[280];
            v9 = (int)ptr[276];
            v10 = (unsigned short)a4 + v9;
            addr = ptr + 268;
            *((unsigned int *)&addr[16]) = v10;
            v12 = v10 - v9;
            *((int *)addr) = v12;
            v13 = (unsigned short)(a4 >> 16) + (unsigned int)v8;
            *((unsigned int *)&addr[20]) = v13;
            *((unsigned int *)&ptr[272]) = v13 - v8;
            sub_10000375c(addr, ptr + 260, v8, v12); /* do not return */
        }
        if ((unsigned int)a2 == 7)
        {
            *((unsigned int *)&ptr[248]) = (int)ptr[248] | 32;
            v14 = (int)ptr[248];
            if (!(v14 & 64))
            {
                if ((long long)ptr[168] && !(v14 & 1))
                {
                    v1 = 0;
                    (*((long long *)(*((long long *)ptr) + 24)))();
                }
                if (!(8 & (char)ptr[248]))
                    4296016680();
            }
            goto LABEL_100003e77;
        }
        else
        {
            v6 = a3;
            if ((unsigned int)a2 == 8)
            {
                *((unsigned int *)&ptr[248]) = (int)ptr[248] & 4294967263;
LABEL_100003e77:
                *((struct_9 ***)p) = NULL;
                v6 = a3;
            }
        }
    }
    v15 = v6;
    v16 = (int)ptr[248];
    if ((v16 & 8))
    {
        v17 = -(0 < (v16 & 16));
        a6 = v17 & 3;
        if (!((char)v17 & 3))
        {
            v18 = (long long)ptr[192];
            if ((long long)ptr[192])
            {
                v19 = ptr + 276;
                *((unsigned int *)&v1) = (unsigned short)a4;
                v0 = &a6;
                flag = 1;
                *((unsigned int *)((char *)&v1 + 4)) = (unsigned short)(a4 >> 16);
                v21 = v1;
                (*((long long *)(*((long long *)(long long)ptr[192]) + 96)))();
            }
        }
        else if (a6 == 3)
        {
            if ((unsigned int)v3 == 0x200)
            {
                v22 = (int)ptr[248];
                v1 = 0;
                if ((v22 & 1) && (v22 & 8) && (long long)ptr[200])
                {
                    v23 = (long long)ptr[200];
                    v24 = 0x200;
                    v28 = a4;
                    v29 = a3;
                    (*((long long *)(*((long long *)(long long)ptr[200]) + 72)))();
                }
                goto LABEL_100004058;
            }
            if ((unsigned int)v3 == 32)
            {
                v25 = (int)ptr[248];
                v1 = 0;
                if ((v25 & 1) && (v25 & 8) && (long long)ptr[200])
                {
                    v23 = (long long)ptr[200];
                    v24 = v3 & 4294967295;
                    v28 = a4;
                    v29 = a3;
                    (*((long long *)(*((long long *)(long long)ptr[200]) + 72)))();
                }
                goto LABEL_100004058;
            }
            v24 = 514;
            if ((unsigned int)v3 == 514 || (v24 = 517, (unsigned int)v3 == 517 || (v24 = 520, (unsigned int)v3 == 520 || (v24 = 513, (unsigned int)v3 == 513 || (v24 = 516, (unsigned int)v3 == 516 || (v24 = 519, (unsigned int)v3 == 519 || (v24 = 515, (unsigned int)v3 == 515 || (v24 = 518, (unsigned int)v3 == 518))))))))
            {
                v26 = (int)ptr[248];
                v1 = 0;
                if ((v26 & 1) && (v26 & 8) && (long long)ptr[200])
                {
                    v23 = (long long)ptr[200];
                    v28 = a4;
                    v29 = a3;
                    (*((long long *)(*((long long *)(long long)ptr[200]) + 72)))();
                }
                goto LABEL_100004058;
            }
            else if ((unsigned int)v3 == 521)
            {
                v27 = (int)ptr[248];
                v1 = 0;
                if ((v27 & 1) && (v27 & 8))
                {
                    v23 = (long long)ptr[200];
                    if ((long long)ptr[200])
                    {
                        v23 = (long long)ptr[200];
                        v24 = v3 & 4294967295;
                        v28 = a4;
                        v29 = a3;
                        (*((long long *)(*((long long *)(long long)ptr[200]) + 72)))();
                    }
                }
LABEL_100004058:
                *((struct_9 ***)p) = NULL;
            }
        }
    }
    v30 = (int)ptr[248];
    v31 = (unsigned int)v30 >> 3;
    if (((char)((unsigned int)v30 >> 5) & v31 & 1))
    {
        if ((unsigned int)v3 == 0x100 || (unsigned int)v3 == 257 || (unsigned int)v3 == 258 || (unsigned int)v3 == 259 || (unsigned int)v3 == 260 || (unsigned int)v3 == 261 || (unsigned int)v3 == 263)
        {
LABEL_100004082:
            v1 = NULL;
            if (((char)v30 & 1) && (v31 & 1) && (long long)ptr[200])
            {
                v32 = (long long)ptr[200];
                (*((long long *)(*((long long *)(long long)ptr[200]) + 72)))();
            }
        }
        else if ((unsigned int)v3 == 83)
        {
            v1 = NULL;
            if (((char)v30 & 1) && (v31 & 1) && (long long)ptr[200])
            {
                v32 = (long long)ptr[200];
                (*((long long *)(*((long long *)(long long)ptr[200]) + 72)))();
            }
        }
        else if ((unsigned int)v3 == 31)
        {
            v1 = NULL;
            if (((char)v30 & 1) && (v31 & 1) && (long long)ptr[200])
            {
                v32 = (long long)ptr[200];
                (*((long long *)(*((long long *)(long long)ptr[200]) + 72)))();
            }
        }
        else
        {
            if ((unsigned int)v3 == 646)
            {
                v1 = NULL;
                if (((char)v30 & 1) && (v31 & 1) && (long long)ptr[200])
                    (*((long long *)(*((long long *)(long long)ptr[200]) + 72)))();
                *((struct_9 ***)p) = v1;
                if (false)
                    return 1;
LABEL_100004206:
                v33 = (int)ptr[248];
                v1 = NULL;
                if ((v33 & 1) && (v33 & 8) && (long long)ptr[200])
                    (*((long long *)(*((long long *)(long long)ptr[200]) + 72)))();
                *((struct_9 ***)p) = v1;
                if (false)
                    return 1;
            }
            else
            {
                if ((unsigned int)v3 == 521)
                    goto LABEL_100004082;
                if ((unsigned int)v3 >= 641 && (unsigned int)v3 <= 657)
                    goto LABEL_100004206;
                goto LABEL_10000425b;
            }
            goto LABEL_10000425b;
        }
        *((struct_9 ***)p) = v1;
        if (false)
            return 1;
        goto LABEL_100004297;
    }
    else
    {
LABEL_10000425b:
        if ((unsigned int)v3 == 2)
        {
            v34 = ptr;
            (*((long long *)(*((long long *)ptr) + 24)))();
        }
LABEL_100004297:
        if (!((char)ptr[248] & 8) && ((char)ptr[292] & 8))
        {
            v15 = a4;
            a2 = a3;
            v30 = v3 & 4294967295;
            a6 = 1;
            *((long long *)p) = sub_1000069e0(ptr, v30, a2, v15, &a6);
            if (a6)
                return 1;
        }
        if ((unsigned int)v3 == *((int *)&g_100011970))
        {
            v35 = ptr;
            (*((long long *)(*((long long *)ptr) + 24)))();
        }
        else if ((unsigned int)v3 == *((int *)&g_100011974))
        {
            v36 = (long long)ptr[160];
            if (!v36)
            {
                *((struct_9 ***)p) = v36;
                return 1;
            }
            v37 = v36;
            *(v36)->field_8();
        }
        else if ((unsigned int)v3 == 895)
        {
            v38 = (long long)ptr[160];
            v1 = 0;
            if (!(long long)ptr[160])
            {
                *((struct_9 ***)p) = NULL;
                return 1;
            }
            v39 = &v1;
            v40 = &g_1000017e0;
            (*((long long *)*((long long *)(long long)ptr[160])))();
        }
        else
        {
            return 0;
        }
    }
}
