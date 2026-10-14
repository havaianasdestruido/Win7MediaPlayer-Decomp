/* enums.h — enumerations recovered from the type libraries in wmpnssci.dll.
 * Values are the ones the shipped type library declares (VAR_CONST records);
 * the property/method memids next to them are the library's own.
 */
#ifndef WMP_RECON_ENUMS_H
#define WMP_RECON_ENUMS_H

#include <stdint.h>

/* ServiceStatus = {B78E1E54-0885-40C0-87BC-2E5B93C95F1C} */
typedef enum ServiceStatus {
    StatusUnknown = 0,  /* memid 1073741824, VT_I4 */
    StatusStopped = 1,  /* memid 1073741825, VT_I4 */
    StatusScanning = 2,  /* memid 1073741826, VT_I4 */
    StatusBusy = 3,  /* memid 1073741827, VT_I4 */
    StatusReady = 4,  /* memid 1073741828, VT_I4 */
} ServiceStatus;

/* EventReason = {31D0E2AD-8AE5-41CE-A743-B815F4279005} */
typedef enum EventReason {
    ReasonUnknown = 1000,  /* memid 1073741824, VT_I4 */
    ReasonDeviceAdded = 1001,  /* memid 1073741825, VT_I4 */
    ReasonDeviceRemoved = 1002,  /* memid 1073741826, VT_I4 */
    ReasonDeviceAuthorizationChanged = 1003,  /* memid 1073741827, VT_I4 */
    ReasonDevicePropertyChanged = 1004,  /* memid 1073741828, VT_I4 */
} EventReason;

/* AuthorizationStatus = {08933D12-EEED-4AD2-9238-4E916639D0C4} */
typedef enum AuthorizationStatus {
    Unknown = 0,  /* memid 1073741824, VT_I4 */
    Unauthorized = 1,  /* memid 1073741825, VT_I4 */
    Allowed = 2,  /* memid 1073741826, VT_I4 */
    Denied = 3,  /* memid 1073741827, VT_I4 */
} AuthorizationStatus;

#endif /* WMP_RECON_ENUMS_H */
