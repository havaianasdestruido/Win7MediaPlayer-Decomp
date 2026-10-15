/* guids.h — every COM GUID/UUID recovered from mpvis.DLL.
 *
 * Sources are named per constant:
 *   [typelib @0x...]  GUID and file offset read from the module's own MSFT
 *                     type library and confirmed as a 16-byte constant at that
 *                     offset by analysis/tools/typelib.py;
 *   [rgs]             GUID named by an ATL registrar script (text form);
 *   [string]          GUID found as a text literal by strings_scan.py.
 */
#ifndef WMP_RECON_GUIDS_H
#define WMP_RECON_GUIDS_H

#include "wmp_compat.h"

/* {0AA02E8D-F851-4CB0-9F64-BBA9BE7A983D} — typelib @0x12638 */
static const wmp_guid GUID_TOLERANCEVIS = { 0x0AA02E8D, 0xF851, 0x4CB0, { 0x9F, 0x64, 0xBB, 0xA9, 0xBE, 0x7A, 0x98, 0x3D } };

/* {9A85D909-C64A-4608-8DC4-76254D869553} — typelib @0x10e8 */
static const wmp_guid GUID_ITOLERANCEVIS = { 0x9A85D909, 0xC64A, 0x4608, { 0x8D, 0xC4, 0x76, 0x25, 0x4D, 0x86, 0x95, 0x53 } };

/* {C58F1580-0DF3-401C-93B1-2D9DDA61CF04} — typelib @0x12628 */
static const wmp_guid GUID__LIBRARY_ = { 0xC58F1580, 0x0DF3, 0x401C, { 0x93, 0xB1, 0x2D, 0x9D, 0xDA, 0x61, 0xCF, 0x04 } };

typedef struct wmp_guid_fact {
    const char *name;
    const wmp_guid *value;
    const unsigned char *packed;   /* 16 bytes, on-disk order */
    int         binary_confirmed;  /* 1 = found as bytes in the image */
} wmp_guid_fact;

#define WMP_GUID_COUNT 3u

static const unsigned char WMP_GUID_0_PACKED[16] = {
    0x8D, 0x2E, 0xA0, 0x0A, 0x51, 0xF8, 0xB0, 0x4C, 0x9F, 0x64, 0xBB, 0xA9,
    0xBE, 0x7A, 0x98, 0x3D,
};
static const unsigned char WMP_GUID_1_PACKED[16] = {
    0x09, 0xD9, 0x85, 0x9A, 0x4A, 0xC6, 0x08, 0x46, 0x8D, 0xC4, 0x76, 0x25,
    0x4D, 0x86, 0x95, 0x53,
};
static const unsigned char WMP_GUID_2_PACKED[16] = {
    0x80, 0x15, 0x8F, 0xC5, 0xF3, 0x0D, 0x1C, 0x40, 0x93, 0xB1, 0x2D, 0x9D,
    0xDA, 0x61, 0xCF, 0x04,
};

static const wmp_guid_fact WMP_GUIDS[WMP_GUID_COUNT ? WMP_GUID_COUNT : 1] = {
    { "{0AA02E8D-F851-4CB0-9F64-BBA9BE7A983D}", &GUID_TOLERANCEVIS, WMP_GUID_0_PACKED, 1 },
    { "{9A85D909-C64A-4608-8DC4-76254D869553}", &GUID_ITOLERANCEVIS, WMP_GUID_1_PACKED, 1 },
    { "{C58F1580-0DF3-401C-93B1-2D9DDA61CF04}", &GUID__LIBRARY_, WMP_GUID_2_PACKED, 1 },
};

#endif /* WMP_RECON_GUIDS_H */
