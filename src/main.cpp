#include <iostream>
#include <string>
#include "include/Player.hpp"

void display_player_name(const Player &p)
{
  std::cout << p.get_name() << std::endl; // not allowed in object Player const
}

void display_active_players()
{
  std::cout << "Active players: " << Player::get_num_of_players()  << std::endl;
}

int main ()
{

  display_active_players(); // breakpoint here

  //debugger: add WATCH for Player::num_of_players

  Player hero("Hero"); // Test constructor increment for num_of_players

  {
    Player bob("Bob");
    display_active_players();
  } // destructure called test for decrement

  display_active_players();

  // Dynamically created on heap
  Player *enemy = new Player("Enemy", 99, 99);
  display_active_players();
  delete enemy;
  display_active_players();

  return 0;
    
} // Destructors called in reverse order to constructors
  // Destructors will try to delete
