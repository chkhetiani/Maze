
namespace maze {
	struct level {
		int number;

		int height;
		int width;

		position start_position;
		position goal_position;

		int move_count;

		std::string map[];	
	};
}
