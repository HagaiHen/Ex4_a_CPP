//#include "Game.hpp"

#include "Player.hpp"
#include "Assassin.hpp"
#pragma once


namespace coup {

    class Contessa : public Player {
        private:
            Game game;
            string s;

        public:
            Contessa (Game g, string s); 
            void block(Assassin as);            

    };
    
}