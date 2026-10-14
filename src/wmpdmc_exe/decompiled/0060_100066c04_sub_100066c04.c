/* sub_100066c04 @ 0x100066c04
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100066c04  (891 bytes, 57 basic blocks)
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

extern void g_100007668;
extern void g_100007b28;
extern unsigned int g_100013d20[3];

int sub_100066c04(void)
{
    uint128_t *addr;  // r8
    void* v14;  // rcx
    unsigned int v23;  // ebp
    int v24;  // esi
    unsigned int v25;  // ecx
    unsigned long v26;  // r9
    unsigned int v27;  // r10d
    unsigned long v28;  // r8
    unsigned int v29;  // eax
    unsigned long long v30;  // rbp
    int v31;  // eax
    unsigned long long v32;  // rsi
    unsigned int flag2;  // edx
    unsigned long long v34;  // rdx
    unsigned int v35;  // eax
    unsigned int v36;  // ebx
    unsigned int v37;  // eax
    unsigned int choice;  // ecx
    long long v39;  // rdx
    unsigned int p[3];  // r11
    unsigned int v42;  // ecx
    unsigned int v43;  // eax
    long long v44;  // rdx
    unsigned int v17;  // ecx
    unsigned int v18;  // ebx
    unsigned int v19;  // eax
    unsigned int v20;  // eax
    void* ptr;  // rdi
    unsigned int v22;  // eax
    long long v0;  // [bp-0xa8]
    unsigned int v1;  // [bp-0xa0]
    char *v2;  // [bp-0x98], Other Possible Types: unsigned int
    unsigned long long flag;  // [bp-0x90]
    unsigned int v4;  // [bp-0x88]
    int v5;  // [bp-0x68]
    unsigned int v6;  // [bp-0x68]
    unsigned int v7;  // [bp-0x64]
    unsigned int v8;  // [bp-0x60]
    unsigned int v9;  // [bp-0x5c]
    unsigned long v10;  // [bp+0x8]
    unsigned int v11;  // [bp+0x18]
    int v12;  // [bp+0x1c]

    v5 = (int)*(addr);
    if (!((char)v14[137] & 64))
        return;
    p = ((char)v14[137] < 0 ? &g_100013d20[0] : sub_100055880(v14, &g_100007b28, 0));
    v17 = p[0];
    v18 = p[2];
    if ((v17 & 4294967168) != 4294967168)
    {
        v19 = (v17 & 4294967168) - 1 ^ ~(v17) & 127;
        p[0] = v19;
        if (!(v19 & 4294967168))
            sub_100059224(p); /* do not return */
    }
    if ((32 & (char)v14[140]))
    {
        v20 = v18;
        if (!((char)v20 & 3))
        {
            v18 |= 2;
        }
        else if (((char)v20 & 3) == 2)
        {
            v18 &= 4294967293;
        }
    }
    ptr = sub_100055880(v14, &g_100007668, 0);
    v22 = *((int *)ptr) & 63;
    if (v22 == 5)
    {
        *((unsigned int *)&v0) = v18;
        sub_1000661a8(v14, v44, addr, ptr, v0); /* do not return */
    }
    if (v22 == 9 || v22 == 11)
    {
        v23 = 0;
        v24 = 0;
        v11 = 0;
        v12 = 0;
        if (v22 == 11)
        {
            v23 = (short)ptr[24];
            v24 = (short)ptr[26];
            v11 = v23;
            v12 = v24;
        }
        else if ((long long)ptr[16])
        {
            if ((int)sub_1000790a0((long long)ptr[16], &v10) >= 0)
            {
                v2 = &v11;
                v1 = 1;
                0x100200f00();
            }
            v23 = v11;
            v24 = v12;
        }
        v25 = *((unsigned int *)(&v5 + 8));
        v26 = *((unsigned int *)&v5);
        v27 = *((unsigned int *)(&v5 + 12));
        v28 = *((unsigned int *)(&v5 + 4));
        v29 = v25 - v26;
        v30 = (v29 < v23 ? v29 : v23);
        v31 = v27 - v28;
        v32 = (v31 < v24 ? v31 : v24);
        flag2 = v18 & 3;
        v34 = flag2 - 1;
        if (flag2 != 1)
        {
            if ((unsigned int)v34 != 1)
                goto LABEL_100066dc4;
            v26 = v25 - v30;
        }
        else
        {
            v35 = v25 - v30 - v26;
            v34 = v35 >> 31;
            v26 += (unsigned int)(v35 - v34) >> 1;
        }
        v6 = v26;
LABEL_100066dc4:
        v36 = v18 & 12;
        if (v36 != 4)
        {
            if (v36 != 8)
                goto LABEL_100066def;
            v28 = v27 - v32;
        }
        else
        {
            v37 = v27 - v32 - v28;
            v34 = v37 >> 31;
            v28 += (unsigned int)(v37 - v34) >> 1;
        }
        v7 = v28;
LABEL_100066def:
        if (((char)*((int *)ptr) & 63) == 11)
        {
            choice = (char)ptr[28] & 3;
            if (!choice)
            {
                4297066088();
            }
            else if (choice != 1)
            {
                if (choice == 2)
                {
                    v8 = (unsigned int)v30 + (unsigned int)v26;
                    v9 = (unsigned int)v32 + (unsigned int)v28;
                    v39 = _INSERT(v34, 0, ((char)(int)v14[140] & 32) == 32);
                    sub_100059a64(ptr, v39);
                    4297065880();
                }
            }
            else
            {
                if ((unsigned int)v30 && (unsigned int)v32)
                {
                    sub_100059a64(ptr, _INSERT(v34, 0, ((char)(int)v14[140] & 32) == 32));
                    v4 = 3;
                    flag = 0;
                    v2 = 0;
                    v1 = v32;
                    4297066272();
                }
            }
        }
        else
        {
            v8 = (unsigned int)v30 + (unsigned int)v26;
            v9 = (unsigned int)v32 + (unsigned int)v28;
            if ((long long)ptr[16] && (int)sub_1000790a0((long long)ptr[16], &v10) >= 0)
            {
                if (!(v10 & 0xffffffffffff0000))
                    sub_1000645dc(v10, v44, (int)ptr[24], (int)ptr[28], &v6);
                else
                    4295809746();
            }
        }
    }
    v42 = *((int *)ptr);
    if ((v42 & 4294967168) == 4294967168)
        return;
    v43 = (v42 & 4294967168) - 1 ^ ~(v42) & 127;
    *((unsigned int *)ptr) = v43;
    if ((v43 & 4294967168))
        return;
    sub_100059224(ptr); /* do not return */
}
