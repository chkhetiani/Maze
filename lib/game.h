#include "player.h"
#include "level.h"

namespace maze {
	struct game {
		player current_player;
		level curret_level;
		
		void draw_game_board() {
//			example
//          moves left: x
//			+---+
//			|---|
//			|- @|
//			|-  |
//			+--x+
		}
		
		char get_player_input() {
//			example
//			move with wasd
		}
		
		void make_move(char action) {
			// change player.current_position
			// change number of moves left
		}
		
		string is_game_over() {
			// examples
			// win
			// lose
			// playing
		}
	};
}
