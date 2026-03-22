#include <iostream>
#include <vector>
#include "Classes/casino.hpp"
#include "Classes/house.hpp"
#include "Classes/player.hpp"

using namespace std;

int main() {

  Casino mozzart;
  Player dante(&mozzart, "Dante");
  House dealer(&mozzart);

  int option = 2;
  //INIT SCREEN
  while(1) {
    switch(option) {
      case 0:
        //promena imena
        break;
      case 1:
        //promena uloga
        break;
      case 2:
        //igra
        break;
      case 3:
        //izlaz
        return 0;
      default:
        return 1;
    }
  }

  return 0;
  
}
