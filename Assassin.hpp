#include "Player.hpp"
#pragma once


namespace coup {

    class Assassin : public Player {
        private:
            Game game;
            string s;
        
        public:
            Assassin (Game g, std::string s);      

    };
    
}