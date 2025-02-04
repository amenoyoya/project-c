#define _WindowsSystem
#include "TextEngine.h"
#include <kiri/script.h>

int message(lua_State *L){
	Lua lua(L);
	
	engine_set_message(lua.tonum(1), lua.tostr(2));
	return 0;
}

int kmain(){
	Window win("窓1号");
	Lua lua;
	
	lua.regist("message", message);
	
	win.style = WS::gamewindow;
	win.main_func = [&lua](Window *win){
		win->average_fps();
		engine_run();	// エンジン実行
		lua.dofile("default.lua");
	};
	win.open("たいとる");
	engine_open(win.gdi());
	return win.run();
}
