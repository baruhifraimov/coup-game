// baruh.ifraimov@gmail.com
#pragma once
#include <iostream>
#include "Player.hpp"

namespace coup{
class Governor : public Player {
	private:

	public:
		// Constructor
		Governor(Game& game, const std::string& name) : Player(game, name) {
			this->setRole(Role::GOVERNOR);
		}

		 /** * @brief Can *ONLY* disable tax action from other players
		  * 
		  * @param o The other player we want to disable his tax action
		  * @throw runtime_error when trying to block yourself
		  * @throw runtime_error when over 10 coins
		  */
		 void block_tax(Player& o);
	};
}