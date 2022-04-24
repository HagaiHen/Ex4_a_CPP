#include "Game.hpp"
#include "Player.hpp"
// #pragma once
#include "Duke.hpp"
#include "Assassin.hpp"
#include <string>
#pragma once

namespace coup {

    class Ambassador : public Player {
        private:
            Game game;
            string s;
        public:
            Ambassador (Game g, string s); 
            void transfer (Duke du, Assassin as);           

    };
    
}