#include "include/Player.hpp"

// Constructor implementation
Player::Player(std::string name, int health, int xp)
    : m_name{name}, m_health{health}, m_xp {xp}
{
    std::cout << "Three args given constructor called.\n";
}

// Copy constructor implementation using initializer
// Player::Player(const Player &source)
//     : m_name{source.m_name}
//     , m_health{source.m_health}
//     , m_xp{source.m_xp}
//     {
//         std::cout << "Copy constructor -  made copy of: " << source.m_name << std::endl;
//     }

// Copy constructor implementation using constructor delegation
// same as compiler default copy constructor with output
// Here the constructor is called again.

Player::Player(const Player &source)
    : Player {source.m_name, source.m_health, source.m_xp}
    {
        std::cout << "Copy constructor -  made copy of: " << source.m_name << std::endl;
    }