/* sub_7ff3b1572ac @ 0x7ff3b1572ac
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b1572ac  (463 bytes, 38 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962
 *   Evidence: analysis/report/rea-evidence/wmpnssci_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_9 {
    char padding_0[8];
    struct struct_10 *field_8;
} struct_9;

typedef struct struct_7 {
    char padding_0[8];
    struct struct_8 *field_8;
} struct_7;

typedef struct struct_5 {
    char padding_0[8];
    struct struct_6 *field_8;
} struct_5;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_7ff3b131eb0;
extern struct_0 *g_7ff3b17be78;

int sub_7ff3b1572ac(void)
{
    unsigned int v8;  // eax
    unsigned int v9;  // eax
    void* v18;  // rsi
    unsigned long long v19;  // rdi
    void* v20;  // rsi
    void* ptr;  // rdx
    struct_9 **v25;  // rcx
    void* p;  // rdx
    struct_7 **v27;  // rcx
    unsigned long long v10;  // cc_ndep
    void* addr;  // rdx
    struct_5 **v29;  // rcx
    unsigned int v11;  // ebx
    unsigned int v12;  // eax
    void* v13;  // rsi
    unsigned int v16;  // r15d
    unsigned int v17;  // eax
    void* v1;  // [bp+0x30]
    void* v2;  // [bp+0x38]
    void* v3;  // [bp+0x50]
    char v4;  // [bp+0x58]
    char v5;  // [bp+0x98]
    unsigned int v6;  // [bp+0x110]
    unsigned int v7;  // [bp+0x118]

    if (!v8)
    {
        v9 = v6 - 4;
        v10 = 0 < v9;
        v11 = -(0 < v9) & 13;
    }
    if (g_7ff3b17be78 != &g_7ff3b17be78 && (g_7ff3b17be78->field_1c & 2) && g_7ff3b17be78->field_19 >= 4)
        sub_7ff3b1388d4(g_7ff3b17be78->field_10, 33, &g_7ff3b131eb0, v11); /* do not return */
    if (!v11)
        sub_7ff3b15dbe8(&v4, "I", &v3); /* do not return */
    v12 = 0;
    v13 = v1;
    do
    {
        if (false)
            break;
    } while (*((short *)v13) == 105);
    if (!v12)
    {
        sub_7ff3b13a560(&v1);
        if (g_7ff3b17be78 != &g_7ff3b17be78 && (g_7ff3b17be78->field_1c & 2) && g_7ff3b17be78->field_19 >= 4)
            sub_7ff3b134f88(g_7ff3b17be78->field_10, 37, &g_7ff3b131eb0); /* do not return */
    }
    v17 = 0;
    v18 = v2;
    do
    {
        if (false)
            break;
        v19 = L"gnored";
        v20 = v18 + 2;
    } while (*((short *)v18) == 105);
    if (!v17)
    {
        sub_7ff3b13a560(&v2);
        if (g_7ff3b17be78 != &g_7ff3b17be78 && (g_7ff3b17be78->field_1c & 2) && g_7ff3b17be78->field_19 >= 4)
            sub_7ff3b134f88(g_7ff3b17be78->field_10, 38, &g_7ff3b131eb0); /* do not return */
    }
    if (!v11)
        sub_7ff3b14b0c8(&v5, v7, v3, v1, v2); /* do not return */
    ptr = v2 - 24;
    InterlockedExchangeAdd(ptr + 16, v16);
    if ((int)ptr[16] + v16 <= 0)
    {
        v25 = *((long long *)ptr);
        (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
    }
    p = v1 - 24;
    InterlockedExchangeAdd(p + 16, v16);
    if ((int)p[16] + v16 <= 0)
    {
        v27 = *((long long *)p);
        (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
    }
    addr = v3 - 24;
    InterlockedExchangeAdd(addr + 16, v16);
    if ((int)addr[16] + v16 <= 0)
    {
        v29 = *((long long *)addr);
        (*((long long *)(*((long long *)*((long long *)addr)) + 8)))();
    }
}
