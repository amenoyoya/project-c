#include "../include/GV.h"

void graph_back00(){//通常背景
	SetDrawArea( 32 , 16 , 416 , 464 ) ;//描画可能エリアを設定
	DrawGraph(FX+dn.x,count%700+FY-700+dn.y,img_back[0],FALSE);
	DrawGraph(FX+dn.x,count%700+FY+dn.y    ,img_back[0],FALSE);
	SetDrawArea( 0, 0, 640, 480);//エリアを戻す
}

void graph_back01(){//スペルカード用背景
	SetDrawArea( 32 , 16 , 416 , 464 ) ;//描画可能エリアを設定

	DrawGraph(FX+dn.x,FY-count%480+dn.y,img_back[11],FALSE);
	DrawGraph(FX+dn.x,FY-count%480+480+dn.y,img_back[11],FALSE);
	DrawGraph(FX+dn.x,FY+dn.y,img_back[10],TRUE);

	SetDrawArea( 0, 0, 640, 480);//エリアを戻す
}

void graph_back_main(){
	//ボスがオンで、スペルカードなら
	if(boss.flag==1 && boss.back_knd[boss.knd]==1)
		graph_back01();
	else//それ以外
		graph_back00();
}