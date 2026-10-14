/* sub_7ff2c169c55 @ 0x7ff2c169c55
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c169c55  (538 bytes, 28 basic blocks)
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
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_2 {
    char padding_0[24];
    struct struct_3 *field_18;
} struct_2;

typedef struct struct_4 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_4;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern long long g_7ff2c161a50;
extern struct_2 *g_7ff2c181100;
extern struct_4 *g_7ff2c182e68;

long long sub_7ff2c169c55(unsigned long a0, unsigned long a1, long long a2, unsigned long long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, void* a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, int a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, unsigned long a28, unsigned long a29, unsigned long a30, unsigned long a31, unsigned long a32, unsigned long a33, unsigned long a34, unsigned long a35, unsigned long a36, unsigned long a37, unsigned long long a38, unsigned long a39, unsigned long a40, unsigned long a41, unsigned long a42, unsigned long a43, unsigned long a44, unsigned long a45, unsigned long a46, unsigned long a47)
{
    int v3;  // eax
    long long v4;  // r13
    struct_2 **v13;  // rcx
    struct_4 *v14;  // r15
    char v5;  // bl
    unsigned long long v6;  // rdi
    unsigned int v7;  // r14d
    void* ptr;  // rdx
    struct_0 **v9;  // rcx
    unsigned long long v10;  // rsi
    int v11;  // r12d
    int v12;  // eax
    char v0;  // [bp+0x0]
    long long v2;  // [bp+0x20]

    if (v3 >= (int)v4)
    {
        v6 = (-(0 < v5) & 4294967293) + 4;
        *((unsigned int *)&v2) = v6;
        a3 = 0xc0000000;
        a2 = L"S-1-5-80-2375682873-768044350-3534595160-1005545032-2873800392";
        if ((int)sub_7ff2c169788(a8, v7, L"S-1-5-80-2375682873-768044350-3534595160-1005545032-2873800392", 0xc0000000, v2) >= (int)v4)
        {
            sub_7ff2c16df64(&a8);
            sub_7ff2c16a618(&a8, v7); /* do not return */
        }
    }
    ptr = a8 - 24;
    InterlockedExchangeAdd(ptr + 16, 4294967295);
    if ((int)ptr[16] - 1 <= (int)v4)
    {
        v9 = *((long long *)ptr);
        (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
    }
    v10 = 2;
    if (v11 != (int)v4)
    {
        a11 = v4;
        8792538349888();
    }
    v12 = sub_7ff2c16a898(&a14);
    if (v12 >= (int)v4)
    {
        if (a14 != (int)v4)
        {
            if (v11 != (int)v4)
                sub_7ff2c16ab2c(v7, &vvar_112{r120|8b}); /* do not return */
            v12 = sub_7ff2c16b220(3, L"@FirewallAPI.dll,-31252", 0);
            if (v12 >= (int)v4)
            {
                a23 = v4;
                a24 = v4;
                *((unsigned int *)&a4) = 131078;
                *((int *)&v2) = v4;
                sub_7ff2c16d898(&v4, -2147483646, L"Software\\Microsoft\\MediaPlayer\\Preferences\\", 0, v2, a4, v4, v4); /* do not return */
            }
        }
        else
        {
            if (v11 != (int)v4)
            {
                v13 = &g_7ff2c181100;
                g_7ff2c181100->field_18();
            }
            a28 = v4;
            a29 = v4;
            a30 = v4;
            a18 = v4;
            8792538349936();
        }
    }
    if (g_7ff2c182e68 == v14 || !((char)v7 & g_7ff2c182e68->field_1c) || g_7ff2c182e68->field_19 < ((int)v4 <= v12 ? 5 : 2))
        return sub_7ff2c178780(a38 ^ &v0);
    sub_7ff2c1634e8(g_7ff2c182e68->field_10, 119, &g_7ff2c161a50, v12); /* do not return */
    return sub_7ff2c178780(a38 ^ &v0);
}
