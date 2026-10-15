/* sub_100033bbc @ 0x100033bbc
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100033bbc  (455 bytes, 38 basic blocks)
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
    char padding_0[112];
    unsigned long long field_70;
    int field_78;
} struct_0;

typedef struct struct_1 {
    char padding_0[32];
    unsigned int field_20;
} struct_1;

unsigned int sub_100033bbc(struct_0 *ptr, long long a1, long long a2, unsigned int a3)
{
    unsigned int v3;  // ebx
    int v4;  // ebp
    int v5;  // edi
    unsigned long v6;  // rdx
    struct_0 *v7;  // rcx
    unsigned int v8;  // ebx
    unsigned int v9;  // ebx
    int v10;  // edx
    unsigned int v11;  // ebx
    struct_1 *p;  // rbx
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x48]

    v3 = 2147500037;
    sub_10002fbf0(&v0);
    sub_10002fbf0(&v1);
    if (!a1)
    {
        sub_100030020(&v1);
        sub_100030020(&v0);
        return 2147500035;
    }
    v4 = ptr->field_78;
    v5 = 0;
    if (v4 > 0)
    {
        do
        {
            if ((char)sub_10002fba4(*((long long *)sub_1000366dc(&ptr->padding_0[104], v5)), a1))
            {
                v6 = v5;
                v7 = &ptr->padding_0[104];
                if (a2)
                {
                    v3 = sub_10002fd60(sub_1000366dc(v7, v6) + 16, a2, 4294967295);
                    *((unsigned int *)(sub_1000366dc(&ptr->padding_0[104], v5) + 32)) = a3;
                    break;
                }
                else
                {
                    v3 = sub_10003662c(v7, v6);
                    break;
                }
            }
        } while ((v5 = (int)(v5 + 1), v5 < v4));
    }
    if (v5 != v4)
    {
        sub_100030020(&v1);
        sub_100030020(&v0);
        return v3;
    }
    if (a2)
    {
        v8 = sub_10002fd60(&v0, a1, 4294967295);
        if (v8 < 0)
        {
            sub_100030020(&v1);
            sub_100030020(&v0);
            return v8;
        }
        v9 = sub_10002fd60(&v1, a2, 4294967295);
        if (v9 < 0)
        {
            sub_100030020(&v1);
            sub_100030020(&v0);
            return v9;
        }
        v10 = *((int *)&ptr[1].padding_0[0]);
        if (ptr->field_78 == v10)
        {
            v11 = sub_1000367ac(&ptr->padding_0[104]);
            if (v11 < 0)
            {
                sub_100030020(&v1);
                sub_100030020(&v0);
                return v11;
            }
        }
        p = ptr->field_70 + ptr->field_78 * 40;
        sub_10002fd60(p, v0, 4294967295);
        sub_10002fd60(&p->padding_0[16], v1, 4294967295);
        p->field_20 = a3;
        ptr->field_78 = ptr->field_78 + 1;
    }
    sub_100030020(&v1);
    sub_100030020(&v0);
    return 0;
}
