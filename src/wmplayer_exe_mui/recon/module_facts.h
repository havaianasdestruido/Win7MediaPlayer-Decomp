/* module_facts.h — machine-readable restatement of the PE facts recovered
 * for bin/pt-BR/wmplayer.exe.mui by analysis/tools/inventory.py.
 *
 * Every value here is data, not code.  recon/compile_check.c re-derives the
 * digests from the original file at run time and fails if anything differs.
 */
#ifndef WMP_RECON_MODULE_FACTS_H
#define WMP_RECON_MODULE_FACTS_H

#include "wmp_compat.h"

#define WMP_MODULE_NAME       "wmplayer.exe.mui"
#define WMP_MODULE_REL_PATH   "bin/pt-BR/wmplayer.exe.mui"
#define WMP_MODULE_BYTES      3072u
#define WMP_IMAGE_BASE        0x180000000ull
#define WMP_ENTRY_POINT_RVA   0x0u
#define WMP_SECTION_COUNT     1u
#define WMP_RESOURCE_COUNT    3u

/* SHA-256 of the original image (bin/wmplayer.exe.mui). */
static const unsigned char WMP_IMAGE_SHA256[32] = {
    0x27, 0xAD, 0x95, 0xB6, 0x13, 0x0D, 0x6F, 0x39, 0x4B, 0xF7, 0x4F, 0xE9,
    0xC5, 0x50, 0xCB, 0x65, 0xB1, 0x66, 0xF7, 0xB0, 0x53, 0x01, 0xAB, 0x5E,
    0xFF, 0xD0, 0xF5, 0xB4, 0xAE, 0x62, 0xA7, 0x14,
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
    { ".rsrc", 0x1000u, 0x1000u, 0x200u, 0xA00u, 3.6864 },
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
    0x67, 0x98, 0xA9, 0x9E, 0xB0, 0xDB, 0xBD, 0x58, 0x5A, 0xD0, 0xFD, 0x74,
    0x90, 0x14, 0x73, 0xD0, 0x8C, 0xE0, 0xD1, 0xEE, 0x53, 0x14, 0xA4, 0x2C,
    0x94, 0xA4, 0x79, 0x39, 0x45, 0xA6, 0xA7, 0x0F,
};
static const unsigned char WMP_RES_1_SHA256[32] = {
    0x64, 0x6B, 0xD5, 0xE6, 0x8E, 0x42, 0x9C, 0x2B, 0x9D, 0x15, 0xAF, 0x7F,
    0x08, 0xE6, 0x96, 0x51, 0xC8, 0x3F, 0x2E, 0xE9, 0x3D, 0x84, 0x10, 0x85,
    0xC4, 0xD5, 0x9B, 0xA1, 0x99, 0x04, 0xE4, 0x85,
};
static const unsigned char WMP_RES_2_SHA256[32] = {
    0x53, 0x95, 0x65, 0xFC, 0xBF, 0xBF, 0xBD, 0x41, 0xAC, 0x0F, 0x26, 0x44,
    0xBC, 0xBF, 0x55, 0xC7, 0x1A, 0x3C, 0x39, 0xB7, 0x93, 0x6F, 0x10, 0x00,
    0x38, 0x9F, 0x1D, 0x4A, 0x57, 0x25, 0xB6, 0x2F,
};

static const wmp_resource_fact WMP_RESOURCES[WMP_RESOURCE_COUNT] = {
    { "MUI", "1", 0x10F0u, 184u, WMP_RES_0_SHA256 },
    { "RT_MESSAGETABLE", "1", 0x11A8u, 1088u, WMP_RES_1_SHA256 },
    { "RT_VERSION", "1", 0x15E8u, 960u, WMP_RES_2_SHA256 },
};

#endif /* WMP_RECON_MODULE_FACTS_H */
