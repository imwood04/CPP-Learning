//
// Created by imwood04 on 1/20/2023.
//

#include "iostream"
#include "roulette.h"
#include "mainMenu.h"


void roulette() {

    int randomBang = rand() % 6 + 1;
    if (randomBang == 1) {
        std::cout << "*Bang*" << std::endl;
        std::cout << "You are Dead!" << std::endl;
    } else {
        std::cout << "*Click*" << std::endl;
        std::cout << "You Live to see another Day" << std::endl;

        std::cout << "Press Enter to continue..." << std::endl;
        std::cin.get();
        std::cin.get();
    }
    mMenu();
}
