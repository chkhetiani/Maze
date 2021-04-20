namespace maze {
	
	struct db {		
		int get_max_level() {
			return 1;
		}
		
		void write_max_level(int max_level) {
		}
		
		level get_level(int number) {
			level x;
			x.number = 1;
			x.height = 7;
			x.width = 10;
			x.start_position.x = 1;
			x.start_position.y = 1;
			x.goal_position.x = 4;
			x.goal_position.y = 9;
			x.move_count = 15;
			x.map[0] = "##########";
			x.map[1] = "#        #";
			x.map[2] = "#        #";
			x.map[3] = "#        #";
			x.map[4] = "#         ";
			x.map[5] = "#        #";
			x.map[6] = "##########";
			return x;
		}
	};
}
