extern "C" {
	#include "bit32.h"
}

#ifdef _WIN32
	#define DLL_EXPORT extern "C" __declspec(dllexport)
#elif __linux__
	#define DLL_EXPORT extern "C" __attribute__((visibility("default")))
#else
	#define DLL_EXPORT
#endif

DLL_EXPORT int gmod13_open(lua_State* L)
{
	luaopen_bit32(L);

	return 0;
}

DLL_EXPORT int gmod13_close(lua_State* L)
{
	lua_pushnil(L);
	lua_setfield(L, LUA_GLOBALSINDEX, "bit32");

	return 0;
}