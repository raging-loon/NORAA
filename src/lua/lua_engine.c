#include "lua_engine.h"
//TODO: vvvvv make this work with more versions of lua
#include <lua5.3/lua.h>
#include <lua5.3/lauxlib.h>
#include <lua5.3/lualib.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
struct l_script lua_scripts[MAX_LUA_SCRIPTS];


void run_hello_script(){
  lua_State * l = luaL_newstate();
  
  luaL_openlibs(l);
  // lua_setglobal(l,"y");

  if(luaL_dofile(l,"src/lua/scripts/hellotest.lua") == LUA_OK){
    lua_pop(l,lua_gettop(l));
  }
  lua_close(l);
}

void collect_scripts(){
  FILE * fp = fopen("/etc/vigil/lscript.conf","r");
  if(fp == NULL){
    printf("Failed to collect Lua scripts: /etc/vigil/lscript.conf not found.\n");
    exit(-1); // the engineer should have their stuff together
  }  
  size_t pos, len;
  char * line = NULL;
  while((pos = getline(&line,&len,fp)) != -1){
    //
  } 
}