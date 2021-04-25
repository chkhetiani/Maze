
namespace maze {
	struct player {
		position current_position;
		char icon;
		
		void select_player_icon() {
			std::cout<<"choose your own icon";
			std::cin>>icon;
		}
	};
}
