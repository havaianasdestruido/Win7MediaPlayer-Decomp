/* sub_7ff2c17596c @ 0x7ff2c17596c
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c17596c  (619 bytes, 61 basic blocks)
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
    unsigned short field_0;
    unsigned short field_2;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_1;

unsigned long long sub_7ff2c17596c(struct_1 *p, struct_0 **ptr, char *addr)
{
    unsigned short v1[2];  // rax
    unsigned long v2;  // rbx
    unsigned int v3;  // eax
    unsigned short v4[2];  // rax
    unsigned short v5[2];  // rax
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    unsigned long v8;  // r11

    v1 = *(ptr);
    if (v1[0] == 123)
    {
        *(ptr) = &v1[1];
        return sub_7ff2c175c90();
    }
    if (v1[0] == 40)
    {
        *(ptr) = &v1[1];
        v2 = sub_7ff2c17501c();
        if ((unsigned int)v2 >= 0 && sub_7ff2c17501c(p, 17) >= 0)
        {
            if (!(!*(ptr)->field_0 || !((v3 = (unsigned int)(int)sub_7ff2c175090(p, ptr, addr), v3 >= 0))))
            {
LABEL_7ff2c175a16:
                if (v2 >= *((long long *)&p[1].field_0))
                    8792537709680();
                *((long long *)(p->field_8 + v2 * 16 + 8)) = v3;
                if (*(ptr)->field_0 == 41)
                {
                    *(ptr) = &*(ptr)->field_2;
                    return v2 & 4294967295;
                }
LABEL_7ff2c175a4d:
                p->field_0 = 3;
            }
            else if (!p->field_0)
            {
                if (*(ptr)->field_0 != 41)
                    goto LABEL_7ff2c175a4d;
                v3 = sub_7ff2c17501c(p, 0);
                if (v3 >= 0)
                    goto LABEL_7ff2c175a16;
            }
        }
    }
    else
    {
        if (v1[0] != 91)
        {
            if (v1[0] == 92)
            {
                *(ptr) = &v1[1];
                8792538349816();
            }
            else if (v1[0] == 33)
            {
                *(ptr) = &v1[1];
                return sub_7ff2c175eb4();
            }
            else
            {
                if (v1[0] == 125 || v1[0] == 93 || v1[0] == 41 || !v1[0])
                    return 4294967295;
                if (v1[0] == 46)
                {
                    v7 = sub_7ff2c17501c();
                    if (v7 >= 0)
                    {
                        *(addr) = 0;
                        *(ptr) = &*(ptr)->field_2;
                        return v7;
                    }
                }
                else if (v1[0] == 36 && !v1[1])
                {
                    v8 = sub_7ff2c17501c();
                    if ((unsigned int)v8 >= 0)
                    {
                        if (v8 >= *((long long *)&p[1].field_0))
                            8792537709680();
                        *((unsigned long *)(p->field_8 + v8 * 16 + 8)) = 0;
                        *(addr) = 0;
                        *(ptr) = &*(ptr)->field_2;
                        return v8 & 4294967295;
                    }
                }
                else
                {
                    v8 = sub_7ff2c17501c();
                    if ((unsigned int)v8 >= 0)
                    {
                        if (v8 >= *((long long *)&p[1].field_0))
                            8792537709680();
                        *((unsigned long long *)(p->field_8 + v8 * 16 + 8)) = *(ptr)->field_0;
                        *(addr) = 0;
                        *(ptr) = &*(ptr)->field_2;
                        return v8 & 4294967295;
                    }
                }
                return 4294967295;
            }
        }
        *(ptr) = &v1[1];
        *(addr) = 0;
        v5 = *(ptr);
        if (v5[0] == 93)
        {
LABEL_7ff2c175a78:
            *(ptr) = &v5[1];
            p->field_0 = 6;
        }
        else
        {
            if (v5[0] == 94)
                *(ptr) = &v5[1];
            v5 = *(ptr);
            if (v5[0] == 93)
                goto LABEL_7ff2c175a78;
            v6 = sub_7ff2c1761e0();
            v2 = v6;
            if (v6 < 0)
                return v6;
            v4 = *(ptr);
            if (*(ptr)->field_0 == 93)
            {
                *(ptr) = &v4[1];
                return v2 & 4294967295;
            }
            p->field_0 = 4;
        }
    }
    return 4294967295;
}
