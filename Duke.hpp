#include "Player.hpp"
#include "Assassin.hpp"
#pragma once
#include "Game.hpp"
#include <string>

namespace coup {

    class Duke : public Player {

        private:
            Game game;
            string s;
        
        public:
            void block(Assassin as);
            Duke (Game g, std::string s);

    };
    
}