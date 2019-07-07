require "char"

-- ゲーム状態
game_state = 0

-- ゲーム実行
function run_game()
	-- ロード＆初期化
	if game_state == 0 then
		load_char()
		game_state = 100
	end
	
	-- 描画
	if game_state == 100 then
		draw_char()
	end
end
