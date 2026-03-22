#include "casino.hpp"
#include <algorithm>
#include <random>
using namespace std;

Casino::Casino()
    : money(10000),
      bet(1000),
      i(0),
      deck(416),
      round(0)
{
    for (int i = 0; i < 416; ++i) {
        deck[i] = i;
    }
    random_device rd;
    mt19937 g(rd());
    shuffle(deck.begin(), deck.end(), g);
}


void Casino::setMoney(int x) {
    if (x > 2*10^6) {
        //ERROR HANDLE
    }
    else if (x < 0) {
        //ERROR HANDLE
    }
    else {
        money = x;
    }
}

void Casino::changeBet(int x) {
    if (x > money) {
        //ERROR HANDLE
    }
    else if (x < 1) {
        //ERROR HANDLE
    }
    else {
        bet = x;
    }
}

int Casino::dealCard() {
    if (i == 415) {
        return 0;
    }
    else {
        return deck[i++];
    }
}