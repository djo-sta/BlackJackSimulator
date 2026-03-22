#include "player.hpp"
#include "casino.hpp"
using namespace std;

Player::Player(Casino* c, string s)
    : Hand(c, s) {}

void Player::hit() {
    draw();
}

void Player::doubleDown() {
    draw();
    casino->bet * 2;
    if (casino->bet > casino->money) casino->bet = casino->money;
    done = 1;
}

void Player::stand() {
    done = 1;
}

Card Player::split() {
    Card tmp = cards.back();
    cards.pop_back();
    return tmp;
}