/* sub_100118890 @ 0x100118890
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100118890  (2032 bytes, 93 basic blocks)
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

extern char g_100000000;

int sub_100118890(void)
{
    void* ptr;  // rcx
    unsigned int v6;  // eax
    unsigned long v15;  // rdi
    unsigned long v16;  // rdi
    unsigned int choice;  // edi
    unsigned int flag;  // edi
    unsigned int v19;  // edx
    unsigned int v20;  // ecx
    unsigned int v21;  // eax
    unsigned long long v22;  // rdi
    void* j;  // rax
    unsigned long v24;  // rcx
    unsigned int v7;  // r8d
    unsigned long v25;  // rbp
    void* cur;  // r11
    unsigned short v28;  // ax
    unsigned int v29;  // edx
    unsigned int v30;  // ecx
    unsigned int v31;  // eax
    unsigned long long v32;  // rdi
    void* k;  // rax
    unsigned long v34;  // rcx
    unsigned int v8;  // ecx
    unsigned long v35;  // r12
    void* iter;  // r11
    unsigned int v38;  // eax
    unsigned int v39;  // ecx
    unsigned int v40;  // edx
    unsigned int v41;  // ecx
    unsigned int v42;  // eax
    unsigned long long v43;  // rdi
    void* l;  // rax
    unsigned long long v9;  // rsi
    unsigned long v45;  // rcx
    unsigned long v46;  // rbp
    void* node;  // r11
    void* v49;  // rcx
    unsigned int v50;  // edx
    unsigned int v51;  // ecx
    unsigned int v52;  // eax
    unsigned long long v53;  // rdi
    void* m;  // rax
    void* i;  // rax
    unsigned long v55;  // rcx
    void* ptr4;  // r11
    unsigned int v58;  // edx
    unsigned int v59;  // ecx
    unsigned int v60;  // eax
    unsigned long long v61;  // rdi
    void* n;  // rax
    unsigned long v63;  // rcx
    void* ptr5;  // r11
    unsigned long v11;  // rcx
    unsigned int v66;  // edx
    unsigned int v67;  // ecx
    unsigned int v68;  // eax
    unsigned long long v69;  // rdi
    void* i0;  // rax
    unsigned long v71;  // rcx
    void* ptr6;  // r11
    unsigned int v74;  // edx
    unsigned long v12;  // rdi
    unsigned int v75;  // ecx
    unsigned int v76;  // eax
    unsigned long long v77;  // rdi
    void* i1;  // rax
    unsigned long v79;  // rcx
    void* ptr7;  // r11
    unsigned int v82;  // edx
    unsigned int v83;  // ecx
    unsigned int v84;  // eax
    void* ptr8;  // r11
    unsigned long long v85;  // rdi
    void* i2;  // rax
    unsigned long v87;  // rcx
    void* ptr9;  // r11
    unsigned int v0;  // [bp+0x8]
    unsigned short v1;  // [bp+0xc]
    unsigned int v2;  // [bp+0x10]
    unsigned short v3;  // [bp+0x14]
    long long v4;  // [bp+0x18], Other Possible Types: unsigned long long

    v6 = (short)ptr[336];
    v7 = (short)ptr[332];
    v8 = (short)ptr[334];
    v1 = (short)ptr[416];
    v9 = 0;
    for (i = ptr + 424; *((int *)i) > (short)((v1 * (v6 - v7 + 1) - 1 & 4294967295) / (v8 - v7 + 1 & 4294967295) & 4294967295); i += 8)
    {
        v9 += 1;
    }
    v11 = (int)v9;
    v12 = *((int *)(420 + (char *)ptr + 8 * v11));
    *((short *)((char *)&v0 + 2)) = *((short *)(416 + (char *)ptr + 8 * v11));
    *((short *)&v0) = *((short *)(424 + (char *)ptr + 8 * v11));
    v2 = v0;
    v3 = v1;
    sub_100119104(ptr, &v2);
    ptr8 = ptr + 416;
    do
    {
        *((unsigned int *)ptr8) = *((int *)ptr8) + 8;
        ptr8 += 8;
        v9 -= 1;
    } while ((unsigned int)v9);
    if ((int)ptr[416] > 3800)
        sub_1001187c0(ptr + 408);
    if ((unsigned int)v12)
    {
        v15 = v12 - 1;
        if ((unsigned int)v12 != 1)
        {
            v16 = v15 - 1;
            if ((unsigned int)v15 != 1)
            {
                choice = v16 - 1;
                if ((unsigned int)v16 != 1)
                {
                    flag = choice - 1;
                    if (choice != 1)
                    {
                        if (flag != 1)
                        {
                            if (flag == 2)
                            {
                                v19 = (short)ptr[332];
                                v20 = (short)ptr[3056];
                                v21 = (short)ptr[336];
                                v1 = v20;
                                v22 = 0;
                                for (j = ptr + 3064; *((int *)j) > (short)((v20 * (v21 - v19 + 1) - 1 & 4294967295) / ((short)ptr[334] - v19 + 1 & 4294967295) & 4294967295); j += 8)
                                {
                                    v22 += 1;
                                }
                                v24 = (int)v22;
                                v25 = *((int *)(3060 + (char *)ptr + 8 * v24));
                                *((short *)((char *)&v0 + 2)) = *((short *)(3056 + (char *)ptr + 8 * v24));
                                *((short *)&v0) = *((short *)(3064 + (char *)ptr + 8 * v24));
                                v2 = v0;
                                v3 = v1;
                                sub_100119104(ptr, &v2);
                                cur = ptr + 3056;
                                do
                                {
                                    *((unsigned int *)cur) = *((int *)cur) + 8;
                                    cur += 8;
                                    v22 -= 1;
                                } while ((unsigned int)v22);
                                if ((int)ptr[3056] > 3800)
                                    sub_1001187c0(ptr + 3048);
                                v28 = sub_100119088(ptr, *((int *)&(&g_100000000)[12160 + 4 * v25]));
                                v29 = (short)ptr[332];
                                v30 = (short)ptr[0xe00];
                                v1 = v30;
                                *((unsigned short *)&v4) = v28 + *((short *)(56 + (char *)ptr + 4 * v25)) + 5;
                                v31 = (short)ptr[336];
                                v32 = 0;
                                for (k = ptr + 3592; *((int *)k) > (short)((v30 * (v31 - v29 + 1) - 1 & 4294967295) / ((short)ptr[334] - v29 + 1 & 4294967295) & 4294967295); k += 8)
                                {
                                    v32 += 1;
                                }
                                v34 = (int)v32;
                                v35 = *((int *)(3588 + (char *)ptr + 8 * v34));
                                *((short *)((char *)&v0 + 2)) = *((short *)(0xe00 + (char *)ptr + 8 * v34));
                                *((short *)&v0) = *((short *)(3592 + (char *)ptr + 8 * v34));
                                v2 = v0;
                                v3 = v1;
                                sub_100119104(ptr, &v2);
                                iter = ptr + 0xe00;
                                do
                                {
                                    *((unsigned int *)iter) = *((int *)iter) + 8;
                                    iter += 8;
                                    v32 -= 1;
                                } while ((unsigned int)v32);
                                if ((int)ptr[0xe00] > 3800)
                                    sub_1001187c0(ptr + 3576);
                                v38 = sub_100119088(ptr, *((int *)&(&g_100000000)[12272 + 4 * v35]));
                                *((unsigned int *)((char *)&v4 + 4)) = v38 + *((int *)(164 + (char *)ptr + 4 * v35)) + 1;
                                sub_100118184(ptr, v4);
                                return;
                            }
                            else
                            {
                                return;
                            }
                        }
                        v40 = (short)ptr[332];
                        v41 = (short)ptr[4640];
                        *((unsigned short *)&v4) = 4;
                        v42 = (short)ptr[336];
                        v1 = v41;
                        v43 = 0;
                        for (l = ptr + 4648; *((int *)l) > (short)((v41 * (v42 - v40 + 1) - 1 & 4294967295) / ((short)ptr[334] - v40 + 1 & 4294967295) & 4294967295); l += 8)
                        {
                            v43 += 1;
                        }
                        v45 = (int)v43;
                        v46 = *((int *)(4644 + (char *)ptr + 8 * v45));
                        *((short *)((char *)&v0 + 2)) = *((short *)(4640 + (char *)ptr + 8 * v45));
                        *((short *)&v0) = *((short *)(4648 + (char *)ptr + 8 * v45));
                        v2 = v0;
                        v3 = v1;
                        sub_100119104(ptr, &v2);
                        node = ptr + 4640;
                        do
                        {
                            *((unsigned int *)node) = *((int *)node) + 8;
                            node += 8;
                            v43 -= 1;
                        } while ((unsigned int)v43);
                        if ((int)ptr[4640] > 3800)
                        {
                            v49 = ptr + 4632;
                            goto LABEL_100118d0b;
                        }
                    }
                    else
                    {
                        v50 = (short)ptr[332];
                        v51 = (short)ptr[4112];
                        *((unsigned short *)&v4) = 3;
                        v52 = (short)ptr[336];
                        v1 = v51;
                        v53 = 0;
                        for (m = ptr + 4120; *((int *)m) > (short)((v51 * (v52 - v50 + 1) - 1 & 4294967295) / ((short)ptr[334] - v50 + 1 & 4294967295) & 4294967295); m += 8)
                        {
                            v53 += 1;
                        }
                        v55 = (int)v53;
                        v46 = *((int *)(4116 + (char *)ptr + 8 * v55));
                        *((short *)((char *)&v0 + 2)) = *((short *)(4112 + (char *)ptr + 8 * v55));
                        *((short *)&v0) = *((short *)(4120 + (char *)ptr + 8 * v55));
                        v2 = v0;
                        v3 = v1;
                        sub_100119104(ptr, &v2);
                        ptr4 = ptr + 4112;
                        do
                        {
                            *((unsigned int *)ptr4) = *((int *)ptr4) + 8;
                            ptr4 += 8;
                            v53 -= 1;
                        } while ((unsigned int)v53);
                        if ((int)ptr[4112] > 3800)
                        {
                            v49 = ptr + 4104;
LABEL_100118d0b:
                            sub_1001187c0(v49);
                        }
                    }
                    v38 = sub_100119088(ptr, *((int *)&(&g_100000000)[12272 + 4 * v46]));
                    v39 = *((int *)(164 + (char *)ptr + 4 * v46));
                    *((unsigned int *)((char *)&v4 + 4)) = v38 + v39 + 1;
                    sub_100118184(ptr, v4);
                    return;
                }
                else
                {
                    v58 = (short)ptr[332];
                    v59 = (short)ptr[2528];
                    v60 = (short)ptr[336];
                    v1 = v59;
                    v61 = 0;
                    for (n = ptr + 2536; *((int *)n) > (short)((v59 * (v60 - v58 + 1) - 1 & 4294967295) / ((short)ptr[334] - v58 + 1 & 4294967295) & 4294967295); n += 8)
                    {
                        v61 += 1;
                    }
                    v63 = (int)v61;
                    *((short *)((char *)&v0 + 2)) = *((short *)(2528 + (char *)ptr + 8 * v63));
                    *((short *)&v0) = *((short *)(2536 + (char *)ptr + 8 * v63));
                    v2 = v0;
                    v3 = v1;
                    sub_100119104(ptr, &v2);
                    ptr5 = ptr + 2528;
                    do
                    {
                        *((unsigned int *)ptr5) = *((int *)ptr5) + 8;
                        ptr5 += 8;
                        v61 -= 1;
                    } while ((unsigned int)v61);
                    if ((int)ptr[2528] > 3800)
                        sub_1001187c0(ptr + 2520);
                }
            }
            else
            {
                v66 = (short)ptr[332];
                v67 = (short)ptr[2000];
                v68 = (short)ptr[336];
                v1 = v67;
                v69 = 0;
                for (i0 = ptr + 2008; *((int *)i0) > (short)((v67 * (v68 - v66 + 1) - 1 & 4294967295) / ((short)ptr[334] - v66 + 1 & 4294967295) & 4294967295); i0 += 8)
                {
                    v69 += 1;
                }
                v71 = (int)v69;
                *((short *)((char *)&v0 + 2)) = *((short *)(2000 + (char *)ptr + 8 * v71));
                *((short *)&v0) = *((short *)(2008 + (char *)ptr + 8 * v71));
                v2 = v0;
                v3 = v1;
                sub_100119104(ptr, &v2);
                ptr6 = ptr + 2000;
                do
                {
                    *((unsigned int *)ptr6) = *((int *)ptr6) + 8;
                    ptr6 += 8;
                    v69 -= 1;
                } while ((unsigned int)v69);
                if ((int)ptr[2000] > 3800)
                    sub_1001187c0(ptr + 1992);
            }
        }
        else
        {
            v74 = (short)ptr[332];
            v75 = (short)ptr[1472];
            v76 = (short)ptr[336];
            v1 = v75;
            v77 = 0;
            for (i1 = ptr + 1480; *((int *)i1) > (short)((v75 * (v76 - v74 + 1) - 1 & 4294967295) / ((short)ptr[334] - v74 + 1 & 4294967295) & 4294967295); i1 += 8)
            {
                v77 += 1;
            }
            v79 = (int)v77;
            *((short *)((char *)&v0 + 2)) = *((short *)(1472 + (char *)ptr + 8 * v79));
            *((short *)&v0) = *((short *)(1480 + (char *)ptr + 8 * v79));
            v2 = v0;
            v3 = v1;
            sub_100119104(ptr, &v2);
            ptr7 = ptr + 1472;
            do
            {
                *((unsigned int *)ptr7) = *((int *)ptr7) + 8;
                ptr7 += 8;
                v77 -= 1;
            } while ((unsigned int)v77);
            if ((int)ptr[1472] > 3800)
                sub_1001187c0(ptr + 1464);
        }
    }
    else
    {
        v82 = (short)ptr[332];
        v83 = (short)ptr[944];
        v84 = (short)ptr[336];
        v1 = v83;
        v85 = 0;
        for (i2 = ptr + 952; *((int *)i2) > (short)((v83 * (v84 - v82 + 1) - 1 & 4294967295) / ((short)ptr[334] - v82 + 1 & 4294967295) & 4294967295); i2 += 8)
        {
            v85 += 1;
        }
        v87 = (int)v85;
        *((short *)((char *)&v0 + 2)) = *((short *)(944 + (char *)ptr + 8 * v87));
        *((short *)&v0) = *((short *)(952 + (char *)ptr + 8 * v87));
        v2 = v0;
        v3 = v1;
        sub_100119104(ptr, &v2);
        ptr9 = ptr + 944;
        do
        {
            *((unsigned int *)ptr9) = *((int *)ptr9) + 8;
            ptr9 += 8;
            v85 -= 1;
        } while ((unsigned int)v85);
        if ((int)ptr[944] > 3800)
            sub_1001187c0(ptr + 936);
    }
    sub_100118268(ptr);
    return;
}
