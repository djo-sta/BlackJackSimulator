#include "hand.hpp"
#include "casino.hpp"
using namespace std;

Hand::Hand(Casino* c, string s)
    : casino(c),
      sum(0),
      name(s),
      done(0) {}

void Hand::draw() {
    int a = casino->dealCard() % 52;
    Card tmp;
    tmp.value = a % 13 + 2;
    tmp.sign = a / 13;
    cards.push_back(tmp);
    sum += tmp.value;
    if (sum > 21) checkAces();
    if (sum >= 21) done = 1;
}

void Hand::checkAces() {
    for (Card c : cards) {
        if (c.value == 11) {
            c.value = 1;
            sum -= 10;
            break;
        }
    }
}

void Hand::initialDraw() {
    sum = 0;
    cards.clear();
    draw();
    draw();
    if (sum == 21) done = 1;
}