#include <fstream>
namespace maze {
	
	struct db {		
		int get_max_level() {
			std::ifstream f("max_level.txt");
			int max_level;
			f >> max_level;
			f.close();
			return max_level;
		}
		
		void write_max_level(int max_level) {
			std::ofstream f("max_level.txt");
			f << max_level;
			f.close();
		}
		
		level get_level(int number) {
			std::string file_name = "levels/" + std::to_string(number) + ".txt";
			std::ifstream f(file_name);
			level l;
			f >> l.number;
			f >> l.height;
			f >> l.width;
			f >> l.start_position.x;
			f >> l.start_position.y;
			f >> l.goal_position.x;
			f >> l.goal_position.y;
			f >> l.move_count;
			
			std::string s;
			getline(f, s);
			
			for (int i = 0; i < l.height; i++) {
				getline(f, s);
				l.map[i] = s;
			}
			
			return l;
		}
	};
}
