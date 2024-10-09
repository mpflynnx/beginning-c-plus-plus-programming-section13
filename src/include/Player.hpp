#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
#include <iostream>

// Declaration for PLAYER Class
class Player
{

private:
    // attributes, order declared here is how initialisation will take place
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

    /*
    Reduce the number of constructors with one constructor 
    with default parameters
    
    Prototype here, see Player.hpp for design
    Use only when it makes sense too.
    Sometimes you want the user to explicitly define them all.
    */
    Player(std::string name = "None", int health = 0, int xp = 0);
    
    // destructor
    ~Player()
    {
        std::cout << "Destructor called for " << m_name << std::endl;
    }
    
};   

#endif // _PLAYER_H_