//
// Created by imwood04 on 1/19/2024.
//

#include "iostream"
#include "limits"
#include "mainMenu.h"
#include "programFunctions.h"
#include "math.h"
#include "roulette.h"
#include "messageSpam.h"

void mMenu() {
    int a;

    do {
        std::cout << "1. Multiply " << std::endl;
        std::cout << "2. Add " << std::endl;
        std::cout << "3. Rr" << std::endl;
        std::cout << "4. Message Spam" << std::endl;
        std::cout << "5. End Program" << std::endl;
        std::cout << "Choose an Option:  ";

        // Check if input is valid
        if (!(std::cin >> a)) {
            std::cin.clear();  // Clear error state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore invalid input
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
                std::cout << "Please Enter a Valid Option!" << std::endl;
        }
    } while (a < 1 || a > 5);
}
