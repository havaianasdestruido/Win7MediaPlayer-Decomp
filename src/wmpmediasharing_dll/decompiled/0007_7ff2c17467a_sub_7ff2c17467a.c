/* sub_7ff2c17467a @ 0x7ff2c17467a
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c17467a  (793 bytes, 72 basic blocks)
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
    char padding_0[72];
    unsigned long long field_48;
} struct_0;

long long sub_7ff2c17467a(unsigned int flag, unsigned long a1, unsigned long a2, unsigned long long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13)
{
    unsigned long v3;  // cc_op
    unsigned long v4;  // cc_dep1
    unsigned long long ptr[10];  // rbx
    unsigned long v14;  // rcx
    unsigned long long p[10];  // rbx
    unsigned long v16;  // r13
    unsigned long ptr4;  // r13
    unsigned long v19;  // rbx
    unsigned long long v20;  // rsi
    unsigned long long i;  // rsi
    unsigned long v22;  // r12
    unsigned long v5;  // cc_dep2
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rcx
    unsigned long v25;  // rdi
    unsigned long v26;  // rbx
    unsigned long ptr5;  // r13
    unsigned long long v29;  // rsi
    unsigned long long v30;  // rsi
    unsigned long v31;  // r12
    unsigned long long v32;  // rcx
    unsigned long v6;  // cc_ndep
    unsigned long v33;  // r8
    struct_0 *addr;  // rbx
    unsigned long v35;  // rcx
    unsigned long v7;  // 4101
    unsigned int v8;  // ecx
    unsigned int choice;  // ecx
    unsigned int flag2;  // ecx
    unsigned long long ptr3[10];  // rbx
    unsigned long long v12;  // rsi
    unsigned long v1;  // [bp+0x100010]
    unsigned long long v2;  // [bp+0x100018]

    v7 = _ccall(4, v3, v4, v5, v6);
    if (!((char)v7))
    {
        v8 = flag - 1;
        if (flag != 1)
        {
            choice = v8 - 5;
            if (v8 != 5)
            {
                flag2 = choice - 1;
                if (choice != 1)
                {
                    if (flag2 != 1)
                    {
                        if (flag2 - 1 != 1)
                            goto LABEL_0x7ff2c17444a;
                        ptr3[9] = ptr3[9] + 1;
                        if (ptr3[6] <= (ptr3[9] & 4294967295) && !(char)sub_7ff2c176638(&ptr3[5], ptr3[9] * 2 + 2, 4294967295))
                        {
                            ptr3[9] = ptr3[9] - 1;
                        }
                        else
                        {
                            if (ptr3[9] < ptr3[6])
                                *((unsigned long long *)(ptr3[5] + ptr3[9] * 8)) = v12 + 1;
                            else
                                8792537709680();
                        }
                        if (v12 >= v2)
                            8792537709680();
                    }
                    else
                    {
                        v14 = ptr[9];
                        if (v14 != a3)
                        {
                            if (v14 < ptr[6])
                                ptr[9] = v14 - 1;
                            8792537709680();
                        }
                    }
                }
                else
                {
                    ptr3[9] = ptr3[9] + 1;
                    if (ptr3[6] <= (ptr3[9] & 4294967295) && !(char)sub_7ff2c176638(&p[5], p[9] * 2 + 2, 4294967295))
                        ptr3[9] = ptr3[9] - 1;
                    if (p[9] >= p[6])
                        8792537709680();
                    *((unsigned long *)(p[5] + p[9] * 8)) = v16;
                }
            }
            else
            {
                if (v12 >= v2)
                    8792537709680();
            }
        }
        else
        {
            if (*((short *)ptr4) == (unsigned short)a3)
            {
                if (*((long long *)(v19 + 72)) == a3)
                    goto LABEL_0x7ff2c174447;
                if (*((long long *)(v19 + 72)) < *((long long *)(v19 + 48)))
                    goto LABEL_0x7ff2c174599;
                8792537709680();
            }
            if (v20 < v2)
            {
                i = v20 + 1;
                if (i < *((long long *)(v1 + v22 * 8 + 8)))
                {
                    v23 = i + 1;
                    v24 = i * 16;
                    do
                    {
                        if (i >= v2)
                            8792537709680();
                        v25 = *((short *)ptr4);
                        if (v25 >= *((long long *)(v24 + v1 + 8)))
                        {
                            if (v23 < v2)
                            {
                                if (v25 <= *((long long *)(v24 + v1 + 24)))
                                {
                                    if (*((long long *)(v26 + 72)) == a3)
                                        goto LABEL_0x7ff2c174d92;
                                    if (*((long long *)(v26 + 72)) < *((long long *)(v26 + 48)))
                                        goto LABEL_0x7ff2c174da1;
                                    8792537709680();
                                }
                            }
                            else
                            {
                                8792537709680();
                            }
                        }
                        i += 2;
                        v24 += 32;
                        v23 += 2;
                    } while (i < *((long long *)(v1 + v22 * 8 + 8)));
                }
            }
            else
            {
                8792537709680();
            }
        }
    }
    else if (*((short *)ptr5) == (unsigned short)a3)
    {
        if (*((long long *)(v19 + 72)) == a3)
            goto LABEL_0x7ff2c174447;
        if (*((long long *)(v19 + 72)) < *((long long *)(v19 + 48)))
            goto LABEL_0x7ff2c174599;
        8792537709680();
    }
    else if (v20 < v2)
    {
        v30 = v29 + 1;
        if (v30 < *((long long *)(v1 + v31 * 8 + 8)))
        {
            v32 = v30 * 16;
            if (v30 >= v2)
                8792537709680();
            v33 = *((short *)ptr5);
            if (v33 >= *((long long *)(v32 + v1 + 8)) && v30 + 1 >= v2)
                8792537709680();
        }
        else
        {
            v35 = addr->field_48;
            if (v35 != a3)
            {
                if (v35 < *((long long *)&addr->padding_0[48]))
                    addr->field_48 = v35 - 1;
                else
                    8792537709680();
            }
        }
    }
    else
    {
        8792537709680();
    }
}
