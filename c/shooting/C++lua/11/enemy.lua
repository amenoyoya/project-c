require "enemy_order"

field = field_max()
enemy = enemies()

function enemy_pattern(i)
	if enemy[i].cnt == 0 then enemy[i].vy = 2 end	--下がって来る
 	if enemy[i].cnt == 60 then enemy[i].vy = 0 end	--止まる
 	
 	if enemy[i].cnt == 60+enemy[i].wait then --登録された時間だけ止まって
 		enemy[i].vy = -2	--上がっていく
 	end
end

--あいている敵番号を検索
function enemy_num_search()
	for i = 0, enemy_max() do
		--フラグの立っていないenemy番号を返す
		if enemy[i].flag == 0 then return i end
	end
	return -1	--全部埋まっていたらエラーを返す
end

function enemy_enter()
	for t = 1, table.maxn(enemy_order) do
		--現在の瞬間がオーダーの瞬間なら
		if enemy_order[t].cnt == stage_count() then
			local i = enemy_num_search()
			--敵番号が空いているなら登録
			if i ~= -1 then
				enemy[i].flag = 1
				enemy[i].cnt = 0
				enemy[i].pattern = enemy_order[t].pattern
				enemy[i].muki = 1
				enemy[i].knd = enemy_order[t].knd
				enemy[i].x = enemy_order[t].x
				enemy[i].y = enemy_order[t].y
				enemy[i].sp = enemy_order[t].sp
				enemy[i].bltime = enemy_order[t].bltime
				enemy[i].blknd = enemy_order[t].blknd
				enemy[i].col = enemy_order[t].col
				enemy[i].wait = enemy_order[t].wait
				enemy[i].hp = enemy_order[t].hp
				enemy[i].hp_max = enemy[i].hp
				enemy[i].vx = 0
				enemy[i].vy = 0
				enemy[i].ang = 0
			end
		end
	end
end
