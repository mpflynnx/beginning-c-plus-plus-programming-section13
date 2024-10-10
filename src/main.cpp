#include <iostream>
#include <string>
#include "include/Player.hpp"

void display_player_name(const Player &p)
{
  std::cout << p.get_name() << std::endl; // not allowed in object Player const
}

int main ()
{

  const Player villain {"Villain", 100, 55};

  Player hero {"Hero", 100, 15}; // not const Player object hero

  // villain.set_name("new name"); // not allowed ever
  std::cout << villain.get_name() << std::endl; // not allowed if object const and get_name method not const
  std::cout << hero.get_name() << std::endl; // Allowed if object not const

  display_player_name(villain);
  display_player_name(hero);

  return 0;
    
} // Destructors called in reverse order to constructors
  // Destructors will try to delete
