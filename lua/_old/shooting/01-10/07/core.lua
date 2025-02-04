require "char"
require "stage"

-- ゲーム状態
game_state = 0

-- ゲーム実行
function run_game()
	-- ロード
	if game_state == 0 then
		load_char(); load_board()
		game_state = 100
	end
	
	-- 初期化
	if game_state == 100 then
		init_char(); init_board()
		game_state = 200
	end
	
	-- 描画
	if game_state == 200 then
		draw_char(); draw_board()
	end
end
