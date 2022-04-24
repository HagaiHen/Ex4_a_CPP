#include "Assassin.hpp"
#include "Game.hpp"
#include <string>
using namespace std;

namespace coup {
    Assassin::Assassin (Game g, string s) {
        this->game = g;
        this->s = s;
    }
}