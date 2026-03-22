#ifndef HAND_HPP
#define HAND_HPP
#include <vector>
#include <string>

class Card {
public:
    int value;
    int sign;
};

class Casino;

class Hand {
public:
    Hand(Casino* c, std::string s = "");

    ~Hand() = default;

    void initialDraw();

    void draw();

    void checkAces();

    std::vector<Card> cards;

    Casino* casino;

    int sum;

    std::string name;

    bool done;
};

#endif