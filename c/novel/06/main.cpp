#define _WindowsSystem
#include <kiri/win32.h>

int kmain(){
	GWindow win("窓1号");
	Bitmap back("back.bmp");
	
	win.style = WS::gamewindow;
	win.main_func = [&back](Window *pWindow){
		static GWindow *win = (GWindow *)pWindow;
		static char
			*str1 = "背景が付くと、雰囲気だけは随分ゲームらしくな",
			*str2 = "ってきましたね･･･（^^）余談ですが、ADVやノベ",
			*str3 = "ルは多少プログラムがへっぽこでも、奇麗なお姉",
			*str4 = "さんが画面に出るだけで許されます♪（爆笑）";
		
		win->begin_scene();
		win->gdi().draw_bmp(back, 0,0,640,480);
		win->gdi().text_out3D(20, 20,color_rgb(255,255,255),color_rgb(0,50,50),str1);
		win->gdi().text_out3D(20, 50,color_rgb(255,255,255),color_rgb(0,50,50),str2);
		win->gdi().text_out3D(20, 80,color_rgb(255,255,255),color_rgb(0,50,50),str3);
		win->gdi().text_out3D(20,110,color_rgb(255,255,255),color_rgb(0,50,50),str4);
		
		// FPS表示
		win->gdi().text_out3D(600,450,color_rgb(255,50,255),color_rgb(0,50,0),
			str_format("%03ld", win->fps()));
	};
	win.open("たいとる");
	win.font(25, 600, "ＭＳ 明朝");
	return win.run();
}
