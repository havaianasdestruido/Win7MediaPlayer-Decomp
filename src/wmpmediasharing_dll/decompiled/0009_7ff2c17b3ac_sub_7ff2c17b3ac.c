/* sub_7ff2c17b3ac @ 0x7ff2c17b3ac
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c17b3ac  (949 bytes, 50 basic blocks)
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

extern long long g_7ff2c1616ca;

unsigned int sub_7ff2c17b3ac(unsigned long long a0, unsigned long long cur, unsigned int *ptr, long long a3)
{
    unsigned long long iter;  // rsi
    unsigned long long node;  // r13
    long long v13;  // r10
    unsigned int v14;  // r8d
    unsigned int v15;  // eax
    unsigned long v16;  // r8
    unsigned long v17;  // r9
    unsigned long v18;  // r15
    unsigned long v19;  // r9
    unsigned long long v20;  // r10
    unsigned long long v21;  // rdx
    unsigned long long v22;  // r10
    unsigned long long ptr4;  // rbp
    unsigned int v23;  // ecx
    unsigned int v24;  // r8d
    unsigned int v25;  // eax
    unsigned long v26;  // r8
    unsigned long v27;  // r9
    unsigned long v28;  // r15
    unsigned long v29;  // r9
    unsigned long long v30;  // rdx
    long long v31;  // r15
    long long v32;  // r15
    unsigned long long ptr7;  // rbx
    long long v33;  // r15
    long long v34;  // r15
    long long v37;  // r15
    unsigned long long ptr8;  // rdi
    unsigned int v10;  // r12d
    unsigned long long ptr5;  // r14
    long long v12;  // r10
    unsigned int v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x54]
    unsigned long v2;  // [bp-0x50]
    unsigned long long ptr6;  // [bp+0x8]
    long long v4;  // [bp+0x20]

    v4 = a3;
    ptr6 = a0;
    iter = 1;
    node = 0;
    ptr4 = 0;
    ptr7 = cur >> 32;
    ptr8 = a0 >> 32;
    v10 = 1;
    ptr5 = 1;
    if (!a0 >> 32 || !(unsigned int)ptr7 || (cur = cur, v12 = a3, !((char)(((unsigned int)ptr7 | (unsigned int)ptr8) >> 31) & 1)))
    {
        v10 = 0;
        sub_7ff2c17a4fc(4, &g_7ff2c1616ca, a3);
        cur = cur;
    }
    while (true)
    {
        v12 = v4;
        v13 = v12;
        if (!v10)
            return v10;
        v0 = 0;
        if ((unsigned int)(ptr8 - 1) > (unsigned int)ptr7 && (unsigned int)ptr8)
        {
            v14 = (unsigned int)ptr7 + 2;
            if ((unsigned int)ptr8 >> 2 >= v14)
            {
                v15 = (ptr8 & 4294967295) / v14;
                v16 = v15;
                v1 = v16;
                v17 = v16 * (cur & 4294967295);
                v18 = v16 * (ptr5 + ptr4);
                v2 = v17;
                v19 = v17;
                if (v15 <= 3)
                {
                    v10 = 0;
                    sub_7ff2c17a4fc(4, &g_7ff2c1616ca, v13);
                    v16 = v1;
                    v19 = v2;
                }
                if (v18 >> 32)
                    goto LABEL_7ff2c17b52d;
                v20 = ptr6;
                ptr6 = v20;
                if ((unsigned int)v18 <= (unsigned int)(2147483647 - (unsigned int)node - iter))
                {
                    v0 = 1;
                    v21 = ptr4 * (v16 & 4294967295);
                    node += v18 - v21;
                    iter += v21;
                    v22 = v20 - v19;
                    ptr6 = v22;
                    ptr8 -= ((unsigned int)v20 < (unsigned int)v19) + ptr7 * v16 + (v19 >> 32);
                    ptr6 = v22;
                    if (((unsigned int)node | (unsigned int)iter) >= 0x80000000)
                    {
                        v10 = 0;
                        sub_7ff2c17a4fc(4, &g_7ff2c1616ca, v4);
                        goto LABEL_7ff2c17b52d;
                    }
                }
            }
            else
            {
                do
                {
                    node += ptr5;
                    iter += ptr4;
                    v23 = (unsigned int)node | (unsigned int)iter;
                    ptr6 -= cur;
                    ptr8 -= ((unsigned int)ptr6 < (unsigned int)cur) + ptr7;
                } while (!(v23 & 0x80000000) && (ptr6 = ptr6, (unsigned int)ptr8 >= v14));
                v0 = 1;
                if ((v23 & 0x80000000))
                {
                    iter -= ptr4;
                    v0 = 0;
                    node -= ptr5;
                }
            }
        }
        else
        {
LABEL_7ff2c17b52d:
        }
        if ((unsigned int)(ptr7 - 1) > (unsigned int)ptr8 && (unsigned int)ptr7)
        {
            v24 = (unsigned int)ptr8 + 2;
            if ((unsigned int)ptr7 >> 2 < v24)
            {
                do
                {
                    ptr5 += node;
                    ptr4 += iter;
                    cur -= ptr6;
                    ptr7 -= ((unsigned int)cur < (unsigned int)ptr6) + ptr8;
                    if ((((unsigned int)ptr5 | (unsigned int)ptr4) & 0x80000000))
                    {
                        v0 = 0;
                        ptr4 -= iter;
                        ptr5 -= node;
                        v34 = v4;
                        goto LABEL_7ff2c17b702;
                    }
                } while ((cur = cur, (unsigned int)ptr7 >= v24));
            }
            v25 = (ptr7 & 4294967295) / v24;
            v26 = v25;
            v1 = v26;
            v27 = v26 * (ptr6 & 4294967295);
            v28 = v26 * (node + iter);
            v2 = v27;
            v29 = v27;
            if (v25 <= 3)
            {
                v10 = 0;
                sub_7ff2c17a4fc(4, &g_7ff2c1616ca, v4);
                v26 = v1;
                v29 = v2;
            }
            if (!v28 >> 32)
            {
                cur = cur;
                if ((unsigned int)v28 <= (unsigned int)(2147483647 - (unsigned int)ptr5 - ptr4))
                {
                    v0 = 1;
                    v30 = iter * (v26 & 4294967295);
                    ptr5 += v28 - v30;
                    ptr4 += v30;
                    cur -= v29;
                    ptr7 -= ((unsigned int)cur < (unsigned int)v29) + ptr8 * v26 + (v29 >> 32);
                    if (((unsigned int)ptr5 | (unsigned int)ptr4) < 0x80000000)
                        continue;
                    v31 = v4;
                    v10 = 0;
                    sub_7ff2c17a4fc(4, &g_7ff2c1616ca, v31);
                    v32 = v31;
                    goto LABEL_7ff2c17b6f6;
                }
                else
                {
                    v33 = v4;
                    goto LABEL_7ff2c17b6fe;
                }
            }
        }
        v32 = v4;
LABEL_7ff2c17b6f6:
        v33 = v32;
LABEL_7ff2c17b6fe:
        v34 = v33;
LABEL_7ff2c17b702:
        v37 = v34;
        if (!v0)
            break;
    }
    if (!v10)
    {
        return v10;
    }
    else if (((char)(((unsigned int)ptr5 | (unsigned int)ptr4 | (unsigned int)node | (unsigned int)iter) >> 31) & 1))
    {
        sub_7ff2c17a4fc(4, &g_7ff2c1616ca, v37);
        return 0;
    }
    else
    {
        *(ptr) = iter;
        ptr[1] = node;
        ptr[2] = ptr4;
        ptr[3] = ptr5;
        return v10;
    }
}
