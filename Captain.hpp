//#include "Player.hpp"
#include "Game.hpp"
#include "Contessa.hpp"
#include "Duke.hpp"

namespace coup {

    class Captain : public Player {

        private:
            Game game;
            string s;

        public:
            Captain (Game g, string s);
            void block (Duke du);
            void steal (Contessa con);

    };
    
}