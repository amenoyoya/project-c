#include "../include/GV.h"

#define ENEMY_RANGE_MAX 4
#define CSHOT_RANGE_MAX 2
#define BRANGE 40.0

extern int out_lazer();

//敵の当たり判定範囲
int enemy_range[ENEMY_RANGE_MAX]={16,30,16,50};
//自機ショットの当たり判定範囲
int cshot_range[CSHOT_RANGE_MAX]={6,};

//当たり判定
//ショットの座標:1  当たりを判定する物体:2
int out_judge(double x1, double y1, double x2, double y2,
              double range1, double range2, double spd1,double angle1){
    int j;
    double x=x1-x2;//敵と自機ショットとの距離
    double y=y1-y2;
    //敵の当たり判定と自機ショットの当たり判定の合計範囲
    double r=range1+range2;
    //中間を計算する必要があれば
    if(spd1>r){
        //１フレーム前にいた位置を格納する
        double pre_x=x1+cos(angle1+PI)*spd1;
        double pre_y=y1+sin(angle1+PI)*spd1;
        double px,py;
        for(j=0;j<spd1/r;j++){//進んだ分÷当たり判定分ループ
            px=pre_x-x2;
            py=pre_y-y2;
            if(px*px+py*py<r*r)
                return 1;
            pre_x+=cos(angle1)*r;
            pre_y+=sin(angle1)*r;
        }
    }
    if(x*x+y*y<r*r)//当たり判定内なら
        return 1;//当たり
    return 0;
}

//敵と自機ショットが当たったかどうかを判定する
int out_judge_cshot(int i,int s){
    if(cshot[i].cnt>0){//ショットの軌道が１度でも計算されていたら
        if(out_judge(cshot[i].x,cshot[i].y,enemy[s].x,enemy[s].y,
            cshot_range[cshot[i].knd],enemy_range[enemy[s].knd],
            cshot[i].spd,cshot[i].angle)){
                return 1;
        }
    }
    return 0;
}

//ボスと自機ショットが当たったかどうかを判定する
int out_judge_cshot_boss(int i){
    if(cshot[i].cnt>0){//ショットの軌道が１度でも計算されていたら
        if(out_judge(cshot[i].x,cshot[i].y,boss.x,boss.y,
            cshot_range[cshot[i].knd],BRANGE,cshot[i].spd,cshot[i].angle)){
                return 1;
        }
    }
    return 0;
}

//自機と敵ショットが当たったかどうかを判定する
int out_judge_enemyshot(int s,int n){
    if(shot[s].bullet[n].cnt>0){//ショットの軌道が１度でも計算されていたら
        if(out_judge(
            shot[s].bullet[n].x,shot[s].bullet[n].y,ch.x,ch.y,
            bullet_info[shot[s].bullet[n].knd].range,CRANGE,
            shot[s].bullet[n].spd,shot[s].bullet[n].angle
            )){
                return 1;
        }
    }
    return 0;
}

//自機とボスショットが当たったかどうかを判定する
int out_judge_bossshot(int n){
    if(boss_shot.bullet[n].cnt>0){//ショットの軌道が１度でも計算されていたら
        if(out_judge(
            boss_shot.bullet[n].x,boss_shot.bullet[n].y,ch.x,ch.y,
            bullet_info[boss_shot.bullet[n].knd].range,CRANGE,
            boss_shot.bullet[n].spd,boss_shot.bullet[n].angle
            )){
                return 1;
        }
    }
    return 0;
}

int serch_item(){
	for(int i=0;i<ITEM_MAX;i++)
		if(item[i].flag==0)
			return i;
	return -1;
}

//アイテム登録
//アイテム　0:小パワー 1:小点 2:弾点 3:小金 4:大パワー 5:大金
void enter_item(double x, double y, int item_n[], int num){//x,y,アイテムの種類,個数
	int k;
	double r[6]={0.6,0.6,1.0,0.6,1.0,1.0};//dat/img/itemの画像の拡大率
	for(int i=0;i<num;i++){//1つの敵から出るアイテムの最大数は6個
		if(item_n[i]!=-1){//エクセルで指定したアイテムが-1(なし)なら終り
			if((k=serch_item())!=-1){//登録出来る番号をさがす
				item[k].flag=1;
				item[k].v    =-3.5;	//速さ
				item[k].cnt  =0;
				item[k].state=0;
				item[k].x    =x;
				item[k].y    =y;
				if(i>0){//複数なら適当にちらばらせる
					item[k].x+=rang(40);
					item[k].y+=rang(40);
				}
				item[k].knd =item_n[i];//指定したアイテムを出現させる
				item[k].r   =r[item[k].knd];
			}
		}
	}
}

//敵から出るアイテム
void enter_enemy_item(int s){
	enter_item(enemy[s].x,enemy[s].y,enemy[s].item_n, sizeof(enemy[s].item_n)/sizeof(int));
}

//キャラから出るアイテム
void enter_char_item(){
	int item_n[4]={4,4,4,4};
//	enter_item(ch.x, ch.y, item_n, 4);//(b1)
}

extern void enter_del_effect(int);

//敵が死ぬかどうかの決定
void enemy_death_judge(int s){
    int i;
    se_flag[8]=1;//敵に当たった音
    if(enemy[s].hp<0){//敵のHPが０未満になったら
        enemy[s].flag=0;//敵を消滅させる
        se_flag[1]=1;//敵のピチュリ音
        enter_del_effect(s);
		enter_enemy_item(s);//敵sのアイテムを出現させる(39章)
        for(i=0;i<SHOT_MAX;i++){//敵総数分
            if(shot[i].flag!=0){//登録されている弾幕データがあれば
                if(s==shot[i].num){//その敵が登録した弾幕があれば
                    shot[i].flag=2;//それ以上弾幕を続けないフラグを立てる
                    break;
                }
            }
        }
    }
}

//sの敵にpower食らわす
void hit_enemy(int s,int power){
    enemy[s].hp-=power;//弾の持つパワー分HPを減らす
    enemy_death_judge(s);//敵が死ぬかどうかを決める
}

//ボスにpower食らわす
void hit_boss(int power){
    boss.hp-=power;//弾の持つパワー分HPを減らす
}


//自機ショットと敵との処理
void cshot_and_enemy(){
    int i,s;
    for(i=0;i<CSHOT_MAX;i++){//自機ショット総数
        if(cshot[i].flag>0){
            for(s=0;s<ENEMY_MAX;s++){//敵総数
                if(enemy[s].flag>0){
                    if(out_judge_cshot(i,s)){//自機ショットと敵が当たっていれば
                        cshot[i].flag=0;//その自機ショットを消す
                        hit_enemy(s,cshot[i].power);
                        break;
                    }
                }
            }
            //ボスが出現していて、描画しないフラグがオフで、ショット中なら
            if(boss.flag==1 && boss.graph_flag==0 && boss.state==2){
                if(out_judge_cshot_boss(i)){
                    cshot[i].flag=0;
                    hit_boss(cshot[i].power);
                }
            }
        }
    }
}

//敵ショットと自機との処理
void enemyshot_and_ch(){
    int s,n;
	if(ch.flag==0 && ch.mutekicnt==0 && out_lazer()==1){
        ch.cnt=0;
        ch.flag=1;
        se_flag[3]=1;
	}
    //雑魚敵のショット
    for(s=0;s<SHOT_MAX;s++){//敵ショット総数
        if(shot[s].flag>0){//そのショットが登録されていたら
            for(n=0;n<SHOT_BULLET_MAX;n++){//弾総数
                if(shot[s].bullet[n].flag==1){//弾が登録されていたら
					if(bom.flag!=0){
						shot[s].bullet[n].flag=0;
						continue;
					}
                    if(out_judge_enemyshot(s,n)==1){//自機にその弾が接触していたら
                        shot[s].bullet[n].flag=0;//弾をオフ
                        if(ch.flag==0 && ch.mutekicnt==0){
                            ch.cnt=0;
                            ch.flag=1;
                            se_flag[3]=1;
                        }
                    }
                }
            }
        }
    }
    //ボスのショット
    if(boss_shot.flag>0){//そのショットが登録されていたら
        for(n=0;n<BOSS_BULLET_MAX;n++){//弾総数
            if(boss_shot.bullet[n].flag==1){//弾が登録されていたら
				if(bom.flag!=0){
					boss_shot.bullet[n].flag=0;
					continue;
				}
                if(out_judge_bossshot(n)==1){//自機にその弾が接触していたら
                    boss_shot.bullet[n].flag=0;//弾をオフ
                    if(ch.flag==0 && ch.mutekicnt==0){
                        ch.cnt=0;
                        ch.flag=1;
                        se_flag[3]=1;
                    }
                }
            }
        }
    }
}

//ボムのダメージを敵に喰らわす
void cbom_and_enemy(){
    int s;
    if(bom.flag!=1)return;
    for(s=0;s<ENEMY_MAX;s++){//敵総数
        if(enemy[s].flag>0)//その敵がいれば
            hit_enemy(s,ch.power/20);//ダメージを与える
    }
    //ボスがいて、描画しないフラグがオフで、ショット中なら
    if(boss.flag==1 && boss.graph_flag==0 && boss.state==2)
        hit_boss(ch.power/20);//喰らわす
}

//アイテムとの接触
//アイテム　0:小パワー 1:小点 2:弾点 3:小金 4:大パワー 5:大金
void ch_and_item(){
	for(int i=0;i<ITEM_MAX;i++){
		if(item[i].flag>0){
			double x=item[i].x,y=item[i].y;
			if(kago.x-30<x && x<kago.x+30 && kago.y-15<y && y<kago.y-5){
				switch(item[i].knd){
					case 0:	kago.score+=1; break;
					case 4:	kago.score+=5;break;
				}
				item[i].flag=0;
				se_flag[35]=1;//(b1)
			}
/*
			if(x*x+y*y<ITEM_HIT_BOX*ITEM_HIT_BOX){
				switch(item[i].knd){
					case 0:	ch.power+=3; break;
					case 1:	ch.point+=1; break;
					case 2:	ch.score+=1; break;
					case 3:	ch.money+=1; break;
					case 4:	ch.power+=50;break;
					case 5:	ch.money+=10;break;
				}
				if(ch.power>500)ch.power=500;
				if(ch.point>9999)ch.point=9999;
				if(ch.money>999999)ch.money=999999;
				if(ch.score>999999999)ch.score=999999999;
				item[i].flag=0;
				se_flag[34]=1;
			}
*/
		}
	}
}

//当たり判定メイン
void out_main(){
    cbom_and_enemy();//敵にボムを喰らわせる
    cshot_and_enemy();//自機ショットと敵との処理
    enemyshot_and_ch();//敵ショットと自機との処理
	ch_and_item();//アイテム接触処理
}