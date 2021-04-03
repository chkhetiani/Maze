#include "position.h"
#include "menu.h"
#include "level.h"
#include "db.h"
#include "player.h"
#include "game.h"

namespace maze {
	struct controller {
		void start() {
			menu m;
			db d;
			player p;
			game g;
			
			while(true) {
				m.print_game_info();
				
				p.select_player_icon();
				
				m.max_level = d.get_max_level();
				m.level_count = 5;
				
				m.print_level_list();
				
				int selected_level = m.select_level();
				
				g.current_level = d.get_level(selected_level);
				
				p.current_position = g.current_level.start_position;
				g.current_player = p;
				
				std::string state = "playing";
				
				while(state == "playing") {
					g.draw_game_board();
					char action = g.get_player_input();
					g.make_move(action);
					state = g.is_game_over();
				}
				
				if (state == "win") {
					if (selected_level == m.max_level) {
						m.max_level++;
						d.write_max_level(m.max_level);
					}
					std::cout << "you win" << std::endl;
				}
				else {
					std::cout << "you lose" << std::endl;
				}
			}			
		}
	};
}



