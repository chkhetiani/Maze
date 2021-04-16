namespace maze {
	struct menu {
		int level_count;
		int max_level;
		
		void print_game_info() {	
		std::cout<<"The Maze"<<std::endl;
		std::cout<<"Cross the barrier and won"<<std::endl;
		}
		
		void print_level_list() {
		for(int i = 1; i <= level_count; ++i){
			std::cout<<"level: "<<i;
			if(max_level <= i)
			{
				std::cout<<"[locked]";
			}
		}
		
		}
		
		int select_level() {
			
			
		
	}
}; // 20;30 samshabati 20 April
