#include "include/Player.hpp"

// Constructor
Player::Player(std::string name, int health, int xp)
    : m_name{name}, m_health{health}, m_xp {xp}
{
    std::cout << "Three args given constructor called.\n";
}