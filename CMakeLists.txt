cmake_minimum_required(VERSION 3.24)
project(CPPTutorial)

set(CMAKE_CXX_STANDARD 17)

add_executable(CPPTutorial "OLD TEST STUFF/oldMain.cpp" "OLD TEST STUFF/math.cpp" "OLD TEST STUFF/math.h" "OLD TEST STUFF/roulette.cpp" "OLD TEST STUFF/roulette.h"
        "OLD TEST STUFF/mainMenu.cpp"
        "OLD TEST STUFF/mainMenu.h"
        "OLD TEST STUFF/messageSpam.cpp"
        "OLD TEST STUFF/messageSpam.h"
        "OLD TEST STUFF/programFunctions.cpp"
        "OLD TEST STUFF/programFunctions.h"
        ghStuff/getModuleBaseAddress.cpp
        ghStuff/getModuleBaseAddress.h
)
