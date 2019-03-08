#ifndef __LTLS__
#define __LTLS__

#include <lua.h>
#include <lauxlib.h>

int ltls_newtls(lua_State* L);
int ltls_newctx(lua_State* L);

#endif
