#include <sayo/win32.h>

using namespace sayo;

Menu g_menu(Menu::Popup);

bool isDrag = false;
POINT dragPos;

inline int getIntSetting(_rfcSTR key){
	return getIniInt("吉里吉里ランチャー", key, 0, getModuleDir()+"\\krLauncher.ini");
}

inline bool setIntSetting(_rfcSTR key, int val){
	return setIniInt("吉里吉里ランチャー", key, val, getModuleDir()+"\\krLauncher.ini");
}

inline string getStrSetting(_rfcSTR key){
	return getIniStr("吉里吉里ランチャー", key, "", getModuleDir()+"\\krLauncher.ini");
}

_WndProc(wndproc){
	_Event(RBUTTONDOWN){
		POINT pt;
		
		GetCursorPos(&pt);
		if(10 == g_menu.show(hwnd, pt.x, pt.y)) PostQuitMessage(0);
	}
	
	_Event(LBUTTONDOWN){
		dragPos.x = LOWORD(lp), dragPos.y = HIWORD(lp);
		isDrag = true;
	}
	_Event(LBUTTONUP) isDrag = false;
	
	_Event(DROPFILES){
		vector<string> files;
		
		getDropFiles(files, wp);
		for(size_t i=0; i<files.size(); ++i){
			if(isDir(files[i])){
				string path = getStrSetting("吉里吉里PATH");
				
				if(!shellExec(path, files[i])){
					msgbox("吉里吉里を起動出来ませんでした\n"
						"[path] = "+path+"\n[target] = "+files[i],
						"吉里吉里ランチャーエラー", MB_OK|MB_ICONWARNING);
				}
			}
		}
	}
	
	_Event(DESTROY){
		RECT rc;
		
		GetWindowRect(hwnd, &rc);
		setIntSetting("X", rc.left);
		setIntSetting("Y", rc.top);
	}
	return _CallProc(baseWinProc);
}

int _WinMain(){
	TWindow mainWin("krLauncherWindow");
	Bitmap icon(getModuleDir()+"\\krkr.bmp");
	
	if(icon.failed()){
		return msgbox("krkr.bmpがありません！",
			"吉里吉里ランチャーエラー", MB_OK|MB_ICONWARNING);
	}
	g_menu.append(0, 10, "終了");
	
	mainWin.setProc(wndproc);
	mainWin.setStyle(WS_POPUP);
	mainWin.setExStyle(WS_EX_TOPMOST|WS_EX_ACCEPTFILES|WS_EX_TOOLWINDOW);
	mainWin.setColorKey(RGB(255, 255, 255));
	mainWin.open("吉里吉里ランチャー", getIntSetting("X"), getIntSetting("Y"), 64, 64);
	while(mainWin.proc()){
		mainWin.gdi().drawBmp(icon, 0, 0, 64, 64);
		
		if(isDrag){
			POINT pt;
			
			GetCursorPos(&pt);
			SetWindowPos(mainWin, HWND_TOP, pt.x-dragPos.x, pt.y-dragPos.y,
				0, 0, SWP_NOSIZE);
		}
	}
	return 0;
}
