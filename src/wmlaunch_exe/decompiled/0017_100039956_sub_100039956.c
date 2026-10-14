/* sub_100039956 @ 0x100039956
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100039956  (319 bytes, 32 basic blocks)
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
    char padding_0[2];
    unsigned short field_2;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
} struct_1;

long long sub_100039956(void)
{
    struct_0 *v2;  // rax
    struct_0 *v3;  // r14
    unsigned long long v12;  // r9
    void* cur;  // rax
    struct_0 *v4;  // rdi
    unsigned long v5;  // r12
    unsigned int v6;  // eax
    struct_1 *ptr;  // rsi
    struct_0 *iter;  // rbx
    struct_0 *index;  // rax
    struct_0 *v10;  // rcx
    struct_0 *v11;  // rdi
    unsigned short v1;  // [bp+0x20]

    if (v2 == v3 || v4 < v2)
    {
        v6 = &v4->padding_0[-1 * v5] >> 1;
        ptr->field_8 = v6;
        if (v6 > (unsigned int)v3)
            ptr->field_0 = v5;
        iter = &v4->field_2;
        if (iter->padding_0 == 47)
        {
            do
            {
                iter = &iter->field_2;
            } while (iter->padding_0 == 47);
        }
        else
        {
            if (iter->padding_0 != 92)
                goto LABEL_0x100039ba7;
            do
            {
                iter = &iter->field_2;
            } while (iter->padding_0 == 92);
        }
        if (v6 == 4)
            4296016752();
        index = ptr->field_8;
        if ((unsigned int)index > (unsigned int)v3)
        {
            v10 = 0x20;
            if ((unsigned int)index < 32)
            {
                if (index > 0x7ffffffe)
                {
                    v1 = *((unsigned short *)&v3);
                }
                else
                {
                    v11 = index;
                    v12 = ptr->field_0 - (char *)&v1;
                    cur = &v1;
                    do
                    {
                    } while (v11 != v3 && *((short *)(v12 + (char *)cur)) != *((unsigned short *)&v3) && (v10 -= 1, *((short *)cur) = *((short *)(v12 + (char *)cur)), v11 -= 1, cur += 2, v10 != v3));
                    if (v10 == v3)
                        cur -= 2;
                    *((unsigned short *)cur) = *((unsigned short *)&v3);
                }
                *((unsigned short *)((char *)&v1 + 0x2 * index)) = *((unsigned short *)&v3);
                if ((char)sub_100039e10(&v1) != *((char *)&v3))
                    4296016536();
                if (0)
                    goto LABEL_0x100039bb3;
                if (iter == v3)
                    goto LABEL_0x100039bb3;
                if (ptr->field_8 != 4)
                    4296016536();
                4296016752();
            }
        }
    }
}
