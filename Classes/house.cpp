#include "house.hpp"
using namespace std;

House::House(Casino* c)
    : Hand(c, "Dealer") {}

void House::softSeventeen() {
    if (sum > 16)
        draw();
    else
        done = 1;
}