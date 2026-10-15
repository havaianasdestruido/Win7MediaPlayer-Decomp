/* guids.h — every COM GUID/UUID recovered from wmprph.exe.
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

/* {6BF52A52-394A-11D3-B153-00C04F79FAA6} — string */
static const wmp_guid GUID_STRING_LITERAL = { 0x6BF52A52, 0x394A, 0x11d3, { 0xB1, 0x53, 0x00, 0xC0, 0x4F, 0x79, 0xFA, 0xA6 } };

/* {F826A914-4075-4672-8312-5F91CDF3C69E} — typelib @0xd10 */
static const wmp_guid GUID_IWMPRICHPREVIEWLAUNCHER = { 0xF826A914, 0x4075, 0x4672, { 0x83, 0x12, 0x5F, 0x91, 0xCD, 0xF3, 0xC6, 0x9E } };

/* {FA258721-CF24-45D7-A9CB-80047D7FEC35} — typelib @0xcf0 */
static const wmp_guid GUID__LIBRARY_ = { 0xFA258721, 0xCF24, 0x45D7, { 0xA9, 0xCB, 0x80, 0x04, 0x7D, 0x7F, 0xEC, 0x35 } };

typedef struct wmp_guid_fact {
    const char *name;
    const wmp_guid *value;
    const unsigned char *packed;   /* 16 bytes, on-disk order */
    int         binary_confirmed;  /* 1 = found as bytes in the image */
} wmp_guid_fact;

#define WMP_GUID_COUNT 3u

static const unsigned char WMP_GUID_0_PACKED[16] = {
    0x52, 0x2A, 0xF5, 0x6B, 0x4A, 0x39, 0xD3, 0x11, 0xB1, 0x53, 0x00, 0xC0,
    0x4F, 0x79, 0xFA, 0xA6,
};
static const unsigned char WMP_GUID_1_PACKED[16] = {
    0x14, 0xA9, 0x26, 0xF8, 0x75, 0x40, 0x72, 0x46, 0x83, 0x12, 0x5F, 0x91,
    0xCD, 0xF3, 0xC6, 0x9E,
};
static const unsigned char WMP_GUID_2_PACKED[16] = {
    0x21, 0x87, 0x25, 0xFA, 0x24, 0xCF, 0xD7, 0x45, 0xA9, 0xCB, 0x80, 0x04,
    0x7D, 0x7F, 0xEC, 0x35,
};

static const wmp_guid_fact WMP_GUIDS[WMP_GUID_COUNT ? WMP_GUID_COUNT : 1] = {
    { "{6BF52A52-394A-11D3-B153-00C04F79FAA6}", &GUID_STRING_LITERAL, WMP_GUID_0_PACKED, 0 },
    { "{F826A914-4075-4672-8312-5F91CDF3C69E}", &GUID_IWMPRICHPREVIEWLAUNCHER, WMP_GUID_1_PACKED, 1 },
    { "{FA258721-CF24-45D7-A9CB-80047D7FEC35}", &GUID__LIBRARY_, WMP_GUID_2_PACKED, 1 },
};

#endif /* WMP_RECON_GUIDS_H */
