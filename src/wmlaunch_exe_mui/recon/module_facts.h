/* module_facts.h — machine-readable restatement of the PE facts recovered
 * for bin/pt-BR/wmlaunch.exe.mui by analysis/tools/inventory.py.
 *
 * Every value here is data, not code.  recon/compile_check.c re-derives the
 * digests from the original file at run time and fails if anything differs.
 */
#ifndef WMP_RECON_MODULE_FACTS_H
#define WMP_RECON_MODULE_FACTS_H

#include "wmp_compat.h"

#define WMP_MODULE_NAME       "wmlaunch.exe.mui"
#define WMP_MODULE_REL_PATH   "bin/pt-BR/wmlaunch.exe.mui"
#define WMP_MODULE_BYTES      2048u
#define WMP_IMAGE_BASE        0x180000000ull
#define WMP_ENTRY_POINT_RVA   0x0u
#define WMP_SECTION_COUNT     1u
#define WMP_RESOURCE_COUNT    2u

/* SHA-256 of the original image (bin/wmlaunch.exe.mui). */
static const unsigned char WMP_IMAGE_SHA256[32] = {
    0xBD, 0xC4, 0xA2, 0x3D, 0x97, 0xDA, 0xFB, 0x70, 0xA4, 0xD6, 0xFE, 0x38,
    0xE8, 0x34, 0xCF, 0xCF, 0x0B, 0x24, 0x14, 0x56, 0x98, 0x2C, 0xB8, 0x7C,
    0xF0, 0x76, 0xE7, 0xC2, 0x17, 0x55, 0x3B, 0xD1,
};

typedef struct wmp_section_fact {
    const char   *name;
    unsigned long va;
    unsigned long virtual_size;
    unsigned long raw_pointer;
    unsigned long raw_size;
    double        entropy;
} wmp_section_fact;

static const wmp_section_fact WMP_SECTIONS[WMP_SECTION_COUNT] = {
    { ".rsrc", 0x1000u, 0x1000u, 0x200u, 0x600u, 3.8526 },
};

/* Resource payloads recovered by analysis/tools/resources.py.  The RVA is
 * translated through WMP_SECTIONS and the payload's SHA-256 is re-checked
 * against WMP_RESOURCE_SHA256 at run time. */
typedef struct wmp_resource_fact {
    const char   *type;
    const char   *name;
    unsigned long data_rva;
    unsigned long size;
    const unsigned char *sha256;
} wmp_resource_fact;

static const unsigned char WMP_RES_0_SHA256[32] = {
    0xF7, 0x4A, 0x64, 0xBC, 0xC0, 0xF2, 0xF9, 0x00, 0x86, 0x58, 0x3A, 0x96,
    0x22, 0xFD, 0xD6, 0x1E, 0xEA, 0x55, 0x16, 0x1D, 0x83, 0xEC, 0x0A, 0x28,
    0x33, 0x02, 0xFE, 0xA7, 0xC7, 0x25, 0xCC, 0x42,
};
static const unsigned char WMP_RES_1_SHA256[32] = {
    0x2F, 0xE3, 0x11, 0x2D, 0x88, 0xE7, 0x42, 0xBF, 0xFB, 0xF6, 0x2A, 0xCC,
    0x9C, 0xD1, 0x44, 0x70, 0x96, 0xA6, 0x0E, 0x9B, 0xD9, 0x92, 0x01, 0xBA,
    0xD2, 0x4B, 0x1A, 0x37, 0x8F, 0xAE, 0x17, 0x70,
};

static const wmp_resource_fact WMP_RESOURCES[WMP_RESOURCE_COUNT] = {
    { "MUI", "1", 0x10A8u, 176u, WMP_RES_0_SHA256 },
    { "RT_VERSION", "1", 0x1158u, 980u, WMP_RES_1_SHA256 },
};

#endif /* WMP_RECON_MODULE_FACTS_H */
