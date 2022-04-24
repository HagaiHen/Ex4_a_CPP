#include "Captain.hpp"
#include "Duke.hpp"
#include "Contessa.hpp"

namespace coup {
    void coup::Captain::block (Duke du) {

    }
    void coup::Captain::steal (Contessa con) {

    }
    Captain::Captain (Game g, string s) {
        this->game = g;
        this->s = s;
    }
}