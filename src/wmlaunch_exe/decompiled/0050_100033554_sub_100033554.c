/* sub_100033554 @ 0x100033554
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100033554  (250 bytes, 19 basic blocks)
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
    char padding_0[56];
    void* field_38;
} struct_0;

extern char g_10003e740;

unsigned int sub_100033554(struct_0 *p)
{
    unsigned int v2;  // ebx
    void* ptr;  // r9
    char v4;  // al
    unsigned long addr;  // rsi
    unsigned int v6;  // ebx
    char v0;  // [bp-0x18]

    v2 = 0;
    sub_10002fbf0(&v0);
    if (!(char)sub_100033ebc(p, "f"))
    {
        v6 = ((char)sub_100033ebc(p, L"wmpcd") ? 5 : 0);
        sub_100030020(&v0);
        return v6;
    }
    ptr = p->field_38;
    if ((char)sub_100039db8(ptr))
    {
        sub_100030020(&v0);
        return 4;
    }
    v4 = 0;
    if (ptr)
        v4 = *((short *)ptr);
    if (v4 && (unsigned short)*((char *)ptr) == *((short *)ptr))
    {
        addr = *((char *)ptr);
        if ((&g_10003e740)[addr] > 0)
        {
            v2 = (&g_10003e740)[addr];
            if (v2)
            {
                sub_100030020(&v0);
                return v2;
            }
        }
    }
    if ((int)sub_10002fd60(&v0, ptr, 3) < 0)
    {
        sub_100030020(&v0);
        return v2;
    }
    4296015984();
}
