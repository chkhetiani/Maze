#include <windows.h>

namespace maze {
	struct menu {
		int level_count;
		int max_level;
		
		void print_game_info() {
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 2);
			std::cout << "this is game of maze!" << std::endl;
			std::cout << "choose the level to play" << std::endl;
			std::cout << "and enjoy the game!" << std::endl;
		}
		
		void print_level_list() {
			std::cout << "levels:" << std::endl;
			for (int i = 1; i <= level_count; i++ ) {
				std::cout << i << ". ";
				
				if (max_level < i) {
					std::cout << "[locked]";
				}
				
				std::cout << std::endl;
			}
		}
		
		int select_level() {	
			int x = 0;
			while (x > max_level || x < 1) {
				std::cout << "choose level to play: ";
				std::cin >> x;	
			}
			
			return x;
		}
	};
}
