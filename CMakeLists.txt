cmake_minimum_required(VERSION 3.24)
project(CPPTutorial)

set(CMAKE_CXX_STANDARD 17)

add_executable(CPPTutorial "Main.cpp" "math.cpp" "math.h" "roulette.cpp" "roulette.h"
        "mainMenu.cpp"
        "mainMenu.h"
        "messageSpam.cpp"
        "messageSpam.h"
        "programFunctions.cpp"
        "programFunctions.h"
        Main.cpp
)
