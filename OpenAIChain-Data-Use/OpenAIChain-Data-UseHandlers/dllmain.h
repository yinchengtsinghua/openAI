// dllmain.h: 模块类的声明。

class COpenAIChainDataUseHandlersModule : public ATL::CAtlDllModuleT<COpenAIChainDataUseHandlersModule>
{
public :
	DECLARE_LIBID(LIBID_OpenAIChainDataUseHandlersLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_OPENAICHAINDATAUSEHANDLERS, "{f6e36480-0448-42db-9ca0-aa11300e5fa6}")
};

extern class COpenAIChainDataUseHandlersModule _AtlModule;
