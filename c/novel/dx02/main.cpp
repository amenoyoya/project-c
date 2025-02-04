#define _WindowsSystem
#include "TextEngine.h"

int kmain(){
	DxWindow win("窓1号");
	TextEngine engine;
	DxString fps;
	
	win.open("たいとる");
	window2center(win);
	engine.open(&win, "default.txt");
	
	win.create_string(&fps);
	fps.pos(550, 450);
	while(Window::run(60)){
		win.begin_scene();
		engine.run();
		
		fps.regist(str_format("FPS:%03ld", Window::fps()));
		fps.draw();
	};
	return 0;
}
