

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for OpenAIChainDataCollectHandlers.idl:
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

MIDL_DEFINE_GUID(IID, IID_IPreview,0x965e56b6,0xde11,0x461c,0x9b,0xbb,0xa0,0x98,0x09,0x46,0x4a,0x0f);


MIDL_DEFINE_GUID(IID, IID_IThumbnail,0xb924b036,0xf605,0x4fea,0x8e,0x92,0xfb,0x9d,0x60,0xdd,0xcf,0x1e);


MIDL_DEFINE_GUID(IID, IID_ISearch,0xe9131175,0x4467,0x4380,0x8b,0x1f,0x4e,0x32,0x2a,0x4c,0xf3,0xa7);


MIDL_DEFINE_GUID(IID, LIBID_OpenAIChainDataCollectHandlersLib,0xad28b7b6,0x8501,0x47db,0x8a,0xfc,0xf5,0x8c,0x4a,0xc0,0xab,0x09);


MIDL_DEFINE_GUID(CLSID, CLSID_Preview,0x7332bc04,0x880f,0x477c,0xb4,0x76,0x87,0x42,0xb0,0xa9,0x24,0xef);


MIDL_DEFINE_GUID(CLSID, CLSID_Thumbnail,0x52f43a2c,0x4a0e,0x493d,0x8e,0x41,0xca,0x53,0x7b,0xd0,0xee,0x85);


MIDL_DEFINE_GUID(CLSID, CLSID_Search,0xb6ac930c,0x7e2c,0x4f25,0x9d,0xec,0xe6,0x3c,0x72,0x45,0x3b,0x05);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



