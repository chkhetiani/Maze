
namespace maze {
	struct player {
		position current_position;
		char icon;
		
		void select_player_icon() {
//			example
//			choose your icon: x
			std::cout << "choose your icon: ";
			std::cin >> icon;
		}
	};
}
