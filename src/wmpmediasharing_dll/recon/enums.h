/* enums.h — enumerations recovered from the type libraries in WMPMediaSharing.dll.
 * Values are the ones the shipped type library declares (VAR_CONST records);
 * the property/method memids next to them are the library's own.
 */
#ifndef WMP_RECON_ENUMS_H
#define WMP_RECON_ENUMS_H

#include <stdint.h>

/* WindowsMediaLibrarySharingDeviceAuthorizationStatus = None */
typedef enum WindowsMediaLibrarySharingDeviceAuthorizationStatus {
    DEVICE_AUTHORIZATION_UNKNOWN = 0,  /* memid 1073741824, VT_I4 */
    DEVICE_AUTHORIZATION_ALLOWED = 1,  /* memid 1073741825, VT_I4 */
    DEVICE_AUTHORIZATION_DENIED = 2,  /* memid 1073741826, VT_I4 */
} WindowsMediaLibrarySharingDeviceAuthorizationStatus;

#endif /* WMP_RECON_ENUMS_H */
