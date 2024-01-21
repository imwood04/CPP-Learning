//
// Created by imwood04 on 1/20/2023 - 1/18/2024.
//

#include <iostream>
using namespace std;
#include "math.h"
#include "mainMenu.h"


void multyply() {
    int a;
    int b;

    cout << "==================================" << endl;
    cout << "Multiplication Function!" << endl;
    cout << "==================================" << endl;

    cout << "Enter a number: " << endl;
    cin >> a;
    cout << "Enter a number: " << endl;
    cin >> b;

    cout << "Your answer is: " << a << " x " << b << " = " << a * b << endl;
    cin.get();
    cin.get();
    mMenu();
}

void addition() {
    int a;
    int b;

    std::cout << "==================================" << std::endl;
    std::cout << "Addition Function!" << std::endl;
    std::cout << "==================================" << std::endl;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> a;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> b;

    std::cout << "Your answer is: " << a << " + " << b << " = " << a + b << std::endl;
    std::cin.get();
    std::cin.get();
    mMenu();
}