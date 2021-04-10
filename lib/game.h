#include <conio.h>

namespace maze {
	struct game {
		player current_player;
		level current_level;
		// dabrkoleba #
		// mizani x
		
		void draw_game_board() {
			system("cls");
			std::cout << "moves left: " << current_level.move_count << std::endl;
			
			for (int i = 0; i < current_level.height; i++) {
				for (int j = 0; j < current_level.width; j++) {
					if (current_level.goal_position.x == i 
						&& current_level.goal_position.y == j ) {
						std::cout << 'x';
					}
					else if (current_player.current_position.x == i
						&& current_player.current_position.y == j) {
						std::cout << current_player.icon;
					}
					else {
						std::cout << current_level.map[i][j];	
					}
				}
				std::cout << std::endl;
			}
		}
		
		char get_player_input() {
			char move;
			
			while(move != 'w' && move != 'a' && move != 's' && move != 'd') {
				move = getch();
			}
			
			return move;
		}
		
		void make_move(char action) {
			
			position pre = current_player.current_position;
		
			if (action == 'w') {
				current_player.current_position.x--;
			}
			else if (action == 'a') {
				current_player.current_position.y--;
			}			
			else if (action == 's') {
				current_player.current_position.x++;
			}
			else { // d
				current_player.current_position.y++;
			}
			
			if (current_level.map[current_player.current_position.x][current_player.current_position.y] == '#') {
				current_player.current_position = pre;
			}
			else {
				current_level.move_count--;	
			}

			
			// change player.current_position
			// change number of moves left
		}
		
		std::string is_game_over() {
			return "playing";
			// examples
			// win
			// lose
			// playing
		}
	};
}
