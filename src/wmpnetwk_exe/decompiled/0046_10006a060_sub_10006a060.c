/* sub_10006a060 @ 0x10006a060
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x10006a060  (979 bytes, 65 basic blocks)
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

int sub_10006a060(void)
{
    unsigned int v1;  // edx
    unsigned long long ptr4;  // r11
    unsigned int v6;  // r9d
    unsigned int v7;  // r12d
    unsigned long long v8;  // r10
    char *v9;  // r8
    unsigned long long v10;  // r10
    unsigned int v11;  // edx
    unsigned long long v12;  // r10
    unsigned long long v13;  // r10
    unsigned long long ptr5;  // r10
    void* v3;  // rcx
    unsigned long long v15;  // r10
    unsigned long long cur;  // rbx
    unsigned long long iter;  // r8
    unsigned long long node;  // r9
    unsigned short v19;  // cx
    char v20;  // cl
    unsigned long long v21;  // r10
    void* ptr3;  // rbp
    unsigned long long v22;  // r10
    unsigned long long v24;  // r10
    unsigned long long v25;  // r10
    unsigned long long v5;  // rdx

    ptr4 = v1;
    ptr3 = v3;
    ptr5 = 0;
    v5 = _INSERT(v1, 0, 0);
    if ((unsigned int)ptr4)
    {
        node = 3;
        iter = 2;
        cur = 1;
        do
        {
            ptr4 -= 1;
            if (v6 && (unsigned int)ptr5 >= v6)
                goto LABEL_10006a39a;
            v7 = 0;
            if (*((short *)ptr3) >= 0xd800 && *((short *)ptr3) <= 56319)
            {
                if (!v6)
                {
                    if ((unsigned int)node < (unsigned int)ptr5)
                        goto LABEL_10006a2ce;
                    ptr5 = (unsigned int)ptr5 + 3;
                    cur = (unsigned int)cur + 3;
                    iter = (unsigned int)iter + 3;
                    node = (unsigned int)node + 3;
                }
                else if ((unsigned short)v5)
                {
                    if ((unsigned int)iter <= (unsigned int)ptr5 || (unsigned int)iter >= v6)
                        goto LABEL_10006a2ce;
                    v8 = ptr5 + 1;
                    v9[(unsigned int)ptr5] = (char)((unsigned short)v5 >> 12) | 224;
                    v10 = v8 + 1;
                    cur += 3;
                    v9[(unsigned int)v8] = (char)((unsigned short)v5 >> 6) & 63 | 128;
                    ptr5 = v10 + 1;
                    iter += 3;
                    v9[(unsigned int)v10] = (char)v5 & 63 | 128;
                    node += 3;
                }
                v5 = _INSERT((char)v5 & 63 | 128 CONCAT 0, 0, *((short *)ptr3));
                continue;
            }
            if ((unsigned short)v5)
            {
                if (*((short *)ptr3) >= 0xdc00 && *((short *)ptr3) <= 57343)
                {
                    if (v6)
                    {
                        if ((unsigned int)node <= (unsigned int)ptr5 || (unsigned int)node >= v6)
                            goto LABEL_10006a2ce;
                        v11 = (unsigned short)v5 * 0x400 + *((short *)ptr3) - 0x35fdc00;
                        v12 = ptr5 + 1;
                        cur += 3;
                        iter += 3;
                        v9[(unsigned int)ptr5] = (char)(v11 >> 18) | 240;
                        v13 = v12 + 1;
                        node += 3;
                        v9[(unsigned int)v12] = (char)(v11 >> 12) & 63 | 128;
                        ptr5 = v13 + 1;
                        v9[(unsigned int)v13] = (char)(v11 >> 6) & 63 | 128;
                        v9[(unsigned int)ptr5] = (char)v11 & 63 | 128;
                    }
                    else if ((unsigned int)cur < (unsigned int)ptr5)
                    {
                        goto LABEL_10006a2ce;
                    }
                    v7 = 1;
                }
                else
                {
                    if (!v6)
                        goto LABEL_10006a2a1;
                    if ((unsigned int)iter <= (unsigned int)ptr5 || (unsigned int)iter >= v6)
                        goto LABEL_10006a2ce;
                    v15 = ptr5 + 1;
                    cur += 2;
                    v9[(unsigned int)ptr5] = (char)((unsigned short)v5 >> 12) | 224;
                    ptr5 = v15 + 1;
                    iter += 2;
                    node += 2;
                    v9[(unsigned int)v15] = (char)((unsigned short)v5 >> 6) & 63 | 128;
                    v9[(unsigned int)ptr5] = (char)v5 & 63 | 128;
                }
                ptr5 += 1;
                cur += 1;
                iter += 1;
                node += 1;
LABEL_10006a2a1:
                v5 = 0;
                if (v7)
                    continue;
                goto LABEL_10006a2ad;
            }
            else
            {
LABEL_10006a2ad:
                v19 = *((short *)ptr3);
                if (v19 <= 127)
                {
                    if (v6)
                        v9[(unsigned int)ptr5] = *((char *)ptr3);
                    if ((unsigned int)cur < (unsigned int)ptr5)
                        goto LABEL_10006a2ce;
                    goto LABEL_10006a364;
                }
                if (v19 <= 2047)
                {
                    if (v6)
                    {
                        if ((unsigned int)cur <= (unsigned int)ptr5 || (unsigned int)cur >= v6)
                            goto LABEL_10006a2ce;
                        v20 = (char)(v19 >> 6) | 192;
                        v21 = ptr5;
                        goto LABEL_10006a343;
                    }
                    else
                    {
                        if ((unsigned int)iter >= (unsigned int)ptr5)
                        {
                            ptr5 = (unsigned int)ptr5 + 2;
                            cur = (unsigned int)cur + 2;
                            iter = (unsigned int)iter + 2;
                            node = (unsigned int)node + 2;
                            continue;
                        }
                        goto LABEL_10006a2ce;
                    }
                }
                else
                {
                    if (v6)
                    {
                        if ((unsigned int)iter <= (unsigned int)ptr5 || (unsigned int)iter >= v6)
                            goto LABEL_10006a2ce;
                        cur += 1;
                        v22 = ptr5 + 1;
                        iter += 1;
                        v9[(unsigned int)ptr5] = (char)(v19 >> 12) | 224;
                        node += 1;
                        v20 = (char)(*((short *)ptr3) >> 6) & 63 | 128;
                        v21 = v22;
LABEL_10006a343:
                        ptr5 = v21 + 1;
                        cur += 1;
                        v9[(unsigned int)v21] = v20;
                        iter += 1;
                        node += 1;
                        v9[(unsigned int)ptr5] = *((char *)ptr3) & 63 | 128;
LABEL_10006a364:
                        ptr5 += 1;
                        cur += 1;
                        iter += 1;
                        node += 1;
                        continue;
                    }
                    else if ((unsigned int)node < (unsigned int)ptr5)
                    {
LABEL_10006a2ce:
                        ptr4 += 1;
                        goto LABEL_10006a39a;
                    }
                    else
                    {
                        ptr5 = (unsigned int)ptr5 + 3;
                        cur = (unsigned int)cur + 3;
                        iter = (unsigned int)iter + 3;
                        node = (unsigned int)node + 3;
                    }
                }
            }
            ptr3 += 2;
        } while ((unsigned int)ptr4);
        goto LABEL_10006a39a;
    }
    ptr4 -= 1;
LABEL_10006a39a:
    if ((unsigned int)ptr4 < 0 && (unsigned short)v5)
    {
        if (!v6)
            goto LABEL_10006a402;
        if ((unsigned int)ptr5 + 2 > (unsigned int)ptr5 && (unsigned int)ptr5 + 2 < v6)
        {
            v24 = ptr5 + 1;
            v9[(unsigned int)ptr5] = (char)((unsigned short)v5 >> 12) | 224;
            v25 = v24 + 1;
            v9[(unsigned int)v24] = (char)((unsigned short)v5 >> 6) & 63 | 128;
            ptr5 = v25 + 1;
            v9[(unsigned int)v25] = (char)v5 & 63 | 128;
        }
        else
        {
            ptr4 += 1;
        }
    }
    if (v6 && (unsigned int)ptr4 >= 0)
        return;
LABEL_10006a402:
    if ((unsigned int)ptr5 >= 0)
        return;
    sub_100036284(2147500037); /* do not return */
}
