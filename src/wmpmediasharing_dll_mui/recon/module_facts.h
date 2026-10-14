/* module_facts.h — machine-readable restatement of the PE facts recovered
 * for bin/pt-BR/WMPMediaSharing.dll.mui by analysis/tools/inventory.py.
 *
 * Every value here is data, not code.  recon/compile_check.c re-derives the
 * digests from the original file at run time and fails if anything differs.
 */
#ifndef WMP_RECON_MODULE_FACTS_H
#define WMP_RECON_MODULE_FACTS_H

#include "wmp_compat.h"

#define WMP_MODULE_NAME       "WMPMediaSharing.dll.mui"
#define WMP_MODULE_REL_PATH   "bin/pt-BR/WMPMediaSharing.dll.mui"
#define WMP_MODULE_BYTES      2560u
#define WMP_IMAGE_BASE        0x180000000ull
#define WMP_ENTRY_POINT_RVA   0x0u
#define WMP_SECTION_COUNT     1u
#define WMP_RESOURCE_COUNT    3u

/* SHA-256 of the original image (bin/WMPMediaSharing.dll.mui). */
static const unsigned char WMP_IMAGE_SHA256[32] = {
    0x84, 0x21, 0x8D, 0x15, 0x00, 0x99, 0xD2, 0xBB, 0x3B, 0xDF, 0xD8, 0x74,
    0xB3, 0x66, 0x77, 0x0F, 0x68, 0x1C, 0x7F, 0x3A, 0xB9, 0x56, 0x95, 0x4A,
    0xEE, 0x64, 0xE4, 0x07, 0x89, 0xD9, 0x9A, 0xE6,
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
    { ".rsrc", 0x1000u, 0x1000u, 0x200u, 0x800u, 3.9484 },
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
    0xE5, 0xC4, 0xC0, 0xFF, 0xCB, 0x5B, 0xCB, 0xBC, 0x4D, 0xAC, 0x97, 0x7C,
    0x02, 0x23, 0xED, 0x3A, 0x54, 0x9A, 0xEA, 0x58, 0x73, 0x81, 0xF1, 0x23,
    0xA9, 0x76, 0x77, 0x72, 0x3D, 0x59, 0x2D, 0xF7,
};
static const unsigned char WMP_RES_1_SHA256[32] = {
    0xFF, 0x87, 0x2B, 0x40, 0x3F, 0xD1, 0xFE, 0xEF, 0xB0, 0x13, 0x6F, 0x65,
    0xB1, 0x9A, 0x7A, 0xAA, 0x9C, 0xE7, 0xF6, 0xE1, 0x4A, 0x08, 0xD2, 0x29,
    0x96, 0xBE, 0xBA, 0xBA, 0x24, 0xF6, 0xBB, 0xA7,
};
static const unsigned char WMP_RES_2_SHA256[32] = {
    0x1C, 0x92, 0x03, 0x75, 0xB8, 0xAA, 0xE9, 0x95, 0x16, 0x26, 0x2D, 0x48,
    0x8B, 0x7B, 0xF1, 0x3D, 0xD4, 0xFD, 0x74, 0xAE, 0x86, 0xC0, 0xAF, 0xBF,
    0x98, 0x38, 0xA0, 0x18, 0x00, 0x79, 0xA8, 0x9C,
};

static const wmp_resource_fact WMP_RESOURCES[WMP_RESOURCE_COUNT] = {
    { "MUI", "1", 0x10F0u, 176u, WMP_RES_0_SHA256 },
    { "RT_MESSAGETABLE", "1", 0x11A0u, 244u, WMP_RES_1_SHA256 },
    { "RT_VERSION", "1", 0x1294u, 1036u, WMP_RES_2_SHA256 },
};

#endif /* WMP_RECON_MODULE_FACTS_H */
