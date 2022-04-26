#include <string>
#include "doctest.h"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"

using namespace coup;

#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

TEST_CASE("Ambassador") {
    Game game_1{};
    Ambassador amb {game_1, "Hagai"};
    Ambassador amb2 {game_1, "Moshe"};
    amb.income();
    CHECK((amb.coins() == 1));
    amb.foreign_aid();
    CHECK((amb.coins() == 3));
    CHECK_THROWS(amb.coup(amb2));
    amb.foreign_aid();
    amb.foreign_aid();
    CHECK((amb.coins() == 7));
    CHECK_NOTHROW(amb.coup(amb2));
    CHECK((amb.role()=="Ambassador"));
    

}

TEST_CASE("Assassin") {
    Game game_1{};
    Assassin as {game_1, "Hagai"};
    Assassin as2 {game_1, "Moshe"};
    as.income();
    CHECK((as.coins() == 1));
    as.foreign_aid();
    CHECK((as.coins() == 3));
    CHECK_THROWS(as.coup(as2));
    as.foreign_aid();
    as.foreign_aid();
    CHECK((as.coins() == 7));
    CHECK_NOTHROW(as.coup(as2));
    CHECK((as.role()=="Assassin"));
    

}

TEST_CASE("Captain") {
    Game game_1{};
    Captain cap {game_1, "Hagai"};
    Captain cap2 {game_1, "Moshe"};
    cap.income();
    CHECK((cap.coins() == 1));
    cap.foreign_aid();
    CHECK((cap.coins() == 3));
    CHECK_THROWS(cap.coup(cap2));
    cap.foreign_aid();
    cap.foreign_aid();
    CHECK((cap.coins() == 7));
    CHECK_NOTHROW(cap.coup(cap2));
    CHECK((cap.role() == "Assassin"));
}

TEST_CASE("Contessa") {
    Game game_1{};
    Contessa con {game_1, "Hagai"};
    Contessa con2 {game_1, "Moshe"};
    con.income();
    CHECK((con.coins() == 1));
    con.foreign_aid();
    CHECK((con.coins() == 3));
    CHECK_THROWS(con.coup(con2));
    con.foreign_aid();
    con.foreign_aid();
    CHECK((con.coins() == 7));
    CHECK_NOTHROW(con.coup(con2)); //check if he dissapear from the list
    CHECK((con.role() == "Assassin"));
}

TEST_CASE("Contessa") {
    Game game_1{};
    Duke du {game_1, "Hagai"};
    Duke du2 {game_1, "Moshe"};
    du.income();
    CHECK((du.coins() == 1));
    du.foreign_aid();
    CHECK((du.coins() == 3));
    CHECK_THROWS(du.coup(du2));
    du.foreign_aid();
    du.foreign_aid();
    CHECK((du.coins() == 7));
    CHECK_NOTHROW(du.coup(du2)); //check if he dissapear from the list
    CHECK((du.role() == "Assassin"));
}


TEST_CASE("Contessa") {
    Game game_1{};
    Duke du {game_1, "Hagai"};
    Duke du2 {game_1, "Moshe"};
    du.income();
    CHECK((du.coins() == 1));
    du.foreign_aid();
    CHECK((du.coins() == 3));
    CHECK_THROWS(du.coup(du2));
    du.foreign_aid();
    du.foreign_aid();
    CHECK((du.coins() == 7));
    CHECK_NOTHROW(du.coup(du2)); //check if he dissapear from the list
    CHECK((du.role() == "Assassin"));
}