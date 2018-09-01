

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for OpenAIChainDataUse.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __OpenAIChain2DData2DUse_h_h__
#define __OpenAIChain2DData2DUse_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IOpenAIChainDataUse_FWD_DEFINED__
#define __IOpenAIChainDataUse_FWD_DEFINED__
typedef interface IOpenAIChainDataUse IOpenAIChainDataUse;

#endif 	/* __IOpenAIChainDataUse_FWD_DEFINED__ */


#ifndef __COpenAIChainDataUseDoc_FWD_DEFINED__
#define __COpenAIChainDataUseDoc_FWD_DEFINED__

#ifdef __cplusplus
typedef class COpenAIChainDataUseDoc COpenAIChainDataUseDoc;
#else
typedef struct COpenAIChainDataUseDoc COpenAIChainDataUseDoc;
#endif /* __cplusplus */

#endif 	/* __COpenAIChainDataUseDoc_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __OpenAIChainDataUse_LIBRARY_DEFINED__
#define __OpenAIChainDataUse_LIBRARY_DEFINED__

/* library OpenAIChainDataUse */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_OpenAIChainDataUse;

#ifndef __IOpenAIChainDataUse_DISPINTERFACE_DEFINED__
#define __IOpenAIChainDataUse_DISPINTERFACE_DEFINED__

/* dispinterface IOpenAIChainDataUse */
/* [uuid] */ 


EXTERN_C const IID DIID_IOpenAIChainDataUse;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("ee50fa58-570c-4da2-90b8-3875b2ac6060")
    IOpenAIChainDataUse : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOpenAIChainDataUseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOpenAIChainDataUse * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOpenAIChainDataUse * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOpenAIChainDataUse * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOpenAIChainDataUse * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOpenAIChainDataUse * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOpenAIChainDataUse * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOpenAIChainDataUse * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOpenAIChainDataUseVtbl;

    interface IOpenAIChainDataUse
    {
        CONST_VTBL struct IOpenAIChainDataUseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOpenAIChainDataUse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOpenAIChainDataUse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOpenAIChainDataUse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOpenAIChainDataUse_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOpenAIChainDataUse_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOpenAIChainDataUse_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOpenAIChainDataUse_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOpenAIChainDataUse_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_COpenAIChainDataUseDoc;

#ifdef __cplusplus

class DECLSPEC_UUID("45a88bba-6a3c-4f17-861e-9261deb24cc6")
COpenAIChainDataUseDoc;
#endif
#endif /* __OpenAIChainDataUse_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


