//
// Created by imwood04 on 1/19/2024.
//
#include <iostream>
using namespace std;
#include "mainMenu.h"
#include "messageSpam.h"

    void messageSpam(){
        int x = 5;
        bool compResult = x == 5;
        if (compResult) {
            cout << "==================================" << endl;
            cout << "messageSpam.cpp has loaded!" << endl;
            cout << "==================================" << endl;
        }
        for (int i = 0; i < 5; ++i) {
            const char *word = "i love anime and Coding";
            cout << word << endl;
            if (i < 4) {
                cout << "Keep going!" << endl;
            }
        }
        cin.get();
        cin.get();
        mMenu();
}
