namespace maze {
	struct menu {
		int level_count;
		int max_level;
		
		void print_game_info() {
		std::cout<<"The Maze"<<std::endl;
		std::cout<<"cross the barrier and win"<<std::endl;
		}
		
		void print_level_list() {
		for(int i = 1; i <= level_count; ++i){
			std::cout<<"level: "<<level_count<<std::endl;
		}
		
		}
		
		int select_level() {
//			 example:
//			 choose level to play: x
		}
		
	};
}
