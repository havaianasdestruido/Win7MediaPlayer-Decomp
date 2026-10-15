/* sub_100002e94 @ 0x100002e94
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100002e94  (99 bytes, 5 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 883d9616dfc7586fa88c58013f70e055df9328f3cfc3ef39898c15c6970fb0db
 *   Evidence: analysis/report/rea-evidence/wmplayer_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_0 *field_10;
} struct_1;

typedef struct struct_2 {
    char padding_0[3];
    char field_3;
} struct_2;

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
} struct_0;

long long sub_100002e94(unsigned long long a0, struct_1 *p, void* ptr)
{
    unsigned long long v1;  // r9
    struct_2 *addr;  // rcx

    v1 = a0;
    if ((*((char *)ptr) & 4))
        a0 = (int)ptr[4] + a0 & -((int)ptr[8]);
    addr = p->field_10->field_8 + p->field_8;
    if ((addr->field_3 & 15))
        v1 += addr->field_3 & 0xfffffff0;
    return sub_100002890(v1 ^ *((long long *)((*((int *)ptr) & 0xfffffff8) + a0)));
}
