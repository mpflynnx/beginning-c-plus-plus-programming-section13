#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
#include <iostream>

// Declaration for PLAYER Class
class Player
{

private:
    // attributes
    std::string m_name;
    int m_health;
    int m_xp;

public:
    void set_name(std::string name)
    {
        m_name = name;
    }

    // Three Overloaded Constructors
    Player()
    {
        std::cout << "No args given constructor called.\n";
    }

    Player(std::string m_name)
    {
        std::cout << "String arg given constructor called.\n";
    }

    Player(std::string m_name, int m_health, int m_xp)
    {
        std::cout << "Three args given constructor called.\n";
    }

    // destructor
    ~Player()
    {
        std::cout << "Destructor called for " << m_name << std::endl;
    }
    
};   

#endif // _PLAYER_H_