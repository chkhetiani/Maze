namespace maze {
	struct game {
		player current_player;
		level current_level;
		// dabrkoleba #
		// mizani x
		
		void draw_game_board() {
//			example
//          moves left: x
//			######
//			#    #
//			##@# #
//			## # #
//			####x#
		}
		
		char get_player_input() {
//			example
//			move with wasd
		}
		
		void make_move(char action) {
			// change player.current_position
			// change number of moves left
		}
		
		std::string is_game_over() {
			
			if (current_player.current_position.x == current_level.goal_position.x
				&& current_player.current_position.y == current_level.goal_position.y) {
				return "win";
			}
			
			if (current_level.move_count == 0) {
				return "lose";
			}
			
			return "playing";
			
		}
	};
}
