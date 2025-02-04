#pragma once

#include "gv.h"

/* キャラクタークラス */
struct ch_t{
	bool flag, slow;		// フラグ// スローかどうか
	int cnt, power,			// カウンタ// パワー
		point, score,		// ポイント// スコア
		num, mutekicnt,		// 残機数// 無敵状態とカウント
		shot_mode, money,	// ショットモード//お金
		img;				// 画像インデックス
	double x, y;			// 座標
};

class CharObject: public GameObject {
	ch_t		ch;
	dximg_t		img_ch[2][12];
	
	void init(){
		ZeroMemory(&ch, sizeof(ch));
		ch.x = _field::maxw/2, ch.y = _field::maxh*3/4;
	}
	
	bool load(){
		if(!dximg_t::divopen(img_ch[0], "../dat/img/char/0.png",
			4, 3, 73, 73))
		{
			loaderrstr = "キャラクター画像の読み込みに失敗しました";
			return false;
		}
		return true;
	}
	
	void move(){
		ch.img = (++ch.cnt % 24)/6;
	}
	
	bool draw(){
		move();
		return img_ch[0][ch.img].draw(ch.x, ch.y);
	}
};
