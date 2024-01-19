//
// Created by imwood04 on 1/19/2024.
//
#include "iostream"
#include "mainMenu.h"
#include "messageSpam.h"

    void messageSpam(){
        int x = 5;
        bool compResult = x == 5;
        if (compResult) {
            std::cout << "==================================" << std::endl;
            std::cout << "messageSpam.cpp has loaded!" << std::endl;
            std::cout << "==================================" << std::endl;
        }
        for (int i = 0; i < 5; ++i) {
            const char *word = "i love anime and coding";
            std::cout << word << std::endl;
            if (i < 4) {
                std::cout << "Keep going!" << std::endl;
            }
        }
        std::cin.get();
        std::cin.get();
        mMenu();
}
