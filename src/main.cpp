#include <iostream>
#include <string>
#include "include/Player.hpp"


int main ()
{

    // to force destructor demonstration, place code inside {}

    //Created on the stack 
    {
        Player player1; // No arg constructor
        player1.set_name("Slayer");
    } // destructor called here, when out of scope

    {
        Player player2; // No arg constructor
        player2.set_name("Darren");
        
        Player player3("Hero"); // String arg constructor
        player3.set_name("Hero");
        
        Player player4("Vivian", 99, 11); // Three arg constructor
        player4.set_name("Vivian");
    } // destructor called here in reverse order to constructor


    // Pointer to objects,created on the heap
    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");

    delete enemy; // destructor called here, deleted from heap
    delete level_boss; // destructor called here, deleted from heap

    return 0;
    
}
