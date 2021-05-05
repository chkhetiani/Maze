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
				
			int x = 0;
			while (x > max_level || x < 1) {
				std::cout << "choose level to play: ";
				std::cin >> x;	
			}
			
			return x;
		}
	};
} // 20;30 samshabati 20 April
