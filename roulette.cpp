//
// Created by imwood04 on 1/20/2023.
//

#include <iostream>
using namespace std;
#include "roulette.h"
#include "mainMenu.h"


void roulette() {

    int randomBang = rand() % 6 + 1;
    if (randomBang == 1) {
        cout << "*Bang*" << endl;
        cout << "You are Dead!" << endl;
    } else {
        cout << "*Click*" << endl;
        cout << "You Live to see another Day" << endl;

        cout << "Press Enter to continue..." << endl;
        cin.get();
        cin.get();
    }
    mMenu();
}
