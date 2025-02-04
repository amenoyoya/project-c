//----------------------------------------------------------------------
//	ちょー簡単ＲＰＧ（ＲＰＧ講座初級編）	メインヘッダ
//----------------------------------------------------------------------
//		作った人：ソフト屋 巣 http://softyasu.net/
//----------------------------------------------------------------------

#ifndef INCLUDE_MAIN_H
#define INCLUDE_MAIN_H

//----------------------------------------------------------------------
//	定数
//----------------------------------------------------------------------

//	ゲーム画面のサイズ
#define	SCREEN_X	640
#define	SCREEN_Y	480

//	ゲーム全体の状態遷移
enum GameState_t {
	GAME_STATE_TITLE,		//タイトル画面
	GAME_STATE_NAME,		//名前入力
	GAME_STATE_MAIN,		//ゲーム本編
	GAME_STATE_GAMEOVER,	//ゲームオーバー
	GAME_STATE_ENDING		//エンディング
};


//----------------------------------------------------------------------
//	構造体
//----------------------------------------------------------------------

//	ゲーム全体の管理構造体
typedef struct {
	int key[256];			//キーバッファ
	int AllKeyCount;		//全キーの押下カウント
	GameState_t	gameState;	//ゲーム全体の状態
	//	ここに追加の予定。
} MainData_t;


//----------------------------------------------------------------------
//	グローバル変数
//----------------------------------------------------------------------

//	ゲーム全体の管理データ
extern MainData_t g_MainData;







#endif /*INCLUDE_MAIN_H*/

