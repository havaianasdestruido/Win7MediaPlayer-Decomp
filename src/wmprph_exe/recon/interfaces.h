/* interfaces.h — vtables recovered from the type libraries in wmprph.exe.
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

/* IWMPRichPreviewLauncher = {F826A914-4075-4672-8312-5F91CDF3C69E} (TKIND_DISPATCH, 4 recovered functions, first recovered slot 7) */
typedef struct IWMPRichPreviewLauncher IWMPRichPreviewLauncher;
typedef struct IWMPRichPreviewLauncher_Vtbl {
    /* slots 0-2: IUnknown (standard) */
    wmp_hresult (*QueryInterface)(wmp_iunknown *self, const wmp_guid *riid, void **ppv);
    unsigned long (*AddRef)(wmp_iunknown *self);
    unsigned long (*Release)(wmp_iunknown *self);
    /* slots 3-6: IDispatch (standard) */
    wmp_hresult (*GetTypeInfoCount)(wmp_iunknown *self, unsigned int *pctinfo);
    wmp_hresult (*GetTypeInfo)(wmp_iunknown *self, unsigned int iTInfo, unsigned long lcid, void **ppTInfo);
    wmp_hresult (*GetIDsOfNames)(wmp_iunknown *self, const wmp_guid *riid, wchar_t **rgszNames, unsigned int cNames, unsigned long lcid, long *rgDispId);
    wmp_hresult (*Invoke)(wmp_iunknown *self, long dispIdMember, const wmp_guid *riid, unsigned long lcid, unsigned short wFlags, wmp_variant *pDispParams, wmp_variant *pVarResult, wmp_variant *pExcepInfo, unsigned int *puArgErr);
    /* slot   7  memid 1610743808  INVOKE_FUNC          CC_STDCALL   LaunchFullPlayer */
    wmp_hresult (*LaunchFullPlayer)(void *self);
    /* slot   8  memid 1610743809  INVOKE_FUNC          CC_STDCALL   GetPreviewPaneColor */
    wmp_hresult (*GetPreviewPaneColor)(void *self, wmp_bstr* pbstrColor);
    /* slot   9  memid 1610743810  INVOKE_FUNC          CC_STDCALL   CreateThumbnail */
    wmp_hresult (*CreateThumbnail)(void *self, wmp_bstr* pbstrThumbName);
    /* slot  10  memid 1610743811  INVOKE_FUNC          CC_STDCALL   IsPerceivedTypeVideo */
    wmp_hresult (*IsPerceivedTypeVideo)(void *self, wmp_variant_bool* pbType);
} IWMPRichPreviewLauncher_Vtbl;

_Static_assert(sizeof(IWMPRichPreviewLauncher_Vtbl) / sizeof(void *) >= 11,
                "IWMPRichPreviewLauncher: recovered slots must cover the vtable prefix");

#endif /* WMP_RECON_INTERFACES_H */
