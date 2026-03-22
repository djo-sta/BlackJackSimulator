#ifndef CASINO_HPP
#define CASINO_HPP
#include <vector>

class Casino {
public:
    Casino();

    long money;

    long bet;

    void setMoney(int x);

    void changeBet(int x);

    int dealCard();

    std::vector<int> deck;

    int round;

    int i;
};


#endif