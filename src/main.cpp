#include <iostream>
#include <string>
#include "include/Player.hpp"


int main ()
{

    // Created on stack

    // Our single constructor can now handle all these
    Player empty{}; // None, 0, 0
    Player hero {"Hero"}; // Hero, 0, 0
    Player villain {"Villain", 50}; // Villain, 50 , 0
    Player Frank {"Frank", 100, 4}; // Frank, 100, 4

    // Created dynamically in the Heap
    Player *enemy = new Player("Enemy", 1000, 0); // Enemy, 1000, 0
    delete enemy;

    return 0;
    
} // Destructors called in reverse order to constructors
