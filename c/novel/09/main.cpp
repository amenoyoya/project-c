#define _WindowsSystem
#include "TextEngine.h"

int kmain(){
	Window win("窓1号");
	TextEngine engine;
	
	win.style = WS::gamewindow;
	win.main_func = [&engine](Window *win){
		win->average_fps();
		engine.run();
	};
	win.open("たいとる");
	engine.open(win.gdi(), "default.txt");
	return win.run();
}
