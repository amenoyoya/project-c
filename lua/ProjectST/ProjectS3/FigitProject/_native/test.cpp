#include <figit/core.h>
#define _UseSource
#include <figit/irrSDL.h>

using namespace video;
using namespace scene;
using namespace figit;

float rx = 0, ry = 0; // 回転用

void makeScene(){
	sdl::setLighting(false);
	sdl::setCulling(false);
	//三角形作成
	sdl::VertexManager tri;
	tri.pushIndex(0)->pushIndex(1)->pushIndex(2);
	tri.push(0, 1, sdl::Color(255,0,0))->push(1, -1, sdl::Color(0,255,0))->push(-1, -1, sdl::Color(0,0,255));
	//左に2移動して描画
	sdl::loadIdentity();
	sdl::translate(sdl::Vector3f(-2,0,0));
	sdl::rotate(sdl::Vector3f(rx, 0, 0)); // x軸回転
	tri.drawTriangles(1);
	//四角形作成
	sdl::VertexManager rect;
	rect.pushIndex(0)->pushIndex(1)->pushIndex(2)->pushIndex(1)->pushIndex(3)->pushIndex(2);
	rect.push(-1, 1, sdl::Color(255,0,0))->push(1, 1, sdl::Color(0,255,0))
		->push(-1, -1, sdl::Color(0,0,255))->push(1, -1, sdl::Color(255,0,255));
	//右に2移動して描画
	sdl::loadIdentity();
	sdl::translate(sdl::Vector3f(2,0,0));
	sdl::rotate(sdl::Vector3f(0, ry, 0)); // y軸回転
	rect.drawTriangles(2);
	
	rx += 0.002f, ry += 0.001f;
}

__main(){
	sdl::init();
	auto win = sdl::Object::newWindow(sdl::Color(50, 0, 100));
	win->open("direct3d", -1, -1, 800, 600, sdl::Window::DIRECT3D9);
	ulong_t smgr  = sdl::getSceneManager();
	
	//カメラ設定
	sdl::addCamera(smgr, sdl::Vector3f(0,0,-1));
	while(sdl::pollEvent()){
		printf("%d\r", win->driver()->getFPS()); // non sleep 2800fps, sleep: 460fps
		sdl::getAllKeyStates();
		if(sdl::getKey(sdl::KEY_LALT) > 0 || sdl::getKey(sdl::KEY_RALT) > 0){
			if(sdl::getKey(sdl::KEY_F4) == 1) sdl::pushQuitEvent();
		}
		win->beginScene();
		makeScene();
		sdl::drawScene(smgr);
		win->endScene();
		if(sdl::getKey(sdl::KEY_Q) == 1){ // Alt+F4エミュレート
			sdl::sendKey(sdl::KEY_LALT, 2);
			sdl::sendKey(sdl::KEY_F4, 1);
		}
		sleep(1);
	}
	sdl::quit();
	return 0;
}
