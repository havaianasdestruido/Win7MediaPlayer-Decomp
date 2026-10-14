/* guids.h — every COM GUID/UUID recovered from wmpnscfg.exe.
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

/* 99F3D8BD-BAF1-4047-9FF5-A342AB0FC454 — string */
static const wmp_guid GUID_STRING_LITERAL = { 0x99f3d8bd, 0xbaf1, 0x4047, { 0x9F, 0xF5, 0xA3, 0x42, 0xAB, 0x0F, 0xC4, 0x54 } };

typedef struct wmp_guid_fact {
    const char *name;
    const wmp_guid *value;
    const unsigned char *packed;   /* 16 bytes, on-disk order */
    int         binary_confirmed;  /* 1 = found as bytes in the image */
} wmp_guid_fact;

#define WMP_GUID_COUNT 1u

static const unsigned char WMP_GUID_0_PACKED[16] = {
    0xBD, 0xD8, 0xF3, 0x99, 0xF1, 0xBA, 0x47, 0x40, 0x9F, 0xF5, 0xA3, 0x42,
    0xAB, 0x0F, 0xC4, 0x54,
};

static const wmp_guid_fact WMP_GUIDS[WMP_GUID_COUNT ? WMP_GUID_COUNT : 1] = {
    { "99F3D8BD-BAF1-4047-9FF5-A342AB0FC454", &GUID_STRING_LITERAL, WMP_GUID_0_PACKED, 0 },
};

#endif /* WMP_RECON_GUIDS_H */
