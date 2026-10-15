/* sub_10000d829 @ 0x10000d829
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10000d829  (230 bytes, 21 basic blocks)
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
    char padding_0[1];
    char field_1;
} struct_0;

int sub_10000d829(void)
{
    void* ptr4;  // rax
    char v3;  // bl
    char v4;  // 4113
    void* p;  // rax
    char v6;  // 4122
    unsigned long v7;  // cc_ndep
    unsigned long v8;  // 4149

    *((unsigned int *)ptr4) = *((int *)ptr4) + (unsigned int)ptr4;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)&ptr4[117]) = (char)ptr4[117] + v3;
    v4 = *((char *)ptr4);
    p = (void*)_INSERT(ptr4, 0, *((char *)&ptr4) + v4);
    *((unsigned int *)p) = *((int *)p) + (unsigned int)p;
    v6 = *((char *)p);
    *((char *)p) = *((char *)p) + *((char *)&ptr4) + v4;
    v8 = _ccall(0, 1, (unsigned long long)v6, (unsigned long long)(*((char *)(void*)&ptr4) + v4), v7);
    if (!((char)v8))
        [D] Unsupported jumpkind Ijk_NoDecode at address 4295022650()
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)&p[117]) = (char)p[117] + *((char *)&p);
}
