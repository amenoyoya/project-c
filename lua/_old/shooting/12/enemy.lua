require "define"

-- 敵に関する構造体
enemy = csv2table("../dat/csv/story1.txt")

img_enemy = {}
for i=1,3 do img_enemy[i] = Spirits() end

-- 敵ロード
function load_enemy()
	img_enemy[1]:divopen("../dat/img/enemy/0.png", 3, 3, 32, 32, 0)
end

-- 移動パターンロード
require "enemy_pattern"

-- 敵データ登録
function enemy_enter()
	for i=1, table.maxn(enemy) do
		if enemy[i].entry == stage_count then	-- 登場の時間になったら
			enemy[i].flag = 1	-- 登場させる
		end
	end
end

-- 敵の行動制御
function enemy_act()
	for i=1, table.maxn(enemy) do
		if enemy[i].flag == 1 then
			active_enemy = i
			loadstring("enemy_pattern"..enemy[i].pattern.."()")()
			
			enemy[i].x = enemy[i].x + math.cos(enemy[i].ang)*enemy[i].sp;
			enemy[i].y = enemy[i].y + math.sin(enemy[i].ang)*enemy[i].sp;
			enemy[i].x = enemy[i].x + enemy[i].vx;
			enemy[i].y = enemy[i].y+ enemy[i].vy;
			enemy[i].cnt = enemy[i].cnt + 1
			enemy[i].img = enemy[i].muki*3+(enemy[i].cnt%18)/6
			-- 敵が画面から外れたら消す
			if(enemy[i].x < -50 or field.maxw+50 < enemy[i].x
				or enemy[i].y < -50 or field.maxh+50 < enemy[i].y)
			then
				enemy[i].flag = 0
			end
		end
	end
end

-- 敵描画
function draw_enemy()
	enemy_enter()
	enemy_act()
	for i=1, table.maxn(enemy) do
		if enemy[i].flag==1 then
			img_enemy[1]:pos(enemy[i].x, enemy[i].y)
			img_enemy[1]:divdraw(enemy[i].img)
		end
	end
end
