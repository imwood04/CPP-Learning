//
// Created by imwood04 on 1/19/2024.
//

#include <iostream>
#include <limits>
using namespace std;
#include "mainMenu.h"
#include "programFunctions.h"
#include "math.h"
#include "roulette.h"
#include "messageSpam.h"

void mMenu() {
    int a;

    do {
        cout << "1. Multiply " << endl;
        cout << "2. Add " << endl;
        cout << "3. Rr" << endl;
        cout << "4. Message Spam" << endl;
        cout << "5. End Program" << endl;
        cout << "Choose an Option:  ";

        // Check if input is valid
        if (!(cin >> a)) {
            cin.clear();  // Clear error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
            a = -1;  // Set a to an invalid value to repeat the loop
        }

        switch (a) {
            case 1:
                multyply();
                break;
            case 2:
                addition();
                break;
            case 3:
                roulette();
                break;
            case 4:
                messageSpam();
                break;
            case 5:
                endP();
                break;
            default:
                cout << "Please Enter a Valid Option!" << endl;
        }
    } while (a < 1 || a > 5);
}
