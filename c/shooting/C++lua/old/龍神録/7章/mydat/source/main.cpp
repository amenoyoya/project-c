#define GLOBAL_INSTANCE 
#include "../include/GV.h"

//ループで必ず行う３大処理
int ProcessLoop(){
	if(ProcessMessage()!=0)return -1;//プロセス処理がエラーなら-1を返す
	if(ClearDrawScreen()!=0)return -1;//画面クリア処理がエラーなら-1を返す
	GetHitKeyStateAll_2();//現在のキー入力処理を行う
	return 0;
}

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow){
    ChangeWindowMode(TRUE);//ウィンドウモード
    if(DxLib_Init() == -1 || SetDrawScreen( DX_SCREEN_BACK )!=0) return -1;//初期化と裏画面化

	while(ProcessLoop()==0){//メインループ
		switch(func_state){
			case 0:
				load();		//データロード
				first_ini();//初回の初期化
				func_state=100;
				break;
			case 100:
				calc_ch();
				graph_main();//描画メイン
				break;
			default:
				printfDx("不明なfunc_state\n");
				break;
		}

		if(CheckStateKey(KEY_INPUT_ESCAPE)==1)break;//エスケープが入力されたらブレイク
        ScreenFlip();//裏画面反映
    }

    DxLib_End();//ＤＸライブラリ終了処理
    return 0;
}
