

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for OpenAIChainDataUseHandlers.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IPreview,0x33ea96c3,0x62ea,0x4493,0x9e,0x34,0xd8,0xd3,0xca,0xeb,0x61,0xe4);


MIDL_DEFINE_GUID(IID, IID_IThumbnail,0xd859f370,0xfefb,0x4f09,0xa8,0xbd,0xc1,0xc5,0xf0,0x11,0x01,0x06);


MIDL_DEFINE_GUID(IID, IID_ISearch,0x5cc0e9ca,0xe6ec,0x4672,0x84,0x33,0x4b,0x08,0x5b,0xb9,0x38,0xed);


MIDL_DEFINE_GUID(IID, LIBID_OpenAIChainDataUseHandlersLib,0x290bef30,0xe5c4,0x485a,0x84,0x28,0xcf,0x77,0x4f,0x45,0x72,0x09);


MIDL_DEFINE_GUID(CLSID, CLSID_Preview,0x89e80d73,0x208f,0x4596,0x9b,0x1c,0x13,0x3d,0x08,0xba,0x34,0xf7);


MIDL_DEFINE_GUID(CLSID, CLSID_Thumbnail,0xf29f2a65,0x428d,0x49b9,0x91,0x1f,0xab,0x84,0x3c,0xfb,0xaf,0x2f);


MIDL_DEFINE_GUID(CLSID, CLSID_Search,0x7ded327a,0x9277,0x408d,0x99,0x4a,0x9d,0x0c,0x53,0x46,0xfa,0xbb);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



