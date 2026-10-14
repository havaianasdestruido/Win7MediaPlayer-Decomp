/* guids.h — every COM GUID/UUID recovered from WMPSideShowGadget.exe.
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

typedef struct wmp_guid_fact {
    const char *name;
    const wmp_guid *value;
    const unsigned char *packed;   /* 16 bytes, on-disk order */
    int         binary_confirmed;  /* 1 = found as bytes in the image */
} wmp_guid_fact;

#define WMP_GUID_COUNT 1u

static const unsigned char WMP_GUID_0_PACKED[16] = {
    0x52, 0x2A, 0xF5, 0x6B, 0x4A, 0x39, 0xD3, 0x11, 0xB1, 0x53, 0x00, 0xC0,
    0x4F, 0x79, 0xFA, 0xA6,
};

static const wmp_guid_fact WMP_GUIDS[WMP_GUID_COUNT ? WMP_GUID_COUNT : 1] = {
    { "{6BF52A52-394A-11D3-B153-00C04F79FAA6}", &GUID_STRING_LITERAL, WMP_GUID_0_PACKED, 0 },
};

#endif /* WMP_RECON_GUIDS_H */
