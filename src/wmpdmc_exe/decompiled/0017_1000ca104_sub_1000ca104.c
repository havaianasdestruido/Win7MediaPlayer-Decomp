/* sub_1000ca104 @ 0x1000ca104
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000ca104  (2032 bytes, 93 basic blocks)
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

extern char g_100000000;

int sub_1000ca104(void* ptr)
{
    unsigned int v5;  // eax
    unsigned int v6;  // r8d
    unsigned long v15;  // rdi
    unsigned int choice;  // edi
    unsigned int flag;  // edi
    unsigned int v18;  // edx
    unsigned int v19;  // eax
    unsigned long long v20;  // rdi
    void* k;  // rax
    unsigned long v22;  // rcx
    unsigned long v23;  // rbp
    void* cur;  // r11
    unsigned int v7;  // ecx
    unsigned short v26;  // ax
    unsigned int v27;  // edx
    unsigned int v28;  // eax
    unsigned long long v29;  // rdi
    void* l;  // rax
    unsigned long v31;  // rcx
    unsigned long v32;  // r12
    void* iter;  // r11
    unsigned long long ptr10;  // rsi
    unsigned int v35;  // eax
    unsigned int v36;  // ecx
    unsigned int v37;  // edx
    unsigned int v38;  // eax
    unsigned long long v39;  // rdi
    void* m;  // rax
    unsigned long v41;  // rcx
    unsigned long v42;  // rbp
    void* node;  // r11
    void* i;  // rax
    void* v45;  // rcx
    unsigned int v46;  // edx
    unsigned int v47;  // eax
    unsigned long long v48;  // rdi
    void* n;  // rax
    unsigned long v50;  // rcx
    void* ptr4;  // r11
    unsigned int v53;  // edx
    unsigned int v54;  // eax
    unsigned long v10;  // rcx
    unsigned long long v55;  // rdi
    void* i0;  // rax
    unsigned long v57;  // rcx
    void* ptr5;  // r11
    unsigned int v60;  // edx
    unsigned int v61;  // eax
    unsigned long long v62;  // rdi
    void* i1;  // rax
    unsigned long v64;  // rcx
    unsigned long v11;  // rdi
    void* ptr6;  // r11
    unsigned int v67;  // edx
    unsigned int v68;  // eax
    unsigned long long v69;  // rdi
    void* i2;  // rax
    unsigned long v71;  // rcx
    void* ptr7;  // r11
    unsigned int v74;  // edx
    void* ptr8;  // r11
    unsigned int v75;  // eax
    unsigned long long v76;  // rdi
    void* i3;  // rax
    unsigned long v78;  // rcx
    void* ptr9;  // r11
    unsigned int j;  // eax
    unsigned long v14;  // rdi
    unsigned int v0;  // [bp+0x8]
    unsigned short v1;  // [bp+0xc]
    unsigned int v2;  // [bp+0x10]
    unsigned short v3;  // [bp+0x14]
    long long v4;  // [bp+0x18], Other Possible Types: unsigned long long

    v5 = (short)ptr[336];
    v6 = (short)ptr[332];
    v7 = (short)ptr[334];
    v1 = (short)ptr[416];
    ptr10 = 0;
    for (i = ptr + 424; *((int *)i) > (short)((v1 * (v5 - v6 + 1) - 1 & 4294967295) / (v7 - v6 + 1 & 4294967295) & 4294967295); i += 8)
    {
        ptr10 += 1;
    }
    v10 = (int)ptr10;
    v11 = *((int *)(420 + (char *)ptr + 8 * v10));
    *((short *)((char *)&v0 + 2)) = *((short *)(416 + (char *)ptr + 8 * v10));
    *((short *)&v0) = *((short *)(424 + (char *)ptr + 8 * v10));
    v2 = v0;
    v3 = v1;
    sub_1000ca978(ptr, &v2);
    ptr8 = ptr + 416;
    do
    {
        *((unsigned int *)ptr8) = *((int *)ptr8) + 8;
        j = ptr10;
        ptr8 += 8;
        ptr10 -= 1;
    } while (j);
    if ((int)ptr[416] > 3800)
        j = sub_1000ca034(ptr + 408);
    if ((unsigned int)v11)
    {
        v14 = v11 - 1;
        if ((unsigned int)v11 != 1)
        {
            v15 = v14 - 1;
            if ((unsigned int)v14 != 1)
            {
                choice = v15 - 1;
                if ((unsigned int)v15 != 1)
                {
                    flag = choice - 1;
                    if (choice != 1)
                    {
                        if (flag != 1)
                        {
                            if (flag == 2)
                            {
                                v18 = (short)ptr[332];
                                v19 = (short)ptr[336];
                                v1 = (short)ptr[3056];
                                v20 = 0;
                                for (k = ptr + 3064; *((int *)k) > (short)((v1 * (v19 - v18 + 1) - 1 & 4294967295) / ((short)ptr[334] - v18 + 1 & 4294967295) & 4294967295); k += 8)
                                {
                                    v20 += 1;
                                }
                                v22 = (int)v20;
                                v23 = *((int *)(3060 + (char *)ptr + 8 * v22));
                                *((short *)((char *)&v0 + 2)) = *((short *)(3056 + (char *)ptr + 8 * v22));
                                *((short *)&v0) = *((short *)(3064 + (char *)ptr + 8 * v22));
                                v2 = v0;
                                v3 = v1;
                                sub_1000ca978(ptr, &v2);
                                cur = ptr + 3056;
                                do
                                {
                                    *((unsigned int *)cur) = *((int *)cur) + 8;
                                    cur += 8;
                                    v20 -= 1;
                                } while ((unsigned int)v20);
                                if ((int)ptr[3056] > 3800)
                                    sub_1000ca034(ptr + 3048);
                                v26 = sub_1000ca8fc(ptr, *((int *)&(&g_100000000)[10032 + 4 * v23]));
                                v27 = (short)ptr[332];
                                v1 = (short)ptr[0xe00];
                                *((unsigned short *)&v4) = v26 + *((short *)(56 + (char *)ptr + 4 * v23)) + 5;
                                v28 = (short)ptr[336];
                                v29 = 0;
                                for (l = ptr + 3592; *((int *)l) > (short)((v1 * (v28 - v27 + 1) - 1 & 4294967295) / ((short)ptr[334] - v27 + 1 & 4294967295) & 4294967295); l += 8)
                                {
                                    v29 += 1;
                                }
                                v31 = (int)v29;
                                v32 = *((int *)(3588 + (char *)ptr + 8 * v31));
                                *((short *)((char *)&v0 + 2)) = *((short *)(0xe00 + (char *)ptr + 8 * v31));
                                *((short *)&v0) = *((short *)(3592 + (char *)ptr + 8 * v31));
                                v2 = v0;
                                v3 = v1;
                                sub_1000ca978(ptr, &v2);
                                iter = ptr + 0xe00;
                                do
                                {
                                    *((unsigned int *)iter) = *((int *)iter) + 8;
                                    iter += 8;
                                    v29 -= 1;
                                } while ((unsigned int)v29);
                                if ((int)ptr[0xe00] > 3800)
                                    sub_1000ca034(ptr + 3576);
                                v35 = sub_1000ca8fc(ptr, *((int *)&(&g_100000000)[10144 + 4 * v32]));
                                *((unsigned int *)((char *)&v4 + 4)) = v35 + *((int *)(164 + (char *)ptr + 4 * v32)) + 1;
                                return sub_1000c99f8(ptr, v4);
                            }
                            else
                            {
                                return j;
                            }
                        }
                        v37 = (short)ptr[332];
                        *((unsigned short *)&v4) = 4;
                        v38 = (short)ptr[336];
                        v1 = (short)ptr[4640];
                        v39 = 0;
                        for (m = ptr + 4648; *((int *)m) > (short)((v1 * (v38 - v37 + 1) - 1 & 4294967295) / ((short)ptr[334] - v37 + 1 & 4294967295) & 4294967295); m += 8)
                        {
                            v39 += 1;
                        }
                        v41 = (int)v39;
                        v42 = *((int *)(4644 + (char *)ptr + 8 * v41));
                        *((short *)((char *)&v0 + 2)) = *((short *)(4640 + (char *)ptr + 8 * v41));
                        *((short *)&v0) = *((short *)(4648 + (char *)ptr + 8 * v41));
                        v2 = v0;
                        v3 = v1;
                        sub_1000ca978(ptr, &v2);
                        node = ptr + 4640;
                        do
                        {
                            *((unsigned int *)node) = *((int *)node) + 8;
                            node += 8;
                            v39 -= 1;
                        } while ((unsigned int)v39);
                        if ((int)ptr[4640] > 3800)
                        {
                            v45 = ptr + 4632;
                            goto LABEL_1000ca57f;
                        }
                    }
                    else
                    {
                        v46 = (short)ptr[332];
                        *((unsigned short *)&v4) = 3;
                        v47 = (short)ptr[336];
                        v1 = (short)ptr[4112];
                        v48 = 0;
                        for (n = ptr + 4120; *((int *)n) > (short)((v1 * (v47 - v46 + 1) - 1 & 4294967295) / ((short)ptr[334] - v46 + 1 & 4294967295) & 4294967295); n += 8)
                        {
                            v48 += 1;
                        }
                        v50 = (int)v48;
                        v42 = *((int *)(4116 + (char *)ptr + 8 * v50));
                        *((short *)((char *)&v0 + 2)) = *((short *)(4112 + (char *)ptr + 8 * v50));
                        *((short *)&v0) = *((short *)(4120 + (char *)ptr + 8 * v50));
                        v2 = v0;
                        v3 = v1;
                        sub_1000ca978(ptr, &v2);
                        ptr4 = ptr + 4112;
                        do
                        {
                            *((unsigned int *)ptr4) = *((int *)ptr4) + 8;
                            ptr4 += 8;
                            v48 -= 1;
                        } while ((unsigned int)v48);
                        if ((int)ptr[4112] > 3800)
                        {
                            v45 = ptr + 4104;
LABEL_1000ca57f:
                            sub_1000ca034(v45);
                        }
                    }
                    v35 = sub_1000ca8fc(ptr, *((int *)&(&g_100000000)[10144 + 4 * v42]));
                    v36 = *((int *)(164 + (char *)ptr + 4 * v42));
                    *((unsigned int *)((char *)&v4 + 4)) = v35 + v36 + 1;
                    return sub_1000c99f8(ptr, v4);
                }
                else
                {
                    v53 = (short)ptr[332];
                    v54 = (short)ptr[336];
                    v1 = (short)ptr[2528];
                    v55 = 0;
                    for (i0 = ptr + 2536; *((int *)i0) > (short)((v1 * (v54 - v53 + 1) - 1 & 4294967295) / ((short)ptr[334] - v53 + 1 & 4294967295) & 4294967295); i0 += 8)
                    {
                        v55 += 1;
                    }
                    v57 = (int)v55;
                    *((short *)((char *)&v0 + 2)) = *((short *)(2528 + (char *)ptr + 8 * v57));
                    *((short *)&v0) = *((short *)(2536 + (char *)ptr + 8 * v57));
                    v2 = v0;
                    v3 = v1;
                    sub_1000ca978(ptr, &v2);
                    ptr5 = ptr + 2528;
                    do
                    {
                        *((unsigned int *)ptr5) = *((int *)ptr5) + 8;
                        ptr5 += 8;
                        v55 -= 1;
                    } while ((unsigned int)v55);
                    if ((int)ptr[2528] > 3800)
                        sub_1000ca034(ptr + 2520);
                }
            }
            else
            {
                v60 = (short)ptr[332];
                v61 = (short)ptr[336];
                v1 = (short)ptr[2000];
                v62 = 0;
                for (i1 = ptr + 2008; *((int *)i1) > (short)((v1 * (v61 - v60 + 1) - 1 & 4294967295) / ((short)ptr[334] - v60 + 1 & 4294967295) & 4294967295); i1 += 8)
                {
                    v62 += 1;
                }
                v64 = (int)v62;
                *((short *)((char *)&v0 + 2)) = *((short *)(2000 + (char *)ptr + 8 * v64));
                *((short *)&v0) = *((short *)(2008 + (char *)ptr + 8 * v64));
                v2 = v0;
                v3 = v1;
                sub_1000ca978(ptr, &v2);
                ptr6 = ptr + 2000;
                do
                {
                    *((unsigned int *)ptr6) = *((int *)ptr6) + 8;
                    ptr6 += 8;
                    v62 -= 1;
                } while ((unsigned int)v62);
                if ((int)ptr[2000] > 3800)
                    sub_1000ca034(ptr + 1992);
            }
        }
        else
        {
            v67 = (short)ptr[332];
            v68 = (short)ptr[336];
            v1 = (short)ptr[1472];
            v69 = 0;
            for (i2 = ptr + 1480; *((int *)i2) > (short)((v1 * (v68 - v67 + 1) - 1 & 4294967295) / ((short)ptr[334] - v67 + 1 & 4294967295) & 4294967295); i2 += 8)
            {
                v69 += 1;
            }
            v71 = (int)v69;
            *((short *)((char *)&v0 + 2)) = *((short *)(1472 + (char *)ptr + 8 * v71));
            *((short *)&v0) = *((short *)(1480 + (char *)ptr + 8 * v71));
            v2 = v0;
            v3 = v1;
            sub_1000ca978(ptr, &v2);
            ptr7 = ptr + 1472;
            do
            {
                *((unsigned int *)ptr7) = *((int *)ptr7) + 8;
                ptr7 += 8;
                v69 -= 1;
            } while ((unsigned int)v69);
            if ((int)ptr[1472] > 3800)
                sub_1000ca034(ptr + 1464);
        }
    }
    else
    {
        v74 = (short)ptr[332];
        v75 = (short)ptr[336];
        v1 = (short)ptr[944];
        v76 = 0;
        for (i3 = ptr + 952; *((int *)i3) > (short)((v1 * (v75 - v74 + 1) - 1 & 4294967295) / ((short)ptr[334] - v74 + 1 & 4294967295) & 4294967295); i3 += 8)
        {
            v76 += 1;
        }
        v78 = (int)v76;
        *((short *)((char *)&v0 + 2)) = *((short *)(944 + (char *)ptr + 8 * v78));
        *((short *)&v0) = *((short *)(952 + (char *)ptr + 8 * v78));
        v2 = v0;
        v3 = v1;
        sub_1000ca978(ptr, &v2);
        ptr9 = ptr + 944;
        do
        {
            *((unsigned int *)ptr9) = *((int *)ptr9) + 8;
            ptr9 += 8;
            v76 -= 1;
        } while ((unsigned int)v76);
        if ((int)ptr[944] > 3800)
            sub_1000ca034(ptr + 936);
    }
    return sub_1000c9adc(ptr);
}
