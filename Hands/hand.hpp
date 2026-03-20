#ifndef HAND_HPP
#define HAND_HPP
#include <vector>
#include <string>

class Hand {
public:
    Hand();

    ~Hand() = default;

    virtual void draw();

    virtual void nextRound();

    virtual void process() = 0;

    std::vector<int> cards;

    int sum;

    std::string name;

    bool done;
};

#endif