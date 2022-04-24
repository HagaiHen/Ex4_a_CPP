#include "Game.hpp"
#include <string>
using namespace std;
//using namespace coup;
#pragma once

namespace coup {

    class Player {

        public:
            void income();
            int coins();
            void tax();
            void foreign_aid();
            string role();
            void coup(Player p); 
    };
    
}