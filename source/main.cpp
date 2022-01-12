#include <GarrysMod/Lua/Interface.h>
#include <GarrysMod/Lua/LuaInterface.h>

extern "C" {
	#define LUAI_INT32 int
	#include "bit32.h"
}

GMOD_MODULE_OPEN()
{
	lua_State* L = LUA->GetState();
	luaopen_bit32(L);

	return 0;
}

GMOD_MODULE_CLOSE()
{
	LUA->PushNil();
	LUA->SetField(GarrysMod::Lua::INDEX_GLOBAL, "bit32");

	return 0;
}