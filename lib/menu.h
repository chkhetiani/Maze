namespace maze {
	struct menu {
		int level_count;
		int max_level;
		
		void print_game_info() {
		std::cout<<"The Maze"<<std::endl;
		std::cout<<"cross the barrier and win"<<std::endl;
		}
		
		void print_level_list() {
			std::cout<<"In maze we have a four difficult level"<<std::endl;
			
			std::cout<<"level1 [unlocked]"<<std::endl;
			std::cout<<"level2 [locked]"<<std::endl;
			std::cout<<"level3 [locked]"<<std::endl;
			std::cout<<"level4 [locked]"<<std::endl;
			
			std::cout<<"finish the level and unlock new one";
			
			
		}
		
		int select_level() {
//			 example:
//			 choose level to play: x
		}
		
	};
}
