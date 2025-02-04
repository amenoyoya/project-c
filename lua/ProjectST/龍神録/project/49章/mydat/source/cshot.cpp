#include "../include/GV.h"

int cshot0num[2]  ={2,4};
int cshot0pos_x[4]={-10, 10,-30, 30};
int cshot0pos_y[4]={-30,-30,-10,-10};

#define OPTION_X 25
#define OPTION_Y 35
int option0num[2]  ={2,4};
double option0ang[4] = {-PI/2,-PI/2,-PI/2-PI/4,-PI/2+PI/4};//オプションの発射角度(49)

//自機ショットの登録可能番号を返す
int search_cshot(){
	for(int i=0;i<CSHOT_MAX;i++){
		if(cshot[i].flag==0)
			return i;
	}
	return -1;
}

//通常ショット登録
void ch0_shot_pattern(){
	int k;
	for(int i=0;i<cshot0num[ch.power<200?0:1];i++){
		if((k=search_cshot())!=-1){
			cshot[k].flag=1;
			cshot[k].cnt=0;
			cshot[k].angle=-PI/2;
			cshot[k].spd=20;
			cshot[k].x=ch.x+cshot0pos_x[i];
			cshot[k].y=ch.y+cshot0pos_y[i];
			cshot[k].power=23;
			cshot[k].knd=0;
			cshot[k].img=img_cshot[0];//画像番号代入(49)
		}
	}
	se_flag[2]=1;//発射音オン
	if(ch.power>=100){
		for(int i=0;i<(ch.power<300?2:4);i++){
			if((k=search_cshot())!=-1){
				cshot[k].flag=1;
				cshot[k].cnt=0;
				cshot[k].angle=option0ang[i];
				cshot[k].spd=20;
				cshot[k].x=option_bb[i%2].x;
				cshot[k].y=option_bb[i%2].y;
				cshot[k].power=20;
				cshot[k].knd=1;
				cshot[k].img=img_cshot[1];//画像番号代入(49)
			}
		}
	}
}

//低速通常ショット登録
void ch1_shot_pattern(){
	int k;
	for(int i=0;i<cshot0num[ch.power<200?0:1];i++){
		if((k=search_cshot())!=-1){
			cshot[k].flag=1;
			cshot[k].cnt=0;
			cshot[k].angle=-PI/2;
			cshot[k].spd=20;
			cshot[k].x=ch.x+cshot0pos_x[i]/3;//低速中なら位置を中心側へ
			cshot[k].y=ch.y+cshot0pos_y[i]/2;
			cshot[k].power=23;
			cshot[k].knd=0;
			cshot[k].img=img_cshot[0];//画像番号代入(49)
		}
	}
	se_flag[2]=1;
	if(ch.power>=100){
		for(int i=0;i<(ch.power<300?2:4);i++){
			if((k=search_cshot())!=-1){
				cshot[k].flag=1;
				cshot[k].cnt=0;
				cshot[k].angle=option0ang[i];
				cshot[k].spd=20;
				cshot[k].x=option_bb[i%2].x;
				cshot[k].y=option_bb[i%2].y;
				cshot[k].power=20;
				cshot[k].knd=1;
				cshot[k].img=img_cshot[1];//画像番号代入(49)
			}
		}
	}
}

//オプションのぼんぼん計算
void calc_option_bb(){
	if(ch.power>=100){//パワー100以上ならオプションをつける
		for(int i=0;i<2;i++){
			if(CheckStatePad(configpad.slow)==0){//低速移動中じゃないなら
				option_bb[i].x=ch.x+OPTION_X*(i==0 ? -1 : 1);
				option_bb[i].y=ch.y+OPTION_Y+sin(PI2/150*option_bb[i].cnt)*20;
			}
			else{
				option_bb[i].x=ch.x+OPTION_X/2*(i==0 ? -1 : 1);
				option_bb[i].y=ch.y+OPTION_Y/2;
			}
			option_bb[i].cnt++;
		}
		if(option_bb[0].flag==0)
			option_bb[0].flag = option_bb[1].flag = 1;
	}
	else{
		if(option_bb[0].flag==1)
			option_bb[0].flag = option_bb[1].flag = 0;
	}
}

//ショット登録部
void enter_shot(){
	//ショットボタンが押されていたら
	if(CheckStatePad(configpad.shot)>0){
		ch.shot_cnt++;
		if(ch.shot_cnt%3==0){//3カウントに1回
			if(CheckStatePad(configpad.slow)>0)//低速移動中なら
				ch1_shot_pattern();
			else
				ch0_shot_pattern();
		}
	}
	else
		ch.shot_cnt=0;
}

//ショットの移動計算
void calc_cshot(){
	for(int i=0;i<CSHOT_MAX;i++){
		if(cshot[i].flag==1){
			int dranx=(int)(cshot[i].spd+11/2),drany=(int)(cshot[i].spd+55/2);
			cshot[i].x+=cos(cshot[i].angle)*cshot[i].spd;
			cshot[i].y+=sin(cshot[i].angle)*cshot[i].spd;
			cshot[i].cnt++;
			if(cshot[i].x<-dranx || cshot[i].x>FMX+dranx ||
				cshot[i].y<-drany || cshot[i].y>FMY+drany)//画面から外れたら
				cshot[i].flag=0;
		}
	}
}

//キャラクタショットに関する関数
void cshot_main(){
	calc_option_bb();//オプションのぼんぼん計算(49)
	calc_cshot();//ショットの起動計算
	enter_shot();//ショット登録
}
