#include <iostream>
#include <string>
#include "include/Player.hpp"

void display_player(Player p)
{
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "XP: " << p.get_xp() << std::endl;
}

int main ()
{

    // Created on stack
    Player empty{}; // None, 0, 0

    display_player(empty); // None, 0, 0

    Player Frank {"Frank", 100, 4}; // Frank, 100, 4

    Player Francis {Frank}; // New Player Francis is shallow copy of Frank

    display_player(Francis); // Frank, 100, 4

    return 0;
    
} // Destructors called in reverse order to constructors
