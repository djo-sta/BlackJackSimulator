#ifndef HOUSE_HPP
#define HOUSE_HPP
#include "hand.hpp"

class House : public Hand {
public:
    House(Casino* c);

    void softSeventeen();
};

#endif