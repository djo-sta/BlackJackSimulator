#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "hand.hpp"

class Player : public Hand {
public:
    Player(Casino* c, std::string s = "");

    void hit();

    void doubleDown();

    void stand();

    Card split();
};

#endif