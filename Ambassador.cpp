#include "Game.hpp"
#include "Ambassador.hpp"
#include <string>
#include "Duke.hpp"
#include "Assassin.hpp"

using namespace std;

namespace coup {

    
    void coup::Ambassador::transfer (Duke du, Assassin as) {

    }

    Ambassador::Ambassador (Game g, string s) {
        this->game = g;
        this->s = s;
    }
}