/* sub_1000340b0 @ 0x1000340b0
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x1000340b0  (259 bytes, 25 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 8ea713b95f32c31a11bb1dded4cc8b9620014600f122fff3852c082d9af67b1b
 *   Evidence: analysis/report/rea-evidence/wmlaunch_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[40];
    struct struct_1 *field_28;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

unsigned long long sub_1000340b0(struct_0 *p, unsigned short *a1)
{
    unsigned short *v3;  // rbx
    unsigned short *ptr;  // rdx
    char v5;  // al
    unsigned short *v6;  // rdi
    unsigned long long cur;  // rcx
    void* v8;  // rax
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x18]

    v3 = a1;
    sub_10002fbf0(&v0);
    sub_10002fbf0(&v1);
    if (!v3)
    {
        sub_100030020(&v1);
        sub_100030020(&v0);
        return 2147500035;
    }
    ptr = &p->field_28->field_0;
    v5 = 0;
    if (ptr)
        v5 = *(ptr);
    if (!v5)
    {
        sub_100030020(&v1);
        sub_100030020(&v0);
        return 2147549183;
    }
    v6 = v3;
    do
    {
        if (false)
            break;
    } while (*(v6));
    for (cur = ~(18446744073709551615) - 1 & 4294967295; *(v3) == 47 || *(v3) == 92; cur += 4294967295)
    {
        v3 += 1;
    }
    if ((unsigned int)cur > 0)
    {
        v8 = &v3[(unsigned int)cur + 1];
        do
        {
        } while ((*((short *)v8) == 47 || *((short *)v8) == 92) && (cur += 4294967295, v8 -= 2, (unsigned int)cur > 0));
        if ((unsigned int)cur > 0)
            sub_100039c5c(ptr); /* do not return */
    }
    sub_100030020(&v1);
    sub_100030020(&v0);
    return 0;
}
