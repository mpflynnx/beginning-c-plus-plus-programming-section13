#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
#include <iostream>

class Player
{

private:
    std::string m_name;
    int m_health;
    int m_xp;

public:
    void set_name(std::string name)
    {
        m_name = name;
    }

    std::string get_name()
    {
        return m_name;
    }

    int get_health()
    {
        return m_health;
    }

    int get_xp()
    {
        return m_xp;
    }

    Player(std::string name = "None", int health = 0, int xp = 0);
    
    // Copy constructors
    // compiler implicitly generates a copy constructor if there is not one.

    Player(const Player &source);
    

    // Explicitly request from the compiler a default copy constructor
    // Player(const Player& player) = default;

    // destructor
    ~Player()
    {
        std::cout << "Destructor called for " << m_name << std::endl;
    }
    
};   

#endif // _PLAYER_H_