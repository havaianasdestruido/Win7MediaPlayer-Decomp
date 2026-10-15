/* interfaces.h — vtables recovered from the type libraries in wmpnetwk.exe.
 *
 * Each structure lists the vtable in slot order exactly as the type library
 * numbers it.  Slots 0-2 are IUnknown and (for dispinterfaces) slots 3-6 are
 * IDispatch; those are standard and are reproduced here for completeness, not
 * recovered from the library.  Every function below that point is a record of
 * the shipped library: name, memid, invocation kind, calling convention and the
 * rendered parameter list.  A parameter whose type could not be rendered from
 * the library's TYPEDESC is ``void *`` and carries a comment, and the total is
 * reported in analysis/report/validation.md.
 */
#ifndef WMP_RECON_INTERFACES_H
#define WMP_RECON_INTERFACES_H

#include "wmp_compat.h"

/* IUPnPService_ConnectionManager = {B78EA491-BC9E-446D-9A46-57C6D9D0FC7A} (TKIND_DISPATCH, 13 recovered functions, first recovered slot 7) */
typedef struct IUPnPService_ConnectionManager IUPnPService_ConnectionManager;
typedef struct IUPnPService_ConnectionManager_Vtbl {
    /* slots 0-2: IUnknown (standard) */
    wmp_hresult (*QueryInterface)(wmp_iunknown *self, const wmp_guid *riid, void **ppv);
    unsigned long (*AddRef)(wmp_iunknown *self);
    unsigned long (*Release)(wmp_iunknown *self);
    /* slots 3-6: IDispatch (standard) */
    wmp_hresult (*GetTypeInfoCount)(wmp_iunknown *self, unsigned int *pctinfo);
    wmp_hresult (*GetTypeInfo)(wmp_iunknown *self, unsigned int iTInfo, unsigned long lcid, void **ppTInfo);
    wmp_hresult (*GetIDsOfNames)(wmp_iunknown *self, const wmp_guid *riid, wchar_t **rgszNames, unsigned int cNames, unsigned long lcid, long *rgDispId);
    wmp_hresult (*Invoke)(wmp_iunknown *self, long dispIdMember, const wmp_guid *riid, unsigned long lcid, unsigned short wFlags, wmp_variant *pDispParams, wmp_variant *pVarResult, wmp_variant *pExcepInfo, unsigned int *puArgErr);
    /* slot   7  memid        1  INVOKE_PROPERTYGET   CC_STDCALL   SourceProtocolInfo */
    wmp_hresult (*SourceProtocolInfo_get)(void *self, wmp_bstr* pSourceProtocolInfo);
    /* slot   8  memid        2  INVOKE_PROPERTYGET   CC_STDCALL   SinkProtocolInfo */
    wmp_hresult (*SinkProtocolInfo_get)(void *self, wmp_bstr* pSinkProtocolInfo);
    /* slot   9  memid        3  INVOKE_PROPERTYGET   CC_STDCALL   CurrentConnectionIDs */
    wmp_hresult (*CurrentConnectionIDs_get)(void *self, wmp_bstr* pCurrentConnectionIDs);
    /* slot  10  memid        4  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_ConnectionStatus */
    wmp_hresult (*A_ARG_TYPE_ConnectionStatus_get)(void *self, wmp_bstr* pA_ARG_TYPE_ConnectionStatus);
    /* slot  11  memid        5  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_ConnectionManager */
    wmp_hresult (*A_ARG_TYPE_ConnectionManager_get)(void *self, wmp_bstr* pA_ARG_TYPE_ConnectionManager);
    /* slot  12  memid        6  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_Direction */
    wmp_hresult (*A_ARG_TYPE_Direction_get)(void *self, wmp_bstr* pA_ARG_TYPE_Direction);
    /* slot  13  memid        7  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_ProtocolInfo */
    wmp_hresult (*A_ARG_TYPE_ProtocolInfo_get)(void *self, wmp_bstr* pA_ARG_TYPE_ProtocolInfo);
    /* slot  14  memid        8  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_ConnectionID */
    wmp_hresult (*A_ARG_TYPE_ConnectionID_get)(void *self, long* pA_ARG_TYPE_ConnectionID);
    /* slot  15  memid        9  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_AVTransportID */
    wmp_hresult (*A_ARG_TYPE_AVTransportID_get)(void *self, long* pA_ARG_TYPE_AVTransportID);
    /* slot  16  memid       10  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_RcsID */
    wmp_hresult (*A_ARG_TYPE_RcsID_get)(void *self, long* pA_ARG_TYPE_RcsID);
    /* slot  17  memid       11  INVOKE_FUNC          CC_STDCALL   GetProtocolInfo */
    wmp_hresult (*GetProtocolInfo)(void *self, struct wmp_iunknown* punkRemoteEndpointInfo, wmp_bstr* pSource, wmp_bstr* pSink);
    /* slot  18  memid       12  INVOKE_FUNC          CC_STDCALL   GetCurrentConnectionIDs */
    wmp_hresult (*GetCurrentConnectionIDs)(void *self, struct wmp_iunknown* punkRemoteEndpointInfo, wmp_bstr* pConnectionIDs);
    /* slot  19  memid       13  INVOKE_FUNC          CC_STDCALL   GetCurrentConnectionInfo */
    wmp_hresult (*GetCurrentConnectionInfo)(void *self, struct wmp_iunknown* punkRemoteEndpointInfo, long ConnectionID, long* pRcsID, long* pAVTransportID, wmp_bstr* pProtocolInfo, wmp_bstr* pPeerConnectionManager, long* pPeerConnectionID, wmp_bstr* pDirection, wmp_bstr* pStatus);
} IUPnPService_ConnectionManager_Vtbl;

_Static_assert(sizeof(IUPnPService_ConnectionManager_Vtbl) / sizeof(void *) >= 20,
                "IUPnPService_ConnectionManager: recovered slots must cover the vtable prefix");

/* IUPnPService_ContentDirectory = {84535BBA-A68E-4839-82CF-2DCCAB12910A} (TKIND_DISPATCH, 22 recovered functions, first recovered slot 7) */
typedef struct IUPnPService_ContentDirectory IUPnPService_ContentDirectory;
typedef struct IUPnPService_ContentDirectory_Vtbl {
    /* slots 0-2: IUnknown (standard) */
    wmp_hresult (*QueryInterface)(wmp_iunknown *self, const wmp_guid *riid, void **ppv);
    unsigned long (*AddRef)(wmp_iunknown *self);
    unsigned long (*Release)(wmp_iunknown *self);
    /* slots 3-6: IDispatch (standard) */
    wmp_hresult (*GetTypeInfoCount)(wmp_iunknown *self, unsigned int *pctinfo);
    wmp_hresult (*GetTypeInfo)(wmp_iunknown *self, unsigned int iTInfo, unsigned long lcid, void **ppTInfo);
    wmp_hresult (*GetIDsOfNames)(wmp_iunknown *self, const wmp_guid *riid, wchar_t **rgszNames, unsigned int cNames, unsigned long lcid, long *rgDispId);
    wmp_hresult (*Invoke)(wmp_iunknown *self, long dispIdMember, const wmp_guid *riid, unsigned long lcid, unsigned short wFlags, wmp_variant *pDispParams, wmp_variant *pVarResult, wmp_variant *pExcepInfo, unsigned int *puArgErr);
    /* slot   7  memid        1  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_ObjectID */
    wmp_hresult (*A_ARG_TYPE_ObjectID_get)(void *self, wmp_bstr* pA_ARG_TYPE_ObjectID);
    /* slot   8  memid        2  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_Result */
    wmp_hresult (*A_ARG_TYPE_Result_get)(void *self, wmp_bstr* pA_ARG_TYPE_Result);
    /* slot   9  memid        3  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_SearchCriteria */
    wmp_hresult (*A_ARG_TYPE_SearchCriteria_get)(void *self, wmp_bstr* pA_ARG_TYPE_SearchCriteria);
    /* slot  10  memid        4  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_BrowseFlag */
    wmp_hresult (*A_ARG_TYPE_BrowseFlag_get)(void *self, wmp_bstr* pA_ARG_TYPE_BrowseFlag);
    /* slot  11  memid        5  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_Filter */
    wmp_hresult (*A_ARG_TYPE_Filter_get)(void *self, wmp_bstr* pA_ARG_TYPE_Filter);
    /* slot  12  memid        6  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_SortCriteria */
    wmp_hresult (*A_ARG_TYPE_SortCriteria_get)(void *self, wmp_bstr* pA_ARG_TYPE_SortCriteria);
    /* slot  13  memid        7  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_Index */
    wmp_hresult (*A_ARG_TYPE_Index_get)(void *self, unsigned long* pA_ARG_TYPE_Index);
    /* slot  14  memid        8  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_Count */
    wmp_hresult (*A_ARG_TYPE_Count_get)(void *self, unsigned long* pA_ARG_TYPE_Count);
    /* slot  15  memid        9  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_UpdateID */
    wmp_hresult (*A_ARG_TYPE_UpdateID_get)(void *self, unsigned long* pA_ARG_TYPE_UpdateID);
    /* slot  16  memid       10  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_TagValueList */
    wmp_hresult (*A_ARG_TYPE_TagValueList_get)(void *self, wmp_bstr* pA_ARG_TYPE_TagValueList);
    /* slot  17  memid       11  INVOKE_PROPERTYGET   CC_STDCALL   SearchCapabilities */
    wmp_hresult (*SearchCapabilities_get)(void *self, wmp_bstr* pSearchCapabilities);
    /* slot  18  memid       12  INVOKE_PROPERTYGET   CC_STDCALL   SortCapabilities */
    wmp_hresult (*SortCapabilities_get)(void *self, wmp_bstr* pSortCapabilities);
    /* slot  19  memid       13  INVOKE_PROPERTYGET   CC_STDCALL   SystemUpdateID */
    wmp_hresult (*SystemUpdateID_get)(void *self, unsigned long* pSystemUpdateID);
    /* slot  20  memid       14  INVOKE_PROPERTYGET   CC_STDCALL   ContainerUpdateIDs */
    wmp_hresult (*ContainerUpdateIDs_get)(void *self, wmp_bstr* pContainerUpdateIDs);
    /* slot  21  memid       15  INVOKE_PROPERTYGET   CC_STDCALL   X_RemoteSharingEnabled */
    wmp_hresult (*X_RemoteSharingEnabled_get)(void *self, wmp_variant_bool* pX_RemoteSharingEnabled);
    /* slot  22  memid       16  INVOKE_FUNC          CC_STDCALL   GetSearchCapabilities */
    wmp_hresult (*GetSearchCapabilities)(void *self, struct wmp_iunknown* punkRemoteEndpointInfo, wmp_bstr* pSearchCaps);
    /* slot  23  memid       17  INVOKE_FUNC          CC_STDCALL   GetSortCapabilities */
    wmp_hresult (*GetSortCapabilities)(void *self, struct wmp_iunknown* punkRemoteEndpointInfo, wmp_bstr* pSortCaps);
    /* slot  24  memid       18  INVOKE_FUNC          CC_STDCALL   GetSystemUpdateID */
    wmp_hresult (*GetSystemUpdateID)(void *self, struct wmp_iunknown* punkRemoteEndpointInfo, unsigned long* pId);
    /* slot  25  memid       19  INVOKE_FUNC          CC_STDCALL   Browse */
    wmp_hresult (*Browse)(void *self, struct wmp_iunknown* punkRemoteEndpointInfo, wmp_bstr ObjectID, wmp_bstr BrowseFlag, wmp_bstr Filter, unsigned long StartingIndex, unsigned long RequestedCount, wmp_bstr SortCriteria, wmp_bstr* pResult, unsigned long* pNumberReturned, unsigned long* pTotalMatches, unsigned long* pUpdateID);
    /* slot  26  memid       20  INVOKE_FUNC          CC_STDCALL   Search */
    wmp_hresult (*Search)(void *self, struct wmp_iunknown* punkRemoteEndpointInfo, wmp_bstr ContainerID, wmp_bstr SearchCriteria, wmp_bstr Filter, unsigned long StartingIndex, unsigned long RequestedCount, wmp_bstr SortCriteria, wmp_bstr* pResult, unsigned long* pNumberReturned, unsigned long* pTotalMatches, unsigned long* pUpdateID);
    /* slot  27  memid       21  INVOKE_FUNC          CC_STDCALL   UpdateObject */
    wmp_hresult (*UpdateObject)(void *self, struct wmp_iunknown* punkRemoteEndpointInfo, wmp_bstr ObjectID, wmp_bstr CurrentTagValue, wmp_bstr NewTagValue);
    /* slot  28  memid       22  INVOKE_FUNC          CC_STDCALL   X_GetRemoteSharingStatus */
    wmp_hresult (*X_GetRemoteSharingStatus)(void *self, struct wmp_iunknown* punkRemoteEndpointInfo, wmp_variant_bool* pX_RemoteSharingEnabled);
} IUPnPService_ContentDirectory_Vtbl;

_Static_assert(sizeof(IUPnPService_ContentDirectory_Vtbl) / sizeof(void *) >= 29,
                "IUPnPService_ContentDirectory: recovered slots must cover the vtable prefix");

/* IUPnPService_MediaReceiverRegistrar = {4250D219-06C7-4957-AEC3-6DA09B84BA22} (TKIND_DISPATCH, 11 recovered functions, first recovered slot 7) */
typedef struct IUPnPService_MediaReceiverRegistrar IUPnPService_MediaReceiverRegistrar;
typedef struct IUPnPService_MediaReceiverRegistrar_Vtbl {
    /* slots 0-2: IUnknown (standard) */
    wmp_hresult (*QueryInterface)(wmp_iunknown *self, const wmp_guid *riid, void **ppv);
    unsigned long (*AddRef)(wmp_iunknown *self);
    unsigned long (*Release)(wmp_iunknown *self);
    /* slots 3-6: IDispatch (standard) */
    wmp_hresult (*GetTypeInfoCount)(wmp_iunknown *self, unsigned int *pctinfo);
    wmp_hresult (*GetTypeInfo)(wmp_iunknown *self, unsigned int iTInfo, unsigned long lcid, void **ppTInfo);
    wmp_hresult (*GetIDsOfNames)(wmp_iunknown *self, const wmp_guid *riid, wchar_t **rgszNames, unsigned int cNames, unsigned long lcid, long *rgDispId);
    wmp_hresult (*Invoke)(wmp_iunknown *self, long dispIdMember, const wmp_guid *riid, unsigned long lcid, unsigned short wFlags, wmp_variant *pDispParams, wmp_variant *pVarResult, wmp_variant *pExcepInfo, unsigned int *puArgErr);
    /* slot   7  memid        1  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_DeviceID */
    wmp_hresult (*A_ARG_TYPE_DeviceID_get)(void *self, wmp_bstr* pA_ARG_TYPE_DeviceID);
    /* slot   8  memid        2  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_Result */
    wmp_hresult (*A_ARG_TYPE_Result_get)(void *self, long* pA_ARG_TYPE_Result);
    /* slot   9  memid        3  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_RegistrationReqMsg */
    wmp_hresult (*A_ARG_TYPE_RegistrationReqMsg_get)(void *self, wmp_safearray** pA_ARG_TYPE_RegistrationReqMsg);
    /* slot  10  memid        4  INVOKE_PROPERTYGET   CC_STDCALL   A_ARG_TYPE_RegistrationRespMsg */
    wmp_hresult (*A_ARG_TYPE_RegistrationRespMsg_get)(void *self, wmp_safearray** pA_ARG_TYPE_RegistrationRespMsg);
    /* slot  11  memid        7  INVOKE_PROPERTYGET   CC_STDCALL   AuthorizationGrantedUpdateID */
    wmp_hresult (*AuthorizationGrantedUpdateID_get)(void *self, unsigned long* pAuthorizationGrantedUpdateID);
    /* slot  12  memid        8  INVOKE_PROPERTYGET   CC_STDCALL   AuthorizationDeniedUpdateID */
    wmp_hresult (*AuthorizationDeniedUpdateID_get)(void *self, unsigned long* pAuthorizationDeniedUpdateID);
    /* slot  13  memid        9  INVOKE_PROPERTYGET   CC_STDCALL   ValidationSucceededUpdateID */
    wmp_hresult (*ValidationSucceededUpdateID_get)(void *self, unsigned long* pValidationSucceededUpdateID);
    /* slot  14  memid       10  INVOKE_PROPERTYGET   CC_STDCALL   ValidationRevokedUpdateID */
    wmp_hresult (*ValidationRevokedUpdateID_get)(void *self, unsigned long* pValidationRevokedUpdateID);
    /* slot  15  memid       11  INVOKE_FUNC          CC_STDCALL   IsAuthorized */
    wmp_hresult (*IsAuthorized)(void *self, struct wmp_iunknown* punkRemoteEndpointInfo, wmp_bstr DeviceID, long* pResult);
    /* slot  16  memid       12  INVOKE_FUNC          CC_STDCALL   RegisterDevice */
    wmp_hresult (*RegisterDevice)(void *self, struct wmp_iunknown* punkRemoteEndpointInfo, wmp_safearray* RegistrationReqMsg, wmp_variant* pRegistrationRespMsg);
    /* slot  17  memid       13  INVOKE_FUNC          CC_STDCALL   IsValidated */
    wmp_hresult (*IsValidated)(void *self, struct wmp_iunknown* punkRemoteEndpointInfo, wmp_bstr DeviceID, long* pResult);
} IUPnPService_MediaReceiverRegistrar_Vtbl;

_Static_assert(sizeof(IUPnPService_MediaReceiverRegistrar_Vtbl) / sizeof(void *) >= 18,
                "IUPnPService_MediaReceiverRegistrar: recovered slots must cover the vtable prefix");

#endif /* WMP_RECON_INTERFACES_H */
