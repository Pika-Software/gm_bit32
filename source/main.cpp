#include <GarrysMod/Lua/Interface.h>

extern "C" {
	#define LUAI_INT32 int
	#include "bit32.h"
}

GMOD_MODULE_OPEN()
{
	luaopen_bit32(LUA->GetState());

	return 0;
}

GMOD_MODULE_CLOSE()
{
	LUA->PushNil();
	LUA->SetField(GarrysMod::Lua::INDEX_GLOBAL, "bit32");

	return 0;
}