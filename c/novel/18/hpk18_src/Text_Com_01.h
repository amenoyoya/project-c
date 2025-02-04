//-----------------------------------------------------------------------------------------
//	Com_01.h	スクリプトコマンド：その１
//-----------------------------------------------------------------------------------------

//#include	"BasicTips.h"
//#include	"g_tool.h"
//#include	"main.h"
//#include	"TextEngine.h"
//#include	<windows.h>

//------------------------------------------------------------
//	遅延
//------------------------------------------------------------

int Com_delay();
	//遅延処理のファーストショット。タスク（ループ）を
	//回すための準備をしておしまい

int Com_delay_task();
	//遅延処理のタスク部分。Mainloop() から延々と呼ばれ続ける

//------------------------------------------------------------
//	改行
//------------------------------------------------------------

int	Com_linefeed();

//------------------------------------------------------------
//	カーソルブリンク
//------------------------------------------------------------

int	Com_cursor_blink();

int Com_cursor_blink_task();

int Com_cursor_blink_end();


//------------------------------------------------------------
//	終了
//------------------------------------------------------------

int	Com_halt();

int Com_halt_task();

int Com_halt_end();

//------------------------------------------------------------
//	改ページ
//------------------------------------------------------------

int Com_page();


//end of file

